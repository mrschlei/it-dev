<?php
$nid = intval($_GET['nid']);

//echo "http://safecomputing-dev.dsc.umich.edu/newsletter-json/$nid";
$raw = file_get_contents('http://it-dev.dsc.umich.edu/newsletter-json/'.$nid);
//var_dump($raw);
//here's something strange and interesting that happened to this data feed:
//http://stackoverflow.com/questions/689185/json-decode-returns-null-after-webservice-call
if (json_decode($raw, true) == NULL) {
	$raw = substr($raw, 3);
}
$issuename = "";
$i = 0;
$newsi = 0;
$inthenewsstories = array();
$sectionname = "";
$lastsectionname = "";
$toc = "";
$body = "";
$data = json_decode($raw, true);

foreach ($data['nodes'] as $node) {
	$sectionname = $node['node']['Section'];
	if ($i == 0) {
		$issuename = $node['node']['title'];
	}
	
	if ($sectionname !== "In the News") {
	
		//check if it's a new thing or the first thing and tc of b
		if ($sectionname !== $lastsectionname) {
			if ($i == 0) {
				$table = "";
			}
			//it's a new thing, but not the first thing, so end the previous table
			else {$table = "</td></tr></table>";}
		
			$body .= $table."<table class='section_content' border='0' cellpadding='0' cellspacing='0'><tr><td style='padding:0 20px 0 20px; font-size:10pt; font-family:Arial,Helvetica,Geneva,sans-serif; color:#333333; line-height:135%;'>";
		//$body .= $table."<table class='section_header' border='0' cellpadding='0' cellspacing='0' bgcolor='#".$color."'><tr><td><h2 style='margin:0; padding:10px 20px 10px 20px; background:#".$color."; font-size:14pt;font-family:Arial,Helvetica,Geneva,sans-serif; color:#ffffff; text-transform:uppercase; line-height:normal;'>".$sectionname."</h2></td></tr></table><table class='section_content' border='0' cellpadding='0' cellspacing='0'><tr><td style='padding:0 20px 0 20px; font-size:10pt; font-family:Arial,Helvetica,Geneva,sans-serif; color:#333333; line-height:135%;'>";
		}
	
	$thisoldname = str_replace(" ","-",$node['node']['title_1']);
	$thisoldname = str_replace("!","-",$thisoldname);
	$thisoldname = str_replace(",","-",$thisoldname);
	$thisoldname = str_replace("\"","-",$thisoldname);
	
	///sites/default/files/kelli-newsletter.jpg
	//$toc .= "<li><a href='#".$thisoldname."'>".$node['node']['title_1']."</a></li>";
	if ($sectionname == "Message from the VPIT-CIO") {
		$body .= "<a href='http://it-dev.dsc.umich.edu/executive-updates/story/".$node['node']['Nid']."'><img style='display:block;margin-top:24px;' src='http://it-dev.dsc.umich.edu/sites/default/files/kelli-newsletter.jpg' align='right' hspace='10' alt='Kelli Trossvig, U-M VPIT-CIO' width='150' /></a>";
	}

	$body .= "<a name='".$thisoldname."'></a><h2 style='margin-top:1em; color:#02284b; line-height:135%;'><a style='color:#02284b;text-decoration:none;' href='http://it-dev.dsc.umich.edu/executive-updates/story/".$node['node']['Nid']."'>".$node['node']['title_1']."</a></h2>";
	//var_dump($node['node']);
	if ($node['node']['field_story_image']!==NULL) {
		$thisoldalttext = $node['node']['field_story_image']['alt'];
		$thisoldalttext = str_replace("'","-",$thisoldalttext);
		$thisoldalttext = str_replace("\"","-",$thisoldalttext);
		$body .= "<a href='http://it-dev.dsc.umich.edu/executive-updates/story/".$node['node']['Nid']."'><img style='display:block;margin-left:0;margin-right:0;margin-bottom:12px;width:100%;max-width:706px;height:auto' src='".$node['node']['field_story_image']['src']."' align='right' hspace='10' alt='".$thisoldalttext."'/></a>";
	}


	
	$body .= str_replace("...","... <strong><a style='color:#02284b;text-decoration:none;' class='readmore' href='http://it-dev.dsc.umich.edu/executive-updates/story/".$node['node']['Nid']."'>Read More »</a></strong>",strip_tags($node['node']['body'],"<p><a><ul><li><ol><strong><em>"));
	
	
	$body .= "<div style='border-bottom:2px dotted #d7d7d7;'>&nbsp;</div>";
	}
	//if it's in the In the News section
	else {
		//if ($lastsectionname !== $sectionname) {
			//$body .=  "<h2 style='margin-top:1em; color:#02284b; line-height:135%;'>In the News</h2><div style='overflow:hidden;width: 100%;'>";
		//}
		
		//there's probably a better way to do this...
		if ($newsi == 0) {$bgcolor = "#18405a";}
		else if ($newsi == 1) {$bgcolor = "#0c5889";}
		else if ($newsi == 2) {$bgcolor = "#007acc";}
		else if ($newsi == 3) {$bgcolor = "#18405a";}
		else if ($newsi == 4) {$bgcolor = "#0c5889";}
		else if ($newsi == 5) {$bgcolor = "#007acc";}
		
		$thisstorybody = strip_tags($node['node']['body'],"<p><a><ul><li><ol><strong><em>");
		$thisstorybody = str_replace("<a","<a style='color:#fff;'",$thisstorybody);
		
		$thisstory = "<td style='width:28%;padding: 0px 16px 4px 16px;background:".$bgcolor.";color:#fff;vertical-align:top;' class='inthenews'>".$thisstorybody."</td>";
  		array_push($inthenewsstories, $thisstory);
		$newsi++;
		//if ($lastsectionname == $sectionname && $lastsectionname == "In the News") {$body .= "</div>";}
	}
	
	$lastsectionname = $node['node']['Section'];
	$i++;
}

	$arf = 0;
	foreach ($inthenewsstories as $story) {
		if ($arf == 0) {$body .=  "<h2 style='margin-top:1em; color:#02284b; line-height:135%;'>In the News</h2><table style='border-collapse:collapse;'><tr>";}
		$body .= $story;
		if ($arf == count($inthenewsstories)) {echo "</tr></table>";}
		$arf++;
	} 

?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8"/>
<meta name="viewport" content="width=device-width, initial-scale=1.0"/>
<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1"/>
<title>Executive Updates - <?php echo $issuename; ?></title>
<link href="https://fonts.googleapis.com/css?family=Roboto+Condensed" rel="stylesheet">
<style type="text/css">
body { background:#f4f3f2; color:#333333; }
td.message_banner img { width:100%; max-width:736px; height:auto !important; }
.readmore:hover { text-decoration:underline !important; }
.inthenews a { color:#ffffff !important; }
@media screen and (max-width:737px) {
	body { margin:0 !important; }
	.message_body { width:100% !important; }
	.header_image { width:100% !important; height:auto !important; }
	h1 { font-size:21pt !important; }
	h2 { font-size:19pt !important; }
	h3 { font-size:17pt !important; }
	p, li { font-size:15pt !important; line-height:normal !important; }
}
@media screen and (max-width:480px) {
	#timelyinfo { display:none; }
}
@media screen and (max-width:700px) {
	.inthenews { float:none !important; display:block !important; width:90% !important; padding-top:3px !important; padding-right:6px !important; min-height:2px !important; }
}
</style>
</head>
<body bgcolor="#f0f0f0" style="background:#f0f0f0; color:#333333;">

<center>

<div style="font-size:8pt; font-family:Arial,Helvetica,Geneva,sans-serif; color:#333333; line-height:135%;">

<table class="message_body" width="640" border="0" cellpadding="0" cellspacing="0" bgcolor="#ffffff">
<tr>
<td class="message_banner" style="padding:0px;" bgcolor="#00274c" colspan=2><img class="header_image" style="display:block; width:100%; max-width:736px; height:auto;" src="http://it-dev.dsc.umich.edu/sites/default/files/executive-updates-newsletter-banner.png" alt="Executive Updates"/></td>
</tr>
<tr bgcolor="#d4d4d4" style="color:#02284b;"><td><h1 style="margin:10px 0px 10px 20px;text-transform:uppercase;letter-spacing:-.02em;font-weight:normal;font-size:24pt;line-height: 125%;font-family: 'Roboto Condensed', sans-serif !important;">Executive Updates</h1></td><td style="text-align:right;"><p style="margin-right:20px;font-size:11pt;" id="timelyinfo">Issue 1 | <?php echo $issuename; ?></p></td></tr>
<tr>
<td class="message_content" align="left" valign="top" style="padding:0;font-size:11pt; font-family:Roboto,Arial,Helvetica,Geneva,sans-serif; color:#333333; line-height:135%;" colspan="2">

<?php echo $body; ?>

</td>
</tr>
</table>

<table class="section_content" border="0" cellpadding="0" cellspacing="0">
<tr>
<td style="padding:0 20px 0 20px; font-size:10pt; font-family:Roboto,Arial,Helvetica,Geneva,sans-serif; color:#333333; line-height:135%;">

<p><em>Please feel free to share this information with others at <nobr>U-M</nobr> who might find it interesting or helpful. This newsletter is sent to [SEND-TO GROUP(S)] and interested others at <nobr>U-M.</nobr> To subscribe, join the [MCOMMUNITY GROUP] group in MCommunity. Back issues are available online at <a href="http://it-dev.dsc.umich.edu/executive-updates/" target="_blank"><nobr>U-M</nobr> Executive Updates Newsletter</a>.</em></p>

</td>
</tr>
</table>

</td>
</tr>
<tr>
<td class="message_footer" align="center" valign="middle" style="padding:10px; background:#00274c; font-size:12pt; font-family:Roboto,Arial,Helvetica,Geneva,sans-serif; font-weight:bold; color:#ffffff; text-transform:uppercase; line-height:normal;" colspan="2"><a href="http://it-dev.dsc.umich.edu"><img src="http://it-dev.dsc.umich.edu/sites/all/themes/bootstrap_michit/logo.png" alt="Office of the Vice President for IT &amp; CIO" style="max-width:350px;height:auto;" /></a></td>
</tr>
</table>

</div>

</center>

</body>
</html>