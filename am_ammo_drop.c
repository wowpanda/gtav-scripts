#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	struct<22> Local_60 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 3, -1, 0, 0, 0, -1861623876, 0 } ;
	var uLocal_82 = 0;
	vector3 vLocal_83[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 16;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_146(ScriptParam_0))
		{
			func_140();
		}
	}
	while (true)
	{
		func_139();
		if (func_128())
		{
			func_140();
		}
		if (NETWORK_IS_IN_TUTORIAL_SESSION() != iLocal_184)
		{
			func_140();
		}
		if (NETWORK_GET_PLAYER_INDEX(NETWORK_GET_HOST_OF_THIS_SCRIPT()) != Local_60.f_17)
		{
			func_140();
		}
		_0x2302C0264EA58D31();
		switch (func_127(PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_125())
				{
					if (func_124() == 1)
					{
						func_123();
						vLocal_83[PARTICIPANT_ID_TO_INT() /*3*/] = 1;
					}
					else if (func_124() == 4)
					{
						vLocal_83[PARTICIPANT_ID_TO_INT() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_124() == 1)
				{
					func_105();
				}
				else if (func_124() == 4)
				{
					vLocal_83[PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_104(&(Local_60.f_21));
				if (func_103(&(Local_60.f_21)))
				{
					vLocal_83[PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_83[PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			
			case 4:
				func_140();
				break;
		}
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_124())
			{
				case 0:
					if (func_74())
					{
						Local_60 = 1;
					}
					break;
				
				case 1:
					func_38();
					if (func_1())
					{
						Local_60 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (IS_BIT_SET(uLocal_180, 8))
	{
		if (!func_37(PLAYER_ID(), 1, 1))
		{
			if (!IS_BIT_SET(Local_60.f_1, 9))
			{
				SET_BIT(&(Local_60.f_1), 9);
			}
			return 0;
		}
		else if (IS_BIT_SET(Local_60.f_1, 9))
		{
			return 1;
		}
	}
	if (Local_60.f_12 == 0 || Local_60.f_12 == 1)
	{
		if (!NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_4))
		{
			if (!func_35(Local_60.f_2))
			{
				return 1;
			}
			if (func_34(Local_60.f_3))
			{
				return 1;
			}
			if (Local_60.f_12 > 0)
			{
				return 1;
			}
		}
		if (IS_BIT_SET(uLocal_180, 8))
		{
			if (!IS_ENTITY_AT_COORD(PLAYER_PED_ID(), Local_60.f_6, 250f, 250f, 250f, 0, 1, 0))
			{
				if (Local_60.f_18 == 1)
				{
					func_13();
				}
				return 1;
			}
			if (Local_60.f_18 == 1)
			{
				if ((((func_9(PLAYER_ID()) && func_8() != 151) || func_6(PLAYER_ID(), 146)) || func_5()) || func_4())
				{
					func_13();
					if (NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4))
					{
						func_3(&(Local_60.f_4));
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_3(var uParam0)
{
	var uVar0;
	
	if (NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NET_TO_ENT(*uParam0);
		DELETE_ENTITY(&uVar0);
	}
}

var func_4()
{
	return Global_1312417;
}

var func_5()
{
	return Global_2528542.f_4886;
}

int func_6(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/] == iParam1)
	{
		return func_7(iParam0);
	}
	return 0;
}

int func_7(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return IS_BIT_SET(Global_1626536[iVar0 /*603*/].f_1, 0);
	}
	return 0;
}

int func_8()
{
	return Global_1645834;
}

int func_9(int iParam0)
{
	if (func_12(iParam0))
	{
		return 1;
	}
	if (func_10(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_10(int iParam0)
{
	return func_11(iParam0, 20);
}

var func_11(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1626536[iParam0 /*603*/].f_11.f_4, iParam1);
}

int func_12(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return IS_BIT_SET(Global_1626536[iVar0 /*603*/].f_1, 7);
	}
	return 0;
}

void func_13()
{
	if (NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4))
	{
		if (Global_262145.f_19690 > 0)
		{
			func_31(Global_262145.f_19690, 0);
			func_14(Global_262145.f_19690, 14, 2, 1);
		}
	}
}

void func_14(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var4;
	int iVar12;
	int iVar13;
	
	StringCopy(&Var0, func_30(iParam1), 16);
	StringCopy(&Var4, func_29(iParam2), 32);
	switch (iParam1)
	{
		case 0:
			iVar12 = 1287308202;
			break;
		
		case 1:
			iVar12 = 691372038;
			break;
		
		case 2:
			iVar12 = 1480707108;
			break;
		
		case 3:
			iVar12 = 1512499951;
			break;
		
		case 4:
			iVar12 = 562283735;
			break;
		
		case 5:
			iVar12 = -154732333;
			break;
		
		case 6:
			iVar12 = -1362660491;
			break;
		
		case 7:
			iVar12 = 645708827;
			break;
		
		case 8:
			iVar12 = 767907967;
			break;
		
		case 9:
			iVar12 = -1970151306;
			break;
		
		case 10:
			iVar12 = 718859568;
			break;
		
		case 11:
			iVar12 = -1955564771;
			break;
		
		case 12:
			iVar12 = 892388724;
			break;
		
		case 13:
			iVar12 = -1426920838;
			break;
		
		case 14:
			iVar12 = -664597565;
			break;
		
		case 15:
			iVar12 = 1864522104;
			break;
		
		case 16:
			iVar12 = 215608230;
			break;
		
		case 17:
			iVar12 = -1100963799;
			break;
	}
	if (func_28())
	{
		func_15(iVar12, iParam0, &iVar13, bParam3, bParam3, 0);
		Global_4263509[iVar13 /*84*/].f_13.f_40 = { Var0 };
		Global_4263509[iVar13 /*84*/].f_13.f_44 = { Var4 };
	}
	else
	{
		NETWORK_REFUND_CASH(iParam0, &Var0, &Var4, bParam3);
	}
}

void func_15(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_28())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0)
			{
				func_16(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_16(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
			if (iParam1 > 0)
			{
				func_16(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -1693570755:
			func_16(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case 1727256317:
		case -2017925037:
			func_16(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_16(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_28())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_27()) || unk_0x64BE694244417BDA())
		{
			Global_4264085 = 1;
			return 0;
		}
		if (Global_2459772)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264086 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263509[iVar2 /*84*/].f_65.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0xEC103C948D1D3BEF(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x93EA4BE98F3F425A(iVar4))
		{
			*uParam0 = func_23(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263509[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4263509[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
			Global_4264070 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264084 = 1;
			Global_4264087 = iParam4;
			Global_4264089 = iParam3;
			Global_4264090 = 1;
			Global_4264088 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264087 = iParam4;
			Global_4264089 = iParam3;
			Global_4264090 = 1;
			Global_4264088 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_22(1, iParam4);
			Global_4264084 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_17(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_17(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			SET_BIT(&(Global_2424047[PLAYER_ID() /*416*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_18(iParam0);
	}
}

void func_18(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_28())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_21(iParam0))
		{
			if (!bVar0)
			{
				unk_0x220FA7ABD5D740BF();
			}
		}
		else if (!bVar0)
		{
			unk_0xBDAA2C842F5C47BF(Global_4263509[iParam0 /*84*/].f_65);
		}
		func_19(&(Global_4263509[iParam0 /*84*/]));
	}
}

void func_19(var uParam0)
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = -1593119440;
	uParam0->f_65.f_4 = -2085313189;
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = 1227573907;
	uParam0->f_65.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_20(&(uParam0->f_13));
	func_20(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
}

void func_20(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_21(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_22(int iParam0, var uParam1)
{
	Global_2460949 = uParam1;
	Global_2460948 = iParam0;
}

int func_23(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263509[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_28())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263509[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4263509[iVar0 /*84*/].f_65.f_1 = uParam5;
			Global_4263509[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4263509[iVar0 /*84*/].f_65.f_4 = uParam2;
			Global_4263509[iVar0 /*84*/].f_65.f_7 = uParam3;
			Global_4263509[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4263509[iVar0 /*84*/].f_65 = iParam0;
			Global_4263509[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4263509[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4263509[iVar0 /*84*/].f_65.f_10 = uParam7;
			Global_4263509[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4263509[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4263509[iVar0 /*84*/].f_65.f_14 = GET_FRAME_COUNT();
			Global_4263509[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4264070 = 0;
			if (bParam6)
			{
				Global_4263509[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_24(Global_4263509[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_24(struct<66> Param0, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84)
{
	vector3 vVar0;
	int iVar35;
	
	if (iParam84 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 1803946278;
	vVar0.y = PLAYER_ID();
	vVar0.f_2 = { Param0.f_65 };
	vVar0.f_2.f_32 = iParam84;
	iVar35 = func_26(vVar0.y);
	if ((Global_262145.f_23434 && !Global_262145.f_23435) && !Global_262145.f_23436)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_25();
		_0xA40CC53DF8E50837(1, &vVar0, 35, iVar35);
	}
}

void func_25()
{
	REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_26(var uParam0)
{
	var uVar0;
	
	SET_BIT(&uVar0, uParam0);
	return uVar0;
}

int func_27()
{
	return Global_1312745;
}

int func_28()
{
	if (IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

char* func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		case 17:
			return "ARENA_SPEC_BOX";
		
		default:
	}
	return "DEFAULT";
}

void func_31(int iParam0, int iParam1)
{
	func_33(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_32(iParam0, 0);
	}
}

void func_32(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_33(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1589819[PLAYER_ID() /*818*/].f_211.f_4 = iVar1;
	Global_1589819[PLAYER_ID() /*818*/].f_211.f_3 = (Global_1589819[PLAYER_ID() /*818*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_32(iVar1, 0);
	}
}

int func_34(var uParam0)
{
	if (NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return IS_PED_INJURED(NET_TO_PED(uParam0));
	}
	return 1;
}

int func_35(var uParam0)
{
	if (NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_36(NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_36(var uParam0)
{
	if (DOES_ENTITY_EXIST(uParam0))
	{
		if (IS_ENTITY_DEAD(uParam0, 0))
		{
			return 1;
		}
		else if (!IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437364.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_38()
{
	switch (Local_60.f_12)
	{
		case 0:
			if (Local_60.f_18)
			{
				func_73();
			}
			else
			{
				func_68();
			}
			if (func_42())
			{
				func_41();
				Local_60.f_12 = 1;
			}
			break;
		
		case 1:
			if (NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4))
			{
				func_40(Local_60.f_4, 18);
				if (Local_60.f_15 == 3)
				{
					if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_5))
					{
						Local_60.f_15 = 2;
					}
				}
				if (NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
				{
					func_39(&(Local_60.f_2));
				}
				else if (Local_60.f_13 == 1)
				{
					Local_60.f_13 = 0;
				}
				if (NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_3))
				{
					func_39(&(Local_60.f_3));
				}
				else if (Local_60.f_14 == 1)
				{
					Local_60.f_14 = 0;
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_39(var uParam0)
{
	var uVar0;
	
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NET_TO_ENT(*uParam0);
		SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
	}
}

void func_40(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	float fVar11;
	float fVar12;
	
	GET_HUD_COLOUR(iParam1, &uVar7, &uVar8, &uVar9, &uVar10);
	fVar6 = 0.5f;
	GET_MODEL_DIMENSIONS(GET_ENTITY_MODEL(NET_TO_OBJ(uParam0)), &vVar0, &vVar3);
	fVar11 = ((vVar3.z - vVar0.z) / 2f);
	fVar12 = (vVar3.z - fVar11);
	if (fVar6 <= (fVar12 + 0.1f))
	{
		fVar6 = (fVar12 + 0.4f);
	}
	DRAW_MARKER(2, GET_ENTITY_COORDS(NET_TO_OBJ(uParam0), 1) + Vector((((vVar3.z - vVar0.z) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar7, uVar8, uVar9, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_41()
{
	if (!DOES_BLIP_EXIST(uLocal_181))
	{
		uLocal_181 = ADD_BLIP_FOR_ENTITY(NET_TO_OBJ(Local_60.f_4));
		if (Local_60.f_18)
		{
			SET_BLIP_SPRITE(uLocal_181, 84);
			SET_BLIP_SCALE(uLocal_181, 1.2f);
			SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_181, "AMD_BLIPBALL");
		}
		else
		{
			SET_BLIP_SPRITE(uLocal_181, 351);
			SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_181, "AMD_BLIPN");
			SET_BLIP_SCALE(uLocal_181, 0.7f);
		}
		SET_BLIP_COLOUR(uLocal_181, 2);
		SET_BLIP_ALPHA(uLocal_181, 120);
	}
}

int func_42()
{
	if (!IS_BIT_SET(Local_60.f_1, 7))
	{
		if (func_35(Local_60.f_2))
		{
			if (IS_ENTITY_AT_COORD(NET_TO_VEH(Local_60.f_2), Local_60.f_6, 5f, 5f, 600f, 0, 1, 0))
			{
				SET_BIT(&(Local_60.f_1), 7);
			}
		}
	}
	else if (func_125())
	{
		if (func_45())
		{
			if (func_43())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_43()
{
	REQUEST_MODEL(Local_60.f_19.f_1);
	if (HAS_MODEL_LOADED(Local_60.f_19.f_1))
	{
		if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_19) && NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4))
		{
			if (CAN_REGISTER_MISSION_OBJECTS(1))
			{
				if (func_44(&(Local_60.f_19), Local_60.f_19.f_1, GET_ENTITY_COORDS(NET_TO_OBJ(Local_60.f_4), 1) - Vector(5f, 0f, 0f), 1, 1, 1, 0, 0, 0, 0))
				{
					SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_60.f_19, 1);
					SET_ENTITY_HEADING(NET_TO_OBJ(Local_60.f_19), GET_ENTITY_HEADING(NET_TO_OBJ(Local_60.f_4)));
					ATTACH_ENTITY_TO_ENTITY(NET_TO_OBJ(Local_60.f_4), NET_TO_OBJ(Local_60.f_19), 0, 0f, 0f, 0.25f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
					SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NET_TO_OBJ(Local_60.f_19), 1);
					_SET_ENTITY_SOMETHING(NET_TO_OBJ(Local_60.f_19), 0);
					ACTIVATE_PHYSICS(NET_TO_OBJ(Local_60.f_19));
					SET_ENTITY_VELOCITY(NET_TO_OBJ(Local_60.f_19), 0f, 0f, -0.2f);
					SET_DISABLE_BREAKING(NET_TO_OBJ(Local_60.f_19), 1);
				}
			}
		}
	}
	if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_19))
	{
		return 0;
	}
	return 1;
}

int func_44(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = OBJ_TO_NET(CREATE_OBJECT_NO_OFFSET(iParam1, vParam2, iParam6, bParam5, iParam7));
	}
	else
	{
		*uParam0 = OBJ_TO_NET(CREATE_OBJECT(iParam1, vParam2, iParam6, bParam5, iParam7));
	}
	if (NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		_SET_ENTITY_SOMETHING(NET_TO_OBJ(*uParam0), iParam8);
		if (bParam10)
		{
			_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(NET_TO_OBJ(*uParam0), 1);
		}
		if (bParam11)
		{
			SET_ENTITY_VISIBLE(NET_TO_OBJ(*uParam0), 0, 0);
		}
		if (NETWORK_GET_ENTITY_IS_NETWORKED(NET_TO_OBJ(*uParam0)))
		{
			if (bParam5)
			{
				SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	iVar0 = joaat("prop_box_ammo02a");
	if (Local_60.f_18 == 1)
	{
		iVar0 = 1688540826;
	}
	REQUEST_MODEL(iVar0);
	REQUEST_MODEL(joaat("p_cargo_chute_s"));
	if (HAS_MODEL_LOADED(iVar0) && HAS_MODEL_LOADED(joaat("p_cargo_chute_s")))
	{
		if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4) && !NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_5))
		{
			if (func_35(Local_60.f_2) && CAN_REGISTER_MISSION_ENTITIES(0, 0, 2, 0))
			{
				iVar1 = 200;
				if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4))
				{
					iVar2 = 0;
					iVar3 = joaat("pickup_ammo_bullet_mp");
					if (Local_60.f_18 == 1)
					{
						iVar3 = joaat("pickup_weapon_minigun");
					}
					if (Local_60.f_18 == 0)
					{
						SET_BIT(&iVar2, 12);
					}
					else
					{
						SET_BIT(&iVar2, 12);
					}
					Local_60.f_4 = OBJ_TO_NET(CREATE_AMBIENT_PICKUP(iVar3, GET_ENTITY_COORDS(NET_TO_VEH(Local_60.f_2), 1) - Vector(3f, 0f, 0f), iVar2, iVar1, iVar0, 1, 1));
					if (Local_60.f_18 == 1)
					{
						func_67(NET_TO_OBJ(Local_60.f_4));
						_0x31F924B53EADDF65(0);
					}
					SET_ENTITY_INVINCIBLE(NET_TO_OBJ(Local_60.f_4), 1);
					_SET_OBJECT_SOMETHING(NET_TO_OBJ(Local_60.f_4), 1);
					SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NET_TO_OBJ(Local_60.f_4), 1);
					_SET_ENTITY_SOMETHING(NET_TO_OBJ(Local_60.f_4), 0);
					ACTIVATE_PHYSICS(NET_TO_OBJ(Local_60.f_4));
					func_66();
					uVar4 = GET_SOUND_ID();
					PLAY_SOUND_FROM_ENTITY(uVar4, "Crate_Beeps", NET_TO_OBJ(Local_60.f_4), "MP_CRATE_DROP_SOUNDS", 1, 0);
					Local_60.f_16 = GET_NETWORK_ID_FROM_SOUND_ID(uVar4);
				}
				if (NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4) && !NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_5))
				{
					if (func_44(&(Local_60.f_5), joaat("p_cargo_chute_s"), GET_ENTITY_COORDS(NET_TO_VEH(Local_60.f_2), 1) - Vector(2f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_60.f_5, 1);
						ATTACH_ENTITY_TO_ENTITY(NET_TO_OBJ(Local_60.f_5), NET_TO_OBJ(Local_60.f_4), 0, 0f, 0f, 0.1f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NET_TO_OBJ(Local_60.f_5), 1);
						_SET_ENTITY_SOMETHING(NET_TO_OBJ(Local_60.f_5), 0);
						PLAY_ENTITY_ANIM(NET_TO_OBJ(Local_60.f_5), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, 0, 0, 0, 0, 0);
						FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NET_TO_OBJ(Local_60.f_5));
					}
				}
				func_64();
				if (!IS_BIT_SET(uLocal_180, 15))
				{
					if (!Local_60.f_18)
					{
						func_63(&uLocal_189, 3, NET_TO_PED(Local_60.f_3), "FM_Pilot_Ammo", 0, 1);
						func_46(&uLocal_189, "CT_AUD", "MPCT_AMOinc", 12, 0, 0, 1);
					}
					SET_BIT(&uLocal_180, 15);
				}
			}
		}
	}
	if (NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4) && NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_5))
	{
		return 1;
	}
	return 0;
}

int func_46(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_62(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15873 = 0;
	Global_15875 = 0;
	Global_15880 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_2621441 = 1;
	return func_47(sParam2, iParam3, 0);
}

int func_47(char* sParam0, int iParam1, bool bParam2)
{
	Global_15867 = 0;
	if (Global_15866 == 0 || Global_15868 == 2)
	{
		if (Global_15866 != 0)
		{
			if (iParam1 > Global_15868)
			{
				if (Global_15873 == 0)
				{
					STOP_SCRIPTED_CONVERSATION(0);
					Global_14553.f_1 = 3;
					Global_15866 = 0;
					Global_15867 = 1;
					Global_15919 = 0;
					Global_15862 = 0;
					Global_15863 = 0;
					Global_15877 = 0;
					Global_15876 = 0;
					Global_14552 = 0;
				}
				else
				{
					func_61();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_60(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_59();
		Global_15155 = { Global_15320 };
		Global_15872 = Global_15873;
		Global_15879 = Global_15880;
		Global_2621442 = Global_2621441;
		Global_15881 = { Global_15897 };
		Global_15874 = Global_15875;
		Global_16856 = Global_16857;
		Global_16864 = { Global_16870 };
		Global_16858 = Global_16859;
		Global_16860 = Global_16861;
		Global_16862 = Global_16863;
		Global_15485.f_370 = Global_16855;
		Global_15485.f_368 = Global_16853;
		Global_15485.f_369 = Global_16854;
		Global_15862 = Global_15863;
		if (Global_15872)
		{
			CLEAR_BIT(&Global_2423, 20);
			CLEAR_BIT(&Global_2424, 17);
			CLEAR_BIT(&Global_2425, 0);
			if (bParam2)
			{
				func_52();
				if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14553.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14519 == 1)
			{
				return 0;
			}
			if (IS_PLAYER_PLAYING(PLAYER_ID()))
			{
				if (IS_PED_IN_MELEE_COMBAT(PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_51())
				{
					return 0;
				}
				if (IS_PED_SPRINTING(PLAYER_PED_ID()))
				{
					return 0;
				}
				if (IS_PED_RAGDOLL(PLAYER_PED_ID()))
				{
					return 0;
				}
				if (IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER_PED_ID()))
				{
					return 0;
				}
				if (GET_IS_PED_GADGET_EQUIPPED(PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71590)
				{
					if (IS_ENTITY_IN_WATER(PLAYER_PED_ID()))
					{
						return 0;
					}
					if (IS_PLAYER_CLIMBING(PLAYER_ID()))
					{
						return 0;
					}
					if (IS_PED_PLANTING_BOMB(PLAYER_PED_ID()))
					{
						return 0;
					}
					if (IS_SPECIAL_ABILITY_ACTIVE(PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_50())
			{
				return 0;
			}
			else
			{
				switch (Global_14553.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (IS_BIT_SET(Global_2423, 9))
				{
					return 0;
				}
			}
			func_49();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_48();
		return 1;
	}
	if (Global_15866 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15868 || iParam1 == Global_15868)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_61();
	}
	return 0;
}

void func_48()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14734[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	STOP_SCRIPTED_CONVERSATION(0);
	Global_15866 = 1;
}

void func_49()
{
	Global_15919 = Global_15918;
	Global_15913 = Global_15914;
	Global_15960 = { Global_15948 };
	Global_15966 = { Global_15954 };
	Global_15921 = Global_15920;
	Global_15990 = { Global_15972 };
	Global_15996 = { Global_15978 };
	Global_16002 = { Global_15984 };
	Global_16008 = { Global_16014 };
	Global_1738 = Global_1739;
	Global_1740 = Global_1741;
	Global_15877 = Global_15878;
	Global_15879 = Global_15880;
	Global_15881 = { Global_15897 };
	Global_15870 = Global_15871;
	Global_16882 = 0;
	Global_15915 = 0;
	Global_15916 = 0;
	CLEAR_BIT(&Global_2424, 16);
}

int func_50()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_51()
{
	int iVar0;
	int iVar1;
	
	if (Global_71590)
	{
		iVar0 = 0;
		GET_CURRENT_PED_WEAPON(PLAYER_PED_ID(), &iVar1, 1);
		if (IS_PLAYER_PLAYING(PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (IS_PLAYER_PLAYING(PLAYER_ID()))
	{
		if (GET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_52()
{
	if (func_58(14))
	{
		if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
		{
			if (GET_ENTITY_MODEL(PLAYER_PED_ID()) == Global_106565.f_28044[0 /*29*/])
			{
				Global_14553 = 0;
			}
			else if (GET_ENTITY_MODEL(PLAYER_PED_ID()) == Global_106565.f_28044[1 /*29*/])
			{
				Global_14553 = 1;
			}
			else if (GET_ENTITY_MODEL(PLAYER_PED_ID()) == Global_106565.f_28044[2 /*29*/])
			{
				Global_14553 = 2;
			}
			else
			{
				Global_14553 = 0;
			}
		}
	}
	else
	{
		Global_14553 = func_53();
		if (Global_14553 == 145)
		{
			Global_14553 = 3;
		}
		if (Global_71590)
		{
			Global_14553 = 3;
		}
		if (Global_14553 > 3)
		{
			Global_14553 = 3;
		}
	}
}

var func_53()
{
	func_54();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_54()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		if (func_57(Global_106565.f_2357.f_539.f_4321) != GET_ENTITY_MODEL(PLAYER_PED_ID()))
		{
			iVar0 = func_56(PLAYER_PED_ID());
			if (func_55(iVar0) && (!func_58(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_55(Global_106565.f_2357.f_539.f_4321))
				{
					Global_106565.f_2357.f_539.f_4322 = Global_106565.f_2357.f_539.f_4321;
				}
				Global_106565.f_2357.f_539.f_4323 = iVar0;
				Global_106565.f_2357.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106565.f_2357.f_539.f_4321 != 145)
			{
				Global_106565.f_2357.f_539.f_4323 = Global_106565.f_2357.f_539.f_4321;
			}
			return;
		}
	}
	Global_106565.f_2357.f_539.f_4321 = 145;
}

bool func_55(int iParam0)
{
	return iParam0 < 3;
}

int func_56(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_57(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_57(int iParam0)
{
	if (func_55(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_58(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_59()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15155[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15155[iVar0 /*10*/].f_1), "", 24);
		Global_15155[iVar0 /*10*/].f_7 = 0;
		Global_15155[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15155.f_161 = -99;
	Global_15155.f_162 = { 0f, 0f, 0f };
}

bool func_60(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1371947.f_203[iParam1];
			}
			break;
	}
	return IS_BIT_SET(Global_1371947.f_1048, iParam0);
}

void func_61()
{
	RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if ((IS_MOBILE_PHONE_CALL_ONGOING() || Global_14553.f_1 == 9) || Global_14552 == 1)
	{
		STOP_SCRIPTED_CONVERSATION(0);
		Global_15866 = 6;
		Global_14553.f_1 = 3;
		return;
	}
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(1);
		Global_15866 = 6;
		return;
	}
}

void func_62(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = uParam5;
	if (iParam3 == 0)
	{
		Global_16853 = 1;
		Global_16851 = 0;
	}
	else
	{
		Global_16853 = 0;
		Global_16851 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16854 = 1;
		Global_16852 = 0;
	}
	else
	{
		Global_16854 = 0;
		Global_16852 = 1;
	}
}

void func_63(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71590)
	{
		if (!IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 0);
			}
			else
			{
				SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 1);
			}
		}
		if (!IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 0);
			}
			else
			{
				SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 1);
			}
		}
	}
}

int func_64()
{
	if (func_65())
	{
		if (!DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_183))
		{
			iLocal_183 = START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY("scr_crate_drop_beacon", NET_TO_OBJ(Local_60.f_4), 0f, 0f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 1065353216, 1065353216, 1065353216, 0);
			SET_PARTICLE_FX_LOOPED_COLOUR(iLocal_183, 0.8f, 0.18f, 0.19f, 0);
		}
	}
	if (!DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_183))
	{
		return 0;
	}
	return 1;
}

int func_65()
{
	REQUEST_PTFX_ASSET();
	if (HAS_PTFX_ASSET_LOADED())
	{
		return 1;
	}
	return 0;
}

void func_66()
{
	if (GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16) != -1)
	{
		if (NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4))
		{
			if (!HAS_SOUND_FINISHED(GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16)))
			{
				STOP_SOUND(GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16));
			}
			RELEASE_SOUND_ID(GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16));
		}
		else
		{
			if (!HAS_SOUND_FINISHED(GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16)))
			{
				STOP_SOUND(GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16));
			}
			RELEASE_SOUND_ID(GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16));
		}
	}
}

void func_67(var uParam0)
{
	var uVar0;
	
	SET_BIT(&uVar0, NETWORK_PLAYER_ID_TO_INT());
	_0x1E3F1B1B891A2AAA(uParam0, uVar0);
}

void func_68()
{
	var uVar0;
	
	if (!IS_BIT_SET(uLocal_180, 11))
	{
		if (!IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			uVar0 = func_72(1190, -1, 0);
			if (!IS_BIT_SET(uVar0, 10))
			{
				func_71("AMD_HELP1", -1);
				SET_BIT(&uVar0, 10);
				func_69(1190, uVar0, -1, 1, 0);
				SET_BIT(&uLocal_180, 11);
			}
			else if (!IS_BIT_SET(uVar0, 11))
			{
				func_71("AMD_HELP2", -1);
				SET_BIT(&uVar0, 11);
				func_69(1190, uVar0, -1, 1, 0);
				SET_BIT(&uLocal_180, 11);
			}
			else
			{
				SET_BIT(&uLocal_180, 11);
			}
		}
	}
}

void func_69(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_70(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, uParam1, iParam3);
	}
}

int func_70(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
		if (iVar1 > -1)
		{
			Global_2539215 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2539215 = 1;
		}
	}
	return iVar0;
}

void func_71(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_72(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2539502[iParam0 /*3*/][func_70(iParam1)];
	if (STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_73()
{
	var uVar0;
	
	if (!IS_BIT_SET(uLocal_180, 17))
	{
		if (!IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			uVar0 = func_72(1190, -1, 0);
			if (!IS_BIT_SET(uVar0, 24))
			{
				func_71("BALD_HELP1", -1);
				SET_BIT(&uVar0, 24);
				func_69(1190, uVar0, -1, 1, 0);
				SET_BIT(&uLocal_180, 17);
			}
			else if (!IS_BIT_SET(uVar0, 25))
			{
				func_71("BALD_HELP2", -1);
				SET_BIT(&uVar0, 25);
				func_69(1190, uVar0, -1, 1, 0);
				SET_BIT(&uLocal_180, 17);
			}
			else
			{
				SET_BIT(&uLocal_180, 17);
			}
		}
	}
}

int func_74()
{
	if (func_102(joaat("cuban800")) && func_102(joaat("s_m_m_pilot_02")))
	{
		if (func_100(&uLocal_187, 4000, 0))
		{
			if (func_77() && func_75())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_75()
{
	if ((!NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_3) && func_102(joaat("s_m_m_pilot_02"))) && NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		if (func_35(Local_60.f_2))
		{
			if (func_76(&(Local_60.f_3), Local_60.f_2, 22, joaat("s_m_m_pilot_02"), -1, 1, 1, 1))
			{
				SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NET_TO_PED(Local_60.f_3), 1);
				SET_PED_RELATIONSHIP_GROUP_HASH(NET_TO_PED(Local_60.f_3), Global_1574987);
				SET_PED_RANDOM_COMPONENT_VARIATION(NET_TO_PED(Local_60.f_3), 0);
				SET_PED_KEEP_TASK(NET_TO_PED(Local_60.f_3), 1);
				SET_ENTITY_HEALTH(NET_TO_PED(Local_60.f_3), ROUND((200f * Global_262145.f_153)), 0);
				func_123();
				TASK_PERFORM_SEQUENCE(NET_TO_PED(Local_60.f_3), uLocal_182);
				_SET_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(NET_TO_VEH(Local_60.f_2), ROUND(50f));
			}
		}
	}
	if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_3))
	{
		return 0;
	}
	SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_pilot_02"));
	return 1;
}

int func_76(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK_DOES_NETWORK_ID_EXIST(uParam1))
	{
		return 0;
	}
	if (!IS_VEHICLE_DRIVEABLE(NET_TO_VEH(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = PED_TO_NET(CREATE_PED_INSIDE_VEHICLE(NET_TO_VEH(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		_SET_ENTITY_SOMETHING(NET_TO_PED(*uParam0), iParam7);
		if (NETWORK_GET_ENTITY_IS_NETWORKED(NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_77()
{
	vector3 vVar0;
	var uVar3;
	
	if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		if (func_102(joaat("cuban800")))
		{
			func_97(&vVar0, &uVar3);
			if (func_81(vVar0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				if (func_78(&(Local_60.f_2), joaat("cuban800"), vVar0, uVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					SET_VEHICLE_DOORS_LOCKED(NET_TO_VEH(Local_60.f_2), 2);
					FREEZE_ENTITY_POSITION(NET_TO_VEH(Local_60.f_2), 0);
					SET_ENTITY_DYNAMIC(NET_TO_VEH(Local_60.f_2), 1);
					ACTIVATE_PHYSICS(NET_TO_VEH(Local_60.f_2));
					SET_VEHICLE_FORWARD_SPEED(NET_TO_VEH(Local_60.f_2), 60f);
					SET_HELI_BLADES_FULL_SPEED(NET_TO_VEH(Local_60.f_2));
					SET_VEHICLE_ENGINE_ON(NET_TO_VEH(Local_60.f_2), 1, 1, 0);
					SET_VEHICLE_ENGINE_CAN_DEGRADE(NET_TO_VEH(Local_60.f_2), 0);
					_SET_ENTITY_SOMETHING(NET_TO_VEH(Local_60.f_2), 0);
					CONTROL_LANDING_GEAR(NET_TO_VEH(Local_60.f_2), 3);
					OPEN_BOMB_BAY_DOORS(NET_TO_VEH(Local_60.f_2));
					if (Local_60.f_18 == 1)
					{
						SET_ENTITY_PROOFS(NET_TO_VEH(Local_60.f_2), 1, 0, 1, 0, 0, 0, 0, 0);
					}
				}
			}
		}
	}
	if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		return 0;
	}
	SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cuban800"));
	return 1;
}

int func_78(var uParam0, int iParam1, vector3 vParam2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		CLEAR_AREA_OF_VEHICLES(vParam2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = CREATE_VEHICLE(iParam1, vParam2, uParam5, iParam7, iParam6, iParam14);
	if (DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = VEH_TO_NET(iVar1);
		Global_2528542.f_6212 = iVar1;
		if (NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, 1);
			}
			_SET_ENTITY_SOMETHING(iVar1, iParam10);
			if (NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
				}
				else
				{
					SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
				}
				if (bParam13)
				{
					_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, PLAYER_ID(), 1);
				}
			}
			SET_VEHICLE_IS_STOLEN(iVar1, iParam9);
			_0xB2E0C0D6922D31F2(iVar1, 1);
			if (bParam12)
			{
				SET_CAR_BOOT_OPEN(iVar1);
				SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_79(vParam2, uParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_79(vector3 vParam0, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_80(PLAYER_ID(), vParam0, iParam4) > -1)
	{
		if ((Global_2405071.f_2908[1 /*6*/].f_5 == iParam5 && Global_2405071.f_2908[1 /*6*/].f_4 == iParam4) && VDIST(Global_2405071.f_2908[1 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405071.f_2908[iVar0 /*6*/] = { Global_2405071.f_2908[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405071.f_2908[1 /*6*/] = { vParam0 };
		Global_2405071.f_2908[1 /*6*/].f_3 = uParam3;
		Global_2405071.f_2908[1 /*6*/].f_4 = iParam4;
		Global_2405071.f_2908[1 /*6*/].f_5 = iParam5;
	}
}

int func_80(var uParam0, vector3 vParam1, int iParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = uParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				vVar2 = { vParam1 };
				if (ABSF((Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (VDIST(Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_81(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405071.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam4) || IS_ANY_PED_NEAR_POINT(vParam0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam13)
	{
		if (GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (fParam14 > 0f)
	{
		if (func_90(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_82(vParam0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

int func_82(vector3 vParam0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_37(PLAYER_ID(), 1, 1))
		{
			if (!IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (GET_DISTANCE_BETWEEN_COORDS(func_86(PLAYER_ID()), vParam0, 1) <= (fVar2 + fParam3))
				{
					if (IS_SPHERE_VISIBLE(vParam0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_37(iVar1, 1, 1))
		{
			if (!func_84(iVar1, 0) && _NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER_ID()))
				{
					if ((func_83(iVar1) || !bParam10) && !Global_2424047[iVar1 /*416*/].f_259)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (GET_PLAYER_TEAM(iVar1) == GET_PLAYER_TEAM(PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && GET_PLAYER_TEAM(iVar1) != GET_PLAYER_TEAM(PLAYER_ID()))) || GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (GET_DISTANCE_BETWEEN_COORDS(func_86(iVar1), vParam0, 1) <= (fVar2 + fParam3))
								{
									if (IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (GET_PLAYER_TEAM(iVar1) != iParam8 || GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (GET_DISTANCE_BETWEEN_COORDS(func_86(iVar1), vParam0, 1) <= (fVar2 + fParam3))
							{
								if (IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_83(int iParam0)
{
	if (IS_ENTITY_VISIBLE_TO_SCRIPT(GET_PLAYER_PED(iParam0)) || Global_2424047[iParam0 /*416*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_84(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_85(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589819[iParam0 /*818*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_85(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
	}
	if (Global_1312847[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

Vector3 func_86(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_89() && Global_1589819[iVar0 /*818*/].f_789) && !func_88(Global_1589819[iVar0 /*818*/].f_790))
	{
		return Global_1589819[iVar0 /*818*/].f_790;
	}
	return func_87(iParam0);
}

Vector3 func_87(int iParam0)
{
	return GET_ENTITY_COORDS(GET_PLAYER_PED(iParam0), 0);
}

int func_88(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_89()
{
	return Global_2448756.f_16;
}

int func_90(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_37(iVar1, bParam4, bParam5))
			{
				if (_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!IS_PED_INJURED(GET_PLAYER_PED(iVar1)) && func_83(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && GET_PLAYER_TEAM(PLAYER_ID()) != GET_PLAYER_TEAM(iVar1))) || GET_PLAYER_TEAM(PLAYER_ID()) == -1)
						{
							if (((GET_PLAYER_TEAM(PLAYER_ID()) == -1 && uParam9) && bParam6) && func_91(iVar1))
							{
							}
							else if (DOES_ENTITY_EXIST(GET_PLAYER_PED(iVar1)))
							{
								if (GET_DISTANCE_BETWEEN_COORDS(func_87(iVar1), vParam0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_91(int iParam0)
{
	if (func_96(PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2505680 = { func_95(iParam0) };
	if (NETWORK_IS_FRIEND(&Global_2505680))
	{
		return 1;
	}
	if (func_92(PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_92(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_94(iParam0);
	if (!iVar0 == func_93())
	{
		if (iVar0 == func_94(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_93()
{
	return -1;
}

int func_94(int iParam0)
{
	if (iParam0 != func_93())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_93();
}

struct<13> func_95(var uParam0)
{
	struct<13> Var0;
	
	NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

int func_96(var uParam0, var uParam1)
{
	if (_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2505680 = { func_95(uParam0) };
		Global_2505693 = { func_95(uParam1) };
		if (NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2505680))
		{
			if (NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2505693))
			{
				NETWORK_CLAN_PLAYER_GET_DESC(&Global_2505610, 35, &Global_2505680);
				NETWORK_CLAN_PLAYER_GET_DESC(&Global_2505645, 35, &Global_2505693);
				if (Global_2505610 == Global_2505645)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_97(var uParam0, var uParam1)
{
	float fVar0;
	
	*uParam0 = { func_98(Local_60.f_6 + Vector(200f, 0f, 0f), (400f / 2f), 400f, (200f / 2f)) };
	*uParam1 = GET_HEADING_FROM_VECTOR_2D((Local_60.f_6 - *uParam0), (Local_60.f_6.f_1 - uParam0->f_1));
	fVar0 = _0x8ABE8608576D9CE3((*uParam0 - 400f), (uParam0->f_1 - 400f), (*uParam0 + 400f), (uParam0->f_1 + 400f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
}

Vector3 func_98(vector3 vParam0, float fParam3, float fParam4, float fParam5)
{
	vector3 vVar0;
	float fVar3;
	
	vVar0 = { GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam5 / 2f);
	vVar0 = { func_99(vVar0, GET_RANDOM_FLOAT_IN_RANGE(fParam3, fParam4)) };
	vVar0.z = GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_99(vector3 vParam0, float fParam3)
{
	float fVar0;
	
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_100(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_101(uParam0, bParam2, 0);
	if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (ABSI(GET_TIME_DIFFERENCE(GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (ABSI(GET_TIME_DIFFERENCE(GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_101(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

int func_102(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	REQUEST_MODEL(iParam0);
	return HAS_MODEL_LOADED(iParam0);
}

int func_103(var uParam0)
{
	if (uParam0->f_1)
	{
		if (ABSI(GET_TIME_DIFFERENCE(GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_104(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_101(uParam0, 0, 0);
		}
	}
}

void func_105()
{
	func_114();
	switch (vLocal_83[PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			if (Local_60.f_12 > 0)
			{
				vLocal_83[PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_110();
			func_106();
			break;
		
		case 2:
			func_140();
			break;
	}
}

void func_106()
{
	int iVar0;
	int iVar1;
	
	if (NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4))
	{
		if (func_37(PLAYER_ID(), 1, 1))
		{
			iVar1 = func_109(PLAYER_PED_ID());
			if (((((((((((((((((iVar1 == joaat("weapon_unarmed") || iVar1 == joaat("weapon_flare")) || iVar1 == joaat("weapon_knife")) || iVar1 == joaat("weapon_nightstick")) || iVar1 == joaat("weapon_bat")) || iVar1 == joaat("weapon_hammer")) || iVar1 == joaat("weapon_golfclub")) || iVar1 == joaat("weapon_crowbar")) || iVar1 == joaat("weapon_molotov")) || iVar1 == joaat("weapon_grenade")) || iVar1 == joaat("weapon_grenadelauncher")) || iVar1 == joaat("weapon_grenadelauncher_smoke")) || iVar1 == joaat("weapon_petrolcan")) || iVar1 == joaat("weapon_rpg")) || iVar1 == joaat("weapon_smokegrenade")) || iVar1 == joaat("weapon_stickybomb")) || iVar1 == joaat("weapon_bzgas")) || iVar1 == joaat("weapon_bottle"))
			{
				iVar1 = Global_1312415;
			}
			GET_MAX_AMMO(PLAYER_PED_ID(), iVar1, &iVar0);
			if ((func_108(iVar1) && func_107(iVar1)) && GET_AMMO_IN_PED_WEAPON(PLAYER_PED_ID(), iVar1) < iVar0)
			{
			}
			else if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (!IS_BIT_SET(uLocal_180, 12))
				{
					if (!IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (Local_60.f_18)
						{
							func_71("BALD_HELP3", -1);
						}
						else
						{
							func_71("AMD_HELP3", -1);
						}
						SET_BIT(&uLocal_180, 12);
					}
				}
				else if (!IS_BIT_SET(uLocal_180, 13))
				{
					if (!IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_4))
						{
							if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), NET_TO_OBJ(Local_60.f_4), 10f, 10f, 10f, 0, 1, 0))
							{
								if (func_100(&uLocal_185, 20000, 0))
								{
									if (!Local_60.f_18)
									{
										func_71("AMD_HELP3", -1);
									}
									SET_BIT(&uLocal_180, 13);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_107(int iParam0)
{
	if ((((((((((iParam0 == joaat("gadget_parachute") || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_nightstick")) || iParam0 == joaat("weapon_golfclub")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_bottle")) || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hatchet"))
	{
		return 0;
	}
	return 1;
}

int func_108(int iParam0)
{
	if (iParam0 == joaat("weapon_flare"))
	{
		return 0;
	}
	return 1;
}

var func_109(var uParam0)
{
	var uVar0;
	
	GET_CURRENT_PED_WEAPON(uParam0, &uVar0, 1);
	return uVar0;
}

void func_110()
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_4))
	{
		if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_60.f_4) || (!_NETWORK_CAN_NETWORK_ID_BE_SEEN(Local_60.f_4) && NETWORK_IS_HOST_OF_THIS_SCRIPT()))
		{
			if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_5))
			{
				if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_60.f_5) || (!_NETWORK_CAN_NETWORK_ID_BE_SEEN(Local_60.f_5) && NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					if (func_113(Local_60.f_4) && func_113(Local_60.f_5))
					{
						if (!IS_BIT_SET(uLocal_180, 8))
						{
							if (IS_BIT_SET(uLocal_180, 7))
							{
								if (!IS_ENTITY_PLAYING_ANIM(NET_TO_OBJ(Local_60.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									SET_BIT(&uLocal_180, 8);
									func_3(&(Local_60.f_5));
									if (Local_60.f_18 == 1)
									{
										func_67(NET_TO_OBJ(Local_60.f_4));
									}
								}
							}
						}
						if (!IS_BIT_SET(uLocal_180, 7))
						{
							if (IS_BIT_SET(uLocal_180, 6))
							{
								if (IS_ENTITY_PLAYING_ANIM(NET_TO_OBJ(Local_60.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									SET_BIT(&uLocal_180, 7);
								}
							}
						}
						if (!IS_BIT_SET(uLocal_180, 6))
						{
							SET_DAMPING(NET_TO_OBJ(Local_60.f_4), 2, 0.0245f);
							if (func_111())
							{
								PLAY_ENTITY_ANIM(NET_TO_OBJ(Local_60.f_5), "P_cargo_chute_S_crumple", "P_cargo_chute_S", 1000f, 0, 0, 0, 0, 0);
								SET_BIT(&uLocal_180, 6);
								if (DOES_BLIP_EXIST(uLocal_181))
								{
									SET_BLIP_ALPHA(uLocal_181, 255);
								}
							}
						}
					}
				}
			}
			if (!IS_BIT_SET(uLocal_180, 14))
			{
				if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_19))
				{
					if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_60.f_19) || (!_NETWORK_CAN_NETWORK_ID_BE_SEEN(Local_60.f_19) && NETWORK_IS_HOST_OF_THIS_SCRIPT()))
					{
						if (func_113(Local_60.f_19))
						{
							SET_DAMPING(NET_TO_OBJ(Local_60.f_19), 2, 0.1f);
							if (HAS_OBJECT_BEEN_BROKEN(NET_TO_OBJ(Local_60.f_19), 0))
							{
								if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_4))
								{
									DETACH_ENTITY(NET_TO_OBJ(Local_60.f_4), 1, 1);
									if (Local_60.f_18 == 1)
									{
										func_67(NET_TO_OBJ(Local_60.f_4));
									}
								}
								SET_BIT(&uLocal_180, 14);
							}
						}
						if (!IS_BIT_SET(Local_60.f_1, 8) && IS_BIT_SET(uLocal_180, 8))
						{
							if (func_113(Local_60.f_19))
							{
								if (!IS_ENTITY_WAITING_FOR_WORLD_COLLISION(NET_TO_OBJ(Local_60.f_19)) && HAS_COLLISION_LOADED_AROUND_ENTITY(NET_TO_OBJ(Local_60.f_19)))
								{
									if (HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(NET_TO_OBJ(Local_60.f_19)))
									{
										bVar0 = true;
									}
									else if (!IS_ENTITY_IN_AIR(NET_TO_OBJ(Local_60.f_19)) && IS_ENTITY_STATIC(NET_TO_OBJ(Local_60.f_19)))
									{
										bVar0 = true;
									}
									if (bVar0)
									{
										SET_DISABLE_BREAKING(NET_TO_OBJ(Local_60.f_19), 0);
										SET_BIT(&(Local_60.f_1), 8);
									}
									if (Local_60.f_18 == 1)
									{
										func_67(NET_TO_OBJ(Local_60.f_4));
									}
								}
							}
						}
					}
				}
			}
			vVar1 = { GET_ENTITY_COORDS(NET_TO_OBJ(Local_60.f_4), 1) };
			if (vVar1.z < -50f && !IS_ENTITY_IN_WATER(NET_TO_OBJ(Local_60.f_4)))
			{
				if (func_113(Local_60.f_4))
				{
					SET_ENTITY_COORDS(NET_TO_OBJ(Local_60.f_4), Local_60.f_6, 1, 0, 0, 1);
					if (Local_60.f_18 == 1)
					{
						func_67(NET_TO_OBJ(Local_60.f_4));
					}
				}
			}
			if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_4))
			{
				if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_19) && IS_ENTITY_ATTACHED(NET_TO_OBJ(Local_60.f_4)))
				{
					uVar4 = NET_TO_OBJ(Local_60.f_19);
				}
				else
				{
					uVar4 = NET_TO_OBJ(Local_60.f_4);
				}
			}
			if (DOES_ENTITY_EXIST(uVar4))
			{
				if (!IS_BIT_SET(uLocal_180, 16))
				{
					if (GET_ENTITY_SUBMERGED_LEVEL(uVar4) >= 0.9f)
					{
						if (GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16) != -1)
						{
							SET_VARIABLE_ON_SOUND(GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16), "Crate_Underwater", 1f);
						}
						SET_BIT(&uLocal_180, 16);
					}
				}
				else if (GET_ENTITY_SUBMERGED_LEVEL(uVar4) < 0.9f)
				{
					if (GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16) != -1)
					{
						SET_VARIABLE_ON_SOUND(GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16), "Crate_Underwater", 0f);
					}
					CLEAR_BIT(&uLocal_180, 16);
				}
			}
		}
	}
}

int func_111()
{
	int iVar0;
	
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_19))
	{
		if (!IS_ENTITY_IN_AIR(NET_TO_OBJ(Local_60.f_19)))
		{
			iVar0 = 1;
		}
		if (HAS_OBJECT_BEEN_BROKEN(NET_TO_OBJ(Local_60.f_19), 0))
		{
			iVar0 = 1;
		}
		if (IS_ENTITY_IN_WATER(NET_TO_OBJ(Local_60.f_19)))
		{
			iVar0 = 1;
		}
		if (func_112())
		{
			iVar0 = 1;
		}
		if (iVar0 == 1)
		{
			if (func_113(Local_60.f_19))
			{
				SET_DISABLE_BREAKING(NET_TO_OBJ(Local_60.f_19), 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_112()
{
	float fVar0;
	
	fVar0 = GET_ENTITY_PITCH(NET_TO_OBJ(Local_60.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	fVar0 = GET_ENTITY_ROLL(NET_TO_OBJ(Local_60.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	return 0;
}

int func_113(var uParam0)
{
	if (NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

void func_114()
{
	int iVar0;
	
	iVar0 = GET_NUM_RESERVED_MISSION_VEHICLES(0, 0);
	if (Local_60.f_13 != iVar0)
	{
		if (Local_60.f_13 > 0 || !NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
		{
			if (Local_60.f_13 < iVar0 || func_122(Local_60.f_13, 0, 1))
			{
				RESERVE_NETWORK_MISSION_VEHICLES(Local_60.f_13);
			}
		}
	}
	iVar0 = GET_NUM_RESERVED_MISSION_PEDS(0, 0);
	if (Local_60.f_14 != iVar0)
	{
		if (Local_60.f_14 > 0 || !NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_3))
		{
			if (Local_60.f_14 < iVar0 || func_121(Local_60.f_14, 0, 1))
			{
				RESERVE_NETWORK_MISSION_PEDS(Local_60.f_14);
			}
		}
	}
	iVar0 = GET_NUM_RESERVED_MISSION_OBJECTS(0, 0);
	if (Local_60.f_15 != iVar0)
	{
		if (Local_60.f_15 < iVar0 || func_115(Local_60.f_15, 0, 1))
		{
			RESERVE_NETWORK_MISSION_OBJECTS(Local_60.f_15);
		}
	}
}

int func_115(int iParam0, bool bParam1, bool bParam2)
{
	return func_116(2, iParam0, 1, bParam1, bParam2);
}

int func_116(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!IS_BIT_SET(Global_1383928, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_120(iParam0) - func_119(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_119(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_120(iParam0) - func_118(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_119(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_120(iParam0) - func_119(iParam0, 1));
		}
		if (!bParam4 && Global_1589819[PLAYER_ID() /*818*/] != 3)
		{
			iVar1 = (iVar1 - func_117(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1383928.f_1;
			break;
		
		case 1:
			return Global_1383928.f_2;
			break;
		
		case 2:
			return Global_1383928.f_3;
			break;
	}
	return 0;
}

int func_119(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424047[iVar0 /*416*/].f_209;
			}
			else
			{
				return GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424047[iVar0 /*416*/].f_210;
			}
			else
			{
				return GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424047[iVar0 /*416*/].f_211;
			}
			else
			{
				return GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1383936;
			break;
		
		case 1:
			return Global_1383937;
			break;
		
		case 2:
			return Global_1383938;
			break;
	}
	return 0;
}

int func_121(int iParam0, bool bParam1, bool bParam2)
{
	return func_116(0, iParam0, 1, bParam1, bParam2);
}

int func_122(int iParam0, bool bParam1, bool bParam2)
{
	return func_116(1, iParam0, 1, bParam1, bParam2);
}

void func_123()
{
	if (!IS_BIT_SET(uLocal_180, 10))
	{
		if (func_35(Local_60.f_2))
		{
			OPEN_SEQUENCE_TASK(&uLocal_182);
			TASK_VEHICLE_DRIVE_TO_COORD(0, NET_TO_VEH(Local_60.f_2), Local_60.f_6 + Vector(50f, 0f, 0f), 60f, 0, joaat("cuban800"), 262144, 15f, -1f);
			TASK_VEHICLE_DRIVE_TO_COORD(0, NET_TO_VEH(Local_60.f_2), Local_60.f_9, 60f, 0, joaat("cuban800"), 262144, -1f, -1f);
			CLOSE_SEQUENCE_TASK(uLocal_182);
			SET_BIT(&uLocal_180, 10);
		}
	}
}

int func_124()
{
	return Local_60;
}

int func_125()
{
	int iVar0;
	
	iVar0 = joaat("prop_box_ammo02a");
	if (Local_60.f_18 == 1)
	{
		iVar0 = 1688540826;
	}
	REQUEST_MODEL(iVar0);
	REQUEST_MODEL(joaat("p_cargo_chute_s"));
	if ((HAS_MODEL_LOADED(iVar0) && HAS_MODEL_LOADED(joaat("p_cargo_chute_s"))) && func_126())
	{
		return 1;
	}
	return 0;
}

int func_126()
{
	REQUEST_ANIM_DICT("P_cargo_chute_S");
	if (HAS_ANIM_DICT_LOADED("P_cargo_chute_S"))
	{
		return 1;
	}
	return 0;
}

int func_127(int iParam0)
{
	return vLocal_83[iParam0 /*3*/];
}

int func_128()
{
	var uVar0;
	
	func_136(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_135())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_134())
	{
		return 1;
	}
	if (func_133(157))
	{
		if (!func_132())
		{
			return 1;
		}
	}
	if (func_133(155))
	{
		return 1;
	}
	if (!NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_129() != 0)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_129()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_129()
{
	switch (func_131())
	{
		case 0:
			return func_130();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_130()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_131()
{
	return Global_25765;
}

bool func_132()
{
	return Global_2448756.f_586;
}

int func_133(int iParam0)
{
	if (GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_134()
{
	return Global_2458613;
}

bool func_135()
{
	return Global_2448756.f_581;
}

void func_136(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 171)
		{
			GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -275425152:
					func_137(iVar0);
					break;
				
				case -42615386:
					GET_EVENT_DATA(1, iVar0, &vVar4, 4);
					if (vVar4.z == 1267052711)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_137(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_37(vVar0.y, 1, 1))
		{
			uVar3 = GET_PLAYER_PED(vVar0.y);
			if (DOES_ENTITY_EXIST(uVar3))
			{
				if (IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (IS_VEHICLE_WINDOW_INTACT(uVar4, vVar0.z) && NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_138(uVar4, &bVar5))
						{
							REMOVE_VEHICLE_WINDOW(uVar4, vVar0.z);
						}
						if (bVar5)
						{
							SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_138(var uParam0, var uParam1)
{
	if (DOES_ENTITY_EXIST(uParam0))
	{
		if (!IS_ENTITY_A_MISSION_ENTITY(uParam0))
		{
			if (NETWORK_GET_ENTITY_IS_LOCAL(uParam0))
			{
				if (!IS_THIS_MODEL_A_TRAIN(GET_ENTITY_MODEL(uParam0)))
				{
					SET_ENTITY_AS_MISSION_ENTITY(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0, 0))
		{
			if (NETWORK_HAS_CONTROL_OF_ENTITY(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_139()
{
	WAIT(0);
}

void func_140()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (DOES_BLIP_EXIST(uLocal_181))
	{
		REMOVE_BLIP(&uLocal_181);
	}
	if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 < 250)
		{
			if (iVar1 == 0)
			{
				if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_19))
				{
					if (HAS_OBJECT_BEEN_BROKEN(NET_TO_OBJ(Local_60.f_19), 0))
					{
						if (func_113(Local_60.f_19))
						{
							SET_DISABLE_BREAKING(NET_TO_OBJ(Local_60.f_19), 0);
							iVar1 = 1;
						}
					}
					else
					{
						iVar1 = 1;
					}
				}
				else
				{
					iVar1 = 1;
				}
			}
			if (iVar2 == 0)
			{
				if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_4))
				{
					if (IS_ENTITY_ATTACHED(NET_TO_OBJ(Local_60.f_4)))
					{
						if (func_113(Local_60.f_4))
						{
							DETACH_ENTITY(NET_TO_OBJ(Local_60.f_4), 1, 1);
							iVar2 = 1;
						}
					}
					else
					{
						iVar2 = 1;
					}
				}
				else
				{
					iVar2 = 1;
				}
			}
			if (iVar3 == 0)
			{
				if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_5))
				{
					if (func_113(Local_60.f_5))
					{
						func_3(&(Local_60.f_5));
						iVar3 = 1;
					}
				}
				else
				{
					iVar3 = 1;
				}
			}
			if ((iVar2 == 1 && iVar3 == 1) && iVar1 == 1)
			{
				iVar0 = 9999;
			}
			else
			{
				WAIT(0);
			}
			iVar0++;
		}
		Local_60 = 4;
		func_144(func_145(1, 1), 8, func_93());
	}
	func_143();
	func_66();
	func_142();
	func_141();
}

void func_141()
{
	TERMINATE_THIS_THREAD();
}

void func_142()
{
	if (IS_BIT_SET(uLocal_180, 10))
	{
		CLEAR_SEQUENCE_TASK(&uLocal_182);
	}
}

void func_143()
{
	if (iLocal_183 != 0)
	{
		if (DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_183))
		{
			STOP_PARTICLE_FX_LOOPED(iLocal_183, 0);
			iLocal_183 = 0;
		}
	}
}

void func_144(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0 = -418126478;
	Var0.f_1 = PLAYER_ID();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		_0xA40CC53DF8E50837(1, &Var0, 6, iParam0);
	}
}

int func_145(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = INT_TO_PLAYERINDEX(iVar1);
		if (func_37(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					SET_BIT(&uVar0, iVar1);
				}
				else if (!func_84(iVar2, 0))
				{
					SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_146(struct<21> Param0)
{
	int iVar0;
	
	func_150(func_151(Param0), Param0);
	RESERVE_NETWORK_MISSION_PEDS(1);
	RESERVE_NETWORK_MISSION_VEHICLES(1);
	RESERVE_NETWORK_MISSION_OBJECTS(2);
	func_148(0, -1, 0);
	NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_60, 23);
	NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_83, 97);
	if (!func_147())
	{
		return 0;
	}
	SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_60.f_17 = PLAYER_ID();
		Local_60.f_6 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER_PED_ID(), 0f, (5f * 1.5f), 0f) };
		Local_60.f_13 = 1;
		Local_60.f_14 = 1;
		Local_60.f_15 = 3;
		Local_60.f_9 = { 0f, 0f, 500f };
		if (Param0.f_20 == 3)
		{
			Local_60.f_18 = 1;
		}
		iVar0 = GET_RANDOM_INT_IN_RANGE(0, 3);
		if (iVar0 == 1)
		{
			Local_60.f_9 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_60.f_9 = -9000f;
		}
		iVar0 = GET_RANDOM_INT_IN_RANGE(0, 3);
		if (iVar0 == 1)
		{
			Local_60.f_9.f_1 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_60.f_9.f_1 = -9000f;
		}
		if (Local_60.f_9 == 0f && Local_60.f_9.f_1 == 0f)
		{
			Local_60.f_9 = { -9000f, 5000f, 500f };
		}
	}
	iLocal_184 = NETWORK_IS_IN_TUTORIAL_SESSION();
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		vLocal_83[PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	}
	return 1;
}

int func_147()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_135())
		{
			return 0;
		}
		if (func_133(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		WAIT(0);
	}
	return 0;
}

int func_148(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_141();
			}
			else
			{
				return 0;
			}
		}
		if (!func_149())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_141();
					}
					else
					{
						return 0;
					}
				}
				if (func_135())
				{
					if (!bParam2)
					{
						func_141();
					}
					else
					{
						return 0;
					}
				}
				if (func_133(155))
				{
					if (!bParam2)
					{
						func_141();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_141();
				}
				else
				{
					return 0;
				}
			}
		}
		WAIT(0);
		iVar0 = NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_141();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_141();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_149()
{
	return Global_1312844;
}

void func_150(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_141();
	}
	NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 137:
			return 32;
		
		case 138:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 132:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 133:
			return 32;
		
		case 134:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 2;
		
		case 148:
			return 1;
		
		case 144:
			return 2;
		
		case 145:
			return 4;
		
		case 146:
			return 2;
		
		case 147:
			return 2;
		
		case 129:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
			return 0;
		
		case 163:
			return 1;
		
		case 156:
			return 4;
		
		case 159:
			return 4;
		
		case 160:
			return 1;
		
		case 161:
			return 8;
		
		case 162:
			return 8;
		
		case 157:
			return 16;
		
		case 158:
			return 32;
		
		default:
	}
	return 0;
}
