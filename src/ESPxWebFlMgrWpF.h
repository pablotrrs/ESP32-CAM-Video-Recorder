#ifndef ESPxWebFlMgrWpF_h
#define ESPxWebFlMgrWpF_h

static const char ESPxWebFlMgrWpFormIntro[] PROGMEM = 
R"==x==(<form><textarea id="tect" rows="25" cols="80">)==x==";

static const char ESPxWebFlMgrWpFormExtro1[] PROGMEM = 
R"==x==(</textarea></form><button title="Save file" onclick="sved(')==x==";

static const char ESPxWebFlMgrWpFormExtro2[] PROGMEM = 
R"==x==(');" >Save</button>&nbsp;<button title="Abort editing" onclick="abed();">Abort editing</button>

<script id="info">document.getElementById('o3').innerHTML = "File:";</script>)==x==";

#endif