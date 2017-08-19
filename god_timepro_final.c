
//저희 팀은 분석이 완료된 함수들과 분석하여 알아낸 struct를 포함하고 있는 함수들만을 소스코드로 제출합니다. 감사합니다~~^0^

//=================struct====================

typedef struct get_si_arg2_{

   char name[128];
   char company[128];
   char url[128]; 
   char vendor[32];
   char type[32];


  }GET_SI_;

typedef struct filter_command_1_{
  char a[36];
  int b
  char c[16];
  int d;
  char f[2];
  char g[2];
  char h[8];
  char i[12];
  char j[2];
}FILTER_COMMAND_1_;


typedef struct filter_cammand_2_{
  char a[38];
  char b[7];
  char c[19];
}FILTER_COMMAND_2_;


typedef struct ddnsapi_read_config_{
  int a;
  char b[32];
  char c[1024];
  char d[164];
  char e[64];
  char f[64];
  char g[16];
  int h;
  int i;
  int j;
}DDNSAPI_READ_CONFIG_;



typedef struct write_snmp_conf_{
  char a;
  char b;
  char community[32];
  char sysname[32];
  char location[32];
  char contact[32];
  char desc[32];
}WRITE_SNMP_CONF_;


typedef struct read_portconfig_{
    char a[10];
    char b[10];
    char c[10];
    char d[10];
}READ_PORTCONFIG_;


typedef struct set_timeserver_{
  char a[64];
  char b[8];
  int c;
  int d;
  int e;
}SET_TIMESERVER_;



typedef struct read_pppoe_option_{
  char a[296];
  int b;
  int c;
  int d;
  int e;
  int f;
//end
}READ_PPPOE_OPTION_;



typedef struct delete_pf_rule_{
  char a[532];
  int b;
  int c;
}DELETE_PF_RULE_;



typedef struct add_gen_schedule_{
  char a[32];
  int b;
  int c;
  char d[8];
  int e;
  int f;
  int g;
  int h;
  int i;
  //end
}ADD_GEN_SCHEDULE_;


typedef struct read_snmp_conf_{
  int a;
  int b;
  char c[128];
  char d[128];
  char e[128];
  char f[128];
  char g[128];
  //end
}READ_SNMP_CONF_;



typedef struct ddnsapi_add_config_{
  int a;
  char b[1056];
  char c[64];
  char d[64];
  char e[64];
  char f[16];
  int g;
  int h;
  int i;
}DDNSAPI_ADD_CINFIG_;


typedef struct accesslist_set_read_config_{
  char a[32];
  int b;
  char c[32];
}ACCESSLIST_SET_READ_CONFIG_;



typedef struct accesslist_set_write_config_{
  char a[32];
  int b;
  char c[32];
}ACCESSLIST_SET_WRITE_CONFIG_;

//===============struct 포함 함수==============================

int sub_1C7CC()
{

  GET_SI *v6=(GET_SI_ *)(malloc(sizeof(get_si_)));

  char *v0; // r4@1
  const char *v1; // r5@1
  int v2; // r0@3
  char *v3; // r4@5
  int v4; // r0@7
  __int16 v7; // [sp+22h] [bp-DEh]@1
  char v8; // [sp+40h] [bp-C0h]@8
  char s1; // [sp+E0h] [bp-20h]@1

  get_si((int)"sw", (int)&v6);
  get_system_lang(&s1);
  printf("<TABLE border=0 valign=top CELLSPACING=0 CELLPADDING=0 WIDTH=100%%>");
  printf("<tr height=23px><td style=\"padding-left:5px;width:\" colspan=4>");
  printf("<select name=multilang_lang style='height: 20px; width: 200px;'>");
  v0 = "selected";
  v1 = (const char *)&v7;
  if ( strcmp(&s1, "auto") )
    v0 = "";
  v2 = sub_1A440("auto");
  printf("<option value='auto' %s>%s</option>", v0, v2);
  do
  {
    if ( *v1 )
    {
      v3 = "selected";
      if ( strcmp(&s1, v1) )
        v3 = "";
      v4 = sub_1A440(v1);
      printf("<option value='%s' %s>%s</option>", v1, v3, v4);
    }
    v1 += 5;
  }
  while ( v1 != &v8 );
  printf("</select>");
  printf("</td></tr>");
  return printf("</TABLE>");
}




int __fastcall sub_1E5E8(int a1)
{


  GET_SI_ *v58=(GET_SI_ *)(malloc(sizeof(get_si_)));

  int v1; // r5@1
  int v2; // r6@3
  int v3; // r0@5
  int v4; // r1@7
  const char *v5; // r0@7
  int v6; // r0@7
  int v7; // r1@8
  int v8; // r0@8
  int v9; // r0@8
  const char *v10; // r4@8
  int v11; // r1@8
  int v12; // r0@8
  int v13; // r0@8
  char *v14; // r4@8
  char *v15; // r1@9
  int v16; // r1@11
  int v17; // r0@11
  int v18; // r1@11
  int v19; // r0@13
  int v20; // r0@13
  int v21; // r1@13
  int v22; // r0@13
  int v23; // r1@13
  int v24; // r0@13
  void *v25; // r4@13
  int v26; // r1@13
  int v27; // r0@13
  int v28; // r1@13
  int v29; // r0@13
  int v30; // r1@13
  const char *v31; // r0@13
  int v32; // r0@13
  int v33; // r1@13
  int v34; // r0@13
  int v35; // r1@13
  int v36; // r1@14
  const char *v37; // r0@14
  int v38; // r1@14
  int v39; // r0@16
  int v40; // r0@17
  int v41; // r1@17
  int v42; // r0@17
  int v43; // r1@17
  int v44; // r0@17
  int v45; // r1@17
  int v46; // r0@17
  int v47; // r1@17
  int v48; // r0@17
  void *v49; // r4@17
  int v50; // r1@17
  int v51; // r0@17
  int v52; // r1@17
  int v53; // r0@17
  int v54; // r1@17
  const char *v55; // r0@17
  int v56; // r0@17
  int v59; // [sp+84h] [bp-434h]@13
  char v60; // [sp+104h] [bp-3B4h]@13
  char v61; // [sp+1C4h] [bp-2F4h]@13
  char dest; // [sp+2C4h] [bp-1F4h]@5
  char v63; // [sp+3C4h] [bp-F4h]@13
  int v64; // [sp+444h] [bp-74h]@8
  int v65; // [sp+484h] [bp-34h]@1
  int v66; // [sp+4A4h] [bp-14h]@1

  v1 = a1;
  v66 = 0;
  v2 = get_wan_ip("wan1", &v65) || get_default_gateway("br0", &v65);
  strcpy(&dest, "http://download.iptime.co.kr/online_upgrade/ipTIME_Firmware_Wizard(wired).exe");
  sub_133E4((int)"sysconf", (int)"swupgrade");
  puts("<table cellpadding=0px cellspacing=0px style='background-Color: #EEE; width: 641px;'>");
  puts("<tr><td>");
  puts("<table cellspacing=0px cellpadding=0px style='width: 640px; border-bottom: 1px solid #DDD;'>");
  v3 = get_intvalue(v1);
  if ( v3 && v66 )
  {
    str(v3);
    printf("<td colspan=2>");
    v5 = (const char *)pick_string_134F4(990, v4);
    printf(v5);
    v6 = puts("</td>");
    etr(v6);
  }
  printf("<tr style='background-color: #FFF; height: 24px;'>");
  v8 = pick_string_134F4(983, v7);
  v9 = printf("<td style='width:190px; padding-left: 5px;'>%s</td>", v8);
  v10 = (const char *)get_firmware_version2(v9);
  printf("<td>");
  printf(v10);
  printf("</td>");
  printf("</tr>");
  printf("<tr style='background-color: #F7F7F7; height: 24px;'>");
  v12 = pick_string_134F4(977, v11);
  printf("<td style='padding-left: 5px;'>%s</td>", v12);
  sub_1236C((int)&v64, 64);
  printf("<td>%s</td>", &v64);
  printf("</tr>");
  printf("<tr style='background-color: #FFF; height: 24px;'>");
  printf("<td colspan=2></td>");
  printf("</tr>");
  puts("</table></td></tr>");
  puts("<tr><td>");
  v13 = puts("<table cellspacing=0px cellpadding=0px>");
  str(v13);
  printf("<td style=\"height:20px; padding-top: 0px; padding-bottom: 2px; padding-left: 5px; padding-right: 10px;\">");
  v14 = "";
  puts("<form method=post action=timepro.cgi name=view_fm style='margin:0; padding: 5px 0;'>");
  if ( v2 )
    v15 = "checked";
  else
    v15 = "";
  printf(
    "<input type=radio id=firmup_online name=firmup value=online style='vertical-align: bottom;' onclick=\"FirmUpView();\" %s>",
    v15);
  v17 = pick_string_134F4(982, v16);
  printf("<label for=firmup_online style='margin-right: 35px;'> %s</label>", v17);
  if ( !v2 )
    v14 = "checked";
  v19 = pick_string_134F4(981, v18);
  printf(
    "<input type=radio id=firmup_manual name=firmup value=manual style='vertical-align: bottom;' onclick=\"FirmUpView();\""
    " %s><label for=firmup_manual> %s</label>",
    v14,
    v19);
  printf("</td>");
  printf("<input type=hidden name=status_code>");
  v20 = printf("</form>");
  etr(v20);
  printf("<tr id=online>");
  puts("<td align=left>");
  printf("<table style='width: 640px;'>");
  printf("<tr height=40 valign=top><td>");
  printf("<table cellpadding=0px cellspacing=0px style='background-color: #FFF; width: 620px; margin: 0 5px; min-height:52px;'><tr><td style='padding: 10px; height: 52px;'>");
  printf("<span ID=firmware_status style='color:gray;'></span>");
  printf("</td></tr></table>");
  printf("</td></tr>");
  printf("<tr height=40 valign=top><td align=right>");
  puts("<form method=post action=timepro.cgi name=firmup2_fm style='margin: 5px 0 0 0; border-width: 1px 0; border-color: #DDD; border-style: solid; padding: 5px;'>");
  v22 = pick_string_134F4(317, v21);
  printf(
    "<input type=button name=autoup id=cancel_bt style=\"display:none;\" value=\"%s\" onclick=\"CancelFirmUp();\">\n",
    v22);
  v24 = pick_string_134F4(316, v23);
  printf(
    "<input type=button name=autoup id=onlineupdate_bt value=\"%s\" style='color:gray;' onclick=\"StartFirmUp();\" disabled>\n",
    v24);
  puts("</form>");
  printf("</td></tr>");
  printf("<tr><td>");
  printf("<table cellpadding=0px cellspacing=0px style='margin-left: 5px;'>");
  v25 = sub_126C4();
  v27 = pick_string_134F4(991, v26);
  printf(
    "<tr style='height: 24px;'><td><img src='/%s/warning.gif' style='margin: 0 3px 1px 3px; vertical-align: middle;'><b s"
    "tyle='color: gray;'>%s</b></td></tr>",
    v25,
    v27);
  v29 = pick_string_134F4(314, v28);
  printf((const char *)&unk_659D9, v29);
  printf("<tr style='height: 18px;'><td><span style='color: gray;'>");
  v31 = (const char *)pick_string_134F4(315, v30);
  printf(v31, &dest);
  printf("</span></td></tr>");
  printf("</table>");
  printf("</td></tr>");
  printf("</table>");
  printf("<iframe name=\"sysconf_swupgrade_online_status\" src=\"timepro.cgi?tmenu=iframe&smenu=sysconf_swupgrade_online_status\" frameborder=no style='display:none;'></iframe>");
  v32 = printf("</td>");
  etr(v32);
  printf("<tr id=manual>");
  puts("<td align=left>");
  printf("<table style='width: 640px;'>");
  printf("<tr height=40 valign=top><td>");
  printf("<table id=manual_status_table cellpadding=0px cellspacing=0px style='margin: 0 5px; background-color: #FFF; width: 620px;'>");
  v34 = pick_string_134F4(984, v33);
  printf("<tr style='height: 18px;'><td style='color:gray; padding-left: 10px; padding-top: 10px;'>%s</td></tr>", v34);
  get_si((int)"pi", (int)&v58);
  snprintf2((int)&v61, 256, "%s", &v60);
  snprintf2((int)&v63, 128, "%s", &v59);
  if ( v61 )
  {
    printf("<tr style='height: 18px;'><td style='color:gray; padding-left: 10px;'>");
    v37 = (const char *)pick_string_134F4(985, v36);
    printf(v37, &v61, &v63);
    printf("</td></tr>");
  }
  else if ( *(_BYTE *)pick_string_134F4(985, v35) )
  {
    v39 = pick_string_134F4(985, v38);
    printf("<tr style='height: 18px;'><td style='color:gray; padding-left: 10px;'>%s</td></tr>", v39);
  }
  v40 = pick_string_134F4(986, v38);
  printf("<tr style='height: 18px;'><td style='color:gray; padding-left: 10px;'>%s</td></tr>", v40);
  v42 = pick_string_134F4(987, v41);
  printf(
    "<tr style='height: 18px;'><td style='color:gray; padding-left: 10px; padding-bottom: 10px;'>%s</td></tr>",
    v42);
  printf("</table>");
  printf("<table id=manual_upload_table cellpadding=0px cellspacing=0px style='margin: 0 5px; background-color: #FFF; width: 620px; display: none;'>");
  v44 = pick_string_134F4(331, v43);
  printf("<tr style='height: 18px;'><td style='color:gray; padding-left: 10px; padding-top: 10px;'>%s</td></tr>", v44);
  v46 = pick_string_134F4(338, v45);
  printf("<tr style='height: 18px;'><td style='color:gray; padding-left: 10px;'>%s</td></tr>", v46);
  printf("<tr style='height: 18px;'><td style='color:gray; padding-left: 10px;'></td></tr>");
  printf("<tr style='height: 18px;'><td style='color:gray; padding-left: 10px; padding-bottom: 10px; height: 26px;'></td></tr>");
  printf("</table>");
  printf("</td></tr>");
  printf("<tr><td>");
  printf("<iframe name=\"sysconf_swupgrade_manual_file_form\" src=\"timepro.cgi?tmenu=iframe&smenu=sysconf_swupgrade_manual_status\" frameborder=no scrolling='no' noresize style='width:100%%; height:39px;'></iframe>");
  puts("<form name='sysconf_swupgrade_manual_file_form' style='margin: 5px 0 0 0; padding: 5px; border-width: 1px 0; border-color: #DDD; border-style: solid; display: none;'>");
  printf("<input type=file name=upgrade size=30 maxlength=120 style='width: 430px; font-size: 12px; color:gray;' disabled>");
  v48 = pick_string_134F4(979, v47);
  printf(
    "<input type=button name=upload_submit value=\"%s\" style='float: right; font-size: 12px; color: gray;' disabled>\n",
    v48);
  puts("</form>");
  printf("</td></tr>");
  printf("<tr><td>");
  printf("<table cellpadding=0px cellspacing=0px style='margin-left: 5px;'>");
  v49 = sub_126C4();
  v51 = pick_string_134F4(991, v50);
  printf(
    "<tr style='height: 24px;'><td><img src='/%s/warning.gif' style='margin: 0 3px 1px 3px; vertical-align: middle;'><b s"
    "tyle='color: gray;'>%s</b></td></tr>",
    v49,
    v51);
  v53 = pick_string_134F4(314, v52);
  printf((const char *)&unk_659D9, v53);
  printf("<tr style='height: 18px;'><td><span style='color: gray;'>");
  v55 = (const char *)pick_string_134F4(315, v54);
  printf(v55, &dest);
  printf("</span></td></tr>");
  printf("</table>");
  printf("</td></tr>");
  printf("</table>");
  v56 = printf("</td>");
  etr(v56);
  puts("</table></td></tr>");
  printf("</table>");
  puts("<script>");
  puts("FirmUpView();");
  return puts("</script>");
}


int __fastcall sub_36B3C(int a1)
{
  WRITE_PORTCONFIG_ *v29 = (WRITE_PORTCONFIG_ *)(malloc(sizeof(write_portconfig_)));
  
  READ_PORTCONFIG_ *v29=(READ_PORTCONFIG_ *)(malloc(sizeof(read_portconfig_)));

  GET_SI_ *v23=(GET_SI_ *)(malloc(sizeof(get_si_)));
  GET_SI_ *v25=(GET_SI_ *)(malloc(sizeof(get_si_)));

  int v1; // r7@1
  unsigned int v2; // r0@3
  int v3; // r5@4
  const char *v4; // r1@13
  int v5; // r5@17
  int v6; // r1@17
  int v7; // r0@17
  signed int v8; // r4@17
  int v9; // r1@17
  int v10; // r0@17
  int v11; // r1@17
  int v12; // r0@17
  int v13; // r1@17
  int v14; // r0@17
  int v15; // r1@17
  int v16; // r0@17
  int v17; // r0@17
  bool v18; // nf@19
  unsigned __int8 v19; // vf@19
  int v20; // r0@20
  int v21; // r4@20
  int v24; // [sp+27Ch] [bp-55Ch]@12
  int v26; // [sp+628h] [bp-1B0h]@17
  __int16 v27; // [sp+762h] [bp-76h]@4
  __int16 v28; // [sp+782h] [bp-56h]@1
  __int16 v29; // [sp+7A2h] [bp-36h]@4
  int v30; // [sp+7ACh] [bp-2Ch]@7
  __int16 v31; // [sp+7B6h] [bp-22h]@9

  v1 = a1;
  if ( get_value(a1, "act", &v28, 32) && !strcmp((const char *)&v28, "setport") )
  {
    v2 = get_value(v1, "port", &v28, 32);
    if ( v2 )
    {
      v3 = atoi((const char *)&v28);
      read_portconfig(v3, &v29);
      sprintf((char *)&v27, "mode%d", v3);
      if ( get_value(v1, &v27, &v28, 32) )
        sf_strncpy(&v29, &v28, 10);
      sprintf((char *)&v27, "speed%d", v3);
      if ( get_value(v1, &v27, &v28, 32) )
        sf_strncpy(&v30, &v28, 10);
      if ( !strcmp((const char *)&v30, "1000") )
      {
        strcpy((char *)&v31, "full");
      }
      else
      {
        sprintf((char *)&v27, "duplex%d", v3);
        if ( get_value(v1, &v27, &v28, 32) )
          sf_strncpy(&v31, &v28, 10);
      }
      set_port_config(v3, &v29);
      write_portconfig(v3, &v29);
      get_si((int)"hw", (int)&v23);
      if ( v3 > v24 )
        v4 = "%s: WAN%d(%s,%s)";
      else
        v4 = "%s: LAN %d(%s,%s)";
      syslog_msg(1, v4);
      v2 = sleep(2u);
    }
    signal_save(v2);
  }
  get_si((int)"hw", (int)&v25);
  v5 = v26;
  puts("<form method=get action=timepro.cgi name=linksetup_fm>");
  puts("<input type=hidden name=tmenu value=trafficconf>");
  puts("<input type=hidden name=smenu value=linksetup>");
  puts("<input type=hidden name=act value=>");
  puts("<input type=hidden name=port value=>");
  puts("<tr><td>");
  printf("<table class='list_table' cellspacing=0px cellpadding=0px style='width: 100%%;'>\n");
  printf("<tr class='title'>");
  v7 = pick_string_134F4(788, v6);
  v8 = 0;
  printf("<td style='width: 55px;'>%s</td>", v7);
  v10 = pick_string_134F4(673, v9);
  printf("<td colspan=3>%s</td>", v10);
  v12 = pick_string_134F4(897, v11);
  printf("<td>%s</td>", v12);
  v14 = pick_string_134F4(686, v13);
  printf("<td>%s</td>", v14);
  v16 = pick_string_134F4(672, v15);
  printf("<td>%s</td>", v16);
  v17 = printf("<td></td>");
  etr(v17);
  sub_367DC(65537);
  while ( 1 )
  {
    v19 = __OFSUB__(v8, v5);
    v18 = v8++ - v5 < 0;
    if ( !(v18 ^ v19) )
      break;
    sub_367DC(v8);
  }
  printf("<tr style='height: 1px;'>");
  printf("<td colspan=8 style='border-top: 1px solid #CCC;'></td>");
  v20 = printf("</tr>");
  print_end_content_table(v20);
  puts("</form>");
  puts("<script>");
  v21 = 0;
  while ( 1 )
  {
    v19 = __OFSUB__(v21, v5);
    v18 = v21++ - v5 < 0;
    if ( !(v18 ^ v19) )
      break;
    printf("SelectLinkMode(%d);\n");
  }
  printf("SelectLinkMode(%d);\n", 65537);
  return puts("</script>");
}



int sub_3714C()
{
  GET_SI_ *v16=(GET_SI_ *)(malloc(sizeof(get_si_)));

  int v0; // r6@1
  int v1; // r1@1
  int v2; // r0@1
  signed int v3; // r4@1
  _BYTE *v4; // r0@2
  signed int v5; // r4@5
  _BYTE *v6; // r0@6
  int v7; // r0@9
  signed int i; // r5@9
  signed int v9; // r4@10
  _BYTE *v10; // r0@11
  int v11; // r1@16
  int v12; // r0@16
  int v13; // r0@16
  int v14; // r0@16
  int v17; // [sp+278h] [bp-1C0h]@1
  char s; // [sp+3B0h] [bp-88h]@5

  get_si((int)"hw", (int)&v16);
  v0 = v17;
  puts("<form method=get action=timepro.cgi name=linkstat_fm>");
  puts("<input type=hidden name=tmenu value=trafficconf>");
  puts("<input type=hidden name=smenu value=linkstat>");
  puts("<input type=hidden name=act value=>");
  puts("<tr><td>");
  printf("<table cellspacing=0px cellpadding=0px style='width: 100%%;'>\n");
  printf("<tr class='title'>");
  v2 = pick_string_134F4(788, v1);
  v3 = -1;
  printf("<td style='width: 25px; padding: 0 3px;'>%s</td>", v2);
  do
  {
    v4 = (_BYTE *)sub_37058(++v3);
    if ( *v4 )
      v4 = (_BYTE *)printf("<td style='padding: 0 3px; font-size:9px'>%s</td>", v4);
  }
  while ( v3 != 29 );
  etr(v4);
  memset(&s, 0, 0x78u);
  get_eport_stat(65537, &s);
  printf("<tr class='list' style='background-color: #FFF;'>");
  printf("<td style='width: 25px; padding: 0 3px;'>%s</td>", "WAN");
  v5 = -1;
  do
  {
    v6 = (_BYTE *)sub_37058(++v5);
    if ( *v6 )
    {
      sub_36F78(v5, &s);
      v6 = (_BYTE *)printf("<td style='padding: 0 3px; font-size:9px'>%llu</td>");
    }
  }
  while ( v5 != 29 );
  v7 = etr(v6);
  for ( i = 1; i <= v0; ++i )
  {
    memset(&s, 0, 0x78u);
    get_eport_stat(i, &s);
    printf("<tr class='list' style='background-color: #%s'>");
    printf("<td style='width: 25px; padding: 0 3px;'>%d</td>", i);
    v9 = -1;
    do
    {
      v10 = (_BYTE *)sub_37058(++v9);
      if ( *v10 )
      {
        sub_36F78(v9, &s);
        v10 = (_BYTE *)printf("<td style='padding: 0 3px; font-size:9px'>%llu</td>");
      }
    }
    while ( v9 != 29 );
    v7 = etr(v10);
  }
  str(v7);
  printf("<td colspan=%d align=right style='border-top: 1px solid #CCC;'>\n", 16);
  v12 = pick_string_134F4(671, v11);
  printf("<input type=button name=clear_sub value=\" %s \" style='margin: 5px;' onclick=\"ClearLinkStat();\">\n", v12);
  v13 = printf("</td>");
  v14 = etr(v13);
  print_end_content_table(v14);
  return printf("</form>");
}


int sub_4110C()
{
  GET_SI_ *v19=(GET_SI_ *)(malloc(sizeof(get_si_))); 
  int v0; // r7@1
  int v1; // r0@1
  int v2; // r1@1
  int v3; // r0@1
  int v4; // r1@1
  int v5; // r0@1
  int v6; // r0@1
  int v7; // r0@1
  int v8; // r5@1
  int v9; // r6@2
  signed int v10; // r4@4
  int v11; // r8@4
  int v12; // r0@12
  bool v13; // zf@13
  bool v14; // nf@13
  unsigned __int8 v15; // vf@13
  int v16; // r0@14
  int v17; // r0@14
  int result; // r0@14
  // [sp+Ch] [bp-3D4h]@1
  int v20; // [sp+280h] [bp-160h]@1
  int v21; // [sp+3B8h] [bp-28h]@1
  int v22; // [sp+3BCh] [bp-24h]@1

  get_si((int)"hw", (int)&v19);
  v0 = v20;
  v21 = 0;
  v22 = 0;
  genconfig_read_file("/etc/vlan_config", &v21);
  puts("<tr><td>");
  v1 = printf("<table cellspacing=0px cellpadding=0px style='width:100%%'>\n");
  str(v1);
  printf("<td align=left style=\"padding:0px 3px 0px 3px;\" colspan=%d>", 2);
  v3 = pick_string_134F4(118, v2);
  printf("<input type=button value=\"%s\" name=\"del_bt\" style='margin:4px;' onclick=\"removeVLAN()\">\n", v3);
  printf("</td>");
  printf("<td align=right style=\"padding:0px 3px 0px 3px;\" colspan=%d>", v0);
  v5 = pick_string_134F4(1150, v4);
  printf("<font color='gray'>%s", v5);
  v6 = printf("</td>");
  etr(v6);
  printf("<tr style='height:1px;'>");
  printf("<td colspan=%d style='border-bottom: 1px solid #CCC;'>", v0 + 2);
  v7 = printf("</td>");
  etr(v7);
  v8 = v21;
  if ( v21 )
  {
    v9 = 0;
    do
    {
      ++v9;
      v10 = 1;
      v11 = atoi((const char *)(v8 + 64));
      printf("<tr style='background-color:#%s'>");
      printf("<td width=10 style=\"padding:0px 3px 0px 3px;\">");
      printf("<input type=checkbox name=vdel value=%s>", v8);
      printf("</td>");
      printf("<td width=130 style=\"padding:0px 3px 0px 3px;\">");
      printf("<a href=\"#\" onclick=\"modifyVLAN('%s','0x%x', %d)\">%s</a>", v8, v11, v0, v8);
      printf("</td>");
      while ( v10 <= v0 )
      {
        printf("<td style=\"padding:0px 3px 0px 3px;\" align=left>");
        if ( (v11 >> (v10 - 1)) & 1 )
          printf("%2d", v10);
        else
          printf("--", v10);
        printf("</td>");
        ++v10;
      }
      etr("<td style=\"padding:0px 3px 0px 3px;\" align=left>");
      v8 = *(_DWORD *)(v8 + 248);
    }
    while ( v8 );
  }
  else
  {
    v9 = 0;
  }
  while ( 1 )
  {
    v15 = __OFSUB__(v9, 14);
    v13 = v9 == 14;
    v14 = v9++ - 14 < 0;
    if ( !((unsigned __int8)(v14 ^ v15) | v13) )
      break;
    printf("<tr style='background-color:#%s'>");
    printf("<td width=10 style=\"padding:0px 3px 0px 3px;\">");
    printf("</td>");
    printf("<td colspan=%d width=130 style=\"padding:0px 3px 0px 3px;\">", v0 + 1);
    v12 = printf("</td>");
    etr(v12);
  }
  printf("<tr style='height:1px;'>");
  printf("<td colspan=%d style='border-bottom: 1px solid #CCC;'>", v0 + 2);
  v16 = printf("</td>");
  v17 = etr(v16);
  result = print_end_content_table(v17);
  if ( v21 )
    result = genconfig_free_ll(&v21);
  return result;
}

int sub_41390()
{

  GET_SI_ *v22=(GET_SI_ *)(malloc(sizeof(get_si_)));
  int v0; // r5@1
  int i; // r4@1
  int v2; // r0@3
  int v3; // r0@4
  int v4; // r1@4
  int v5; // r0@4
  signed int v6; // r4@4
  int v7; // r0@4
  int v8; // r0@4
  bool v9; // zf@6
  bool v10; // nf@6
  unsigned __int8 v11; // vf@6
  int v12; // r0@7
  signed int v13; // r4@7
  int v14; // r0@10
  int v15; // r1@10
  int v16; // r0@10
  int v17; // r1@10
  int v18; // r0@10
  int v19; // r0@10
  int v20; // r0@10
  // [sp+4h] [bp-3C4h]@1
  int v23; // [sp+278h] [bp-150h]@1
  int v24; // [sp+3B0h] [bp-18h]@1
  int v25; // [sp+3B4h] [bp-14h]@1

  get_si((int)"hw", (int)&v22);
  v0 = v23;
  puts("<form method=get action=timepro.cgi name=vlan_fm>");
  puts("<input type=hidden name=tmenu value=switchconf>");
  puts("<input type=hidden name=smenu value=vlan>");
  puts("<input type=hidden name=act value=>");
  puts("<input type=hidden name=dellist value=>");
  puts("<input type=hidden name=trunkname value='None'>");
  puts("<input type=hidden name=trunkmap value=0>");
  v25 = 0;
  v24 = 0;
  genconfig_read_file(&unk_89DA1, &v24);
  for ( i = v24; i; i = *(_DWORD *)(i + 248) )
  {
    printf("<input type=hidden name=trunkname value='%s'>\n", i);
    v2 = atoi((const char *)(i + 64));
    printf("<input type=hidden name=trunkmap value=%d>\n", v2);
  }
  puts("<tr><td>");
  v3 = printf("<table cellspacing=0px cellpadding=0px style='width:100%%; padding: 5px;'>\n");
  str(v3);
  v5 = pick_string_134F4(541, v4);
  v6 = 1;
  printf("<td style='padding: 0 3px;' colspan=4 align=left>VLAN %s</td>", v5);
  printf("<td colspan=%d>", v0 - 4);
  printf("<input type=text name=vname size=20 maxlength=20>");
  v7 = printf("</td>");
  v8 = etr(v7);
  str(v8);
  while ( 1 )
  {
    v11 = __OFSUB__(v6, v0);
    v9 = v6 == v0;
    v10 = v6++ - v0 < 0;
    if ( !((unsigned __int8)(v10 ^ v11) | v9) )
      break;
    printf("<td style='padding: 0 3px; width:10px' align=center><label for=checkbox_p%d>%d</label></td>");
  }
  v12 = etr("<td style='padding: 0 3px; width:10px' align=center><label for=checkbox_p%d>%d</label></td>");
  v13 = 1;
  str(v12);
  while ( v13 <= v0 )
  {
    printf("<td style=\"padding:0px 3px 0px 3px;\" width=10 align=right>");
    printf("<input id=checkbox_p%d type=checkbox name=p%d >", v13, v13);
    printf("</td>");
    ++v13;
  }
  v14 = etr("<td style=\"padding:0px 3px 0px 3px;\" width=10 align=right>");
  str(v14);
  printf("<td style=\"padding:0px 3px 0px 3px;\" colspan=%d align=right>\n", v0);
  v16 = pick_string_134F4(3, v15);
  printf("<input type=button value=\"%s\" name=\"add_bt\" onclick=\"addVLAN(%d)\">\n", v16, v0);
  v18 = pick_string_134F4(47, v17);
  printf("<input type=button value=\"%s\" name=\"cancel_bt\" onclick=\"cancelVLAN()\" disabled>\n", v18);
  v19 = printf("</td>");
  etr(v19);
  v20 = printf("<tr style='height: 10px;'><td colspan=24></td></tr>");
  print_end_content_table(v20);
  sub_4110C();
  return printf("</form>");
}

int __fastcall sub_415AC(int a1)
{

  GET_SI_ *v16=(GET_SI_ *)(malloc(sizeof(get_si_)));
  int v1; // r7@1
  int result; // r0@1
  const char *v3; // r4@1
  int v4; // r5@4
  int v5; // r1@10
  signed int v6; // r4@12
  const char *v7; // r0@13
  int v8; // r0@15
  char v9; // r3@15
  char *v10; // r0@15
  char *v11; // r0@19
  const char *i; // r5@22
  char *v13; // r6@25
  int v14; // r0@28
  int v15; // r0@28
  int v17; // [sp+278h] [bp-1D8h]@18
  char v18; // [sp+3B3h] [bp-9Dh]@6
  char v19; // [sp+413h] [bp-3Dh]@11
  int v20; // [sp+42Ch] [bp-24h]@13
  int v21; // [sp+438h] [bp-18h]@15

  v1 = a1;
  result = get_pvalue(a1, (int)"act");
  v3 = (const char *)result;
  if ( result )
  {
    get_si((int)"hw", (int)&v16);
    if ( strcmp(v3, (const char *)&unk_8A0A8) && strcmp(v3, "modifyvlan") )
    {
      result = strcmp(v3, "removevlan");
      if ( result )
        return result;
      v11 = (char *)get_pvalue(v1, (int)"dellist");
      if ( v11 )
      {
        for ( i = v11; ; i = v13 + 1 )
        {
          v11 = strchr(i, 44);
          v13 = v11;
          if ( !v11 )
            break;
          *v11 = 0;
          if ( *i )
          {
            sf_strncpy(&v18, i, 96);
            vlan_remove_config(&v18, -1);
          }
        }
      }
      goto LABEL_28;
    }
    result = get_pvalue(v1, (int)"vname");
    v4 = result;
    if ( result )
    {
      result = check_unpermitted_chars(result);
      if ( !result )
      {
        sf_strncpy(&v18, v4, 96);
        if ( strcmp(v3, (const char *)&unk_8A0A8) || (result = vlan_check_vname_available(&v18)) == 0 )
        {
          if ( !strcmp(v3, "modifyvlan") )
            vlan_remove_config(&v18, 255);
          v5 = 0;
          do
            *(&v19 + v5++) = 48;
          while ( v5 != 25 );
          v6 = 1;
          while ( v6 <= v17 )
          {
            sprintf((char *)&v20, "p%d");
            v7 = (const char *)get_pvalue(v1, (int)&v20);
            if ( v7 && !strcmp(v7, "on") )
            {
              v8 = get_dev_port(&v16, v6);
              v9 = 49;
              v10 = (char *)&v21 + v8;
            }
            else
            {
              v10 = (char *)&v21 + get_dev_port(&v16, v6);
              v9 = 48;
            }
            ++v6;
            *(v10 - 37) = v9;
          }
          *((_BYTE *)&v21 + v17 - 37) = 0;
          v11 = (char *)vlan_add_config(&v18, &v19);
LABEL_28:
          v14 = vlan_apply_system(v11);
          v15 = signal_update(v14);
          return signal_save(v15);
        }
      }
    }
  }
  return result;
}



int sub_41C78()
{

  GET_SI_ *v49=(GET_SI_ *)(malloc(sizeof(get_si_)));
  int v0; // r1@1
  int v1; // r0@1
  char *v2; // r5@1
  int v3; // r1@1
  char *v4; // r4@2
  int v5; // r0@4
  char *v6; // r1@4
  signed int v7; // r4@4
  int v8; // r1@4
  int v9; // r0@6
  int v10; // r1@6
  int v11; // r0@6
  int v12; // r0@6
  int v13; // r0@6
  int v14; // r0@6
  int v15; // r1@6
  int v16; // r0@6
  int v17; // r0@6
  int v18; // r0@6
  int v19; // r1@6
  const char *v20; // r0@6
  int v21; // r0@6
  int v22; // r1@6
  const char *v23; // r0@6
  int v24; // r0@6
  int v25; // r1@6
  const char *v26; // r0@6
  int v27; // r0@6
  int v28; // r1@6
  int v29; // r0@6
  int v30; // r0@6
  int v31; // r1@6
  int v32; // r0@6
  int v33; // r0@6
  int v34; // r0@6
  int v35; // r0@6
  signed int v36; // r1@8
  bool v37; // zf@8
  bool v38; // nf@8
  unsigned __int8 v39; // vf@8
  signed int v40; // r2@8
  int v41; // r0@9
  int v42; // r0@9
  int v43; // r1@9
  int v44; // r0@9
  int v45; // r0@9
  int v46; // r0@9
  int v47; // r0@9
  int v50; // [sp+274h] [bp-154h]@8
  int v51; // [sp+3ACh] [bp-1Ch]@1

  puts("<form method=get action=timepro.cgi name=stp_fm>");
  puts("<input type=hidden name=tmenu value=switchconf>");
  puts("<input type=hidden name=smenu value=stp>");
  puts("<input type=hidden name=act value=opstp>");
  stp_get_operation("br0", &v51);
  puts("<tr><td>");
  printf("<table cellspacing=0px cellpadding=0px style='width: 100%%; margin-top: 5px;'>\n");
  printf("<tr class='title'>");
  v1 = pick_string_134F4(754, v0);
  v2 = "";
  printf("<td style='width: 110px;'><b>STP %s</b></td>", v1);
  puts("<td>");
  if ( v51 )
    v4 = "checked";
  else
    v4 = "";
  v5 = pick_string_134F4(894, v3);
  v6 = v4;
  v7 = 1;
  printf("<input type=radio name=op value=1 %s> %s", v6, v5);
  print_nbsp(10);
  if ( !v51 )
    v2 = "checked";
  v9 = pick_string_134F4(900, v8);
  printf("<input type=radio name=op value=0 %s> %s", v2, v9);
  puts("</td>");
  puts("<td align=right>");
  v11 = pick_string_134F4(28, v10);
  printf("<input type=button value=\"%s\" name=\"set_bt\" style='margin-right: 39px;' onclick=\"setupStp()\">\n", v11);
  v12 = printf("</td>");
  etr(v12);
  v13 = print_blank_line(3, 5);
  print_end_content_table(v13);
  puts("</form>");
  puts("<tr><td>");
  v14 = puts("<table cellspacing=0px cellpadding=0px>");
  str(v14);
  puts("<form method=get action=timepro.cgi name=stp_bridge_fm>");
  puts("<input type=hidden name=tmenu value=switchconf>");
  puts("<input type=hidden name=smenu value=stp>");
  puts("<input type=hidden name=act value=setbridge>");
  printf("<td width=50%% valign=top>");
  puts("<table cellspacing=0px cellpadding=0px>");
  printf("<tr class='title'>");
  puts("<td colspan=3 align=left>");
  v16 = pick_string_134F4(883, v15);
  printf("<b>Bridge %s</b>", v16);
  printf("</td>");
  v17 = printf("</tr>");
  etr(v17);
  stp_get_bridge_priority("br0", &v51);
  printf("<tr class='list'>");
  printf("<td style='width: 90px;'>Priorirty</td>");
  printf("<td><input type=text name=br_prio size=5 maxlength=5 value=%d>", v51);
  printf("</td>");
  v18 = printf("<td>(0 ~ 65535, 32768)</td>");
  etr(v18);
  stp_get_bridge_forward_delay("br0", &v51);
  printf("<tr class='list'>");
  printf("<td>Forward Delay</td>");
  printf("<td><input type=text name=br_fd size=2 maxlength=2 value=%d> ", v51);
  v20 = (const char *)pick_string_134F4(878, v19);
  printf(v20);
  printf("</td>");
  v21 = printf("<td>(4 ~ 30, 15)</td>");
  etr(v21);
  stp_get_bridge_max_message_age("br0", &v51);
  printf("<tr class='list'>");
  printf("<td>Max Age</td>");
  printf("<td><input type=text name=br_maxage size=2 maxlength=2 value=%d> ", v51);
  v23 = (const char *)pick_string_134F4(878, v22);
  printf(v23);
  printf("</td>");
  v24 = printf("<td>(6 ~ 40, 20)</td>");
  etr(v24);
  stp_get_bridge_hello_time("br0", &v51);
  printf("<tr class='list'>");
  printf("<td>Hello Time</td>");
  printf("<td><input type=text name=br_hello size=2 maxlength=2 value=%d> ", v51);
  v26 = (const char *)pick_string_134F4(878, v25);
  printf(v26);
  printf("</td>");
  v27 = printf("<td>(1 ~ 10, 2)</td>");
  etr(v27);
  printf("<tr class='list'>");
  puts("<td colspan=3 align=right>");
  v29 = pick_string_134F4(28, v28);
  printf(
    "<input type=button value=\"Bridge %s\" name=\"set_bt\" onclick=\"setupStpBridge()\" style='margin-right: 10px;'>\n",
    v29);
  v30 = printf("</td>");
  etr(v30);
  printf("</table>");
  printf("</td>");
  printf("</form>");
  puts("<form method=get action=timepro.cgi name=stp_port_fm>");
  puts("<input type=hidden name=tmenu value=switchconf>");
  puts("<input type=hidden name=smenu value=stp>");
  puts("<input type=hidden name=act value=setport>");
  printf("<td valign=top>");
  puts("<table cellspacing=0px cellpadding=0px>");
  printf("<tr class='title'>");
  puts("<td colspan=3 align=left>");
  v32 = pick_string_134F4(883, v31);
  printf("<b>Port %s</b>", v32);
  v33 = printf("</td>");
  etr(v33);
  printf("<tr class='list'>");
  printf("<td style='width: 90px;'>Priorirty</td>");
  printf("<td><input type=text name=port_prio size=3 maxlength=3 value=128 style='width: 60px;'>");
  printf("</td>");
  v34 = printf("<td>(0 ~ 255, 128)</td>");
  etr(v34);
  printf("<tr class='list'>");
  printf("<td>Path Cost</td>");
  printf("<td><input type=text name=port_cost size=5 maxlength=5 value=4 style='width: 60px;'>");
  printf("</td>");
  v35 = printf("<td>(0 ~ 65535, 4)</td>");
  etr(v35);
  printf("<tr class='list'>");
  printf("<td>Port</td>");
  printf("<td height=23 colspan=2>");
  puts("<select name=port style='height: 20px; width: 60px;'>");
  get_si((int)"hw", (int)&v49);
  while ( 1 )
  {
    v36 = v7;
    v39 = __OFSUB__(v7, v50);
    v37 = v7 == v50;
    v38 = v7 - v50 < 0;
    v40 = v7++;
    if ( !((unsigned __int8)(v38 ^ v39) | v37) )
      break;
    printf("<option value=%d>%d");
  }
  printf("<option value=0>All", v36, v40);
  printf("</select>");
  v41 = printf("</td>");
  etr(v41);
  printf("<tr class='list'>");
  printf("<td height=23></td>");
  v42 = printf("<td colspan=2></td>");
  etr(v42);
  printf("<tr class='list'>");
  puts("<td colspan=3 align=right>");
  v44 = pick_string_134F4(28, v43);
  printf("<input type=button value=\"Port %s\" name=\"set_bt\" onclick=\"setupStpPort()\">\n", v44);
  v45 = printf("</td>");
  etr(v45);
  printf("</table>");
  printf("</td>");
  v46 = printf("</form>");
  etr(v46);
  v47 = print_blank_line(3, 15);
  return print_end_content_table(v47);
}


const char *__fastcall sub_42208(int a1)
{

  GET_SI_ *v23=(GET_SI_ *)(malloc(sizeof(get_si_)));
  int v1; // r6@1
  const char *result; // r0@1
  const char *v3; // r4@1
  const char *v4; // r0@3
  const char *v5; // r0@3
  const char *v6; // r0@5
  int v7; // r0@6
  const char *v8; // r0@7
  int v9; // r0@8
  const char *v10; // r0@9
  int v11; // r0@10
  int v12; // r0@12
  const char *v13; // r4@14
  int v14; // r0@15
  signed int v15; // r3@15
  int v16; // r5@15
  int i; // r4@20
  const char *v18; // r0@21
  int v19; // r0@22
  const char *v20; // r0@23
  int v21; // r0@24
  int v22; // r0@27
  int v24; // [sp+278h] [bp-148h]@15

  v1 = a1;
  result = (const char *)get_pvalue(a1, (int)"act");
  v3 = result;
  if ( result )
  {
    if ( !strcmp(result, "opstp") )
    {
      v4 = (const char *)get_pvalue(v1, (int)"op");
      atoi(v4);
      v5 = (const char *)stp_set_operation("br0");
    }
    else if ( !strcmp(v3, "setbridge") )
    {
      v6 = (const char *)get_pvalue(v1, (int)"br_prio");
      if ( v6 )
      {
        v7 = atoi(v6);
        stp_set_bridge_priority("br0", v7);
      }
      v8 = (const char *)get_pvalue(v1, (int)"br_fd");
      if ( v8 )
      {
        v9 = atoi(v8);
        stp_set_bridge_forward_delay("br0", v9);
      }
      v10 = (const char *)get_pvalue(v1, (int)"br_maxage");
      if ( v10 )
      {
        v11 = atoi(v10);
        stp_set_bridge_max_message_age("br0", v11);
      }
      v5 = (const char *)get_pvalue(v1, (int)"br_hello");
      if ( v5 )
      {
        v12 = atoi(v5);
        v5 = (const char *)stp_set_bridge_hello_time("br0", v12);
      }
    }
    else
    {
      v5 = (const char *)strcmp(v3, "setport");
      if ( !v5 )
      {
        v5 = (const char *)get_pvalue(v1, (int)"port");
        v13 = v5;
        if ( v5 )
        {
          get_si((int)"hw", (int)&v23);
          v14 = atoi(v13);
          v15 = v24;
          v16 = v14;
          if ( v14 )
            v15 = v14;
          else
            v16 = v24;
          if ( !v14 )
            v15 = 1;
          for ( i = v15; ; ++i )
          {
            v5 = (const char *)v1;
            if ( i > v16 )
              break;
            v18 = (const char *)get_pvalue(v1, (int)"port_prio");
            if ( v18 )
            {
              v19 = atoi(v18);
              stp_set_bridge_port_priority("br0", i, v19);
            }
            v20 = (const char *)get_pvalue(v1, (int)"port_cost");
            if ( v20 )
            {
              v21 = atoi(v20);
              stp_set_bridge_port_cost("br0", i, v21);
            }
          }
        }
      }
    }
    v22 = signal_update(v5);
    result = (const char *)signal_save(v22);
  }
  return result;
}


int sub_42480()
{

  GET_SI_ *v40=(GET_SI_ *)(malloc(sizeof(get_si_)));
  int v0; // r0@1
  int v1; // r8@1
  char *v2; // r5@1
  int v3; // r7@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r0@1
  int v7; // r1@1
  char *v8; // r4@2
  int v9; // r0@4
  char *v10; // r1@4
  signed int v11; // r4@4
  int v12; // r1@4
  int v13; // r0@6
  int v14; // r0@6
  int v15; // r0@6
  int v16; // r0@6
  bool v17; // zf@8
  bool v18; // nf@8
  unsigned __int8 v19; // vf@8
  int v20; // r0@9
  signed int v21; // r4@9
  signed int v22; // r5@9
  int v23; // r6@9
  char *v24; // r3@11
  int v25; // r0@16
  int v26; // r1@16
  int v27; // r0@16
  signed int v28; // r4@16
  int v29; // r1@16
  int v30; // r0@16
  int v31; // r1@19
  int v32; // r0@19
  int v33; // r0@19
  int v34; // r0@19
  int v35; // r1@19
  int v36; // r0@19
  int v37; // r0@19
  int v38; // r0@19
  int v41; // [sp+278h] [bp-150h]@1

  v0 = get_si((int)"hw", (int)&v40);
  v1 = v41;
  v2 = "";
  v3 = get_mirroring_op(v0);
  puts("<form method=get action=timepro.cgi name=mirroring_fm>");
  puts("<input type=hidden name=tmenu value=switchconf>");
  puts("<input type=hidden name=smenu value=mirroring>");
  puts("<input type=hidden name=act value=setup_mirroring>");
  puts("<tr><td>");
  v4 = puts("<table cellspacing=0px cellpadding=0px>");
  str(v4);
  v6 = pick_string_134F4(754, v5);
  printf("<td style='padding-left: 10px;'>%s</td>", v6);
  puts("<td style='padding: 0 20px;'>");
  if ( v3 > 0 )
    v8 = "checked";
  else
    v8 = "";
  v9 = pick_string_134F4(894, v7);
  v10 = v8;
  v11 = 1;
  printf("<input type=radio id=mirroring_on name=op value=1 %s><label for=mirroring_on> %s</label>", v10, v9);
  print_nbsp(10);
  if ( v3 <= 0 )
    v2 = "checked";
  v13 = pick_string_134F4(900, v12);
  printf("<input type=radio id=mirroring_off name=op value=0 %s><label for=mirroring_off> %s</label>", v2, v13);
  v14 = puts("</td>");
  v15 = etr(v14);
  print_end_content_table(v15);
  puts("<tr><td>");
  v16 = printf("<table cellspacing=0px cellpadding=0px style='width:100%%;'>\n");
  str(v16);
  while ( 1 )
  {
    v19 = __OFSUB__(v11, v1);
    v17 = v11 == v1;
    v18 = v11++ - v1 < 0;
    if ( !((unsigned __int8)(v18 ^ v19) | v17) )
      break;
    printf("<td style='width: 10px; padding: 0 3px;' align=center><label for=checkbox_p%d>%d</label></td>");
  }
  v20 = etr("<td style='width: 10px; padding: 0 3px;' align=center><label for=checkbox_p%d>%d</label></td>");
  v21 = 1;
  v22 = get_mirrored_port(v20);
  v23 = get_mirroring_port();
  str(v23);
  while ( v21 <= v1 )
  {
    printf("<td style=\"padding:0px 3px 0px 3px;\" width=10 align=center>");
    if ( (v22 >> (v21 - 1)) & 1 )
    {
      v24 = "checked";
    }
    else
    {
      v24 = "disabled";
      if ( v23 != v21 )
        v24 = "";
    }
    printf("<input type=checkbox id=checkbox_p%d name=p%d %s>", v21, v21, v24);
    printf("</td>");
    ++v21;
  }
  v25 = etr("<td style=\"padding:0px 3px 0px 3px;\" width=10 align=center>");
  str(v25);
  printf("<td colspan=%d style='padding-left: 10px'>", v1 + 1);
  v27 = pick_string_134F4(532, v26);
  v28 = 1;
  printf("%s", v27);
  v30 = pick_string_134F4(788, v29);
  printf(" %s ", v30);
  printf("<select name=mirroring_port style='height: 20px; width: 50px;' onchange=\"checkMirroredPort(%d)\">\n", v1);
  printf("<option value=0>--");
  while ( v28 <= v1 )
  {
    printf("<option value=%d %s>%d");
    ++v28;
  }
  printf("</select>", v28);
  v32 = pick_string_134F4(533, v31);
  printf(" %s", v32);
  v33 = printf("</td>");
  v34 = etr(v33);
  str(v34);
  printf("<td style=\"padding:0px 3px 0px 3px;\" colspan=%d align=right>\n", v1 + 1);
  v36 = pick_string_134F4(28, v35);
  printf("<input type=button value=\"%s\" name=\"set_bt\" onclick=\"setupMirroring(%d)\">\n", v36, v1);
  v37 = printf("</td>");
  v38 = etr(v37);
  print_end_content_table(v38);
  printf("</td>");
  return printf("</form>");
}


int __fastcall sub_42784(int a1)
{
  
  GET_SI_ *v12=(GET_SI_ *)(malloc(sizeof(get_si_)));
  int v1; // r5@1
  int result; // r0@1
  signed int i; // r4@2
  const char *v4; // r0@4
  signed int v5; // r0@6
  signed int v6; // r1@6
  const char *v7; // r0@10
  int v8; // r0@11
  const char *v9; // r0@13
  int v10; // r0@14
  int v11; // r0@15
  int v13; // [sp+274h] [bp-154h]@9
  char s; // [sp+3ACh] [bp-1Ch]@4

  v1 = a1;
  get_si((int)"hw", (int)&v12);
  result = get_pvalue(v1, (int)"act");
  if ( result )
  {
    for ( i = 1; i <= v13; ++i )
    {
      sprintf(&s, "p%d");
      v4 = (const char *)get_pvalue(v1, (int)&s);
      if ( v4 && !strcmp(v4, "on") )
      {
        v5 = i;
        v6 = 1;
      }
      else
      {
        v5 = i;
        v6 = 0;
      }
      set_mirrored_port(v5, v6);
    }
    v7 = (const char *)get_pvalue(v1, (int)"mirroring_port");
    if ( v7 )
    {
      v8 = atoi(v7);
      if ( v8 <= v13 )
        set_mirroring_port();
    }
    v9 = (const char *)get_pvalue(v1, (int)"op");
    if ( v9 )
    {
      v10 = atoi(v9);
      v9 = (const char *)set_mirroring_op(v10);
    }
    v11 = signal_update(v9);
    result = signal_save(v11);
  }
  return result;
}


int sub_4291C()
{

  GET_SI_ *v19=(GET_SI_ *)(malloc(sizeof(get_si_)));
  int v0; // r4@1
  int v1; // r8@1
  int v2; // r0@1
  int v3; // r1@1
  int v4; // r0@1
  int v5; // r0@1
  int v6; // r0@1
  int v7; // r5@1
  int v8; // r7@2
  int v9; // r6@2
  int v10; // r9@4
  signed int i; // r4@4
  int v12; // r0@10
  int v13; // r0@13
  bool v14; // zf@14
  bool v15; // nf@14
  unsigned __int8 v16; // vf@14
  int v17; // r0@15
  int v20; // [sp+278h] [bp-160h]@1
  int v21; // [sp+3B0h] [bp-28h]@1
  int v22; // [sp+3B4h] [bp-24h]@1

  get_si((int)"hw", (int)&v19);
  v0 = 0;
  v1 = v20;
  v21 = 0;
  v22 = 0;
  genconfig_read_file(&unk_89DA1, &v21);
  puts("<tr><td>");
  v2 = printf("<table cellspacing=0px cellpadding=0px style='width: 100%%;'>\n");
  str(v2);
  printf("<td align=left style=\"padding:0px 3px 0px 3px;\" colspan=%d>", 2);
  v4 = pick_string_134F4(118, v3);
  printf("<input type=button value=\"%s\" name=\"del_bt\" style='margin: 4px;' onclick=\"removeTRUNK()\">\n", v4);
  printf("</td>");
  printf("<td align=right style=\"padding:0px 3px 0px 3px;\" colspan=%d>", v1);
  v5 = printf("</td>");
  etr(v5);
  printf("<tr style='height:1px;'>");
  printf("<td colspan=%d style='border-bottom: 1px solid #CCC;'>", v1 + 2);
  v6 = printf("</td>");
  etr(v6);
  v7 = v21;
  if ( v21 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = v0 + 1;
      v10 = atoi((const char *)(v7 + 64));
      printf("<tr style='background-color: #%s;'>");
      printf("<td width=10 style=\"padding:0px 3px 0px 3px;\">");
      printf("<input type=checkbox id=checkbox%d name=vdel value=%s>", v0, v7);
      printf("</td>");
      printf("<td width=130 style=\"padding:0px 3px 0px 3px;\">");
      printf("<label for=checkbox%d>%s</label>", v0, v7);
      v8 |= v10;
      printf("</td>");
      for ( i = 1; i <= v1; ++i )
      {
        printf("<td style=\"padding:0px 3px 0px 3px;\" align=left>");
        if ( (v10 >> (i - 1)) & 1 )
          printf("%2d", i);
        else
          printf("--", i);
        printf("</td>");
      }
      v12 = etr("<td style=\"padding:0px 3px 0px 3px;\" align=left>");
      v7 = *(_DWORD *)(v7 + 248);
      if ( !v7 )
        break;
      v0 = v9;
    }
    print_end_content_table(v12);
    genconfig_free_ll(&v21);
  }
  else
  {
    v8 = 0;
    v9 = v21;
  }
  while ( 1 )
  {
    v16 = __OFSUB__(v9, 14);
    v14 = v9 == 14;
    v15 = v9++ - 14 < 0;
    if ( !((unsigned __int8)(v15 ^ v16) | v14) )
      break;
    printf("<tr style='background-color: #%s;'>");
    printf("<td colspan=%d>", v1 + 2);
    v13 = printf("</td>");
    etr(v13);
  }
  printf("<tr style='height:1px;'>");
  printf("<td colspan=%d style='border-bottom: 1px solid #CCC;'>", v1 + 2);
  v17 = printf("</td>");
  etr(v17);
  return printf("<input type=hidden name=trunkmembers value=%d>\n", v8);
}


int sub_42B80()
{

  GET_SI_ *v24=(GET_SI_ *)(malloc(sizeof(get_si_)));
  int v0; // r5@1
  int i; // r4@1
  int v2; // r0@3
  int v3; // r0@4
  int v4; // r1@4
  int v5; // r0@4
  signed int v6; // r4@4
  int v7; // r0@4
  int v8; // r0@4
  bool v9; // zf@6
  bool v10; // nf@6
  unsigned __int8 v11; // vf@6
  int v12; // r0@7
  signed int v13; // r4@7
  int v14; // r0@10
  int v15; // r1@10
  int v16; // r0@10
  int v17; // r1@10
  int v18; // r4@10
  int v19; // r0@10
  char *v20; // r12@10
  int v21; // r0@12
  int v22; // r0@12
  int v25; // [sp+280h] [bp-150h]@1
  int v26; // [sp+3B8h] [bp-18h]@1
  int v27; // [sp+3BCh] [bp-14h]@1

  get_si((int)"hw", (int)&v24);
  v0 = v25;
  puts("<form method=get action=timepro.cgi name=trunk_fm>");
  puts("<input type=hidden name=tmenu value=switchconf>");
  puts("<input type=hidden name=smenu value=trunk>");
  puts("<input type=hidden name=act value=>");
  puts("<input type=hidden name=dellist value=>");
  puts("<input type=hidden name=vlanname value='All'>");
  puts("<input type=hidden name=vlanmap value=4294967295>");
  v27 = 0;
  v26 = 0;
  genconfig_read_file("/etc/vlan_config", &v26);
  for ( i = v26; i; i = *(_DWORD *)(i + 248) )
  {
    printf("<input type=hidden name=vlanname value='%s'>\n", i);
    v2 = atoi((const char *)(i + 64));
    printf("<input type=hidden name=vlanmap value=%d>\n", v2);
  }
  puts("<tr><td>");
  v3 = printf("<table cellspacing=0px cellpadding=0px style='width: 100%%; padding: 5px;'>\n");
  str(v3);
  v5 = pick_string_134F4(541, v4);
  v6 = 1;
  printf("<td colspan=4 align=left style='padding: 0 3px;'>TRUNK %s</td>", v5);
  printf("<td colspan=%d>", v0 - 4);
  printf("<input type=text name=tname size=20 maxlength=20>");
  v7 = printf("</td>");
  v8 = etr(v7);
  str(v8);
  while ( 1 )
  {
    v11 = __OFSUB__(v6, v0);
    v9 = v6 == v0;
    v10 = v6++ - v0 < 0;
    if ( !((unsigned __int8)(v10 ^ v11) | v9) )
      break;
    printf("<td align=center style='width: 10px; padding: 0 3px;'><label for=checkbox_p%d>%d</label></td>");
  }
  v12 = etr("<td align=center style='width: 10px; padding: 0 3px;'><label for=checkbox_p%d>%d</label></td>");
  v13 = 1;
  str(v12);
  while ( v13 <= v0 )
  {
    printf("<td style=\"padding:0px 3px 0px 3px;\" width=10 align=right>");
    printf("<input type=checkbox id=checkbox_p%d name=p%d >", v13, v13);
    printf("</td>");
    ++v13;
  }
  v14 = etr("<td style=\"padding:0px 3px 0px 3px;\" width=10 align=right>");
  str(v14);
  printf("<td style=\"padding:0px 3px 0px 3px;\" colspan=%d align=right>\n", v0);
  v16 = pick_string_134F4(1118, v15);
  printf("<font style='color:gray; float: left; padding: 4px;'>%s</font>", v16);
  v18 = pick_string_134F4(3, v17);
  v19 = trunk_group_is_full();
  v20 = "disabled";
  if ( !v19 )
    v20 = "";
  printf("<input type=button value=\"%s\" name=\"add_bt\" onclick=\"addTRUNK(%d, %d)\" %s>\n", v18, v0, 4, v20);
  v21 = printf("</td>");
  etr(v21);
  v22 = printf("<tr style='height: 8px;'><td colspan=24></td></tr>");
  print_end_content_table(v22);
  sub_4291C();
  return printf("</form>");
}



int __fastcall sub_42DC8(int a1)
{


  GET_SI_ *v16=(GET_SI_ *)(malloc(sizeof(get_si_)));
  int v1; // r7@1
  int result; // r0@1
  const char *v3; // r4@1
  int v4; // r5@4
  int v5; // r0@10
  int j; // r1@10
  signed int v7; // r4@13
  const char *v8; // r0@14
  int v9; // r0@16
  char v10; // r3@16
  char *v11; // r0@16
  char *v12; // r0@20
  const char *i; // r5@23
  char *v14; // r6@26
  int v15; // r0@29
  int v17; // [sp+278h] [bp-1D8h]@10
  char v18; // [sp+3B3h] [bp-9Dh]@6
  char v19; // [sp+413h] [bp-3Dh]@11
  int v20; // [sp+42Ch] [bp-24h]@14
  int v21; // [sp+438h] [bp-18h]@16

  v1 = a1;
  result = get_pvalue(a1, (int)"act");
  v3 = (const char *)result;
  if ( result )
  {
    get_si((int)"hw", (int)&v16);
    if ( strcmp(v3, (const char *)&unk_8B2CE) && strcmp(v3, "modifytrunk") )
    {
      result = strcmp(v3, "removetrunk");
      if ( result )
        return result;
      v12 = (char *)get_pvalue(v1, (int)"dellist");
      if ( v12 )
      {
        for ( i = v12; ; i = v14 + 1 )
        {
          v12 = strchr(i, 44);
          v14 = v12;
          if ( !v12 )
            break;
          *v12 = 0;
          if ( *i )
          {
            sf_strncpy(&v18, i, 96);
            trunk_remove_config(&v18, -1);
          }
        }
      }
      goto LABEL_29;
    }
    result = get_pvalue(v1, (int)"tname");
    v4 = result;
    if ( result )
    {
      result = check_unpermitted_chars(result);
      if ( !result )
      {
        sf_strncpy(&v18, v4, 96);
        if ( strcmp(v3, (const char *)&unk_8B2CE) || (result = trunk_check_tname_available(&v18)) == 0 )
        {
          if ( !strcmp(v3, "modifytrunk") )
            trunk_remove_config(&v18, 255);
          v5 = v17;
          for ( j = 0; j < v5; ++j )
            *(&v19 + j) = 48;
          v7 = 1;
          while ( v7 <= v17 )
          {
            sprintf((char *)&v20, "p%d");
            v8 = (const char *)get_pvalue(v1, (int)&v20);
            if ( v8 && !strcmp(v8, "on") )
            {
              v9 = get_dev_port(&v16, v7);
              v10 = 49;
              v11 = (char *)&v21 + v9;
            }
            else
            {
              v11 = (char *)&v21 + get_dev_port(&v16, v7);
              v10 = 48;
            }
            ++v7;
            *(v11 - 37) = v10;
          }
          *((_BYTE *)&v21 + v17 - 37) = 0;
          v12 = (char *)trunk_add_config(&v18, &v19);
LABEL_29:
          v15 = signal_update(v12);
          return signal_save(v15);
        }
      }
    }
  }
  return result;
}


int __fastcall sub_367DC(signed int a1)
{

  GET_SI_ *v23=(GET_SI_ *)(malloc(sizeof(get_si_)));
  READ_PORTCONFIG_ *v28=(READ_PORTCONFIG_ *)(malloc(sizeof(read_portconfig_)));
  int v1; // r10@1
  int v2; // r5@1
  char *v3; // r1@2
  const char *v4; // r0@5
  int v5; // r3@7
  int v6; // r1@10
  int v7; // r0@10
  int v8; // r0@10
  int v9; // r1@11
  char *v10; // r5@11
  char *v11; // r4@12
  int v12; // r0@14
  int v13; // r1@14
  char *v14; // r4@15
  int v15; // r0@17
  char *v16; // r1@18
  char *v17; // r1@21
  char *v18; // r1@24
  char *v19; // r1@27
  int v20; // r1@31
  int v21; // r0@31
  int v24; // [sp+274h] [bp-194h]@1
  char v25; // [sp+3ACh] [bp-5Ch]@7
  __int16 v26; // [sp+3B6h] [bp-52h]@7
  int v27; // [sp+3C0h] [bp-48h]@7
  int v29; // [sp+3D4h] [bp-34h]@17
  __int16 v30; // [sp+3DEh] [bp-2Ah]@26

  v1 = a1;
  get_si((int)"hw", (int)&v23);
  ++dword_986D8;
  v2 = v24;
  printf("<tr class='list' style='background-color: #%s'>");
  if ( v1 < 0x10000 )
    v3 = (char *)v1;
  else
    v3 = "WAN";
  if ( v1 < 0x10000 )
    v4 = "<td style='width: 55px;'>%d</td>";
  else
    v4 = "<td style='width: 55px;'>%s</td>";
  printf(v4, v3);
  get_link_status(v1, &v25);
  read_portconfig(v1, (int)&v28);
  puts("<td width=20>");
  printf("%s", &v25);
  printf("</td>");
  puts("<td width=15>");
  printf("%s", &v26);
  printf("</td>");
  puts("<td width=20>");
  printf("%s", &v27);
  printf("</td>");
  v5 = v1 == v2;
  if ( v2 == 1 )
    v5 = 0;
  if ( v5 )
  {
    puts("<td colspan=4>");
    v7 = pick_string_134F4(670, v6);
    v8 = printf("%s</td>\n", v7);
  }
  else
  {
    puts("<td>");
    printf("<select name=mode%d  style='height: 20px;' onchange=\"SelectLinkMode(%d);\">\n", v1, v1);
    v10 = "selected";
    if ( !strcmp((const char *)&v28, "auto") )
      v11 = "selected";
    else
      v11 = "";
    v12 = pick_string_134F4(669, v9);
    printf("<option value=auto %s>%s", v11, v12);
    if ( !strcmp((const char *)&v28, "forced") )
      v14 = "selected";
    else
      v14 = "";
    v15 = pick_string_134F4(675, v13);
    printf("<option value=forced %s>%s</option>", v14, v15);
    printf("</select>");
    printf("</td>");
    puts("<td>");
    printf("<select name=speed%d style='height: 20px;' onchange=\"SelectLinkMode(%d);\">\n", v1, v1);
    if ( !strcmp((const char *)&v29, "1000") )
      v16 = "selected";
    else
      v16 = "";
    printf("<option value=1000 %s>1Gbps</option>\n", v16);
    if ( !strcmp((const char *)&v29, "100") )
      v17 = "selected";
    else
      v17 = "";
    printf("<option value=100 %s>100Mbps</option>\n", v17);
    if ( !strcmp((const char *)&v29, "10") )
      v18 = "selected";
    else
      v18 = "";
    printf("<option value=10 %s>10Mbps</option>\n", v18);
    printf("</select>");
    printf("</td>");
    puts("<td>");
    printf("<select name=duplex%d style='height: 20px;'>\n", v1);
    if ( !strcmp((const char *)&v30, "full") )
      v19 = "selected";
    else
      v19 = "";
    printf("<option value=full %s>FULL</option>\n", v19);
    if ( strcmp((const char *)&v30, "half") )
      v10 = "";
    printf("<option value=half %s>HALF</option>\n", v10);
    printf("</select>");
    printf("</td>");
    puts("<td>");
    v21 = pick_string_134F4(28, v20);
    v8 = printf(
           "<input class=navi_bt type=button name=\"port%d_bt\" value=\"%s\" onclick=\"ApplyLinkSetup(%d);\"\"></td>\n",
           v1,
           v21,
           v1);
  }
  return etr(v8);
}



_DWORD *__fastcall sub_27004(int a1)
{
  DELETE_PF_RULE_ *v2=(DELETE_PF_RULE_ *)(malloc(sizeof(delete_pf_rule_)));

  int v1; // r8@1
  int v3; // r5@2
  _DWORD *v4; // r9@3
  char *v5; // r7@3
  int v6; // r5@13
  int v7; // r1@16
  signed int v8; // r5@18
  int v9; // r0@26
  int v10; // r0@34
  int v11; // r0@40
  signed int v12; // r6@45
  int v13; // r0@45
  int v14; // r0@54
  int v15; // r0@60
  signed int v16; // r0@74
  signed int v17; // r2@74
  signed int v18; // r10@74
  int v19; // r3@75
  bool v20; // zf@75
  signed int i; // r4@81
  const char *v22; // r5@83
  _DWORD *v23; // r8@86
  signed int v24; // r7@86
  int v25; // r0@87
  signed int v26; // r3@98
  _DWORD *v28; // [sp+4h] [bp-42Ch]@1
  char v29[512]; // [sp+8h] [bp-428h]@74
  char s; // [sp+208h] [bp-228h]@1

  v1 = a1;
  v2 = malloc(0x21Cu);
  init_pf_rule();
  memset(&s, 0, 0x200u);
  v28 = v2;
  if ( !sub_269C4(v1, "mode", &s, 512) )
    goto LABEL_108;
  v3 = pf_line_spchar_validate(&s) == 0;
  if ( !strcmp(&s, "user") )
  {
    v4 = 0;
    v5 = (char *)malloc(0x30u);
    init_pf_netfilter();
    insert_nf_to_rule();
    v2[132] = 0;
    goto LABEL_7;
  }
  if ( !strcmp(&s, "trigger") )
  {
    v5 = 0;
    v4 = malloc(0x58u);
    init_tr_netfilter();
    insert_tr_to_rule((int)v2, (int)v4);
    v2[132] = 1;
  }
  else
  {
LABEL_108:
    v5 = 0;
    v4 = 0;
    v3 = 0;
  }
LABEL_7:
  memset(&s, 0, 0x200u);
  if ( v3 )
  {
    if ( sub_269C4(v1, "name", &s, 512) )
    {
      v3 = pf_line_spchar_validate(&s) == 0;
      sf_strncpy(v2 + 1, &s, 512);
    }
    else
    {
      v3 = 0;
    }
  }
  memset(&s, 0, 0x200u);
  if ( !v3 )
    goto LABEL_104;
  if ( sub_269C4(v1, "disabled", &s, 512) )
  {
    v6 = pf_line_spchar_validate(&s);
    if ( atoi(&s) == 1 )
      *((_BYTE *)v2 + 516) = 0;
    if ( v6 )
      goto LABEL_104;
  }
  v7 = v2[132];
  if ( v7 )
  {
    if ( v7 != 1 )
      goto LABEL_104;
    memset(&s, 0, 0x200u);
    if ( sub_269C4(v1, "trigger_protocol", &s, 8) )
    {
      v12 = pf_line_spchar_validate(&s) == 0;
      sf_strncpy(v4, &s, 8);
    }
    else
    {
      v12 = 0;
    }
    memset(&s, 0, 0x200u);
    if ( v12 )
    {
      if ( sub_269C4(v1, "trigger_sport", &s, 512)
        && (v12 = pf_line_spchar_validate(&s) == 0, v14 = atoi(&s), (unsigned int)(v14 - 1) <= 0xFFFE) )
      {
        v4[2] = v14;
      }
      else
      {
        v12 = 0;
      }
    }
    memset(&s, 0, 0x200u);
    if ( v12 )
    {
      if ( sub_269C4(v1, "trigger_eport", &s, 512) )
      {
        v12 = pf_line_spchar_validate(&s) == 0;
        v15 = atoi(&s);
        if ( (unsigned int)(v15 - 1) <= 0xFFFE )
          v4[3] = v15;
        else
          v12 = 0;
      }
      else
      {
        v12 = 1;
      }
    }
    memset(&s, 0, 0x200u);
    if ( v12 )
    {
      if ( sub_269C4(v1, &unk_6F669, &s, 8) )
      {
        if ( pf_line_spchar_validate(&s) )
          v12 = 0;
        sf_strncpy(v4 + 4, &s, 8);
      }
      else
      {
        v12 = 0;
      }
    }
    memset(&s, 0, 0x200u);
    if ( !v12 || !sub_269C4(v1, "forward_ports", &s, 512) )
      goto LABEL_104;
    if ( pf_line_spchar_validate(&s) )
      v12 = 0;
    if ( !s )
      goto LABEL_104;
    sf_strncpy(v29, &s, 512);
    v16 = strlen(v29);
    v17 = 0;
    v18 = v16;
    while ( v17 < v16 )
    {
      v19 = (unsigned __int8)v29[v17];
      v20 = v19 == 44;
      if ( v19 != 44 )
        v20 = v19 == 32;
      if ( v20 )
        v29[v17] = 0;
      ++v17;
    }
    for ( i = 0; ; ++i )
    {
      v22 = &v29[i];
      if ( i >= v16 )
        break;
      if ( v29[i] )
        goto LABEL_86;
    }
    v22 = 0;
LABEL_86:
    v23 = v4;
    v24 = 0;
    while ( 1 )
    {
      v26 = (signed int)v22;
      if ( v22 )
        v26 = 1;
      if ( v24 > 9 )
        v26 = 0;
      if ( !v26 )
        goto LABEL_103;
      v25 = atoi(v22);
      if ( (unsigned int)(v25 - 1) > 0xFFFE )
        goto LABEL_104;
      v23[6] = v25;
      while ( 1 )
      {
        if ( i >= v18 )
          goto LABEL_96;
        if ( !*v22 )
          break;
        ++v22;
        ++i;
      }
      while ( !*v22 )
      {
        ++i;
        ++v22;
        if ( i >= v18 )
          goto LABEL_96;
      }
      if ( i >= v18 )
LABEL_96:
        v22 = 0;
      ++v24;
      ++v23;
    }
  }
  memset(&s, 0, 0x200u);
  if ( !sub_269C4(v1, "internal_ip", &s, 20)
    || (v8 = pf_line_spchar_validate(&s) == 0, sf_strncpy(v5 + 24, &s, 20), !is_valid_pf_ipv4(v5 + 24)) )
  {
    v8 = 0;
  }
  memset(&s, 0, 0x200u);
  if ( v8 )
  {
    if ( sub_269C4(v1, "protocol", &s, 8) )
    {
      v8 = pf_line_spchar_validate(&s) == 0;
      sf_strncpy(v5, &s, 8);
    }
    else
    {
      v8 = 0;
    }
  }
  memset(&s, 0, 0x200u);
  if ( !v8 || !sub_269C4(v1, "ext_sport", &s, 512) )
  {
    if ( !strcmp(v5, "gre") )
      goto LABEL_31;
LABEL_30:
    v8 = 0;
    goto LABEL_31;
  }
  v8 = pf_line_spchar_validate(&s) == 0;
  v9 = atoi(&s);
  if ( (unsigned int)(v9 - 1) > 0xFFFE )
    goto LABEL_30;
  *((_DWORD *)v5 + 2) = v9;
LABEL_31:
  memset(&s, 0, 0x200u);
  if ( v8 )
  {
    if ( sub_269C4(v1, "ext_eport", &s, 512) )
    {
      v8 = pf_line_spchar_validate(&s) == 0;
      v10 = atoi(&s);
      if ( (unsigned int)(v10 - 1) <= 0xFFFE )
        *((_DWORD *)v5 + 3) = v10;
      else
        v8 = 0;
    }
    else
    {
      v8 = 1;
    }
  }
  memset(&s, 0, 0x200u);
  if ( v8 )
  {
    if ( sub_269C4(v1, "int_sport", &s, 512) )
    {
      v8 = pf_line_spchar_validate(&s) == 0;
      v11 = atoi(&s);
      if ( (unsigned int)(v11 - 1) <= 0xFFFE )
        *((_DWORD *)v5 + 4) = v11;
      else
        v8 = 0;
    }
    else
    {
      v8 = 1;
    }
  }
  memset(&s, 0, 0x200u);
  if ( !v8 )
    goto LABEL_104;
  if ( !sub_269C4(v1, "int_eport", &s, 512) )
    return v28;
  v12 = pf_line_spchar_validate(&s) == 0;
  v13 = atoi(&s);
  if ( (unsigned int)(v13 - 1) > 0xFFFE )
    goto LABEL_104;
  *((_DWORD *)v5 + 5) = v13;
LABEL_103:
  if ( !v12 )
  {
LABEL_104:
    delete_pf_rule(0, (int)v2);
    v28 = 0;
  }
  return v28;
}

int __fastcall sub_2778C((DELETE_PF_RULE *) result)
{
  if ( result )
    result = delete_pf_rule(0, result);
  return result;
}



int __fastcall sub_1FB50(int a1, int a2)
{

  READ_PPPOE_OPTION_ *v78=(READ_PPPOE_OPTION_ *)(malloc(sizeof(read_pppoe_option_)));
  int v2; // r11@1
  int v3; // r1@1
  const char *v4; // r0@1
  char *v5; // r4@1
  int v6; // r0@1
  int v7; // r1@1
  char *v8; // r1@2
  int v9; // r1@4
  int v10; // r0@4
  char *v11; // r1@5
  int v12; // r1@7
  int v13; // r0@7
  char *v14; // r1@8
  int v15; // r1@10
  int v16; // r0@10
  char *v17; // r0@10
  int v18; // r1@10
  int v19; // r0@10
  int v20; // r1@10
  int v21; // r0@12
  int v22; // r1@12
  int v23; // r0@12
  int v24; // r1@12
  int v25; // r0@12
  int v26; // r1@14
  int v27; // r0@14
  int v28; // r1@14
  int v29; // r0@14
  int v30; // r1@14
  int v31; // r0@14
  int v32; // r1@14
  int v33; // r0@14
  int v34; // r1@14
  int v35; // r0@14
  int v36; // r1@14
  int v37; // r0@14
  int v38; // r1@14
  int v39; // r0@14
  int v40; // r1@14
  int v41; // r0@14
  int v42; // r1@14
  int v43; // r0@14
  int v44; // r1@16
  int v45; // r0@16
  int v46; // r1@16
  int v47; // r0@16
  char *v48; // r1@17
  int v49; // r1@19
  int v50; // r0@19
  int v51; // r1@19
  int v52; // r0@19
  int v53; // r1@19
  int v54; // r0@19
  int v55; // r1@19
  int v56; // r0@19
  int v57; // r1@19
  int v58; // r0@19
  char *v59; // r1@20
  int v60; // r1@22
  int v61; // r0@22
  int v62; // r1@22
  int v63; // r0@22
  int v64; // r1@22
  int v65; // r0@22
  int v66; // r1@22
  int v67; // r0@22
  int v68; // r1@24
  int v69; // r0@24
  int v70; // r1@24
  int v71; // r0@24
  int v72; // r1@24
  int v73; // r0@24
  int v74; // r1@24
  int v75; // r0@24
  int v77; // [sp+Ch] [bp-334h]@10
  char v79; // [sp+90h] [bp-2B0h]@14
  int v80; // [sp+138h] [bp-208h]@19
  int v81; // [sp+13Ch] [bp-204h]@19
  int v82; // [sp+140h] [bp-200h]@19
  int v83; // [sp+148h] [bp-1F8h]@19
  __int16 v84; // [sp+14Eh] [bp-1F2h]@1
  __int16 v85; // [sp+1CEh] [bp-172h]@1
  __int16 v86; // [sp+20Eh] [bp-132h]@1
  __int16 v87; // [sp+24Eh] [bp-F2h]@1
  char v88; // [sp+26Eh] [bp-D2h]@7
  __int16 v89; // [sp+282h] [bp-BEh]@7
  __int16 v90; // [sp+296h] [bp-AAh]@10
  __int16 v91; // [sp+2AAh] [bp-96h]@14
  __int16 v92; // [sp+2BEh] [bp-82h]@14
  __int16 v93; // [sp+2D2h] [bp-6Eh]@12
  __int16 v94; // [sp+2E6h] [bp-5Ah]@10
  __int16 v95; // [sp+2FAh] [bp-46h]@10
  __int16 v96; // [sp+30Eh] [bp-32h]@1

  v2 = a2;
  strcpy((char *)&v86, "");
  strcpy((char *)&v85, "");
  get_wan_hw_ifname(v2, &v96);
  get_wan_type(v2, &v87);
  v4 = (const char *)pick_string_134F4(667, v3);
  v5 = "";
  strcpy((char *)&v84, v4);
  printf("<COL width=\"180\"><COL width=\"200\"><COL width=\"%%%%\">");
  puts("<form method=\"post\" action=\"timepro.cgi\" name=\"netconf_wansetup\">");
  puts("<input type=hidden name=\"tmenu\" value=\"netconf\">");
  puts("<input type=hidden name=\"smenu\" value=\"wansetup\">");
  puts("<input type=hidden name=\"act\" value=\"\">");
  puts("<input type=hidden name=\"ocolor\" value=\"\">");
  printf("<input type=hidden name=\"wan\" value=\"%s\">\n", v2);
  v6 = printf("<input type=hidden name=\"ifname\" value=\"%s\">\n", &v96);
  v7 = check_valid_account(v6) == 0;
  printf("<input type=hidden name=\"nopassword\" value=\"%d\">");
  puts("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"border-top:1px #CCC solid;\"><td class=\"wansetup_main_td\" colspan=\"3\"> ");
  if ( !strcmp((const char *)&v87, "dynamic") )
    v8 = "checked";
  else
    v8 = "";
  printf(
    "<input type=radio id=\"wan_type_id1\" name=\"wan_type\" class=\"navi_radio\" value=\"dynamic\" %s onclick=\"ShowWans"
    "etup('%s','dynamic')\"><label for=\"wan_type_id1\" style=\"display:inline-block; vertical-align:middle;\">",
    v8,
    &v96);
  v10 = pick_string_134F4(656, v9);
  printf("<span class=\"wansetup_main_span\" style=\"font-weight:700;\">%s</span></label></td></tr>\n", v10);
  puts("<tr class=\"wansetup_main_tr\" height=\"24\"><td class=\"wansetup_main_td\" colspan=\"3\"> ");
  if ( !strcmp((const char *)&v87, "pppoe") )
    v11 = "checked";
  else
    v11 = "";
  printf(
    "<input type=radio id=\"wan_type_id2\" name=\"wan_type\" class=\"navi_radio\" value=\"pppoe\" %s onclick=\"ShowWanset"
    "up('%s','pppoe')\"><label for=\"wan_type_id2\" style=\"display:inline-block; vertical-align:middle;\">",
    v11,
    &v96);
  v13 = pick_string_134F4(664, v12);
  printf("<span class=\"wansetup_main_span\" style=\"font-weight:700;\">%s</span></label></td></tr>", v13);
  strcpy(&v88, "");
  strcpy((char *)&v89, "");
  puts("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"border-bottom:1px #CCC solid;\"><td class=\"wansetup_main_td\" colspan=\"3\"> ");
  if ( !strcmp((const char *)&v87, "static") )
    v14 = "checked";
  else
    v14 = "";
  printf(
    "<input type=radio id=\"wan_type_id3\" name=\"wan_type\" class=\"navi_radio\" value=\"static\" %s onclick=\"ShowWanse"
    "tup('%s','static')\"><label for=\"wan_type_id3\" style=\"display:inline-block; vertical-align:middle;\">",
    v14,
    &v96);
  v16 = pick_string_134F4(666, v15);
  printf("<span class=\"wansetup_main_span\" style=\"font-weight:700;\">%s</span></label></td></tr>", v16);
  get_hwaddr_kernel((int)&v96, (int)&v89);
  convert_mac(&v89);
  v17 = getenv("REMOTE_ADDR");
  get_internal_pc_hardware_address(v17, &v90);
  get_hwaddr_cloned(&v96, &v88);
  v77 = v88 == 0;
  strcmp((const char *)&v87, "dynamic");
  printf("<tr id=\"dynamic\" class=\"wansetup_main_tr\" style=\"display:%s;\"><td colspan=\"3\">");
  printf("<table class=\"v3_table wansetup_main_table\" width=\"100%%\">");
  printf("<COL width=\"180\"><COL width=\"200\"><COL width=\"%%%%\">");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  v19 = pick_string_134F4(216, v18);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v19);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  get_ifconfig(&v96, &v95, &v94);
  sub_1F698("dynamicip", &v95);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\">");
  if ( !get_dhclient_block_private_ip(&v96) )
    v5 = "checked";
  v21 = pick_string_134F4(651, v20);
  printf(
    "<input type=checkbox id=\"aprchkid\" class=\"navi_chk\" name=\"allow_private\" %s>\t\t<label for=\"aprchkid\"><span "
    "class=\"item_text wansetup_main_span\">%s</span></label>",
    v5,
    v21);
  printf("</td></tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  v23 = pick_string_134F4(907, v22);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v23);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_1F698("dynamicsm", &v94);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  v25 = pick_string_134F4(345, v24);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v25);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  get_default_gateway(&v96, &v93);
  if ( !strncmp((const char *)&v93, "ppp", 3u) )
    sf_strncpy(&v93, &v95, 20);
  sub_1F698("dynamicgw", &v93);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  get_dns_shadow(&v96, "dynamic", &v92, &v91);
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  v27 = pick_string_134F4(227, v26);
  printf("<td class=\"wansetup_main_td\"><span class=\"wansetup_main_p\">%s</span>\n", v27);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_1F698(&unk_67565, &v92);
  puts((const char *)&unk_67572);
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  v29 = pick_string_134F4(874, v28);
  printf("<td class=\"wansetup_main_td\"><span class=\"wansetup_main_p\">%s</span>\n", v29);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_1F698("sdns_dynamic", &v91);
  puts("</td>");
  puts("<td class=\"wansetup_main_td\">");
  get_manual_dns_flag(&v96, "dynamic");
  printf("<input type=checkbox name=\"dns_dynamic_chk\" class=navi_chk %s onclick=\"check_dns_dynamic();\" id=\"dns_dynamic_chkid\">\n");
  v31 = pick_string_134F4(637, v30);
  printf("<label for=\"dns_dynamic_chkid\"><span class=\"wansetup_main_span\">%s</span></label>\n", v31);
  puts("</td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  sub_1F87C("dynamic", &v90, &v89, v77);
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  sub_1F9DC("dynamic", v2, 1500);
  printf("</tr>");
  printf(
    "<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">\t\t<td class=\"wansetup_main_td\" cols"
    "pan=\"3\"></td></tr>",
    "F7F7F7");
  printf("</table></td></tr>");
  read_pppoe_option(v2, (int)&v78);
  strcmp((const char *)&v87, "pppoe");
  printf("<tr id=\"pppoe\" class=\"wansetup_main_tr\" style=\"display:%s;\"><td colspan=\"3\">");
  printf("<table class=\"v3_table wansetup_main_table\" width=\"100%%\">");
  printf("<COL width=\"180\"><COL width=\"200\"><COL width=\"%%%%\">");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  v33 = pick_string_134F4(660, v32);
  printf("<td class=wansetup_main_td><span class=\"wansetup_main_p\">%s</span></td>", v33);
  printf(
    "<td class=wansetup_main_td><input class=navi_text type=text style=\"width:160px;\" name=\"userid\" maxlength=63 valu"
    "e=\"%s\"></td>\n",
    &v78);
  printf("<td class=wansetup_main_td></td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  v35 = pick_string_134F4(663, v34);
  printf((const char *)&unk_67821, v35);
  printf("<td class=wansetup_main_td><input class=\"navi_text\" type=password style=\"width:160px;\" name=\"passwd\" \t\tid=\"passwd_passwd\" maxlength=63 value=\"");
  sub_11658(&v79);
  puts("\"><input class=\"navi_text\" type=text style=\"width:160px; display:none;\" id=\"passwd_text\" maxlength=63></td>");
  v37 = pick_string_134F4(1148, v36);
  printf(
    "<td class=wansetup_main_td><input type=\"checkbox\" id=\"passviewid\" name=\"passviewname\" onclick=\"clicked_passvi"
    "ew(this.checked, 'passwd');\" value=\"1\">\t\t<label for=\"passviewid\">%s</label></td>",
    v37);
  printf("</tr>");
  printf(
    "<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">\t\t<td class=\"wansetup_main_td\" cols"
    "pan=\"3\"></td></tr>",
    "FFFFFF");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  v39 = pick_string_134F4(216, v38);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v39);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  get_ifconfig(&v96, &v95, &v94);
  sub_1F698("pppoeip", &v95);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  v41 = pick_string_134F4(907, v40);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v41);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_1F698("pppoesm", &v94);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  v43 = pick_string_134F4(345, v42);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v43);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  get_default_gateway(&v96, &v93);
  if ( !strncmp((const char *)&v93, "ppp", 3u) )
    sf_strncpy(&v93, &v95, 20);
  sub_1F698("pppoegw", &v93);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  get_dns_shadow(&v96, "pppoe", &v92, &v91);
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  v45 = pick_string_134F4(227, v44);
  printf("<td class=\"wansetup_main_td\"><span class=\"wansetup_main_p\">%s</span>\n", v45);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_1F698(&unk_67A3B, &v92);
  puts((const char *)&unk_67572);
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  v47 = pick_string_134F4(874, v46);
  printf("<td class=\"wansetup_main_td\"><span class=\"wansetup_main_p\">%s</span>\n", v47);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_1F698("sdns_pppoe", &v91);
  puts("</td>");
  puts("<td class=\"wansetup_main_td\">");
  if ( get_manual_dns_flag(&v96, "pppoe") )
    v48 = "checked";
  else
    v48 = "";
  printf(
    "<input type=checkbox name=\"dns_pppoe_chk\" class=navi_chk %s onclick=\"check_dns_pppoe();\" id=\"dns_pppoe_chkid\">\n",
    v48);
  v50 = pick_string_134F4(637, v49);
  printf("<label for=\"dns_pppoe_chkid\"><span class=\"wansetup_main_span\">%s</span></label>\n", v50);
  puts("</td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  sub_1F87C("pppoe", &v90, &v89, v77);
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  sub_1F9DC("pppoe", v2, v83);
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  printf("<td class=\"wansetup_main_td\">");
  v52 = pick_string_134F4(476, v51);
  printf("<span class=\"wansetup_main_p\">%s</span>", v52);
  printf("</td>");
  printf("<td class=wansetup_main_td>");
  v54 = pick_string_134F4(475, v53);
  printf("<span class=\"wansetup_main_span\">%s</span>", v54);
  printf("<input class=\"navi_text\" type=text name=\"lcp_echo_interval\" size=3 maxlength=3 value=\"%d\" >", v81);
  v56 = pick_string_134F4(878, v55);
  printf("<span style=\"display:inline-block; vertical-align:middle; margin-right:5px;\">%s</span>", v56);
  v58 = pick_string_134F4(474, v57);
  printf("<span style=\"display:inline-block; vertical-align:middle; margin-left:5px;\">%s</span>", v58);
  printf("<input class=\"navi_text\" type=text name=\"lcp_echo_failure\" size=3 maxlength=3 value=\"%d\" >", v82);
  printf("</td>");
  printf("<td class=wansetup_main_td>");
  if ( v80 )
    v59 = "checked";
  else
    v59 = "";
  printf(
    "<input type=checkbox class=navi_chk id=\"lcpid\" name='lcp_flag' %s onclick=\"OnCheckEnableLCP()\" value=1>\n",
    v59);
  v61 = pick_string_134F4(731, v60);
  printf((const char *)&unk_67D4E, v61);
  printf("</td>");
  printf("</tr>");
  printf(
    "<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">\t\t<td class=\"wansetup_main_td\" cols"
    "pan=\"3\"></td></tr>",
    "F7F7F7");
  printf("</table>");
  printf("</td></tr>");
  strcmp((const char *)&v87, "static");
  printf("<tr id=\"static\" class=\"wansetup_main_tr\" style=\"display:%s;\"><td colspan=\"3\">");
  printf("<table class=\"v3_table wansetup_main_table\" width=\"100%%\">");
  printf("<COL width=\"180\"><COL width=\"200\"><COL width=\"%%%%\">");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  v63 = pick_string_134F4(216, v62);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v63);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  get_ifconfig(&v96, &v95, &v94);
  sub_1F698("ip", &v95);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  v65 = pick_string_134F4(907, v64);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v65);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_1F698("sm", &v94);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  v67 = pick_string_134F4(345, v66);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v67);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  get_default_gateway(&v96, &v93);
  if ( !strncmp((const char *)&v93, "ppp", 3u) )
    sf_strncpy(&v93, &v95, 20);
  sub_1F698("gw", &v93);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  get_dns_shadow(&v96, "static", &v92, &v91);
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  v69 = pick_string_134F4(227, v68);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v69);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_1F698(&unk_67DE2, &v92);
  puts((const char *)&unk_67572);
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  v71 = pick_string_134F4(874, v70);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v71);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_1F698("sdns_static", &v91);
  puts((const char *)&unk_67572);
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  sub_1F87C("static", &v90, &v89, v77);
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  sub_1F9DC("static", v2, 1500);
  printf("</tr>");
  printf(
    "<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">\t\t<td class=\"wansetup_main_td\" cols"
    "pan=\"3\"></td></tr>",
    "F7F7F7");
  printf("</table></td></tr>");
  printf(
    "<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s; border-bottom:1px #CCC solid;\">",
    "FFFFFF");
  v73 = pick_string_134F4(635, v72);
  printf("<td class=\"wansetup_main_td\"><span class=\"wansetup_main_p\" id=\"conntitle\">%s</span></td>", v73);
  printf("<td class=\"wansetup_main_td\" colspan=\"2\" height=\"24\">\t<div style=\"width:370px; display:inline-block; *display:inline; zoom:1; vertical-align:middle; margin:0; padding:0;\">\t<p id=\"connstatus\" style=\"width:370px; display:inline-block; *display:inline; zoom:1; vertical-align:middle; margin:0; padding:0;\"></p></div>");
  v75 = pick_string_134F4(28, v74);
  printf(
    "<div style=\"display:inline-block; *display:inline; zoom:1; vertical-align:middle; margin:0 0 0 10px; width:70px; pa"
    "dding:0;\">\t\t<input type=\"button\" class=\"bt\" id=\"appbtn\" value=\"%s\" onclick=\"apply_wansetup('%s','%s');\""
    ">\t\t<input type=\"button\" class=\"bt\" id=\"conbtn\" value=\"\" onclick=\"apply_connection('%s','%s');\" style=\"d"
    "isplay:none;\"></div>\n",
    v75,
    v2,
    &v96,
    v2,
    &v96);
  printf("</td></tr>");
  puts("</form>");
  printf("<form method=\"post\" name=\"backup_wansetup\">");
  return printf("</form>");
}



int __fastcall sub_21B34(int a1)
{

  READ_PPPOE_OPTION_ *v13=(READ_PPPOE_OPTION_ *)(malloc(sizeof(read_pppoe_option_)));
  int v1; // r8@1
  int result; // r0@1
  const char *v3; // r0@3
  int v4; // r0@12
  int v5; // r1@15
  __int16 *v6; // r0@16
  int v7; // r0@31
  int v8; // r0@33
  int v9; // r0@36
  int v10; // r0@36
  int v11; // r0@36
  int v12; // [sp+8h] [bp+0h]@1
  char v14; // [sp+288h] [bp+280h]@24
  int v15; // [sp+330h] [bp+328h]@24
  char v16; // [sp+334h] [bp+32Ch]@26
  char v17; // [sp+338h] [bp+330h]@26
  int v18; // [sp+340h] [bp+338h]@24
  __int16 v19; // [sp+346h] [bp+33Eh]@28
  __int16 v20; // [sp+3C6h] [bp+3BEh]@4
  __int16 v21; // [sp+406h] [bp+3FEh]@28
  __int16 v22; // [sp+426h] [bp+41Eh]@28
  __int16 v23; // [sp+446h] [bp+43Eh]@28
  __int16 v24; // [sp+466h] [bp+45Eh]@33
  __int16 v25; // [sp+47Ah] [bp+472h]@33
  __int16 v26; // [sp+48Eh] [bp+486h]@6
  __int16 v27; // [sp+4A2h] [bp+49Ah]@6
  __int16 v28; // [sp+4B6h] [bp+4AEh]@6
  __int16 v29; // [sp+4CAh] [bp+4C2h]@2
  __int16 v30; // [sp+4DEh] [bp+4D6h]@4

  v1 = a1;
  result = get_value_post(a1, (int)"act", (int)&v12, 512);
  if ( result )
  {
    if ( !get_value_post(v1, (int)"wan", (int)&v29, 20) )
    {
      v3 = "No WAN name is specified. Debug it..";
      return puts(v3);
    }
    get_wan_hw_ifname(&v29, &v30);
    set_wansetup_status(&v29, 1);
    result = get_value_post(v1, (int)"wan_type", (int)&v20, 64);
    if ( !result )
      return result;
    ((void (*)(void))signal_toggle)();
    stop_wan(&v29);
    set_wan_type(&v29, &v20);
    if ( !strcmp((const char *)&v20, "static") )
    {
      strcpy((char *)&v28, "");
      get_ip_value_post(v1, "ip", &v28);
      strcpy((char *)&v27, "");
      get_ip_value_post(v1, "sm", &v27);
      strcpy((char *)&v26, "");
      get_ip_value_post(v1, "gw", &v26);
      set_wan_ipconfig(&v30, &v28, &v27, &v26);
      sub_21820(v1, &v30, &v20);
      set_ifconfig(&v30, &v28, &v27);
      if ( !sysconf_nat_get(1) )
        make_virtual_host_page(&v28);
      if ( check_default_gateway(&v26, &v28, &v27) )
      {
        set_default_gateway(&v30, 0);
      }
      else
      {
        set_default_gateway("br0", 0);
        if ( set_default_gateway(&v30, &v26) )
          set_default_gateway2(&v30, &v28, &v27, &v26);
      }
      v4 = sub_21980(v1, &v29, &v20);
      signal_wan(v4);
    }
    else if ( !strcmp((const char *)&v20, "dynamic") )
    {
      set_ifconfig(&v30, "0.0.0.0", "255.255.255.0");
      set_wan_ipconfig(&v30, "0.0.0.0", "255.255.255.0", 0);
      if ( !get_value_post(v1, (int)"allow_private", (int)&v12, 512) || (v5 = strcmp((const char *)&v12, "on")) != 0 )
      {
        v6 = &v30;
        v5 = 1;
      }
      else
      {
        v6 = &v30;
      }
      set_dhclient_block_private_ip(v6, v5);
      set_dhcp_auto_restart(&v30, 1);
      sub_21820(v1, &v30, &v20);
      sub_21980(v1, &v29, &v20);
    }
    else if ( !strcmp((const char *)&v20, "pppoe") )
    {
      if ( get_pppoe_status(&v29) == 7 )
        set_pppoe_status(&v29, 0);
      set_ifconfig(&v30, "0.0.0.0", "255.255.255.0");
      set_wan_ipconfig(&v30, "0.0.0.0", "255.255.255.0", 0);
      read_pppoe_option((int)&v29, (int)&v13);
      get_value_post(v1, (int)"userid", (int)&v13, 128);
      if ( check_unpermitted_chars(&v13) )
        strcpy(&v13, "");
      get_value_post(v1, (int)"passwd", (int)&v14, 128);
      sub_21820(v1, &v30, &v20);
      v18 = sub_21980(v1, &v29, &v20);
      if ( get_intvalue_post(v1, "lcp_flag", &v15) )
      {
        get_intvalue_post(v1, "lcp_echo_interval", &v16);
        get_intvalue_post(v1, "lcp_echo_failure", &v17);
      }
      else
      {
        v15 = 0;
      }
      save_pppoe_option(&v29, &v13);
    }
    snprintf2((int)&v19, 128, "dns_%s_chk", &v20);
    snprintf2((int)&v22, 32, "fdns_%s", &v20);
    snprintf2((int)&v21, 32, "sdns_%s", &v20);
    if ( get_value_post(v1, (int)&v19, (int)&v23, 32) && !strcmp((const char *)&v23, "on")
      || !strcmp((const char *)&v20, "static") )
    {
      v7 = strcmp((const char *)&v20, "static");
      if ( v7 && !check_valid_account(v7) )
        goto LABEL_36;
      strcpy((char *)&v25, "");
      strcpy((char *)&v24, "");
      get_ip_value_post(v1, &v22, &v25);
      get_ip_value_post(v1, &v21, &v24);
      set_autodns(0);
      dhcpd_set_dns(&v25, &v24);
      set_manual_dns_flag(&v30, &v20, 1);
      v8 = set_dns_shadow(&v30, &v20, &v25, &v24);
      get_remote_addr(v8);
      syslog_msg(1, "@{57}");
    }
    else
    {
      set_autodns(1);
      set_manual_dns_flag(&v30, &v20, 0);
    }
    set_system_dns(&v29);
LABEL_36:
    v9 = istatus_remove_status_tag("lanwan_samenetwork");
    v10 = signal_toggle(v9);
    v11 = signal_update(v10);
    signal_save(v11);
    puts("<script language=JavaScript>");
    v3 = "</script>";
    return puts(v3);
  }
  return result;
}

int __fastcall sub_3CBF4(int a1)
{

  READ_PPPOE_OPTION_ *v70=(READ_PPPOE_OPTION_ *)(malloc(sizeof(read_pppoe_option_)));
  int v1; // r6@1
  int v2; // r1@7
  char *v3; // r5@7
  int v4; // r4@7
  int v5; // r1@7
  int v6; // r0@7
  int v7; // r0@7
  int v8; // r1@7
  int v9; // r0@7
  int v10; // r1@7
  char *v11; // r4@8
  int v12; // r0@10
  int v13; // r1@10
  char *v14; // r4@11
  int v15; // r0@13
  int v16; // r0@13
  int v17; // r1@13
  int v18; // r0@13
  int v19; // r1@13
  char *v20; // r4@14
  int v21; // r0@16
  int v22; // r0@16
  int v23; // r1@16
  int v24; // r0@18
  int v25; // r0@18
  int v26; // r1@22
  int v27; // r4@25
  int v28; // r1@25
  int v29; // r0@25
  int v30; // r1@25
  int v31; // r0@25
  int v32; // r1@25
  int v33; // r0@25
  int v34; // r1@25
  int v35; // r0@25
  int v36; // r1@25
  const char *v37; // r0@25
  const char *v38; // r0@25
  int v39; // r1@27
  int v40; // r4@34
  int v41; // r1@34
  int v42; // r0@34
  int v43; // r0@34
  int v44; // r1@34
  int v45; // r0@34
  int v46; // r0@34
  int v47; // r0@34
  int v48; // r1@34
  int v49; // r0@34
  int v50; // r0@34
  int v51; // r0@34
  int v52; // r1@34
  int v53; // r0@34
  int v54; // r0@34
  int v55; // r0@34
  int v56; // r1@34
  int v57; // r0@34
  int v58; // r0@34
  int v59; // r0@34
  int v60; // r1@34
  int v61; // r0@34
  int v62; // r0@34
  int v63; // r0@36
  int v64; // r1@36
  int v65; // r0@36
  int v66; // r1@36
  int v67; // r0@36
  int v68; // r0@36
  char v71; // [sp+80h] [bp-2E0h]@24
  char v72; // [sp+13Ch] [bp-224h]@22
  char v73; // [sp+1BCh] [bp-1A4h]@22
  char v74; // [sp+1FCh] [bp-164h]@22
  char v75; // [sp+23Ch] [bp-124h]@22
  char v76; // [sp+27Ch] [bp-E4h]@1
  char v77; // [sp+2BCh] [bp-A4h]@27
  char v78; // [sp+2D0h] [bp-90h]@27
  char v79; // [sp+2E4h] [bp-7Ch]@3
  char dest; // [sp+2F8h] [bp-68h]@3
  char s1; // [sp+30Ch] [bp-54h]@3
  char v82; // [sp+320h] [bp-40h]@1
  char v83; // [sp+330h] [bp-30h]@27
  char v84; // [sp+338h] [bp-28h]@3

  v1 = a1;
  get_value(a1, "ifname", &v82, 16);
  puts("<form method=get action=timepro.cgi name=wizard>");
  puts("<input type=hidden name=tmenu value=wizard>");
  puts("<input type=hidden name=config value=manual>");
  puts("<input type=hidden name=step>");
  printf("<input type=hidden name=ifname value=%s>\n", &v82);
  if ( get_value(v1, "wan_type", &v76, 64) )
  {
    printf("<input type=hidden name=wan_type value=%s>\n", &v76);
    if ( strcmp(&v76, "dynamic") )
    {
      if ( !strcmp(&v76, "pppoe") )
      {
        get_value(v1, "ifname", &v74, 64);
        eth2wan(&v74, &v73);
        strcpy(&v72, "");
        strcpy(&v75, "");
        get_value(v1, "userid", &v72, 128);
        get_value(v1, "passwd", &v75, 64);
        if ( !v72 && !v75 )
        {
          read_pppoe_option((int)&v73, (int)&v70);
          sf_strncpy(&v72, &v70, 128);
          sf_strncpy(&v75, &v71, 64);
        }
        v27 = pick_string_134F4(1366, v26);
        v29 = pick_string_134F4(1367, v28);
        sub_124D8(v27, v29);
        puts((const char *)&unk_860B2);
        v31 = pick_string_134F4(1368, v30);
        printf((const char *)&unk_86063, v31);
        printf("<table class=navicontent_table>");
        printf("<tr><td width=100>");
        v33 = pick_string_134F4(385, v32);
        printf("%s", v33);
        printf("</td><td>");
        printf("<input type=text name=userid style=\"width:150;\" maxlength=63 value='%s'>", &v72);
        printf("</td></tr>");
        printf("<tr><td width=100>");
        v35 = pick_string_134F4(756, v34);
        printf("%s", v35);
        printf("</td><td>");
        printf("<input type=password name=\"passwd\" style=\"width:150;\" maxlength=32 value='%s'>", &v75);
        printf("</td></tr>");
        printf("</table>");
        v37 = (const char *)pick_string_134F4(1304, v36);
        printf(v37);
        v38 = "</td></tr>";
      }
      else
      {
        if ( strcmp(&v76, "static") )
          goto LABEL_36;
        get_value(v1, "ifname", &v83, 8);
        eth2wan(&v83, &v84);
        strcpy(&s1, "");
        strcpy(&dest, "");
        strcpy(&dest, "");
        strcpy(&v79, "");
        strcpy(&v78, "");
        strcpy(&v77, "");
        get_value(v1, "ip", &s1, 20);
        get_value(v1, "sm", &dest, 20);
        get_value(v1, "gw", &v79, 20);
        get_value(v1, "fdns", &v78, 20);
        get_value(v1, "sdns", &v77, 20);
        if ( !s1 && !dest && !v79 )
          get_wan_ipinfo(&v84, &s1, &dest, &v79);
        if ( !v78 && !v77 )
          get_domain_name_server(&v78, &v77);
        v40 = pick_string_134F4(1357, v39);
        v42 = pick_string_134F4(1358, v41);
        sub_124D8(v40, v42);
        puts((const char *)&unk_860B2);
        v43 = puts("<table>");
        str(v43);
        v45 = pick_string_134F4(216, v44);
        printf("<td>%s</td>", v45);
        puts("<td>");
        sub_11D7C((int)"ip", &s1, 1);
        v46 = printf("</td>");
        v47 = etr(v46);
        str(v47);
        v49 = pick_string_134F4(907, v48);
        printf("<td>%s</td>", v49);
        puts("<td>");
        sub_11D7C((int)"sm", &dest, 1);
        v50 = puts("</td>");
        v51 = etr(v50);
        str(v51);
        v53 = pick_string_134F4(345, v52);
        printf("<td>%s</td>", v53);
        puts("<td>");
        sub_11D7C((int)"gw", &v79, 1);
        v54 = puts("</td>");
        v55 = etr(v54);
        str(v55);
        v57 = pick_string_134F4(1359, v56);
        printf("<td>%s</td>", v57);
        puts("<td>");
        sub_11D7C((int)"fdns", &v78, 1);
        v58 = puts("</td>");
        v59 = etr(v58);
        str(v59);
        v61 = pick_string_134F4(1360, v60);
        printf("<td>%s</td>", v61);
        puts("<td>");
        sub_11D7C((int)"sdns", &v77, 1);
        v62 = puts("</td>");
        etr(v62);
        v38 = "</table></td></tr>";
      }
      puts(v38);
      goto LABEL_36;
    }
    get_value(v1, "ifname", &v84, 8);
    strcpy(&v79, "");
    strcpy(&dest, "");
    get_value(v1, "hw_conf", &v79, 20);
    if ( !get_value(v1, "private", &s1, 20) )
      strcpy(&s1, "on");
    if ( !v79 )
      strcpy(&v79, "auto");
    get_value(v1, "hw_addr", &dest, 20);
    v3 = "checked";
    v4 = pick_string_134F4(1355, v2);
    v6 = pick_string_134F4(1356, v5);
    v7 = sub_124D8(v4, v6);
    str(v7);
    puts("<td height=190 class=wizardbody_td>");
    v9 = pick_string_134F4(1361, v8);
    printf("%s<br><br>", v9);
    if ( !strcmp(&v79, "auto") )
      v11 = "checked";
    else
      v11 = "";
    v12 = pick_string_134F4(1362, v10);
    printf("<input type=radio name=hw_conf value=auto onclick=\"DisableHW('hw');\" %s> %s<br>", v11, v12);
    if ( !strcmp(&v79, "manual") )
      v14 = "checked";
    else
      v14 = "";
    v15 = pick_string_134F4(1363, v13);
    printf((const char *)&unk_85FBE, v14, v15);
    print_nbsp(8);
    v16 = sub_121A0((int)"hw", &dest, 0);
    br(v16);
    print_nbsp(10);
    v18 = pick_string_134F4(1364, v17);
    printf("%s<br>\n", v18);
    if ( !strcmp(&v79, "noclone") )
      v20 = "checked";
    else
      v20 = "";
    v21 = pick_string_134F4(1365, v19);
    v22 = printf((const char *)&unk_86017, v20, v21);
    br(v22);
    if ( strcmp(&s1, "on") )
      v3 = "";
    v24 = pick_string_134F4(1369, v23);
    printf("<input type=checkbox name=private value=on %s> %s", v3, v24);
    v25 = printf("</td>");
    etr(v25);
    printf("<script>");
    if ( strcmp(&v79, "manual") )
      printf("DisableHW('hw');");
    printf("</script>");
  }
LABEL_36:
  v63 = print_blank_line(1, 2);
  str(v63);
  puts("<td class=wizardbottom_td align=right>");
  v65 = pick_string_134F4(1335, v64);
  printf("<input type=button class=navi_bt name=prev value='%s' onclick=\"WizardGotoPage(1);\">", v65);
  v67 = pick_string_134F4(1334, v66);
  printf("<input type=button class=navi_bt name=next value='%s' onclick=\"WizardGotoPage(3);\">", v67);
  v68 = puts("</td>");
  etr(v68);
  return puts("</form>");
}

int __fastcall sub_3DEEC(int a1)
{
  READ_PPPOE_OPTION_ *v84=(READ_PPPOE_OPTION_ *)(malloc(sizeof(read_pppoe_option_)));
  int v1; // r7@1
  int result; // r0@3
  int v3; // r1@11
  int v4; // r0@12
  int v5; // r1@12
  int v6; // r0@14
  int v7; // r1@14
  int v8; // r0@15
  int v9; // r1@16
  const char *v10; // r0@16
  int v11; // r0@17
  int v12; // r0@17
  int v13; // r1@17
  int v14; // r0@17
  int v15; // r1@17
  int v16; // r4@17
  int v17; // r0@17
  int v18; // r1@19
  int v19; // r0@19
  int v20; // r0@19
  int v21; // r4@20
  int v22; // r0@21
  int v23; // r1@22
  int v24; // r0@22
  char *v25; // r5@22
  int v26; // r1@22
  int v27; // r0@22
  int v28; // r1@22
  int v29; // r0@22
  int v30; // r0@22
  int v31; // r0@22
  int v32; // r1@22
  int v33; // r0@22
  int v34; // r1@22
  int v35; // r0@22
  int v36; // r0@22
  char *v37; // r1@23
  const char *v38; // r0@23
  int v39; // r0@29
  char *v40; // r2@29
  __int16 *v41; // r1@30
  const char *v42; // r0@32
  int v43; // r1@36
  int v44; // r1@37
  int v45; // r4@37
  int v46; // r0@37
  int v47; // r0@39
  int v48; // r1@39
  int v49; // r0@40
  int v50; // r0@42
  int v51; // r1@42
  int v52; // r0@42
  int v53; // r1@42
  int v54; // r0@42
  int v55; // r1@42
  int v56; // r0@42
  int v57; // r1@42
  int v58; // r0@42
  int v59; // r1@42
  int v60; // r0@42
  int v61; // r1@42
  int v62; // r0@42
  int v63; // r1@42
  int v64; // r0@42
  const char *v65; // r0@43
  int v66; // r10@49
  int v67; // r0@53
  int v68; // r1@54
  int v69; // r0@54
  int v70; // r0@54
  int v71; // r1@54
  int v72; // r0@54
  int v73; // r1@54
  int v74; // r0@54
  int v75; // r1@54
  int v76; // r0@54
  int v77; // r0@54
  int v78; // r1@54
  int v79; // r0@54
  int v80; // r1@54
  int v81; // r0@54
  int v82; // r0@54
  int v83; // r0@54
  char v85; // [sp+84h] [bp-26Ch]@53
  __int16 v86; // [sp+142h] [bp-1AEh]@22
  __int16 v87; // [sp+182h] [bp-16Eh]@19
  __int16 v88; // [sp+1C2h] [bp-12Eh]@8
  __int16 v89; // [sp+202h] [bp-EEh]@46
  __int16 v90; // [sp+222h] [bp-CEh]@48
  __int16 v91; // [sp+242h] [bp-AEh]@6
  __int16 v92; // [sp+262h] [bp-8Eh]@1
  __int16 v93; // [sp+282h] [bp-6Eh]@11
  char s1; // [sp+2A0h] [bp-50h]@34
  char v95; // [sp+2B0h] [bp-40h]@25
  char v96; // [sp+2C0h] [bp-30h]@11
  char v97; // [sp+2C8h] [bp-28h]@11

  v1 = a1;
  if ( get_value(a1, "step", &v92, 32) )
  {
    if ( !strcmp((const char *)&v92, "save") )
      return sub_1253C(v1);
    if ( !strcmp((const char *)&v92, "finish") )
      return sub_12418(v1);
  }
  if ( !get_value(v1, "config", &v91, 32) )
    return sub_3CA1C(v1);
  if ( strcmp((const char *)&v91, "auto") )
  {
    result = strcmp((const char *)&v91, "manual");
    if ( !result )
      result = sub_3D490(v1);
    return result;
  }
  result = get_value(v1, "step", &v88, 64);
  if ( !result )
    return result;
  if ( !strcmp((const char *)&v88, "0") )
    return sub_3CA1C(v1);
  if ( !strcmp((const char *)&v88, "1") )
  {
    get_value(v1, "ifname", &v96, 8);
    eth2wan(&v96, &v97);
    set_wansetup_status(&v97, 1);
    puts("<form method=get action=timepro.cgi name=wizard>");
    puts("<input type=hidden name=tmenu value=wizard>");
    puts("<input type=hidden name=config value=auto>");
    puts("<input type=hidden name=step>");
    printf("<input type=hidden name=ifname value=%s>\n", &v96);
    get_link_status(65537, &v93);
    if ( !strcmp((const char *)&v93, "On") )
    {
      v4 = pick_string_134F4(1294, v3);
      v5 = 0;
    }
    else
    {
      v4 = pick_string_134F4(1293, v3);
      v5 = 0;
    }
    v6 = sub_124D8(v4, v5);
    str(v6);
    puts("<td height=190 class=wizardbody_td>");
    if ( !strcmp((const char *)&v93, "On") )
    {
      puts("<input type=hidden name=start_flag value=1>");
      v10 = (const char *)pick_string_134F4(1292, v9);
      printf(v10);
    }
    else
    {
      v8 = pick_string_134F4(1291, v7);
      printf("%s", v8);
      printf("<meta http-equiv=refresh content=\"3; URL=timepro.cgi?tmenu=wizard&config=auto&step=1&ifname=%s\">", &v96);
    }
    v11 = printf("</td>");
    etr(v11);
    v12 = print_blank_line(1, 2);
    str(v12);
    puts("<td class=wizardbottom_td align=right>");
    v14 = pick_string_134F4(1335, v13);
    printf("<input type=button class=navi_bt name=next value='%s' onclick=\"WizardGotoPage(0);\">", v14);
    v16 = pick_string_134F4(1334, v15);
    strcmp((const char *)&v93, "On");
    printf("<input type=button class=navi_bt name=next value='%s' onclick=\"WizardGotoPage(2);\" %s>", v16);
    v17 = printf("</td>");
    etr(v17);
LABEL_43:
    v65 = "</form>";
    return puts(v65);
  }
  if ( !strcmp((const char *)&v88, "2") )
  {
    get_value(v1, "ifname", &v97, 8);
    eth2wan(&v97, &v96);
    puts("<form method=get action=timepro.cgi name=wizard>");
    puts("<input type=hidden name=tmenu value=wizard>");
    puts("<input type=hidden name=config value=auto>");
    puts("<input type=hidden name=step>");
    printf("<input type=hidden name=ifname value=%s>\n", &v97);
    v19 = pick_string_134F4(1298, v18);
    sub_124D8(v19, 0);
    v20 = get_value(v1, "start_flag", &v87, 64);
    if ( v20 )
    {
      v20 = strcmp((const char *)&v87, "1");
      v21 = v20;
      if ( !v20 )
      {
        wizard_api_set_mode(1);
        set_dhclient_block_private_ip(&v97, v21);
        wizard_api_set_status(&v97, "detecting");
        set_default_gateway("br0", v21);
        set_default_gateway(&v97, v21);
        set_ifconfig(&v97, "0.0.0.0", "255.255.255.0");
        set_wan_type(&v96, "pppoe");
        set_pppoe_status(&v96, v21);
        pppoe_stop(&v96);
        v22 = dhclient_stop(&v96);
        v20 = signal_update(v22);
      }
    }
    etr(v20);
    puts("<td height=190 class=wizardbody_td>");
    v24 = pick_string_134F4(1295, v23);
    v25 = &v97;
    printf("%s<br>", v24);
    v27 = pick_string_134F4(1296, v26);
    printf("%s<br>", v27);
    v29 = pick_string_134F4(1297, v28);
    printf("%s<br><br>", v29);
    v30 = puts("</td>");
    etr(v30);
    v31 = print_blank_line(1, 2);
    str(v31);
    puts("<td class=wizardbottom_td align=right>");
    v33 = pick_string_134F4(1335, v32);
    printf("<input type=button class=navi_bt name=prev value='%s' onclick=\"WizardGotoPage(1);\">", v33);
    v35 = pick_string_134F4(1334, v34);
    printf("<input type=button class=navi_bt name=next value='%s' disabled>", v35);
    v36 = puts("</td>");
    etr(v36);
    puts("</form>");
    wizard_api_get_status(&v97, &v86);
    if ( !strcmp((const char *)&v86, "detecting") )
    {
      v37 = &v97;
      v38 = "<meta http-equiv=refresh content=\"5; URL=timepro.cgi?tmenu=wizard&config=auto&step=2&ifname=%s\">";
      return printf(v38, v37);
    }
    if ( !strcmp((const char *)&v86, "detected") )
    {
      get_wan_type(&v96, &v95);
      if ( !strcmp(&v95, "pppoe") )
      {
        v38 = "<meta http-equiv=refresh content=\"3; URL=timepro.cgi?tmenu=wizard&config=auto&step=3&ifname=%s\">";
        v37 = &v97;
        return printf(v38, v37);
      }
LABEL_56:
      v37 = v25;
      v38 = "<meta http-equiv=refresh content=\"3; URL=timepro.cgi?tmenu=wizard&config=auto&step=5&ifname=%s\">";
      return printf(v38, v37);
    }
    result = strcmp((const char *)&v86, "timeout");
    if ( result )
      return result;
    v39 = istatus_get_intvalue_direct((int)"lanwan_samenetwork");
    v40 = &v97;
    if ( v39 == 1 )
      v41 = (__int16 *)7;
    else
      v41 = (__int16 *)6;
    v42 = "<meta http-equiv=refresh content=\"3; URL=timepro.cgi?tmenu=wizard&config=auto&step=%d&ifname=%s\">";
    return printf(v42, v41, v40);
  }
  if ( !strcmp((const char *)&v88, "3") )
  {
    get_value(v1, "ifname", &v95, 16);
    if ( !get_value(v1, "auth", &s1, 16) )
      strcpy(&s1, "success");
    puts("<form method=get action=timepro.cgi name=wizard>");
    puts("<input type=hidden name=tmenu value=wizard>");
    puts("<input type=hidden name=config value=auto>");
    puts("<input type=hidden name=step>");
    printf("<input type=hidden name=ifname value=%s>\n", &v95);
    puts("<input type=hidden name=pppoe_start value=1>");
    if ( !strcmp(&s1, "fail") )
    {
      v45 = pick_string_134F4(1305, v43);
      v46 = 1307;
    }
    else
    {
      v45 = pick_string_134F4(1306, v43);
      v46 = 1303;
    }
    v47 = pick_string_134F4(v46, v44);
    sub_124D8(v45, v47);
    puts((const char *)&unk_860B2);
    if ( !strcmp(&s1, "fail") )
      v49 = 1299;
    else
      v49 = 1300;
    v50 = pick_string_134F4(v49, v48);
    printf("%s<br>", v50);
    v52 = pick_string_134F4(1301, v51);
    printf("%s<br>", v52);
    v54 = pick_string_134F4(1302, v53);
    printf("%s<br><br>", v54);
    printf("<table class=navicontent_table >");
    printf("<tr><td width=100>");
    v56 = pick_string_134F4(385, v55);
    printf("%s", v56);
    printf("</td><td>");
    printf("<input type=text name=\"userid\" style=\"width:150\" maxlength=63>");
    printf("</td></tr>");
    printf("<tr><td width=100>");
    v58 = pick_string_134F4(756, v57);
    printf("%s", v58);
    printf("</td><td>");
    printf("<input type=password name=\"passwd\" style=\"width:150\" maxlength=32>");
    printf("</td></tr>");
    printf("</table>");
    v60 = pick_string_134F4(1304, v59);
    printf("<span class=gray_text>%s</span>", v60);
    print_blank_line(1, 2);
    puts((const char *)&unk_86AAC);
    v62 = pick_string_134F4(1335, v61);
    printf("<input type=button class=navi_bt name=next value='%s' onclick=\"WizardGotoPage(1);\">", v62);
    v64 = pick_string_134F4(1334, v63);
    printf("<input type=button class=navi_bt name=next value='%s' onclick=\"WizardGotoPage(4);\">", v64);
    puts("</td></tr>");
    goto LABEL_43;
  }
  if ( !strcmp((const char *)&v88, "4") )
  {
    if ( !get_value(v1, "ifname", &v89, 32) )
    {
      v65 = "Debug:auto_step4: No ifname..";
      return puts(v65);
    }
    eth2wan(&v89, &s1);
    if ( get_value(v1, "count", &v90, 32) )
      v66 = atoi((const char *)&v90);
    else
      v66 = 0;
    if ( get_value(v1, "pppoe_start", &v90, 32) && !strcmp((const char *)&v90, "1") )
    {
      read_pppoe_option((int)&s1, (int)&v84);
      get_value(v1, "userid", &v84, 128);
      get_value(v1, "passwd", &v85, 128);
      set_default_gateway("br0", 0);
      set_default_gateway(&v89, 0);
      set_ifconfig(&v89, "0.0.0.0", "255.255.255.0");
      save_pppoe_option(&s1, &v84);
      v67 = pppoe_stop(&s1);
      signal_update(v67);
    }
    puts("<form method=get action=timepro.cgi name=wizard>");
    puts("<input type=hidden name=tmenu value=wizard>");
    puts("<input type=hidden name=config value=auto>");
    v25 = (char *)&v89;
    puts("<input type=hidden name=step>");
    printf("<input type=hidden name=ifname value=%s>\n", &v89);
    v69 = pick_string_134F4(1311, v68);
    v70 = sub_124D8(v69, 0);
    str(v70);
    puts("<td height=190 class=\"wizardbody_td\">");
    v72 = pick_string_134F4(1308, v71);
    printf("%s<br>\n", v72);
    v74 = pick_string_134F4(1309, v73);
    printf("%s<br>\n", v74);
    v76 = pick_string_134F4(1310, v75);
    printf("%s<br>\n", v76);
    v77 = print_blank_line(1, 2);
    str(v77);
    puts("<td class=wizardbottom_td align=right>");
    v79 = pick_string_134F4(1335, v78);
    printf("<input type=button class=navi_bt name=next value='%s' onclick=\"WizardGotoPage(3);\">", v79);
    v81 = pick_string_134F4(1334, v80);
    printf("<input type=button class=navi_bt name=next value='%s' disabled>", v81);
    v82 = puts("</td>");
    etr(v82);
    puts("</form>");
    v83 = get_pppoe_status(&s1);
    if ( v83 == 4 )
    {
      if ( check_wan_connected(&s1) )
        goto LABEL_56;
    }
    else
    {
      if ( v83 == 6 )
      {
        v37 = (char *)&v89;
        v38 = "<meta http-equiv=refresh content=\"3; URL=timepro.cgi?tmenu=wizard&config=auto&step=3&ifname=%s&auth=fail\">";
        return printf(v38, v37);
      }
      if ( v83 == 7 )
        goto LABEL_61;
    }
    v40 = (char *)(v66 + 1);
    if ( 3 * (v66 + 1) <= 30 )
    {
      v42 = "<meta http-equiv=refresh content=\"3; URL=timepro.cgi?tmenu=wizard&config=auto&step=4&ifname=%s&count=%d\">";
      v41 = &v89;
      return printf(v42, v41, v40);
    }
LABEL_61:
    v37 = (char *)&v89;
    v38 = "<meta http-equiv=refresh content=\"3; URL=timepro.cgi?tmenu=wizard&config=auto&step=6&ifname=%s&timeout=pppoe\">";
    return printf(v38, v37);
  }
  if ( !strcmp((const char *)&v88, "5") )
  {
    result = sub_3C2B0(v1);
  }
  else if ( !strcmp((const char *)&v88, "6") )
  {
    result = sub_3C0D4(v1);
  }
  else if ( !strcmp((const char *)&v88, "7") )
  {
    result = sub_3C534(v1);
  }
  else
  {
    result = strcmp((const char *)&v88, "8");
    if ( !result )
      result = sub_3C82C(v1);
  }
  return result;
}

int __fastcall sub_3EB20(int a1)
{
  READ_PPPOE_OPTION_ *v8=(READ_PPPOE_OPTION_ *)(malloc(sizeof(read_pppoe_option_)));
  char *v1; // r7@1
  int v2; // r6@1
  int result; // r0@1
  char *v4; // r5@6
  int v5; // r1@12
  char *v6; // r0@13
  int v7; // r0@28
  char v9; // [sp+80h] [bp-190h]@17
  char v10; // [sp+13Ch] [bp-D4h]@3
  char v11; // [sp+17Ch] [bp-94h]@1
  char v12; // [sp+19Ch] [bp-74h]@19
  char cp; // [sp+1B0h] [bp-60h]@19
  char v14; // [sp+1C4h] [bp-4Ch]@6
  char v15; // [sp+1D8h] [bp-38h]@6
  char v16; // [sp+1ECh] [bp-24h]@10
  char v17; // [sp+200h] [bp-10h]@1
  char v18; // [sp+210h] [bp+0h]@1
  char dest; // [sp+220h] [bp+10h]@12

  v1 = &v18;
  v2 = a1;
  get_value(a1, "ifname", &v18, 16);
  eth2wan(&v18, &v17);
  result = get_value(v2, "wan_type", &v11, 32);
  if ( result )
  {
    if ( strcmp(&v11, "dynamic") )
    {
      if ( !strcmp(&v11, "pppoe") )
      {
        read_pppoe_option((int)&v17, (int)&v8);
        get_value(v2, "userid", &v8, 128);
        get_value(v2, "passwd", &v9, 128);
        save_pppoe_option(&v17, &v8);
      }
      else if ( !strcmp(&v11, "static") )
      {
        get_value(v2, "ip", &v16, 20);
        get_value(v2, "sm", &v15, 20);
        get_value(v2, "gw", &v14, 20);
        get_value(v2, "fdns", &cp, 20);
        get_value(v2, "sdns", &v12, 20);
        set_wan_ipconfig(&v18, &v16, &v15, &v14);
        set_ifconfig(&v18, &v16, &v15);
        if ( check_default_gateway(&v14, &v16, &v15) )
        {
          set_default_gateway("br0", 0);
          set_default_gateway(&v18, 0);
        }
        else
        {
          set_default_gateway("br0", 0);
          if ( set_default_gateway(&v18, &v14) )
            set_default_gateway2(&v18, &v16, &v15, &v14);
        }
        if ( inet_addr(&cp) == -1 )
          strcpy(&cp, "");
        if ( inet_addr(&v12) == -1 )
          strcpy(&v12, "");
        dhcpd_set_dns(&cp, &v12);
        set_domain_name_server(&cp, &v12, "eth1");
        set_dns_shadow(&v18, &v11, &cp, &v12);
      }
      goto LABEL_28;
    }
    if ( !get_value(v2, "hw_conf", &v10, 64) )
    {
LABEL_28:
      set_wan_type(&v17, &v11);
      pppoe_stop(&v17);
      v7 = dhclient_stop(&v17);
      return signal_update(v7);
    }
    if ( !strcmp(&v10, "auto") || !strcmp(&v10, "manual") )
    {
      v1 = &v18;
      v4 = &v14;
      get_hwaddr_kernel((int)&v18, (int)&v15);
      get_value(v2, "hw_addr", &v14, 20);
      if ( strcmp(&v14, &v15) && !check_invalid_hwaddr(&v14) )
      {
LABEL_11:
        set_hwaddr_kernel(v1, v4, 1);
        set_hwaddr_cloned(v1, v4);
        goto LABEL_12;
      }
    }
    else if ( !strcmp(&v10, "noclone") )
    {
      v4 = &v16;
      get_hwaddr_org(&v18, &v16);
      get_hwaddr_kernel((int)&v18, (int)&v15);
      if ( strcmp(&v16, &v15) )
        goto LABEL_11;
    }
LABEL_12:
    strcpy(&dest, "");
    get_value(v2, "private", &dest, 8);
    v5 = strcmp(&dest, "on");
    if ( v5 )
    {
      v6 = &v18;
      v5 = 1;
    }
    else
    {
      v6 = &v18;
    }
    set_dhclient_block_private_ip(v6, v5);
    goto LABEL_28;
  }
  return result;
}




signed int __fastcall sub_1ADC0(int a1)
{
  SET_TIMESERVER_ *s=(SET_TIMESERVER_ *)(malloc(sizeof(set_timeserver_)));
  
  READ_SNMP_CONF_ *v49=(READ_SNMP_CONF_ *)(malloc(sizeof(read_snmp_conf_)));
  
  ADD_GEN_SCHEDULE_ *v63=(ADD_GEN_SCHEDULE_ *)(malloc(sizeof(add_gen_schedule_)));

  int v1; // r6@1
  _BYTE *v2; // r0@5
  int v3; // r0@7
  int v4; // r4@10
  int v5; // r4@14
  const char *v6; // r1@15
  int v7; // r0@17
  int *v8; // r0@21
  signed int v9; // r1@21
  int v10; // r0@26
  int v11; // r0@29
  int v12; // r0@32
  int v13; // r4@37
  int v14; // r0@37
  bool v15; // zf@37
  signed int v16; // r3@40
  int v17; // r12@43
  int v18; // r4@46
  int v19; // r3@46
  int v20; // r4@51
  int v21; // r3@51
  int v22; // r4@56
  int v23; // r3@56
  int v24; // r4@61
  int v25; // r3@61
  int v26; // r4@66
  int v27; // r3@66
  int v28; // r4@71
  int v29; // r3@71
  int v30; // r4@76
  int v31; // r3@76
  const char *v32; // r1@90
  signed int v33; // r0@90
  int v34; // r0@93
  int v35; // r0@94
  int v36; // r0@102
  int v38; // r0@130
  int v39; // r0@132
  int v40; // r0@133
  int v41; // r1@133
  int v42; // r0@134
  int v43; // [sp+0h] [bp-950h]@100
  int v44; // [sp+10h] [bp-940h]@100
  int v45; // [sp+24h] [bp-92Ch]@100
  char v46; // [sp+38h] [bp-918h]@100
  int v47; // [sp+4Ch] [bp-904h]@100
  int v48; // [sp+60h] [bp-8F0h]@100
  int v50; // [sp+3BCh] [bp-594h]@106
  int v51; // [sp+3C0h] [bp-590h]@108
  int v52; // [sp+440h] [bp-510h]@111
  int v53; // [sp+4C0h] [bp-490h]@114
  char dest; // [sp+540h] [bp-410h]@117
  char v55; // [sp+5C0h] [bp-390h]@120
  _BYTE v56[3]; // [sp+641h] [bp-30Fh]@3
  char v57; // [sp+740h] [bp-210h]@105
  char v59; // [sp+800h] [bp-150h]@130
  int v60; // [sp+808h] [bp-148h]@130
  int v61; // [sp+80Ch] [bp-144h]@130
  int v62; // [sp+810h] [bp-140h]@128
  int v64; // [sp+834h] [bp-11Ch]@46
  int v65; // [sp+838h] [bp-118h]@45
  char v66; // [sp+83Ch] [bp-114h]@49
  char v67; // [sp+83Dh] [bp-113h]@54
  char v68; // [sp+83Eh] [bp-112h]@59
  char v69; // [sp+83Fh] [bp-111h]@64
  char v70; // [sp+840h] [bp-110h]@69
  char v71; // [sp+841h] [bp-10Fh]@74
  char v72; // [sp+842h] [bp-10Eh]@79
  int v73; // [sp+844h] [bp-10Ch]@81
  int v74; // [sp+848h] [bp-108h]@82
  int v75; // [sp+84Ch] [bp-104h]@84
  int v76; // [sp+850h] [bp-100h]@82
  int v77; // [sp+854h] [bp-FCh]@84
  int v78; // [sp+858h] [bp-F8h]@1
  int v79; // [sp+898h] [bp-B8h]@96
  int v80; // [sp+8B8h] [bp-98h]@96
  int v81; // [sp+8CCh] [bp-84h]@96
  char v82; // [sp+8E0h] [bp-70h]@98
  int v83; // [sp+8F4h] [bp-5Ch]@98
  int v84; // [sp+908h] [bp-48h]@97
  int v85; // [sp+91Ch] [bp-34h]@20
  int v86; // [sp+92Ch] [bp-24h]@35
  int v87; // [sp+930h] [bp-20h]@2
  __int16 v88; // [sp+934h] [bp-1Ch]@46
  __int16 v89; // [sp+936h] [bp-1Ah]@34

  v1 = a1;
  if ( !get_value_post(a1, (int)"service", (int)&v78, 64) )
    return 0;
  v87 = 0;
  if ( !strcmp((const char *)&v78, "hostname") )
  {
    if ( !get_value_post(v1, (int)"hostnameh", (int)v56, 255) || check_unpermitted_chars(v56) )
      v2 = 0;
    else
      v2 = v56;
    v3 = set_hostname(v2);
    goto LABEL_135;
  }
  if ( !strcmp((const char *)&v78, "autosaving") )
  {
    if ( get_value_post(v1, (int)"autosavingh", (int)&v78, 64) )
    {
      v4 = atoi((const char *)&v78);
      v3 = set_autosaving();
      if ( !v4 )
        v3 = saveconf(v3);
      goto LABEL_135;
    }
    return 0;
  }
  if ( !strcmp((const char *)&v78, "fakedns") )
  {
    if ( get_value_post(v1, (int)"fakednsh", (int)&v78, 64) )
    {
      v5 = atoi((const char *)&v78);
      if ( v5 )
        v6 = "@{62}";
      else
        v6 = "@{63}";
      syslog_msg(1, v6);
      v7 = set_fakedns(v5);
LABEL_88:
      v3 = signal_update(v7);
      goto LABEL_135;
    }
    return 0;
  }
  if ( !strcmp((const char *)&v78, "dhcp_restart") )
  {
    v7 = get_value_post(v1, (int)"dhcp_auto_restart_1", (int)&v78, 64);
    if ( v7 )
    {
      get_wan_hw_ifname("wan1", &v85);
      if ( !strcmp((const char *)&v78, "on") )
      {
        v8 = &v85;
        v9 = 1;
      }
      else
      {
        v8 = &v85;
        v9 = 0;
      }
      v7 = set_dhcp_auto_restart(v8, v9);
    }
    goto LABEL_88;
  }
  if ( !strcmp((const char *)&v78, "nologin") )
  {
    if ( !get_value_post(v1, (int)"nologinh", (int)&v78, 64) )
      return 0;
    v10 = atoi((const char *)&v78);
    v3 = set_nologin(v10);
LABEL_135:
    signal_save(v3);
    return 1;
  }
  if ( !strcmp((const char *)&v78, "wbmpopup") )
  {
    if ( !get_value_post(v1, (int)"wbmpopuph", (int)&v78, 64) )
      return 0;
    v11 = atoi((const char *)&v78);
    v3 = set_wbm_popup_flag(v11);
    goto LABEL_135;
  }
  if ( !strcmp((const char *)&v78, "apcplan") )
  {
    if ( !get_value_post(v1, (int)"apcplanh", (int)&v78, 64) )
      return 0;
    v12 = atoi((const char *)&v78);
    v3 = set_apcplan_flag(v12);
    goto LABEL_135;
  }
  if ( !strcmp((const char *)&v78, (const char *)&unk_61A66) )
  {
    v89 = 0;
    if ( get_value_post(v1, (int)"autorebooth", (int)&v78, 64) )
      v86 = atoi((const char *)&v78);
    else
      v86 = 0;
    set_autoreboot_config(&v86);
    memset(&v63, 0, 0x44u);
    v13 = get_value_post(v1, (int)"everyday", (int)&v89, 2);
    v14 = atoi((const char *)&v89);
    v15 = v14 == 0;
    if ( v14 )
      v15 = v13 == 0;
    v16 = !v15;
    if ( v15 )
      v17 = v16;
    else
      v17 = v14;
    v65 = v17;
    if ( !v17 )
    {
      v88 = 0;
      v64 = 1;
      v18 = get_value_post(v1, (int)"sun", (int)&v88, 2);
      v19 = strcmp((const char *)&v88, "1") == 0;
      if ( !v18 )
        v19 = 0;
      if ( v19 )
        v66 = atoi((const char *)&v88);
      else
        v66 = 0;
      v20 = get_value_post(v1, (int)"mon", (int)&v88, 2);
      v21 = strcmp((const char *)&v88, "1") == 0;
      if ( !v20 )
        v21 = 0;
      if ( v21 )
        v67 = atoi((const char *)&v88);
      else
        v67 = 0;
      v22 = get_value_post(v1, (int)"tue", (int)&v88, 2);
      v23 = strcmp((const char *)&v88, "1") == 0;
      if ( !v22 )
        v23 = 0;
      if ( v23 )
        v68 = atoi((const char *)&v88);
      else
        v68 = 0;
      v24 = get_value_post(v1, (int)"wed", (int)&v88, 2);
      v25 = strcmp((const char *)&v88, "1") == 0;
      if ( !v24 )
        v25 = 0;
      if ( v25 )
        v69 = atoi((const char *)&v88);
      else
        v69 = 0;
      v26 = get_value_post(v1, (int)"thu", (int)&v88, 2);
      v27 = strcmp((const char *)&v88, "1") == 0;
      if ( !v26 )
        v27 = 0;
      if ( v27 )
        v70 = atoi((const char *)&v88);
      else
        v70 = 0;
      v28 = get_value_post(v1, (int)"fri", (int)&v88, 2);
      v29 = strcmp((const char *)&v88, "1") == 0;
      if ( !v28 )
        v29 = 0;
      if ( v29 )
        v71 = atoi((const char *)&v88);
      else
        v71 = 0;
      v30 = get_value_post(v1, (int)"sat", (int)&v88, 2);
      v31 = strcmp((const char *)&v88, "1") == 0;
      if ( !v30 )
        v31 = 0;
      if ( v31 )
        v72 = atoi((const char *)&v88);
      else
        v72 = 0;
    }
    v73 = 0;
    if ( get_value_post(v1, (int)"autorebootHour", (int)&v78, 64) )
    {
      v76 = atoi((const char *)&v78);
      v74 = v76;
    }
    if ( get_value_post(v1, (int)"autorebootMin", (int)&v78, 64) )
    {
      v77 = atoi((const char *)&v78);
      v75 = v77;
    }
    remove_all_gen_schedule(&unk_61A66);
    if ( v86 )
      add_gen_schedule((int)&unk_61A66, (int)&v63);
    v7 = iconfig_remove_config_tag("last_autoboot_stamp");
    goto LABEL_88;
  }
  if ( !strcmp((const char *)&v78, "restart") )
  {
    v32 = "@{42}";
    v33 = 1;
LABEL_94:
    v35 = syslog_msg(v33, v32);
LABEL_103:
    saveconf(v35);
    signal_reboot(3);
    return 2;
  }
  if ( !strcmp((const char *)&v78, "upnp") )
  {
    if ( !get_value_post(v1, (int)"upnph", (int)&v88, 2) )
      return 0;
    v34 = atoi((const char *)&v88);
    set_upnp(v34);
    v32 = "@{42}";
    v33 = 1;
    goto LABEL_94;
  }
  if ( !strcmp((const char *)&v78, "hubapmode") )
  {
    get_ifconfig("br0", &v81, &v80);
    get_value_post(v1, (int)"use_local_gateway", (int)&v79, 32);
    if ( !strcmp((const char *)&v79, "1") && get_ip_value_post(v1, "gw", &v84) )
    {
      set_use_local_gateway(1);
      set_lan_ipconfig(&v81, &v80, &v84);
      get_ip_value_post(v1, "fdns", &v83);
      get_ip_value_post(v1, "sdns", &v82);
      set_dns_shadow("br0", "local", &v83, &v82);
    }
    else
    {
      set_use_local_gateway(0);
      set_lan_ipconfig(&v81, &v80, 0);
    }
    dhcpd_read_config(&v43);
    sf_strncpy(&v46, &v81, 20);
    sf_strncpy(&v47, &v80, 20);
    get_subnet_range(&v81, &v80, &v44, &v45);
    if ( !strcmp((const char *)&v48, (const char *)&v81) )
      sf_strncpy(&v48, &v81, 20);
    v36 = dhcpd_commit_config(&v43);
    v35 = dhcpd_flush_dynamic_lease(v36);
    goto LABEL_103;
  }
  if ( !strcmp((const char *)&v78, "snmp") )
  {
    if ( get_value_post(v1, (int)"snmp_run", (int)&v57, 64) )
    {
      read_snmp_conf(&v49);
      system2("/sbin/iptables -D INPUT -p udp --dport %d -j ACCEPT", v50);
      v49 = strcmp(&v57, "on") == 0;
      if ( v49 )
      {
        get_intvalue_post(v1, "snmp_service_port", &v50);
        if ( get_value_post(v1, (int)"snmp_community", (int)&v57, 128) )
          sf_strncpy(&v51, &v57, 128);
        else
          strcpy((char *)&v51, "");
        if ( get_value_post(v1, (int)"snmp_sysname", (int)&v57, 128) )
          sf_strncpy(&v52, &v57, 128);
        else
          strcpy((char *)&v52, "");
        if ( get_value_post(v1, (int)"snmp_location", (int)&v57, 128) )
          sf_strncpy(&v53, &v57, 128);
        else
          strcpy((char *)&v53, "");
        if ( get_value_post(v1, (int)"snmp_contact", (int)&v57, 128) )
          sf_strncpy(&dest, &v57, 128);
        else
          strcpy(&dest, "");
        if ( get_value_post(v1, (int)"snmp_descr", (int)&v57, 128) )
          sf_strncpy(&v55, &v57, 128);
        else
          strcpy(&v55, "");
      }
      v7 = write_snmp_conf();
      goto LABEL_88;
    }
    return 0;
  }
  if ( !strcmp((const char *)&v78, "realtime") )
  {
    memset(&s, 0, 0x54u);
    get_value_post(v1, (int)"server_list", (int)&s, 64);
    if ( strcmp(&s, "null") || (get_value_post(v1, (int)"server_edit", (int)&s, 64), !check_unpermitted_chars(&s)) )
    {
      if ( !s )
        strcpy(&s, "null");
      if ( !get_intvalue_post(v1, "summer_flag", &v62) )
        v62 = 0;
      get_intvalue_post(v1, "gmtidx", &v87);
      sf_strncpy(&v59, &byte_987C0[144 * v87], 8);
      v60 = byte_987C0[144 * v87 + 136] == 43;
      v61 = *(_DWORD *)&byte_987C0[144 * v87 + 140];
      v38 = set_timeserver_conf((int)&s);
      v7 = clear_timed_status(v38);
      goto LABEL_88;
    }
    return 0;
  }
  if ( strcmp((const char *)&v78, "multilang") )
    return 0;
  v39 = get_value_post(v1, (int)"multilang_lang", (int)&v85, 16);
  if ( v39 )
  {
    v40 = set_system_lang(&v85);
    v39 = sub_13494(v40, v41);
  }
  v42 = signal_update(v39);
  signal_save(v42);
  return 3;
}



int __fastcall sysconf_misc_1BA54(int a1, int a2)
{

  READ_SNMP_CONF_ *v82=(READ_SNMP_CONF_ *)(malloc(sizeof(read_snmp_conf_)));
  int v2; // r5@1
  int v3; // r4@1
  signed int v4; // r10@1
  const char *v5; // r0@2
  char *v6; // r1@4
  char *v7; // r0@5
  int result; // r0@7
  const char *v9; // r0@10
  int v10; // r1@10
  int v11; // r0@10
  int v12; // r1@10
  int v13; // r1@11
  int v14; // r0@12
  int v15; // r0@13
  int v16; // r1@13
  int v17; // r0@13
  char *v18; // r0@14
  int v19; // r1@15
  int v20; // r0@15
  int v21; // r0@15
  int v22; // r1@15
  int v23; // r0@16
  int v24; // r1@16
  int v25; // r0@17
  int v26; // r0@18
  int v27; // r0@18
  int v28; // r1@18
  int v29; // r0@19
  int v30; // r1@19
  int v31; // r0@20
  int v32; // r0@21
  int v33; // r0@21
  int v34; // r1@21
  int v35; // r0@22
  int v36; // r1@22
  int v37; // r0@23
  int v38; // r0@24
  int v39; // r0@24
  int v40; // r1@24
  int v41; // r0@25
  int v42; // r1@25
  int v43; // r0@26
  int v44; // r0@27
  int v45; // r0@27
  int v46; // r1@27
  int v47; // r0@28
  int v48; // r1@28
  int v49; // r0@29
  int v50; // r0@30
  int v51; // r0@30
  int v52; // r1@30
  int v53; // r0@31
  int v54; // r1@31
  int v55; // r0@32
  int v56; // r0@33
  int v57; // r1@33
  int v58; // r0@34
  int v59; // r1@34
  int v60; // r0@35
  int v61; // r0@36
  int v62; // r1@36
  int v63; // r0@36
  int v64; // r0@36
  int v65; // r1@36
  int v66; // r0@37
  int v67; // r0@39
  int v68; // r1@39
  int v69; // r0@39
  int v70; // r1@39
  int v71; // r0@40
  const char *v72; // r0@42
  int v73; // r1@42
  int v74; // r0@42
  int v75; // r1@42
  int v76; // r0@43
  int v77; // r0@45
  int v78; // r1@45
  int v79; // r0@45
  int v80; // r0@46
  int v81; // r0@46
  _BYTE v83[3]; // [sp+291h] [bp-4FFh]@10
  _BYTE v84[3]; // [sp+491h] [bp-2FFh]@10
  char v85; // [sp+591h] [bp-1FFh]@10
  char v86; // [sp+690h] [bp-100h]@33
  char v87; // [sp+6D7h] [bp-B9h]@7
  char v88; // [sp+717h] [bp-79h]@5
  char v89; // [sp+757h] [bp-39h]@42
  char v90; // [sp+767h] [bp-29h]@10
  int v91; // [sp+76Ch] [bp-24h]@33

  v2 = a2;
  v3 = a1;
  sub_1A554();
  sub_133E4((int)"sysconf", (int)"misc");
  v4 = sub_1ADC0(v2);
  if ( v4 != 3 )
  {
    if ( v3 )
    {
      v6 = (char *)get_pvalue(v3, (int)"service");
      if ( !v6 )
      {
        strcpy(&v88, "multilang");
LABEL_10:
        printf("<style>");
        printf("form { margin: 0; }");
        printf(".selected { background-color: #C9D5E9 !important; }");
        printf("</style>");
        printf("<BODY style=\"padding:0px 0px; margin:0px 0px;\">");
        printf("<form method=post action=\"timepro.cgi\" name=\"main_form\">");
        puts("<input type=hidden name=tmenu value=iframe>");
        printf("<input type=hidden name=\"smenu\" value=\"sysconf_misc\">");
        puts("<input type=hidden name=service value=>");
        puts("<input type=hidden name=run value=>");
        puts("<input type=hidden name=hostnameh value=>");
        puts("<input type=hidden name=autosavingh value=>");
        puts("<input type=hidden name=fakednsh value=>");
        puts("<input type=hidden name=dhcp_auto_restart_1 value=>");
        puts("<input type=hidden name=nologinh value=>");
        puts("<input type=hidden name=wbmpopuph value=>");
        puts("<input type=hidden name=apcplanh value=>");
        puts("<input type=hidden name=autorebooth value=>");
        puts("<input type=hidden name=everyday value=>");
        puts("<input type=hidden name=autorebootHour value=>");
        puts("<input type=hidden name=autorebootMin value=>");
        puts("<input type=hidden name=sun value=>");
        puts("<input type=hidden name=mon value=>");
        puts("<input type=hidden name=tue value=>");
        puts("<input type=hidden name=wed value=>");
        puts("<input type=hidden name=thu value=>");
        puts("<input type=hidden name=fri value=>");
        puts("<input type=hidden name=sat value=>");
        puts("<input type=hidden name=restarth value=>");
        puts("<input type=hidden name=upnph value=>");
        printf("<table style=\"border-collapse:collapse; border-style:none none none none; width:100%%;\" cellspacing=0px cellpadding=0px>\n");
        printf("<COL WIDTH=9><COL WIDTH=220><COL width=350><COL>");
        get_system_lang(&v90);
        v9 = (const char *)sub_1A440(&v90);
        strcpy(v84, v9);
        strcpy(v83, "");
        v11 = pick_string_134F4(950, v10);
        sub_1A180("multilang", v11, v84, v83);
        puts("<input type=hidden name=multilang_lang >");
        memset(&v85, 0, 0xFFu);
        get_hostname((int)&v85);
        if ( v85 )
        {
          snprintf2(
            (int)v84,
            256,
            "<span id=hostname_status title=\"%s\" style=\" display:block; overflow:hidden; white-space:nowrap;  text-ove"
            "rflow:ellipsis; width:350px; \">%s </span>",
            &v85,
            &v85);
          snprintf2(
            (int)v83,
            512,
            "<span title=\"%s\" style=\"overflow:hidden; white-space:nowrap;  text-overflow:ellipsis;\">%s</span>",
            "hostname",
            "");
        }
        else
        {
          v14 = pick_string_134F4(958, v12);
          snprintf2((int)v84, 256, "<span id=hostname_status>%s</span>", v14, 0);
          strcpy(v83, "");
        }
        v15 = pick_string_134F4(927, v13);
        sub_1A180("hostname", v15, v84, v83);
        sub_130BC(v84, 0x100u);
        strcpy(v83, "");
        v17 = pick_string_134F4(603, v16);
        sub_1A180("realtime", v17, v84, v83);
        puts("<input type=hidden name=server_list>");
        puts("<input type=hidden name=server_edit>");
        puts("<input type=hidden name=gmtidx>");
        puts("<input type=hidden name=summer_flag>");
        if ( v4 == 1 )
        {
          printf("<script>");
          v18 = sub_1AACC();
          printf("parent.document.getElementsByName('server_edit')[0].value = '%s';", v18);
          printf("if((parent.document.getElementsByName('sysconf_misc_realtime_status')[0]) && parent.document.getElementsByName('sysconf_misc_realtime_status')[0].contentWindow)");
          printf("parent.document.getElementsByName('sysconf_misc_realtime_status')[0].contentWindow.location.reload();");
          printf("</script>");
        }
        strcpy(v84, "");
        strcpy(v83, "");
        v20 = pick_string_134F4(600, v19);
        v21 = sub_1A180("configmgmt", v20, v84, v83);
        if ( get_autosaving(v21) <= 0 )
        {
          v25 = pick_string_134F4(900, v22);
          snprintf2((int)v84, 256, "<span id=autosaving_status>%s</span>", v25, 3);
          strcpy(v83, "");
        }
        else
        {
          v23 = pick_string_134F4(894, v22);
          snprintf2((int)v84, 256, "<span id=autosaving_status>%s</span>", v23, 3);
          snprintf2(
            (int)v83,
            512,
            "<span title=\"%s\" style=\"overflow:hidden; white-space:nowrap;  text-overflow:ellipsis;\">%s</span>",
            "auto_saving",
            "");
        }
        v26 = pick_string_134F4(948, v24);
        v27 = sub_1A180("autosaving", v26, v84, v83);
        if ( get_fakedns(v27) <= 0 )
        {
          v31 = pick_string_134F4(900, v28);
          snprintf2((int)v84, 256, "<span id=fakedns_status>%s</span>", v31, 4);
          strcpy(v83, "");
        }
        else
        {
          v29 = pick_string_134F4(894, v28);
          snprintf2((int)v84, 256, "<span id=fakedns_status>%s</span>", v29, 4);
          snprintf2(
            (int)v83,
            512,
            "<span title=\"%s\" style=\"overflow:hidden; white-space:nowrap;  text-overflow:ellipsis;\">%s</span>",
            "fakedns",
            "");
        }
        v32 = pick_string_134F4(949, v30);
        v33 = sub_1A180("fakedns", v32, v84, v83);
        if ( get_nologin(v33) )
        {
          v37 = pick_string_134F4(122, v34);
          snprintf2((int)v84, 256, "<span id=nologin_status>%s</span>", v37, 5);
          strcpy(v83, "");
        }
        else
        {
          v35 = pick_string_134F4(885, v34);
          snprintf2((int)v84, 256, "<span id=nologin_status>%s</span>", v35, 5);
          snprintf2(
            (int)v83,
            512,
            "<span title=\"%s\" style=\"overflow:hidden; white-space:nowrap; text-overflow:ellipsis;\">%s</span>",
            "nologin",
            "");
        }
        v38 = pick_string_134F4(957, v36);
        v39 = sub_1A180("nologin", v38, v84, v83);
        if ( get_wbm_popup_flag(v39) <= 0 )
        {
          v43 = pick_string_134F4(951, v40);
          snprintf2((int)v84, 256, "<span id=wbm_popup_status>%s</span>", v43, 6);
          strcpy(v83, "");
        }
        else
        {
          v41 = pick_string_134F4(953, v40);
          snprintf2((int)v84, 256, "<span id=wbm_popup_status>%s</span>", v41, 6);
          snprintf2(
            (int)v83,
            512,
            "<span title=\"%s\" style=\"overflow:hidden; white-space:nowrap;  text-overflow:ellipsis;\">%s</span>",
            "wbmpopup",
            "");
        }
        v44 = pick_string_134F4(952, v42);
        v45 = sub_1A180("wbmpopup", v44, v84, v83);
        if ( get_upnp(v45) <= 0 )
        {
          v49 = pick_string_134F4(900, v46);
          snprintf2((int)v84, 256, "<span id=upnp_status>%s</span>", v49, 7);
          strcpy(v83, "");
        }
        else
        {
          v47 = pick_string_134F4(894, v46);
          snprintf2((int)v84, 256, "<span id=upnp_status>%s</span>", v47, 7);
          snprintf2(
            (int)v83,
            512,
            "<span title=\"%s\" style=\"overflow:hidden; white-space:nowrap; text-overflow:ellipsis;\">%s</span>",
            "upnp",
            "");
        }
        v50 = pick_string_134F4(1012, v48);
        v51 = sub_1A180("upnp", v50, v84, v83);
        if ( get_apcplan_flag(v51) <= 0 )
        {
          v55 = pick_string_134F4(900, v52);
          snprintf2((int)v84, 256, "<span id=apcpd_status>%s</span>", v55, 8);
          strcpy(v83, "");
        }
        else
        {
          v53 = pick_string_134F4(894, v52);
          snprintf2((int)v84, 256, "<span id=apcpd_status>%s</span>", v53, 8);
          snprintf2(
            (int)v83,
            512,
            "<span title=\"%s\" style=\"overflow:hidden; white-space:nowrap;  text-overflow:ellipsis;\">%s</span>",
            "apcpd",
            "");
        }
        v56 = pick_string_134F4(917, v54);
        sub_1A180("apcplan", v56, v84, v83);
        get_autoreboot_config(&v91);
        memset(&v86, 0, 0x44u);
        read_sched_array(&unk_61A66, &v86, 1);
        if ( v91 )
        {
          v58 = pick_string_134F4(894, v57);
          snprintf2((int)v84, 256, "<span id=autoreboot_status>%s</span>", v58, 9);
          snprintf2(
            (int)v83,
            512,
            "<span title=\"%s\" style=\"overflow:hidden; white-space:nowrap; text-overflow:ellipsis;\">%s</span>",
            &unk_61A66,
            "");
        }
        else
        {
          v60 = pick_string_134F4(900, v57);
          snprintf2((int)v84, 256, "<span id=autoreboot_status>%s</span>", v60, 9);
          strcpy(v83, "");
        }
        v61 = pick_string_134F4(45, v59);
        sub_1A180(&unk_61A66, v61, v84, v83);
        snprintf2((int)v84, 256, "<span id=restart_status></span>");
        snprintf2(
          (int)v83,
          512,
          "<span title=\"%s\" style=\"overflow:hidden; white-space:nowrap; text-overflow:ellipsis;\">%s</span>",
          "restart",
          "");
        v63 = pick_string_134F4(921, v62);
        v64 = sub_1A180("restart", v63, v84, v83);
        if ( get_use_local_gateway(v64) )
          v66 = 1013;
        else
          v66 = 959;
        v67 = pick_string_134F4(v66, v65);
        snprintf2((int)v84, 256, "<span id=hubapmode_status>%s</span>", v67, 11);
        strcpy(v83, "");
        v69 = pick_string_134F4(928, v68);
        sub_1A180("hubapmode", v69, v84, v83);
        puts("<input type=hidden name=gw1 value=>");
        puts("<input type=hidden name=gw2 value=>");
        puts("<input type=hidden name=gw3 value=>");
        puts("<input type=hidden name=gw4 value=>");
        puts("<input type=hidden name=fdns1 value=>");
        puts("<input type=hidden name=fdns2 value=>");
        puts("<input type=hidden name=fdns3 value=>");
        puts("<input type=hidden name=fdns4 value=>");
        puts("<input type=hidden name=sdns1 value=>");
        puts("<input type=hidden name=sdns2 value=>");
        puts("<input type=hidden name=sdns3 value=>");
        puts("<input type=hidden name=sdns4 value=>");
        puts("<input type=hidden name=use_local_gateway value=>");
        read_snmp_conf((int)&v82);
        if ( v82 )
          v71 = 894;
        else
          v71 = 900;
        v72 = (const char *)pick_string_134F4(v71, v70);
        strcpy(v84, v72);
        strcpy(v83, "");
        v74 = pick_string_134F4(604, v73);
        sub_1A180("snmp", v74, v84, v83);
        puts("<input type=hidden name=snmp_run>");
        puts("<input type=hidden name=snmp_service_port>");
        puts("<input type=hidden name=snmp_community>");
        puts("<input type=hidden name=snmp_sysname>");
        puts("<input type=hidden name=snmp_location>");
        puts("<input type=hidden name=snmp_contact>");
        puts("<input type=hidden name=snmp_descr>");
        strcpy(v84, "");
        strcpy(v83, "");
        get_wan_hw_ifname("wan1", &v89);
        if ( get_dhcp_auto_restart(&v89) )
          v76 = 894;
        else
          v76 = 900;
        v77 = pick_string_134F4(v76, v75);
        snprintf2((int)v84, 256, "<span id=dhcp_restart_status>%s</span>", v77, 13);
        v79 = pick_string_134F4(924, v78);
        sub_1A180("dhcp_restart", v79, v84, v83);
        sub_1A1E0(15);
        sub_1A1E0(16);
        printf("</table>");
        printf("</form>");
        printf("</BODY>");
        printf("<script>");
        printf("setTimeout(function() { clickSysconf(document.getElementById('%s')); }, 50);", &v88);
        if ( v4 == 2 )
        {
          printf("setTimeout(function() {");
          v80 = printf("UnMaskIt(parent.document, 'apply_mask');");
          v81 = hwinfo_get_reboot_duration(v80);
          printf("maskRebootMsg(%d, null, parent.document);", v81);
          printf("}, 500);");
        }
        else
        {
          puts("setTimeout(function() {UnMaskIt(parent.document,'apply_mask'); }, 500);");
        }
        v5 = "</script>";
        return printf(v5);
      }
      v7 = &v88;
    }
    else
    {
      result = get_value_post(v2, (int)"service", (int)&v87, 64);
      if ( !result )
        return result;
      v6 = &v87;
      v7 = &v88;
    }
    sf_strncpy(v7, v6, 64);
    goto LABEL_10;
  }
  printf("<BODY style=\"padding:0px 0px; margin:0px 0px;\">");
  printf("<script>top.location.reload();</script>");
  v5 = "</body>";
  return printf(v5);
}


int sub_1C8E4()
{
  READ_SNMP_CONF_ *v19=(READ_SNMP_CONF_ *)(malloc(sizeof(read_snmp_conf_)));

  int v0; // r1@1
  int v1; // r0@1
  char *v2; // r5@1
  int v3; // r1@1
  char *v4; // r4@2
  int v5; // r0@4
  int v6; // r1@4
  int v7; // r0@6
  int v8; // r1@6
  const char *v9; // r0@6
  int v10; // r1@6
  const char *v11; // r0@6
  int v12; // r1@6
  const char *v13; // r0@6
  int v14; // r1@6
  const char *v15; // r0@6
  int v16; // r1@6
  const char *v17; // r0@6
  int v20; // [sp+4h] [bp-29Ch]@6
  char v21; // [sp+8h] [bp-298h]@6
  char v22; // [sp+88h] [bp-218h]@6
  char v23; // [sp+108h] [bp-198h]@6
  char v24; // [sp+188h] [bp-118h]@6
  char v25; // [sp+208h] [bp-98h]@6

  read_snmp_conf((int)&v19);
  printf("<style>");
  printf("#snmp_table table input[type=text] { padding-left: 5px; width: 150px;}");
  printf("#snmp_table table tr { height: 19px; }");
  printf("</style>");
  printf("<table style=\"border-collapse:collapse;\" width=100%% cellspacing=0px cellpadding=0px>\n");
  printf("<tr><td width=30%%>");
  v1 = pick_string_134F4(887, v0);
  v2 = "";
  printf("%s", v1);
  printf("</td>");
  printf("<td>");
  if ( v19 )
    v4 = "checked";
  else
    v4 = "";
  v5 = pick_string_134F4(894, v3);
  printf("<input type=radio name=snmp_run value=on %s onclick=\"ChangeSNMP();\"> %s", v4, v5);
  print_nbsp(5);
  if ( !v19 )
    v2 = "checked";
  v7 = pick_string_134F4(900, v6);
  printf(
    "<input type=radio name=snmp_run value=off %s style='margin-left: 20px;' onclick=\"ChangeSNMP();\"> %s",
    v2,
    v7);
  printf("</td></tr>");
  printf("<tr><td>");
  v9 = (const char *)pick_string_134F4(788, v8);
  printf(v9);
  printf("</td>");
  printf("<td>");
  printf("<input type=text name=snmp_service_port size=5 maxlength=5 value=\"%d\">", v20);
  printf("</td></tr>");
  printf("<tr><td>");
  printf("SNMP Community");
  printf("</td>");
  printf("<td>");
  printf("<input type=text name=snmp_community maxlength=127 value=\"%s\">", &v21);
  printf("</td></tr>");
  printf("<tr><td>");
  v11 = (const char *)pick_string_134F4(891, v10);
  printf(v11);
  printf("</td>");
  printf("<td>");
  printf("<input type=text name=snmp_sysname value=\"%s\">", &v22);
  printf("</td></tr>");
  printf("<tr><td>");
  v13 = (const char *)pick_string_134F4(890, v12);
  printf(v13);
  printf("</td>");
  printf("<td>");
  printf("<input type=text name=snmp_location value=\"%s\">", &v23);
  printf("</td></tr>");
  printf("<tr><td>");
  v15 = (const char *)pick_string_134F4(888, v14);
  printf(v15);
  printf("</td>");
  printf("<td>");
  printf("<input type=text name=snmp_contact value=\"%s\">", &v24);
  printf("</td></tr>");
  printf("<tr><td>");
  v17 = (const char *)pick_string_134F4(889, v16);
  printf(v17);
  printf("</td>");
  printf("<td>");
  printf("<input type=text name=snmp_descr value=\"%s\">", &v25);
  printf("</td></tr>");
  printf("</table>");
  return printf("<script> ChangeSNMP(); </script>");
}

signed int __fastcall sub_131E0(void *a1)
{
  DDNSAPI_READ_CONFIG_ *v5=(DDNSAPI_READ_CONFIG_ *)(malloc(sizeof(ddnsapi_read_config_)))
  void *v1; // r6@1
  int v2; // r4@1
  int v3; // r0@2
  signed int result; // r0@5
  char s2; // [sp+4h] [bp-50Ch]@3

  v1 = a1;
  v2 = 0;
  while ( 1 )
  {
    v3 = ddnsapi_read_config(v2++, (int)&v5);
    if ( !v3 )
      return 0;
    if ( !strcmp("iptime", &s2) )
      break;
    if ( v2 == 6 )
      return 0;
  }
  if ( v1 )
  {
    memcpy(v1, &v5, 0x500u);
    result = 1;
  }
  else
  {
    result = 1;
  }
  return result;
}

signed int sub_2F594()
{
  ACCESSLIST_SET_READ_CONFIG_ *v55=(ACCESSLIST_SET_READ_CONFIG_ *)(malloc(sizeof(accesslist_set_read_config_)));
  signed int result; // r0@1
  int v1; // r5@1
  int v2; // r1@2
  int v3; // r4@2
  void *v4; // r0@2
  int v5; // r0@2
  int v6; // r8@2
  void *v7; // r0@2
  int v8; // r1@2
  char *v9; // r4@3
  void *v10; // r5@5
  int v11; // r0@5
  int v12; // r1@5
  int v13; // r0@5
  void *v14; // r0@5
  int v15; // r1@5
  char *v16; // r4@6
  void *v17; // r5@8
  int v18; // r0@8
  int v19; // r1@8
  int v20; // r0@8
  int v21; // r1@8
  const char *v22; // r0@8
  int v23; // r1@8
  const char *v24; // r0@8
  void *v25; // r0@8
  char *v26; // r2@9
  char *v27; // r1@12
  void *v28; // r0@14
  char *v29; // r2@15
  char *v30; // r1@18
  void *v31; // r0@20
  char *v32; // r2@21
  char *v33; // r1@24
  void *v34; // r0@26
  char *v35; // r2@27
  char *v36; // r1@30
  void *v37; // r0@32
  int v38; // r1@32
  char *v39; // r4@33
  void *v40; // r5@35
  int v41; // r0@35
  char *v42; // r1@36
  void *v43; // r0@38
  int v44; // r1@38
  char *v45; // r4@39
  void *v46; // r5@41
  int v47; // r0@41
  char *v48; // r1@42
  int v49; // r1@44
  int v50; // r0@44
  int v51; // r0@44
  int v52; // r0@45
  void *v53; // r0@47
  int v54; // [sp+0h] [bp-1A0h]@2
  char v56; // [sp+148h] [bp-58h]@5
  char v57; // [sp+168h] [bp-38h]@2
  char v58; // [sp+169h] [bp-37h]@14
  char v59; // [sp+16Ah] [bp-36h]@20
  char v60; // [sp+16Bh] [bp-35h]@26
  char v61; // [sp+16Ch] [bp-34h]@32
  char v62; // [sp+16Dh] [bp-33h]@38
  int v63; // [sp+178h] [bp-28h]@5
  int v64; // [sp+17Ch] [bp-24h]@5

  result = sub_12380();
  v1 = result;
  if ( !result )
  {
    sub_133E4((int)"firewallconf", (int)"accesslist");
    puts("<style type=\"text/css\">");
    puts(".access_main_table {");
    puts("\tborder-collapse:collapse; padding:0 0 0 0; margin:0 0 0 0;");
    puts("\ttable-layout:fixed;");
    puts("}");
    puts(".access_main_tr {");
    puts("\tborder:0 0 0 0; padding:0 0 0 0;");
    puts("}");
    puts(".access_main_td {");
    puts("\tpadding:0 0 0 0; font-size:12px;");
    puts("\tvertical-align:middle;");
    puts("}");
    puts(".access_main_p {");
    puts("\tpadding:0 0 0 5px; display:inline-block;");
    puts("\tvertical-align:middle; margin:0;");
    puts("}");
    puts(".access_main_span {");
    puts("\tdisplay:inline-block; vertical-align:middle;");
    puts("}");
    puts(".access_main_button {");
    puts("\tpadding:0 1 0 1; margin:0 0 0 0; font-size:12px;");
    puts("\tvertical-align:middle;");
    puts("}");
    puts(".access_main_td input[type=checkbox], .access_main_td input[type=radio] {");
    puts("display:inline-block; vertical-align:middle;");
    puts("}");
    puts("#access_div_msg p {");
    puts("margin:5 0 5 15px; text-align:left;");
    puts("}");
    puts(".access_ellipsis {");
    puts("text-overflow:ellipsis; overflow:hidden; white-space:nowrap; text-align:left;");
    puts("}");
    printf("input[type=\"checkbox\"], input[type=\"radio\"], label, span, td {cursor:default;}");
    printf("</style>");
    puts("<table class=\"v3_table access_main_table\" width=\"642\" style=\"padding:0; margin:0;\">");
    printf("<COL width=\"642\">");
    printf("<tr class=\"access_main_tr\"><td class=\"access_main_td\">");
    memset(&v55, v1, 0x48u);
    accesslist_set_read_config((int)&v55);
    sub_2F470(&v55);
    printf("</td></tr>");
    printf("<tr class=\"access_main_tr\"><td class=\"access_main_td\">");
    read_dos_config(&v57);
    printf("<form method=post action=\"timepro.cgi\" name=\"firewallconfetc\" style=\"padding:0; margin:0;\">");
    printf("<input type=hidden name=\"tmenu\" value=\"firewallconf\">");
    printf("<input type=hidden name=\"smenu\" value=\"etc\">");
    printf("<input type=hidden name=\"act\" value=\"\">");
    puts("<table class=\"v3_table access_main_table\" width=\"642\" style=\"padding:0; margin:0;\">");
    printf("<COL width=\"311\"><COL width=\"311\"><COL width=\"20\">");
    printf("<tr class=\"access_main_tr\" height=\"24\" style=\"background-color:#E3E3E3; cursor:pointer;\" onclick=\"onclick_etclist();\" id=\"etctitle\">\t\t<td class=\"access_main_td\" colspan=\"3\" style=\"border-top:1px #CCC solid; border-bottom:1px #CCC solid;\">");
    v3 = pick_string_134F4(583, v2);
    v4 = sub_126C4();
    printf(
      "<span class=\"access_main_span\" style=\"padding:0 0 0 5px;\"><b>%s</b></span>\t\t<img src=\"/%s/menu_list_closed."
      "png\" \t\tstyle=\"margin-left:5px; width:16px; height:14px; vertical-align:middle; display:inline-block; *display:"
      "inline; zoom:1;\" \t\tid=\"timg\">",
      v3,
      v4);
    v5 = printf("</td></tr>");
    v6 = get_csrf_op(v5);
    get_csrf_whites(&v54);
    printf("<tr class=\"access_main_tr\" height=\"24\" style=\"background-color:#FFFFFF; display:none;\" name=\"etcline\">\t\t<td class=\"access_main_td\" style=\"padding:0 0 0 5px;\">");
    v7 = sub_126C4();
    if ( v6 )
      v9 = "on";
    else
      v9 = "off";
    v10 = v7;
    v11 = pick_string_134F4(186, v8);
    printf(
      "<img src=\"/%s/trigger_%s.png\" id=\"csrf_img\" onclick=\"onclick_onoffbtn(this);\" \t\tstyle=\"vertical-align:mid"
      "dle; height:22px; display:inline-block; *display:inline; zoom:1; cursor:pointer;\">\t\t<span class=\"access_main_span\">%s</span>",
      v10,
      v9,
      v11);
    printf("<input type=\"hidden\" name=\"csrf\" value=\"%d\">");
    printf("</td><td class=\"access_main_td\">");
    printf("</td><td class=\"access_main_td\"></td></tr>");
    printf("<tr class=\"access_main_tr\" height=\"24\" style=\"background-color:#F7F7F7; display:none;\" name=\"etcline\">\t\t<td class=\"access_main_td\" colspan=\"2\" style=\"padding:0 0 0 5px;\">");
    v13 = pick_string_134F4(188, v12);
    printf(
      "<input type=text name=\"whitedomains\" maxlength=256 size=64 value='%s' style=\"width:605px;\" placeholder=\"%s\">\n",
      &v54,
      v13);
    printf("</td><td class=\"access_main_td\">");
    printf("</td></tr>");
    get_arp_protection(&v63, &v64, &v56);
    printf("<tr class=\"access_main_tr\" height=\"24\" style=\"background-color:#FFFFFF; display:none;\" name=\"etcline\">\t\t<td class=\"access_main_td\" colspan=\"2\" style=\"padding:0 0 0 5px;\">");
    v14 = sub_126C4();
    if ( v63 )
      v16 = "on";
    else
      v16 = "off";
    v17 = v14;
    v18 = pick_string_134F4(37, v15);
    printf((const char *)&unk_77EDD, v17, v16, v18);
    printf("<input type=\"hidden\" name=\"arp_protection\" value=\"%d\">");
    printf("<span class=\"access_main_span\" style=\"margin-left:10px;\">");
    v20 = pick_string_134F4(35, v19);
    printf("%s<input type=text name=period size=3 maxlength=3 value=%d>", v20, v64);
    v22 = (const char *)pick_string_134F4(33, v21);
    printf(v22);
    v24 = (const char *)pick_string_134F4(34, v23);
    printf(v24);
    printf("</span>");
    printf("</td><td class=\"access_main_td\">");
    printf("</td></tr>");
    printf(
      "<tr class=\"access_main_tr\" height=\"24\" style=\"background-color:#%s; display:none;\" name=\"etcline\">\t\t<td "
      "class=\"access_main_td\" style=\"padding:0 0 0 5px;\">",
      "F7F7F7");
    v25 = sub_126C4();
    if ( v57 == 48 )
      v26 = "off";
    else
      v26 = "on";
    printf(
      "<img src=\"/%s/trigger_%s.png\" id=\"synflood_img\" onclick=\"onclick_onoffbtn(this);\" \t\tstyle=\"vertical-align"
      ":middle; height:22px; display:inline-block; *display:inline; zoom:1; cursor:pointer;\">\t\t<span class=\"access_ma"
      "in_span\">SYN Flood</span>",
      v25,
      v26);
    if ( v57 == 48 )
      v27 = "off";
    else
      v27 = "on";
    printf("<input type=\"hidden\" name=\"synflood\" value=\"%s\">", v27);
    printf("</td><td class=\"access_main_td\">");
    v28 = sub_126C4();
    if ( v58 == 48 )
      v29 = "off";
    else
      v29 = "on";
    printf(
      "<img src=\"/%s/trigger_%s.png\" id=\"smurf_img\" onclick=\"onclick_onoffbtn(this);\" \t\tstyle=\"vertical-align:mi"
      "ddle; height:22px; display:inline-block; *display:inline; zoom:1; cursor:pointer;\">\t\t<span class=\"access_main_"
      "span\">Smurf</span>",
      v28,
      v29);
    if ( v58 == 48 )
      v30 = "off";
    else
      v30 = "on";
    printf("<input type=\"hidden\" name=\"smurf\" value=\"%s\">", v30);
    printf("</td><td class=\"access_main_td\"></td></tr>");
    printf(
      "<tr class=\"access_main_tr\" height=\"24\"style=\"background-color:#%s; display:none;\" name=\"etcline\">\t\t<td c"
      "lass=\"access_main_td\" style=\"padding:0 0 0 5px;\">",
      "FFFFFF");
    v31 = sub_126C4();
    if ( v59 == 48 )
      v32 = "off";
    else
      v32 = "on";
    printf(
      "<img src=\"/%s/trigger_%s.png\" id=\"sourceroute_img\" onclick=\"onclick_onoffbtn(this);\" \t\tstyle=\"vertical-al"
      "ign:middle; height:22px; display:inline-block; *display:inline; zoom:1; cursor:pointer;\">\t\t<span class=\"access"
      "_main_span\">IP source routing</span>",
      v31,
      v32);
    if ( v59 == 48 )
      v33 = "off";
    else
      v33 = "on";
    printf("<input type=\"hidden\" name=\"sourceroute\" value=\"%s\">", v33);
    printf("</td><td class=\"access_main_td\">");
    v34 = sub_126C4();
    if ( v60 == 48 )
      v35 = "off";
    else
      v35 = "on";
    printf(
      "<img src=\"/%s/trigger_%s.png\" id=\"ipspoof_img\" onclick=\"onclick_onoffbtn(this);\" \t\tstyle=\"vertical-align:"
      "middle; height:22px; display:inline-block; *display:inline; zoom:1; cursor:pointer;\">\t\t<span class=\"access_mai"
      "n_span\">IP Spoofing</span>",
      v34,
      v35);
    if ( v60 == 48 )
      v36 = "off";
    else
      v36 = "on";
    printf("<input type=\"hidden\" name=\"ipspoof\" value=\"%s\">", v36);
    printf("</td><td class=\"access_main_td\"></td></tr>");
    printf(
      "<tr class=\"access_main_tr\" height=\"24\" style=\"background-color:#%s; display:none;\" name=\"etcline\">\t\t<td "
      "class=\"access_main_td\" style=\"padding:0 0 0 5px;\">",
      "F7F7F7");
    v37 = sub_126C4();
    if ( v61 == 48 )
      v39 = "off";
    else
      v39 = "on";
    v40 = v37;
    v41 = pick_string_134F4(184, v38);
    printf(
      "<img src=\"/%s/trigger_%s.png\" id=\"icmpblock_img\" onclick=\"onclick_onoffbtn(this);\" \t\tstyle=\"vertical-alig"
      "n:middle; height:22px; display:inline-block; *display:inline; zoom:1; cursor:pointer;\">\t\t<span class=\"access_m"
      "ain_span\">%s</span>",
      v40,
      v39,
      v41);
    if ( v61 == 48 )
      v42 = "off";
    else
      v42 = "on";
    printf("<input type=\"hidden\" name=\"icmpblock\" value=\"%s\">", v42);
    printf("</td><td class=\"access_main_td\">");
    v43 = sub_126C4();
    if ( v62 == 48 )
      v45 = "off";
    else
      v45 = "on";
    v46 = v43;
    v47 = pick_string_134F4(185, v44);
    printf(
      "<img src=\"/%s/trigger_%s.png\" id=\"internal_icmpbk_img\" onclick=\"onclick_onoffbtn(this);\" \t\tstyle=\"vertica"
      "l-align:middle; height:22px; display:inline-block; *display:inline; zoom:1; cursor:pointer;\">\t\t<span class=\"ac"
      "cess_main_span\">%s</span>",
      v46,
      v45,
      v47);
    if ( v62 == 48 )
      v48 = "off";
    else
      v48 = "on";
    printf("<input type=\"hidden\" name=\"internal_icmpbk\" value=\"%s\">", v48);
    printf("</td><td class=\"access_main_td\"></td></tr>");
    printf(
      "<tr class=\"access_main_tr\" height=\"24\" style=\"background-color:#%s; display:none;\" name=\"etcline\">\t\t\t<t"
      "d class=\"access_main_td\" colspan=\"3\"></td></tr>",
      "FFFFFF");
    printf("<tr class=\"access_main_tr\" height=\"5\" name=\"etcline\" style=\"display:none;\">\t\t<td class=\"access_main_td\" colspan=\"3\" style=\"border-top:1px #CCC solid;\"></td></tr>");
    printf("<tr class=\"access_main_tr\" height=\"24\" name=\"etcline\" style=\"display:none;\">\t\t<td class=\"access_main_td\" colspan=\"2\" align=\"right\">");
    v50 = pick_string_134F4(28, v49);
    printf(
      "<button class=\"access_main_button\" onclick=\"submitDoS(); return ClickEventPropagater(event);\" style=\"width:55"
      "px;\">\t\t%s</button>",
      v50);
    printf("</td><td class=\"access_main_td\">");
    printf("</td></tr>");
    printf("</table>");
    printf("</form>");
    printf("<script>");
    printf("ChangeARPProtection();");
    printf("</script>");
    printf("</td></tr>");
    v51 = printf("</table>");
    if ( is_mobile_agent(v51) )
    {
      sub_12790((int)"0", (int)"0", (int)"display:inline-block; *display:inline; zoom:1;");
      v52 = printf("<iframe name=\"hasetup_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hasetup\"                         frameborder=no width=0 height=0 align=center scrolling=no></iframe>");
      sub_12770(v52);
    }
    else
    {
      printf("<iframe name=\"hasetup_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hasetup\"                         frameborder=no width=0 height=0 align=center scrolling=no></iframe>");
    }
    printf("<DIV id=\"%s\" style=\"display:none;\">", "apply_mask");
    puts("<DIV style=\"position:absolute; left:0px; top:0px; width:642px; height:535px; z-index:10; background-color:#ffffff;                 opacity:0.5; -moz-opacity:0.5; -khtml-opacity:0.5; -webkit-opacity:0.5; filter:alpha(opacity=50);\">");
    printf("</DIV>");
    puts("<DIV style=\"position:absolute; left:231px; top:198px; width:180px; height:70px; z-index:100; background-color:#ffffff;                 opacity:1; -moz-opacity:1; -khtml-opacity:1; -webkit-opacity:1; filter:alpha(opacity=100); border:1px #CCC solid;                 box-shadow:5px 5px 20px #888888;\">");
    puts("<table width=\"180\" height=\"70\">");
    printf("<tr><td width=\"20%%\" height=\"100%%\" align=\"center\" valign=\"middle\">\n");
    puts("<SPAN style=\"vertical-align:middle; display:block; text-align:center;\">");
    v53 = sub_126C4();
    printf(
      "<img src=\"/%s/apply_ani.gif\" style=\"display:inline-block; *display:inline; zoom:1; vertical-align:middle;\">",
      v53);
    printf("</SPAN></td>");
    printf("<td width=\"80%%\" height=\"100%%\" align=\"center\" valign=\"middle\">                <SPAN style=\"vertical-align:middle; display:block; text-align:center;\" id=\"access_div_msg\">\n");
    printf("</SPAN></td>");
    printf((const char *)&unk_60F0E);
    result = printf("<script>init_accesslist();</script>");
  }
  return result;
}

int __fastcall hasetup_30194(int a1, int a2)
{

  ACCESSLIST_SET_READ_CONFIG_ *s = (ACCESSLIST_SET_READ_CONFIG_ *)(malloc(sizeof(accesslist_set_read_config_)));
  int v2; // r7@1
  int v3; // r0@5
  char *v4; // r1@5
  char *v5; // r2@5
  int v6; // r0@6
  int v7; // r1@7
  int v8; // r0@14
  int v9; // r0@15
  int v10; // r1@16
  int v11; // r0@20
  int v12; // r0@22
  signed int v13; // r0@23
  int v14; // r0@29
  int v15; // r1@38
  int v16; // r0@40
  int v17; // r0@41
  int v18; // r5@49
  int v19; // r1@51
  int v20; // r0@52
  int v21; // r0@53
  int v22; // r5@56
  int v23; // r1@57
  int v24; // r0@58
  int v25; // r0@59
  int v26; // r0@60
  int v27; // r0@60
  char v28; // r3@65
  char v29; // r3@69
  char v30; // r3@73
  char v31; // r3@77
  char v32; // r3@81
  char v33; // r3@85
  int v34; // r0@97
  char *v35; // r0@98
  int v36; // r0@105
  int v37; // r0@105
  int v38; // r0@116
  int v39; // r0@116
  int v41; // [sp+Ch] [bp-54Ch]@99
  int v42; // [sp+10Ch] [bp-44Ch]@98
  char v43; // [sp+20Ch] [bp-34Ch]@96
  char v44; // [sp+30Ch] [bp-24Ch]@61
  int v46; // [sp+3ACh] [bp-1ACh]@47
  char s1; // [sp+3B0h] [bp-1A8h]@5
  int v48; // [sp+3D0h] [bp-188h]@39
  char dest; // [sp+3D4h] [bp-184h]@50
  int v50; // [sp+414h] [bp-144h]@3
  int v51; // [sp+454h] [bp-104h]@3
  int v52; // [sp+494h] [bp-C4h]@1
  int v53; // [sp+4D4h] [bp-84h]@63
  int v54; // [sp+4F4h] [bp-64h]@36
  int v55; // [sp+514h] [bp-44h]@6
  char v56; // [sp+528h] [bp-30h]@67
  char v57; // [sp+529h] [bp-2Fh]@71
  char v58; // [sp+52Ah] [bp-2Eh]@75
  char v59; // [sp+52Bh] [bp-2Dh]@79
  char v60; // [sp+52Ch] [bp-2Ch]@83
  char v61; // [sp+52Dh] [bp-2Bh]@87
  int v62; // [sp+538h] [bp-20h]@87
  int v63; // [sp+53Ch] [bp-1Ch]@87

  v2 = a2;
  memset(&s, 0, 0x48u);
  accesslist_set_read_config((int)&s);
  if ( !get_value_post(v2, (int)"act", (int)&v52, 64) )
    memset(&v52, 0, 0x40u);
  memset(&v51, 0, 0x40u);
  if ( get_value_post(v2, (int)"act", (int)&v50, 64) )
  {
    if ( !strcmp((const char *)&v50, "int_run") )
    {
      v3 = strcmp(&s1, "run");
      if ( v3 )
      {
        v6 = get_remote_addr(v3);
        sf_strncpy(&v55, v6, 20);
        if ( !accesslist_already_regist("int", &v55) && sub_2EDC0(&v55) )
        {
          pick_string_134F4(909, v7);
          accesslist_add_ip();
        }
        accesslist_iptables_cmd(2);
        snprintf2((int)&s1, 32, "run");
      }
      goto LABEL_60;
    }
    if ( !strcmp((const char *)&v50, (const char *)&unk_79095) )
    {
      if ( strcmp(&s1, "stop") )
      {
        accesslist_iptables_cmd(4);
        strcpy(&s1, "stop");
      }
      goto LABEL_60;
    }
    if ( !strcmp((const char *)&v50, "ext_run") )
    {
      v8 = strcmp(&s, "run");
      if ( v8 )
      {
        v9 = get_remote_addr(v8);
        sf_strncpy(&v55, v9, 20);
        if ( !accesslist_already_regist("ext", &v55) && !sub_2EDC0(&v55) )
        {
          pick_string_134F4(909, v10);
          accesslist_add_ip();
        }
        accesslist_iptables_cmd(1);
        strcpy(&s, "run");
      }
      if ( get_value_post(v2, (int)"rmgmt_port", (int)&v50, 64) )
      {
        v11 = atoi((const char *)&v50);
        set_remote_mgmt_port(v11);
      }
      if ( !get_value_post(v2, (int)"rmgmt_chk", (int)&v50, 64) )
        goto LABEL_23;
      v12 = strcmp((const char *)&v50, "on");
LABEL_32:
      if ( !v12 )
      {
        v13 = 1;
        goto LABEL_24;
      }
LABEL_23:
      v13 = 0;
LABEL_24:
      set_remote_mgmt_flag(v13);
LABEL_60:
      v26 = accesslist_set_write_config(&s, v4, v5);
      v27 = signal_update(v26);
      signal_save(v27);
      goto LABEL_61;
    }
    if ( !strcmp((const char *)&v50, "ext_stop") )
    {
      if ( strcmp(&s, "stop") )
      {
        accesslist_iptables_cmd(3);
        strcpy(&s, "stop");
      }
      if ( get_value_post(v2, (int)"rmgmt_port", (int)&v50, 64) )
      {
        v14 = atoi((const char *)&v50);
        set_remote_mgmt_port(v14);
      }
      if ( !get_value_post(v2, (int)"rmgmt_chk", (int)&v50, 64) )
        goto LABEL_23;
      v12 = strcmp((const char *)&v50, "on");
      goto LABEL_32;
    }
    if ( !strcmp((const char *)&v50, "int_ipadd") )
    {
      get_ip_value_post(v2, "int_regip", &v55);
      get_value_post(v2, (int)"int_ipexplan", (int)&v54, 32);
      if ( check_unpermitted_chars(&v54) )
        strcpy((char *)&v54, " ");
      if ( !accesslist_already_regist("int", &v55) )
      {
        if ( v48 > 9 )
        {
LABEL_40:
          v16 = 912;
LABEL_41:
          v17 = pick_string_134F4(v16, v15);
          sub_2EDB0(v17);
          goto LABEL_60;
        }
LABEL_48:
        accesslist_add_ip();
        goto LABEL_60;
      }
    }
    else
    {
      if ( strcmp((const char *)&v50, "ext_ipadd") )
      {
        v18 = strcmp((const char *)&v50, "int_del");
        if ( v18 )
        {
          if ( !strcmp((const char *)&v50, "ext_del") )
          {
            strcpy(&dest, "");
            v22 = 0;
            while ( 1 )
            {
              v25 = get_value_array_post(v2, "ext_delchk", v22++, &dest);
              v4 = &dest;
              v5 = &s;
              if ( !v25 )
                break;
              if ( !accesslist_remove_ip("ext") )
              {
                v24 = pick_string_134F4(913, v23);
                sub_2EDB0(v24);
              }
            }
          }
        }
        else
        {
          strcpy(&dest, "");
          while ( 1 )
          {
            v21 = get_value_array_post(v2, &unk_7910E, v18++, &dest);
            v4 = &dest;
            v5 = &s;
            if ( !v21 )
              break;
            if ( !accesslist_remove_ip("int") )
            {
              v20 = pick_string_134F4(913, v19);
              sub_2EDB0(v20);
            }
          }
        }
        goto LABEL_60;
      }
      get_ip_value_post(v2, "ext_regip", &v55);
      get_value_post(v2, (int)"ext_ipexplan", (int)&v54, 32);
      if ( check_unpermitted_chars(&v54) )
        strcpy((char *)&v54, " ");
      if ( !accesslist_already_regist("ext", &v55) )
      {
        if ( v46 > 9 )
          goto LABEL_40;
        goto LABEL_48;
      }
    }
    v16 = 914;
    goto LABEL_41;
  }
LABEL_61:
  if ( get_value_post(v2, (int)"act", (int)&v44, 128) && !strcmp(&v44, "dos_submit") )
  {
    if ( get_value_post(v2, (int)"synflood", (int)&v53, 32) && !strcmp((const char *)&v53, "on") )
      v28 = 49;
    else
      v28 = 48;
    v56 = v28;
    if ( get_value_post(v2, (int)"smurf", (int)&v53, 32) && !strcmp((const char *)&v53, "on") )
      v29 = 49;
    else
      v29 = 48;
    v57 = v29;
    if ( get_value_post(v2, (int)"sourceroute", (int)&v53, 32) && !strcmp((const char *)&v53, "on") )
      v30 = 49;
    else
      v30 = 48;
    v58 = v30;
    if ( get_value_post(v2, (int)"ipspoof", (int)&v53, 32) && !strcmp((const char *)&v53, "on") )
      v31 = 49;
    else
      v31 = 48;
    v59 = v31;
    if ( get_value_post(v2, (int)"icmpblock", (int)&v53, 32) && !strcmp((const char *)&v53, "on") )
      v32 = 49;
    else
      v32 = 48;
    v60 = v32;
    if ( get_value_post(v2, (int)"internal_icmpbk", (int)&v53, 32) && !strcmp((const char *)&v53, "on") )
      v33 = 49;
    else
      v33 = 48;
    v61 = v33;
    get_arp_protection(&v62, &v63, &v54);
    if ( !get_intvalue_post(v2, "arp_protection", &v62) )
      v62 = 0;
    if ( v62 )
    {
      if ( !get_intvalue_post(v2, "period", &v63) )
        v63 = 10;
      if ( !get_value_post(v2, (int)"ifname", (int)&v54, 32) )
        strcpy((char *)&v54, "eth0");
    }
    if ( check_unpermitted_chars(&v54) )
      strcpy((char *)&v54, "eth0");
    set_arp_protection(v62, v63, &v54);
    if ( !get_value_post(v2, (int)"csrf", (int)&v43, 256) )
      goto LABEL_105;
    v34 = atoi(&v43);
    set_csrf_op(v34);
    if ( get_value_post(v2, (int)"whitedomains", (int)&v43, 256) )
    {
      sf_strncpy(&v42, &v43, 256);
      sf_strncpy(&v41, &v42, 256);
      strtoupper(&v41);
      if ( strstr((const char *)&v41, "<SCRIPT>") )
        strcpy((char *)&v42, "");
      if ( !check_unpermitted_chars(&v42) )
        goto LABEL_104;
      v35 = (char *)&v42;
    }
    else
    {
      v35 = (char *)&v42;
    }
    strcpy(v35, "");
LABEL_104:
    set_csrf_whites(&v42);
LABEL_105:
    v36 = apply_dos_config(&v56);
    v37 = signal_update(v36);
    signal_save(v37);
  }
  printf("<BODY style=\"display:block; vertical-align:middle; padding:0 0 0 0; margin:0 0 0 0; border:0 0 0 0; overflow:hidden;\">");
  printf("<form action=\"timepro.cgi\" method=\"post\" name=\"firewallconf_hasetup\">");
  printf("</form>");
  printf("</BODY>");
  printf("<script>");
  if ( !strcmp((const char *)&v52, "ext_run")
    || !strcmp((const char *)&v52, "ext_stop")
    || !strcmp((const char *)&v52, "ext_ipadd")
    || !strcmp((const char *)&v52, "ext_del") )
  {
    printf("if(parent.window.refresh_extlist) parent.window.refresh_extlist();");
  }
  if ( !strcmp((const char *)&v52, "int_run")
    || !strcmp((const char *)&v52, (const char *)&unk_79095)
    || !strcmp((const char *)&v52, "int_ipadd")
    || !strcmp((const char *)&v52, "int_del") )
  {
    printf("if(parent.window.refresh_intlist) parent.window.refresh_intlist();");
  }
  v38 = printf("UnMaskIt(parent.document, 'apply_mask');");
  v39 = get_remote_addr(v38);
  if ( !sub_2EDC0(v39)
    && (!strcmp((const char *)&v52, "ext_run") || !strcmp((const char *)&v52, "ext_stop"))
    && get_value_post(v2, (int)"rmgmt_chk", (int)&v52, 64)
    && get_value_post(v2, (int)"rmgmt_port", (int)&v51, 64)
    && !strcmp((const char *)&v52, "on") )
  {
    printf("if(parent.window.redirect_loginpage_and_logout)parent.window.redirect_loginpage_and_logout('%s');", &v51);
  }
  return printf("</script>");
}


int __fastcall hasetup_30194(int a1, int a2)
{

  ACCESSLIST_SET_WRITE_CONFIG_ *s=(ACCESSLIST_SET_WRITE_CONFIG_ *)(malloc(sizeof(accesslist_set_read_config_)));
  int v2; // r7@1
  int v3; // r0@5
  char *v4; // r1@5
  char *v5; // r2@5
  int v6; // r0@6
  int v7; // r1@7
  int v8; // r0@14
  int v9; // r0@15
  int v10; // r1@16
  int v11; // r0@20
  int v12; // r0@22
  signed int v13; // r0@23
  int v14; // r0@29
  int v15; // r1@38
  int v16; // r0@40
  int v17; // r0@41
  int v18; // r5@49
  int v19; // r1@51
  int v20; // r0@52
  int v21; // r0@53
  int v22; // r5@56
  int v23; // r1@57
  int v24; // r0@58
  int v25; // r0@59
  int v26; // r0@60
  int v27; // r0@60
  char v28; // r3@65
  char v29; // r3@69
  char v30; // r3@73
  char v31; // r3@77
  char v32; // r3@81
  char v33; // r3@85
  int v34; // r0@97
  char *v35; // r0@98
  int v36; // r0@105
  int v37; // r0@105
  int v38; // r0@116
  int v39; // r0@116
  int v41; // [sp+Ch] [bp-54Ch]@99
  int v42; // [sp+10Ch] [bp-44Ch]@98
  char v43; // [sp+20Ch] [bp-34Ch]@96
  char v44; // [sp+30Ch] [bp-24Ch]@61
  int v46; // [sp+3ACh] [bp-1ACh]@47
  char s1; // [sp+3B0h] [bp-1A8h]@5
  int v48; // [sp+3D0h] [bp-188h]@39
  char dest; // [sp+3D4h] [bp-184h]@50
  int v50; // [sp+414h] [bp-144h]@3
  int v51; // [sp+454h] [bp-104h]@3
  int v52; // [sp+494h] [bp-C4h]@1
  int v53; // [sp+4D4h] [bp-84h]@63
  int v54; // [sp+4F4h] [bp-64h]@36
  int v55; // [sp+514h] [bp-44h]@6
  char v56; // [sp+528h] [bp-30h]@67
  char v57; // [sp+529h] [bp-2Fh]@71
  char v58; // [sp+52Ah] [bp-2Eh]@75
  char v59; // [sp+52Bh] [bp-2Dh]@79
  char v60; // [sp+52Ch] [bp-2Ch]@83
  char v61; // [sp+52Dh] [bp-2Bh]@87
  int v62; // [sp+538h] [bp-20h]@87
  int v63; // [sp+53Ch] [bp-1Ch]@87

  v2 = a2;
  memset(&s, 0, 0x48u);
  accesslist_set_read_config((int)&s);
  if ( !get_value_post(v2, (int)"act", (int)&v52, 64) )
    memset(&v52, 0, 0x40u);
  memset(&v51, 0, 0x40u);
  if ( get_value_post(v2, (int)"act", (int)&v50, 64) )
  {
    if ( !strcmp((const char *)&v50, "int_run") )
    {
      v3 = strcmp(&s1, "run");
      if ( v3 )
      {
        v6 = get_remote_addr(v3);
        sf_strncpy(&v55, v6, 20);
        if ( !accesslist_already_regist("int", &v55) && sub_2EDC0(&v55) )
        {
          pick_string_134F4(909, v7);
          accesslist_add_ip();
        }
        accesslist_iptables_cmd(2);
        snprintf2((int)&s1, 32, "run");
      }
      goto LABEL_60;
    }
    if ( !strcmp((const char *)&v50, (const char *)&unk_79095) )
    {
      if ( strcmp(&s1, "stop") )
      {
        accesslist_iptables_cmd(4);
        strcpy(&s1, "stop");
      }
      goto LABEL_60;
    }
    if ( !strcmp((const char *)&v50, "ext_run") )
    {
      v8 = strcmp(&s, "run");
      if ( v8 )
      {
        v9 = get_remote_addr(v8);
        sf_strncpy(&v55, v9, 20);
        if ( !accesslist_already_regist("ext", &v55) && !sub_2EDC0(&v55) )
        {
          pick_string_134F4(909, v10);
          accesslist_add_ip();
        }
        accesslist_iptables_cmd(1);
        strcpy(&s, "run");
      }
      if ( get_value_post(v2, (int)"rmgmt_port", (int)&v50, 64) )
      {
        v11 = atoi((const char *)&v50);
        set_remote_mgmt_port(v11);
      }
      if ( !get_value_post(v2, (int)"rmgmt_chk", (int)&v50, 64) )
        goto LABEL_23;
      v12 = strcmp((const char *)&v50, "on");
LABEL_32:
      if ( !v12 )
      {
        v13 = 1;
        goto LABEL_24;
      }
LABEL_23:
      v13 = 0;
LABEL_24:
      set_remote_mgmt_flag(v13);
LABEL_60:
      v26 = accesslist_set_write_config((int)&s, (int)v4, (int)v5);
      v27 = signal_update(v26);
      signal_save(v27);
      goto LABEL_61;
    }
    if ( !strcmp((const char *)&v50, "ext_stop") )
    {
      if ( strcmp(&s, "stop") )
      {
        accesslist_iptables_cmd(3);
        strcpy(&s, "stop");
      }
      if ( get_value_post(v2, (int)"rmgmt_port", (int)&v50, 64) )
      {
        v14 = atoi((const char *)&v50);
        set_remote_mgmt_port(v14);
      }
      if ( !get_value_post(v2, (int)"rmgmt_chk", (int)&v50, 64) )
        goto LABEL_23;
      v12 = strcmp((const char *)&v50, "on");
      goto LABEL_32;
    }
    if ( !strcmp((const char *)&v50, "int_ipadd") )
    {
      get_ip_value_post(v2, "int_regip", &v55);
      get_value_post(v2, (int)"int_ipexplan", (int)&v54, 32);
      if ( check_unpermitted_chars(&v54) )
        strcpy((char *)&v54, " ");
      if ( !accesslist_already_regist("int", &v55) )
      {
        if ( v48 > 9 )
        {
LABEL_40:
          v16 = 912;
LABEL_41:
          v17 = pick_string_134F4(v16, v15);
          sub_2EDB0(v17);
          goto LABEL_60;
        }
LABEL_48:
        accesslist_add_ip();
        goto LABEL_60;
      }
    }
    else
    {
      if ( strcmp((const char *)&v50, "ext_ipadd") )
      {
        v18 = strcmp((const char *)&v50, "int_del");
        if ( v18 )
        {
          if ( !strcmp((const char *)&v50, "ext_del") )
          {
            strcpy(&dest, "");
            v22 = 0;
            while ( 1 )
            {
              v25 = get_value_array_post(v2, "ext_delchk", v22++, &dest);
              v4 = &dest;
              v5 = &s;
              if ( !v25 )
                break;
              if ( !accesslist_remove_ip("ext") )
              {
                v24 = pick_string_134F4(913, v23);
                sub_2EDB0(v24);
              }
            }
          }
        }
        else
        {
          strcpy(&dest, "");
          while ( 1 )
          {
            v21 = get_value_array_post(v2, &unk_7910E, v18++, &dest);
            v4 = &dest;
            v5 = &s;
            if ( !v21 )
              break;
            if ( !accesslist_remove_ip("int") )
            {
              v20 = pick_string_134F4(913, v19);
              sub_2EDB0(v20);
            }
          }
        }
        goto LABEL_60;
      }
      get_ip_value_post(v2, "ext_regip", &v55);
      get_value_post(v2, (int)"ext_ipexplan", (int)&v54, 32);
      if ( check_unpermitted_chars(&v54) )
        strcpy((char *)&v54, " ");
      if ( !accesslist_already_regist("ext", &v55) )
      {
        if ( v46 > 9 )
          goto LABEL_40;
        goto LABEL_48;
      }
    }
    v16 = 914;
    goto LABEL_41;
  }
LABEL_61:
  if ( get_value_post(v2, (int)"act", (int)&v44, 128) && !strcmp(&v44, "dos_submit") )
  {
    if ( get_value_post(v2, (int)"synflood", (int)&v53, 32) && !strcmp((const char *)&v53, "on") )
      v28 = 49;
    else
      v28 = 48;
    v56 = v28;
    if ( get_value_post(v2, (int)"smurf", (int)&v53, 32) && !strcmp((const char *)&v53, "on") )
      v29 = 49;
    else
      v29 = 48;
    v57 = v29;
    if ( get_value_post(v2, (int)"sourceroute", (int)&v53, 32) && !strcmp((const char *)&v53, "on") )
      v30 = 49;
    else
      v30 = 48;
    v58 = v30;
    if ( get_value_post(v2, (int)"ipspoof", (int)&v53, 32) && !strcmp((const char *)&v53, "on") )
      v31 = 49;
    else
      v31 = 48;
    v59 = v31;
    if ( get_value_post(v2, (int)"icmpblock", (int)&v53, 32) && !strcmp((const char *)&v53, "on") )
      v32 = 49;
    else
      v32 = 48;
    v60 = v32;
    if ( get_value_post(v2, (int)"internal_icmpbk", (int)&v53, 32) && !strcmp((const char *)&v53, "on") )
      v33 = 49;
    else
      v33 = 48;
    v61 = v33;
    get_arp_protection(&v62, &v63, &v54);
    if ( !get_intvalue_post(v2, "arp_protection", &v62) )
      v62 = 0;
    if ( v62 )
    {
      if ( !get_intvalue_post(v2, "period", &v63) )
        v63 = 10;
      if ( !get_value_post(v2, (int)"ifname", (int)&v54, 32) )
        strcpy((char *)&v54, "eth0");
    }
    if ( check_unpermitted_chars(&v54) )
      strcpy((char *)&v54, "eth0");
    set_arp_protection(v62, v63, &v54);
    if ( !get_value_post(v2, (int)"csrf", (int)&v43, 256) )
      goto LABEL_105;
    v34 = atoi(&v43);
    set_csrf_op(v34);
    if ( get_value_post(v2, (int)"whitedomains", (int)&v43, 256) )
    {
      sf_strncpy(&v42, &v43, 256);
      sf_strncpy(&v41, &v42, 256);
      strtoupper(&v41);
      if ( strstr((const char *)&v41, "<SCRIPT>") )
        strcpy((char *)&v42, "");
      if ( !check_unpermitted_chars(&v42) )
        goto LABEL_104;
      v35 = (char *)&v42;
    }
    else
    {
      v35 = (char *)&v42;
    }
    strcpy(v35, "");
LABEL_104:
    set_csrf_whites(&v42);
LABEL_105:
    v36 = apply_dos_config(&v56);
    v37 = signal_update(v36);
    signal_save(v37);
  }
  printf("<BODY style=\"display:block; vertical-align:middle; padding:0 0 0 0; margin:0 0 0 0; border:0 0 0 0; overflow:hidden;\">");
  printf("<form action=\"timepro.cgi\" method=\"post\" name=\"firewallconf_hasetup\">");
  printf("</form>");
  printf("</BODY>");
  printf("<script>");
  if ( !strcmp((const char *)&v52, "ext_run")
    || !strcmp((const char *)&v52, "ext_stop")
    || !strcmp((const char *)&v52, "ext_ipadd")
    || !strcmp((const char *)&v52, "ext_del") )
  {
    printf("if(parent.window.refresh_extlist) parent.window.refresh_extlist();");
  }
  if ( !strcmp((const char *)&v52, "int_run")
    || !strcmp((const char *)&v52, (const char *)&unk_79095)
    || !strcmp((const char *)&v52, "int_ipadd")
    || !strcmp((const char *)&v52, "int_del") )
  {
    printf("if(parent.window.refresh_intlist) parent.window.refresh_intlist();");
  }
  v38 = printf("UnMaskIt(parent.document, 'apply_mask');");
  v39 = get_remote_addr(v38);
  if ( !sub_2EDC0(v39)
    && (!strcmp((const char *)&v52, "ext_run") || !strcmp((const char *)&v52, "ext_stop"))
    && get_value_post(v2, (int)"rmgmt_chk", (int)&v52, 64)
    && get_value_post(v2, (int)"rmgmt_port", (int)&v51, 64)
    && !strcmp((const char *)&v52, "on") )
  {
    printf("if(parent.window.redirect_loginpage_and_logout)parent.window.redirect_loginpage_and_logout('%s');", &v51);
  }
  return printf("</script>");
}

//=======================분석 함수===========================

int __fastcall check_month(const char *a1)
{
  const char *v1;
    int v2; 
    int v3; // depends on Month 
    v1 = a1;
    if ( !strcmp(a1, "Jan") )
    {
      v3 = 7;
    }
    else if ( !strcmp(v1, "Feb") )
    {
      v3 = 4;
    }
    else if ( !strcmp(v1, "Mar") )
    {
      v3 = 10;
    }
    else
    {
      v3 = strcmp(v1, "Apr");
      if ( v3 )
      {
          if ( !strcmp(v1, "May") )
          {
            v3 = 11;
          }
          else if ( !strcmp(v1, "Jun") )
          {
            v3 = 9;
          }
          else if ( !strcmp(v1, "Jul") )
          {
            v3 = 8;
          }
          else if ( !strcmp(v1, "Aug") )
          {
            v3 = 1;
          }
          else if ( !strcmp(v1, "Sep") )
          {
            v3 = 21;
          }
          else if ( !strcmp(v1, "Oct") )
          {
            v3 = 17;
          }
          else if ( !strcmp(v1, "Nov") )
          {
            v3 = 16;
          }
          else if ( !strcmp(v1, "Dec") )
          {
            v3 = 3;
          }
          else
          {
            v3 = 7;
          }
      }
  }
    return ret_set_day(v3, v2);
}

int __fastcall set_month(const char *a1)
{
    const char *v1;
    signed int result;

    v1 = a1;
    if ( !strcmp(a1, "Jan") )
      goto LABEL_27;
    if ( !strcmp(v1, "Feb") )
      return 2;
    if ( !strcmp(v1, "Mar") )
      return 3;
    if ( !strcmp(v1, "Apr") )
      return 4;
    if ( !strcmp(v1, "May") )
      return 5;
    if ( !strcmp(v1, "Jun") )
      return 6;
    if ( !strcmp(v1, "Jul") )
      return 7;
    if ( !strcmp(v1, "Aug") )
      return 8;
    if ( !strcmp(v1, "Sep") )
      return 9;
    if ( !strcmp(v1, "Oct") )
      return 10;
    if ( !strcmp(v1, "Nov") )
      return 11;
    if ( strcmp(v1, "Dec") )
  LABEL_27:
      result = 1;
  else
    {
      result = 12;
      return result;
    }
}

int __fastcall manage_connection(int a1)
{
  int v1; 
  int result; 
  int v3; 
  const char *v4;
  int v5; 
  char v6; 
  char dest; 
  char v8; 
  char v9; 

  v1 = a1;
  result = get_value_post(a1, (int)"act", (int)&v8, 32);
  if ( result )
  {
    get_value_post(v1, (int)"wan", (int)&v9, 20);
    v3 = strcmp(&v9, "wan2");
    v4 = "eth3";
    if ( v3 )
      v4 = "eth1";
    strcpy(&dest, v4);
    if ( !strcmp(&v8, "connect") )
    {
      set_wansetup_status(&v9, 1);
      snprintf2(&v6, 256, "%s(%s)", "@{40}", &v9);
      syslog_msg(1, &v6);
      stop_wan(&v9);
    }
    else if ( !strcmp(&v8, "disconnect") )
    {
      snprintf2(&v6, 256, "%s(%s)", "@{41}", &v9);
      syslog_msg(1, &v6);
      set_wansetup_status(&v9, 0);
      stop_wan(&v9);
      set_ifconfig(&dest, "0.0.0.0", "0.0.0.0");
    }
    v5 = istatus_remove_status_tag("lanwan_samenetwork");
    result = signal_update(v5);
  }
  return result;
}

int __fastcall set_language_table(int a1)
{
  // korean인지, english인지 확인한 결과를 result에 담는다.
    int result; 
    char **v3;
    int v4; 

    v4 = a1;
    get_ux_lang((int)&v4 + 3);
    result = strcmp((const char *)&v4 + 3, "kr");
    if ( result )
    {
      result = strcmp((const char *)&v4 + 3, "en");
      if ( result )
          return result;
      v3 = off_95EB8;
    }
    else  
      v3 = off_948E8; 
    string_table_979AC = (int)v3;
    return result;
}

int __fastcall check_captcha(int a1, const char *a2)
{
    const char *v2;
    int result;
    char v4;

    v2 = a2;
    result = get_captcha();
    if ( result )
      result = strcmp(&v4, v2) == 0;
    return result;
}


int __fastcall set_day (const char *a1)
{
    const char *v1;
    int v2;
    int v3;

    v1 = a1;
    if ( !strcmp(a1, "Sun") )
    {
      v3 = 22;
    }
    else if ( !strcmp(v1, "Mon") )
    {
      v3 = 14;
    }
    else if ( !strcmp(v1, "Tue") )
    {
      v3 = 26;
    }
    else if ( !strcmp(v1, "Wed") )
    {
      v3 = 28;
    }
    else if ( !strcmp(v1, "Thu") )
    {
      v3 = 23;
    }
    else if ( !strcmp(v1, "Fri") )
    {
      v3 = 5;
    }
    else if ( !strcmp(v1, "Sat") )
    {
      v3 = 18;
    }
    else
    {
      v3 = 22;
    }
    return sub_129A0(v3, v2); // v2???
}

int __fastcall set_timer(char *a1, time_t a2)
{
    char *v2;
    time_t v3;
    int v4;
    const char *v5;
    int result;
    void *v7;
    time_t timer;

    timer = a2;
    v2 = a1;
    v3 = a2;
    if ( get_timed_status(a1) )
    {
      time(&timer);
      v7 = sub_12BF8(timer, 0);
      sf_strncpy(v2, v7, v3);
      result = 1;
    }
    else
    {
      v5 = (const char *)ret_set_day(15, v4);
      strcpy(v2, v5);
      result = 0;
    }
    return result;
}

int __fastcall ret_set_day(int a1, int a2) // a1 depends on day of the week
{
    if ( !dword_97928 )
      set_language(a1, a2); // 0 or not zero
    return *(_DWORD *)(dword_97928 + 4 * a1);
}

int __fastcall set_language(int a1, int a2)
{
    int result;
    char **v3;
    int v4;
    int v5;

    v4 = a1;
    v5 = a2;
    get_ux_lang((int)&v4 + 3);
    result = strcmp((const char *)&v4 + 3, "kr"); // set language as korean
    if ( result )
    {
      result = strcmp((const char *)&v4 + 3, "en"); // set language as english
      if ( result )
          return result; // return not zero
      v3 = off_94870;
    }
    else
    {
      v3 = off_947F8;
    }
    dword_97928 = (int)v3;
    return result; // return 0
}

int __fastcall check_fake_dns(int a1)
{
    char *v1;
    int v2;
    int v3;
    char *v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;

    v1 = "checked";
    v2 = get_fakedns(a1);
    printf("<TABLE border=0 valign=top CELLSPACING=0 CELLPADDING=0 WIDTH=100%%>");
    printf("<tr height=23px><td style=\"padding-left:5px;\" colspan=4>");
    if ( v2 )
      v4 = "checked";
    else
      v4 = "";
    v5 = pick_string_134F4(894, v3);
    printf("<input type=radio id=fakedns_on name=fakedns value=1 %s ><label for=fakedns_on> %s</label>", v4, v5);
    print_nbsp(10);
    if ( v2 )
      v1 = "";
    v7 = pick_string_134F4(900, v6);
    printf("<input type=radio id=fakedns_off name=fakedns value=0 %s ><label for=fakedns_off> %s</label>", v1, v7);
    printf("</td></tr>");
    printf("<tr height=5><td colspan=4>&nbsp;</td></tr>");
    v9 = pick_string_134F4(925, v8);
    printf(
      "<tr valign=bottom height=10><td colspan=4 style=\"padding-left:5px;\"><span class=gray_text><LI>%s</span></td></tr>", v9);
    return printf("</TABLE>");
}

int __fastcall chg_string_form(const char *a1)
{
    const char *v1;
    signed int v2;
    signed int v3;
    unsigned int v4;
    unsigned int v5;
    bool v6;
    bool v7;
    unsigned int v8; 
    bool v9; 
    bool v10; 

    v1 = a1;
    v2 = strlen(a1);
    v3 = 0;
    while ( v3 < v2 )
    {
      v4 = v1[v3++];
      v5 = v4 - 65;
      v6 = v4 - 97 >= 0x19;
      v7 = v4 == 122;
      if ( v4 - 97 > 0x19 )
      {
          v6 = v5 >= 0x19;
          v7 = v5 == 25;
      }
      v8 = v4 - 48;
      if ( !v7 && v6 )
      {
          v9 = v4 >= 0x2E;
          v10 = v4 == 46;
          if ( v4 != 46 )
          {
            v9 = v8 >= 9;
            v10 = v8 == 9;
          } 
          if ( !v10 && v9 && v4 != 45 )
            return 0;
      }
    }
    return 1;
}

int __fastcall select_name(int a1, int a2, int a3)
{
    char *v3;
    int v4;
    int v5;

    if ( a3 )
      v3 = "disabled";
    else
      v3 = "";
    printf("<select name=%s %s>", a1, v3);
    v4 = 0;
    do
    {
      v5 = v4++;
      printf("<option value=%d %s >%d", v5);
    }
    while ( v4 != 24 );
    return printf("</select>");
}

void *__fastcall check_langauge(const char *a1)
{
    const char *v1;
    int v2;
    int v3;
    const char *v4;
    char *v5;

    v1 = a1;
    if ( !strcmp(a1, "auto") )
    {
      v3 = 540;
    }
    else if ( !strcmp(v1, "kr") )
    {
      v3 = 111;
    }
    else if ( !strcmp(v1, "en") )
    {
      v3 = 110;
    }
    else if ( !strcmp(v1, "ch") )
    {
      v3 = 108;
    }
    else
    {
      if ( strcmp(v1, "cx") )
      {
          v5 = (char *)&unk_98520;
          v4 = "";
          goto LABEL_13;
      }
      v3 = 109;
    }
    v4 = (const char *)pick_string_134F4(v3, v2);
    v5 = (char *)&unk_98520;
  LABEL_13:
    strcpy(v5, v4);
    return &unk_98520;
}

int __fastcall send_mail(int a1)
{
    int v1;
    int result;
    int v3; 
    int v4; 
    int v5; 
    int v6; 
    int v7; 
    int v8; 
    int v9; 
    int v10;
    int v11;

    v1 = a1;
    result = get_value_post(a1, (int)"act", (int)&v11, 32);
    if ( result )
    {
      if ( !strcmp((const char *)&v11, "remove") )
      {
          v3 = syslog_clear();
      }
      else
      {
          if ( !strcmp((const char *)&v11, "sendmail") )
          {
            v4 = syslog_set_sendmail();
            signal_update(v4);
            return 1;
          }
          if ( get_value_post(v1, (int)"log_flag", (int)&v11, 32) )
          {
            v5 = strcmp((const char *)&v11, "on") == 0;
            syslog_set_status(v5);
          }
          if ( get_value_post(v1, (int)"log_email_chk", (int)&v11, 32) )
            v6 = strcmp((const char *)&v11, "on") == 0;
          else
            v6 = 0;
        v7 = get_value_post(v1, (int)"email_hour", (int)&v11, 32);
          if ( v7 )
            v7 = atoi((const char *)&v11);
          v8 = v7;
          v9 = get_value_post(v1, (int)"log_rmflag_chk", (int)&v11, 32);
          if ( v9 )
            v9 = strcmp((const char *)&v11, "on") == 0;
          v10 = syslog_set_email_status(v6, v8, v9);
          v3 = signal_update(v10);
      }
      signal_save(v3);
      return 1;
  }
    return result;
}

int __fastcall j_delete_pf_rule_after_check(int result)
{
  if ( result )
    result = delete_pf_rule(0, result);
  return result;
}

int __fastcall check_protocol(int a1, int a2, const char *a3)
{
    int v3;
    const char *v4;
    int v6;
    char v8;    
    char v9; 
    char v10;
    char v11;
    char v12;
    int v13;

    v3 = a1;
    v4 = a3;
    v6 = hwinfo_get_mtu(a3);
    if ( !strcmp(v4, "pppoe") || !strcmp(v4, "pptp") )
      get_pppoe_ifname(v5, &v10);
    get_wan_hw_ifname(v5, &v11);
    snprintf2(&v9, 128, "mtu.%s.%s", v4, &v11);
    snprintf2(&v8, 128, "mtu.%s.%s.check", v4, &v11);
    if ( get_value_post(v3, (int)&v8, (int)&v12, 32) && !strcmp(&v12, "on") )
    {
      if ( get_intvalue_post(v3, &v9, &v13) )
      {
          iconfig_set_intvalue_direct(&v8, 1);
          v6 = get_mtu_value(&v11, 1);
          if ( v6 != v13 )
          {
            iconfig_set_intvalue_direct(&v9, v13);
            if ( strcmp(v4, "pppoe") && strcmp(v4, "pptp") )
                set_mtu_value(&v11, v13);
            v6 = v13;
          } 
      }
    }
    else
    {
      iconfig_set_intvalue_direct(&v8, 0);
      if ( strcmp(v4, "pppoe") && strcmp(v4, "pptp") )
          set_mtu_value(&v11, v6);
    }
    return v6;
}

int __fastcall ping_check_tcp_scan(int a1)
{
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    signed int v7;
    int v8;
    signed int v9;
    int v10; 
    signed int v11;
    int v12;
    int v13;
    int v14;
    int v15;

    v1 = a1;
    v2 = istatus_get_intvalue_direct((int)"scan_type");
    if ( v2 == -1 )
      v3 = 0;
    *(_DWORD *)v1 = v2;
    if ( v2 == -1 )
      *(_DWORD *)v1 = v3;
    v4 = istatus_get_intvalue_direct((int)"ping_type");
    if ( v4 == -1 )
      v5 = 0;
    *(_DWORD *)(v1 + 4) = v4;
    if ( v4 == -1 )
      *(_DWORD *)(v1 + 4) = v5;
    if ( istatus_get_value_direct("ping_addr", v1 + 8) == -1 )
      *(_BYTE *)(v1 + 8) = 0;
    if ( istatus_get_value_direct("tcp_addr", v1 + 40) == -1 )
      *(_BYTE *)(v1 + 40) = 0;
    if ( istatus_get_value_direct("text_color", v1 + 72) == -1 )
      strcpy((char *)(v1 + 72), "start");
    v6 = istatus_get_intvalue_direct((int)"ping_count");
    if ( v6 == -1 )
      v7 = 3;
    *(_DWORD *)(v1 + 104) = v6;
    if ( v6 == -1 )
      *(_DWORD *)(v1 + 104) = v7;
    v8 = istatus_get_intvalue_direct((int)"ping_datasize");
    if ( v8 == -1 )
      v9 = 100;
    *(_DWORD *)(v1 + 108) = v8;
    if ( v8 == -1 )
      *(_DWORD *)(v1 + 108) = v9;
    v10 = istatus_get_intvalue_direct((int)"ping_timeout");
    if ( v10 == -1 )
      v11 = 1;
    *(_DWORD *)(v1 + 112) = v10;
    if ( v10 == -1 )
      *(_DWORD *)(v1 + 112) = v11;
    v12 = istatus_get_intvalue_direct((int)"tcp_scan_start_port");
    if ( v12 == -1 )
      v13 = 0;
    *(_DWORD *)(v1 + 116) = v12;
    if ( v12 == -1 )
      *(_DWORD *)(v1 + 116) = v13;
    v14 = istatus_get_intvalue_direct((int)"tcp_scan_end_port");
    if ( v14 == -1 )
      v15 = 0;
    *(_DWORD *)(v1 + 120) = v14;
    if ( v14 == -1 )
      *(_DWORD *)(v1 + 120) = v15;
    return 0;
}

int __fastcall w_driver_file(int a1)
{
    int v1; 
    int result; 
    int v3; 
    int v4; 
    int v5; 
    int v6; 
    char *v7;
    signed int v8;
    int v9; 
    int v10; // r0@13
    signed int v11; 
    const char *v12; 
    int v13;
    int v14; 
    int v15; 
    int v16; 
    int v17; 
    int v18; 
    bool v19; 
    const char *v20; 
    int v21; 
    int v22; 
    signed int v23; 
    int v24; 
    int v25; 
    const char *v26; 
    const char *v27; 
    const char *v28; 
    int v29; 
    int v30; 
    char v31; 
    char v32; 
    int v33;
    int v34;
    char v35; 
    char v36; 
    char v37;
    char s[24]; 
    char v39;
    int v40; 
    char v41; 

    v1 = a1;
    result = get_value_post(a1, (int)"act", (int)&v32, 128);
    if ( !result )
      return result;
    v3 = strcmp(&v32, "addftpport");
    if ( v3 )
    {
      v9 = strcmp(&v32, "delftpport");
      if ( !v9 )
      {
          v4 = read_ftp_private_port(s, 6);
          if ( v4 )
          {
            do
            {
                snprintf2(&v37, 32, "port%d_ch", v9);
                if ( get_value_post(v1, (int)&v37, (int)&v31, 32) && !strcmp(&v31, "checked") )
                  *(_DWORD *)&s[4 * v9] = 0;
                ++v9;
            }
            while ( v9 != 6 );
            v4 = write_ftp_private_port(s, 6);
          }
          goto LABEL_60;
      }
      if ( !strcmp(&v32, "natonoff") )
      {
          get_value_post(v1, (int)"nat_run", (int)&v32, 128);
          v10 = atoi(&v32);
          v11 = v10;
          if ( v10 )
            v11 = 1;
          if ( !v11 && sysconf_nat_get(v10 + 1) || (v4 = sysconf_nat_get(1)) == 0 )
          {
            sysconf_nat_set(v11, 0);
            v12 = "@{78}";
            if ( !v11 )
                v12 = "@{77}";
            v13 = syslog_msg(1, v12);
            v8 = 1;
            v4 = saveconf(v13);
            goto LABEL_61;
          }
          goto LABEL_31;
      }
      if ( !strcmp(&v32, "pppoe") )
      {
          get_value_post(v1, (int)"pppoe_relay", (int)&v32, 128);
          v8 = 0;
          v40 = atoi(&v32) != 0;
          v4 = set_pppoe_relay_enabled(v40);
          goto LABEL_61;
      }
      if ( !strcmp(&v32, "upnp_relay") )
      {
          v14 = get_intvalue_post(v1, "upnp_relay", &v40);
          v15 = v40;
          v4 = get_upnp_relay(v14);
          if ( v15 != v4 )
          {
            v4 = set_upnp_relay(v40);
            if ( v40 )
            {
                discover_upper_upnp_igd(v4);
                v4 = portforward_upnp_relay_init("user_pf");
                v8 = 0;
                goto LABEL_61;
            }
          }
      LABEL_60:
          v8 = 0;
          goto LABEL_61;
      }
      v4 = strcmp(&v32, "dmztwinip");
      v16 = v4;
      if ( v4 )
        goto LABEL_60;
      get_value_post(v1, (int)"wanid", (int)&v37, 32);
      v17 = atoi(&v37);
      v18 = v17;
      v19 = v17 == 1;
      v20 = "wan2";
      if ( v19 )
        v20 = "wan1";
      dmztwinip_read_config(v20, &v33);
      snprintf2(&v36, 32, "w%dmode", v18);
      v4 = get_value_post(v1, (int)&v36, (int)&v37, 32);
      if ( !v4 )
      {
      LABEL_31:
          v8 = 1;
          goto LABEL_61;
      }
      v21 = atoi(&v37);
      v22 = v21;
      if ( v33 == 2 )
      {
          dhcpd_remove_static_lease(v16, &v34);
          dhcpd_remove_dynamic_lease(v16, &v34);
          v23 = 1;
      }
      else
      {
          if ( v21 == 2 )
          {
            snprintf2(&v31, 128, "w%dhw", v18);
            get_hw_value_post(v1, &v31, &v39);
            dhcpd_remove_static_lease(0, &v39);
            dhcpd_remove_dynamic_lease(0, &v39);
            v23 = 1;
            goto LABEL_45;
          }
          v23 = 0;
      }
      if ( !v22 )
      {
          dmztwinip_apply_off(v18, &v33);
          write_file("/proc/driver/twinip", "0");
          goto LABEL_48;
      }
      if ( v22 == 1 )
      {
          if ( v33 == 2 )
          {
            dmztwinip_apply_off(v18, &v33);
            write_file("/proc/driver/twinip", "0");
          }
          snprintf2(&v31, 128, "w%dip", v18);
          get_ip_value_post(v1, &v31, &v37);
          dmztwinip_apply_dmz(v18, &v37, &v33);
      LABEL_48:
          v33 = v22;
          if ( v18 == 1 )
            v27 = "wan1";
          else
            v27 = "wan2";
          v4 = dmztwinip_write_config(v27, &v33);
          if ( v33 == 2 )
          {
            dhcpd_remove_static_lease(0, &v34);
            dhcpd_remove_dynamic_lease(0, &v34);
            if ( v18 == 1 )
                v28 = "wan1";
            else
                v28 = "wan2";
            v4 = get_wan_ip(v28, &v35);
            if ( v4 )
                v4 = dhcpd_add_static_lease(&v35, &v34);
          }
          else if ( !v23 )
          {
            v8 = 0;
            goto LABEL_61;
          }
          v29 = dhcpd_stop(v4);
          v8 = 0;
          v4 = dhcpd_start(v29);
          goto LABEL_61;
      }
      if ( v22 != 2 )
          goto LABEL_48;
    LABEL_45:
      snprintf2(&v31, 128, "w%dhw", v18);
      get_hw_value_post(v1, &v31, &v39);
      snprintf2(&v31, 128, (const char *)&unk_72040, v18);
      get_value_post(v1, (int)&v31, (int)&v37, 32);
      v24 = atoi(&v37);
      if ( v33 == 1 )
        dmztwinip_apply_off(v18, &v33);
      v25 = get_twinip_wan_virtual_ip("wan1");
      snprintf2(&v31, 128, "1 %s ", v25);
      v26 = (const char *)get_twinip_wan_virtual_ip("wan2");
      strcat(&v31, v26);
      write_file("/proc/driver/twinip", &v31);
      dmztwinip_apply_twinip(v18, &v39, v24, &v33);
      goto LABEL_48;
  }
    memset(s, 0, 0x18u);
    v4 = get_value_post(v1, (int)"ftp_port", (int)&v31, 128);
    if ( !v4 )
      goto LABEL_60;
    v5 = read_ftp_private_port(s, 6);
    v6 = atoi(&v31);
    v7 = &v41 + 4 * v5;
    v8 = v3;
    *((_DWORD *)v7 - 12) = v6;
    v4 = write_ftp_private_port(s, 6);
  LABEL_61:
    v30 = signal_update(v4);
    signal_save(v30);
    if ( v8 )
      signal_reboot(3);
    return 1;
}

int __fastcall advertiseexlist(int a1)
{
    int v1;
    int result; 
    char *v3;
    int v4;
    bool v5;
    int v6; 
    char v7; 
    char v8;
    char v9;
    char v10;

    v1 = a1;
    result = get_value_post(a1, (int)"act", (int)&v7, 32);
    if ( result )
    {
      if ( !strcmp(&v7, "add") )
      {
          result = get_ip_value_post(v1, "free_sip", &v10);
          if ( result )
          {
            if ( !get_ip_value_post(v1, "free_eip", &v9) )
                strcpy(&v9, &v10);
            snprintf2(&v8, 64, "%s-%s", &v10, &v9);
            memset(&v7, 0, 0x80u);
            get_value_post(v1, "dev", (int)&v7, 128);
            result = check_unpermitted_chars(&v7);
            if ( !result )
            {
                v3 = (char *)add_url_redir_freedevice(&v8);
          LABEL_15:
                v6 = signal_save(v3);
                return signal_update(v6);
            }
          }
      }
      else
      {
          result = strcmp(&v7, "del");
          if ( !result )
          {
            v4 = 0;
            while ( 1 )
            {
                v5 = get_value_array_post(v1, "delchk", v4, &v10) == 0;
                v3 = &v10;
                if ( v5 )
                  break;
                if ( !check_unpermitted_chars(&v10) )
                {
                  remove_url_redir_freedevice(&v10);
                  ++v4;
                }
            }
            goto LABEL_15;
          }
      }
    }
    return result;
}

int __fastcall chk_nologin(int a1)
{
  char *v1;
  int v2; 
  int v3; 
  char *v4;
  int v5;
  int v6;
  int v7;

  v1 = "checked";
  v2 = get_nologin(a1);
  printf("<TABLE border=0 valign=top CELLSPACING=0 CELLPADDING=0 WIDTH=100%%>");
  printf("<tr height=23px><td style=\"padding-left:5px;\" colspan=4>");
  if ( v2 )
    v4 = "";
  else
    v4 = "checked";
  v5 = pick_string_134F4(955, v3);
  printf("<input type=radio id=nologin_off name=nologin value=0 %s ><label for=nologin_off> %s</label>", v4, v5);
  printf("</td></tr><tr height=23px><td style=\"padding-left:5px;\"colspan=4 >");
  if ( !v2 )
    v1 = "";
  v7 = pick_string_134F4(956, v6);
  printf("<input type=radio id=nologin_on name=nologin value=1 %s ><label for=nologin_on> %s</label>", v1, v7);
  printf("</td></tr>");
  return printf("</TABLE>");
}

FILE *__fastcall w_set_tmp_file(int a1, int a2)
{

  FILE *result;
  FILE *v3;
  char v4;
  void *ptr;
  size_t n;

  n = 0;
  get_value_post_multipart_file(a2, "fw_restore_file", &ptr, &v4);
  result = fopen("/tmp/user_fw.set.tmp", "w+");
  v3 = result;
  if ( result )
  {
    fwrite(ptr, 1u, n, result);
    result = (FILE *)fclose(v3);
  }
  return result;
}

int __fastcall display_image_table(const char *a1, int a2)
{
  int v2; // r5@1
  const char *v3; // r4@1
  void *v4; // r0@3

  v2 = a2;
  v3 = a1;
  if ( !strcmp(a1, "reboot_mask") )
  {
    printf("<style>");
    printf("#%s p { margin: 5px 0 5px 15px; text-align: left; }", v3);
    printf("</style>");
  }
  printf("<DIV id=\"%s\" style=\"display:none;\">", v3);
  puts("<DIV style=\"position:absolute; left:0px; top:0px; width:642px; height:535px; z-index:10; background-color:#ffffff;                 opacity:0.5; -moz-opacity:0.5; -khtml-opacity:0.5; -webkit-opacity:0.5; filter:alpha(opacity=50);\">");
  printf("</DIV>");
  puts("<DIV style=\"position:absolute; left:231px; top:198px; width:180px; height:70px; z-index:100; background-color:#ffffff;                 opacity:1; -moz-opacity:1; -khtml-opacity:1; -webkit-opacity:1; filter:alpha(opacity=100); border:1px #CCC solid;                 box-shadow:5px 5px 20px #888888;\">");
  puts("<table width=\"180\" height=\"70\">");
  printf("<tr><td width=\"20%%\" height=\"100%%\" align=\"center\" valign=\"middle\">\n");
  puts("<SPAN style=\"vertical-align:middle; display:block; text-align:center;\">");
  v4 = sub_126C4();
  printf(
    "<img src=\"/%s/apply_ani.gif\" style=\"display:inline-block; *display:inline; zoom:1; vertical-align:middle;\">",
    v4);
  printf("</SPAN></td>");
  printf(
    "<td width=\"80%%\" height=\"100%%\" align=\"center\" valign=\"middle\">                <SPAN style=\"vertical-align:"
    "middle; display:block; text-align:center;\">%s\n",
    v2);
  printf("</SPAN></td>");
  return printf((const char *)&unk_60F0E);
}

char *__fastcall chk_day(int a1)
{
  int v1; // r5@1
  int v2; // r1@2
  int v3; // r0@2
  int v4; // r1@2
  int v5; // r0@2
  int v6; // r1@2
  int v7; // r0@2
  int v8; // r1@2
  int v9; // r0@2
  int v10; // r1@2
  int v11; // r0@2
  int v12; // r1@2
  int v13; // r0@2
  int v14; // r1@2
  int v15; // r0@2
  int v16; // r1@2
  int v17; // r0@2

  v1 = a1;
  if ( !byte_985A0[0] )
  {
    sf_strncpy(byte_985A0, "Mon", 6);
    v3 = pick_string_134F4(289, v2);
    sf_strncpy(&unk_985A6, v3, 15);
    sf_strncpy(&unk_985B5, "Tue", 6);
    v5 = pick_string_134F4(311, v4);
    sf_strncpy(&unk_985BB, v5, 15);
    sf_strncpy(&unk_985CA, "Wed", 6);
    v7 = pick_string_134F4(312, v6);
    sf_strncpy(&unk_985D0, v7, 15);
    sf_strncpy(&unk_985DF, "Thu", 6);
    v9 = pick_string_134F4(309, v8);
    sf_strncpy(&unk_985E5, v9, 15);
    sf_strncpy(&unk_985F4, "Fri", 6);
    v11 = pick_string_134F4(282, v10);
    sf_strncpy(&unk_985FA, v11, 15);
    sf_strncpy(&unk_98609, "Sat", 6);
    v13 = pick_string_134F4(302, v12);
    sf_strncpy(&unk_9860F, v13, 15);
    sf_strncpy(&unk_9861E, "Sun", 6);
    v15 = pick_string_134F4(307, v14);
    sf_strncpy(&unk_98624, v15, 15);
    sf_strncpy(&unk_98633, "Every", 6);
    v17 = pick_string_134F4(274, v16);
    sf_strncpy(&unk_98639, v17, 15);
  }
  return &byte_985A0[21 * v1];
}

int __fastcall set_wan(int a1)
{
  int v1; // r8@1
  int result; // r0@1
  const char *v3; // r0@3
  int v4; // r0@12
  int v5; // r1@15
  __int16 *v6; // r0@16
  int v7; // r0@31
  int v8; // r0@33
  int v9; // r0@36
  int v10; // r0@36
  int v11; // r0@36
  int v12; // [sp+8h] [bp+0h]@1
  char v13; // [sp+208h] [bp+200h]@22
  char v14; // [sp+288h] [bp+280h]@24
  int v15; // [sp+330h] [bp+328h]@24
  char v16; // [sp+334h] [bp+32Ch]@26
  char v17; // [sp+338h] [bp+330h]@26
  int v18; // [sp+340h] [bp+338h]@24
  __int16 v19; // [sp+346h] [bp+33Eh]@28
  __int16 v20; // [sp+3C6h] [bp+3BEh]@4
  __int16 v21; // [sp+406h] [bp+3FEh]@28
  __int16 v22; // [sp+426h] [bp+41Eh]@28
  __int16 v23; // [sp+446h] [bp+43Eh]@28
  __int16 v24; // [sp+466h] [bp+45Eh]@33
  __int16 v25; // [sp+47Ah] [bp+472h]@33
  __int16 v26; // [sp+48Eh] [bp+486h]@6
  __int16 v27; // [sp+4A2h] [bp+49Ah]@6
  __int16 v28; // [sp+4B6h] [bp+4AEh]@6
  __int16 v29; // [sp+4CAh] [bp+4C2h]@2
  __int16 v30; // [sp+4DEh] [bp+4D6h]@4

  v1 = a1;
  result = get_value_post(a1, (int)"act", (int)&v12, 512);
  if ( result )
  {
    if ( !get_value_post(v1, (int)"wan", (int)&v29, 20) )
    {
      v3 = "No WAN name is specified. Debug it..";
      return puts(v3);
    }
    get_wan_hw_ifname(&v29, &v30);
    set_wansetup_status(&v29, 1);
    result = get_value_post(v1, (int)"wan_type", (int)&v20, 64);
    if ( !result )
      return result;
    ((void (*)(void))signal_toggle)();
    stop_wan(&v29);
    set_wan_type(&v29, &v20);
    if ( !strcmp((const char *)&v20, "static") )
    {
      strcpy((char *)&v28, "");
      get_ip_value_post(v1, "ip", &v28);
      strcpy((char *)&v27, "");
      get_ip_value_post(v1, "sm", &v27);
      strcpy((char *)&v26, "");
      get_ip_value_post(v1, "gw", &v26);
      set_wan_ipconfig(&v30, &v28, &v27, &v26);
      set_hw(v1, &v30, &v20);
      set_ifconfig(&v30, &v28, &v27);
      if ( !sysconf_nat_get(1) )
        make_virtual_host_page(&v28);
      if ( check_default_gateway(&v26, &v28, &v27) )
      {
        set_default_gateway(&v30, 0);
      }
      else
      {
        set_default_gateway("br0", 0);
        if ( set_default_gateway(&v30, &v26) )
          set_default_gateway2(&v30, &v28, &v27, &v26);
      }
      v4 = set_mtu_value(v1, (int)&v29, (const char *)&v20);
      signal_wan(v4);
    }
    else if ( !strcmp((const char *)&v20, "dynamic") )
    {
      set_ifconfig(&v30, "0.0.0.0", "255.255.255.0");
      set_wan_ipconfig(&v30, "0.0.0.0", "255.255.255.0", 0);
      if ( !get_value_post(v1, (int)"allow_private", (int)&v12, 512) || (v5 = strcmp((const char *)&v12, "on")) != 0 )
      {
        v6 = &v30;
        v5 = 1;
      }
      else
      {
        v6 = &v30;
      }
      set_dhclient_block_private_ip(v6, v5);
      set_dhcp_auto_restart(&v30, 1);
      set_hw(v1, &v30, &v20);
      set_mtu_value(v1, (int)&v29, (const char *)&v20);
    }
    else if ( !strcmp((const char *)&v20, "pppoe") )
    {
      if ( get_pppoe_status(&v29) == 7 )
        set_pppoe_status(&v29, 0);
      set_ifconfig(&v30, "0.0.0.0", "255.255.255.0");
      set_wan_ipconfig(&v30, "0.0.0.0", "255.255.255.0", 0);
      read_pppoe_option(&v29, &v13);
      get_value_post(v1, (int)"userid", (int)&v13, 128);
      if ( check_unpermitted_chars(&v13) )
        strcpy(&v13, "");
      get_value_post(v1, (int)"passwd", (int)&v14, 128);
      set_hw(v1, &v30, &v20);
      v18 = set_mtu_value(v1, (int)&v29, (const char *)&v20);
      if ( get_intvalue_post(v1, "lcp_flag", &v15) )
      {
        get_intvalue_post(v1, "lcp_echo_interval", &v16);
        get_intvalue_post(v1, "lcp_echo_failure", &v17);
      }
      else
      {
        v15 = 0;
      }
      save_pppoe_option(&v29, &v13);
    }
    snprintf2(&v19, 128, "dns_%s_chk", &v20);
    snprintf2(&v22, 32, "fdns_%s", &v20);
    snprintf2(&v21, 32, "sdns_%s", &v20);
    if ( get_value_post(v1, (int)&v19, (int)&v23, 32) && !strcmp((const char *)&v23, "on")
      || !strcmp((const char *)&v20, "static") )
    {
      v7 = strcmp((const char *)&v20, "static");
      if ( v7 && !check_valid_account(v7) )
        goto LABEL_36;
      strcpy((char *)&v25, "");
      strcpy((char *)&v24, "");
      get_ip_value_post(v1, &v22, &v25);
      get_ip_value_post(v1, &v21, &v24);
      set_autodns(0);
      dhcpd_set_dns(&v25, &v24);
      set_manual_dns_flag(&v30, &v20, 1);
      v8 = set_dns_shadow(&v30, &v20, &v25, &v24);
      get_remote_addr(v8);
      syslog_msg(1, "@{57}");
    }
    else
    {
      set_autodns(1);
      set_manual_dns_flag(&v30, &v20, 0);
    }
    set_system_dns(&v29);
  LABEL_36:
    v9 = istatus_remove_status_tag("lanwan_samenetwork");
    v10 = signal_toggle(v9);
    v11 = signal_update(v10);
    signal_save(v11);
    puts("<script language=JavaScript>");
    v3 = "</script>";
    return puts(v3);
  }
  return result;
}

int __fastcall set_hw(int a1, const char *a2, int a3)
{
  int v3; // r5@1
  int v4; // r7@1
  int v5; // r6@1
  char v7; // [sp+4h] [bp-17Ch]@2
  char v8; // [sp+84h] [bp-FCh]@2
  char v9; // [sp+104h] [bp-7Ch]@2
  char v10; // [sp+124h] [bp-5Ch]@7
  char s2; // [sp+138h] [bp-48h]@2
  char dest; // [sp+14Ch] [bp-34h]@4

  v3 = (int)a2;
  v4 = a1;
  v5 = a3;
  if ( !strcmp(a2, "eth1") )
  {
    snprintf2(&v8, 128, "hw_conf_%s", v5);
    snprintf2(&v7, 128, "hw_%s", v5);
    get_hwaddr_kernel(v3, (int)&s2);
    if ( get_value_post(v4, (int)&v8, (int)&v9, 32) && !strcmp(&v9, "on") )
    {
      strcpy(&dest, "");
      get_hw_value_post(v4, &v7, &dest);
      if ( !check_invalid_hwaddr(&dest) && strcmp(&dest, &s2) )
      {
        set_hwaddr_kernel(v3, &dest, 1);
        set_hwaddr_cloned(v3, &dest);
      }
    }
    else
    {
      get_hwaddr_org(v3, &v10);
      set_hwaddr_cloned(v3, 0);
      if ( strcmp(&v10, &s2) )
        set_hwaddr_kernel(v3, &v10, 1);
    }
  }
  return 0;
}

int __fastcall set_mtu_value(int a1, int a2, const char *a3)
{
  int v3; // r9@1
  const char *v4; // r4@1
  int v5; // r6@1
  int v6; // r5@1
  char v8; // [sp+Ch] [bp-1C4h]@4
  char v9; // [sp+8Ch] [bp-144h]@4
  char v10; // [sp+10Ch] [bp-C4h]@3
  char v11; // [sp+14Ch] [bp-84h]@4
  char v12; // [sp+18Ch] [bp-44h]@4
  int v13; // [sp+1ACh] [bp-24h]@9

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = hwinfo_get_mtu(a3);
  if ( !strcmp(v4, "pppoe") || !strcmp(v4, "pptp") )
    get_pppoe_ifname(v5, &v10);
  get_wan_hw_ifname(v5, &v11);
  snprintf2(&v9, 128, "mtu.%s.%s", v4, &v11);
  snprintf2(&v8, 128, "mtu.%s.%s.check", v4, &v11);
  if ( get_value_post(v3, (int)&v8, (int)&v12, 32) && !strcmp(&v12, "on") )
  {
    if ( get_intvalue_post(v3, &v9, &v13) )
    {
      iconfig_set_intvalue_direct(&v8, 1);
      v6 = get_mtu_value(&v11, 1);
      if ( v6 != v13 )
      {
        iconfig_set_intvalue_direct(&v9, v13);
        if ( strcmp(v4, "pppoe") && strcmp(v4, "pptp") )
          set_mtu_value(&v11, v13);
        v6 = v13;
      }
    }
  }
  else
  {
    iconfig_set_intvalue_direct(&v8, 0);
    if ( strcmp(v4, "pppoe") && strcmp(v4, "pptp") )
      set_mtu_value(&v11, v6);
  }
  return v6;
}

const char *__fastcall set_bridge(int a1)
{
  int v1; // r6@1
  const char *result; // r0@1
  const char *v3; // r4@1
  const char *v4; // r0@3
  const char *v5; // r0@3
  const char *v6; // r0@5
  int v7; // r0@6
  const char *v8; // r0@7
  int v9; // r0@8
  const char *v10; // r0@9
  int v11; // r0@10
  int v12; // r0@12
  const char *v13; // r4@14
  int v14; // r0@15
  signed int v15; // r3@15
  int v16; // r5@15
  int i; // r4@20
  const char *v18; // r0@21
  int v19; // r0@22
  const char *v20; // r0@23
  int v21; // r0@24
  int v22; // r0@27
  char v23; // [sp+4h] [bp-3BCh]@15
  int v24; // [sp+278h] [bp-148h]@15

  v1 = a1;
  result = (const char *)get_pvalue(a1, (int)"act");
  v3 = result;
  if ( result )
  {
    if ( !strcmp(result, "opstp") )
    {
      v4 = (const char *)get_pvalue(v1, (int)"op");
      atoi(v4);
      v5 = (const char *)stp_set_operation("br0");
    }
    else if ( !strcmp(v3, "setbridge") )
    {
      v6 = (const char *)get_pvalue(v1, (int)"br_prio");
      if ( v6 )
      {
        v7 = atoi(v6);
        stp_set_bridge_priority("br0", v7);
      }
      v8 = (const char *)get_pvalue(v1, (int)"br_fd");
      if ( v8 )
      {
        v9 = atoi(v8);
        stp_set_bridge_forward_delay("br0", v9);
      }
      v10 = (const char *)get_pvalue(v1, (int)"br_maxage");
      if ( v10 )
      {
        v11 = atoi(v10);
        stp_set_bridge_max_message_age("br0", v11);
      }
      v5 = (const char *)get_pvalue(v1, (int)"br_hello");
      if ( v5 )
      {
        v12 = atoi(v5);
        v5 = (const char *)stp_set_bridge_hello_time("br0", v12);
      }
    }
    else
    {
      v5 = (const char *)strcmp(v3, "setport");
      if ( !v5 )
      {
        v5 = (const char *)get_pvalue(v1, (int)"port");
        v13 = v5;
        if ( v5 )
        {
          get_si((int)"hw", (int)&v23);
          v14 = atoi(v13);
          v15 = v24;
          v16 = v14;
          if ( v14 )
            v15 = v14;
          else
            v16 = v24;
          if ( !v14 )
            v15 = 1;
          for ( i = v15; ; ++i )
          {
            v5 = (const char *)v1;
            if ( i > v16 )
              break;
            v18 = (const char *)get_pvalue(v1, (int)"port_prio");
            if ( v18 )
            {
              v19 = atoi(v18);
              stp_set_bridge_port_priority("br0", i, v19);
            }
            v20 = (const char *)get_pvalue(v1, (int)"port_cost");
            if ( v20 )
            {
              v21 = atoi(v20);
              stp_set_bridge_port_cost("br0", i, v21);
            }
          }
        }
      }
    }
    v22 = signal_update(v5);
    result = (const char *)signal_save(v22);
  }
  return result;
}

int view_bridge_info()
{
  int v0; // r1@1
  int v1; // r0@1
  char *v2; // r5@1
  int v3; // r1@1
  char *v4; // r4@2
  int v5; // r0@4
  char *v6; // r1@4
  signed int v7; // r4@4
  int v8; // r1@4
  int v9; // r0@6
  int v10; // r1@6
  int v11; // r0@6
  int v12; // r0@6
  int v13; // r0@6
  int v14; // r0@6
  int v15; // r1@6
  int v16; // r0@6
  int v17; // r0@6
  int v18; // r0@6
  int v19; // r1@6
  const char *v20; // r0@6
  int v21; // r0@6
  int v22; // r1@6
  const char *v23; // r0@6
  int v24; // r0@6
  int v25; // r1@6
  const char *v26; // r0@6
  int v27; // r0@6
  int v28; // r1@6
  int v29; // r0@6
  int v30; // r0@6
  int v31; // r1@6
  int v32; // r0@6
  int v33; // r0@6
  int v34; // r0@6
  int v35; // r0@6
  signed int v36; // r1@8
  bool v37; // zf@8
  bool v38; // nf@8
  unsigned __int8 v39; // vf@8
  signed int v40; // r2@8
  int v41; // r0@9
  int v42; // r0@9
  int v43; // r1@9
  int v44; // r0@9
  int v45; // r0@9
  int v46; // r0@9
  int v47; // r0@9
  int v49; // [sp+0h] [bp-3C8h]@6
  int v50; // [sp+274h] [bp-154h]@8
  int v51; // [sp+3ACh] [bp-1Ch]@1

  puts("<form method=get action=timepro.cgi name=stp_fm>");
  puts("<input type=hidden name=tmenu value=switchconf>");
  puts("<input type=hidden name=smenu value=stp>");
  puts("<input type=hidden name=act value=opstp>");
  stp_get_operation("br0", &v51);
  puts("<tr><td>");
  printf("<table cellspacing=0px cellpadding=0px style='width: 100%%; margin-top: 5px;'>\n");
  printf("<tr class='title'>");
  v1 = pick_string_134F4(754, v0);
  v2 = "";
  printf("<td style='width: 110px;'><b>STP %s</b></td>", v1);
  puts("<td>");
  if ( v51 )
    v4 = "checked";
  else
    v4 = "";
  v5 = pick_string_134F4(894, v3);
  v6 = v4;
  v7 = 1;
  printf("<input type=radio name=op value=1 %s> %s", v6, v5);
  print_nbsp(10);
  if ( !v51 )
    v2 = "checked";
  v9 = pick_string_134F4(900, v8);
  printf("<input type=radio name=op value=0 %s> %s", v2, v9);
  puts("</td>");
  puts("<td align=right>");
  v11 = pick_string_134F4(28, v10);
  printf("<input type=button value=\"%s\" name=\"set_bt\" style='margin-right: 39px;' onclick=\"setupStp()\">\n", v11);
  v12 = printf("</td>");
  etr(v12);
  v13 = print_blank_line(3, 5);
  print_end_content_table(v13);
  puts("</form>");
  puts("<tr><td>");
  v14 = puts("<table cellspacing=0px cellpadding=0px>");
  str(v14);
  puts("<form method=get action=timepro.cgi name=stp_bridge_fm>");
  puts("<input type=hidden name=tmenu value=switchconf>");
  puts("<input type=hidden name=smenu value=stp>");
  puts("<input type=hidden name=act value=setbridge>");
  printf("<td width=50%% valign=top>");
  puts("<table cellspacing=0px cellpadding=0px>");
  printf("<tr class='title'>");
  puts("<td colspan=3 align=left>");
  v16 = pick_string_134F4(883, v15);
  printf("<b>Bridge %s</b>", v16);
  printf("</td>");
  v17 = printf("</tr>");
  etr(v17);
  stp_get_bridge_priority("br0", &v51);
  printf("<tr class='list'>");
  printf("<td style='width: 90px;'>Priorirty</td>");
  printf("<td><input type=text name=br_prio size=5 maxlength=5 value=%d>", v51);
  printf("</td>");
  v18 = printf("<td>(0 ~ 65535, 32768)</td>");
  etr(v18);
  stp_get_bridge_forward_delay("br0", &v51);
  printf("<tr class='list'>");
  printf("<td>Forward Delay</td>");
  printf("<td><input type=text name=br_fd size=2 maxlength=2 value=%d> ", v51);
  v20 = (const char *)pick_string_134F4(878, v19);
  printf(v20);
  printf("</td>");
  v21 = printf("<td>(4 ~ 30, 15)</td>");
  etr(v21);
  stp_get_bridge_max_message_age("br0", &v51);
  printf("<tr class='list'>");
  printf("<td>Max Age</td>");
  printf("<td><input type=text name=br_maxage size=2 maxlength=2 value=%d> ", v51);
  v23 = (const char *)pick_string_134F4(878, v22);
  printf(v23);
  printf("</td>");
  v24 = printf("<td>(6 ~ 40, 20)</td>");
  etr(v24);
  stp_get_bridge_hello_time("br0", &v51);
  printf("<tr class='list'>");
  printf("<td>Hello Time</td>");
  printf("<td><input type=text name=br_hello size=2 maxlength=2 value=%d> ", v51);
  v26 = (const char *)pick_string_134F4(878, v25);
  printf(v26);
  printf("</td>");
  v27 = printf("<td>(1 ~ 10, 2)</td>");
  etr(v27);
  printf("<tr class='list'>");
  puts("<td colspan=3 align=right>");
  v29 = pick_string_134F4(28, v28);
  printf(
    "<input type=button value=\"Bridge %s\" name=\"set_bt\" onclick=\"setupStpBridge()\" style='margin-right: 10px;'>\n",
    v29);
  v30 = printf("</td>");
  etr(v30);
  printf("</table>");
  printf("</td>");
  printf("</form>");
  puts("<form method=get action=timepro.cgi name=stp_port_fm>");
  puts("<input type=hidden name=tmenu value=switchconf>");
  puts("<input type=hidden name=smenu value=stp>");
  puts("<input type=hidden name=act value=setport>");
  printf("<td valign=top>");
  puts("<table cellspacing=0px cellpadding=0px>");
  printf("<tr class='title'>");
  puts("<td colspan=3 align=left>");
  v32 = pick_string_134F4(883, v31);
  printf("<b>Port %s</b>", v32);
  v33 = printf("</td>");
  etr(v33);
  printf("<tr class='list'>");
  printf("<td style='width: 90px;'>Priorirty</td>");
  printf("<td><input type=text name=port_prio size=3 maxlength=3 value=128 style='width: 60px;'>");
  printf("</td>");
  v34 = printf("<td>(0 ~ 255, 128)</td>");
  etr(v34);
  printf("<tr class='list'>");
  printf("<td>Path Cost</td>");
  printf("<td><input type=text name=port_cost size=5 maxlength=5 value=4 style='width: 60px;'>");
  printf("</td>");
  v35 = printf("<td>(0 ~ 65535, 4)</td>");
  etr(v35);
  printf("<tr class='list'>");
  printf("<td>Port</td>");
  printf("<td height=23 colspan=2>");
  puts("<select name=port style='height: 20px; width: 60px;'>");
  get_si((int)"hw", (int)&v49);
  while ( 1 )
  {
    v36 = v7;
    v39 = __OFSUB__(v7, v50);
    v37 = v7 == v50;
    v38 = v7 - v50 < 0;
    v40 = v7++;
    if ( !((unsigned __int8)(v38 ^ v39) | v37) )
      break;
    printf("<option value=%d>%d");
  }
  printf("<option value=0>All", v36, v40);
  printf("</select>");
  v41 = printf("</td>");
  etr(v41);
  printf("<tr class='list'>");
  printf("<td height=23></td>");
  v42 = printf("<td colspan=2></td>");
  etr(v42);
  printf("<tr class='list'>");
  puts("<td colspan=3 align=right>");
  v44 = pick_string_134F4(28, v43);
  printf("<input type=button value=\"Port %s\" name=\"set_bt\" onclick=\"setupStpPort()\">\n", v44);
  v45 = printf("</td>");
  etr(v45);
  printf("</table>");
  printf("</td>");
  v46 = printf("</form>");
  etr(v46);
  v47 = print_blank_line(3, 15);
  return print_end_content_table(v47);
}

char *__fastcall gmt_op(char *result, const char *a2, const char *a3, char a4, int a5)
{
  char *v5; // r6@1
  const char *v6; // r7@1
  char v7; // r8@1
  char *v8; // r4@2

  v5 = result;
  v6 = a3;
  v7 = a4;
  if ( (signed int)result <= 27 )
  {
    v8 = &byte_987C0[144 * (_DWORD)result];
    strcpy(&byte_987C0[144 * (_DWORD)result], a2);
    result = strcpy(&byte_987C0[8 * (18 * (_DWORD)v5 + 1)], v6);
    *((_DWORD *)v8 + 35) = a5;
    v8[136] = v7;
  }
  return result;
}

char *__fastcall gmt27_after_gmt_op(int a1, int a2)
{
  const char *v2; // r0@1
  int v3; // r1@1
  const char *v4; // r0@1
  int v5; // r1@1
  const char *v6; // r0@1
  int v7; // r1@1
  const char *v8; // r0@1
  int v9; // r1@1
  const char *v10; // r0@1
  int v11; // r1@1
  const char *v12; // r0@1
  int v13; // r1@1
  const char *v14; // r0@1
  int v15; // r1@1
  const char *v16; // r0@1
  int v17; // r1@1
  const char *v18; // r0@1
  int v19; // r1@1
  const char *v20; // r0@1
  int v21; // r1@1
  const char *v22; // r0@1
  int v23; // r1@1
  const char *v24; // r0@1
  int v25; // r1@1
  const char *v26; // r0@1
  int v27; // r1@1
  const char *v28; // r0@1
  int v29; // r1@1
  const char *v30; // r0@1
  int v31; // r1@1
  const char *v32; // r0@1
  int v33; // r1@1
  const char *v34; // r0@1
  int v35; // r1@1
  const char *v36; // r0@1
  int v37; // r1@1
  const char *v38; // r0@1
  int v39; // r1@1
  const char *v40; // r0@1
  int v41; // r1@1
  const char *v42; // r0@1
  int v43; // r1@1
  const char *v44; // r0@1
  int v45; // r1@1
  const char *v46; // r0@1
  int v47; // r1@1
  const char *v48; // r0@1
  int v49; // r1@1
  const char *v50; // r0@1
  int v51; // r1@1
  const char *v52; // r0@1
  int v53; // r1@1
  const char *v54; // r0@1
  int v55; // r1@1
  const char *v56; // r0@1

  v2 = (const char *)pick_string_134F4(348, a2);
  gmt_op(0, "gmt0", v2, 45, 720);
  v4 = (const char *)pick_string_134F4(359, v3);
  gmt_op((char *)1, "gmt1", v4, 45, 660);
  v6 = (const char *)pick_string_134F4(368, v5);
  gmt_op((char *)2, "gmt2", v6, 45, 600);
  v8 = (const char *)pick_string_134F4(369, v7);
  gmt_op((char *)3, "gmt3", v8, 45, 540);
  v10 = (const char *)pick_string_134F4(370, v9);
  gmt_op((char *)4, "gmt4", v10, 45, 480);
  v12 = (const char *)pick_string_134F4(371, v11);
  gmt_op((char *)5, "gmt5", v12, 45, 420);
  v14 = (const char *)pick_string_134F4(372, v13);
  gmt_op((char *)6, "gmt6", v14, 45, 360);
  v16 = (const char *)pick_string_134F4(373, v15);
  gmt_op((char *)7, "gmt7", v16, 45, 300);
  v18 = (const char *)pick_string_134F4(374, v17);
  gmt_op((char *)8, "gmt8", v18, 45, 240);
  v20 = (const char *)pick_string_134F4(375, v19);
  gmt_op((char *)9, "gmt9", v20, 45, 180);
  v22 = (const char *)pick_string_134F4(349, v21);
  gmt_op((char *)0xA, "gmt10", v22, 45, 120);
  v24 = (const char *)pick_string_134F4(350, v23);
  gmt_op((char *)0xB, "gmt11", v24, 45, 60);
  v26 = (const char *)pick_string_134F4(351, v25);
  gmt_op((char *)0xC, "gmt12", v26, 43, 0);
  v28 = (const char *)pick_string_134F4(352, v27);
  gmt_op((char *)0xD, "gmt13", v28, 43, 60);
  v30 = (const char *)pick_string_134F4(353, v29);
  gmt_op((char *)0xE, "gmt14", v30, 43, 120);
  v32 = (const char *)pick_string_134F4(354, v31);
  gmt_op((char *)0xF, "gmt15", v32, 43, 180);
  v34 = (const char *)pick_string_134F4(355, v33);
  gmt_op((char *)0x10, "gmt16", v34, 43, 210);
  v36 = (const char *)pick_string_134F4(356, v35);
  gmt_op((char *)0x11, "gmt17", v36, 43, 240);
  v38 = (const char *)pick_string_134F4(357, v37);
  gmt_op((char *)0x12, "gmt18", v38, 43, 300);
  v40 = (const char *)pick_string_134F4(358, v39);
  gmt_op((char *)0x13, "gmt19", v40, 43, 330);
  v42 = (const char *)pick_string_134F4(360, v41);
  gmt_op((char *)0x14, "gmt20", v42, 43, 360);
  v44 = (const char *)pick_string_134F4(361, v43);
  gmt_op((char *)0x15, "gmt21", v44, 43, 420);
  v46 = (const char *)pick_string_134F4(362, v45);
  gmt_op((char *)0x16, "gmt22", v46, 43, 480);
  v48 = (const char *)pick_string_134F4(363, v47);
  gmt_op((char *)0x17, "gmt23", v48, 43, 540);
  v50 = (const char *)pick_string_134F4(364, v49);
  gmt_op((char *)0x18, "gmt24", v50, 43, 600);
  v52 = (const char *)pick_string_134F4(365, v51);
  gmt_op((char *)0x19, "gmt25", v52, 43, 660);
  v54 = (const char *)pick_string_134F4(366, v53);
  gmt_op((char *)0x1A, "gmt26", v54, 43, 720);
  v56 = (const char *)pick_string_134F4(367, v55);
  return gmt_op((char *)0x1B, "gmt27", v56, 43, 780);
}

int view_main_login1()
{
  int v0; // r1@1
  int v1; // r0@1
  int v2; // r1@1
  int v3; // r0@1
  int v4; // r1@1
  char *v5; // r0@2
  int v6; // r1@4
  int v7; // r0@4
  int v8; // r1@4
  int v9; // r0@5
  int v10; // r0@7
  int v11; // r1@7
  int v12; // r0@7
  int v13; // r1@7
  int v14; // r0@7
  int v15; // r1@7
  int v16; // r0@7
  int v17; // r1@7
  int v18; // r0@7
  int v19; // r1@7
  int v20; // r0@7
  int v21; // r1@7
  int v22; // r0@7
  int v23; // r1@7
  int v24; // r0@7
  int v26; // [sp+0h] [bp-1D0h]@1
  char v27; // [sp+80h] [bp-150h]@1
  char v28; // [sp+100h] [bp-D0h]@1
  char v29; // [sp+140h] [bp-90h]@1
  char v30; // [sp+180h] [bp-50h]@7
  char v31; // [sp+1A0h] [bp-30h]@7

  get_id_password(&v29, &v27);
  get_default_id_password(&v28, &v26);
  printf("<form method=post action=timepro.cgi name=login_fm style=\"padding:0; margin:0;\">");
  puts("<input type=hidden name=tmenu value=sysconf>");
  puts("<input type=hidden name=smenu value=login>");
  puts("<input type=hidden name=act value=>");
  printf("<table class=\"v3_table login_main_table\" width=\"100%%\" style=\"padding:0; margin:0;\">\n");
  printf("<COL width=\"321\"><COL width=\"321\">");
  printf("<tr class=\"login_main_tr\" height=\"24\" style=\"background-color:#E3E3E3; border-top:1px #CCC solid; border-bottom:1px #CCC solid;\">\t\t<td class=\"login_main_td\" colspan=\"2\">");
  v1 = pick_string_134F4(941, v0);
  printf("<p class=\"login_main_p\"><b>%s</b></p>", v1);
  printf("</td></tr>");
  printf("<tr class=\"login_main_tr\" height=\"24\" style=\"background-color:#FFFFFF;\"><td class=\"login_main_td\" colspan=\"2\">");
  printf("<table class=\"v3_table login_main_table\" width=\"100%%\" style=\"padding:0; margin:0;\">\n");
  printf("<COL width=\"120\"><COL width=\"170\"><COL width=\"80\"><COL width=\"272\">");
  printf("<tr class=\"login_main_tr\" height=\"24\" style=\"background-color:#FFFFFF;\"><td class=\"login_main_td\">");
  v3 = pick_string_134F4(930, v2);
  printf("<p class=\"login_main_p\"><b>%s</b></p>", v3);
  printf("</td><td class=\"login_main_td\">");
  if ( v29 )
    v5 = &v29;
  else
    v5 = (char *)pick_string_134F4(937, v4);
  printf("<span class=\"login_main_span\">%s</span>", v5);
  printf("</td><td class=\"login_main_td\">");
  v7 = pick_string_134F4(931, v6);
  printf("<p class=\"login_main_p\"><b>%s</b></p>", v7);
  printf("</td><td class=\"login_main_td\">");
  if ( v27 )
    v9 = 938;
  else
    v9 = 937;
  v10 = pick_string_134F4(v9, v8);
  printf("<span class=\"login_main_span\">%s</span>", v10);
  printf("</td></tr>");
  printf("</table>");
  printf("</td></tr>");
  printf("<tr class=\"login_main_tr\" height=\"5\"><td class=\"login_main_td\" colspan=\"2\">");
  printf("</td></tr>");
  printf("<tr class=\"login_main_tr\" height=\"72\"><td class=\"login_main_td\">");
  printf("<table class=\"v3_table login_main_table\" width=\"100%%\" style=\"padding:0; margin:0;\">\n");
  printf("<COL width=\"100\"><COL width=\"145\"><COL width=\"76\">");
  printf("<tr class=\"login_main_tr\" height=\"24\"><td class=\"login_main_td\">");
  v12 = pick_string_134F4(935, v11);
  printf("<p class=\"login_main_p\">%s</p>", v12);
  printf("</td><td class=\"login_main_td\">");
  puts("<input type=text name=new_login maxlength=32 style=\"width:140px\" value=>");
  printf("</td><td class=\"login_main_td\">");
  printf("</td></tr>");
  printf("<tr class=\"login_main_tr\" height=\"24\"><td class=\"login_main_td\">");
  v14 = pick_string_134F4(936, v13);
  printf("<p class=\"login_main_p\">%s</p>", v14);
  printf("</td><td class=\"login_main_td\">");
  printf("<input type=password name=new_passwd style=\"width:140px\" maxlength=32 value=>");
  printf("<input type=text name=new_passwd_text style=\"display:none; ime-mode:disabled; width:140px;\" maxlength=32 value=>");
  printf("</td><td class=\"login_main_td\">");
  printf("<input type=checkbox id=passview NAME=password_view value=1 onclick=\"PasswordView(new_passwd,new_passwd_text,password_view);\" >");
  v16 = pick_string_134F4(1148, v15);
  printf("<label for=\"passview\">%s</label>", v16);
  printf("</td></tr>");
  v18 = pick_string_134F4(939, v17);
  printf("<input type=hidden name=default_captcha_desc value='%s'>\n", v18);
  puts("<input type=hidden name=captcha_file value=>");
  printf("<tr class=\"login_main_tr\" height=\"24\"><td class=\"login_main_td\">");
  v20 = pick_string_134F4(970, v19);
  printf("<p class=\"login_main_p\">%s</p>", v20);
  printf("</td><td class=\"login_main_td\" colspan=\"2\">");
  v22 = pick_string_134F4(939, v21);
  printf(
    "<input type=text name=captcha_code maxlength=\"5\" STYLE=\"width:205px; color:#888888;\" value=\"%s\"         \tonfo"
    "cus=\"FocusCaptcha(document.login_fm);\" onblur=\"BlurCaptcha(document.login_fm);\">",
    v22);
  printf("</td></tr>");
  printf("</table>");
  printf("</td><td class=\"login_main_td\">");
  get_http_auth_method(&v30);
  get_ux_lang((int)&v31);
  puts("<table class=\"v3_table login_main_table\" width=\"321\" height=\"72\">");
  printf("<COL width=\"291\"><COL width=\"30\">");
  printf("<tr class=\"login_main_tr\"><td class=\"login_main_td\">");
  puts("<table class=\"v3_table login_main_table\" width=\"254\" height=\"72\">");
  printf("<COL width=\"90\"><COL width=\"201\">");
  printf(
    "<tr class=\"login_main_tr\" \t\tstyle=\"font: normal normal normal 12px arial; color:#000000; border:#C6C9CC 1px sol"
    "id; background-color:#FFFFFF;\" height=\"72\">\t\t<td class=\"login_main_td\" style=\"cursor:pointer; background-col"
    "or:#FAFAFA; border:0;\" \t\tonclick=\"iframe_captcha.location.reload();\">\t\t<img src=\"/images2/captcha_noborder.%"
    "s.gif\" style=\"border:0; margin-left:18px;\"></td>\n",
    &v31);
  strcmp(&v30, "session");
  printf("<td class=\"login_main_td\" style=\"border-left:1px #CCC solid;\">\t\t<iframe name=iframe_captcha id=iframe_captcha src=\"/%s/captcha.cgi\" width=\"200\" height=\"72\" \t\tframeborder=no scrolling=no></iframe>\t\t</td></tr>\n");
  printf("</table>");
  printf("</td><td class=\"login_main_td\"></td></tr></table>");
  printf("</td></tr>");
  printf("<tr class=\"login_main_tr\" height=\"5\"><td class=\"login_main_td\" colspan=\"2\">");
  printf("</td></tr>");
  printf("<tr class=\"login_main_tr\" height=\"5\" style=\"border-top:1px #CCC solid;\"><td class=\"login_main_td\" colspan=\"2\">");
  printf("</td></tr>");
  printf("<tr class=\"login_main_tr\" height=\"24\"><td class=\"login_main_td\">");
  printf("</td><td class=\"login_main_td\" align=\"right\" style=\"padding-right:30px;\">");
  printf("<button class=\"login_main_button\" style=\"width:90px;\" onclick=\"ApplyLogin(); return ClickEventPropagater(event);\">");
  v24 = pick_string_134F4(934, v23);
  printf("<span class=\"login_main_span\">%s</span>", v24);
  printf("</button>");
  printf("</td></tr>");
  printf("<tr class=\"login_main_tr\" height=\"5\"><td class=\"login_main_td\" colspan=\"2\">");
  printf("</td></tr>");
  printf("</table>");
  return printf("</form>");
}

int view_main_login2()
{
  int v0; // r0@1
  int v1; // r0@2
  void *v2; // r0@4
  void *v3; // r0@4
  int v4; // r1@4
  int v5; // r0@4

  sub_133E4((int)"sysconf", (int)"login");
  puts("<style type=\"text/css\">");
  puts(".login_main_table {");
  puts("\tborder-collapse:collapse; padding:0 0 0 0; margin:0 0 0 0;");
  puts("\ttable-layout:fixed;");
  puts("}");
  puts(".login_main_tr {");
  puts("\tborder:0 0 0 0; padding:0 0 0 0;");
  puts("}");
  puts(".login_main_td {");
  puts("\tpadding:0 0 0 0; font-size:12px;");
  puts("\tvertical-align:middle;");
  puts("}");
  puts(".login_main_p {");
  puts("\tpadding:0 0 0 5px; display:inline-block;");
  puts("\tvertical-align:middle; margin:0;");
  puts("}");
  puts(".login_main_span {");
  puts("\tdisplay:inline-block; vertical-align:middle;");
  puts("}");
  puts(".login_main_button {");
  puts("\tpadding:0 1 0 1; margin:0 0 0 0; font-size:12px;");
  puts("\tvertical-align:middle;");
  puts("}");
  puts(".login_main_td input[type=checkbox], .login_main_td input[type=radio] {");
  puts("display:inline-block; vertical-align:middle;");
  puts("}");
  puts("#login_div_msg p {");
  puts("margin:5 0 5 15px; text-align:left;");
  puts("}");
  puts(".login_ellipsis {");
  puts("text-overflow:ellipsis; overflow:hidden; white-space:nowrap; text-align:left;");
  puts("}");
  printf("input[type=\"text\"] {border:1px #CCC solid;}");
  printf("input[type=\"password\"] {border:1px #CCC solid;}");
  printf("input[type=\"checkbox\"], input[type=\"radio\"], label, span, td {cursor:default;}");
  printf("</style>");
  printf("<table class=\"v3_table login_main_table\" width=\"100%%\" style=\"padding:0; margin:0;\">\n");
  printf("<COL width=\"642\">");
  printf("<tr class=\"login_main_tr\"><td class=\"login_main_td\">");
  sub_199C0();
  printf("</td></tr>");
  printf("<tr class=\"login_main_tr\"><td class=\"login_main_td\">");
  sub_195E4();
  printf("</td></tr>");
  printf("<tr class=\"login_main_tr\"><td class=\"login_main_td\">");
  sub_1922C();
  v0 = printf("</td></tr>");
  if ( is_mobile_agent(v0) )
  {
    sub_12790((int)"0", (int)"0", (int)"display:inline-block; *display:inline; zoom:1;");
    v1 = printf("<iframe name=\"hiddenloginsetup_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hiddenloginsetup\"                         frameborder=no width=0 height=0 align=center scrolling=no></iframe>");
    sub_12770(v1);
  }
  else
  {
    printf("<iframe name=\"hiddenloginsetup_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hiddenloginsetup\"                         frameborder=no width=0 height=0 align=center scrolling=no></iframe>");
  }
  printf("</table>");
  printf("<DIV id=\"%s\" style=\"display:none;\">", "apply_mask");
  puts("<DIV style=\"position:absolute; left:0px; top:0px; width:642px; height:535px; z-index:10; background-color:#ffffff;                 opacity:0.5; -moz-opacity:0.5; -khtml-opacity:0.5; -webkit-opacity:0.5; filter:alpha(opacity=50);\">");
  printf("</DIV>");
  puts("<DIV style=\"position:absolute; left:231px; top:198px; width:180px; height:70px; z-index:100; background-color:#ffffff;                 opacity:1; -moz-opacity:1; -khtml-opacity:1; -webkit-opacity:1; filter:alpha(opacity=100); border:1px #CCC solid;                 box-shadow:5px 5px 20px #888888;\">");
  puts("<table width=\"180\" height=\"70\">");
  printf("<tr><td width=\"20%%\" height=\"100%%\" align=\"center\" valign=\"middle\">\n");
  puts("<SPAN style=\"vertical-align:middle; display:block; text-align:center;\">");
  v2 = sub_126C4();
  printf(
    "<img src=\"/%s/apply_ani.gif\" style=\"display:inline-block; *display:inline; zoom:1; vertical-align:middle;\">",
    v2);
  printf("</SPAN></td>");
  printf("<td width=\"80%%\" height=\"100%%\" align=\"center\" valign=\"middle\">                <SPAN style=\"vertical-align:middle; display:block; text-align:center;\" id=\"login_div_msg\">\n");
  printf("</SPAN></td>");
  printf((const char *)&unk_60F0E);
  printf("<DIV id=\"relogin_mask\" style=\"display:none;\">");
  puts("<DIV style=\"position:absolute; left:0px; top:0px; width:642px; height:535px; z-index:10; background-color:#ffffff;                 opacity:0.5; -moz-opacity:0.5; -khtml-opacity:0.5; -webkit-opacity:0.5; filter:alpha(opacity=50);\">");
  printf("</DIV>");
  puts("<DIV style=\"position:absolute; left:171px; top:198px; width:300px; height:70px; z-index:100; background-color:#ffffff;                 opacity:1; -moz-opacity:1; -khtml-opacity:1; -webkit-opacity:1; filter:alpha(opacity=100); border:1px #CCC solid;                 box-shadow:5px 5px 20px #888888;\">");
  puts("<table width=\"300\" height=\"70\">");
  printf("<tr><td width=\"20%%\" height=\"100%%\" align=\"center\" valign=\"middle\">\n");
  puts("<SPAN style=\"vertical-align:middle; display:block; text-align:center;\">");
  v3 = sub_126C4();
  printf(
    "<img src=\"/%s/apply_ani.gif\" style=\"display:inline-block; *display:inline; zoom:1; vertical-align:middle;\">",
    v3);
  printf("</SPAN></td>");
  v5 = pick_string_134F4(505, v4);
  printf(
    "<td width=\"80%%\" height=\"100%%\" align=\"center\" valign=\"middle\">                <SPAN style=\"vertical-align:"
    "middle; display:block; text-align:center;\">%s",
    v5);
  printf("</SPAN></td>");
  return printf((const char *)&unk_60F0E);
}

int _gmon_start_()
{
  int result; // r0@2

  if ( &__gmon_start__ )
    result = _gmon_start__();
  return result;
}

void add_byte_976c0()
{
  if ( !byte_976C0 )
    ++byte_976C0;
}

int __fastcall host_scan(int a1, int a2)
{
  int v2; // r8@1
  int v3; // r1@1
  int v4; // r0@1
  char *v5; // r5@1
  int v6; // r1@1
  char *v7; // r4@2
  int v8; // r0@4
  int v9; // r1@4
  int v10; // r0@6
  int v11; // r1@6
  int v12; // r0@6
  int v13; // r1@6
  int v14; // r0@6
  int v15; // r1@6
  int v16; // r0@6
  int v17; // r4@6
  int v18; // r1@6
  int v19; // r0@6
  int v20; // r1@6
  int v21; // r0@6
  int v22; // r5@6
  int v23; // r4@6
  int v24; // r1@6
  int v25; // r0@6
  int v26; // r1@6
  int v27; // r0@6
  int v28; // r1@6
  int v29; // r0@6
  int v30; // r1@6
  int v31; // r0@6
  void *v32; // r4@6
  int v33; // r1@6
  int v34; // r0@6
  void *v35; // r4@6
  int v36; // r1@6
  int v37; // r0@6
  int v38; // r1@6
  int v39; // r0@6
  void *v40; // r4@6
  int v41; // r1@6
  int v42; // r0@6
  int v43; // r0@6
  int v44; // r0@7
  int v45; // r0@9
  int v46; // r0@10
  int v47; // r0@10
  int v48; // r0@13
  int result; // r0@13
  const char *v50; // r0@16

  v2 = a2;
  printf("<table class=\"v3_table hostscan_main_table\" width=\"100%%\" style=\"padding:0; margin:0;\">\n");
  puts("<form method=get action=\"timepro.cgi\" name=\"hostscan_fm\">");
  puts("<input type=hidden name=\"tmenu\" value=\"expertconf\">");
  puts("<input type=hidden name=\"smenu\" value=\"hostscan\">");
  printf("<input type=\"hidden\" name=act value\"\">");
  printf("<input type=\"hidden\" name=submitted value\"0\">");
  printf("<COL width=\"130\"><COL width=\"100\"><COL width=\"60\"><COL width=\"80\"><COL width=\"140\"><COL width=\"%%%%\">");
  printf("<tr class=\"hostscan_main_tr\" height=\"24\"><td class=\"hostscan_main_td\">");
  *(_DWORD *)v2;
  printf("<input type=radio name=sel id=\"sel_ping\" value=%d onclick=\"hostscanRadio_disableForm(0)\" %s>\n");
  v4 = pick_string_134F4(1031, v3);
  v5 = "selected";
  printf("<label for=\"sel_ping\">%s</label>", v4);
  printf("</td><td class=\"hostscan_main_td\">");
  *(_DWORD *)v2;
  printf("<select class=navi_select name=ping_type onchange=\"hostscanSel_disableForm()\" %s>\n");
  if ( *(_DWORD *)(v2 + 4) )
    v7 = "";
  else
    v7 = "selected";
  v8 = pick_string_134F4(1030, v6);
  printf("<option value=%d %s>%s\n", 0, v7, v8);
  if ( *(_DWORD *)(v2 + 4) != 1 )
    v5 = "";
  v10 = pick_string_134F4(1025, v9);
  printf("<option value=%d %s>%s\n", 1, v5, v10);
  puts("</select>");
  printf("</td><td class=\"hostscan_main_td\" align=\"right\">");
  v12 = pick_string_134F4(401, v11);
  printf("<span class=\"hostscan_main_span\" style='margin-right:5px;'>%s</span>", v12);
  printf("</td><td class=\"hostscan_main_td\" colspan=\"2\">");
  sub_11D7C((int)"ip", (_BYTE *)(v2 + 8), 1);
  printf("</td><td class=\"hostscan_main_td\"></td></tr>");
  printf("<tr class=\"hostscan_main_tr\" height=\"24\"><td class=\"hostscan_main_td\">");
  printf("</td><td class=\"hostscan_main_td\">");
  v14 = pick_string_134F4(1027, v13);
  printf(
    "<span class=\"hostscan_main_span\">%s \t\t<input type=text class=navi_text class=navimenu_text name=count maxlength="
    "3 size=3 value=%d></span>\n",
    v14,
    *(_DWORD *)(v2 + 104));
  printf("</td><td class=\"hostscan_main_td\" align=\"right\">");
  v16 = pick_string_134F4(1036, v15);
  printf("<span class=\"hostscan_main_span\" style='margin-right:5px;'>%s</span>", v16);
  printf("</td><td class=\"hostscan_main_td\">");
  v17 = *(_DWORD *)(v2 + 112);
  v19 = pick_string_134F4(878, v18);
  printf("<input type=text class=navi_text name=timeout maxlength=2 size=2 value=%d>%s</span>\n", v17, v19);
  printf("</td><td class=\"hostscan_main_td\" colspan=\"2\">");
  v21 = pick_string_134F4(1028, v20);
  v22 = *(_DWORD *)(v2 + 108);
  v23 = v21;
  v25 = pick_string_134F4(1029, v24);
  printf(
    "<span class=\"hostscan_main_span\">%s \t\t<input type=text class=navi_text name=datasize maxlength=5 size=5 value=%d>%s\n",
    v23,
    v22,
    v25);
  printf("</td></tr>");
  printf("<tr class=\"hostscan_main_tr\" height=\"24\"><td class=\"hostscan_main_td\">");
  *(_DWORD *)v2;
  printf("<input type=radio name=\"sel\" id=\"sel_tcp\" value=%d onclick=\"hostscanRadio_disableForm(1)\" %s>\n");
  v27 = pick_string_134F4(1035, v26);
  printf("<label for=\"sel_tcp\">%s</label>", v27);
  printf("</td><td class=\"hostscan_main_td\" colspan=\"3\">");
  v29 = pick_string_134F4(401, v28);
  printf("<span class=\"hostscan_main_span\">%s", v29);
  sub_11D7C((int)"pip", (_BYTE *)(v2 + 40), 1);
  printf((const char *)&unk_6B14C);
  v31 = pick_string_134F4(1032, v30);
  printf(
    "<span class=\"hostscan_main_span\">%s <input type=text class=navi_text name=start maxlength=5 size=5 value=%d>\n",
    v31,
    *(_DWORD *)(v2 + 116));
  printf("~<input type=text class=navi_text name=end maxlength=5 size=5 value=%d></span>\n", *(_DWORD *)(v2 + 120));
  puts("</td></tr>");
  printf("<tr class=\"hostscan_main_tr\" height=\"5\"><td class=\"hostscan_main_td\" colspan=\"6\">");
  printf("</td></tr>");
  printf("<tr class=\"hostscan_main_tr\" height=\"5\" style=\"border-top:1px #CCC solid;\"><td class=\"hostscan_main_td\" colspan=\"6\">");
  printf("</td></tr>");
  printf("<tr class=\"hostscan_main_tr\" height=\"24\"><td class=\"hostscan_main_td\" colspan=\"6\" style=\"padding-left:5px;\">");
  printf("<button type=\"button\" class=\"hostscan_main_button\" style=\"width:55px;\" \t\tonclick=\"hostscanStart(); return ClickEventPropagater();\" id=\"startbtn\">");
  v32 = sub_126C4();
  v34 = pick_string_134F4(1033, v33);
  printf(
    "<span class=\"hostscan_main_span\"><img src=\"/%s/apscan.gif\" style=\"margin-right:5px;\">%s</span>",
    v32,
    v34);
  printf("</button>");
  printf("<button type=\"button\" class=\"hostscan_main_button\" style=\"width:55px; margin-left:10px;\" \t\tonclick=\"hostscanStop(); return ClickEventPropagater();\" id=\"stopbtn\">");
  v35 = sub_126C4();
  v37 = pick_string_134F4(901, v36);
  printf(
    "<span class=\"hostscan_main_span\"><img src=\"/%s/minus_icon.gif\" style=\"margin-right:5px;\">%s</span>",
    v35,
    v37);
  printf("</button>");
  printf("</td></tr>");
  printf("<tr class=\"hostscan_main_tr\" height=\"5\" style=\"border-bottom:1px #CCC solid;\"><td class=\"hostscan_main_td\" colspan=\"6\">");
  printf("</td></tr>");
  printf("<tr class=\"hostscan_main_tr\" height=\"24\" style=\"background-color:#DBDBDB; border-top:1px #ccc solid; border-bottom:1px #ccc solid;\">\t\t<td class=\"hostscan_main_td\" colspan=\"4\">");
  v39 = pick_string_134F4(1034, v38);
  printf(
    "<p class=\"hostscan_main_p\"><b>%s</b></p></td><td class=\"hostscan_main_td\" colspan=\"2\" align=\"right\" style=\""
    "padding-right:15px;\">",
    v39);
  v40 = sub_126C4();
  v42 = pick_string_134F4(1026, v41);
  printf(
    "<span class=\"hostscan_main_span\" onclick=\"hostscanClear();\" style=\"cursor:pointer;\">\t\t<img src=\"/%s/minus_i"
    "con.gif\" style=\"margin-right:5px;\">%s</span>",
    v40,
    v42);
  printf("</td></tr>");
  printf("</form>");
  v43 = printf("<tr class=\"hostscan_main_tr\" height=\"360\" style=\"border-bottom:1px #CCC solid;\">\t\t<td class=\"hostscan_main_td\" colspan=\"6\">");
  if ( is_mobile_agent(v43) )
  {
    sub_12790((int)"360", (int)"100%%", (int)"display:inline-block; *display:inline; zoom:1;");
    v44 = printf("<iframe name=\"hostscanlist_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hostscanlist\"                         frameborder=no width=100%% height=360 align=center scrolling=no></iframe>");
    sub_12770(v44);
  }
  else
  {
    printf("<iframe name=\"hostscanlist_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hostscanlist\"                         frameborder=no width=100%% height=360 align=center scrolling=no></iframe>");
  }
  printf("</td></tr>");
  v45 = printf("</table>");
  if ( is_mobile_agent(v45) )
  {
    sub_12790((int)"0", (int)"0", (int)"display:inline-block; *display:inline; zoom:1;");
    v46 = printf("<iframe name=\"hostscanstatus_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hostscanstatus\"                         frameborder=no width=0 height=0 align=center scrolling=no></iframe>");
    v47 = sub_12770(v46);
  }
  else
  {
    v47 = printf("<iframe name=\"hostscanstatus_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hostscanstatus\"                         frameborder=no width=0 height=0 align=center scrolling=no></iframe>");
  }
  if ( is_mobile_agent(v47) )
  {
    sub_12790((int)"0", (int)"0", (int)"display:inline-block; *display:inline; zoom:1;");
    v48 = printf("<iframe name=\"hostscansubmit_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hostscansubmit\"                         frameborder=no width=0 height=0 align=center scrolling=no></iframe>");
    result = sub_12770(v48);
  }
  else
  {
    result = printf("<iframe name=\"hostscansubmit_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hostscansubmit\"                         frameborder=no width=0 height=0 align=center scrolling=no></iframe>");
  }
  if ( *(_DWORD *)v2 )
  {
    if ( *(_DWORD *)v2 != 1 )
      return result;
    puts("<script language=JavaScript>");
    v50 = "hostscanRadio_disableForm(1);";
  }
  else
  {
    puts("<script language=JavaScript>");
    puts("hostscanRadio_disableForm(0);");
    v50 = "hostscanSel_disableForm();";
  }
  puts(v50);
  puts("init_hostscan();");
  return puts("</script>");
}

int __fastcall real_main_11070(int a1, const char **a2) //실제 main 함수,분기가많음
{
  const char **v2; // r4@1
  int v3; // r0@4
  const char *v4; // r5@4
  const char *v5; // r0@7
  int v6; // r0@11
  void *v7; // r5@11
  char *v8; // r2@13
  int v9; // r0@13
  int v10; // r0@15
  const char *v11; // r0@18
  int v12; // r0@20
  const char *v13; // r0@21
  const char *v14; // r0@33
  int v15; // r6@34
  int v16; // r0@43
  int *v17; // r12@43
  const char **v18; // r0@45
  char *v19; // r2@45
  int v20; // r1@45
  const char *v21; // r3@45
  int smenu_; // [sp+0h] [bp-B0h]@26
  char tmenu_; // [sp+40h] [bp-70h]@12
  char v25; // [sp+80h] [bp-30h]@36

  v2 = a2;
  if ( istatus_get_intvalue_direct((int)"killhttpd") == 1 || !httpcon_check_session_url() || httpcon_auth() )
  {
    define_func_list_12700((int)&func_list_9879C);
    v3 = get_pvalue((int)v2, (int)"flag");
    v4 = (const char *)v3;
    if ( v3 )
    {
      print_http_header(v3);
      puts("<html>");
      netdetect_head_tag_10C8C((int)v2);
      netdetect_script_tag_10A4C(v2, v4);
      printf("</html>");
      return 0;
    }
    if ( !strcmp(*v2, "/ndbin/netdetect.cgi") )
      return 0;
    v5 = (const char *)get_pvalue((int)v2, (int)"page");
    if ( v5 && !strcmp(v5, "url_redirect") )
    {
      print_http_header(0);
      url_redirect_html_40340((int)v2);
      return 0;
    }
    if ( !strcmp(*v2, "/cgibin/login-cgi/urlredir.cgi") )
      return 0;
    v6 = post_process();                        // post method == stdin 
    v7 = (void *)v6;
    if ( v6 )
    {
      if ( !get_value_post(v6, (int)"commit", (int)&tmenu_, 64) )
        goto LABEL_18;
      v8 = &tmenu_;
      v9 = 0;
    }
    else
    {
      v10 = get_pvalue((int)v2, (int)"commit");
      if ( !v10 )
      {
  LABEL_18:
        v11 = (const char *)get_pvalue((int)v2, (int)"savesave");
        if ( v11 )
        {
          v11 = (const char *)strcmp(v11, "1");
          if ( !v11 )
          {
            v12 = syslog_msg(1, "@{85}");
            v11 = (const char *)saveconf(v12);
          }
        }
        print_http_header((int)v11);
        v13 = (const char *)get_pvalue((int)v2, (int)"factory_test_mode");
        if ( v13 && !strcmp(v13, "off") )
        {
          defaultconf();
          printf("OK");
        }
        puts("<html>");
        printf("<meta http-equiv='X-UA-Compatible' content='IE=edge'>");
        printf("<meta name='renderer' content='webkit'>");
        sub_10DB0((int)v2, (int)v7);
        netdetect_head_tag_10C8C((int)v2);
        if ( v7 )
        {
          if ( get_value_post((int)v7, (int)"tmenu", (int)&tmenu_, 64)
            && get_value_post((int)v7, (int)"smenu", (int)&smenu_, 0x40) )
          {
            if ( !strcmp(&tmenu_, "iframe") )
              sub_FFC4(0, (int)v7, (const char *)&smenu_);
            else
              dword_987A4(0, v7, &tmenu_, &smenu_);// define_func_list_12700
          }
          free(v7);
          goto LABEL_64;
        }
        if ( get_value(v2, "tmenu", &tmenu_, 64) )
        {
          if ( get_value(v2, "smenu", &smenu_, 64) )
          {
            v14 = (const char *)get_pvalue((int)v2, (int)&unk_4617C);
            if ( v14 )
              v15 = strcmp(v14, "plantynet") == 0;
            else
              v15 = 0;
            if ( !get_value(v2, "helpframe", &v25, 32) || strcmp(&v25, "1") )
            {
              if ( !strcmp(&tmenu_, "iframe") )
              {
                sub_FFC4((int)v2, 0, (const char *)&smenu_);
  LABEL_64:
                puts("</html>");
                fflush((FILE *)stdout);
                return 0;
              }
              if ( !strcmp(&tmenu_, "main_frame") )
              {
                dword_987B8(v15);               // define_func_list_12700
                goto LABEL_64;
              }
              if ( !strcmp(&tmenu_, "popup") )
                goto LABEL_64;
              v16 = strcmp(&tmenu_, "menu_titlebar");
              v17 = &func_list_9879C;
              if ( !v16 )
              {
                dword_987AC(v2);                // define_func_list_12700
                goto LABEL_64;
              }
              v18 = v2;
              v19 = &tmenu_;
              v20 = 0;
              v21 = (const char *)&smenu_;
  LABEL_63:
              ((void (__fastcall *)(const char **, int, char *, const char *))v17[2])(v18, v20, v19, v21);
              goto LABEL_64;
            }
          }
          else
          {
            if ( !strcmp(&tmenu_, "navi_menu_basic") )
            {
              sub_15314((int)v2);
              goto LABEL_64;
            }
            if ( !strcmp(&tmenu_, "navi_menu_advance") )
            {
              sub_150FC(v2);
              goto LABEL_64;
            }
            if ( !strcmp(&tmenu_, "navi_saveinfo") )
            {
              sub_1504C(v2);
              goto LABEL_64;
            }
            if ( !strcmp(&tmenu_, "titlebar") )
            {
              dword_987B4(v2);
              goto LABEL_64;
            }
            if ( strcmp(&tmenu_, "main_body") )
            {
              if ( !strcmp(&tmenu_, "navi_titlebar") )
              {
                dword_987B0(v2);                // define_func_list_12700
              }
              else if ( !strcmp(&tmenu_, "RefreshOpener") )
              {
                sub_FF80((int)v2);
              }
              else if ( !strcmp(&tmenu_, "wizard") )
              {
                sub_3EAD8((int)v2);
              }
              goto LABEL_64;
            }
          }
          dword_987A8(v2);                      // define_func_list_12700
          goto LABEL_64;
        }
        v19 = "main_frame";
        v17 = &func_list_9879C;
        v18 = v2;
        v20 = 0;
        v21 = "main_frame";
        goto LABEL_63;
      }
      v8 = (char *)v10;
      v9 = (int)v2;
    }
    sub_10FF4(v9, (int)v7, v8);
    goto LABEL_18;
  }
  return 0;
}


int always_return_zero_115F0()
{
  return 0;
}

int print_td_of_table_115F8(char* message)
{
  printf("<tr><td width=100%% height=200px valign=top style=\"padding-top:10px;\"> %s </td></tr>", message);
  return 0;
}


int alert_some_message_11620(char* message)
{
  printf("<script>");
  printf("alert(\"%s\");\n", message);
  printf("</script>");
  return 0;
}

int __fastcall sub_20A4C(int a1)
{
  int v2; // r1@3
  int v3; // r0@3
  int v4; // r1@3
  int v5; // r0@3
  int v6; // r0@3
  int v7; // r0@4
  int v8; // r0@4
  int v9; // r0@7
  int v10; // r0@7
  int v11; // r0@10
  int v12; // r0@12
  int v13; // r0@12
  int v15; // [sp+0h] [bp-38h]@3
  char dest=''; // [sp+14h] [bp-24h]@1

  if ( !get_value(a1, "wan", &dest, 20) )
    strcpy(&dest, "wan1");
  puts("<script language=JavaScript>");
  puts("<!--");
  puts("function CheckNetworkConfig()");
  puts("{");
  get_netaddr("br0", &v15);
  printf("\tif(GetNetworkAddress('ip','sm')==\"%s\")\n", &v15);
  v3 = pick_string_134F4(659, v2);
  printf((const char *)&unk_681C2, v3);
  printf("\telse if(GetNetworkAddress('gw','sm')==\"%s\")\n", &v15);
  v5 = pick_string_134F4(658, v4);
  printf((const char *)&unk_681C2, v5);
  puts(" \telse");
  puts("\t{");
  puts("\t\treturn 1;");
  puts("\t}");
  puts("\treturn 0;");
  puts("}");
  puts("-->");
  puts("</script>");
  puts("<style type=\"text/css\">");
  puts(".wansetup_main_table {");
  puts("\tborder-collapse:collapse; padding:0 0 0 0; margin:0 0 0 0;");
  puts("\ttable-layout:fixed;");
  puts("}");
  puts(".wansetup_main_tr {");
  puts("\tborder:0 0 0 0; padding:0 0 0 0;");
  puts("}");
  puts(".wansetup_main_td {");
  puts("\tpadding:0 0 0 0; font-size:12px;");
  puts("\tvertical-align:middle;");
  puts("}");
  puts(".wansetup_main_p {");
  puts("\tpadding-left:5px; display:inline-block;");
  puts("\tvertical-align:middle;");
  puts("}");
  puts(".wansetup_main_span {");
  puts("\tdisplay:inline-block; vertical-align:middle;");
  puts("}");
  puts(".wansetup_main_button {");
  puts("\tpadding:0 1 0 1; margin:0 0 0 0; font-size:12px;");
  puts("\tvertical-align:middle;");
  puts("}");
  puts(".wansetup_main_td input[type=checkbox], .wansetup_main_td input[type=radio] {");
  puts("display:inline-block; vertical-align:middle;");
  puts("}");
  printf("input[type=\"text\"] {border:1px #CCC solid;}");
  printf("input[type=\"password\"] {border:1px #CCC solid;}");
  printf("input[type=\"checkbox\"], input[type=\"radio\"], label, span, td {cursor:default;}");
  v6 = printf("</style>");
  if ( is_mobile_agent(v6) )
  {
    sub_12790("0", "0", "display:inline-block; *display:inline; zoom:1;");
    v7 = printf("<iframe name=\"hiddenwansetup_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hiddenwansetup\" \t\t\tframeborder=no width=0 height=0 align=center scrolling=no></iframe>");
    v8 = is_mobile_agent_12770(v7);
  }
  else
  {
    v8 = printf("<iframe name=\"hiddenwansetup_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hiddenwansetup\" \t\t\tframeborder=no width=0 height=0 align=center scrolling=no></iframe>");
  }
  if ( is_mobile_agent(v8) )
  {
    sub_12790("0", "0", "display:inline-block; *display:inline; zoom:1;");
    v9 = printf(
           "<iframe name=\"hiddenwanstatus_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hiddenwanstatus&wan=%s\" \t\t\tf"
           "rameborder=no width=0 height=0 align=center scrolling=no></iframe>",
           &dest);
    v10 = is_mobile_agent_12770(v9);
  }
  else
  {
    v10 = printf(
            "<iframe name=\"hiddenwanstatus_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hiddenwanstatus&wan=%s\" \t\t\t"
            "frameborder=no width=0 height=0 align=center scrolling=no></iframe>",
            &dest);
  }
  if ( is_mobile_agent(v10) )
  {
    sub_12790("0", "0", "display:inline-block; *display:inline; zoom:1;");
    v11 = printf("<iframe name=\"hiddenmacsearch_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=netconfmacsearch\" \t\t\tframeborder=no width=0 height=0 align=center scrolling=no></iframe>");
    is_mobile_agent_12770(v11);
  }
  else
  {
    printf("<iframe name=\"hiddenmacsearch_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=netconfmacsearch\" \t\t\tframeborder=no width=0 height=0 align=center scrolling=no></iframe>");
  }
  printf("<table class=\"v3_table wansetup_main_table\" width=\"100%%\">\n");
  netconf_wansetup_1FB50(a1, &dest);
  sub_1F610(&dest);
  printf("</table>");
  printf("<script>");
  puts("init_checkform();");
  printf("</script>");
  printf("<DIV id=\"%s\" style=\"display:none;\">", "apply_mask");
  puts("<DIV style=\"position:absolute; left:0px; top:0px; width:642px; height:536px; z-index:10; background-color:#ffffff;                 opacity:0.5; -moz-opacity:0.5; -khtml-opacity:0.5; -webkit-opacity:0.5; filter:alpha(opacity=50);\">");
  printf("</DIV>");
  puts("<DIV style=\"position:absolute; left:231px; top:198px; width:180px; height:70px; z-index:100; background-color:#ffffff;                 opacity:1; -moz-opacity:1; -khtml-opacity:1; -webkit-opacity:1; filter:alpha(opacity=100); border:1px #CCC solid;                 box-shadow:5px 5px 20px #888888;\">");
  puts("<table width=\"180\" height=\"70\">");
  printf("<tr><td width=\"20%%\" height=\"100%%\" align=\"center\" valign=\"middle\">\n");
  v12 = puts("<SPAN style=\"vertical-align:middle; display:block; text-align:center;\">");
  v13 = sub_126C4(v12);
  printf(
    "<img src=\"/%s/apply_ani.gif\" style=\"display:inline-block; *display:inline; zoom:1; vertical-align:middle;\">",
    v13);
  printf("</SPAN></td>");
  printf("<td width=\"80%%\" height=\"100%%\" align=\"center\" valign=\"middle\">                <SPAN style=\"vertical-align:middle; display:block; text-align:center;\" id=\"wansetup_div_msg\">\n");
  printf("</SPAN></td>");
  printf((const char *)&unk_60F0E);
  printf("<DIV id=\"%s\" style=\"display:none;\">", "macsearch_mask");
  printf(
    "<DIV style=\"position:absolute; left:0px; top:0px; width:642px; height:536px; z-index:10; background-color:#ffffff; "
    "                opacity:0.5; -moz-opacity:0.5; -khtml-opacity:0.5; -webkit-opacity:0.5; filter:alpha(opacity=50);\" "
    "\t\tonclick=\"UnMaskIt(document,'%s');\">\n",
    "macsearch_mask");
  printf("</DIV>");
  puts("<DIV style=\"position:absolute; left:151px; top:128px; width:340px; height:210px; z-index:100; background-color:#ffffff;                 opacity:1; -moz-opacity:1; -khtml-opacity:1; -webkit-opacity:1; filter:alpha(opacity=100); border:1px #CCC solid;                 box-shadow:5px 5px 20px #888888; overflow:hidden;\" id=\"searchmaclist\">");
  return printf((const char *)&unk_60F1B);
}

int __fastcall netconf_wansetup_1FB50(int a1, int a2)
{
  int v2; // r11@1
  int v3; // r1@1
  const char *v4; // r0@1
  char *v5; // r4@1
  int v6; // r0@1
  int v7; // r1@1
  char *v8; // r1@2
  int v9; // r1@4
  int v10; // r0@4
  char *v11; // r1@5
  int v12; // r1@7
  int v13; // r0@7
  char *v14; // r1@8
  int v15; // r1@10
  int v16; // r0@10
  char *v17; // r0@10
  int v18; // r1@10
  int v19; // r0@10
  int v20; // r1@10
  int v21; // r0@12
  int v22; // r1@12
  int v23; // r0@12
  int v24; // r1@12
  int v25; // r0@12
  int v26; // r1@14
  int v27; // r0@14
  int v28; // r1@14
  int v29; // r0@14
  int v30; // r1@14
  int v31; // r0@14
  int v32; // r1@14
  int v33; // r0@14
  int v34; // r1@14
  int v35; // r0@14
  int v36; // r1@14
  int v37; // r0@14
  int v38; // r1@14
  int v39; // r0@14
  int v40; // r1@14
  int v41; // r0@14
  int v42; // r1@14
  int v43; // r0@14
  int v44; // r1@16
  int v45; // r0@16
  int v46; // r1@16
  int v47; // r0@16
  char *v48; // r1@17
  int v49; // r1@19
  int v50; // r0@19
  int v51; // r1@19
  int v52; // r0@19
  int v53; // r1@19
  int v54; // r0@19
  int v55; // r1@19
  int v56; // r0@19
  int v57; // r1@19
  int v58; // r0@19
  char *v59; // r1@20
  int v60; // r1@22
  int v61; // r0@22
  int v62; // r1@22
  int v63; // r0@22
  int v64; // r1@22
  int v65; // r0@22
  int v66; // r1@22
  int v67; // r0@22
  int v68; // r1@24
  int v69; // r0@24
  int v70; // r1@24
  int v71; // r0@24
  int v72; // r1@24
  int v73; // r0@24
  int v74; // r1@24
  int v75; // r0@24
  int v77; // [sp+Ch] [bp-334h]@10
  char v78; // [sp+10h] [bp-330h]@14
  char v79; // [sp+90h] [bp-2B0h]@14
  int v80; // [sp+138h] [bp-208h]@19
  int v81; // [sp+13Ch] [bp-204h]@19
  int v82; // [sp+140h] [bp-200h]@19
  int v83; // [sp+148h] [bp-1F8h]@19
  __int16 v84; // [sp+14Eh] [bp-1F2h]@1
  __int16 v85; // [sp+1CEh] [bp-172h]@1
  __int16 v86; // [sp+20Eh] [bp-132h]@1
  __int16 v87; // [sp+24Eh] [bp-F2h]@1
  char v88; // [sp+26Eh] [bp-D2h]@7
  __int16 v89; // [sp+282h] [bp-BEh]@7
  __int16 v90; // [sp+296h] [bp-AAh]@10
  __int16 v91; // [sp+2AAh] [bp-96h]@14
  __int16 v92; // [sp+2BEh] [bp-82h]@14
  __int16 v93; // [sp+2D2h] [bp-6Eh]@12
  __int16 v94; // [sp+2E6h] [bp-5Ah]@10
  __int16 v95; // [sp+2FAh] [bp-46h]@10
  __int16 v96; // [sp+30Eh] [bp-32h]@1

  v2 = a2;
  strcpy((char *)&v86, "");
  strcpy((char *)&v85, "");
  get_wan_hw_ifname(v2, &v96);
  get_wan_type(v2, &v87);
  v4 = (const char *)pick_string_134F4(667, v3);
  v5 = "";
  strcpy((char *)&v84, v4);
  printf("<COL width=\"180\"><COL width=\"200\"><COL width=\"%%%%\">");
  puts("<form method=\"post\" action=\"timepro.cgi\" name=\"netconf_wansetup\">");
  puts("<input type=hidden name=\"tmenu\" value=\"netconf\">");
  puts("<input type=hidden name=\"smenu\" value=\"wansetup\">");
  puts("<input type=hidden name=\"act\" value=\"\">");
  puts("<input type=hidden name=\"ocolor\" value=\"\">");
  printf("<input type=hidden name=\"wan\" value=\"%s\">\n", v2);
  v6 = printf("<input type=hidden name=\"ifname\" value=\"%s\">\n", &v96);
  v7 = check_valid_account(v6) == 0;
  printf("<input type=hidden name=\"nopassword\" value=\"%d\">");
  puts("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"border-top:1px #CCC solid;\"><td class=\"wansetup_main_td\" colspan=\"3\"> ");
  if ( !strcmp((const char *)&v87, "dynamic") )
    v8 = "checked";
  else
    v8 = "";
  printf(
    "<input type=radio id=\"wan_type_id1\" name=\"wan_type\" class=\"navi_radio\" value=\"dynamic\" %s onclick=\"ShowWans"
    "etup('%s','dynamic')\"><label for=\"wan_type_id1\" style=\"display:inline-block; vertical-align:middle;\">",
    v8,
    &v96);
  v10 = pick_string_134F4(656, v9);
  printf("<span class=\"wansetup_main_span\" style=\"font-weight:700;\">%s</span></label></td></tr>\n", v10);
  puts("<tr class=\"wansetup_main_tr\" height=\"24\"><td class=\"wansetup_main_td\" colspan=\"3\"> ");
  if ( !strcmp((const char *)&v87, "pppoe") )
    v11 = "checked";
  else
    v11 = "";
  printf(
    "<input type=radio id=\"wan_type_id2\" name=\"wan_type\" class=\"navi_radio\" value=\"pppoe\" %s onclick=\"ShowWanset"
    "up('%s','pppoe')\"><label for=\"wan_type_id2\" style=\"display:inline-block; vertical-align:middle;\">",
    v11,
    &v96);
  v13 = pick_string_134F4(664, v12);
  printf("<span class=\"wansetup_main_span\" style=\"font-weight:700;\">%s</span></label></td></tr>", v13);
  strcpy(&v88, "");
  strcpy((char *)&v89, "");
  puts("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"border-bottom:1px #CCC solid;\"><td class=\"wansetup_main_td\" colspan=\"3\"> ");
  if ( !strcmp((const char *)&v87, "static") )
    v14 = "checked";
  else
    v14 = "";
  printf(
    "<input type=radio id=\"wan_type_id3\" name=\"wan_type\" class=\"navi_radio\" value=\"static\" %s onclick=\"ShowWanse"
    "tup('%s','static')\"><label for=\"wan_type_id3\" style=\"display:inline-block; vertical-align:middle;\">",
    v14,
    &v96);
  v16 = pick_string_134F4(666, v15);
  printf("<span class=\"wansetup_main_span\" style=\"font-weight:700;\">%s</span></label></td></tr>", v16);
  get_hwaddr_kernel((int)&v96, (int)&v89);
  convert_mac(&v89);
  v17 = getenv("REMOTE_ADDR");
  get_internal_pc_hardware_address(v17, &v90);
  get_hwaddr_cloned(&v96, &v88);
  v77 = v88 == 0;
  strcmp((const char *)&v87, "dynamic");
  printf("<tr id=\"dynamic\" class=\"wansetup_main_tr\" style=\"display:%s;\"><td colspan=\"3\">");
  printf("<table class=\"v3_table wansetup_main_table\" width=\"100%%\">");
  printf("<COL width=\"180\"><COL width=\"200\"><COL width=\"%%%%\">");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  v19 = pick_string_134F4(216, v18);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v19);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  get_ifconfig(&v96, &v95, &v94);
  sub_1F698("dynamicip", &v95);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\">");
  if ( !get_dhclient_block_private_ip(&v96) )
    v5 = "checked";
  v21 = pick_string_134F4(651, v20);
  printf(
    "<input type=checkbox id=\"aprchkid\" class=\"navi_chk\" name=\"allow_private\" %s>\t\t<label for=\"aprchkid\"><span "
    "class=\"item_text wansetup_main_span\">%s</span></label>",
    v5,
    v21);
  printf("</td></tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  v23 = pick_string_134F4(907, v22);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v23);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_1F698("dynamicsm", &v94);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  v25 = pick_string_134F4(345, v24);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v25);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  get_default_gateway(&v96, &v93);
  if ( !strncmp((const char *)&v93, "ppp", 3u) )
    sf_strncpy(&v93, &v95, 20);
  sub_1F698("dynamicgw", &v93);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  get_dns_shadow(&v96, "dynamic", &v92, &v91);
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  v27 = pick_string_134F4(227, v26);
  printf("<td class=\"wansetup_main_td\"><span class=\"wansetup_main_p\">%s</span>\n", v27);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_1F698(&unk_67565, &v92);
  puts((const char *)&unk_67572);
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  v29 = pick_string_134F4(874, v28);
  printf("<td class=\"wansetup_main_td\"><span class=\"wansetup_main_p\">%s</span>\n", v29);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_1F698("sdns_dynamic", &v91);
  puts("</td>");
  puts("<td class=\"wansetup_main_td\">");
  get_manual_dns_flag(&v96, "dynamic");
  printf("<input type=checkbox name=\"dns_dynamic_chk\" class=navi_chk %s onclick=\"check_dns_dynamic();\" id=\"dns_dynamic_chkid\">\n");
  v31 = pick_string_134F4(637, v30);
  printf("<label for=\"dns_dynamic_chkid\"><span class=\"wansetup_main_span\">%s</span></label>\n", v31);
  puts("</td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  sub_1F87C("dynamic", &v90, &v89, v77);
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  sub_1F9DC("dynamic", v2, 1500);
  printf("</tr>");
  printf(
    "<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">\t\t<td class=\"wansetup_main_td\" cols"
    "pan=\"3\"></td></tr>",
    "F7F7F7");
  printf("</table></td></tr>");
  read_pppoe_option(v2, &v78);
  strcmp((const char *)&v87, "pppoe");
  printf("<tr id=\"pppoe\" class=\"wansetup_main_tr\" style=\"display:%s;\"><td colspan=\"3\">");
  printf("<table class=\"v3_table wansetup_main_table\" width=\"100%%\">");
  printf("<COL width=\"180\"><COL width=\"200\"><COL width=\"%%%%\">");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  v33 = pick_string_134F4(660, v32);
  printf("<td class=wansetup_main_td><span class=\"wansetup_main_p\">%s</span></td>", v33);
  printf(
    "<td class=wansetup_main_td><input class=navi_text type=text style=\"width:160px;\" name=\"userid\" maxlength=63 valu"
    "e=\"%s\"></td>\n",
    &v78);
  printf("<td class=wansetup_main_td></td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  v35 = pick_string_134F4(663, v34);
  printf((const char *)&unk_67821, v35);
  printf("<td class=wansetup_main_td><input class=\"navi_text\" type=password style=\"width:160px;\" name=\"passwd\" \t\tid=\"passwd_passwd\" maxlength=63 value=\"");
  sub_11658(&v79);
  puts("\"><input class=\"navi_text\" type=text style=\"width:160px; display:none;\" id=\"passwd_text\" maxlength=63></td>");
  v37 = pick_string_134F4(1148, v36);
  printf(
    "<td class=wansetup_main_td><input type=\"checkbox\" id=\"passviewid\" name=\"passviewname\" onclick=\"clicked_passvi"
    "ew(this.checked, 'passwd');\" value=\"1\">\t\t<label for=\"passviewid\">%s</label></td>",
    v37);
  printf("</tr>");
  printf(
    "<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">\t\t<td class=\"wansetup_main_td\" cols"
    "pan=\"3\"></td></tr>",
    "FFFFFF");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  v39 = pick_string_134F4(216, v38);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v39);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  get_ifconfig(&v96, &v95, &v94);
  sub_1F698("pppoeip", &v95);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  v41 = pick_string_134F4(907, v40);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v41);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_1F698("pppoesm", &v94);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  v43 = pick_string_134F4(345, v42);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v43);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  get_default_gateway(&v96, &v93);
  if ( !strncmp((const char *)&v93, "ppp", 3u) )
    sf_strncpy(&v93, &v95, 20);
  sub_1F698("pppoegw", &v93);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  get_dns_shadow(&v96, "pppoe", &v92, &v91);
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  v45 = pick_string_134F4(227, v44);
  printf("<td class=\"wansetup_main_td\"><span class=\"wansetup_main_p\">%s</span>\n", v45);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_1F698(&unk_67A3B, &v92);
  puts((const char *)&unk_67572);
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  v47 = pick_string_134F4(874, v46);
  printf("<td class=\"wansetup_main_td\"><span class=\"wansetup_main_p\">%s</span>\n", v47);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_1F698("sdns_pppoe", &v91);
  puts("</td>");
  puts("<td class=\"wansetup_main_td\">");
  if ( get_manual_dns_flag(&v96, "pppoe") )
    v48 = "checked";
  else
    v48 = "";
  printf(
    "<input type=checkbox name=\"dns_pppoe_chk\" class=navi_chk %s onclick=\"check_dns_pppoe();\" id=\"dns_pppoe_chkid\">\n",
    v48);
  v50 = pick_string_134F4(637, v49);
  printf("<label for=\"dns_pppoe_chkid\"><span class=\"wansetup_main_span\">%s</span></label>\n", v50);
  puts("</td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  sub_1F87C("pppoe", &v90, &v89, v77);
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  sub_1F9DC("pppoe", v2, v83);
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  printf("<td class=\"wansetup_main_td\">");
  v52 = pick_string_134F4(476, v51);
  printf("<span class=\"wansetup_main_p\">%s</span>", v52);
  printf("</td>");
  printf("<td class=wansetup_main_td>");
  v54 = pick_string_134F4(475, v53);
  printf("<span class=\"wansetup_main_span\">%s</span>", v54);
  printf("<input class=\"navi_text\" type=text name=\"lcp_echo_interval\" size=3 maxlength=3 value=\"%d\" >", v81);
  v56 = pick_string_134F4(878, v55);
  printf("<span style=\"display:inline-block; vertical-align:middle; margin-right:5px;\">%s</span>", v56);
  v58 = pick_string_134F4(474, v57);
  printf("<span style=\"display:inline-block; vertical-align:middle; margin-left:5px;\">%s</span>", v58);
  printf("<input class=\"navi_text\" type=text name=\"lcp_echo_failure\" size=3 maxlength=3 value=\"%d\" >", v82);
  printf("</td>");
  printf("<td class=wansetup_main_td>");
  if ( v80 )
    v59 = "checked";
  else
    v59 = "";
  printf(
    "<input type=checkbox class=navi_chk id=\"lcpid\" name='lcp_flag' %s onclick=\"OnCheckEnableLCP()\" value=1>\n",
    v59);
  v61 = pick_string_134F4(731, v60);
  printf((const char *)&unk_67D4E, v61);
  printf("</td>");
  printf("</tr>");
  printf(
    "<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">\t\t<td class=\"wansetup_main_td\" cols"
    "pan=\"3\"></td></tr>",
    "F7F7F7");
  printf("</table>");
  printf("</td></tr>");
  strcmp((const char *)&v87, "static");
  printf("<tr id=\"static\" class=\"wansetup_main_tr\" style=\"display:%s;\"><td colspan=\"3\">");
  printf("<table class=\"v3_table wansetup_main_table\" width=\"100%%\">");
  printf("<COL width=\"180\"><COL width=\"200\"><COL width=\"%%%%\">");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  v63 = pick_string_134F4(216, v62);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v63);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  get_ifconfig(&v96, &v95, &v94);
  sub_1F698("ip", &v95);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  v65 = pick_string_134F4(907, v64);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v65);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_1F698("sm", &v94);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  v67 = pick_string_134F4(345, v66);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v67);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  get_default_gateway(&v96, &v93);
  if ( !strncmp((const char *)&v93, "ppp", 3u) )
    sf_strncpy(&v93, &v95, 20);
  sub_1F698("gw", &v93);
  puts("</td>");
  printf("<td class=\"wansetup_main_td\"></td>");
  printf("</tr>");
  get_dns_shadow(&v96, "static", &v92, &v91);
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  v69 = pick_string_134F4(227, v68);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v69);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_1F698(&unk_67DE2, &v92);
  puts((const char *)&unk_67572);
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  v71 = pick_string_134F4(874, v70);
  printf("<td class=\"wansetup_main_td\"><span class=\"item_text wansetup_main_p\">%s</span>\n", v71);
  printf("</td>");
  puts("<td class=\"wansetup_main_td\">");
  sub_1F698("sdns_static", &v91);
  puts((const char *)&unk_67572);
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "F7F7F7");
  sub_1F87C("static", &v90, &v89, v77);
  printf("</tr>");
  printf("<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">", "FFFFFF");
  sub_1F9DC("static", v2, 1500);
  printf("</tr>");
  printf(
    "<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s;\">\t\t<td class=\"wansetup_main_td\" cols"
    "pan=\"3\"></td></tr>",
    "F7F7F7");
  printf("</table></td></tr>");
  printf(
    "<tr class=\"wansetup_main_tr\" height=\"24\" style=\"background-color:#%s; border-bottom:1px #CCC solid;\">",
    "FFFFFF");
  v73 = pick_string_134F4(635, v72);
  printf("<td class=\"wansetup_main_td\"><span class=\"wansetup_main_p\" id=\"conntitle\">%s</span></td>", v73);
  printf("<td class=\"wansetup_main_td\" colspan=\"2\" height=\"24\">\t<div style=\"width:370px; display:inline-block; *display:inline; zoom:1; vertical-align:middle; margin:0; padding:0;\">\t<p id=\"connstatus\" style=\"width:370px; display:inline-block; *display:inline; zoom:1; vertical-align:middle; margin:0; padding:0;\"></p></div>");
  v75 = pick_string_134F4(28, v74);
  printf(
    "<div style=\"display:inline-block; *display:inline; zoom:1; vertical-align:middle; margin:0 0 0 10px; width:70px; pa"
    "dding:0;\">\t\t<input type=\"button\" class=\"bt\" id=\"appbtn\" value=\"%s\" onclick=\"apply_wansetup('%s','%s');\""
    ">\t\t<input type=\"button\" class=\"bt\" id=\"conbtn\" value=\"\" onclick=\"apply_connection('%s','%s');\" style=\"d"
    "isplay:none;\"></div>\n",
    v75,
    v2,
    &v96,
    v2,
    &v96);
  printf("</td></tr>");
  puts("</form>");
  printf("<form method=\"post\" name=\"backup_wansetup\">");
  return printf("</form>");
}

int __fastcall show_wansetup_1F610(int a1)
{
  int v3; // [sp+0h] [bp-50h]@1
  char v4; // [sp+20h] [bp-30h]@1

  get_wan_type(a1, &v4);
  get_wan_hw_ifname(a1, &v3);
  set_lang_133E4("netconf", "wansetup");
  puts("<script language=JavaScript>");
  printf("ShowWansetup('%s','%s');", &v3, &v4);
  puts("check_dns()");
  puts("OnCheckEnableLCP();");
  return puts("</script>");
}

int __fastcall set_lang_133E4(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1
  const char *v4; // r2@2
  int v6; // [sp+0h] [bp-68h]@5
  int v7; // [sp+4h] [bp-64h]@0
  char v8; // [sp+8h] [bp-60h]@7
  char v9; // [sp+48h] [bp-20h]@1

  v2 = a2;
  v3 = a1;
  get_ux_lang((int)&v9);
  if ( v2 )
    v4 = "/home/httpd/js/%s/%s_%s.lang.js";
  else
    v4 = "/home/httpd/js/%s/%s.js";
  if ( v2 )
  {
    v6 = v3;
    v7 = v2;
  }
  else
  {
    v6 = v3;
  }
  snprintf2(&v8, 64, v4, &v9, v6, v7);
  print_file(&v8);
  if ( v2 )
    snprintf2(&v8, 64, "/home/httpd/js/%s_%s.js", v3, v2);
  else
    snprintf2(&v8, 64, "/home/httpd/js/%s.js", v3);
  return print_file(&v8);
}


int __fastcall setDay_129D0(const char *a1)
{
  const char *v1; // r4@1
  int v2; // r1@1
  int v3; // r0@2

  v1 = a1;
  if ( !strcmp(a1, "Sun") )
  {
    v3 = 22;
  }
  else if ( !strcmp(v1, "Mon") )
  {
    v3 = 14;
  }
  else if ( !strcmp(v1, "Tue") )
  {
    v3 = 26;
  }
  else if ( !strcmp(v1, "Wed") )
  {
    v3 = 28;
  }
  else if ( !strcmp(v1, "Thu") )
  {
    v3 = 23;
  }
  else if ( !strcmp(v1, "Fri") )
  {
    v3 = 5;
  }
  else if ( !strcmp(v1, "Sat") )
  {
    v3 = 18;
  }
  else
  {
    v3 = 22;
  }
  return sub_129A0(v3, v2);
}

int __fastcall set_language_dword_12940(int a1, int a2)
{
  int result; // r0@1
  char **v3; // r2@2
  int v4; // [sp+0h] [bp-10h]@1
  int v5; // [sp+4h] [bp-Ch]@1

  v4 = a1;
  v5 = a2;
  get_ux_lang((int)&v4 + 3);
  result = strcmp((const char *)&v4 + 3, "kr");
  if ( result )
  {
    result = strcmp((const char *)&v4 + 3, "en");
    if ( result )
      return result;
    v3 = off_94870;
  }
  else
  {
    v3 = off_947F8;
  }
  dword_97928 = (int)v3;
  return result;
}

int is_mobile_agent _12770(int a1)
{
  int result; // r0@1

  result = is_mobile_agent(a1);
  if ( result )
    result = printf("</div>");
  return result;
}

void *set_image_with_version_126C4()
{
  char *v0; // r0@2
  const char *v1; // r1@2

  if ( ui_version_97804 == 2 )
  {
    v0 = (char *)&unk_97908;
    v1 = "images2";
  }
  else
  {
    v0 = (char *)&unk_97908;
    v1 = "images";
  }
  strcpy(v0, v1);
  return &unk_97908;
}

int __fastcall get_file_string_1236C(int a1, int a2)
{
  return get_file_string("/home/httpd/build_date", a1, a2);
}

int __fastcall wizard_3EAD8(int a1)
{
  int v1; // r4@1

  v1 = a1;
  puts("<body bgcolor=#dedede style=\"margin-left:0; margin-right:0; margin-top:0px; margin-bottom:0;\" >");
  puts("<table width=550 height=290 class=wizardtable_td bgcolor=#ffffff >");
  sub_3DEEC(v1);
  printf("</table>");
  return puts("</body>");
}

int __fastcall RefreshOpener_FF80(int a1)
{
  int result; // r0@1
  int v2; // r4@1

  result = get_pvalue(a1, (int)"ip");
  v2 = result;
  if ( result )
  {
    puts("<script>");
    printf("RefreshOpener('%s');\n", v2);
    result = printf("</script>");
  }
  return result;
}

int navi_save_info_1504C()
{
  int v0; // r6@1
  int result; // r0@1
  int v2; // r7@1
  int v3; // r1@2
  int v4; // r5@2
  int v5; // r1@2
  int v6; // r4@2
  int v7; // r0@2

  v0 = sysget_max_config_size();
  result = sysget_config_size();
  v2 = result;
  if ( v0 )
  {
    puts("<BODY style=\"margin:0 0 0 0; background-color:transparent\">");
    printf("<TABLE CELLPADDING=0 CELLSPACING=0 border=0 width=100%% height=100%%>");
    puts("<TR><TD valign=middle align=center>");
    v4 = pick_string_134F4(871, v3);
    v6 = pick_string_134F4(870, v5);
    v7 = sub_43AF4(-100 * v2, v0);
    printf("<span style=\"color:gray;\">%s : <b>%d%%</b> %s</span>", v4, v7 + 100, v6);
    puts("</TD></TR>");
    puts("</TABLE>");
    result = puts("</BODY>");
  }
  return result;
}

int __fastcall navi_menu_basic_15314(int a1)
{

  int navi_menu_basic[16]={0,};

  get_intvalue(a1);
  puts("<body bgcolor=#dedede topmargin=\"0\" leftmargin=\"0\" rightmargin=\"0\" bottommargin=\"0\" style=\"background-color:transparent\">");
  puts("<form name=navi_basic_form>");
  navi_menu_basic[1] = puts("<input type=hidden name=\"navi_basic_hidden\" value=\"none\">");
  navi_menu_basic[2] = sub_126C4(navi_menu_basic[1]);
  printf("<input type=hidden name=\"image_prefix\" value=\"/%s\">\n", navi_menu_basic[2]);
  navi_menu_basic[3] = printf("<table class=\"navimaintable\" CELLPADDING=0 CELLSPACING=0 width=197 >\n ");
  str(navi_menu_basic[3]);
  puts("<td valign=top>");
  navi_menu_basic[4] = printf("<table class=\"navicontent_table\" CELLPADDING=0 CELLSPACING=0 >\n ");
  str(navi_menu_basic[4]);
  puts("<td>");
  printf("<table class=\"navicontent_table\" width=100%% CELLPADDING=0 CELLSPACING=0 >\n");
  navi_menu_basic[5] = print_blank_line(3, 5);
  str(navi_menu_basic[5]);
  puts("<td>");
  sub_15674(1, 16);
  navi_click_img_("navimenu_title_basic_setup.gif", "basic_foldericon", "", 0);
  navi_menu_basic[7] = pick_string_134F4(625, navi_menu_basic[6]);
  navi_menu_basic[8] = setup_view_("basic_setup", navi_menu_basic[7]);
  etr(navi_menu_basic[8]);
  puts("</table>");
  navi_menu_basic[9] = printf("</td>");
  navi_menu_basic[10] = etr(navi_menu_basic[9]);
  str(navi_menu_basic[10]);
  printf("<td id=\"%s\">\n", "basic_setup");
  puts("<table class=\"navicontent_table\" CELLPADDING=0 CELLSPACING=0>");
  pick_string_134F4(607, navi_menu_basic[11]);
  menu_view_(2, "system_info.gif", "system", "info");
  pick_string_134F4(734, navi_menu_basic[12]);
  menu_view_(2, "netconf_wansetup.gif", "netconf", "wansetup");
  pick_string_134F4(605, navi_menu_basic[13]);
  menu_view_(2, "sysconf_swupgrade.gif", "sysconf", "swupgrade");
  puts("</table>");
  navi_menu_basic[14] = printf("</td>");
  etr(navi_menu_basic[14]);
  puts("</table>");
  navi_menu_basic[15] = printf("</td>");
  etr(navi_menu_basic[15]);
  puts("</table>");
  navi_menu_basic[16] = printf("</td>");
  etr(navi_menu_basic[16]);
  puts("</table>");
  printf("</form>");
  return printf("</body>");
}

int __fastcall navi_menu_advance_150FC(int a1)
{

  int navi_menu_advance[10]={0,};

  get_intvalue(a1);
  puts("<body bgcolor=#dedede topmargin=\"0\" leftmargin=\"0\" rightmargin=\"0\" bottommargin=\"0\" style=\"background-color:transparent\">");
  puts("<form name=navi_advance_form>");
  puts("<input type=hidden name=\"navi_advance_hidden\" value=\"none\">");
  navi_menu_advance[1] = printf("<table border=0 CELLPADDING=0 CELLSPACING=0>");
  str(navi_menu_advance[1]);
  puts("<td valign=top>");
  navi_menu_advance[2] = printf("<table class=\"navicontent_table\" CELLPADDING=0 CELLSPACING=0 >\n ");
  str(navi_menu_advance[2]);
  puts("<td valign=top>");
  navi_menu_advance[3] = printf("<table class=\"navicontent_table\" width=100%% CELLPADDING=0 CELLSPACING=0 >\n");
  str(navi_menu_advance[3]);
  puts("<td>");
  puts("<table class=\"navicontent_table\" CELLPADDING=0 CELLSPACING=0>");
  navi_click_img_("navimenu_plusnode.gif", "advance_picon", "advance_setup", 1);
  navi_click_img_("navimenu_title_advance_setup.gif", "advance_foldericon", "", 0);
  navi_menu_advance[5] = pick_string_134F4(624, navi_menu_advance[4]);
  navi_menu_advance[6] = setup_view_("advance_setup", navi_menu_advance[5]);
  etr(navi_menu_advance[6]);
  puts("</table>");
  navi_menu_advance[7] = printf("</td>");
  navi_menu_advance[8] = etr(navi_menu_advance[7]);
  str(navi_menu_advance[8]);
  printf("<td id=\"%s\" style=\"display:none;\" >\n", "advance_setup");
  puts("<table class=\"navicontent_table\" CELLPADDING=0 CELLSPACING=0>");
  sub_14D58(3, "netconf", 0);
  sub_14D58(3, "natrouterconf", 0);
  sub_14D58(3, "firewallconf", 0);
  sub_14D58(3, "expertconf", 0);
  sub_14D58(3, "trafficconf", 0);
  sub_14D58(3, "switchconf", 0);
  sub_14D58(3, "sysconf", 0);
  puts("</table>");
  navi_menu_advance[9] = printf("</td>");
  etr(navi_menu_advance[9]);
  puts("</table>");
  navi_menu_advance[10] = printf("</td>");
  etr(navi_menu_advance[10]);
  puts("</table>");
  puts("</form>");
  return puts("</body>");
}

int __fastcall Check_Month_12AA0(const char *a1)
{
  const char *v1; // r4@1
  int v2; // r1@1
  signed int v3; // r0@2

  v1 = a1;
  if ( !strcmp(a1, "Jan") )
  {
    v3 = 7;
  }
  else if ( !strcmp(v1, "Feb") )
  {
    v3 = 4;
  }
  else if ( !strcmp(v1, "Mar") )
  {
    v3 = 10;
  }
  else
  {
    v3 = strcmp(v1, "Apr");
    if ( v3 )
    {
      if ( !strcmp(v1, "May") )
      {
        v3 = 11;
      }
      else if ( !strcmp(v1, "Jun") )
      {
        v3 = 9;
      }
      else if ( !strcmp(v1, "Jul") )
      {
        v3 = 8;
      }
      else if ( !strcmp(v1, "Aug") )
      {
        v3 = 1;
      }
      else if ( !strcmp(v1, "Sep") )
      {
        v3 = 21;
      }
      else if ( !strcmp(v1, "Oct") )
      {
        v3 = 17;
      }
      else if ( !strcmp(v1, "Nov") )
      {
        v3 = 16;
      }
      else if ( !strcmp(v1, "Dec") )
      {
        v3 = 3;
      }
      else
      {
        v3 = 7;
      }
    }
  }
  return ret_set_day(v3, v2);
}

int __fastcall exec_pptp_1311C(const char *a1)
{
  const char *v1; // r6@1
  int v2; // r5@1
  int v3; // r0@2
  int result; // r0@3
  int v5; // [sp+0h] [bp-78h]@2

  v1 = a1;
  v2 = 0;
  do
  {
    memset(&v5, 0, 0x68u);
    v3 = pptpserver_get_index_pptpinfo(v2++, (int)&v5);
    if ( !v3 )
      break;
    result = strcmp((const char *)&v5, v1);
    if ( !result )
      return result;
  }
  while ( v2 != 5 );
  return 1;
}

int __fastcall check_user_13298(int a1)
{
  int v1; // r4@1
  int v2; // r4@3
  signed int result; // r0@6
  char v4; // [sp+0h] [bp-D0h]@1
  unsigned __int8 v5; // [sp+80h] [bp-50h]@1

  v1 = a1;
  strcpy(&v4, "");
  strcpy((char *)&v5, "");
  if ( get_value_post(v1, (int)"captcha_file", (int)&v4, 63) && v4 )
  {
    v2 = get_value_post(v1, (int)"captcha_code", (int)&v5, 64);
    if ( v2 && (v2 = v5) != 0 && (v2 = check_captcha((int)&v4, (const char *)&v5)) != 0 )
    {
      remove_captcha(&v4);
      result = 1;
    }
    else
    {
      remove_captcha(&v4);
      result = v2;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}

int __fastcall menu_frame_139D4(int a1)
{
  int v1; // r4@1
  const char *v2; // r0@3
  int v3; // r0@6
  char *v4; // r1@8
  int v5; // r0@10
  char *v6; // r1@12
  int v7; // r0@15
  char *v8; // r1@17
  int v9; // r0@19
  char *v10; // r1@21
  int v11; // r0@24
  char *v12; // r1@26
  int v13; // r0@28
  char *v14; // r1@30
  int v15; // r1@34
  int v16; // r0@34
  int v17; // r0@35
  char *v18; // r2@37
  int v19; // r0@39
  char *v20; // r2@41
  int v21; // r0@44
  char *v22; // r3@46
  int v23; // r0@48
  char *v24; // r3@50
  char v26; // [sp+8h] [bp-148h]@6
  char v27; // [sp+88h] [bp-C8h]@1
  char v28; // [sp+C8h] [bp-88h]@1
  char v29; // [sp+108h] [bp-48h]@33
  char v30; // [sp+128h] [bp-28h]@7
  __int16 v31; // [sp+132h] [bp-1Eh]@7
  int v32; // [sp+13Ch] [bp-14h]@1

  v32 = 0;
  v1 = a1;
  get_intvalue(a1);
  strcpy(&v28, "system");
  strcpy(&v27, "info");
  if ( v32 )
  {
    get_value(v1, "tmenu", &v28, 64);
    get_value(v1, "smenu", &v27, 64);
  }
  else
  {
    v2 = (const char *)get_pvalue(v1, (int)("mf_"));
    if ( v2 && atoi(v2) == 1 )
    {
      strcpy(&v28, "firewallconf");
      strcpy(&v27, "plantynet");
    }
  }
  snprintf2((int)&v26, 128, "%s_%s", &v28, &v27);
  puts("<BODY style=\"margin:0 0 0 7px;\" bgcolor=#ffffff>");
  printf("<TABLE class=menu_table CELLPADDING=0 CELLSPACING=0 width=%d height=%d>", 887, 578);
  puts("<TR>");
  printf("<TD valign=top width=%d>\n", 226);
  printf("<TABLE class=menu_table border=0 CELLSPACING=0 width=100%% height=100%% background='/images2/explorerbg2.gif' style=\"background-repeat:no-repeat;\" >\n");
  puts("<TR>");
  v3 = puts("<TD valign=top align=center>");
  if ( is_mobile_agent(v3) )
  {
    sprintf((char *)&v31, "%d", 36);
    sprintf(&v30, "%d", 213);
    sub_12790((int)&v31, (int)&v30, (int)"");
    if ( v32 )
      v4 = "&helpmenu=1";
    else
      v4 = "";
    v5 = printf(
           "<iframe src=\"timepro.cgi?tmenu=navi_titlebar%s\" style=\"margin-left:5px\" width=%d height=%d frameborder=\""
           "no\" scrolling=\"auto\" name=\"navi_title\" noresize allowTransparency='true'></iframe>",
           v4,
           213,
           36);
    is_mobile_agent(v5);
  }
  else
  {
    if ( v32 )
      v6 = "&helpmenu=1";
    else
      v6 = "";
    printf(
      "<iframe src=\"timepro.cgi?tmenu=navi_titlebar%s\" style=\"margin-left:5px\" width=%d height=%d frameborder=\"no\" "
      "scrolling=\"no\" name=\"navi_title\" noresize allowTransparency='true'></iframe>",
      v6,
      213,
      36);
  }
  puts("</TD>");
  puts("</TR>");
  puts("<TR>");
  v7 = puts("<TD valign=top align=left>");
  if ( is_mobile_agent(v7) )
  {
    sprintf((char *)&v31, "%d", 100);
    sprintf(&v30, "%d", 213);
    sub_12790((int)&v31, (int)&v30, (int)"");
    if ( v32 )
      v8 = "&helpmenu=1";
    else
      v8 = "";
    v9 = printf(
           "<iframe src=\"timepro.cgi?tmenu=navi_menu_basic%s\" style=\"margin-left:5px\" width=%d height=%d frameborder="
           "\"no\" scrolling=\"auto\" name=\"navi_menu_basic\" noresize allowTransparency=\"true\"></iframe>",
           v8,
           213,
           100);
    is_mobile_agent(v9);
  }
  else
  {
    if ( v32 )
      v10 = "&helpmenu=1";
    else
      v10 = "";
    printf(
      "<iframe src=\"timepro.cgi?tmenu=navi_menu_basic%s\" style=\"margin-left:5px\" width=%d height=%d frameborder=\"no\""
      " scrolling=\"no\" name=\"navi_menu_basic\" noresize allowTransparency=\"true\"></iframe>",
      v10,
      213,
      100);
  }
  puts("</TD>");
  puts("</TR>");
  puts("<TR>");
  v11 = printf("<TD height=%d valign=top align=left>\n", 390);
  if ( is_mobile_agent(v11) )
  {
    sprintf((char *)&v31, "%d", 390);
    sprintf(&v30, "%d", 213);
    sub_12790((int)&v31, (int)&v30, (int)"");
    if ( v32 )
      v12 = "&helpmenu=1";
    else
      v12 = "";
    v13 = printf(
            "<iframe src=\"timepro.cgi?tmenu=navi_menu_advance%s\" style=\"margin-left:5px\" width=%d height=%d framebord"
            "er=\"no\" scrolling=\"auto\" name=\"navi_menu_advance\" noresize allowTransparency=\"true\"></iframe>",
            v12,
            213,
            390);
    is_mobile_agent(v13);
  }
  else
  {
    if ( v32 )
      v14 = "&helpmenu=1";
    else
      v14 = "";
    printf(
      "<iframe src=\"timepro.cgi?tmenu=navi_menu_advance%s\" style=\"margin-left:5px\" width=%d height=%d frameborder=\"n"
      "o\" scrolling=\"auto\" name=\"navi_menu_advance\" noresize allowTransparency=\"true\"></iframe>",
      v14,
      213,
      390);
  }
  puts("</TD>");
  puts("</TR>");
  printf("<TR>");
  printf("<TD valign=top align=left height=%d>\n", 35);
  get_http_auth_method(&v29);
  if ( !strcmp(&v29, "session") )
  {
    printf("<table style=\"padding:0; margin:0; table-layout:fixed;\" width=\"100%%\" height=\"24\">");
    printf("<COL width=\"5\"><COL width=\"110\"><COL width=\"%%%%\">");
    printf("<tr style=\"padding:0; margin:0;\" height=\"24\"><td style=\"padding:0; margin:0;\">");
    printf("</td><td style=\"padding:0; margin:0;\">");
    v16 = pick_string_134F4(510, v15);
    printf(
      "<img src=\"/images2/logout_notxt.gif\" \t\t\tstyle=\"cursor:pointer; height:18px; display:inline-block; *display:i"
      "nline; zoom:1; vertical-align:middle;\" \t\t\ttitle=\"%s\" onclick=\"top.location.href='/sess-bin/login_session.cgi?logout=1';\">",
      v16);
    printf("<span style=\"padding-left:5px; margin:0; cursor:pointer; color:#646463; \t\t\tdisplay:inline-block; *display:inline; zoom:1; vertical-align:middle;\" \t\t\tonclick=\"top.location.href='/sess-bin/login_session.cgi?logout=1';\">Logout</span>");
    printf("</td><td style=\"padding:0; margin:0;\">");
    printf("</td></tr>");
    printf("</table>");
  }
  puts("</TD>");
  puts("</TR>");
  puts("</TABLE>");
  printf("</TD>");
  printf("<TD valign=top width=%d>\n", 661);
  printf("<TABLE class=menu_table border=0 CELLSPACING=0 width=100%% height=100%% background='/images2/mainbg.gif' style=\"background-repeat:no-repeat;\">\n");
  puts("<TR>");
  v17 = printf("<TD valign=top height=%d align=center>\n", 30);
  if ( is_mobile_agent(v17) )
  {
    sprintf((char *)&v31, "%d", 30);
    sprintf(&v30, "%d", 661);
    sub_12790((int)&v31, (int)&v30, (int)"");
    if ( v32 )
      v18 = "&helpmenu=1";
    else
      v18 = "";
    v19 = printf(
            "<iframe src=\"timepro.cgi?tmenu=menu_titlebar&smenu=%s%s\" width=%d height=%d frameborder=\"no\" scrolling=\""
            "no\" name=\"menu_title\" noresize allowTransparency=\"true\" ></iframe>",
            &v26,
            v18,
            661,
            30);
    is_mobile_agent(v19);
  }
  else
  {
    if ( v32 )
      v20 = "&helpmenu=1";
    else
      v20 = "";
    printf(
      "<iframe src=\"timepro.cgi?tmenu=menu_titlebar&smenu=%s%s\" width=%d height=%d frameborder=\"no\" scrolling=\"no\" "
      "name=\"menu_title\" noresize allowTransparency=\"true\" ></iframe>",
      &v26,
      v20,
      661,
      30);
  }
  printf("</TD>");
  printf("</TR>");
  printf("<TR>");
  v21 = printf("<TD valign=top align=left style=\"padding-left:9px; padding-top:0px;\">");
  if ( is_mobile_agent(v21) )
  {
    sprintf((char *)&v31, "%d", 535);
    sprintf(&v30, "%d", 642);
    sub_12790((int)&v31, (int)&v30, (int)"");
    if ( v32 )
      v22 = "&helpmenu=1";
    else
      v22 = "";
    v23 = printf(
            "<iframe src=\"timepro.cgi?tmenu=%s&smenu=%s%s\" width=%d height=%d frameborder=\"no\" scrolling=\"auto\" nam"
            "e=\"main\" allowTransparency=\"true\" noresize></iframe>",
            &v28,
            &v27,
            v22,
            642,
            535);
    is_mobile_agent(v23);
  }
  else
  {
    if ( v32 )
      v24 = "&helpmenu=1";
    else
      v24 = "";
    printf(
      "<iframe src=\"timepro.cgi?tmenu=%s&smenu=%s%s\" width=%d height=%d frameborder=\"no\" scrolling=\"auto\" name=\"ma"
      "in\" allowTransparency=\"true\" noresize></iframe>",
      &v28,
      &v27,
      v24,
      642,
      535);
  }
  printf("</TD>");
  printf("</TR>");
  puts("</TABLE>");
  puts("</TD>");
  puts("</TR>");
  puts("</TABLE>");
  return puts("</BODY>");
}

int print_commonv2file_14084()
{
  return print_file("/home/httpd/js/common.v2.js");
}

int print_timev2file_14090()
{
  return print_file("/home/httpd/time.v2.css");
}

int __fastcall navemenuframe_14314(int a1)
{
  int v1; // r5@1
  int v2; // r0@1

  v1 = a1;
  printf("<frameset rows=\"%d,*\" border=0>\n", 74);
  puts("<frame name=\"nave_menu\" src=\"timepro.cgi?tmenu=titlebar\" scrolling=no noresize>");
  puts("<frameset rows=\"0,*\" frameborder=no border=0 scrolling=no framespacing=0  >");
  v2 = puts("<frame name=\"menu\" marginwidth=0 src=\"\" noresize>");
  remote_connect_write_log(v2);
  printf("<frame name=\"main_body\" scrolling=auto src=\"timepro.cgi?tmenu=main_body&mf_flag=%d\" noresize >\n", v1);
  puts("</frameset>");
  return puts("</frameset>");
}

void __fastcall infoviewer_143D4(int a1, int a2)
{
  signed int v2; // r5@1

  int pickstr[114]={0,};
 
  v2 = dword_979B0[0];
  if ( !dword_979B0[0] )
  {
    pickstr[0] = pick_string_134F4(629, a2);
    pickstr[2] = pick_string_134F4(607, pickstr[1]);
    sub_14380(v2, (int)"system", (int)"info", pickstr[0], pickstr[2], (int)sub_159C0, v2);
    pickstr[4] = pick_string_134F4(629, pickstr[3]);
    pickstr[6] = pick_string_134F4(734, pickstr[5]);
    sub_14380(1, (int)"netconf", (int)"wansetup", pickstr[4], pickstr[6], (int)sub_20A4C, v2);
    pickstr[8] = pick_string_134F4(629, pickstr[7]);
    pickstr[10] = pick_string_134F4(593, pickstr[9]);
    sub_14380(2, (int)"netconf", (int)"lansetup", pickstr[8], pickstr[10], (int)lansetup_with_file, v2);
    pickstr[12] = pick_string_134F4(628, pickstr[11]);
    pickstr[14] = pick_string_134F4(589, pickstr[13]);
    sub_14380(3, (int)"natrouterconf", (int)"portforward", pickstr[12], pickstr[14], (int)sub_25B30, v2);
    pickstr[16] = pick_string_134F4(628, pickstr[15]);
    pickstr[18] = pick_string_134F4(588, pickstr[17]);
    sub_14380(4, (int)"natrouterconf", (int)"misc", pickstr[16], pickstr[18], (int)sub_2923C, v2);
    pickstr[20] = pick_string_134F4(628, pickstr[19]);
    pickstr[22] = pick_string_134F4(591, pickstr[21]);
    sub_14380(5, (int)"natrouterconf", (int)"router", pickstr[20], pickstr[22], (int)sub_28268, v2);
    pickstr[24] = pick_string_134F4(627, pickstr[23]);
    pickstr[26] = pick_string_134F4(584, pickstr[25]);
    sub_14380(6, (int)"firewallconf", (int)"firewall", pickstr[24], pickstr[26], (int)sub_2C4BC, (int)sub_2C4C4);
    pickstr[28] = pick_string_134F4(627, pickstr[27]);
    pickstr[30] = pick_string_134F4(586, pickstr[29]);
    sub_14380(7, (int)"firewallconf", (int)"netdetect", pickstr[28], pickstr[30], (int)sub_3810C, v2);
    pickstr[32] = pick_string_134F4(627, pickstr[31]);
    pickstr[34] = pick_string_134F4(599, pickstr[33]);
    sub_14380(8, (int)"firewallconf", (int)"accesslist", pickstr[32], pickstr[34], (int)sub_2F594, v2);
    pickstr[36] = pick_string_134F4(627, pickstr[35]);
    pickstr[38] = pick_string_134F4(587, pickstr[37]);
    sub_14380(9, (int)"firewallconf", (int)"plantynet", pickstr[36], pickstr[38], (int)sub_43A14, v2);
    pickstr[40] = pick_string_134F4(626, pickstr[39]);
    pickstr[42] = pick_string_134F4(581, pickstr[41]);
    sub_14380(10, (int)"expertconf", (int)"pptpvpn", pickstr[40], pickstr[42], (int)sub_3B1D8, v2);
    pickstr[44] = pick_string_134F4(626, pickstr[43]);
    pickstr[46] = pick_string_134F4(577, pickstr[45]);
    sub_14380(11, (int)"expertconf", (int)"ddns", pickstr[44], pickstr[46], (int)sub_3A3D0, v2);
    pickstr[48] = pick_string_134F4(626, pickstr[47]);
    pickstr[50] = pick_string_134F4(582, pickstr[49]);
    sub_14380(12, (int)"expertconf", (int)"remotepc", pickstr[48], pickstr[50], (int) get_remote_address, v2);
    pickstr[52] = pick_string_134F4(626, pickstr[51]);
    pickstr[54] = pick_string_134F4(578, pickstr[53]);
    sub_14380(13, (int)"expertconf", (int)"hostscan", pickstr[52], pickstr[54], (int)sub_23AF4, v2);
    pickstr[56] = pick_string_134F4(626, pickstr[55]);
    pickstr[58] = pick_string_134F4(576, pickstr[57]);
    sub_14380(14, (int)"expertconf", (int)"advertise", pickstr[56], pickstr[58], (int)sub_3F0D0, v2);
    pickstr[60] = pick_string_134F4(626, pickstr[59]);
    pickstr[62] = pick_string_134F4(579, pickstr[61]);
    sub_14380(15, (int)"expertconf", (int)"iptv", pickstr[60], pickstr[62], (int)sub_4096C, v2);
    pickstr[64] = pick_string_134F4(632, pickstr[63]);
    pickstr[66] = pick_string_134F4(614, pickstr[65]);
    sub_14380(16, (int)"trafficconf", (int)"qos", pickstr[64], pickstr[66], (int)sub_31B48, v2);
    pickstr[68] = pick_string_134F4(632, pickstr[67]);
    pickstr[70] = pick_string_134F4(610, pickstr[69]);
    sub_14380(17, (int)"trafficconf", (int)"conninfo", pickstr[68], pickstr[70], (int)sub_34C54, v2);
    pickstr[72] = pick_string_134F4(632, pickstr[71]);
    pickstr[74] = pick_string_134F4(609, pickstr[73]);
    sub_14380(18, (int)"trafficconf", (int)"connctrl", pickstr[72], pickstr[74], (int)sub_35910, v2);
    pickstr[76] = pick_string_134F4(632, pickstr[75]);
    pickstr[78] = pick_string_134F4(611, pickstr[77]);
    sub_14380(19, (int)"trafficconf", (int)"linksetup", pickstr[76], pickstr[78], (int)sub_36F0C, v2);
    pickstr[80] = pick_string_134F4(632, pickstr[79]);
    pickstr[82] = pick_string_134F4(612, pickstr[81]);
    sub_14380(20, (int)"trafficconf", (int)"linkstat", pickstr[80], pickstr[82], (int)sub_373F4, v2);
    pickstr[84] = pick_string_134F4(630, pickstr[83]);
    pickstr[86] = pick_string_134F4(598, pickstr[85]);
    sub_14380(21, (int)"switchconf", (int)"vlan", pickstr[84], pickstr[86], (int)sub_4182C, v2);
    pickstr[88] = pick_string_134F4(630, pickstr[87]);
    pickstr[90] = pick_string_134F4(596, pickstr[89]);
    sub_14380(22, (int)"switchconf", (int)"stp", pickstr[88], pickstr[90], (int)sub_423FC, v2);
    pickstr[92] = pick_string_134F4(630, pickstr[91]);
    pickstr[94] = pick_string_134F4(595, pickstr[93]);
    sub_14380(23, (int)"switchconf", (int)"mirroring", pickstr[92], pickstr[94], (int)sub_42884, v2);
    pickstr[96] = pick_string_134F4(630, pickstr[95]);
    pickstr[98] = pick_string_134F4(597, pickstr[99]);
    sub_14380(24, (int)"switchconf", (int)"trunk", pickstr[96], pickstr[98], (int)sub_4304C, v2);
    pickstr[100] = pick_string_134F4(631, pickstr[99]);
    pickstr[102] = pick_string_134F4(606, pickstr[101]);
    sub_14380(25, (int)"sysconf", (int)"syslog", pickstr[100], pickstr[102], (int)sub_2264C, (int)sub_225F8);
    pickstr[104] = pick_string_134F4(631, pickstr[103]);
    pickstr[106] = pick_string_134F4(601, pickstr[105]);
    sub_14380(26, (int)"sysconf", (int)"login", pickstr[104], pickstr[106], (int)view_main_login2, v2);
    pickstr[108] = pick_string_134F4(631, pickstr[107]);
    pickstr[110] = pick_string_134F4(605, pickstr[109]);
    sub_14380(27, (int)"sysconf", (int)"swupgrade", pickstr[108], pickstr[110], (int)sub_1E5E8, v2);
    pickstr[112] = pick_string_134F4(631, pickstr[111]);
    pickstr[114] = pick_string_134F4(602, pickstr[113]);
    sub_14380(28, (int)"sysconf", (int)"misc", pickstr[112], pickstr[114], (int)sub_1E0A8, v2);
  }
}

int __fastcall setup_view_1556C(const char *a1, int a2)
{
  const char *v2; // r4@1
  int v3; // r6@1
  int v5; // [sp+0h] [bp-50h]@1

  v2 = a1;
  v3 = a2;
  snprintf2((int)&v5, 64, "%s_td", a1);
  printf("<td id=\"%s\">\n", &v5);
  if ( !strcmp(v2, "basic_setup") )
    printf("<span style=\"margin-left:4;\">%s</span>\n", v3);
  else
    printf(
      "<span style=\"cursor:pointer; margin-left:4;\" onclick=\"toggle('%s',%s);\" \t\t\t\tonmouseover=\"this.style.textD"
      "ecoration='underline'\" \t\t\t\tonmouseout=\"this.style.textDecoration='none'\" \t\t\t\tOnFocus=this.blur(); >%s</span>\n",
      v2,
      &v5,
      v3);
  return printf("</td>");
}

int __fastcall navi_click_img_15600(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r6@1
  void *v6; // r0@2
  int result; // r0@2
  void *v8; // r0@3

  v4 = a2;
  v5 = a3;
  if ( a4 )
  {
    puts("<td>");
    v6 = sub_12678();
    result = printf("<img class=navi_click_img id=\"%s\" src=\"%s\" onclick=\"toggle('%s','');\"></td>\n", v4, v6, v5);
  }
  else
  {
    puts("<td width=16>");
    v8 = sub_12678();
    result = printf("<img id=\"%s\" src=\"%s\"></td>\n", v4, v8);
  }
  return result;
}

int __fastcall menu_view_156A8(int a1, int a2, const char *a3, int a4, int a5, int a6, int a7)
{
  const char *v7; // r5@1
  int v8; // r4@1
  int v9; // r6@1
  int v10; // r0@1
  void *image1; // r0@6
  void *image2; // r0@7
  void *image3; // r0@8
  const char *href; // r0@9
  const char *menu_ttlbar; // r2@12
  const char *v16; // r0@12
  int v17; // r0@14
  char v19; // [sp+8h] [bp-120h]@1
  char id; // [sp+88h] [bp-A0h]@1

  v7 = a3;
  v8 = a1;
  v9 = a4;
  snprintf2((int)&id, 128, "%s_%s_%d_td", a3, a4, a1);
  v10 = snprintf2((int)&v19, 128, "%s_%s", v7, v9);
  str(v10);
  if ( v8 )
  {
    if ( v8 == 2 || !strcmp(v7, "sysconf") )
    {
      sub_15674(v8 - 1);
      puts("<td>");
    }
    else
    {
      sub_15674(v8 - 2);
      puts("<td>");
      image1 = sub_12678();
      printf("<img src=\"%s\"></td>\n", image1);
      puts("<td>");
    }
    image2 = sub_12678();
    printf("<img src=\"%s\"></td>\n", image2);
  }
  else
  {
    sub_15674(1);
  }
  puts("<td>");
  image3 = sub_12678();
  printf("<img src=\"%s\"></td>\n", image3);
  printf("<td id=\"%s\">\n", &id);
  puts("<span style=\"margin-left:4px;\">");
  if ( a7 )
    href = "<a href=\"timepro.cgi?tmenu=%s&smenu=%s&helpmenu=1&mainscreen=1\"";
  else
    href = "<a href=\"timepro.cgi?tmenu=%s&smenu=%s\"";
  printf(href, v7, v9);
  printf(" target=\"main\"  OnFocus=this.blur(); ");
  if ( a7 )
  {
    menu_ttlbar = "menu_titlebar";
    v16 = "onclick=\"toggle_detail_help('%s'); parent.menu_title.location.href='timepro.cgi?tmenu=%s&smenu=%s&helpmenu=1'\"; >\n";
  }
  else
  {
    v16 = "onclick=\"toggle_detail('%s'); parent.menu_title.location.href='timepro.cgi?tmenu=%s&smenu=%s'\"; >\n";
    menu_ttlbar = "menu_titlebar";
  }
  printf(v16, &id, menu_ttlbar, &v19);
  printf("%s", a5);
  v17 = printf("</span></td>");
  return etr(v17);
}

int Sysinfo_view_1588C()
{
  printf("<style>");
  printf("#sysinfo_iframe tr { height: 23px; }");
  printf("#sysinfo_iframe td.title { border:1px solid #CCC; border-left-width: 0px; }");
  printf(".td_desc { padding: 0 10px 0px 10px; }");
  printf(".td_item { padding: 0 10px 0 10px; }");
  printf("tr.odd { background-color: #FFF; }");
  printf("tr.even { background-color: #F7F7F7; }");
  printf(".border_right { border-right: 1px solid #CCC; }");
  printf(".border_left { border-left-color: #CCC; border-left-width: 0px; border-left-style:solid; width:150px;}");
  return printf("</style>");
}



int __fastcall subtitle_1590C(int a1)
{
  int v1; // r4@1

  v1 = a1;
  puts("<tr><td class='title' colspan=10>");
  printf("<table width=100%% border=0 cellspacing=0 cellpadding=0>\n");
  puts("<tr class=\"even\"><td>");
  printf("<span style=\"padding-left:10px;\" class=\"subtitle_string\">%s</span></td></tr>\n", v1);
  puts("</table>");
  return puts("</td></tr>");
}



int menu_content_list_15964()
{
  Sysinfo_view_();
  set_lang_((int)"system", (int)"info");
  puts("<tr><td style=\"padding-left:0px; border-left: 1px solid #CCC;\">");
  puts("<table id=\"sysinfo_iframe\" class=menu_content_list_noline_table cellspacing=0px cellpadding=0px style=\"width:640px; border-bottom: 1px solid #CCC; overflow-y: hidden;\">");
  printf("</table>");
  puts("<iframe src=\"timepro.cgi?tmenu=iframe&smenu=system_info_status\" name=\"system_info_status\" style=\"display:none;\"></iframe>");
  return puts("</td></tr>");
}

int __fastcall getBodyElementby_159C0(int a1)
{
  puts("<table cellpadding=0px cellspacing=0px style=\"padding-left:0px;\">");
  menu_content_list_();
  printf("</table>");
  printf("<script>");
  printf("document.getElementsByTagName('body')[0].style.overflowX = 'hidden';");
  return printf("</script>");
}



int itemView_15A10()
{
  int v0; // r1@1
  int v1; // r0@1
  int v2; // r0@1
  const char *v3; // r4@1

  printf("<tr class='odd'>");
  v1 = pick_string_134F4(983, v0);
  v2 = printf("<td class='td_desc border_left'>%s</td>\n", v1);
  v3 = (const char *)get_firmware_version2(v2);
  puts("<td class='td_item border_right' colspan=3>");
  puts(v3);
  printf("</td>");
  return printf("</tr>");
}



void *__fastcall setDest_15CB8(const char *a1)
{
  const char *v1; // r4@1
  int src; // r1@1
  int dest; // r0@2
  const char *v4; // r0@7

  v1 = a1;
  if ( !strcmp(a1, "static") )
  {
    dest = 1055;
  LABEL_7:
    v4 = (const char *)pick_string_134F4(dest, src);
    strcpy((char *)&unk_984A0, v4);
    return &unk_984A0;
  }
  if ( !strcmp(v1, "dynamic") )
  {
    dest = 1043;
    goto LABEL_7;
  }
  if ( !strcmp(v1, "pppoe") )
  {
    dest = 1050;
    goto LABEL_7;
  }
  return &unk_984A0;
}



int __fastcall setistatus_15D38(const char *a1)
{
  const char *wan_setup_status; // r7@1
  int wan_link; // r8@1
  int pppoe_status; // r0@7
  const char *ppp; // r0@11
  char *v17; // r5@28
  int v18; // r1@28
  const char *v19; // r0@28
  int v20; // r4@28
  int v21; // r1@28
  const char *v22; // r0@29
  int v23; // r1@34
  int classbody; // r0@34
  const char *item_text; // r4@34
  int v26; // r1@34
  int v27; // r0@34
  void *v28; // r0@36
  int v29; // r1@36
  int v30; // r0@36
  char *v31; // r0@38
  int is_wan2; // r0@39
  const char *pppversion; // r1@39
  int v34; // r1@42
  int v35; // r0@42
  int v36; // r0@42
  unsigned int v37; // r0@43
  int v38; // r4@44
  char v40[512]; // [sp+4h] [bp-2ECh]@1
  char v41; // [sp+204h] [bp-ECh]@13
  char v42; // [sp+224h] [bp-CCh]@13
  char v43; // [sp+244h] [bp-ACh]@42
  char v44; // [sp+264h] [bp-8Ch]@42
  char v45; // [sp+284h] [bp-6Ch]@41
  char protocol; // [sp+298h] [bp-58h]@1
  char idle_time; // [sp+2A8h] [bp-48h]@1
  char wan_type; // [sp+2B8h] [bp-38h]@1
  char wan_hw_iframe; // [sp+2C8h] [bp-28h]@1

  wan_setup_status = a1;
  get_wan_hw_ifname(a1, &wan_hw_iframe);
  get_wan_type(wan_setup_status, &wan_type);
  get_wan_hw_ifname(wan_setup_status, &idle_time);
  get_wan_type(wan_setup_status, &protocol);
  strcpy(v40, "");
  wan_link = get_wan_link(wan_setup_status);
  
  LABEL_32:
    goto LABEL_33;
  }
  if ( !strcmp(&protocol, "pppoe") || !strcmp(&protocol, "pptp") )
  {
    if ( get_idle_timeout(&idle_time) || !get_wansetup_status(wan_setup_status) )
    {
      
      goto LABEL_22;
    }
    pppoe_status = get_pppoe_status(wan_setup_status);
    if ( !pppoe_status )
    {

  LABEL_33:
      goto LABEL_34;
    }
    if ( pppoe_status != 4 )
    {
      if ( pppoe_status != 6 )
        goto LABEL_34;
      goto LABEL_18;
    }
    if ( !strcmp(wan_setup_status, "wan2") )
      ppp = "ppp2";
    else
      ppp = "ppp1";
    get_ifconfig(ppp, &v42, &v41);
    if ( !v42 )
    {
      
  LABEL_22:
      goto LABEL_33;
    }
  LABEL_25:
    wan_link = 1;
    goto LABEL_34;
  }
  get_ifconfig(&idle_time, &v42, &v41);
  if ( v42 )
  {
    goto LABEL_25;
  }
  if ( !get_wansetup_status(wan_setup_status) )
  {
    goto LABEL_32;
  }
  v17 = &v40[strlen(v40)];
  v19 = (const char *)pick_string_134F4(1049, v18);
  v20 = sprintf(v17, v19);
  if ( istatus_get_intvalue_direct((int)"lanwan_samenetwork") == 1 )
  {
    v22 = (const char *)pick_string_134F4(1054, v21);
    sprintf(&v17[v20], v22, "JavaScript:MovePagetoMain('netconf','lansetup');");
    goto LABEL_34;
  }
  if ( istatus_get_intvalue_direct((int)"privateip") == 1 )
  {
    goto LABEL_32;
  }
  LABEL_34:
  printf("<tr class='%s'>", "odd");
  classbody = pick_string_134F4(1077, v23);
  item_text = "item_text";
  printf("<td class='td_desc border_left'>%s</td>\n", classbody);
  puts("<td class='td_item border_right' colspan=3 >");
  printf("%s", v40);
  puts("</td>");
  printf("</tr>");
  printf("<tr class='%s'>", "even");
  v27 = pick_string_134F4(1078, v26);
  printf("<td class='td_desc border_left'>%s</td>\n", v27);
  puts("<td class=td_item>");
  if ( !wan_link )
    item_text = "gray_text";
  v28 = setDest_(&wan_type);
  printf("<span class=%s>%s ", item_text, v28);
  printf("</span>");
  puts("</td>");
  v30 = pick_string_134F4(216, v29);
  printf("<td class=td_desc>%s</td>\n", v30);
  puts("<td class=\"td_item border_right\" style=\"width:162px;\">");
  if ( !strcmp(&wan_type, "pppoe") || !strcmp(&wan_type, "pptp") )
  {
    is_wan2 = strcmp(wan_setup_status, "wan2");
    pppversion = "ppp2";
    if ( is_wan2 )
      pppversion = "ppp1";
    sf_strncpy(&v45, pppversion, 20);
    v31 = &v45;
  }
  else
  {
    v31 = &wan_hw_iframe;
  }
  get_ifconfig(v31, &v44, &v43);
  printf("<span class=%s style='font-weight: bold;'>%s</span>");
  puts("</td>");
  printf("</tr>");
  printf("<tr class='%s'>", "odd");
  v35 = pick_string_134F4(391, v34);
  printf("<td class='td_desc border_left'>%s</td>\n", v35);
  v36 = puts("<td class='td_item border_right' colspan=3 class=td_item>");
  if ( wan_link )
  {
    v38 = get_system_running_time(v36);
    v37 = v38 - get_internet_connected_time(wan_setup_status);
  }
  else
  {
    v37 = 0;
  }
  sub_1205C(v37, (int)v40, 512);
  printf("<span class=%s>%s</span>");
  puts("</td>");
  return printf("</tr>");
}



int lan_setup_main_table_16D18()
{
  char *ipaddr; // r0@1
  int v1; // r1@1
  int v2; // r0@1
  int v3; // r1@1
  int v4; // r0@1
  int v5; // r4@2
  unsigned int v6; // r0@3
  unsigned int v7; // r0@3
  char *v8; // r0@3
  int v9; // r1@3
  int v10; // r0@3
  int v11; // r1@3
  int v12; // r0@3
  int v13; // r1@3
  int v14; // r0@3
  int v15; // r1@3
  int v16; // r0@3
  char v17; // r4@4
  int v18; // r1@4
  int v19; // r5@4
  int v20; // r1@4
  int v21; // r4@4
  int v22; // r1@4
  int v23; // r0@4
  int v24; // r1@4
  char *v25; // r5@4
  int v26; // r1@4
  int v27; // r0@4
  int v28; // r0@4
  int v29; // r1@4
  char *v30; // r4@5
  int v31; // r0@7
  int v32; // r0@7
  int v33; // r1@7
  int v34; // r0@9
  int v35; // r1@9
  int v36; // r0@9
  int v37; // r1@9
  const char *v38; // r0@9
  void *v39; // r4@9
  int v40; // r1@9
  int v41; // r0@9
  int v42; // r0@9
  int v43; // r0@10
  int v44; // r1@12
  int v45; // r0@12
  void *v46; // r4@12
  int v47; // r1@12
  int v48; // r0@12
  void *v49; // r4@12
  int v50; // r1@12
  int v51; // r0@12
  int v52; // r0@12
  int v53; // r0@13
  int v54; // r1@15
  int v55; // r0@15
  int v56; // r4@15
  int v57; // r1@16
  int v58; // r0@16
  int v59; // r1@18
  int v60; // r0@18
  void *v61; // r4@18
  int v62; // r1@18
  int v63; // r0@18
  int v64; // r0@18
  int v65; // r0@19
  int v66; // r0@19
  int v67; // r0@22
  void *v68; // r0@24
  int v70; // [sp+10h] [bp-478h]@9
  int v71; // [sp+A0h] [bp-3E8h]@9
  char v72; // [sp+3C8h] [bp-C0h]@3
  char v73; // [sp+3E8h] [bp-A0h]@3
  int v74; // [sp+408h] [bp-80h]@1
  int v75; // [sp+428h] [bp-60h]@1
  int mac_addr; // [sp+448h] [bp-40h]@1
  int v77; // [sp+45Ch] [bp-2Ch]@1
  struct in_addr inp; // [sp+470h] [bp-18h]@1
  struct in_addr v79; // [sp+474h] [bp-14h]@1

  puts("<form method=post action=\"timepro.cgi\" name=\"netconf_lansetup\" style=\"margin:0; padding:0;\">");
  puts("<input type=hidden name=\"tmenu\" value=\"netconf\">");
  puts("<input type=hidden name=\"smenu\" value=\"lansetup\">");
  puts("<input type=hidden name=\"act\" value=\"\">");
  puts("<input type=hidden name=\"reboot\" value=\"\">");
  printf("<table class=\"v3_table lansetup_main_table\" width=\"100%%; padding:0; margin:0;\">\n");
  printf("<COL width=\"125\"><COL width=\"75\"><COL width=\"442\">");
  printf("<tr class=\"lansetup_main_tr\"><td class=\"lansetup_main_td\" width=\"100%%\" colspan=\"3\">");
  printf("<table class=\"v3_table lansetup_main_table\" width=\"100%%\">\n");
  printf("<COL width=\"110\"><COL width=\"160\"><COL width=\"240\"><COL width=\"%%%%\">");
  get_wan_ifname("wan1", &v77);
  get_ifconfig(&v77, &v75, &v74);
  inet_aton((const char *)&v75, &v79);
  inet_aton((const char *)&v74, &inp);
  v79.s_addr &= inp.s_addr;
  ipaddr = inet_ntoa(v79);
  printf("<input type=hidden name=\"wan1subnet\" value=\"%s\">\n", ipaddr);
  v2 = pick_string_134F4(389, v1);
  printf(
    "<tr height=\"24\" class=\"lansetup_main_tr\" style=\"background-color:#%s;\">\t\t<td class=\"lansetup_main_td\" styl"
    "e=\"padding-left:5px;\">%s</td>",
    "FFFFFF",
    v2);
  get_ifconfig("br0", &v75, &v74);
  puts("<td class=\"lansetup_main_td\">");
  sub_11D7C((int)"ip", &v75, 1);
  printf("</td><td colspan=\"2\" class=\"lansetup_main_td\">");
  get_hwaddr_kernel((int)"br0", (int)&mac_addr);
  convert_mac(&mac_addr);
  printf("<span class=\"lansetup_main_p\">(%s)</span>", &mac_addr);
  puts("</td></tr>");
  v4 = pick_string_134F4(907, v3);
  printf(
    "<tr height=\"24\" class=\"lansetup_main_tr\" style=\"background-color:#%s;\">\t\t<td class=\"lansetup_main_td\" styl"
    "e=\"padding-left:5px;\">%s</td>",
    "F7F7F7",
    v4);
  puts("<td class=\"lansetup_main_td\">");
  sub_11D7C((int)"sm", &v74, 2);
  puts("</td><td colspan=\"2\" class=\"lansetup_main_td\"></td></tr>");
  if ( istatus_get_intvalue_direct((int)"lanwan_samenetwork") == 1 )
  {
    get_localbroadaddr("br0", &v73);
    v6 = inet_addr(&v73);
    v7 = ((v6 >> 24) | (v6 << 24) | ((v6 & 0xFF0000) >> 8) | ((unsigned __int16)(v6 & 0xFF00) << 8)) + 2;
    v8 = inet_ntoa((struct in_addr)((v7 >> 24) | (v7 << 24) | ((v7 & 0xFF0000) >> 8) | ((unsigned __int16)(v7 & 0xFF00) << 8)));
    strcpy(&v72, v8);
    printf((const char *)&unk_5C787, "FFFFFF");
    v10 = pick_string_134F4(443, v9);
    printf("<p>%s</p>", v10);
    v12 = pick_string_134F4(444, v11);
    printf("<p>%s</p>", v12);
    printf(
      "<p><input type=checkbox onclick=\"if(this.checked == true) SetIP('ip','%s'); else SetIP('ip','%s');\">",
      &v72,
      &v75);
    v14 = pick_string_134F4(442, v13);
    v5 = 3;
    printf("%s</p>", v14);
    v16 = pick_string_134F4(445, v15);
    printf("<p>%s</p>", v16);
    puts("</span></td></tr>");
  }
  else
  {
    v5 = 2;
  }
  printf("</table>");
  printf("</td></tr>");
  printf("<tr class=\"lansetup_main_tr\"><td class=\"lansetup_main_td\" width=\"100%%\" colspan=\"3\">");
  v17 = sub_16638(v5);
  printf("</td></tr>");
  printf((const char *)&unk_5C8A8);
  v19 = pick_string_134F4(438, v18);
  v21 = pick_string_134F4(439, v20);
  v23 = pick_string_134F4(440, v22);
  v24 = v19;
  v25 = "checked";
  printf(
    "<span class=\"lansetup_main_p\">\t\t%s <a href=\"javascript:MovePagetoMainURL('sysconf', 'misc', 'service=hubapmode'"
    ");\" style=\"color:#0000FF;\"><u>%s</u></a> %s\t\t</span>",
    v24,
    v21,
    v23);
  printf("</td></tr>");
  v27 = pick_string_134F4(642, v26);
  printf(
    "<tr height=\"26\" class=\"lansetup_main_tr\" style=\"background-color:#%s;\">\t\t<td class=\"lansetup_main_td\" styl"
    "e=\"padding-left:5px;\"><span class=\"lansetup_main_span\"><b>%s</b></span></td>",
    "DBDBDB",
    v27);
  printf("<td class=\"lansetup_main_td\" colspan=2 align=\"right\">");
  v28 = printf("<span class=\"lansetup_main_span\">");
  if ( get_ipmac_bind(v28) & 1 )
    v30 = "checked";
  else
    v30 = "";
  v31 = pick_string_134F4(513, v29);
  printf(
    "<input type=\"checkbox\" name=\"mac_restrict\" onclick=\"onclick_macristrict();\" id=\"mrestid\" %s>\t\t<label for=\""
    "mrestid\">%s</label>",
    v30,
    v31);
  v32 = printf("</span><span class=\"lansetup_main_span\" style=\"padding-right:17px;\">");
  if ( !get_dhcp_access_policy(v32) )
    v25 = "";
  v34 = pick_string_134F4(648, v33);
  printf(
    "<input type=\"checkbox\" class=\"navi_chk\" id=\"dhcppol\" name=\"dhcp_access_policy\" onclick=\"ApplyPartSubmit('dh"
    "cp_access_policy');\" %s>\t\t<label for=\"dhcppol\">%s</label>",
    v25,
    v34);
  printf("</span>");
  printf("</td></tr>");
  v36 = pick_string_134F4(649, v35);
  printf(
    "<tr height=\"24\" class=\"lansetup_main_tr\" style=\"background-color:#%s; border-bottom:1px #ccc solid; border-top:"
    "1px #ccc solid;\">\t\t<td class=\"lansetup_main_td\" colspan=2 style=\"padding-left:5px;\"><span class=\"lansetup_main_span\">%s",
    "EEEEEE",
    v36);
  dhcpd_read_config(&v70);
  v38 = (const char *)pick_string_134F4(463, v37);
  printf(v38, v71);
  printf("</span></td>");
  printf("<td class=\"lansetup_main_td\" align=\"right\" style=\"padding-right:17px;\">");
  printf("<span class=\"lansetup_main_span\" style=\"margin-right:10px;\" onclick=\"RemoveStaticLease();\">");
  v39 = sub_126C4();
  v41 = pick_string_134F4(118, v40);
  printf(
    "<img src=\"/%s/minus_icon.gif\" class=\"lansetup_main_span\" style=\"width:10px; height:10px;\">\t\t<span class=\"la"
    "nsetup_main_span\">%s</span>",
    v39,
    v41);
  printf("</span>");
  printf("<span class=\"lansetup_main_span\">");
  puts("<input type=\"checkbox\" name=\"del_allchk\" onclick=\"CheckAllCheckBox(static_lease.document, this, 'dellease');\">");
  printf("</span>");
  printf("</td></tr>");
  v42 = printf("<tr class=\"lansetup_main_tr\" height=\"120\"><td class=\"lansetup_main_td\" colspan=\"3\">");
  if ( is_mobile_agent(v42) )
  {
    sub_12790((int)"120", (int)"100%%", (int)"display:inline-block; *display:inline; zoom:1;");
    v43 = printf("<iframe name=\"static_lease\" src=\"timepro.cgi?tmenu=iframe&smenu=static_lease\"                         frameborder=no width=100%% height=120 align=center scrolling=yes></iframe>");
    sub_12770(v43);
  }
  else
  {
    printf("<iframe name=\"static_lease\" src=\"timepro.cgi?tmenu=iframe&smenu=static_lease\"                         frameborder=no width=100%% height=120 align=center scrolling=yes></iframe>");
  }
  printf("</td></tr>");
  v45 = pick_string_134F4(650, v44);
  printf(
    "<tr height=\"24\" class=\"lansetup_main_tr\" style=\"background-color:#%s; border-bottom:1px #ccc solid; border-top:"
    "1px #ccc solid;\">\t\t<td class=\"lansetup_main_td\" style=\"padding-left:5px;\"><span class=\"lansetup_main_span\">%s</span></td>",
    "EEEEEE",
    v45);
  printf("<td class=\"lansetup_main_td\" colspan=2 align=\"right\" style=\"padding-right:17px;\">");
  printf("<span class=\"lansetup_main_span\" style=\"margin-right:10px;\" onclick=\"onclick_research_span();\">");
  v46 = sub_126C4();
  v48 = pick_string_134F4(465, v47);
  printf((const char *)&unk_5D17C, v46, v48);
  printf("</span>");
  printf("<span class=\"lansetup_main_span\" style=\"margin-right:10px;\" onclick=\"AddStaticLease();\">");
  v49 = sub_126C4();
  v51 = pick_string_134F4(435, v50);
  printf(
    "<img src=\"/%s/plus_icon.gif\" class=\"lansetup_main_span\" style=\"width:10px; height:10px;\">\t\t<span class=\"lan"
    "setup_main_span\">%s</span>",
    v49,
    v51);
  printf("</span>");
  printf("<span class=\"lansetup_main_span\">");
  puts("<input type=\"checkbox\" name=\"add_allchk\" onclick=\"CheckAllCheckBox(lan_pcinfo.document, this, 'addlease');\">");
  printf("</span>");
  printf("</td></tr>");
  v52 = printf("<tr class=\"lansetup_main_tr\" height=\"120\"><td class=\"lansetup_main_td\" colspan=\"3\">");
  if ( is_mobile_agent(v52) )
  {
    sub_12790((int)"120", (int)"100%%", (int)"display:inline-block; *display:inline; zoom:1;");
    v53 = printf("<iframe name=\"lan_pcinfo\" src=\"timepro.cgi?tmenu=iframe&smenu=lan_pcinfo\"                         frameborder=no width=100%% height=120 align=center scrolling=yes></iframe>");
    sub_12770(v53);
  }
  else
  {
    printf("<iframe name=\"lan_pcinfo\" src=\"timepro.cgi?tmenu=iframe&smenu=lan_pcinfo\"                         frameborder=no width=100%% height=120 align=center scrolling=yes></iframe>");
  }
  printf("</td></tr>");
  v55 = pick_string_134F4(466, v54);
  v56 = 0;
  printf(
    "<tr height=\"24\" class=\"lansetup_main_tr\" style=\"background-color:#%s; border-bottom:1px #ccc solid; border-top:"
    "1px #ccc solid;\">\t\t<td class=\"lansetup_main_td\" style=\"padding-left:5px;\" colspan=\"3\"><span class=\"lansetu"
    "p_main_span\">%s</span>",
    "EEEEEE",
    v55);
  printf("<span class=\"lansetup_main_span\" style=\"padding-left:15px;\">");
  sub_11D7C((int)"manual_ip", 0, 3);
  printf("</span>");
  printf("<span class=\"lansetup_main_span\" style=\"padding-left:10px;\">");
  while ( 1 )
  {
    ++v56;
    printf(
      "<input type=text name='%s%d' size=2 maxlength=2 style=\"width:18pt; ime-mode: disabled;\" onfocus='this.select();'"
      " onkeypress=\"return HWKeyDown('%s',%d);\" onkeyup=\"HWKeyUp('%s',%d);\"",
      "manual_hw",
      v56,
      "manual_hw",
      v56,
      "manual_hw",
      v56);
    v58 = pick_string_134F4(512, v57);
    printf("title=\"%s%d\"", v58, v56);
    putchar(62);
    if ( v56 == 6 )
      break;
    putchar(45);
  }
  printf("</span>");
  printf("<span class=\"lansetup_main_span\" style=\"padding-left:10px;\">");
  v60 = pick_string_134F4(436, v59);
  printf("<input type=\"text\" name=\"desc\" maxlength=\"20\" style=\"width:120px;\" placeholder=\"%s\">", v60);
  printf("</span>");
  printf("<span class=\"lansetup_main_span\" style=\"padding-left:15px;\" onclick=\"AddManualStaticLease();\">");
  v61 = sub_126C4();
  v63 = pick_string_134F4(467, v62);
  printf(
    "<img src=\"/%s/plus_icon.gif\" class=\"lansetup_main_span\" style=\"width:10px; height:10px;\">\t\t<span class=\"lan"
    "setup_main_span\">%s</span>",
    v61,
    v63);
  printf("</span>");
  printf("</td></tr>");
  printf("</table>");
  printf("</form>");
  printf("<form method=\"post\" name=\"backup_lansetup\" style=\"padding:0; margin:0;\">");
  v64 = printf("</form>");
  if ( is_mobile_agent(v64) )
  {
    sub_12790((int)"0", (int)"0", (int)"display:inline-block; *display:inline; zoom:1;");
    v65 = printf("<iframe name=\"hiddenlansetup_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hiddenlansetup\"                         frameborder=no width=0 height=0 align=center scrolling=no></iframe>");
    v66 = sub_12770(v65);
  }
  else
  {
    v66 = printf("<iframe name=\"hiddenlansetup_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hiddenlansetup\"                         frameborder=no width=0 height=0 align=center scrolling=no></iframe>");
  }
  if ( is_mobile_agent(v66) )
  {
    sub_12790((int)"0", (int)"0", (int)"display:inline-block; *display:inline; zoom:1;");
    v67 = printf("<iframe name=\"hiddenlanstatus_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hiddenlanstatus\"                         frameborder=no width=0 height=0 align=center scrolling=no></iframe>");
    sub_12770(v67);
  }
  else
  {
    printf("<iframe name=\"hiddenlanstatus_iframe\" src=\"timepro.cgi?tmenu=iframe&smenu=hiddenlanstatus\"                         frameborder=no width=0 height=0 align=center scrolling=no></iframe>");
  }
  puts("<script language=JavaScript>");
  puts("init_netconf_lansetup();");
  puts("</script>");
  printf("<DIV id=\"%s\" style=\"display:none;\">", "apply_mask");
  puts("<DIV style=\"position:absolute; left:0px; top:0px; width:642px; height:536px; z-index:10; background-color:#ffffff;                 opacity:0.5; -moz-opacity:0.5; -khtml-opacity:0.5; -webkit-opacity:0.5; filter:alpha(opacity=50);\">");
  printf("</DIV>");
  puts("<DIV style=\"position:absolute; left:231px; top:198px; width:180px; height:70px; z-index:100; background-color:#ffffff;                 opacity:1; -moz-opacity:1; -khtml-opacity:1; -webkit-opacity:1; filter:alpha(opacity=100); border:1px #CCC solid;                 box-shadow:5px 5px 20px #888888;\">");
  puts("<table width=\"180\" height=\"70\">");
  printf("<tr><td width=\"20%%\" height=\"100%%\" align=\"center\" valign=\"middle\">\n");
  puts("<SPAN style=\"vertical-align:middle; display:block; text-align:center;\">");
  v68 = sub_126C4();
  printf(
    "<img src=\"/%s/apply_ani.gif\" style=\"display:inline-block; *display:inline; zoom:1; vertical-align:middle;\">",
    v68);
  printf("</SPAN></td>");
  printf("<td width=\"80%%\" height=\"100%%\" align=\"center\" valign=\"middle\">                <SPAN style=\"vertical-align:middle; display:block; text-align:center;\" id=\"lansetup_div_msg\">\n");
  printf("</SPAN></td>");
  printf("</tr></table></DIV>");
  printf("</DIV>");
  printf("<DIV id=\"%s\" style=\"display:none;\">", "info_mask");
  puts("<DIV style=\"position:absolute; left:0px; top:0px; width:642px; height:536px; z-index:10; background-color:#ffffff;                 opacity:0.5; -moz-opacity:0.5; -khtml-opacity:0.5; -webkit-opacity:0.5; filter:alpha(opacity=50);\">");
  printf("</DIV>");
  puts("<DIV style=\"position:absolute; left:151px; top:198px; width:340px; height:70px; z-index:100; background-color:#ffffff;                 opacity:1; -moz-opacity:1; -khtml-opacity:1; -webkit-opacity:1; filter:alpha(opacity=100); border:1px #CCC solid;                 box-shadow:5px 5px 20px #888888;\">");
  puts("<table width=\"340\" height=\"70\">");
  printf("<tr height=\"35\"><td width=\"1%%\" height=\"35\" align=\"center\" valign=\"middle\">\n");
  puts("<SPAN style=\"vertical-align:middle; display:block; text-align:center;\">");
  printf("</SPAN></td>");
  printf("<td width=\"99%%\" height=\"35\" align=\"center\" valign=\"middle\">                <SPAN style=\"vertical-align:middle; display:block; text-align:center;\" id=\"lansetup_div_info1\">\n");
  printf("</SPAN></td>");
  printf("</tr>");
  printf("<tr height=\"35\"><td width=\"1%%\" height=\"35\" align=\"center\" valign=\"middle\">\n");
  puts("<SPAN style=\"vertical-align:middle; display:block; text-align:center;\">");
  printf("</SPAN></td>");
  printf("<td width=\"99%%\" height=\"35\" align=\"center\" valign=\"middle\">                <SPAN style=\"vertical-align:middle; display:block; text-align:center;\" id=\"lansetup_div_info2\">\n");
  printf("</SPAN></td>");
  printf("</tr>");
  printf("</table></DIV>");
  return printf("</DIV>");
}



int __fastcall getfile_133E4(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1
  const char *v4; // r2@2
  int v6; // [sp+0h] [bp-68h]@5
  int v7; // [sp+4h] [bp-64h]@0
  char v8; // [sp+8h] [bp-60h]@7
  char v9; // [sp+48h] [bp-20h]@1

  v2 = a2;
  v3 = a1;
  get_ux_lang((int)&v9);
  if ( v2 )
    v4 = "/home/httpd/js/%s/%s_%s.lang.js";
  else
    v4 = "/home/httpd/js/%s/%s.js";
  if ( v2 )
  {
    v6 = v3;
    v7 = v2;
  }
  else
  {
    v6 = v3;
  }
  snprintf2((int)&v8, 64, v4, &v9, v6, v7);
  print_file((int)&v8);
  if ( v2 )
    snprintf2((int)&v8, 64, "/home/httpd/js/%s_%s.js", v3, v2);
  else
    snprintf2((int)&v8, 64, "/home/httpd/js/%s.js", v3);
  return print_file((int)&v8);
}

int lansetup_with_file_176E0()
{
  sub_1644C();
  sub_133E4((int)"netconf", (int)"lansetup");
  return sub_16D18();
}



int __fastcall re_get_1781C(int a1)
{
  int v1; // r6@1
  int result; // r0@1
  int v3; // r10@3
  signed int v4; // r5@9
  signed int v5; // r7@12
  int v6; // r0@14
  signed int v7; // r3@20
  int v8; // r0@28
  signed int v9; // r4@30
  int v10; // r0@31
  int v11; // r4@32
  int v12; // r0@33
  int v13; // r0@33
  int v14; // r7@42
  int v15; // r5@42
  int v16; // r5@44
  int v17; // r0@46
  signed int v18; // r0@47
  int v19; // r0@49
  int v20; // r0@51
  int v21; // r4@53
  int v22; // r0@56
  int v23; // [sp+0h] [bp-488h]@6
  int v24; // [sp+10h] [bp-478h]@8
  int v25; // [sp+24h] [bp-464h]@8
  char v26; // [sp+38h] [bp-450h]@8
  int v27; // [sp+4Ch] [bp-43Ch]@8
  int v28; // [sp+60h] [bp-428h]@8
  char v29; // [sp+74h] [bp-414h]@26
  char v30; // [sp+8Ch] [bp-3FCh]@26
  char v31; // [sp+94h] [bp-3F4h]@22
  int v32; // [sp+3B4h] [bp-D4h]@22
  char v33; // [sp+3B8h] [bp-D0h]@43
  char s1; // [sp+3D8h] [bp-B0h]@1
  char v35; // [sp+3F8h] [bp-90h]@2
  int v36; // [sp+418h] [bp-70h]@8
  int v37; // [sp+42Ch] [bp-5Ch]@8
  char v38; // [sp+440h] [bp-48h]@7
  int v39; // [sp+454h] [bp-34h]@6

  v1 = a1;
  result = get_value_post(a1, (int)"act", (int)&s1, 32);
  if ( !result )
    return result;
  if ( get_value_post(v1, (int)"reboot", (int)&v35, 32) )
    v3 = strcmp(&v35, "reboot") == 0;
  else
    v3 = 0;
  if ( !strcmp(&s1, "submit") )
  {
    dhcpd_read_config(&v23);
    strcpy((char *)&v39, "");
    if ( get_ip_value_post(v1, "ip", &v39) && get_ip_value_post(v1, "sm", &v38) )
    {
      set_use_local_gateway(0);
      set_lan_ipconfig(&v39, &v38, 0);
      sf_strncpy(&v26, &v39, 20);
      sf_strncpy(&v27, &v38, 20);
      get_subnet_range(&v39, &v38, &v24, &v25);
      get_ifconfig("br0", &v37, &v36);
      if ( !strcmp((const char *)&v28, (const char *)&v37) )
      {
        v4 = 1;
        sf_strncpy(&v28, &v39, 20);
      }
      else
      {
        v4 = 1;
      }
    }
    else
    {
      v4 = 0;
    }
    v5 = v4;
    if ( get_value_post(v1, (int)"dhcp_enable", (int)&v35, 32) && !strcmp(&v35, "on") )
    {
      v6 = dhcpd_set_op(1);
      dhcpd_stop(v6);
      if ( get_value_post(v1, (int)"miprange", (int)&v35, 32) && !strcmp(&v35, "on") )
      {
        if ( get_ip_value_post(v1, "spool_conf", &v35) )
          sf_strncpy(&v24, &v35, 20);
        if ( get_ip_value_post(v1, "epool_conf", &v35) )
          sf_strncpy(&v25, &v35, 20);
        v7 = 1;
      }
      else
      {
        v7 = 0;
      }
      v32 = v7;
      if ( !get_value_post(v1, (int)"domain", (int)&v31, 32) )
        strcpy(&v31, "");
      if ( check_unpermitted_chars(&v31) )
        strcpy(&v31, "");
      get_intvalue_post(v1, "leasetime", &v30);
      get_domain_name_server(&v28, &v29);
      set_autodns(1);
      v8 = get_value_post(v1, (int)"dhcp_auto_detect", (int)&v35, 32) && !strcmp(&v35, "on");
      set_dhcp_auto_detect(v8);
      syslog_msg(1, "@{43}");
      v9 = 1;
    }
    else
    {
      v10 = get_value_post(v1, (int)"dhcp_enable", (int)&v35, 32);
      if ( v10 )
      {
        v10 = strcmp(&v35, "off");
        v11 = v10;
        if ( !v10 )
        {
          dhcpd_set_op(0);
          set_dhcp_auto_detect(v11);
          set_dhcp_access_policy(v11);
          v12 = syslog_msg(2, "@{44}");
          v13 = check_twinip_enable(v12);
          if ( v13 )
            v13 = dhcpd_start(v13);
          v10 = dhcpd_stop(v13);
          v5 = 1;
        }
      }
      v9 = 0;
      if ( !v4 )
      {
  LABEL_37:
        if ( v5 )
          v10 = dhcpd_flush_dynamic_lease(v10);
        if ( v9 )
          v10 = dhcpd_start(v10);
        if ( v3 )
        {
          v14 = hwinfo_get_reboot_duration(v10);
          v10 = check_remote_connection();
          v15 = v10;
          if ( !v10 )
          {
            get_ip_value_post(v1, "ip", &v39);
            v10 = sf_strncpy(&v33, &v39, 32);
          }
          v21 = v14 + 30;
          goto LABEL_54;
        }
        goto LABEL_55;
      }
    }
    v10 = dhcpd_commit_config(&v23);
    goto LABEL_37;
  }
  v10 = strcmp(&s1, "part");
  v16 = v10;
  if ( !v10 )
  {
    if ( get_value_post(v1, (int)"dhcp_access_policy", (int)&v35, 32) )
    {
      v17 = dhcpd_set_op(1);
      dhcpd_stop(v17);
      if ( !strcmp(&v35, "on") )
        v18 = 1;
      else
        v18 = v16;
      v19 = set_dhcp_access_policy(v18);
      dhcpd_start(v19);
    }
    v10 = get_value_post(v1, (int)"mac_restrict", (int)&v35, 32);
    if ( v10 )
    {
      v20 = strcmp(&v35, "on") == 0;
      v10 = set_ipmac_bind();
    }
  }
  if ( v3 )
  {
    v15 = 0;
    v21 = 0;
  LABEL_54:
    v10 = saveconf(v10);
    goto LABEL_56;
  }
  LABEL_55:
  v15 = 0;
  v21 = 0;
  LABEL_56:
  v22 = signal_update(v10);
  result = signal_save(v22);
  if ( v3 )
  {
    printf("<script>");
    if ( !v15 )
      printf("document.refreshURL = '%s';\n", &v33);
    printf("document.rebootDuration = %d;", v21);
    printf("</script>");
    result = signal_reboot(3);
  }
  return result;
}



int __fastcall network_config(int a1, int a2, const char *click_menu)  //10FF4
{
  int v3; // r5@1
  int v4; // r6@1
  const char *menu; // r4@1
  int result; // r0@5

  v3 = a1;
  v4 = a2;
  menu = click_menu;
  if ( !strcmp(menu, "manual_config_wizard") )  //인터넷 연결 설정(Manual network config)
    sub_3EB20(v3);
  if ( !strcmp(menu, "pf_restore") )
    sub_26808(v3, v4);
  result = strcmp(menu, "fw_restore");
  if ( !result )
    result = *w_set_tmp_file(v3, v4);
  return result;
}



int __fastcall Manual_network_config(int a1) //3EB20
{
  char *v1; // r7@1
  int v2; // r6@1
  int result; // r0@1
  char *v4; // r5@6
  int v5; // r1@12
  char *v6; // r0@13
  int v7; // r0@28
  int v8; // [sp+0h] [bp-210h]@17
  char v9; // [sp+80h] [bp-190h]@17
  char v10; // [sp+13Ch] [bp-D4h]@3
  char wan_type; // [sp+17Ch] [bp-94h]@1
  char s_sub_dns; // [sp+19Ch] [bp-74h]@19
  char s_main_dns; // [sp+1B0h] [bp-60h]@19
  char s_gateway; // [sp+1C4h] [bp-4Ch]@6
  char s_subnet_mask; // [sp+1D8h] [bp-38h]@6
  char s_ip; // [sp+1ECh] [bp-24h]@10
  char v17; // [sp+200h] [bp-10h]@1
  char interface; // [sp+210h] [bp+0h]@1
  char dest; // [sp+220h] [bp+10h]@12

  v1 = &interface;
  v2 = a1;
  get_value(a1, (int)"ifname", (int)&interface, 16);
  eth2wan(&interface, &v17);
  result = get_value(v2, (int)"wan_type", (int)&wan_type, 32);
  if ( result )
  {
    if ( strcmp(&wan_type, "dynamic") )
    {
      if ( !strcmp(&wan_type, "pppoe") )
      {
        read_pppoe_option(&v17, &v8);
        get_value(v2, (int)"userid", (int)&v8, 128);
        get_value(v2, (int)"passwd", (int)&v9, 128);
        save_pppoe_option(&v17, &v8);
      }
      else if ( !strcmp(&wan_type, "static") )
      {
        get_value(v2, (int)"ip", (int)&s_ip, 20);
        get_value(v2, (int)"sm", (int)&s_subnet_mask, 20);
        get_value(v2, (int)"gw", (int)&s_gateway, 20);
        get_value(v2, (int)"fdns", (int)&s_main_dns, 20);
        get_value(v2, (int)"sdns", (int)&s_sub_dns, 20);
        set_wan_ipconfig(&interface, &s_ip, &s_subnet_mask, &s_gateway);
        set_ifconfig(&interface, &s_ip, &s_subnet_mask);
        if ( check_default_gateway(&s_gateway, &s_ip, &s_subnet_mask) )
        {
          set_default_gateway("br0", 0);
          set_default_gateway(&interface, 0);
        }
        else
        {
          set_default_gateway("br0", 0);
          if ( set_default_gateway(&interface, &s_gateway) )
            set_default_gateway2(&interface, &s_ip, &s_subnet_mask, &s_gateway);
        }
        if ( inet_addr(&s_main_dns) == -1 )
          strs_main_dnsy(&s_main_dns, "");
        if ( inet_addr(&s_sub_dns) == -1 )
          strs_main_dnsy(&s_sub_dns, "");
        dhs_main_dnsd_set_dns(&s_main_dns, &s_sub_dns);
        set_domain_name_server();
        set_dns_shadow(&interface, &wan_type, &s_main_dns, &s_sub_dns);
      }
      goto LABEL_28;
    }
    if ( !get_value(v2, (int)"hw_conf", (int)&v10, 64) )
    {
  LABEL_28:
      set_wan_type(&v17, &wan_type);
      pppoe_stop(&v17);
      v7 = dhclient_stop(&v17);
      return signal_update(v7);
    }
    if ( !strcmp(&v10, "auto") || !strcmp(&v10, "manual") )
    {
      v1 = &interface;
      v4 = &s_gateway;
      get_hwaddr_kernel((int)&interface, (int)&s_subnet_mask);
      get_value(v2, (int)"hw_addr", (int)&s_gateway, 20);
      if ( strcmp(&s_gateway, &s_subnet_mask) && !check_invalid_hwaddr(&s_gateway) )
      {
  LABEL_11:
        set_hwaddr_kernel(p_gw, v4, 1);
        set_hwaddr_cloned(v1, v4);
        goto LABEL_12;
      }
    }
    else if ( !strcmp(&v10, "noclone") )
    {
      v4 = &s_ip;
      get_hwaddr_org(&interface, &s_ip);
      get_hwaddr_kernel((int)&interface, (int)&s_subnet_mask);
      if ( strcmp(&s_ip, &s_subnet_mask) )
        goto LABEL_11;
    }
  LABEL_12:
    strs_main_dnsy(&dest, "");
    get_value(v2, (int)"private", (int)&dest, 8);
    v5 = strcmp(&dest, "on");
    if ( v5 )
    {
      v6 = &interface;
      v5 = 1;
    }
    else
    {
      v6 = &interface;
    }
    set_dhclient_block_private_ip(v6, v5);
    goto LABEL_28;
  }
  return result;
}

int __fastcall saveconfig(int a1, const char *a2, int a3) //sub_10B30
{
  const char *v3; // r6@1
  int v4; // r4@1
  int v5; // r7@1
  const char *v6; // r0@1
  int str_len; // r4@3
  int chk_5G_conf; // r0@3
  int v9; // r1@5
  int v10; // r0@5
  int wan_type; // r0@5
  int result; // r0@5
  int (__fastcall *v13)(int); // r5@6
  char str[512]; // [sp+8h] [bp-2D8h]@3
  char s_subnet_mask; // [sp+208h] [bp-D8h]@6
  char secondMenu; // [sp+288h] [bp-58h]@3
  char firstMenu; // [sp+2A8h] [bp-38h]@3

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = (const char *)get_pvalue(a1, (int)"saveconfig");
  if ( v6 && !strcmp(v6, "1") )
  {
    strs_main_dnsy(&firstMenu, "");
    strs_main_dnsy(&secondMenu, "");
    get_value(v5, "tmenu", &firstMenu, 32);
    get_value(v5, "smenu", &secondMenu, 32);
    str_len = snprintf2(str, 512, "timepro.cgi?tmenu=%s&smenu=%s&savesave=1", &firstMenu, &secondMenu);
    chk_5G_conf = strcmp(v3, "wirelessconf5g");
    if ( !chk_5G_conf )
      chk_5G_conf = snprintf2(&str[str_len], 512, "&wl_mode=1");
    print_start_main_table(chk_5G_conf);
    v10 = pick_string_134F4(873, v9);
    wan_type = print_html_apply_wait(v10, 2, str);
    result = print_end_main_table(wan_type);
  }
  else
  {
    snprintf2(&s_subnet_mask, 128, "%s_%s", v3, v4);
    v13 = (int (__fastcall *)(int))sub_14C98(v3, v4);
    result = sub_115F0(v3, v4);
    if ( !result && v13 )
      result = v13(v5);
  }
  return result;
}

int __fastcall sysconf_syslog_log_clear_22810(int a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1

  v2 = sub_226A0(a2);
  puts("<form method=post action=timepro.cgi name=syslog_fm>");
  puts("<input type=hidden name=tmenu value=iframe>");
  puts("<input type=hidden name=smenu value=sysconf_syslog_log_clear>");
  puts("<input type=hidden name=act value='remove'>");
  result = printf("</form>");
  if ( v2 )
  {
    /*printf("<script>");
    printf((const char *)&unk_69E05); "parent.document.getElementsByName('sysconf_syslog_log')[0].contentWindow.location.reload();"
    printf((const char *)&unk_69E61); "setTimeout(function() { UnMaskIt(Parent.document,'apply_mask');},500);"
    result = printf("</script>");*/
    <script>
      parent.document.getElementsByName('sysconf_syslog_log')[0].contentWindow.location.reload();
      setTimeout(function(),500);
      function()
      { 
        UnMaskIt(Parent.document,'apply_mask');
      }
    </script>
  }
  return result;
}



void *__fastcall view_time(int a1, int a2)
{
  int v2; // r5@1
  char *v3; // r0@1
  int v4; // r1@1
  signed int v5; // r0@3
  const char *v6; // r2@3
  int v7; // r3@3
  int v8; // r12@3
  int v9; // r1@5
  int v10; // r0@5
  int v11; // r1@5
  int v12; // r11@5
  int v13; // r1@5
  int v14; // r1@5
  int v15; // r9@5
  int v16; // r0@6
  int v17; // r10@8
  int v18; // r1@8
  int v19; // r8@8
  int v20; // r0@8
  int v21; // r6@8
  int v22; // r7@8
  int v23; // r1@8
  int v24; // r0@8
  int v25; // r4@8
  int v26; // r5@8
  int v27; // r1@8
  int v28; // r0@8
  int v29; // r3@8
  const char *v30; // r2@8
  int v31; // ST50_4@9
  signed int v32; // ST54_4@9
  int v33; // r1@9
  int v34; // r0@9
  int v35; // ST60_4@9
  int v36; // ST58_4@9
  int v37; // r1@9
  int v38; // r11@9
  int v39; // r9@9
  int v40; // r1@9
  int v41; // r0@9
  int v42; // r8@9
  int v43; // r10@9
  int v44; // r1@9
  int v45; // r0@9
  int v46; // r6@9
  int v47; // r7@9
  int v48; // r1@9
  int v49; // r0@9
  int v50; // r4@9
  int v51; // r5@9
  int v52; // r1@9
  int v53; // r0@9
  int v54; // r1@15
  int v55; // r0@16
  int v56; // r8@16
  int v57; // r11@16
  int v58; // r0@16
  int v59; // r1@16
  int v60; // r4@16
  int v61; // r9@16
  int v62; // r10@16
  int v63; // r7@16
  int v64; // r0@17
  int v65; // r5@19
  int v66; // r1@19
  int v67; // r3@19
  const char *v68; // r2@19
  int v69; // r0@20
  int v70; // r8@20
  int v71; // r11@20
  int v72; // r0@20
  int v73; // r1@20
  int v74; // r4@20
  int v75; // r7@20
  int v76; // r0@21
  int v77; // r0@26
  int v78; // r5@26
  int v79; // r4@26
  int v80; // r0@26
  int v81; // r0@27
  int v82; // r4@27
  int v84; // [sp+0h] [bp-140h]@8
  signed int v85; // [sp+0h] [bp-140h]@13
  int v86; // [sp+0h] [bp-140h]@19
  signed int v87; // [sp+4h] [bp-13Ch]@8
  int v88; // [sp+4h] [bp-13Ch]@13
  int v89; // [sp+4h] [bp-13Ch]@19
  int v90; // [sp+8h] [bp-138h]@8
  int v91; // [sp+8h] [bp-138h]@13
  int v92; // [sp+8h] [bp-138h]@19
  int v93; // [sp+Ch] [bp-134h]@8
  int v94; // [sp+Ch] [bp-134h]@13
  int v95; // [sp+10h] [bp-130h]@8
  int v96; // [sp+10h] [bp-130h]@13
  int v97; // [sp+14h] [bp-12Ch]@0
  int v98; // [sp+14h] [bp-12Ch]@8
  int v99; // [sp+18h] [bp-128h]@8
  int v100; // [sp+1Ch] [bp-124h]@8
  int v101; // [sp+20h] [bp-120h]@8
  int v102; // [sp+24h] [bp-11Ch]@8
  int v103; // [sp+28h] [bp-118h]@8
  int v104; // [sp+2Ch] [bp-114h]@8
  int v105; // [sp+30h] [bp-110h]@8
  int v106; // [sp+34h] [bp-10Ch]@0
  int v107; // [sp+3Ch] [bp-104h]@4
  int v108; // [sp+40h] [bp-100h]@5
  signed int v109; // [sp+44h] [bp-FCh]@5
  int v110; // [sp+48h] [bp-F8h]@5
  int v111; // [sp+4Ch] [bp-F4h]@5
  int v112; // [sp+5Ch] [bp-E4h]@5
  int v113; // [sp+64h] [bp-DCh]@1
  char v114; // [sp+6Fh] [bp-D1h]@1
  char v115; // [sp+EFh] [bp-51h]@1
  char v116; // [sp+F7h] [bp-49h]@1
  char v117; // [sp+FFh] [bp-41h]@1
  int v118; // [sp+104h] [bp-3Ch]@1
  int v119; // [sp+108h] [bp-38h]@1
  int v120; // [sp+10Ch] [bp-34h]@1
  int v121; // [sp+110h] [bp-30h]@1
  int v122; // [sp+114h] [bp-2Ch]@1

  v113 = a1;
  v2 = a2;
  v3 = ctime((const time_t *)&v113);
  snprintf2(&v114, 128, "%s", v3);
  sscanf(&v114, "%s %s %d %d:%d:%d %d", &v116, &v115, &v121, &v120, &v119, &v118, &v122);
  get_ux_lang((int)&v117);
  if ( !strcmp(&v117, "kr") )
  {
    if ( v2 == 1 )
    {
      v5 = set_month(&v115);
      v6 = "%4d-%02d-%02d %02d:%02d:%02d";
      v7 = v122;
      v8 = v121;
  LABEL_13:
      v88 = v8;
      v91 = v120;
      v94 = v119;
      v96 = v118;
      v85 = v5;
  LABEL_29:
      snprintf2(&unk_9792C, 128, v6, v7, v85, v88, v91, v94, v96, v97);
      return &unk_9792C;
    }
    v107 = v122;
    if ( v2 == 2 )
    {
      v108 = ret_set_day(29, v4);
      v109 = set_month(&v115);
      v10 = ret_set_day(13, v9);
      v112 = v121;
      v110 = v10;
      v111 = ret_set_day(2, v11);
      v12 = sub_129D0(&v116);
      v15 = ret_set_day(27, v13);
      if ( v120 <= 11 )
        v16 = 24;
      else
        v16 = 25;
      v17 = ret_set_day(v16, v14);
      sub_43BD0(v120, 12);
      v19 = v18;
      v20 = ret_set_day(6, v18);
      v21 = v119;
      v22 = v20;
      v24 = ret_set_day(12, v23);
      v25 = v118;
      v26 = v24;
      v28 = ret_set_day(19, v27);
      v84 = v108;
      v87 = v109;
      v90 = v110;
      v93 = v112;
      v29 = v107;
      v30 = "%d%s %d%s %d%s %s%s %s %d%s %d%s %d%s";
      v95 = v111;
      v98 = v12;
      v99 = v15;
      v100 = v17;
      v101 = v19;
      v102 = v22;
      v103 = v21;
      v104 = v26;
      v105 = v25;
      v106 = v28;
    }
    else
    {
      v31 = ret_set_day(29, v4);
      v32 = sub_127E8(&v115);
      v34 = ret_set_day(13, v33);
      v35 = v121;
      v36 = v34;
      v38 = ret_set_day(2, v37);
      v39 = set_day(&v116);
      v41 = ret_set_day(27, v40);
      v42 = v120;
      v43 = v41;
      v45 = ret_set_day(6, v44);
      v46 = v119;
      v47 = v45;
      v49 = ret_set_day(12, v48);
      v50 = v118;
      v51 = v49;
      v53 = ret_set_day(20, v52);
      v84 = v31;
      v87 = v32;
      v29 = v107;
      v30 = "%d%s %d%s %d%s %s%s %d%s %d%s %d%s";
      v90 = v36;
      v93 = v35;
      v95 = v38;
      v98 = v39;
      v99 = v43;
      v100 = v42;
      v101 = v47;
      v102 = v46;
      v103 = v51;
      v104 = v50;
      v105 = v53;
    }
    snprintf2(&unk_9792C, 128, v30, v29, v84, v87, v90, v93, v95, v98, v99, v100, v101, v102, v103, v104, v105, v106);
  }
  else
  {
    if ( v2 == 1 )
    {
      v5 = set_month(&v115);
      v6 = "%02d-%02d-%4d %02d:%02d:%02d";
      v7 = v121;
      v8 = v122;
      goto LABEL_13;
    }
    if ( v2 != 2 )
    {
      if ( !strcmp(&v117, "pt") )
      {
        v77 = set_day(&v116);
        v78 = v121;
        v79 = v77;
        v80 = check_month(&v115);
        v7 = v79;
        v6 = "%s, %d %s de %4d, %02d:%02d:%02d";
      }
      else
      {
        v81 = sub_129D0(&v116);
        v78 = v121;
        v82 = v81;
        v80 = Check_Month_12AA0(&v115);
        v6 = "%s, %d %s %4d, %02d:%02d:%02d";
        v7 = v82;
      }
      v91 = v122;
      v94 = v120;
      v96 = v119;
      v85 = v78;
      v97 = v118;
      v88 = v80;
      goto LABEL_29;
    }
    sub_43BD0(v120, 12);
    v120 = v54;
    if ( !strcmp(&v117, "pt") )
    {
      v55 = sub_129D0(&v116);
      v56 = v121;
      v57 = v55;
      v58 = Check_Month_12AA0(&v115);
      v60 = v120;
      v61 = v119;
      v62 = v118;
      v63 = v58;
      if ( v120 <= 11 )
        v64 = 24;
      else
        v64 = 25;
      v86 = v56;
      v89 = v63;
      v92 = v122;
      v65 = ret_set_day(v64, v59);
      sub_43BD0(v60, 12);
      v67 = v57;
      v68 = "%s, %d %s de %4d, %02d:%02d:%02d %s";
    }
    else
    {
      v69 = sub_129D0(&v116);
      v70 = v121;
      v71 = v69;
      v72 = Check_Month_12AA0(&v115);
      v74 = v120;
      v61 = v119;
      v62 = v118;
      v75 = v72;
      if ( v120 <= 11 )
        v76 = 24;
      else
        v76 = 25;
      v86 = v70;
      v89 = v75;
      v92 = v122;
      v65 = ret_set_day(v76, v73);
      sub_43BD0(v74, 12);
      v68 = "%s, %d %s %4d, %02d:%02d:%02d %s";
      v67 = v71;
    }
    snprintf2(&unk_9792C, 128, v68, v67, v86, v89, v92, v66, v61, v62, v65);
  }
  return &unk_9792C;
}

int __fastcall admin_setup(int a1)
{
    int v1;
    int v2;
    int v3;
    int v4; // minute for time out 
    int v5;
    char v7;
    char dest;
    char v9;
    char v10; 
    char v11;
    char v12;

    v1 = a1;
    if ( !get_value_post(a1, (int)"act", (int)&v10, 31) )
      return 0;
    if ( strcmp(&v10, "save") )
    {
      if ( !strcmp(&v10, "session_" )
      {
          strcpy(&v9, "");
          if ( get_value_post(v1, (int)"http_auth", (int)&v9, 15) )
          {
            set_http_auth_method(&v9);
            if ( !strcmp(&v9, "session") )
            {
                if ( get_value_post(v1, (int)"use_captcha", (int)&v11, 16) )
                {
                  v2 = strcmp(&v11, "off");
                  if ( v2 )
                  {
                      if ( !strcmp(&v11, "manual") )
                        v2 = 2;
                      else
                        v2 = 1;
                  }
                  set_use_captcha_code(v2);
                }
                if ( get_value_post(v1, (int)"captcha_attempt", (int)&v11, 16) )
                {
                  v3 = atoi(&v11);
                  set_client_login_trial_count_without_captchar(v3);
                }
                strcpy(&v12, "");
                if ( get_value_post(v1, (int)"http_session_timeout", (int)&v12, 15) && v12 )
                {
                  v4 = atoi(&v12);
                  httpcon_set_session_timeout(60 * v4);
                }
            } 
          }
          goto LABEL_22;
      }
      return 0;
    }
    if ( !sub_13298(v1) )
      return 0;
    strcpy(&dest, "");
    strcpy(&v7, "");
    get_value_post(v1, (int)"new_passwd", (int)&dest, 127);
    get_value_post(v1, (int)&unk_5F0D6, (int)&v7, 127);
    if ( check_unpermitted_chars(&v7) || !v7 && !dest )
      return 0;
    save_password(&v7, &dest);
  LABEL_22:
    v5 = syslog_msg(1, "@{37}");
    signal_save(v5);
    signal_start("httpd");
    puts("<script>");
    puts("function GotoLoginPage(method)\n\t\t{\n\t\t\tif(method == 'session')\n\t\t\t\ttop.location.href='/sess-bin/login_session.cgi?logout=1';\n\t\t\telse if(method == 'basic')\n\t\t\t\ttop.location.href='/login/login.cgi';\n\t\t}");
    strcpy(&v9, "");
    get_http_auth_method(&v9);
    if ( v9 )
      printf("setTimeout(\"GotoLoginPage('%s')\", 4000);\n", &v9);
    puts("</script>");
    return 1;
}


void __fastcall alert(const char *a1, int a2)
{
    const char *v2;
    int v3;
    int v4;
    void *v5;

    v2 = a1;
    if ( *a1 )
    {
      if ( !strcmp(a1, "SUCCESS") )
        v3 = 164;
      else if ( !strcmp(v2, "CONN_FAIL") )
        v3 = 154;
      else if ( !strcmp(v2, "BLOCKED") )
          v3 = 153;
      else if ( !strcmp(v2, "BAD_AUTH") )
          v3 = 152;
      else if ( !strcmp(v2, "PARAMETER_INVALID") )
          v3 = 162;
      else if ( !strcmp(v2, "DOMAIN_NOT_SUPPORTED") )
          v3 = 157;
        else if ( !strcmp(v2, "HOSTNAME_NOT_EXIST") )
          v3 = 159;
      else if ( !strcmp(v2, "USER_IS_NOT_A_DONATOR") 
          v3 = 168;
      else if ( !strcmp(v2, "NOT_YOURS") )
          v3 = 160;
      else if ( !strcmp(v2, "CUSTOM_DNS_NOT_ACT") )
          v3 = 155;
      else if ( !strcmp(v2, "HOSTNAME_IS_BLOCKED_BY_ABUSE") )
          v3 = 158;
      else if ( !strcmp(v2, "TOO_MANY_OR_FEW") )
          v3 = 165;
      else if ( !strcmp(v2, "DDNS_ERROR") )
          v3 = 156;
      else if ( !strcmp(v2, "SERVER_SHUTDOWN") )
          v3 = 163;
      else if ( !strcmp(v2, "ONLY_ONE_DOMAIN") )
          v3 = 161;
      else if ( !strcmp(v2, "UNKOWN") )
          v3 = 167;
      else
      {
          if ( strcmp(v2, "FORGET_MYINFO") )
          {
            v4 = pick_string_134F4(166, a2);
            v5 = 1;
            goto LABEL_39;
          }
          v3 = 171;
      }
    }
    else
      v3 = 166;
    v4 = pick_string_134F4(v3, a2);
    v5 = 1;
  LABEL_39:
    sf_strncpy(v5, v4, 64);
    return 1;
}



int __fastcall frame_shape(int a1, int a2) //10DB0
{
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r1@3
  int result; // r0@6
  const char *v6; // r0@9
  int v7; // r0@13
  int v8; // r0@19
  int v9; // [sp+0h] [bp-100h]@17
  char secondMenu; // [sp+100h] [bp+0h]@1
  char firstMenu; // [sp+180h] [bp+80h]@1
  char broad_ip; // [sp+200h] [bp+100h]@15
  char normal_ip; // [sp+220h] [bp+120h]@15

  v2 = a2;
  v3 = a1;
  strcpy(&firstMenu, "");
  strcpy(&secondMenu, "");
  if ( v2 )
  {
    get_value_post(v2, (int)"tmenu", (int)&firstMenu, 127);
    get_value_post(v2, (int)"smenu", (int)&secondMenu, 127);
  }
  else
  {
    v4 = get_pvalue(v3, (int)"tmenu");
    if ( v4 )
      sf_strncpy(&firstMenu, v4, 128);
    v8 = get_pvalue(v3, (int)"smenu");
    if ( v8 )
      sf_strncpy(&secondMenu, v8, 128);
  }
  result = strcmp(&firstMenu, "menu_titlebar");
  if ( result )
  {
    result = strcmp(&firstMenu, "navi_titlebar");
    if ( result )
    {
      if ( !strcmp(&firstMenu, "titlebar") )
      {
        v6 = "/home/httpd/js/toptitle.js";
      }
      else if ( !strcmp(&firstMenu, "navi_menu_basic") || !strcmp(&firstMenu, "navi_menu_advance") )
      {
        v6 = "/home/httpd/js/navimenu.js";
      }
      else
      {
        print_file("/home/httpd/js/navimenu.js");
        sub_133E4("string", 0);
        v7 = sub_133E4("common", 0);
        if ( dword_987BC )
          dword_987BC(v7);
        get_netaddr("br0", &normal_ip);
        get_localbroadaddr("br0", &broad_ip);
        puts("<script>");
        printf(
          "function CheckIPNetworkObj(ifr,ip)\n"
          "\t\t{\n"
          "\t\t\tfor( i = 1 ; i <= 4 ; i++ )\t\t\t\tif( ifr.document.getElementsByName(ip+i)[0].value == '' )\t\t\t\t\tre"
          "turn 0;\t\t\tip1=Number(ifr.document.getElementsByName(ip+1)[0].value);\t\t\tip2=Number(ifr.document.getElemen"
          "tsByName(ip+2)[0].value);\t\t\tip3=Number(ifr.document.getElementsByName(ip+3)[0].value);\t\t\tip4=Number(ifr."
          "document.getElementsByName(ip+4)[0].value);\t\t\tipstr = ip1+'.'+ip2+'.'+ip3+'.'+ip4;\t\t\tif( ipstr == '%s')\t"
          "\t\t{\t\t\t\treturn ifr.document.getElementsByName(ip+4)[0];\t\t\t}\t\t\tif( ipstr == '%s')\t\t\t{\t\t\t\tretu"
          "rn ifr.document.getElementsByName(ip+4)[0];\t\t\t}\t\t\treturn 0;\t\t}\n"
          "\n",
          &normal_ip,
          &broad_ip);
        printf(
          "function CheckIPNetwork(ip)\n"
          "\t\t{\n"
          "\t\t\tfor( i = 1 ; i <= 4 ; i++ )\t\t\t\tif( document.getElementsByName(ip+i)[0].value == '' )\t\t\t\t\treturn"
          " 0;\t\t\tip1=Number(document.getElementsByName(ip+1)[0].value);\t\t\tip2=Number(document.getElementsByName(ip+"
          "2)[0].value);\t\t\tip3=Number(document.getElementsByName(ip+3)[0].value);\t\t\tip4=Number(document.getElements"
          "ByName(ip+4)[0].value);\t\t\tipstr = ip1+'.'+ip2+'.'+ip3+'.'+ip4;\t\t\tif( ipstr == '%s')\t\t\t{\t\t\t\treturn"
          " document.getElementsByName(ip+4)[0];\t\t\t}\t\t\tif( ipstr == '%s')\t\t\t{\t\t\t\treturn document.getElements"
          "ByName(ip+4)[0];\t\t\t}\t\t\treturn 0;\t\t}\n"
          "\n",
          &normal_ip,
          &broad_ip);
        puts("</script>");
        if ( !strcmp(&firstMenu, "wizard") )
          print_file("/home/httpd/js/netconf.js");
        snprintf2((int)&v9, 255, "/home/httpd/js/%s.js", &firstMenu);
        v6 = (const char *)&v9;
      }
      result = print_file(v6);
    }
  }
  return result;
}