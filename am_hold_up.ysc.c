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
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	struct<73> Local_103 = { 0, 0, 3, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1101004800, 0 } ;
	struct<10> Local_104[32];
	struct<54> Local_105 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	char* sLocal_109 = NULL;
	int iLocal_110 = 0;
	vector3 vLocal_111 = { 0f, 0f, 0f };
	vector3 vLocal_112 = { 0f, 0f, 0f };
	float fLocal_113 = 0f;
	int iLocal_114 = 0;
	vector3 vLocal_115 = { 0f, 0f, 0f };
	vector3 vLocal_116 = { 0f, 0f, 0f };
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	vector3 vLocal_127 = { 0f, 0f, 0f };
	float fLocal_128 = 0f;
	vector3 vLocal_129 = { 0f, 0f, 0f };
	float fLocal_130 = 0f;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	vector3 vLocal_143 = { 0f, 0f, 0f };
	vector3 vLocal_144 = { 0f, 0f, 0f };
	vector3 vLocal_145 = { 0f, 0f, 0f };
	vector3 vLocal_146 = { 0f, 0f, 0f };
	float fLocal_147 = 0f;
	vector3 vLocal_148 = { 0f, 0f, 0f };
	vector3 vLocal_149 = { 0f, 0f, 0f };
	float fLocal_150 = 0f;
	var uLocal_151 = 16;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
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
	int iLocal_316[5] = { 0, 0, 0, 0, 0 };
	int iLocal_317[5] = { 0, 0, 0, 0, 0 };
	float fLocal_318 = 0f;
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
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	vector3 vLocal_342 = { 0f, 0f, 0f };
	struct<21> Local_343 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()//Position - 0x0
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
	iLocal_17 = 4294967295;
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
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_110 = joaat("mp_m_shopkeep_01");
	iLocal_114 = 4294967295;
	iLocal_117 = 4294967295;
	iLocal_131 = 303280717;
	iLocal_132 = SYSTEM::ROUND(Global_40001.f_975);
	iLocal_133 = SYSTEM::ROUND(Global_40001.f_971) + 1;
	iLocal_134 = 1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_437(ScriptParam_343))
		{
			func_432();
		}
		if (func_431(1))
		{
			func_423(CAM::_0xDC9DA9E8789F5246(), 0, 98816);
		}
	}
	while (true)
	{
		func_422();
		if (func_412())
		{
			func_432();
		}
		func_410();
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 6))
		{
			if (func_431(1))
			{
				func_423(CAM::_0xDC9DA9E8789F5246(), 1, 0);
				func_407();
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_105.f_35), 7);
				func_406();
			}
		}
		switch (func_405(NETSHOP::_NETWORK_SHOP_BASKET_START()))
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
				if (STREAMING::HAS_ANIM_DICT_LOADED("mp_am_hold_up"))
				{
					if (func_395())
					{
						unk_0xE2BBD32891C18569(func_394(Local_105), 0);
						if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103))
						{
							if (func_393() > 0)
							{
								if (!func_392(Local_103))
								{
									func_391(&uLocal_151, 3, NETWORK::NET_TO_PED(Local_103), &(Local_103.f_2E), 1, 0);
									func_390();
								}
								MISC::SET_BIT(&(Local_105.f_34), 22);
								Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_4 = 2;
							}
						}
					}
				}
				if (func_393() == 6)
				{
					Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_4 = 5;
				}
				break;
			
			case 2:
				func_266(&Local_105, vLocal_115, vLocal_116, &Local_103, &(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_PED(Local_103), vLocal_148, vLocal_149, fLocal_150, 0, 1, 0), 0);
				func_259();
				if (func_393() == 2)
				{
					func_133();
				}
				else if (func_393() == 6)
				{
					Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_4 = 5;
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_144, 30f, 30f, 30f, 0, 1, 0))
				{
					Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_4 = 6;
				}
				break;
			
			case 5:
				func_132(&(Local_103.f_45));
				if (func_131(&(Local_103.f_45)))
				{
					Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_4 = 6;
				}
				break;
			
			case 4:
				Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_4 = 6;
			
			case 6:
				func_51();
				func_432();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_393())
			{
				case 0:
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 16))
					{
						func_49(func_50(0));
						func_49(func_50(1));
						func_49(func_50(2));
						STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
						if (STREAMING::HAS_ANIM_DICT_LOADED("mp_am_hold_up"))
						{
							if (func_395())
							{
								MISC::CLEAR_AREA(vLocal_115, 1.5f, 0, 1, 0, true);
								MISC::CLEAR_AREA(vLocal_112, 1.5f, 0, 1, 0, true);
								MISC::SET_BIT(&(Local_105.f_34), 16);
							}
						}
					}
					else if (func_47())
					{
						Local_103.f_C = 2;
					}
					break;
				
				case 2:
					func_46();
					func_43();
					func_28();
					func_27();
					func_20();
					func_19();
					func_11();
					func_10();
					if (func_4())
					{
						func_1();
						Local_103.f_C = 6;
					}
					break;
				
				case 6:
					func_1();
					break;
				}
		}
	}
}

void func_1()//Position - 0x394
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_D))
	{
		if (func_3(Local_103.f_D))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(Local_103.f_D)))
			{
				ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_103.f_D), 1, 1);
				func_2(&(Local_103.f_D));
			}
		}
	}
}

void func_2(var uParam0)//Position - 0x3D7
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_3(var uParam0)//Position - 0x3FB
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

int func_4()//Position - 0x41D
{
	if (func_5())
	{
		return 1;
	}
	return 0;
}

int func_5()//Position - 0x431
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 2))
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 3))
	{
		return 1;
	}
	if (!func_9())
	{
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 11) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 19)) || (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 9) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 20)))
		{
			func_6(Local_105.f_32, 1, func_7());
			return 1;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 18))
		{
			func_6(Local_105.f_32, 1, func_7());
			return 1;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 18))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 7))
		{
			func_6(Local_105.f_32, 1, func_7());
			MISC::SET_BIT(&(Local_103.f_18), 7);
		}
	}
	return 0;
}

void func_6(var uParam0, int iParam1, int iParam2)//Position - 0x501
{
	struct<4> Var0;
	
	Var0 = 2588790787;
	Var0.f_1 = CAM::_0xDC9DA9E8789F5246();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 4, iParam2);
	}
}

int func_7()//Position - 0x539
{
	return func_8(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("freemode", 4294967295, 0));
}

int func_8(int iParam0)//Position - 0x54E
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_9()//Position - 0x560
{
	if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 13) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 27)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 28))
	{
		return 1;
	}
	return 0;
}

void func_10()//Position - 0x59A
{
	var uVar0;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 21))
	{
		if (func_392(Local_103))
		{
			Local_103.f_48 = NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_103, &uVar0);
			MISC::SET_BIT(&(Local_103.f_17), 21);
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 19))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 10) && Local_103.f_25 <= 0f)
		{
			MISC::SET_BIT(&(Local_103.f_17), 19);
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 17))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 20))
		{
			if (func_3(Local_103.f_D))
			{
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_103.f_D), 0, 0);
				MISC::SET_BIT(&(Local_103.f_18), 17);
			}
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 6))
	{
		if (Global_26862F.f_8 == 1)
		{
			MISC::SET_BIT(&(Local_103.f_17), 6);
			MISC::SET_BIT(&(Local_103.f_17), 16);
		}
	}
}

int func_11()//Position - 0x667
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() || !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_19, 0))
	{
		return 0;
	}
	if (Local_103.f_42 != 6)
	{
		if (Local_103.f_42 > 0 && func_392(Local_103.f_F))
		{
			Local_103.f_42 = 6;
			return 0;
		}
		switch (Local_103.f_42)
		{
			case 0:
				if (!func_17(&uLocal_331, 10000, 0))
				{
					iVar0 = PED::GET_RANDOM_PED_AT_COORD(vLocal_148, 20f, 20f, 20f, 4294967295);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
						{
							iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
							if (((((((iVar1 != joaat("mp_m_freemode_01") && iVar1 != joaat("mp_f_freemode_01")) && !PED::IS_COP_PED_IN_AREA_3D(vLocal_148, 25f, 25f, 25f)) && !ENTITY::IS_ENTITY_AT_COORD(iVar0, vLocal_143, 1f, 1f, 2f, 0, 1, 0)) && !WEAPON::IS_PED_ARMED(iVar0, 7)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar0, 1)) && PED::IS_PED_HUMAN(iVar0)) && func_16(iVar1))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
								{
									if (func_15(&(Local_103.f_F), iVar0, 1, 0))
									{
										WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103.f_F), joaat("weapon_pistol"), 25000, 0);
										PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_103.f_F), 1);
										Local_103.f_42 = 1;
										MISC::SET_BIT(&(Local_103.f_19), 1);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_103.f_F), Global_18084A);
										PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_103.f_F), 2);
										unk_0x65E471E4A2D56226(NETWORK::NET_TO_PED(Local_103.f_F), SYSTEM::ROUND((200f * Global_40001.f_99)), 0);
										func_391(&uLocal_151, 4, NETWORK::NET_TO_PED(Local_103.f_F), "StoreHero", 1, 0);
										BRAIN::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_103.f_F), func_14(), 0, 1);
									}
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 9) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 5)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 4))
				{
					Local_103.f_42 = 2;
				}
				break;
			
			case 2:
				if (func_17(&(Local_103.f_43), 3000, 0) || (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_F), 1227113341) != 0 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_F), 1227113341) != 1))
				{
					func_13(&(Local_103.f_43));
					Local_103.f_42 = 3;
				}
				break;
			
			case 3:
				if (((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 5) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_19, 8)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_19, 9)) || func_17(&(Local_103.f_43), 5000, 0))
				{
					if (func_12() || func_17(&(Local_103.f_43), 5000, 0))
					{
						Local_103.f_42 = 4;
					}
					else
					{
						Local_103.f_42 = 5;
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
			}
	}
	return 1;
}

int func_12()//Position - 0x946
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_13(var uParam0)//Position - 0x967
{
	uParam0->f_1 = 0;
}

char* func_14()//Position - 0x974
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 30)
	{
		return "WORLD_HUMAN_SMOKING";
	}
	if (iVar0 >= 30 && iVar0 < 70)
	{
		return "WORLD_HUMAN_HANG_OUT_STREET";
	}
	return "WORLD_HUMAN_STAND_MOBILE";
}

int func_15(var uParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x9B3
{
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, bParam2, iParam3);
	*uParam0 = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iParam1);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam2)
		{
			unk_0xF2A50F5F6E7737D8(*uParam0, 1);
		}
		return 1;
	}
	return 0;
}

int func_16(int iParam0)//Position - 0x9EA
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01"))
	{
		return 0;
	}
	return 1;
}

int func_17(var uParam0, int iParam1, bool bParam2)//Position - 0xCE8
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_18(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_18(var uParam0, bool bParam1, bool bParam2)//Position - 0xD46
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = HUD::_0x13C4B962653A5280();
			}
			else
			{
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_19()//Position - 0xD8B
{
	if (Local_103.f_1E == 0)
	{
		if (Local_103.f_3 >= 2 && Local_103.f_3 != 9)
		{
			Local_103.f_1E = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(99, AUDIO::_0x0626A247D2405330(), 60000f);
		}
	}
}

void func_20()//Position - 0xDC3
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_1, 5))
	{
		if (Local_103.f_29 > 0)
		{
			func_24();
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_1, 5))
			{
				return;
			}
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_1, 1))
	{
		if (Local_103.f_2 == 3 && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 9))
		{
			Local_103.f_2 = 0;
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&(Local_103.f_1), 1);
	}
	switch (Local_103.f_2)
	{
		case 0:
			if ((((func_3(Local_103) && !func_392(Local_103)) && func_3(Local_103.f_10[Local_103.f_1A])) && Local_103.f_3 != 8) && Local_103.f_3 != 7)
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_103)))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 9) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_1, 4))
					{
						Local_103.f_2 = 2;
						return;
					}
					if (!iLocal_108)
					{
						BRAIN::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_103), Local_103.f_2A, 1600);
						iLocal_108 = 1;
					}
					if (func_17(&uLocal_321, 100, 0))
					{
						fVar0 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(Local_103));
						fVar1 = (Local_103.f_2A - 10f);
						fVar2 = (Local_103.f_2A + 10f);
						if (fVar1 < 0f)
						{
							fVar2 = ((Local_103.f_2A - 10f) + 360f);
							fVar1 = ((Local_103.f_2A + 10f) + 360f);
						}
						else if (fVar2 >= 360f)
						{
							fVar2 = ((Local_103.f_2A - 10f) - 360f);
							fVar1 = ((Local_103.f_2A + 10f) - 360f);
						}
						if (((fVar0 < fVar2 && fVar0 > fVar1) && func_17(&uLocal_327, 1000, 0)) || func_17(&uLocal_327, 3125, 0))
						{
							BRAIN::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_103));
							Local_103.f_1B = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_PED(Local_103), -0.65f, 0.87f, -0.02f), vLocal_116, 2, 1, 0, 1065353216, 0, 1065353216);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_103), Local_103.f_1B, "mp_am_hold_up", func_23(Local_103.f_1A), 1.5f, -1.5f, 157, 16, 1148846080, 0);
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_10[Local_103.f_1A]))
							{
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_103.f_10[Local_103.f_1A]), true, 0);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_103.f_10[Local_103.f_1A]), Local_103.f_1B, "mp_am_hold_up", func_22(Local_103.f_1A), 4f, -4f, 8);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_103.f_1B);
							Local_103.f_2 = 1;
							iLocal_117 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_1B);
						}
					}
				}
			}
			break;
		
		case 1:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 9) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_1, 4))
			{
				iLocal_117 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_1B);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_117))
				{
					NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_103.f_1B);
				}
				Local_103.f_2 = 2;
				return;
			}
			if (iLocal_117 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_117) || func_17(&uLocal_323, 2000, 0))
				{
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_117) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_117) == 1f) || func_17(&uLocal_323, 2000, 0))
					{
						if ((func_3(Local_103) && !func_392(Local_103)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 9))
						{
							NETWORK::_0x5E3AA4CA2B6FB0EE(NETWORK::NET_TO_PED(Local_103));
						}
						NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_103.f_1B);
						Local_103.f_2 = 2;
					}
				}
			}
			else
			{
				iLocal_117 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_1B);
			}
			break;
		
		case 2:
			func_3(Local_103.f_10[Local_103.f_1A]);
			if (func_17(&uLocal_329, 1000, 0) && func_3(Local_103.f_10[Local_103.f_1A]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_OBJ(Local_103.f_10[Local_103.f_1A])))
				{
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_103.f_10[Local_103.f_1A]), false, 0);
					unk_0x346478B12F69D4E3(NETWORK::NET_TO_OBJ(Local_103.f_10[Local_103.f_1A]), true);
					ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_103.f_10[Local_103.f_1A]), func_21(Local_103.f_1A), 1, 0, 0, 1);
				}
				iLocal_117 = 4294967295;
				iLocal_108 = 0;
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_1, 4))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(Local_103.f_1), 4);
				}
				func_13(&uLocal_329);
				func_13(&uLocal_323);
				func_13(&uLocal_321);
				func_13(&uLocal_327);
				Local_103.f_2 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

Vector3 func_21(int iParam0)//Position - 0x1218
{
	switch (iParam0)
	{
		case 3:
			return vLocal_129 - Vector(1f, 0.2f, 0.1f);
		
		case 1:
			return vLocal_129 - Vector(1f, 0.2f, 0f);
		
		case 2:
			return vLocal_129 - Vector(1f, 0.2f, -0.1f);
		
		case 4:
			return vLocal_129 - Vector(1f, -0.2f, 0.1f);
		
		case 0:
			return vLocal_129 - Vector(1f, -0.2f, 0f);
		
		case 5:
			return vLocal_129 - Vector(1f, -0.2f, -0.1f);
		
		default:
	}
	return vLocal_129 - Vector(1f, 0f, -0.1f);
}

char* func_22(int iParam0)//Position - 0x12C8
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar";
		
		case 1:
			return "purchase_chocbar";
		
		case 2:
			return "purchase_chocbar";
		
		case 4:
			return "purchase_cigarette";
		
		case 0:
			return "purchase_beer";
		
		case 5:
			return "purchase_energydrink";
		
		default:
	}
	return "purchase_energydrink";
}

char* func_23(int iParam0)//Position - 0x1322
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar_shopkeeper";
		
		case 1:
			return "purchase_chocbar_shopkeeper";
		
		case 2:
			return "purchase_chocbar_shopkeeper";
		
		case 4:
			return "purchase_cigarette_shopkeeper";
		
		case 0:
			return "purchase_beer_shopkeeper";
		
		case 5:
			return "purchase_energydrink_shopkeeper";
		
		default:
	}
	return "purchase_energydrink_shopkeeper";
}

int func_24()//Position - 0x137E
{
	if (((((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_10[3]) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_10[1])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_10[2])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_10[4])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_10[0])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_10[5]))
	{
		if (((((func_49(func_26(3)) && func_49(func_26(1))) && func_49(func_26(2))) && func_49(func_26(4))) && func_49(func_26(0))) && func_49(func_26(5)))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 6, 0))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_10[3]))
				{
					if (func_25(&(Local_103.f_10[3]), func_26(3), func_21(3), 1, 1, 0, 1, 0))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_103.f_10[3]), INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_111));
						unk_0x346478B12F69D4E3(NETWORK::NET_TO_OBJ(Local_103.f_10[3]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_103.f_10[3]), false, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_10[1]))
				{
					if (func_25(&(Local_103.f_10[1]), func_26(1), func_21(1), 1, 1, 0, 1, 0))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_103.f_10[1]), INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_111));
						unk_0x346478B12F69D4E3(NETWORK::NET_TO_OBJ(Local_103.f_10[1]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_103.f_10[1]), false, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_10[2]))
				{
					if (func_25(&(Local_103.f_10[2]), func_26(2), func_21(2), 1, 1, 0, 1, 0))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_103.f_10[2]), INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_111));
						unk_0x346478B12F69D4E3(NETWORK::NET_TO_OBJ(Local_103.f_10[2]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_103.f_10[2]), false, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_10[4]))
				{
					if (func_25(&(Local_103.f_10[4]), func_26(4), func_21(4), 1, 1, 0, 1, 0))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_103.f_10[4]), INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_111));
						unk_0x346478B12F69D4E3(NETWORK::NET_TO_OBJ(Local_103.f_10[4]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_103.f_10[4]), false, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_10[0]))
				{
					if (func_25(&(Local_103.f_10[0]), func_26(0), func_21(0), 1, 1, 0, 1, 0))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_103.f_10[0]), INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_111));
						unk_0x346478B12F69D4E3(NETWORK::NET_TO_OBJ(Local_103.f_10[0]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_103.f_10[0]), false, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_10[5]))
				{
					if (func_25(&(Local_103.f_10[5]), func_26(5), func_21(5), 1, 1, 0, 1, 0))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_103.f_10[5]), INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_111));
						unk_0x346478B12F69D4E3(NETWORK::NET_TO_OBJ(Local_103.f_10[5]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_103.f_10[5]), false, 0);
					}
				}
			}
		}
	}
	else
	{
		MISC::SET_BIT(&(Local_103.f_1), 5);
		return 1;
	}
	return 0;
}

int func_25(var uParam0, int iParam1, vector3 vParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x16C1
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, vParam2, iParam4, bParam3, iParam5));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, vParam2, iParam4, bParam3, iParam5));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(*uParam0), iParam6);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
		{
			if (bParam3)
			{
				unk_0xF2A50F5F6E7737D8(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_26(int iParam0)//Position - 0x1743
{
	switch (iParam0)
	{
		case 3:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		case 4:
			return joaat("prop_ld_fags_01");
		
		case 0:
			return joaat("prop_ecola_can");
		
		case 5:
			return joaat("prop_amb_beer_bottle");
		
		default:
	}
	return joaat("prop_choc_pq");
}

void func_27()//Position - 0x17AB
{
	float fVar0;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 9))
	{
		if (Global_26862F.f_8 == 1 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 6))
		{
			if ((((func_3(Local_103.f_D) && func_3(Local_103)) && !func_392(Local_103)) && Local_103.f_3 != 8) && Local_103.f_3 != 7)
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_103)))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 30))
					{
						BRAIN::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_103), Local_103.f_2A, 1600);
						MISC::SET_BIT(&(Local_105.f_34), 30);
					}
					if (func_17(&uLocal_319, 100, 0))
					{
						fVar0 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(Local_103));
						if ((fVar0 > (Local_103.f_2A - 20f) && fVar0 < (Local_103.f_2A + 20f)) || func_17(&uLocal_325, 1500, 0))
						{
							BRAIN::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_103));
							Local_103.f_1D = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(vLocal_115, vLocal_116, 2, 1, 0, 1065353216, 0, 1065353216);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_103), Local_103.f_1D, "mp_am_hold_up", "holdup_victim_20s", 4f, -1.5f, 157, 16, 1148846080, 0);
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_D))
							{
								unk_0x346478B12F69D4E3(NETWORK::NET_TO_OBJ(Local_103.f_D), false);
								ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_103.f_D), 1);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_103.f_D), Local_103.f_1D, "mp_am_hold_up", "holdup_victim_20s_bag", 4f, -4f, 137);
							}
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_E))
							{
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_103.f_E), Local_103.f_1D, "mp_am_hold_up", "holdup_victim_20s_till", 4f, -4f, 137);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_103.f_1D);
							MISC::SET_BIT(&(Local_103.f_17), 9);
						}
					}
				}
				else
				{
					Local_103.f_3 = 8;
				}
			}
		}
	}
	else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 17))
	{
		iLocal_114 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_1D);
		if (iLocal_114 >= 0)
		{
			func_3(Local_103);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114))
			{
				PED::SET_PED_USING_ACTION_MODE(AUDIO::_0x0626A247D2405330(), 0, 4294967295, 0);
				MISC::SET_BIT(&(Local_103.f_17), 17);
			}
		}
	}
	else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 15))
	{
		iLocal_114 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_1D);
		if (iLocal_114 >= 0)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114))
			{
				func_3(Local_103);
				if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_D) && func_3(Local_103.f_D)) && func_3(Local_103))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_114) > 0.44f)
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_103.f_D), true, 0);
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_103.f_D), true, 0);
						MISC::SET_BIT(&(Local_103.f_18), 15);
					}
				}
			}
		}
	}
}

int func_28()//Position - 0x1A43
{
	int iVar0;
	float fVar1;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	func_41();
	if (Local_103.f_3 != 9)
	{
		if (func_392(Local_103))
		{
			Local_103.f_3 = 9;
			return 0;
		}
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 6) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 9)) && Local_103.f_3 < 8)
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_D) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_E))
			{
				Local_103.f_3 = 8;
			}
		}
		switch (Local_103.f_3)
		{
			case 0:
				if (!func_392(Local_103))
				{
					Local_103.f_3 = 1;
				}
				break;
			
			case 1:
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 4))
				{
					Local_103.f_3 = 2;
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 6) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 9))
				{
					Local_103.f_3 = 4;
				}
				else if (func_39() || func_33(0))
				{
					Local_103.f_3 = 8;
				}
				else if (func_31())
				{
					Local_103.f_3 = 7;
				}
				break;
			
			case 2:
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 6) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 9))
				{
					Local_103.f_3 = 4;
				}
				else if (func_39() || func_33(1))
				{
					Local_103.f_3 = 8;
				}
				else if (func_31())
				{
					Local_103.f_3 = 7;
				}
				break;
			
			case 3:
				if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), 1920390111) != 0 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), 1920390111) != 1)
				{
					Local_103.f_3 = 4;
				}
				else if (func_33(1))
				{
					Local_103.f_3 = 8;
				}
				else if (func_31())
				{
					Local_103.f_3 = 7;
				}
				break;
			
			case 4:
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 17))
				{
					iVar0 = 0;
					iLocal_114 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_1D);
					if (iLocal_114 >= 0)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114))
						{
							if (MISC::IS_BULLET_IN_AREA(vLocal_111, 3f, 0))
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 25))
								{
									MISC::SET_BIT(&(Local_103.f_17), 25);
								}
								Local_103.f_21 = (Local_103.f_21 + 0.35f);
							}
							fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_114);
							if (fVar1 >= 0.8f)
							{
								Local_103.f_25 = 1f;
							}
							else if (fVar1 <= 0.5f)
							{
								Local_103.f_25 = 0f;
							}
							else if (fVar1 > Local_103.f_25)
							{
								Local_103.f_25 = ((fVar1 - 0.5f) * 3.33f);
							}
							if (fVar1 >= 0.92f)
							{
								Local_103.f_25 = 1f;
								iVar0 = 1;
							}
						}
						else
						{
							iVar0 = 1;
						}
					}
					else
					{
						iVar0 = 1;
					}
					if (iVar0 == 1)
					{
						Local_103.f_3 = 6;
					}
					else if (func_33(1))
					{
						Local_103.f_3 = 8;
					}
					else if (func_31())
					{
						Local_103.f_3 = 7;
					}
				}
				break;
			
			case 5:
				if (func_39() || func_33(1))
				{
					Local_103.f_3 = 8;
				}
				break;
			
			case 6:
				func_29();
				if (func_39() || func_33(1))
				{
					Local_103.f_3 = 8;
				}
				else if (func_31())
				{
					Local_103.f_3 = 7;
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 3))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 4))
					{
						Local_103.f_3 = 7;
					}
				}
				break;
			
			case 8:
				func_29();
				break;
			
			case 7:
				break;
		}
	}
	else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 10))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103))
		{
			Local_103.f_2B = (Local_103.f_2B - 1);
			MISC::SET_BIT(&(Local_103.f_18), 10);
		}
	}
	return 1;
}

void func_29()//Position - 0x1DAF
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 2))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		iVar1 = (iLocal_134 + func_30());
		if (iVar0 < iVar1)
		{
			MISC::SET_BIT(&(Local_103.f_18), 3);
		}
		MISC::SET_BIT(&(Local_103.f_18), 2);
	}
}

int func_30()//Position - 0x1DF0
{
	int iVar0;
	
	iVar0 = (Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_24 - 1);
	if (iVar0 >= 4)
	{
		return 4;
	}
	return iVar0;
}

int func_31()//Position - 0x1E15
{
	int iVar0;
	int iVar1;
	
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 24) || PAD::IS_CONTROL_JUST_PRESSED(0, 257))
	{
		iVar0 = func_32(AUDIO::_0x0626A247D2405330());
		if ((((((iVar0 != joaat("weapon_unarmed") && iVar0 != 0) && iVar0 != joaat("vehicle_weapon_player_bullet")) && iVar0 != joaat("vehicle_weapon_player_buzzard")) && iVar0 != joaat("vehicle_weapon_player_laser")) && iVar0 != joaat("vehicle_weapon_tank")) && iVar0 != joaat("weapon_flare"))
		{
			iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
			if (((((((WEAPON::GET_AMMO_IN_PED_WEAPON(AUDIO::_0x0626A247D2405330(), iVar0) == 0 && iVar1 != 3566412244) && iVar1 != 507375312) && iVar1 != 0) && iVar1 != 4257178988) && iVar1 != 3493187224) && iVar1 != 431593103) && iVar1 != 3539449195)
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330()) == iLocal_139)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_32(int iParam0)//Position - 0x1F15
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
	return uVar0;
}

int func_33(int iParam0)//Position - 0x1F29
{
	int iVar0;
	struct<2> Var1;
	int iVar2;
	int iVar3;
	
	if (func_37(CAM::_0xDC9DA9E8789F5246(), 146))
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 5))
	{
		return 1;
	}
	if (PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_103)))
	{
		return 1;
	}
	if (func_36() || func_35())
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar0) == 182)
		{
			if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var1, 11))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var1) && ENTITY::IS_ENTITY_A_PED(Var1))
				{
					iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1);
					if (PED::IS_PED_INJURED(iVar2) && INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar2) == iLocal_139)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
						{
							iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1);
							if (iVar3 != NETWORK::NET_TO_PED(Local_103))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iParam0 == 1)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 5))
		{
			if (PED::IS_COP_PED_IN_AREA_3D(vLocal_145 - Vector(25f, 25f, 25f), vLocal_145 + Vector(25f, 25f, 25f)))
			{
				MISC::SET_BIT(&(Local_103.f_18), 5);
			}
		}
	}
	return 0;
}

int func_34()//Position - 0x2066
{
	if (Local_105.f_32 >= 15 && Local_105.f_32 <= 19)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(9, vLocal_145, 40f))
		{
			return 1;
		}
	}
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(4294967295, vLocal_145, vLocal_146, fLocal_147))
	{
		return 1;
	}
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(4294967295, vLocal_148, vLocal_149, fLocal_150))
	{
		return 1;
	}
	return 0;
}

int func_35()//Position - 0x20D0
{
	if ((MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(vLocal_148, vLocal_149, fLocal_150, joaat("weapon_grenade"), 0) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(vLocal_148, vLocal_149, fLocal_150, joaat("weapon_molotov"), 0)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(vLocal_148, vLocal_149, fLocal_150, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_36()//Position - 0x2131
{
	if ((MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(vLocal_145, vLocal_146, fLocal_147, joaat("weapon_grenade"), 0) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(vLocal_145, vLocal_146, fLocal_147, joaat("weapon_molotov"), 0)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(vLocal_145, vLocal_146, fLocal_147, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0, int iParam1)//Position - 0x2192
{
	if (Global_18CD5B[iParam0 /*560*/] == iParam1)
	{
		return func_38(iParam0);
	}
	return 0;
}

int func_38(int iParam0)//Position - 0x21B2
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

int func_39()//Position - 0x21D8
{
	if (func_40() || func_34())
	{
		return 1;
	}
	return 0;
}

int func_40()//Position - 0x21F6
{
	if (MISC::IS_BULLET_IN_ANGLED_AREA(vLocal_145, vLocal_146, fLocal_147, 0))
	{
		return 1;
	}
	if (MISC::IS_BULLET_IN_ANGLED_AREA(vLocal_148, vLocal_149, fLocal_150, 0))
	{
		return 1;
	}
	return 0;
}

void func_41()//Position - 0x2231
{
	if (Local_103.f_21 > 0f)
	{
		if (func_42(&(Local_103.f_22), 50, 0))
		{
			Local_103.f_21 = (Local_103.f_21 - 0.02f);
			if (Local_103.f_21 < 0f)
			{
				Local_103.f_21 = 0f;
			}
			func_13(&(Local_103.f_22));
		}
	}
}

int func_42(var uParam0, int iParam1, bool bParam2)//Position - 0x2274
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_18(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), *uParam0)) >= iParam1)
		{
			func_13(uParam0);
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		func_13(uParam0);
		return 1;
	}
	return 0;
}

void func_43()//Position - 0x22DE
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_124)))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_124));
		iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 11))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/], 5))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_D))
				{
					if (func_3(Local_103.f_D))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_103.f_D), 1, 1);
						func_45(&(Local_103.f_D));
					}
				}
				else
				{
					Local_103.f_26 = { Local_104[iLocal_124 /*10*/].f_7 };
					Local_103.f_2C = 7;
					MISC::SET_BIT(&(Local_103.f_17), 11);
				}
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 14))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/], 6))
			{
				MISC::SET_BIT(&(Local_103.f_17), 14);
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 15))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/], 7))
			{
				MISC::SET_BIT(&(Local_103.f_17), 15);
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 26))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/], 24))
			{
				MISC::SET_BIT(&(Local_103.f_17), 26);
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 22))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/], 22))
			{
				MISC::SET_BIT(&(Local_103.f_17), 22);
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 23))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/], 23))
			{
				MISC::SET_BIT(&(Local_103.f_17), 23);
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 30))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/], 25))
			{
				MISC::SET_BIT(&(Local_103.f_17), 30);
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 31))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/], 26))
			{
				MISC::SET_BIT(&(Local_103.f_17), 31);
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 6))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/], 29))
			{
				MISC::SET_BIT(&(Local_103.f_18), 6);
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 9))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/], 31))
			{
				MISC::SET_BIT(&(Local_103.f_18), 9);
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_1, 3))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/].f_1, 3))
			{
				MISC::SET_BIT(&(Local_103.f_1), 3);
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_19, 1))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_19, 6))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/].f_5, 1))
				{
					MISC::SET_BIT(&(Local_103.f_19), 6);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_19, 7))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/].f_5, 2))
				{
					MISC::SET_BIT(&(Local_103.f_19), 7);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_19, 5))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/].f_5, 0))
				{
					MISC::SET_BIT(&(Local_103.f_19), 5);
				}
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 20))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/], 11))
			{
				MISC::SET_BIT(&(Local_103.f_17), 20);
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 17))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/], 13))
			{
				MISC::SET_BIT(&(Local_103.f_18), 17);
			}
		}
		if (func_44(iVar0, 1, 1))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 5))
			{
				if (!func_392(Local_103))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_PED(Local_103), iVar1, 1))
					{
						MISC::SET_BIT(&(Local_103.f_17), 5);
					}
				}
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_19, 1))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_19, 8))
				{
					if (!func_392(Local_103.f_F))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_PED(Local_103.f_F), iVar1, 1))
						{
							MISC::SET_BIT(&(Local_103.f_19), 8);
						}
					}
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_19, 9))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/].f_5, 3))
					{
						MISC::SET_BIT(&(Local_103.f_19), 9);
					}
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 6))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/], 1))
				{
					MISC::SET_BIT(&(Local_103.f_17), 6);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 16))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/], 8))
				{
					MISC::SET_BIT(&(Local_103.f_17), 16);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 1))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/], 27))
				{
					MISC::SET_BIT(&(Local_103.f_18), 1);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 7))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/], 0))
				{
					MISC::SET_BIT(&(Local_103.f_17), 7);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 10))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/], 4))
				{
					if (Local_103.f_3 != 5 && Local_103.f_3 != 6)
					{
						Local_103.f_3 = 5;
					}
					MISC::SET_BIT(&(Local_103.f_17), 10);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_1, 2))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/].f_1, 2))
				{
					MISC::SET_BIT(&(Local_103.f_1), 2);
					MISC::SET_BIT(&(Local_103.f_1), 4);
					iLocal_126 = iLocal_124;
				}
			}
			else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_126 /*10*/].f_1, 2))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_103.f_1), 2);
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_1, 3))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(Local_103.f_1), 3);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 8))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/], 30))
				{
					MISC::SET_BIT(&(Local_103.f_18), 8);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_1, 0))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/].f_1, 0))
				{
					MISC::SET_BIT(&(Local_103.f_1), 0);
					MISC::SET_BIT(&(Local_103.f_1), 1);
					Local_103.f_1A = Local_104[iLocal_124 /*10*/].f_2;
					iLocal_125 = iLocal_124;
				}
			}
			else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_125 /*10*/].f_1, 0))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_103.f_1), 0);
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 13))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iLocal_124 /*10*/], 21))
				{
					MISC::SET_BIT(&(Local_103.f_18), 13);
				}
			}
		}
	}
	iLocal_124++;
	if (iLocal_124 == NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iLocal_124 = 0;
	}
}

int func_44(int iParam0, bool bParam1, bool bParam2)//Position - 0x287F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_252F9E.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_45(var uParam0)//Position - 0x28C9
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

void func_46()//Position - 0x2902
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	MISC::SET_BIT(&(Local_103.f_17), 2);
	MISC::SET_BIT(&(Local_103.f_17), 3);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Local_103.f_17), 13);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Local_103.f_17), 27);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Local_103.f_17), 28);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Local_103.f_18), 4);
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 18))
	{
		if (func_392(Local_103))
		{
			if (Local_103.f_25 <= 0f)
			{
				MISC::SET_BIT(&(Local_103.f_17), 18);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			if (Local_104[iVar0 /*10*/].f_3 > 0)
			{
				Local_103.f_4 = (Local_103.f_4 + Local_104[iVar0 /*10*/].f_3);
				Local_104[iVar0 /*10*/].f_3 = 0;
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iVar6, vLocal_144, 30f, 30f, 30f, 0, 1, 0))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(Local_103.f_17), 3);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 16))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iVar0 /*10*/], 12))
				{
					MISC::SET_BIT(&(Local_103.f_18), 16);
				}
			}
			if (func_44(iVar5, 1, 1))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 2))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(Local_103.f_17), 2);
				}
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar6) == iLocal_139)
				{
					if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_140 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_141)
					{
						iVar2 = 1;
					}
					else if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_142)
					{
						MISC::SET_BIT(&(Local_103.f_17), 27);
						iVar3 = 1;
					}
				}
				if (iVar2 == 1 || iVar3 == 1)
				{
					MISC::SET_BIT(&(Local_103.f_17), 13);
					iVar4++;
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 9) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 21))
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 4))
						{
							if (WEAPON::GET_CURRENT_PED_WEAPON(iVar6, &iVar1, 1))
							{
								if ((((iVar1 != joaat("weapon_unarmed") && iVar1 != 0) && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare")) && iVar1 != joaat("weapon_snowball"))
								{
									if (Local_103.f_20 == 4294967295)
									{
										Local_103.f_20 = iVar0;
									}
									else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_103.f_20)))
									{
										Local_103.f_20 = 4294967295;
									}
									MISC::SET_BIT(&(Local_103.f_17), 4);
									if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 12))
									{
										if (ENTITY::IS_ENTITY_AT_COORD(iVar6, vLocal_111, 2.5f, 2.5f, 3f, 0, 1, 0))
										{
											MISC::SET_BIT(&(Local_103.f_17), 12);
										}
									}
								}
							}
						}
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 0))
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(iVar5) > 0)
							{
								MISC::SET_BIT(&(Local_103.f_18), 0);
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(iVar6, vLocal_144, 5f, 5f, 2.5f, 0, 1, 0))
				{
					MISC::SET_BIT(&(Local_103.f_17), 28);
					iVar4++;
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 4))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[iVar0 /*10*/], 28))
					{
						MISC::SET_BIT(&(Local_103.f_18), 4);
					}
				}
				if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 9) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 20)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 19))
				{
					if (Local_104[iLocal_124 /*10*/].f_6 > Local_103.f_21)
					{
						Local_103.f_21 = Local_104[iVar0 /*10*/].f_6;
						func_13(&(Local_103.f_22));
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 24))
						{
							if (Local_103.f_21 > (0.55f + 0.2f))
							{
								MISC::SET_BIT(&(Local_103.f_17), 24);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_103.f_29 != iVar4)
	{
		Local_103.f_29 = iVar4;
	}
}

int func_47()//Position - 0x2C7F
{
	int iVar0;
	
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_D)) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_E))
	{
		if ((func_49(iLocal_110) && func_49(func_50(1))) && func_49(func_50(2)))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 0, 2, 0))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103))
				{
					if (func_48(&Local_103, 4, iLocal_110, vLocal_111 - Vector(1f, 0f, 0f), Local_103.f_2A, 1, 1, 1))
					{
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_103), 0, iLocal_316[0], iLocal_317[0], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_103), 2, iLocal_316[1], iLocal_317[1], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_103), 3, iLocal_316[2], iLocal_317[2], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_103), 4, iLocal_316[3], iLocal_317[3], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_103), 8, iLocal_316[4], iLocal_317[4], 0);
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_PED(Local_103), INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_111));
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_103), 1);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_103), 1);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_103), 1, 0);
						PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_103), 16);
						PED::SET_PED_CAN_EVASIVE_DIVE(NETWORK::NET_TO_PED(Local_103), 0);
						PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_103), 1024, true);
						WEAPON::REMOVE_ALL_PED_WEAPONS(NETWORK::NET_TO_PED(Local_103), 1);
						unk_0x65E471E4A2D56226(NETWORK::NET_TO_PED(Local_103), SYSTEM::ROUND((200f * Global_40001.f_99)), 0);
						if (!DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_PED(Local_103), "XP_Blocker"))
						{
							DECORATOR::DECOR_SET_BOOL(NETWORK::NET_TO_PED(Local_103), "XP_Blocker", 1);
						}
						func_391(&uLocal_151, 3, NETWORK::NET_TO_PED(Local_103), &(Local_103.f_2E), 1, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_D))
				{
					iVar0 = OBJECT::CREATE_PORTABLE_PICKUP(2499414878, vLocal_127, 0, func_50(1));
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						Local_103.f_D = NETWORK::OBJ_TO_NET(iVar0);
						unk_0x346478B12F69D4E3(NETWORK::NET_TO_OBJ(Local_103.f_D), true);
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_103.f_D), false, 0);
						ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_103.f_D), fLocal_128);
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_103.f_D), INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_111));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_103.f_D), 1);
						OBJECT::_0xA08FE5E49BDC39DD(NETWORK::NET_TO_OBJ(Local_103.f_D), -0.2f, 1);
						OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_103.f_D), 1, 0);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_103.f_D), false, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_E))
				{
					if (func_25(&(Local_103.f_E), func_50(2), vLocal_129 - Vector(0.12f, 0f, 0f), 1, 1, 0, 1, 0))
					{
						ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_103.f_E), fLocal_130);
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_103.f_E), INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_111));
						unk_0x346478B12F69D4E3(NETWORK::NET_TO_OBJ(Local_103.f_E), true);
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_48(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x2F52
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(iVar0, iParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam5)
			{
				unk_0xF2A50F5F6E7737D8(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

bool func_49(int iParam0)//Position - 0x2FB1
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_50(int iParam0)//Position - 0x2FCF
{
	switch (iParam0)
	{
		case 0:
			return joaat("mp_m_shopkeep_01");
		
		case 1:
			return joaat("p_poly_bag_01_s");
		
		case 2:
			return joaat("p_till_01_s");
		
		default:
	}
	return joaat("mp_m_shopkeep_01");
}

void func_51()//Position - 0x300D
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 20))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 11) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 16))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330()) == iLocal_139 || ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_144, 5f, 5f, 2.5f, 0, 1, 0))
			{
				func_54();
				func_52();
				func_6(Local_105.f_32, 1, func_7());
				MISC::SET_BIT(&(Local_105.f_34), 20);
			}
			else
			{
				if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 31) && (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 1))) && ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_144, 20f, 20f, 20f, 0, 1, 0))
				{
					func_54();
				}
				MISC::SET_BIT(&(Local_105.f_34), 20);
			}
		}
	}
}

void func_52()//Position - 0x30F7
{
	int iVar0;
	
	iVar0 = func_53(47);
	Global_24D678[iVar0 /*83*/] = 47;
	StringCopy(&(Global_24D678[iVar0 /*83*/].f_12[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_53(int iParam0)//Position - 0x3124
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_24D678[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_24D678[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_54()//Position - 0x3171
{
	int iVar0;
	
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 1))
	{
		iVar0 = func_130(1181, 4294967295, 0);
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, Local_105.f_32))
		{
			func_129(14, 1, 4294967295);
			MISC::SET_BIT(&iVar0, Local_105.f_32);
			func_128(1181, iVar0, 4294967295, 1, 0);
			if (func_127(14, 4294967295) >= 20)
			{
				func_113(44, 1);
			}
			else
			{
				func_112(44, func_127(14, 4294967295));
			}
		}
		func_111(1167, 1, 4294967295);
		func_110(12, 1, 4294967295, 1);
		func_100(19);
		iLocal_334 = 100;
		iLocal_334 = SYSTEM::ROUND((IntToFloat(iLocal_334) * Global_40001.f_1081));
		func_58(2, "XPT_HOLDUP", 2658791846, 4059245844, iLocal_334, 1, 4294967295, 0);
		func_55(12, 0);
	}
}

void func_55(int iParam0, int iParam1)//Position - 0x3248
{
	int iVar0;
	
	if (func_57(iParam0, iParam1))
	{
		iVar0 = func_56();
		Global_2581E6[iVar0] = iParam0;
	}
}

int func_56()//Position - 0x326B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2581E6[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_57(int iParam0, var uParam1)//Position - 0x32A0
{
	if (Global_14084D)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_140859) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_58(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x3326
{
	return func_59(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_59(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x3342
{
	var uVar0;
	
	uVar0 = func_60(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_60(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x3365
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_99(CAM::_0xDC9DA9E8789F5246()) || func_98(CAM::_0xDC9DA9E8789F5246()))
	{
		if (Global_40001.f_2532 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_40001.f_2532;
		}
	}
	else if (func_95() || func_91(CAM::_0xDC9DA9E8789F5246()))
	{
		if (Global_40001.f_5870 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_40001.f_5870;
		}
	}
	else if (Global_40001.f_197C > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_40001.f_197C;
	}
	if (func_90(sParam2))
	{
	}
	if (func_89())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_87(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_86(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_83(0, &iVar1);
					break;
				
				case 3:
					func_83(1, &iVar1);
					break;
				
				case 1:
					func_79(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_199937)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_111(1164, iVar1, 4294967295);
			if (iParam1 == 0)
			{
				func_71((func_78(CAM::_0xDC9DA9E8789F5246()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_2 != 4294967295)
				{
					func_111(1165, iVar1, 4294967295);
				}
				if (iParam1 == 0)
				{
					func_65(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == 4294967295)
			{
				func_61((func_63(CAM::_0xDC9DA9E8789F5246()) + iVar1));
			}
			else
			{
				func_61((func_63(CAM::_0xDC9DA9E8789F5246()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_61(int iParam0)//Position - 0x3563
{
	if (func_89())
	{
		Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_5 = iParam0;
		func_62(joaat("mpply_globalxp"), iParam0);
	}
}

void func_62(int iParam0, int iParam1)//Position - 0x358E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_63(int iParam0)//Position - 0x35AA
{
	if (iParam0 > 4294967295)
	{
		if (func_44(iParam0, 0, 1))
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return func_64(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_5;
			}
		}
		else
		{
			return func_64(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_64(int iParam0)//Position - 0x35FB
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

void func_65(int iParam0)//Position - 0x3619
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_70(CAM::_0xDC9DA9E8789F5246()) };
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_68(func_69(&Var0));
			if (iVar1 == 0)
			{
				func_67(&Global_150A08, iParam0);
				func_66(joaat("mpply_crew_local_xp_0"), Global_150A08);
			}
			else if (iVar1 == 1)
			{
				func_67(&Global_150A09, iParam0);
				func_66(joaat("mpply_crew_local_xp_1"), Global_150A09);
			}
			else if (iVar1 == 2)
			{
				func_67(&Global_150A0A, iParam0);
				func_66(joaat("mpply_crew_local_xp_2"), Global_150A0A);
			}
			else if (iVar1 == 3)
			{
				func_67(&Global_150A0B, iParam0);
				func_66(joaat("mpply_crew_local_xp_3"), Global_150A0B);
			}
			else if (iVar1 == 4)
			{
				func_67(&Global_150A0C, iParam0);
				func_66(joaat("mpply_crew_local_xp_4"), Global_150A0C);
			}
		}
	}
}

void func_66(int iParam0, int iParam1)//Position - 0x36ED
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_150A03 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_150A05 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_150A05 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_150A06 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_150A07 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_150A08 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_150A09 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_150A0A = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_150A0B = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_150A0C = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_150A0D = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_150A0E = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_150A0F = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_150A10 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_150A11 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_150A12 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_150A13 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_67(var uParam0, int iParam1)//Position - 0x3812
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_68(int iParam0)//Position - 0x3823
{
	if (iParam0 == Global_150A03)
	{
		return 0;
	}
	else if (iParam0 == Global_150A04)
	{
		return 1;
	}
	else if (iParam0 == Global_150A05)
	{
		return 2;
	}
	else if (iParam0 == Global_150A06)
	{
		return 3;
	}
	else if (iParam0 == Global_150A07)
	{
		return 4;
	}
	else
	{
		return 4294967295;
	}
	return 4294967295;
}

int func_69(var uParam0)//Position - 0x3880
{
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_258207;
		}
	}
	return Global_258207;
}

struct<13> func_70(int iParam0)//Position - 0x38A3
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_71(int iParam0, int iParam1, int iParam2)//Position - 0x38BA
{
	if (func_89())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2512 == 0 && iParam1 != 3218036588)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_150A81[func_76(4294967295)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, 3771058946, iParam1);
					return;
				}
				else if (iParam0 == Global_150A81[func_76(4294967295)])
				{
					return;
				}
			}
		}
		if (Global_40001.f_2511 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, 3136273443, 2949543449);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_40001.f_2511 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, 2708045899, iParam1);
				return;
			}
		}
		if (func_75(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_1 = iParam0;
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_6 = func_73(iParam0, 1);
		}
		func_72(639, iParam0, 4294967295, 1);
		func_128(640, func_73(iParam0, 1), 4294967295, 1, 0);
		Global_150A81[func_76(4294967295)] = iParam0;
		func_55(7, 0);
	}
}

void func_72(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x39DB
{
	int iVar0;
	
	iVar0 = Global_26B05F[iParam0 /*3*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_150A45[func_76(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_150A4B[func_76(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_150A51[func_76(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_150A57[func_76(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_150A2D[func_76(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_150A33[func_76(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_150A39[func_76(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_150A3F[func_76(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_150A15[func_76(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_150A1B[func_76(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_150A21[func_76(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_150A27[func_76(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_150A5D[func_76(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_150A63[func_76(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_150A69[func_76(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_150A6F[func_76(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_150A75[func_76(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_150A7B[func_76(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_150A81[func_76(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_150A87[func_76(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_272FA8[0 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_272FA8[1 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_272FA8[2 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_272FA8[3 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_273025[func_76(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_150A8D[func_76(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_150A93[func_76(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_150A99[func_76(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_150A9F[func_76(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_272FE5[0 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_272FE5[1 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_272FE5[2 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_272FE5[3 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_272FE5[4 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_273028[0 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_273028[1 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_273028[2 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_273028[3 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_273028[4 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_273038[0 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_273038[1 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_273038[2 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_273038[3 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_273038[4 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_272FE5[5 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_272FA8[4 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_273048[func_76(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_273051[func_76(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_27304B[func_76(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_273054[func_76(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_27304E[func_76(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_273057[func_76(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_27305A[func_76(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_272FE5[6 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_272FA8[5 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_272FE5[7 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_272FA8[6 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_272FE5[8 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_272FA8[7 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_272FE5[9 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_272FA8[8 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_272FE5[10 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_272FA8[9 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_272FE5[11 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_272FA8[10 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_272FE5[12 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_272FA8[11 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_272FE5[13 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_272FA8[12 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_272FE5[14 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_272FA8[13 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_272FE5[15 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_272FA8[14 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_272FE5[16 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_272FA8[15 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_272FE5[17 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_272FA8[16 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_272FA8[17 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_272FA8[18 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_272FA8[19 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_73(int iParam0, bool bParam1)//Position - 0x41E8
{
	if (bParam1)
	{
	}
	return func_74(iParam0, 0);
}

int func_74(int iParam0, int iParam1)//Position - 0x41FC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_4646A[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_4646A[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_75(int iParam0)//Position - 0x42BB
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	else
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_252F9E.f_1, iParam0);
	}
	return 1;
}

int func_76(int iParam0)//Position - 0x42E0
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_77();
		if (iVar1 > 4294967295)
		{
			Global_26AF40 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_26AF40 = 1;
		}
	}
	return iVar0;
}

int func_77()//Position - 0x4314
{
	return Global_1407E0;
}

int func_78(int iParam0)//Position - 0x4320
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > 4294967295)
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return Global_150A81[func_76(4294967295)];
			}
			else if (func_75(iParam0))
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_150A81[func_76(4294967295)];
	}
	return 0;
}

void func_79(int iParam0)//Position - 0x437D
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246());
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != 4294967295)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_82(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != CAM::_0xDC9DA9E8789F5246())
					{
						if (func_81(CAM::_0xDC9DA9E8789F5246(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_80(*iParam0, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_80(*iParam0, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_80(int iParam0, int iParam1)//Position - 0x4468
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_81(int iParam0, int iParam1)//Position - 0x4489
{
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		Global_2633E1 = { func_70(iParam0) };
		Global_2633EE = { func_70(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2633E1))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2633EE))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_26339B, 35, &Global_2633E1);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2633BE, 35, &Global_2633EE);
				if (Global_26339B == Global_2633BE)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_82(int iParam0, int iParam1, int iParam2)//Position - 0x44F6
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > 4294967295 && iParam1 > 4294967295) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 0);
				
				case 1:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 1);
				
				case 2:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 2);
				
				case 3:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 4);
				
				case 1:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 5);
				
				case 2:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 6);
				
				case 3:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 8);
				
				case 1:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 9);
				
				case 2:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 10);
				
				case 3:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 12);
				
				case 1:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 13);
				
				case 2:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 14);
				
				case 3:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_83(bool bParam0, int iParam1)//Position - 0x46C1
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_44(iVar4, 0, 1))
				{
					if (iVar4 != CAM::_0xDC9DA9E8789F5246())
					{
						iVar1++;
						if (func_81(CAM::_0xDC9DA9E8789F5246(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_44(iVar4, 1, 1))
			{
				if (iVar4 != CAM::_0xDC9DA9E8789F5246())
				{
					if (func_84(CAM::_0xDC9DA9E8789F5246(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_81(CAM::_0xDC9DA9E8789F5246(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_80(*iParam1, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_80(*iParam1, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_84(int iParam0, int iParam1)//Position - 0x47D9
{
	return SYSTEM::VDIST(func_85(iParam0), func_85(iParam1));
	return 0f;
}

Vector3 func_85(int iParam0)//Position - 0x47F5
{
	return unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_86(int iParam0)//Position - 0x4808
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_80(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_87(int iParam0)//Position - 0x483F
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_78(CAM::_0xDC9DA9E8789F5246()))
		{
			iParam0 = -func_78(CAM::_0xDC9DA9E8789F5246());
		}
	}
	if (func_88(8000, 0, 0) > 0)
	{
		if (func_88(8000, 0, 0) < (iParam0 + func_78(CAM::_0xDC9DA9E8789F5246())))
		{
			iParam0 = (func_88(8000, 0, 0) - func_78(CAM::_0xDC9DA9E8789F5246()));
		}
	}
	return iParam0;
}

int func_88(int iParam0, bool bParam1, int iParam2)//Position - 0x48A3
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_4646A[iParam0];
}

int func_89()//Position - 0x48CB
{
	return 1;
}

int func_90(char* sParam0)//Position - 0x48D4
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_91(int iParam0)//Position - 0x490E
{
	return func_92(func_93(iParam0));
}

int func_92(int iParam0)//Position - 0x4920
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_93(int iParam0)//Position - 0x493A
{
	if (func_94(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_21;
	}
	return 4294967295;
}

int func_94(int iParam0, int iParam1)//Position - 0x495D
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 || (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295))
	{
		return 1;
	}
	return 0;
}

int func_95()//Position - 0x4998
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_97();
	}
	return func_96(Global_440000.f_1FEDE);
}

int func_96(int iParam0)//Position - 0x49BC
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_40001.f_138A[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_97()//Position - 0x49F6
{
	return Global_255C02.f_10;
}

bool func_98(int iParam0)//Position - 0x4A04
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 2;
}

bool func_99(int iParam0)//Position - 0x4A19
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 7;
}

void func_100(int iParam0)//Position - 0x4A2E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_40001.f_210A)
	{
		iVar1 = iParam0;
		iVar2 = 4294967295;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_200000[func_109() /*12745*/].f_1FF2.f_F52[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_200000[func_109() /*12745*/].f_1FF2.f_F52[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > 4294967295 && iVar2 < 3)
		{
			if (!Global_200000[func_109() /*12745*/].f_1FF2.f_F52[iVar2 /*3*/].f_1)
			{
				func_105(iVar2, 1);
				MISC::SET_BIT(&Global_263724, (8 + iVar2));
				func_103(2110, 4294967295);
				func_101(67, 4294967295);
				func_103(2581, 4294967295);
				func_101(69, 4294967295);
				STATS::_0xA071E0ED98F91286(1000, iVar1);
				if (iVar3 < 2)
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_263724, 12))
					{
						func_55(7, 0);
					}
					else
					{
						func_55(15, 0);
					}
				}
			}
		}
	}
}

void func_101(int iParam0, int iParam1)//Position - 0x4B25
{
	int iVar0;
	
	iVar0 = func_127(iParam0, func_76(iParam1));
	iVar0++;
	func_102(iParam0, iVar0, iParam1);
}

void func_102(int iParam0, int iParam1, var uParam2)//Position - 0x4B4B
{
	int iVar0;
	
	iVar0 = Global_272D60[iParam0 /*3*/][func_76(uParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, 1);
}

void func_103(int iParam0, int iParam1)//Position - 0x4B6F
{
	int iVar0;
	
	iVar0 = func_130(iParam0, func_76(iParam1), 0);
	iVar0++;
	if (!func_104(iParam0))
	{
		func_128(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_72(iParam0, iVar0, iParam1, 1);
	}
}

int func_104(int iParam0)//Position - 0x4BB0
{
	if (Global_150A02)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 8527:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
				return 1;
				break;
			}
	}
	return 0;
}

void func_105(int iParam0, int iParam1)//Position - 0x4DBA
{
	if (Global_200000[func_109() /*12745*/].f_1FF2.f_F52[iParam0 /*3*/].f_1 != iParam1)
	{
		Global_200000[func_109() /*12745*/].f_1FF2.f_F52[iParam0 /*3*/].f_1 = iParam1;
		func_106(func_108(iParam0), iParam1, 4294967295, 1);
	}
}

void func_106(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4E05
{
	int iVar0;
	
	if (func_107())
	{
		iVar0 = Global_2727B6[iParam0 /*3*/][func_76(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_107()//Position - 0x4E37
{
	return 1;
	return 0;
}

int func_108(int iParam0)//Position - 0x4E44
{
	switch (iParam0)
	{
		case 0:
			return 169;
		
		case 1:
			return 170;
		
		case 2:
			return 171;
		
		default:
	}
	return 169;
}

int func_109()//Position - 0x4E76
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_110(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4E83
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (iParam2 == 4294967295)
	{
		iParam2 = func_77();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_111(int iParam0, int iParam1, int iParam2)//Position - 0x53EB
{
	int iVar0;
	
	iVar0 = func_130(iParam0, func_76(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_104(iParam0))
	{
		func_128(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_72(iParam0, iVar0, iParam2, 1);
	}
}

int func_112(int iParam0, int iParam1)//Position - 0x542D
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESSION(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESSION(iParam0, iParam1);
	}
	return 0;
}

int func_113(int iParam0, int iParam1)//Position - 0x547E
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_114(iParam0, iParam1);
}

int func_114(int iParam0, int iParam1)//Position - 0x5499
{
	if (func_126(14) && !func_125(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_646A != 0 && !Global_11625)
	{
		return 0;
	}
	if (func_124(&Global_412216))
	{
		if (func_122(&Global_412216, iParam0))
		{
			return 0;
		}
		if (func_115(&Global_412216, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_115(var uParam0, int iParam1)//Position - 0x5536
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_126(14) && !func_125(iParam1))
	{
		return 0;
	}
	if (func_122(uParam0, iParam1))
	{
		return 0;
	}
	if (func_121(uParam0) < 0f)
	{
		func_120(uParam0, 0);
	}
	func_118(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_116(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_116(var uParam0, int iParam1)//Position - 0x55E7
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_126(14) && !func_125(iParam1))
	{
		return 0;
	}
	if (func_122(uParam0, iParam1))
	{
		return 0;
	}
	if (func_121(uParam0) < 0f)
	{
		func_120(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_117(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_117(var uParam0, int iParam1)//Position - 0x5662
{
	return (*uParam0)[iParam1] == 78;
}

void func_118(var uParam0)//Position - 0x5673
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_119(uParam0, iVar0);
		iVar0++;
	}
	func_120(uParam0, (Global_412215 - 0.5f));
}

void func_119(var uParam0, int iParam1)//Position - 0x56A7
{
	(*uParam0)[iParam1] = 78;
}

void func_120(var uParam0, float fParam1)//Position - 0x56B7
{
	if (fParam1 == 0f)
	{
		uParam0->f_50 = 0f;
	}
	else
	{
		uParam0->f_50 = fParam1;
	}
}

float func_121(var uParam0)//Position - 0x56D4
{
	return uParam0->f_50;
}

bool func_122(var uParam0, int iParam1)//Position - 0x56E0
{
	return func_123(uParam0, iParam1) != 4294967295;
}

int func_123(var uParam0, int iParam1)//Position - 0x56F2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool func_124(var uParam0)//Position - 0x571F
{
	return uParam0->f_4F == 1;
}

int func_125(int iParam0)//Position - 0x572D
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

bool func_126(int iParam0)//Position - 0x577D
{
	return Global_8D15 == iParam0;
}

int func_127(int iParam0, int iParam1)//Position - 0x578B
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_272D60[iParam0 /*3*/][func_76(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

void func_128(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x57B7
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_129(int iParam0, int iParam1, int iParam2)//Position - 0x57E7
{
	int iVar0;
	
	iVar0 = func_127(iParam0, func_76(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_102(iParam0, iVar0, iParam2);
}

int func_130(int iParam0, int iParam1, int iParam2)//Position - 0x580E
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_76(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_131(var uParam0)//Position - 0x5840
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_132(var uParam0)//Position - 0x5869
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_18(uParam0, 0, 0);
		}
	}
}

void func_133()//Position - 0x5888
{
	bool bVar0;
	int iVar1;
	
	func_251();
	func_225();
	func_176();
	func_51();
	func_174();
	func_173();
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330()) == iLocal_139)
		{
			if (Global_26862F.f_15FE.f_1 == 0)
			{
				Global_26862F.f_15FE.f_1 = 1;
			}
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(AUDIO::_0x0626A247D2405330()) == iLocal_140 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(AUDIO::_0x0626A247D2405330()) == iLocal_141)
			{
				bVar0 = true;
			}
			else if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(AUDIO::_0x0626A247D2405330()) == iLocal_142)
			{
				iVar1 = 1;
			}
		}
		else if (Global_26862F.f_15FE.f_1 == 1)
		{
			Global_26862F.f_15FE.f_1 = 0;
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 31))
	{
		if (func_93(CAM::_0xDC9DA9E8789F5246()) != 154)
		{
			if ((bVar0 || iVar1) || ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_144, (5f / 2f), (5f / 2f), (5f / 2f), 0, 1, 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_unarmed"), true);
				MISC::SET_BIT(&(Local_105.f_34), 31);
			}
		}
	}
	if ((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 26) && bVar0) && !(func_172(0) || func_171()))
	{
		if (func_169("SNK_MNU", Local_105, 0))
		{
			MISC::SET_BIT(&(Local_105.f_34), 26);
		}
	}
	if (!bVar0 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 26))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()) || (CAM::DOES_CAM_EXIST(Local_105.f_1) && CAM::IS_CAM_ACTIVE(Local_105.f_1)))
		{
			NETWORK::_0x5E3AA4CA2B6FB0EE(AUDIO::_0x0626A247D2405330());
			PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			if (Local_105.f_33 > 0)
			{
				Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_3 = Local_105.f_33;
				Local_105.f_33 = 0;
			}
			func_407();
			GRAPHICS::_0x35FB78DC42B7BD21(&(Local_105.f_35), 7);
			if (CAM::DOES_CAM_EXIST(Local_105.f_1))
			{
				CAM::DESTROY_CAM(Local_105.f_1, 0);
			}
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
		}
		func_166(1, Local_105);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Local_105.f_34), 26);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 21))
	{
		if (iVar1 || func_164(AUDIO::_0x0626A247D2405330(), Local_105.f_32))
		{
			MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 21);
		}
	}
	if (bVar0 || iVar1)
	{
		func_161();
		func_155();
		func_149();
		func_145(1);
		func_138();
		PLAYER::_0x4669B3ED80F24B4E(CAM::_0xDC9DA9E8789F5246());
		PLAYER::_0xDC64D2C53493ED12(CAM::_0xDC9DA9E8789F5246());
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_7, 0))
		{
			PLAYER::_0xB45EFF719D8427A6(Local_103.f_47);
			func_136(vLocal_144, func_137(30), 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_7), 0);
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_144, 5f, 5f, 2.5f, 0, 1, 0))
		{
			func_145(0);
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_7, 0))
		{
			PLAYER::_0x0032A6DBA562C518();
			func_134(vLocal_144, func_137(30), "");
			MISC::SET_BIT(&(Global_26862F.f_7), 0);
		}
	}
	if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 22) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 23)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 7))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(CAM::_0xDC9DA9E8789F5246());
	}
}

int func_134(vector3 vParam0, char* sParam1, char* sParam2)//Position - 0x5BB9
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!MISC::ARE_STRINGS_EQUAL(&(Global_26862F.f_F73[iVar0 /*26*/].f_4), sParam1))
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_26862F.f_F73[iVar0 /*26*/].f_4)))
				{
					Global_26862F.f_F73[iVar0 /*26*/] = 1;
					Global_26862F.f_F73[iVar0 /*26*/].f_1 = { vParam0 };
					StringCopy(&(Global_26862F.f_F73[iVar0 /*26*/].f_4), sParam1, 24);
					StringCopy(&(Global_26862F.f_F73[iVar0 /*26*/].f_A), sParam2, 64);
					return 1;
				}
			}
			else if (!func_135(Global_26862F.f_F73[iVar0 /*26*/].f_1, vParam0, 0))
			{
				Global_26862F.f_F73[iVar0 /*26*/] = 1;
				Global_26862F.f_F73[iVar0 /*26*/].f_1 = { vParam0 };
				StringCopy(&(Global_26862F.f_F73[iVar0 /*26*/].f_4), sParam1, 24);
				StringCopy(&(Global_26862F.f_F73[iVar0 /*26*/].f_A), sParam2, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_135(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x5CBA
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_136(vector3 vParam0, char* sParam1, int iParam2)//Position - 0x5D01
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_26862F.f_F73[iVar0 /*26*/].f_4), sParam1))
			{
				if (iParam2 || func_135(Global_26862F.f_F73[iVar0 /*26*/].f_1, vParam0, 0))
				{
					Global_26862F.f_F73[iVar0 /*26*/] = 0;
					Global_26862F.f_F73[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_26862F.f_F73[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_26862F.f_F73[iVar0 /*26*/].f_A), "", 64);
				}
			}
			iVar0++;
		}
	}
}

char* func_137(int iParam0)//Position - 0x5DA3
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_138()//Position - 0x5DB6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	GRAPHICS::_0x35FB78DC42B7BD21(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 28);
	if (!func_392(Local_103) && func_44(CAM::_0xDC9DA9E8789F5246(), 1, 1))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iVar0, 1))
		{
			if ((((iVar0 != joaat("weapon_unarmed") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_flare")) && iVar0 != joaat("weapon_snowball")) && iVar0 != joaat("weapon_flashlight"))
			{
				if ((((PLAYER::IS_PLAYER_FREE_AIMING(CAM::_0xDC9DA9E8789F5246()) && PED::IS_PED_FACING_PED(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_PED(Local_103), 45f)) && ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_PED(Local_103), 5f, 5f, 2f, 0, 1, 0)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(CAM::_0xDC9DA9E8789F5246(), NETWORK::NET_TO_PED(Local_103))) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(CAM::_0xDC9DA9E8789F5246(), NETWORK::NET_TO_PED(Local_103)))
				{
					if (!(func_172(0) || func_171()) && ((!func_142(CAM::_0xDC9DA9E8789F5246()) || func_93(CAM::_0xDC9DA9E8789F5246()) == 154) || func_93(CAM::_0xDC9DA9E8789F5246()) == 171))
					{
						if (func_140(CAM::_0xDC9DA9E8789F5246(), NETWORK::NET_TO_PED(Local_103)) || NETWORK::NETWORK_IS_PLAYER_TALKING(CAM::_0xDC9DA9E8789F5246()))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 1))
							{
								func_139(func_8(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
								MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 1);
							}
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 8))
							{
								MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 8);
							}
						}
						MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 28);
					}
				}
			}
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 28))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 28))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iVar1, 1))
			{
				if (iVar1 != 0 && iVar1 != joaat("weapon_snowball"))
				{
					iVar2 = WEAPON::GET_WEAPONTYPE_GROUP(iVar1);
					if (iVar2 == 416676503)
					{
						sLocal_109 = "hold_up_head_additive_pistol";
						BRAIN::TASK_PLAY_ANIM(AUDIO::_0x0626A247D2405330(), "mp_am_hold_up", sLocal_109, 8f, -8f, 4294967295, 305, 0, 0, 0, 0);
					}
					else if ((((iVar2 == 1159398588 || iVar2 == 970310034) || iVar2 == 860033945) || iVar2 == 3082541095) || iVar2 == 3337201093)
					{
						sLocal_109 = "hold_up_head_additive_rifle";
						BRAIN::TASK_PLAY_ANIM(AUDIO::_0x0626A247D2405330(), "mp_am_hold_up", sLocal_109, 8f, -8f, 4294967295, 305, 0, 0, 0, 0);
					}
					else
					{
						sLocal_109 = "";
					}
					MISC::SET_BIT(&(Local_105.f_34), 28);
				}
			}
		}
	}
	else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 28) || PED::IS_PED_SHOOTING(AUDIO::_0x0626A247D2405330()))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_109))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(AUDIO::_0x0626A247D2405330(), "mp_am_hold_up", sLocal_109, 3))
			{
				BRAIN::STOP_ANIM_TASK(AUDIO::_0x0626A247D2405330(), "mp_am_hold_up", sLocal_109, 3238002688);
			}
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&(Local_105.f_34), 28);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_19, 1))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_5, 3))
		{
			if (!func_392(Local_103.f_F) && func_44(CAM::_0xDC9DA9E8789F5246(), 1, 1))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iVar3, 1))
				{
					if ((((iVar3 != joaat("weapon_unarmed") && iVar3 != joaat("object")) && iVar3 != joaat("weapon_flare")) && iVar3 != joaat("weapon_snowball")) && !(func_172(0) || func_171()))
					{
						if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(CAM::_0xDC9DA9E8789F5246(), NETWORK::NET_TO_PED(Local_103.f_F)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(CAM::_0xDC9DA9E8789F5246(), NETWORK::NET_TO_PED(Local_103.f_F)))
						{
							if (func_140(CAM::_0xDC9DA9E8789F5246(), NETWORK::NET_TO_PED(Local_103.f_F)) || NETWORK::NETWORK_IS_PLAYER_TALKING(CAM::_0xDC9DA9E8789F5246()))
							{
								MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_5), 3);
							}
						}
					}
				}
			}
		}
	}
}

void func_139(int iParam0)//Position - 0x6193
{
	struct<2> Var0;
	
	Var0 = 2261680707;
	Var0.f_1 = CAM::_0xDC9DA9E8789F5246();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}

int func_140(int iParam0, int iParam1)//Position - 0x61BF
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (func_44(iParam0, 1, 1))
	{
		vVar0 = { func_85(iParam0) };
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		vVar1 = { unk_0x8000C77B5F336760(iParam1, 1) };
	}
	vVar3 = { vVar1 - vVar0 };
	if (!PED::IS_PED_INJURED(iParam1))
	{
		vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 7f, 0f) };
		vVar4 = { vVar2 - vVar1 };
	}
	vVar3.z = 0f;
	vVar4.z = 0f;
	fVar5 = func_141(vVar3, vVar4);
	if (fVar5 < -0.1f)
	{
		return 1;
	}
	return 0;
}

float func_141(vector3 vParam0, vector3 vParam1)//Position - 0x624A
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

int func_142(int iParam0)//Position - 0x626B
{
	if (func_38(iParam0))
	{
		return 1;
	}
	if (func_143(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_143(int iParam0)//Position - 0x628E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return func_144(iParam0, 9);
	}
	return 0;
}

bool func_144(int iParam0, int iParam1)//Position - 0x62AC
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_B.f_4, iParam1);
}

void func_145(int iParam0)//Position - 0x62C7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (CAM::_0xDC9DA9E8789F5246() != Global_26862F.f_12C8)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 6))
		{
			if (iParam0 == 1)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iVar2, 1))
				{
					if ((((iVar2 != joaat("weapon_unarmed") && iVar2 != 0) && iVar2 != joaat("object")) && iVar2 != joaat("weapon_flare")) && iVar2 != joaat("weapon_snowball"))
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_111, 2.5f, 2.5f, 3f, 0, 1, 0))
						{
							iVar1 = 1;
						}
						iVar0 = 1;
					}
				}
				if ((((iVar1 == 1 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 5)) || (iVar0 == 1 && Local_103.f_3 >= 3)) || (iVar0 == 1 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 16))) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 12))
				{
					if (((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 12) || Local_103.f_3 >= 3) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 12)) || (iVar0 == 1 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 16)))
					{
						Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_24++;
						func_13(&(Global_252F9E.f_E91));
						func_18(&(Global_252F9E.f_E91), 0, 0);
						if (Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_24 <= 2)
						{
							if (func_148())
							{
								if (func_147() < 2)
								{
									PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_147()));
								}
								else
								{
									PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(2));
								}
							}
							else
							{
								PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(2));
							}
						}
						else if (Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_24 >= 5)
						{
							if (func_148())
							{
								if (func_147() < 3)
								{
									PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_147()));
								}
								else
								{
									PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
								}
							}
							else
							{
								PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(4));
							}
						}
						else if (func_148())
						{
							if (func_147() < 3)
							{
								PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_147()));
							}
							else
							{
								PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
							}
						}
						else
						{
							PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
						}
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 1))
						{
							MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 2);
						}
						MISC::SET_BIT(&(Local_105.f_34), 6);
						MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 25);
					}
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 27) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 6))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(AUDIO::_0x0626A247D2405330()))
				{
					if (func_17(&uLocal_137, 2000, 0) || PED::_0xDCCA191DF9980FD7(AUDIO::_0x0626A247D2405330()))
					{
						PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(1));
						MISC::SET_BIT(&(Local_105.f_34), 27);
						MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 27);
						MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 25);
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 1))
						{
							MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 2);
						}
					}
				}
				else if (func_146(&uLocal_137))
				{
					func_13(&uLocal_137);
				}
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 24))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 31))
			{
				if (func_392(Local_103))
				{
					if (func_148())
					{
						if (func_147() < 3)
						{
							PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_147()));
						}
						else
						{
							PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
						}
					}
					else
					{
						PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 13, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
					}
					MISC::SET_BIT(&(Local_105.f_34), 24);
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 1))
					{
						MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 2);
					}
				}
			}
		}
	}
}

bool func_146(var uParam0)//Position - 0x66A5
{
	return uParam0->f_1;
}

int func_147()//Position - 0x66B1
{
	return Global_40001.f_30C4;
}

int func_148()//Position - 0x66C0
{
	if (func_143(CAM::_0xDC9DA9E8789F5246()) && func_93(CAM::_0xDC9DA9E8789F5246()) == 154)
	{
		return 1;
	}
	return 0;
}

void func_149()//Position - 0x66E8
{
	int iVar0;
	int iVar1;
	
	if (func_44(CAM::_0xDC9DA9E8789F5246(), 1, 1))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 23) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 17))
		{
			if (!func_392(Local_103))
			{
				iLocal_114 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_1D);
				if (iLocal_114 >= 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114))
					{
						if ((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_191D48, 15) && func_154()) && func_153())
						{
							MISC::SET_BIT(&Global_191D48, 15);
						}
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							iVar0 = func_130(1190, 4294967295, 0);
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 3))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_114) < 0.4f && INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330()) == iLocal_139)
								{
									func_152("FHU_HELP3", 4294967295);
									MISC::SET_BIT(&iVar0, 3);
									func_128(1190, iVar0, 4294967295, 1, 0);
								}
							}
							else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 5) || !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 6))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_114) < 0.7f && INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330()) == iLocal_139)
								{
									func_152("FHU_HELP4", 4294967295);
									MISC::SET_BIT(&iVar0, 5);
									func_128(1190, iVar0, 4294967295, 1, 0);
									MISC::SET_BIT(&(Local_105.f_34), 23);
								}
							}
							else
							{
								MISC::SET_BIT(&(Local_105.f_34), 23);
							}
						}
					}
				}
			}
		}
		if (((((((!func_37(CAM::_0xDC9DA9E8789F5246(), 146) && !func_151()) && func_93(CAM::_0xDC9DA9E8789F5246()) != 167) && func_93(CAM::_0xDC9DA9E8789F5246()) != 190) && func_93(CAM::_0xDC9DA9E8789F5246()) != 191) && func_93(CAM::_0xDC9DA9E8789F5246()) != 250) && func_93(CAM::_0xDC9DA9E8789F5246()) != 237) && func_93(CAM::_0xDC9DA9E8789F5246()) != 238)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_35, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (((((func_392(Local_103) || Local_103.f_3 > 7) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 20)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 11)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 5)) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vLocal_115, 1.5f) == 0)
					{
						iVar1 = func_130(1190, 4294967295, 0);
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar1, 20) || !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar1, 21))
						{
							func_152("FHU_HELPM", 4294967295);
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar1, 20))
							{
								MISC::SET_BIT(&iVar1, 20);
							}
							else
							{
								MISC::SET_BIT(&iVar1, 21);
							}
							func_128(1190, iVar1, 4294967295, 1, 0);
							MISC::SET_BIT(&(Local_105.f_35), 1);
						}
						else
						{
							MISC::SET_BIT(&(Local_105.f_35), 1);
						}
					}
				}
			}
			else if (func_150("FHU_HELPM"))
			{
				if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 20) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 11)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 5))
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				}
			}
		}
	}
}

bool func_150(char* sParam0)//Position - 0x69D7
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_151()//Position - 0x69EA
{
	return Global_1801DD;
}

void func_152(char* sParam0, int iParam1)//Position - 0x69F6
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_153()//Position - 0x6A0D
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_6B9, 21);
}

bool func_154()//Position - 0x6A22
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_92, 3);
}

void func_155()//Position - 0x6A3C
{
	float fVar0;
	float fVar1;
	
	if (Local_103.f_3 == 4)
	{
		if (func_44(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			if (!func_392(Local_103))
			{
				iLocal_114 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_1D);
				if (iLocal_114 >= 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114))
					{
						fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_114);
						fVar0 = (fVar0 * 1000f);
						if (fVar0 <= 890f)
						{
							func_156(SYSTEM::ROUND(fVar0), 890, "HUP_PROG", func_160(PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246())), 0, 1, 13);
						}
						fVar1 = NETWORK::NETWORK_GET_PLAYER_LOUDNESS(CAM::_0xDC9DA9E8789F5246());
						fVar1 = (fVar1 - 0.3f);
						if (fVar1 < 0f)
						{
							fVar1 = 0f;
						}
						fVar1 = (fVar1 * 4f);
						Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_6 = fVar1;
					}
				}
			}
		}
	}
}

void func_156(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6)//Position - 0x6AEE
{
	func_157(iParam0, iParam1, sParam2, uParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 4294967295, 0);
}

void func_157(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)//Position - 0x6B1A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_159(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_158(0, iVar0);
		Global_14E696.f_445[iVar0] = uParam0;
		Global_14E696.f_445.f_B[iVar0] = uParam1;
		StringCopy(&(Global_14E696.f_445.f_16[iVar0 /*16*/]), sParam2, 64);
		Global_14E696.f_445.f_C2[iVar0] = uParam3;
		Global_14E696.f_445.f_B7[iVar0] = uParam4;
		Global_14E696.f_445.f_D8[iVar0] = uParam5;
		Global_14E696.f_445.f_E3[iVar0 /*3*/] = fParam6;
		Global_14E696.f_445.f_E3[iVar0 /*3*/].f_1 = fParam7;
		Global_14E696.f_445.f_102[iVar0] = iParam8;
		Global_14E696.f_445.f_10D[iVar0] = uParam9;
		Global_14E696.f_445.f_138[iVar0] = iParam10;
		Global_14E696.f_445.f_143[iVar0] = iParam11;
		Global_14E696.f_445.f_14E[iVar0] = iParam12;
		Global_14E696.f_445.f_159[iVar0] = iParam13;
		Global_14E696.f_440 = 1;
		Global_14E696.f_445.f_164[iVar0] = iParam14;
		Global_14E696.f_445.f_16F[iVar0] = iParam15;
		Global_14E696.f_445.f_17A[iVar0] = iParam16;
		Global_14E696.f_445.f_185[iVar0] = iParam17;
		Global_14E696.f_445.f_190[iVar0] = iParam18;
		Global_14E696.f_445.f_19B[iVar0] = iParam19;
		Global_14E696.f_445.f_1A6[iVar0] = iParam20;
		Global_14E696.f_445.f_1B1[iVar0] = iParam21;
		Global_14E696.f_445.f_1BC[iVar0] = iParam22;
		Global_14E696.f_445.f_1C7[iVar0] = iParam23;
		Global_14E696.f_445.f_1D2[iVar0] = iParam24;
	}
}

void func_158(int iParam0, int iParam1)//Position - 0x6CF3
{
	MISC::SET_BIT(&(Global_14E696.f_17F2[iParam0]), iParam1);
}

bool func_159(int iParam0, int iParam1)//Position - 0x6D0C
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E696.f_17F2[iParam0], iParam1);
}

int func_160(int iParam0)//Position - 0x6D25
{
	if (iParam0 == 0)
	{
	}
	return 116;
}

void func_161()//Position - 0x6D35
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_35, 2))
	{
		STREAMING::REQUEST_ANIM_DICT("oddjobs@shop_robbery@rob_till");
		STREAMING::REQUEST_ANIM_DICT(func_162());
		if (STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@shop_robbery@rob_till") && STREAMING::HAS_ANIM_DICT_LOADED(func_162()))
		{
			MISC::SET_BIT(&(Local_105.f_35), 2);
		}
	}
}

char* func_162()//Position - 0x6D7D
{
	if (func_163(CAM::_0xDC9DA9E8789F5246()))
	{
		return "anim@am_hold_up@male";
	}
	return "anim@am_hold_up@female";
}

int func_163(int iParam0)//Position - 0x6D9B
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_24FBF9[iParam0 /*413*/].f_E6;
}

int func_164(int iParam0, int iParam1)//Position - 0x6DBD
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { 0f, 0f, 0f };
	vVar1 = { 0f, 0f, 0f };
	fVar2 = 0f;
	func_165(iParam1, &vVar0, &vVar1, &fVar2);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, vVar0, vVar1, fVar2, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_165(int iParam0, var uParam1, var uParam2, float fParam3)//Position - 0x6DFD
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1390.033f, 3605.529f, 33.98091f };
		*uParam2 = { 1394.412f, 3607.156f, 36.38288f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3041.675f, 583.5931f, 6.908931f };
		*uParam2 = { -3037.284f, 585.0375f, 9.521532f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3245.184f, 1000.124f, 11.83071f };
		*uParam2 = { -3240.504f, 999.7783f, 14.46645f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 549.5332f, 2668.464f, 41.15651f };
		*uParam2 = { 548.9114f, 2673.108f, 43.7766f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2554.316f, 380.8569f, 107.623f };
		*uParam2 = { 2558.98f, 380.6908f, 110.2684f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2675.476f, 3280.807f, 54.24115f };
		*uParam2 = { 2679.577f, 3278.526f, 56.8955f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1729.145f, 6417.834f, 34.03724f };
		*uParam2 = { 1727.07f, 6413.635f, 36.66442f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1958.61f, 3742.512f, 31.34376f };
		*uParam2 = { 1960.958f, 3738.465f, 33.98634f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 24.51093f, -1344.449f, 28.49703f };
		*uParam2 = { 24.52224f, -1349.084f, 31.14272f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 373.296f, 329.2379f, 102.5664f };
		*uParam2 = { 372.1347f, 324.6985f, 105.214f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1168.183f, 2711.203f, 37.06316f };
		*uParam2 = { 1163.144f, 2711.246f, 40.16688f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2966.142f, 388.6418f, 14.04331f };
		*uParam2 = { -2965.812f, 393.6473f, 17.17248f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1223.599f, -909.8984f, 11.32635f };
		*uParam2 = { -1219.443f, -907.0756f, 14.45929f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.524f, -980.3087f, 45.41582f };
		*uParam2 = { 1134.22f, -985.284f, 48.53235f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.413f, -379.3236f, 39.16341f };
		*uParam2 = { -1487.954f, -375.7666f, 42.28885f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1699.447f, 4921.57f, 41.06366f };
		*uParam2 = { 1695.64f, 4924.245f, 44.22165f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -705.7869f, -911.6997f, 18.2156f };
		*uParam2 = { -705.7026f, -916.374f, 21.33545f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.26995f, -1756.669f, 28.42101f };
		*uParam2 = { -48.26036f, -1760.285f, 31.56342f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1164.697f, -320.7587f, 68.2051f };
		*uParam2 = { 1165.463f, -325.0899f, 71.37893f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1821.205f, 795.8699f, 137.0893f };
		*uParam2 = { -1818.041f, 792.3982f, 140.1836f };
		*fParam3 = 2.25f;
	}
}

void func_166(bool bParam0, int iParam1)//Position - 0x725A
{
	int iVar0;
	
	if (!func_168(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_43D7.f_1F9B)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_43D7.f_1F9B = 0;
	}
	HUD::_CLEAR_NOTIFICATIONS_POS(0f);
	if (Global_43D7.f_15FA[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, 0);
		Global_43D7.f_15FA[iVar0] = 0;
	}
	if (Global_43D7.f_15EC[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_43D7.f_15EC[iVar0] = 0;
	}
	if (Global_43D7.f_15F3[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_43D7.f_15F3[iVar0] = 0;
	}
	if (bParam0)
	{
		func_167(&(Global_43D7.f_161A[iVar0 /*10*/]));
		Global_43D7.f_1657[iVar0] = 0;
	}
	else
	{
		Global_43D7.f_1657[iVar0] = 0;
	}
}

void func_167(var uParam0)//Position - 0x7318
{
	if (uParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_168(var uParam0, bool bParam1, int iParam2)//Position - 0x7341
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == 4294967295)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar3 = 4294967295;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_43D7.f_1657[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_43D7.f_1657[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != 4294967295)
		{
			Global_43D7.f_1657[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

bool func_169(char* sParam0, int iParam1, bool bParam2)//Position - 0x73DE
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_168(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_43D7.f_1601[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_43D7.f_1601[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_43D7.f_1601[iVar0 /*4*/]), 9);
		Global_43D7.f_15FA[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_43D7.f_1601[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xE2BBD32891C18569("CommonMenu", 0);
	Global_43D7.f_15EC[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xE2BBD32891C18569("MPShopSale", 0);
		Global_43D7.f_15F3[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_43D7.f_161A[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_170(&(Global_43D7.f_161A[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_170(var uParam0)//Position - 0x74D4
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = unk_0x9934FEFB3B8C6DB8(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

int func_171()//Position - 0x7576
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)//Position - 0x7593
{
	if (iParam0 == 1)
	{
		if (Global_38B1.f_1 > 3)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_38B1.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_173()//Position - 0x75ED
{
	if (CAM::_0xDC9DA9E8789F5246() != Global_26862F.f_12C8)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 24))
		{
			if (Local_103.f_48 == CAM::_0xDC9DA9E8789F5246() || (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 31) && ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_145, 20f, 20f, 20f, 0, 1, 0)))
			{
				if (func_392(Local_103))
				{
					if (func_148())
					{
						if (func_147() < 3)
						{
							PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_147()));
						}
						else
						{
							PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
						}
					}
					else
					{
						PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 13, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
					}
					MISC::SET_BIT(&(Local_105.f_34), 24);
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 1))
					{
						MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 2);
					}
				}
			}
		}
	}
}

int func_174()//Position - 0x76CA
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_19, 0))
	{
		return 0;
	}
	if (func_392(Local_103.f_F))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_333))
		{
			HUD::REMOVE_BLIP(&iLocal_333);
		}
		return 0;
	}
	if (Local_103.f_42 == 4)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_333))
		{
			iLocal_333 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_PED(Local_103.f_F));
			HUD::SET_BLIP_COLOUR(iLocal_333, 1);
			HUD::SET_BLIP_SCALE(iLocal_333, 0.7f);
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_F))
	{
		return 0;
	}
	switch (Local_103.f_42)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_F), 713668775) != 0)
			{
				if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_F), 713668775) != 1)
				{
					if (func_44(CAM::_0xDC9DA9E8789F5246(), 1, 1))
					{
						BRAIN::TASK_GO_TO_ENTITY(NETWORK::NET_TO_PED(Local_103.f_F), AUDIO::_0x0626A247D2405330(), 4294967295, 4f, 2f, 1073741824, 0);
					}
				}
			}
			break;
		
		case 3:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_19, 5) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_5, 0))
			{
				if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_F), 1227113341) != 0 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_F), 1227113341) != 1)
				{
					BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_103.f_F), AUDIO::_0x0626A247D2405330(), 10000);
					MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_5), 0);
				}
			}
			if ((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_19, 6) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_5, 1)) && !func_175())
			{
				func_391(&uLocal_151, 4, NETWORK::NET_TO_PED(Local_103.f_F), "StoreHero", 1, 0);
				AUDIO::_PLAY_AMBIENT_SPEECH1(NETWORK::NET_TO_PED(Local_103.f_F), "GENERIC_INSULT_HIGH", "SPEECH_PARAMS_FORCE", 1);
				MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_5), 1);
			}
			break;
		
		case 4:
			if ((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_19, 7) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_5, 2)) && !func_175())
			{
				func_391(&uLocal_151, 4, NETWORK::NET_TO_PED(Local_103.f_F), "StoreHero", 1, 0);
				AUDIO::_PLAY_AMBIENT_SPEECH1(NETWORK::NET_TO_PED(Local_103.f_F), "GENERIC_FUCK_YOU", "SPEECH_PARAMS_FORCE", 1);
				MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_5), 2);
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_19, 7) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_5, 2))
			{
				if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_F), 2852500626) != 0 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_F), 2852500626) != 1)
				{
					NETWORK::_0x5E3AA4CA2B6FB0EE(NETWORK::NET_TO_PED(Local_103.f_F));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_103.f_F), Global_18084B);
					BRAIN::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_103.f_F), 20f, 0);
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_103.f_F), 1);
				}
			}
			break;
		
		case 5:
			if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_F), 242628503) != 0 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_F), 242628503) != 1)
			{
				NETWORK::_0x5E3AA4CA2B6FB0EE(NETWORK::NET_TO_PED(Local_103.f_F));
				BRAIN::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_103.f_F), uLocal_119);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_103.f_F), 1);
			}
			else if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_F), 3419293077) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_F), 3419293077) != 0)
			{
				if (func_17(&uLocal_135, 5000, 0))
				{
					func_13(&uLocal_135);
					BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_103.f_F), AUDIO::_0x0626A247D2405330(), 10000);
				}
			}
			break;
	}
	return 1;
}

int func_175()//Position - 0x7A4E
{
	if (Global_3DCE != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_176()//Position - 0x7A70
{
	if (Local_103.f_3 == 4)
	{
		if ((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 10) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 4)) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 17))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_D))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_D) || (!unk_0xDD5EE7D9FC37FA16(Local_103.f_D) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					if (!func_392(Local_103))
					{
						if (PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_103)))
						{
							ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_103.f_D), true, 0);
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_103.f_D), 1);
							ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_103.f_D), 0f, 0f, -1f);
							PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_103), 16);
							MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 4);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_103.f_D), true, 0);
						ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_103.f_D), 1);
						ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_103.f_D), 0f, 0f, -1f);
						MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 4);
					}
				}
			}
		}
	}
	func_177();
}

void func_177()//Position - 0x7B76
{
	int iVar0;
	var uVar1;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_D))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_103.f_D), 0))
		{
			if ((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 11) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 5)) && Local_103.f_25 > 0f)
			{
				if (((func_224() || func_223(0.87f)) || Local_103.f_3 >= 5) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 10))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 11))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_D))
						{
							OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_103.f_D), 0, 0);
							MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 13);
						}
						if (func_93(CAM::_0xDC9DA9E8789F5246()) != 155)
						{
							OBJECT::_0x0BF3B3BD47D79C08(func_50(1), 1);
						}
						MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 11);
					}
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_103.f_D), AUDIO::_0x0626A247D2405330()))
					{
						Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_7 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_7, &(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_7.f_2), 0, 0);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_D))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_103.f_D), 1, 1);
							func_45(&(Local_103.f_D));
						}
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iLocal_132, iLocal_133);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 10))
						{
							iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Local_103.f_25));
						}
						if (Local_103.f_4 > 1000)
						{
							Local_103.f_4 = 1000;
						}
						iVar0 = (iVar0 + Local_103.f_4);
						iVar0 = func_222(iVar0, 1);
						if (iVar0 > Global_40001.f_A6)
						{
							iVar0 = Global_40001.f_A6;
						}
						if (func_221(CAM::_0xDC9DA9E8789F5246()) && func_219(func_220(CAM::_0xDC9DA9E8789F5246())) < 1f)
						{
							if (Global_40001.f_1082 > 1f)
							{
								Global_40001.f_1082 = 1f;
							}
							iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1082));
						}
						if (iVar0 > 0)
						{
							if (func_218())
							{
								func_207(1734805203, iVar0, &uVar1, 0, 0, 0);
							}
							else
							{
								func_203(iVar0, 1, 1, 1092616192);
								NETWORKCASH::NETWORK_EARN_FROM_HOLDUPS(iVar0);
							}
						}
						Global_26862F.f_15FE = (Global_26862F.f_15FE + iVar0);
						Global_26862F.f_15FE.f_2 = 1;
						Global_26862F.f_15FE.f_5 = 1;
						iLocal_335 = (iLocal_335 + iVar0);
						func_202(3);
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 5))
						{
							func_201(Local_103.f_26, iVar0);
						}
						else
						{
							func_192(AUDIO::_0x0626A247D2405330(), iVar0);
						}
						func_191(1, iVar0);
						if (func_187(1))
						{
							func_178(4);
						}
						MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 5);
						MISC::SET_BIT(&(Local_105.f_35), 6);
					}
				}
			}
		}
	}
}

void func_178(int iParam0)//Position - 0x7E1F
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_40001.f_449A;
			break;
		
		case 1:
			iVar0 = Global_40001.f_4490;
			break;
		
		case 2:
			iVar0 = Global_40001.f_449B;
			break;
		
		case 3:
			iVar0 = Global_40001.f_4493;
			break;
		
		case 4:
			iVar0 = Global_40001.f_448F;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_40001.f_449E;
			break;
		
		case 8:
			iVar0 = Global_40001.f_449F;
			break;
		
		case 9:
			iVar0 = Global_40001.f_44A2;
			break;
		
		case 22:
			iVar0 = Global_40001.f_44A3;
			break;
		
		case 23:
			iVar0 = Global_40001.f_449C;
			break;
		
		case 25:
			iVar0 = Global_40001.f_4814;
			break;
		
		case 26:
			iVar0 = Global_40001.f_4813;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0x0022CBDAA2EA4C4F(func_185(func_186()), func_183(func_186()), func_182(), func_181(), iParam0, iVar0);
	}
	func_180(iVar0);
	func_179(iVar0);
}

void func_179(int iParam0)//Position - 0x7F44
{
	int iVar0;
	
	iVar0 = func_130(3968, 4294967295, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_1C1 = iVar0;
	func_128(3968, iVar0, 4294967295, 1, 0);
}

void func_180(int iParam0)//Position - 0x7F92
{
	int iVar0;
	
	iVar0 = CAM::_0xDC9DA9E8789F5246();
	Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 = (Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 + iParam0);
	if (Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 < 4294957297)
	{
		Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 = 9999;
	}
	else if (Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 > 9999)
	{
		Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 = 9999;
	}
}

int func_181()//Position - 0x800F
{
	if (Global_196EF6.f_3 != 0)
	{
		return Global_196EF6.f_3;
	}
	return 4294967295;
}

int func_182()//Position - 0x802B
{
	if (Global_196EF6.f_2 != 0)
	{
		return Global_196EF6.f_2;
	}
	return 4294967295;
}

int func_183(int iParam0)//Position - 0x8047
{
	if (iParam0 == func_184())
	{
		return 4294967295;
	}
	return Global_18CD5B[iParam0 /*560*/].f_B.f_8[1];
}

int func_184()//Position - 0x806C
{
	return 4294967295;
}

int func_185(int iParam0)//Position - 0x8075
{
	if (iParam0 == func_184())
	{
		return 4294967295;
	}
	return Global_18CD5B[iParam0 /*560*/].f_B.f_8[0];
}

int func_186()//Position - 0x809A
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B;
}

bool func_187(bool bParam0)//Position - 0x80AF
{
	return func_188(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

int func_188(int iParam0, bool bParam1)//Position - 0x80C1
{
	return func_189(iParam0, bParam1, 1);
}

int func_189(int iParam0, bool bParam1, int iParam2)//Position - 0x80D2
{
	int iVar0;
	
	if (iParam0 == func_184())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_190(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18CD5B[iParam0 /*560*/].f_B;
	if (iVar0 != func_184() && Global_18CD5B[iVar0 /*560*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_190(int iParam0, int iParam1)//Position - 0x812E
{
	if (iParam0 != func_184())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_184())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B == iParam0 && Global_18CD5B[iParam0 /*560*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_191(int iParam0, int iParam1)//Position - 0x817D
{
	if (iParam1 > 0)
	{
		if (Global_40001.f_5B34 == 0 || Global_40001.f_5B34 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_40001.f_5B34 == 1)
			{
				Global_26862F.f_110 = iParam0;
				if (iParam1 > Global_40001.f_1949)
				{
					iParam1 = Global_40001.f_1949;
				}
				Global_26862F.f_111 = iParam1;
				Global_26862F.f_112 = 0;
			}
		}
	}
}

void func_192(int iParam0, int iParam1)//Position - 0x81EF
{
	vector3 vVar0;
	
	vVar0 = { func_199(AUDIO::_0x0626A247D2405330(), 1) };
	if (iParam0 == func_198(AUDIO::_0x0626A247D2405330()))
	{
		func_197(1);
	}
	func_193(vVar0, iParam1, 7, 0, 0);
}

void func_193(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x8223
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = 4294967295;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_252F9E.f_505[iVar0 /*30*/].f_6 == 0 || Global_252F9E.f_505[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != 4294967295)
		{
			Global_252F9E.f_505[iVar1 /*30*/] = { vParam0 };
			Global_252F9E.f_505[iVar1 /*30*/].f_6 = 1;
			Global_252F9E.f_505[iVar1 /*30*/].f_4 = func_196(Global_252F9E.f_505[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_252F9E.f_505[iVar1 /*30*/].f_7 = HUD::_0x13C4B962653A5280();
			Global_252F9E.f_505[iVar1 /*30*/].f_3 = iParam1;
			Global_252F9E.f_505[iVar1 /*30*/].f_8 = iParam2;
			Global_252F9E.f_505[iVar1 /*30*/].f_9 = func_195();
			Global_252F9E.f_505[iVar1 /*30*/].f_A = func_194();
			StringCopy(&(Global_252F9E.f_505[iVar1 /*30*/].f_16), sParam3, 16);
			Global_252F9E.f_505[iVar1 /*30*/].f_1A = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), iParam4);
		}
	}
}

int func_194()//Position - 0x833A
{
	if (Global_252F9E.f_75E)
	{
		Global_252F9E.f_75E = 0;
		return 1;
	}
	Global_252F9E.f_75E = 0;
	return 0;
}

var func_195()//Position - 0x8364
{
	var uVar0;
	
	uVar0 = Global_252F9E.f_760;
	Global_252F9E.f_760 = 1;
	return uVar0;
}

float func_196(vector3 vParam0, var uParam1, var uParam2)//Position - 0x837F
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam0, 1);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

void func_197(int iParam0)//Position - 0x8418
{
	Global_252F9E.f_75E = iParam0;
}

int func_198(int iParam0)//Position - 0x8429
{
	return iParam0;
}

Vector3 func_199(int iParam0, bool bParam1)//Position - 0x8433
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		vVar1 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_200(AUDIO::_0x0626A247D2405330()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_200(int iParam0)//Position - 0x84F7
{
	return iParam0;
}

void func_201(vector3 vParam0, int iParam1)//Position - 0x8501
{
	func_193(vParam0, iParam1, 6, 0, 0);
}

void func_202(int iParam0)//Position - 0x8516
{
	Global_252F9E.f_760 = iParam0;
}

void func_203(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x8527
{
	func_204(iParam0, iParam1, iParam2, fParam3);
}

void func_204(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x853B
{
	func_205(iParam0, iParam1, iParam2, fParam3);
}

void func_205(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x854F
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
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_4 = iVar1;
	Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_3 = (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_206(iVar1, 0);
	}
}

void func_206(int iParam0, bool bParam1)//Position - 0x85D2
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_207(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x85E3
{
	int iVar0;
	
	if (!func_218())
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
		case 2649738075:
		case 3709248901:
		case 2935592169:
		case 454359403:
		case 3312573245:
		case 1643659499:
		case 2222677642:
		case 650665123:
		case 1654961868:
		case 3418119454:
		case 68030260:
		case 2172668013:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case 3778748250:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case 2905739390:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case 3395164992:
		case 3631022961:
		case 1208553146:
		case 3681746286:
		case 3623904420:
		case 3887766060:
		case 3540943093:
		case 2409522409:
		case 1931729587:
		case 1064954035:
		case 4114826223:
		case 2131324797:
		case 1612072658:
		case 3777519894:
		case 1948102096:
		case 1108628223:
		case 2460920732:
		case 3055958484:
		case 4072603454:
		case 3018288428:
		case 1564537328:
		case 4198373795:
		case 742499889:
		case 2050093329:
		case 2542479227:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case 2964212290:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case 3958163446:
		case 2882274531:
		case 618167454:
		case 980623936:
		case 437291904:
		case 4159154248:
		case 3364862819:
		case 2874057976:
		case 2561569253:
		case 2402207034:
		case 2749230248:
		case 2039302543:
		case 402505853:
		case 3151457114:
		case 1678112166:
		case 837955913:
		case 2762500152:
		case 1815541181:
			if (iParam1 > 0)
			{
				func_208(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 4263810419:
		case 3267748665:
		case 2896648878:
		case 1652884147:
		case 4237099040:
		case 3078478004:
		case 4248344981:
		case 3942610365:
		case 3304681061:
		case 563463121:
		case 1734805203:
		case 941287179:
		case 3108887451:
		case 2309817038:
		case 3167945912:
		case 4185766010:
		case 312105838:
		case 1982688246:
		case 3633936878:
		case 1301046174:
		case 2708796979:
		case 393059668:
		case 23796958:
		case 3217811126:
		case 1780666425:
		case 2251272238:
		case 2372412947:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case 4140234963:
		case 2932306805:
		case 645708827:
		case 767907967:
		case 2324815990:
		case 718859568:
		case 2339402525:
		case 892388724:
		case 2868046458:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case 4235299214:
		case 1736933716:
		case 2826443171:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case 3360501964:
		case 3100714174:
		case 4082360211:
		case 3479420741:
		case 1048226110:
		case 569170531:
		case 3438960429:
		case 848090538:
		case 4247420391:
		case 4001907056:
		case 463142405:
		case 1550217370:
		case 4193659516:
		case 3630369731:
		case 599804707:
		case 3967048882:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case 2164767625:
		case 3067312758:
		case 1864522104:
		case 215608230:
		case 3418954532:
		case 3572072971:
		case 1407278493:
		case 2715572802:
		case 4267523385:
		case 1179783540:
		case 923419301:
		case 3986141121:
		case 603298940:
		case 4282347442:
		case 3983854621:
		case 870439158:
		case 3320678556:
		case 4290828642:
		case 3114013174:
		case 2376916280:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case 3122066507:
		case 2279567963:
		case 2720171655:
		case 3333932415:
		case 1135468152:
		case 1265272476:
		case 3660240660:
		case 696556762:
		case 403506509:
		case 3411090882:
		case 3230816581:
		case 2907714241:
		case 3578004144:
		case 1138089938:
		case 3733955243:
			func_208(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case 2952902635:
		case 3696988851:
			if (iParam1 > 0)
			{
				func_208(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case 3194003497:
			func_208(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_208(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x8B50
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_218())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_77()) || unk_0x64BE694244417BDA())
		{
			Global_410E36 = 1;
			return 0;
		}
		if (Global_2586D5)
		{
			if (iParam3 == 1067618600 || iParam3 == 2991135598)
			{
				Global_410E37 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_410C0F[iVar2 /*80*/].f_3D.f_2 == 0)
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
			*uParam0 = func_215(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != 4294967295)
				{
					Global_410C0F[*uParam0 /*80*/].f_3D.f_8 = 1;
					Global_410C0F[*uParam0 /*80*/].f_3D.f_C = 1;
				}
			}
			Global_410E28 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_410E35 = 1;
			Global_410E38 = iParam4;
			Global_410E3A = iParam3;
			Global_410E3B = 1;
			Global_410E39 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_410E38 = iParam4;
			Global_410E3A = iParam3;
			Global_410E3B = 1;
			Global_410E39 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_214(1, iParam4);
			Global_410E35 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_209(4294967295, iParam4, iParam6, iParam5, 4294967295);
		}
	}
	return 0;
}

void func_209(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8CFB
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_7A.f_47), 0);
			break;
	}
	if (iParam0 != 4294967295)
	{
		func_210(iParam0);
	}
}

void func_210(int iParam0)//Position - 0x8D33
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_218())
	{
		bVar0 = true;
	}
	if (iParam0 != 4294967295)
	{
		if (func_213(iParam0))
		{
			if (!bVar0)
			{
				unk_0x220FA7ABD5D740BF();
			}
		}
		else if (!bVar0)
		{
			unk_0xBDAA2C842F5C47BF(Global_410C0F[iParam0 /*80*/].f_3D);
		}
		func_211(&(Global_410C0F[iParam0 /*80*/]));
	}
}

void func_211(var uParam0)//Position - 0x8D87
{
	uParam0->f_3D = 0;
	uParam0->f_3D = 2147483647;
	uParam0->f_3D.f_1 = 0;
	uParam0->f_3D.f_2 = 0;
	uParam0->f_3D.f_3 = 2701847856;
	uParam0->f_3D.f_4 = 2209654107;
	uParam0->f_3D.f_5 = 0;
	uParam0->f_3D.f_6 = 1227573907;
	uParam0->f_3D.f_7 = 3133133477;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_212(&(uParam0->f_D));
	func_212(&(uParam0->f_D.f_D));
	StringCopy(&(uParam0->f_D.f_1A), "", 32);
	StringCopy(&(uParam0->f_D.f_22), "", 24);
	StringCopy(&(uParam0->f_D.f_28), "", 16);
	StringCopy(&(uParam0->f_D.f_2C), "", 16);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_3D.f_8 = 0;
	uParam0->f_3D.f_9 = 0;
	uParam0->f_3D.f_A = 0;
	uParam0->f_3D.f_B = 0;
	uParam0->f_3D.f_D = 0;
	uParam0->f_3D.f_C = 0;
	uParam0->f_3D.f_E = 0;
	uParam0->f_3D.f_F = 0;
	uParam0->f_3D.f_10 = 0;
	uParam0->f_3D.f_12 = 0;
}

void func_212(var uParam0)//Position - 0x8E92
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
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 0;
}

int func_213(int iParam0)//Position - 0x8EDA
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_410C0F[iParam0 /*80*/].f_3D.f_5 == 1;
	}
	return 0;
}

void func_214(int iParam0, int iParam1)//Position - 0x8F04
{
	Global_258B69 = iParam1;
	Global_258B68 = iParam0;
}

int func_215(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)//Position - 0x8F18
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_410C0F[iVar0 /*80*/].f_3D.f_2 == 0)
		{
			if (!func_218())
			{
				iParam0 = iVar0 + 900;
			}
			Global_410C0F[iVar0 /*80*/].f_3D.f_2 = 1;
			Global_410C0F[iVar0 /*80*/].f_3D.f_1 = iParam5;
			Global_410C0F[iVar0 /*80*/].f_3D.f_3 = iParam1;
			Global_410C0F[iVar0 /*80*/].f_3D.f_4 = iParam2;
			Global_410C0F[iVar0 /*80*/].f_3D.f_7 = iParam3;
			Global_410C0F[iVar0 /*80*/].f_3D.f_5 = 0;
			Global_410C0F[iVar0 /*80*/].f_3D = iParam0;
			Global_410C0F[iVar0 /*80*/].f_3D.f_6 = iParam4;
			Global_410C0F[iVar0 /*80*/].f_3D.f_B = uParam8;
			Global_410C0F[iVar0 /*80*/].f_3D.f_A = iParam7;
			Global_410C0F[iVar0 /*80*/].f_3D.f_D = iParam9;
			Global_410C0F[iVar0 /*80*/].f_3D.f_C = 0;
			Global_410C0F[iVar0 /*80*/].f_3D.f_E = MISC::GET_FRAME_COUNT();
			Global_410C0F[iVar0 /*80*/].f_3D.f_12 = 0;
			Global_410E28 = 0;
			if (bParam6)
			{
				Global_410C0F[iVar0 /*80*/].f_3D.f_5 = 1;
			}
			if (iParam1 == 3159588365 && bParam10)
			{
				func_216(Global_410C0F[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_216(struct<62> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x9054
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 3981691983;
	vVar0.y = CAM::_0xDC9DA9E8789F5246();
	vVar0.f_2 = { Param0.f_3D };
	vVar0.f_2.f_20 = iParam19;
	iVar1 = func_8(vVar0.y);
	if ((Global_40001.f_5B83 && !Global_40001.f_5B84) && !Global_40001.f_5B85)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_217();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_217()//Position - 0x90E6
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_218()//Position - 0x90F6
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

float func_219(int iParam0)//Position - 0x910D
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_220(int iParam0)//Position - 0x91C5
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18CD5B[iVar0 /*560*/];
	}
	return 4294967295;
}

int func_221(int iParam0)//Position - 0x91E4
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18CD5B[iVar0 /*560*/] != 4294967295;
	}
	return 0;
}

int func_222(int iParam0, int iParam1)//Position - 0x9205
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(iParam0) * Global_40001);
				iParam0 = SYSTEM::ROUND(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_223(float fParam0)//Position - 0x9246
{
	iLocal_114 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_1D);
	if (iLocal_114 >= 0)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_114) >= fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_224()//Position - 0x927C
{
	iLocal_114 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_1D);
	if (iLocal_114 >= 0)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_114) >= 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_225()//Position - 0x92B1
{
	func_226();
}

int func_226()//Position - 0x92BE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103))
	{
		return 0;
	}
	if (func_392(Local_103))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_35, 3))
		{
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_103));
			MISC::SET_BIT(&(Local_105.f_35), 3);
		}
		return 0;
	}
	switch (Local_103.f_3)
	{
		case 0:
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_103), 71, 1);
			break;
		
		case 1:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 4) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 12))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 13))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 17))
					{
						PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_103), 16);
						BRAIN::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_103), AUDIO::_0x0626A247D2405330(), 4294967295, 0, 2);
						if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
						{
							func_232(10);
						}
						else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 0))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 11))
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 12))
								{
									func_232(13);
								}
								else
								{
									func_232(20);
								}
							}
							else
							{
								func_232(17);
							}
							MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 25);
						}
						else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 11))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 12))
							{
								func_232(0);
							}
							else
							{
								func_232(18);
							}
						}
						else
						{
							func_232(15);
						}
						MISC::SET_BIT(&(Local_105.f_34), 17);
					}
					else if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), 3419293077) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), 3419293077) != 0)
					{
						if (func_17(&uLocal_135, 5000, 0))
						{
							func_13(&uLocal_135);
							if (!iLocal_108)
							{
								BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_103), AUDIO::_0x0626A247D2405330(), 10000);
							}
							BRAIN::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_103), AUDIO::_0x0626A247D2405330(), 4294967295, 0, 2);
						}
					}
				}
			}
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_103), 71, 1);
			break;
		
		case 2:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 7) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 0))
			{
				iVar1 = AUDIO::_0x0626A247D2405330();
				if (Local_103.f_20 > 4294967295)
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_103.f_20)))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_103.f_20));
						iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					BRAIN::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_103), iVar1, 4294967295, 0, 2);
					PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_103), 16);
					BRAIN::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(Local_103), "mp_am_hold_up", "WARY_LOOP", 4f, -4f, 4294967295, 49, 0, 0, 0, 0);
					MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 0);
				}
			}
			else if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), 3419293077) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), 3419293077) != 0)
			{
				if (func_17(&uLocal_135, 5000, 0))
				{
					iVar1 = AUDIO::_0x0626A247D2405330();
					if (Local_103.f_20 > 4294967295)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_103.f_20)))
						{
							iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_103.f_20));
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
						}
					}
					func_13(&uLocal_135);
					BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_103), iVar1, 10000);
					BRAIN::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_103), iVar1, 4294967295, 0, 2);
				}
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 16))
			{
				PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_103), 16);
			}
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_103), 71, 1);
			break;
		
		case 3:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 25))
			{
				if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), 1920390111) != 0 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), 1920390111) != 1)
				{
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_103), 1);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_103), 2, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_103), 8, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_103), 16, true);
					PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_103), 16);
					BRAIN::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_103), Local_103.f_2A, 4294967295);
					MISC::SET_BIT(&(Local_105.f_34), 25);
				}
			}
			break;
		
		case 4:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 17) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 3))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					Global_26862F.f_8 = 1;
				}
				iVar2 = AUDIO::_0x0626A247D2405330();
				if (Global_26862F.f_9 != func_184())
				{
					if (func_44(Global_26862F.f_9, 1, 1))
					{
						iVar2 = PLAYER::GET_PLAYER_PED(Global_26862F.f_9);
					}
				}
				BRAIN::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_103), iVar2, 30000, 0, 3);
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_103), "mood_stressed_1", 0);
				MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 3);
			}
			else
			{
				iLocal_114 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_1D);
				if (iLocal_114 >= 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114))
					{
						fLocal_318 = (Local_103.f_21 + 0.6f);
						if (fLocal_318 < 0.75f)
						{
							fLocal_318 = 0.75f;
						}
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 4))
						{
							fLocal_318 = (fLocal_318 + 0.25f);
						}
						if (fLocal_318 > 1.75f)
						{
							fLocal_318 = 1.75f;
						}
						PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_114, fLocal_318);
					}
				}
			}
			break;
		
		case 5:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 10))
			{
				if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), 242628503) != 0 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), 242628503) != 1)
				{
					if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_103)))
					{
						iLocal_114 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_1D);
						if ((iLocal_114 >= 0 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114)) || iLocal_114 < 0)
						{
							BRAIN::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_103), uLocal_119);
							PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_103), 16);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_103), 1);
							MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 10);
						}
					}
				}
			}
			else if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), 3419293077) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), 3419293077) != 0)
			{
				if (func_17(&uLocal_135, 5000, 0))
				{
					func_13(&uLocal_135);
					iVar1 = AUDIO::_0x0626A247D2405330();
					if (Local_103.f_20 > 4294967295)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_103.f_20)))
						{
							iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_103.f_20));
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
						}
					}
					BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_103), iVar1, 10000);
					BRAIN::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_103), AUDIO::_0x0626A247D2405330(), 4294967295, 0, 2);
				}
			}
			break;
		
		case 6:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 10))
			{
				if ((iLocal_114 < 0 || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114)) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_114) >= 0.95f)
				{
					func_231();
					iVar1 = AUDIO::_0x0626A247D2405330();
					if (Local_103.f_20 > 4294967295)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_103.f_20)))
						{
							iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_103.f_20));
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
						}
					}
					BRAIN::TASK_HANDS_UP(NETWORK::NET_TO_PED(Local_103), 4294967295, iVar1, 4294967295, 1);
					MISC::_0x1327E2FE9746BAEE(NETWORK::NET_TO_PED(Local_103), 0, 0);
					PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_103), 16);
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_103), 1);
					MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 10);
				}
			}
			break;
		
		case 7:
			if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), 2852500626) != 0 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), 2852500626) != 1)
			{
				if (!func_175())
				{
					func_230();
					NETWORK::_0x5E3AA4CA2B6FB0EE(NETWORK::NET_TO_PED(Local_103));
					BRAIN::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_103), 20f, 0);
					func_232(4);
				}
			}
			break;
		
		case 8:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 9))
			{
				func_231();
				iLocal_114 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_1D);
				if ((iLocal_114 >= 0 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114)) || iLocal_114 < 0)
				{
					if ((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 27) && !func_36()) && !func_35())
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 2))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 3))
							{
								BRAIN::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_103), uLocal_121);
								iVar3 = 1;
							}
							else
							{
								func_230();
								BRAIN::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_103), uLocal_122);
								iVar3 = 1;
							}
						}
					}
					else
					{
						BRAIN::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(Local_103), vLocal_112, 250f, 4294967295, 1, 0);
						iVar3 = 1;
					}
					if (iVar3 == 1)
					{
						func_232(25);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_103), 1);
						func_6(Local_105.f_32, 1, func_7());
						MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 9);
					}
				}
			}
			else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 19))
			{
				iVar4 = BRAIN::GET_NAVMESH_ROUTE_RESULT(NETWORK::NET_TO_PED(Local_103));
				if (iVar4 == 3)
				{
					BRAIN::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_103));
					MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 19);
				}
				else if (iVar4 == 2)
				{
					NETWORK::_0x5E3AA4CA2B6FB0EE(NETWORK::NET_TO_PED(Local_103));
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 3))
					{
						BRAIN::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_103), uLocal_123);
					}
					else
					{
						BRAIN::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_103), 20f, 0);
					}
					MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 19);
				}
			}
			break;
	}
	func_227();
	return 1;
}

void func_227()//Position - 0x9B95
{
	if ((Local_103.f_3 != 8 && Local_103.f_3 != 7) && Local_103.f_2 == 3)
	{
		if ((((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 14) || !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 15)) || !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 22)) || !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 23)) || !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 30))
		{
			iLocal_114 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_1D);
			if (iLocal_114 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114))
				{
					if (!func_175())
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 14) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 6))
						{
							func_232(2);
							MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 6);
						}
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 15) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 7))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_114) > 0.87f)
							{
								func_232(3);
								MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 7);
							}
						}
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 22) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 22))
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 24) && !func_175())
							{
								func_232(11);
								MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 22);
							}
						}
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 23) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 23))
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 25) && !func_175())
							{
								func_232(12);
								MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 23);
							}
						}
					}
				}
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 9))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 26) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 24))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 7))
				{
					if (!func_175())
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 11))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 12))
							{
								func_232(1);
							}
							else
							{
								func_232(19);
							}
						}
						else
						{
							func_232(16);
						}
						MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 24);
						return;
					}
					else
					{
						func_228();
						return;
					}
				}
			}
			if (((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 30) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 25)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 7)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 4))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 0) && !func_175())
				{
					if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 7) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 4)) || (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 7) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 4)))
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 11))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 12))
							{
								func_232(13);
							}
							else
							{
								func_232(20);
							}
						}
						else
						{
							func_232(17);
						}
						MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 25);
						return;
					}
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 31) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 26))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 1) && !func_175())
				{
					func_232(14);
					MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 26);
					return;
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 9) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 31))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 8) && !func_175())
				{
					func_232(22);
					MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 31);
					return;
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_1, 3) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_1, 3))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_1, 2) && !func_175())
				{
					func_232(24);
					MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_1), 3);
					return;
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 14) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 20))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 13) && !func_175())
				{
					func_232(23);
					MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 20);
					return;
				}
			}
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 6) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 29))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 5))
		{
			if (!func_175())
			{
				func_232(21);
				MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 29);
				return;
			}
		}
	}
}

void func_228()//Position - 0xA034
{
	Global_3960 = 0;
	func_229();
}

void func_229()//Position - 0xA044
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_41C1 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_3DCE = 6;
	}
}

void func_230()//Position - 0xA065
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iVar0 < 3)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103), joaat("weapon_pistol"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_103), MISC::GET_RANDOM_INT_IN_RANGE(10, 35));
	}
	else if (iVar0 < 6)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103), joaat("weapon_combatpistol"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_103), MISC::GET_RANDOM_INT_IN_RANGE(15, 40));
	}
	else if (iVar0 == 6)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103), joaat("weapon_microsmg"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_103), MISC::GET_RANDOM_INT_IN_RANGE(10, 25));
	}
	else if (iVar0 == 7)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103), joaat("weapon_combatmg"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_103), MISC::GET_RANDOM_INT_IN_RANGE(5, 15));
	}
	else if (iVar0 == 8)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103), joaat("weapon_bat"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_103), MISC::GET_RANDOM_INT_IN_RANGE(20, 40));
	}
	else if (iVar0 == 9)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103), joaat("weapon_assaultrifle"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_103), MISC::GET_RANDOM_INT_IN_RANGE(5, 30));
	}
	else if (iVar0 == 10)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103), joaat("weapon_sawnoffshotgun"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_103), MISC::GET_RANDOM_INT_IN_RANGE(5, 20));
	}
	else
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103), joaat("weapon_pumpshotgun"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_103), MISC::GET_RANDOM_INT_IN_RANGE(10, 25));
	}
	func_6(Local_105.f_32, 1, func_7());
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_103), Global_18084B);
	NETWORK::_SET_NETWORK_OBJECT_NON_CONTACT(NETWORK::NET_TO_PED(Local_103), 1);
	PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_103), 1);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_103), vLocal_111, 20f, 0, 0);
	PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_103), 1);
}

void func_231()//Position - 0xA22B
{
	iLocal_114 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_1D);
	if (iLocal_114 >= 0)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114))
		{
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_103.f_1D);
		}
	}
}

void func_232(int iParam0)//Position - 0xA257
{
	struct<2> Var0;
	int iVar1;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 13))
	{
		if (!func_392(Local_103))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103) || (!unk_0xDD5EE7D9FC37FA16(Local_103) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_103)))
				{
					if (Local_103.f_2D == 0)
					{
						StringCopy(&Var0, "RB_SH2", 16);
					}
					else if (Local_103.f_2D == 1)
					{
						StringCopy(&Var0, "RB_12_F", 16);
					}
					else
					{
						StringCopy(&Var0, "RB_SH3", 16);
					}
					StringIntConCat(&Var0, Local_103.f_1F, 16);
					StringIntConCat(&Var0, iParam0, 16);
					if (MISC::ARE_STRINGS_EQUAL(&Var0, "RB_SH241"))
					{
						if (WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iVar1, 1))
						{
							if ((((((iVar1 == joaat("weapon_unarmed") || iVar1 == 0) || iVar1 == joaat("object")) || iVar1 == joaat("weapon_flare")) || iVar1 == joaat("weapon_snowball")) || func_250(iVar1)) || func_249(iVar1))
							{
								StringCopy(&Var0, "RB_SH211", 16);
							}
						}
					}
					func_391(&uLocal_151, 3, NETWORK::NET_TO_PED(Local_103), &(Local_103.f_2E), 1, 0);
					switch (iParam0)
					{
						case 0:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_GREET", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 1:
							func_233(&uLocal_151, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 2:
							func_233(&uLocal_151, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 3:
							func_233(&uLocal_151, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 4:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_BRAVE", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 10:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_REMOVE_VEHICLE", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 11:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_REACT_TO_SHOUT", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 12:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_HURRYING", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 13:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_NO_COPS", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 14:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_THREATENED", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 15:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_GREET_START", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 16:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_SCARED_START", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 17:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_NO_COPS_START", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 18:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_GREET_END", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 19:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_SCARED_END", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 20:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_NO_COPS_END", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 21:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_COPS_ARRIVED", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 22:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_SELL", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 23:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_NO_ENTRY", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 24:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_STEAL", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 25:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SCREAM_PANIC", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						}
					}
				}
			}
	}
}

int func_233(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA608
{
	func_248(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_3DD5 = 0;
	Global_3DD7 = 0;
	Global_3DDC = 0;
	Global_41AD = 0;
	Global_41AF = 0;
	Global_41B3 = 0;
	Global_280001 = 1;
	return func_234(sParam2, iParam3, 0);
}

int func_234(char* sParam0, int iParam1, bool bParam2)//Position - 0xA656
{
	Global_3DCF = 0;
	if (Global_3DCE == 0 || Global_3DD0 == 2)
	{
		if (Global_3DCE != 0)
		{
			if (iParam1 > Global_3DD0)
			{
				if (Global_3DD5 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_38B1.f_1 = 3;
					Global_3DCE = 0;
					Global_3DCF = 1;
					Global_3E03 = 0;
					Global_3DCA = 0;
					Global_3DCB = 0;
					Global_3DD9 = 0;
					Global_3DD8 = 0;
					Global_38B0 = 0;
				}
				else
				{
					func_247();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_246(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_245();
		Global_3B07 = { Global_3BAC };
		Global_3DD4 = Global_3DD5;
		Global_3DDB = Global_3DDC;
		Global_280002 = Global_280001;
		Global_3DDD = { Global_3DED };
		Global_3DD6 = Global_3DD7;
		Global_41AC = Global_41AD;
		Global_41B4 = { Global_41BA };
		Global_41AE = Global_41AF;
		Global_41B0 = Global_41B1;
		Global_41B2 = Global_41B3;
		Global_3C51.f_172 = Global_41AB;
		Global_3C51.f_170 = Global_41A9;
		Global_3C51.f_171 = Global_41AA;
		Global_3DCA = Global_3DCB;
		if (Global_3DD4)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 20);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 17);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 0);
			if (bParam2)
			{
				func_239();
				if (Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_38B1.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_388F == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (func_238())
				{
					return 0;
				}
				if (BRAIN::IS_PED_SPRINTING(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(AUDIO::_0x0626A247D2405330(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_11625)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(AUDIO::_0x0626A247D2405330()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(AUDIO::_0x0626A247D2405330()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(CAM::_0xDC9DA9E8789F5246()))
					{
						return 0;
					}
				}
			}
			if (func_237())
			{
				return 0;
			}
			else
			{
				switch (Global_38B1.f_1)
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
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 9))
				{
					return 0;
				}
			}
			func_236();
			Global_3DD8 = bParam2;
		}
		Global_3DD0 = iParam1;
		StringCopy(&Global_3C51, sParam0, 24);
		Global_3960 = 0;
		func_235();
		return 1;
	}
	if (Global_3DCE == 5)
	{
		return 0;
	}
	if (iParam1 < Global_3DD0 || iParam1 == Global_3DD0)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_247();
	}
	return 0;
}

void func_235()//Position - 0xA922
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_3962[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_3DCE = 1;
}

void func_236()//Position - 0xA954
{
	Global_3E03 = Global_3E02;
	Global_3DFD = Global_3DFE;
	Global_3E2C = { Global_3E20 };
	Global_3E32 = { Global_3E26 };
	Global_3E05 = Global_3E04;
	Global_3E4A = { Global_3E38 };
	Global_3E50 = { Global_3E3E };
	Global_3E56 = { Global_3E44 };
	Global_3E5C = { Global_3E62 };
	Global_6A2 = Global_6A3;
	Global_6A4 = Global_6A5;
	Global_3DD9 = Global_3DDA;
	Global_3DDB = Global_3DDC;
	Global_3DDD = { Global_3DED };
	Global_3DD2 = Global_3DD3;
	Global_41C6 = 0;
	Global_3DFF = 0;
	Global_3E00 = 0;
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 16);
}

int func_237()//Position - 0xA9E9
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_238()//Position - 0xAA10
{
	int iVar0;
	int iVar1;
	
	if (Global_11625)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (PED::GET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 78, 1))
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

void func_239()//Position - 0xAAA9
{
	if (func_126(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[0 /*29*/])
			{
				Global_38B1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[1 /*29*/])
			{
				Global_38B1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[2 /*29*/])
			{
				Global_38B1 = 2;
			}
			else
			{
				Global_38B1 = 0;
			}
		}
	}
	else
	{
		Global_38B1 = func_240();
		if (Global_38B1 == 145)
		{
			Global_38B1 = 3;
		}
		if (Global_11625)
		{
			Global_38B1 = 3;
		}
		if (Global_38B1 > 3)
		{
			Global_38B1 = 3;
		}
	}
}

var func_240()//Position - 0xAB4B
{
	func_241();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_241()//Position - 0xAB64
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_244(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_243(AUDIO::_0x0626A247D2405330());
			if (func_242(iVar0) && (!func_126(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_242(Global_19E56.f_933.f_21B.f_10CD))
				{
					Global_19E56.f_933.f_21B.f_10CE = Global_19E56.f_933.f_21B.f_10CD;
				}
				Global_19E56.f_933.f_21B.f_10CF = iVar0;
				Global_19E56.f_933.f_21B.f_10CD = iVar0;
				return;
			}
		}
		else
		{
			if (Global_19E56.f_933.f_21B.f_10CD != 145)
			{
				Global_19E56.f_933.f_21B.f_10CF = Global_19E56.f_933.f_21B.f_10CD;
			}
			return;
		}
	}
	Global_19E56.f_933.f_21B.f_10CD = 145;
}

bool func_242(int iParam0)//Position - 0xAC61
{
	return iParam0 < 3;
}

int func_243(int iParam0)//Position - 0xAC6D
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_244(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_244(int iParam0)//Position - 0xACAA
{
	if (func_242(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_245()//Position - 0xACD4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_3B07[iVar0 /*10*/] = 0;
		StringCopy(&(Global_3B07[iVar0 /*10*/].f_1), "", 24);
		Global_3B07[iVar0 /*10*/].f_7 = 0;
		Global_3B07[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_3B07.f_A1 = 4294967197;
	Global_3B07.f_A2 = { 0f, 0f, 0f };
}

bool func_246(int iParam0, int iParam1)//Position - 0xAD2C
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > 4294967295)
			{
				return Global_14E0B5.f_CB[iParam1];
			}
			break;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E0B5.f_418, iParam0);
}

void func_247()//Position - 0xAD67
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_41C1 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_38B1.f_1 == 9) || Global_38B0 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_3DCE = 6;
		Global_38B1.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_3DCE = 6;
		return;
	}
}

void func_248(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0xADBE
{
	Global_3BAC = { *uParam0 };
	Global_6A3 = iParam1;
	StringCopy(&Global_3E14, sParam2, 24);
	Global_41AB = uParam5;
	if (iParam3 == 0)
	{
		Global_41A9 = 1;
		Global_41A7 = 0;
	}
	else
	{
		Global_41A9 = 0;
		Global_41A7 = 1;
	}
	if (iParam4 == 0)
	{
		Global_41AA = 1;
		Global_41A8 = 0;
	}
	else
	{
		Global_41AA = 0;
		Global_41A8 = 1;
	}
}

int func_249(int iParam0)//Position - 0xAE14
{
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_grenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_proxmine"):
			return 1;
			break;
		
		case 3125143736:
			return 1;
			break;
	}
	return 0;
}

int func_250(int iParam0)//Position - 0xAE56
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_bat"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_hatchet"):
		case joaat("weapon_machete"):
		case joaat("weapon_switchblade"):
			return 1;
			break;
		
		case 3441901897:
		case 2484171525:
		case 419712736:
			return 1;
			break;
		
		case 940833800:
			return 1;
	}
	return 0;
}

void func_251()//Position - 0xAED8
{
	int iVar0;
	
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0);
	if (Local_103.f_2B != iVar0)
	{
		if (Local_103.f_2B < iVar0 || func_258(Local_103.f_2B, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_103.f_2B);
		}
	}
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0);
	if (Local_103.f_2C != iVar0)
	{
		if (Local_103.f_2C < iVar0 || func_252(Local_103.f_2C, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_103.f_2C);
		}
	}
}

int func_252(int iParam0, bool bParam1, bool bParam2)//Position - 0xAF46
{
	return func_253(2, iParam0, 1, bParam1, bParam2);
}

int func_253(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xAF5A
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_150F4B, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_257(iParam0) - func_256(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_256(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_257(iParam0) - func_255(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_256(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_257(iParam0) - func_256(iParam0, 1));
		}
		if (!bParam4 && Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] != 3)
		{
			iVar1 = (iVar1 - func_254(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_254(int iParam0)//Position - 0xB023
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

int func_255(int iParam0)//Position - 0xB05D
{
	switch (iParam0)
	{
		case 0:
			return Global_150F4B.f_1;
			break;
		
		case 1:
			return Global_150F4B.f_2;
			break;
		
		case 2:
			return Global_150F4B.f_3;
			break;
	}
	return 0;
}

int func_256(int iParam0, bool bParam1)//Position - 0xB0A3
{
	int iVar0;
	
	iVar0 = CAM::_0xDC9DA9E8789F5246();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_24FBF9[iVar0 /*413*/].f_D1;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_24FBF9[iVar0 /*413*/].f_D2;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_24FBF9[iVar0 /*413*/].f_D3;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_257(int iParam0)//Position - 0xB140
{
	switch (iParam0)
	{
		case 0:
			return Global_150F53;
			break;
		
		case 1:
			return Global_150F54;
			break;
		
		case 2:
			return Global_150F55;
			break;
	}
	return 0;
}

int func_258(int iParam0, bool bParam1, bool bParam2)//Position - 0xB180
{
	return func_253(0, iParam0, 1, bParam1, bParam2);
}

void func_259()//Position - 0xB194
{
	float fVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	switch (iLocal_336)
	{
		case 0:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_35, 0))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_E))
				{
					if (func_265(vLocal_342))
					{
						vLocal_342 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_OBJ(Local_103.f_E), 0f, -0.5f, 0f) };
						MISC::SET_BIT(&(Local_105.f_35), 0);
					}
				}
			}
			if ((((ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_342, 0.5f, 0.5f, 1f, 0, 1, 0) && (func_392(Local_103) || Local_103.f_3 > 7)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 20)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 11)) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vLocal_115, 1.5f) == 0)
			{
				if (((((!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) && !func_172(0)) && !func_264()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !func_37(CAM::_0xDC9DA9E8789F5246(), 146)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_E))
				{
					func_152("FHU_MANR", 4294967295);
					Global_26862F.f_15FE.f_4 = 1;
					iLocal_336 = 1;
				}
			}
			break;
		
		case 1:
			if (((((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_18, 16) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 12)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 20)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 11)) && ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_342, 0.5f, 0.5f, 1f, 0, 1, 0)) && (!func_142(CAM::_0xDC9DA9E8789F5246()) || func_93(CAM::_0xDC9DA9E8789F5246()) == 154))
			{
				if (((PAD::IS_CONTROL_JUST_PRESSED(0, 51) && !func_263(0)) && !func_264()) && !HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_150("FHU_MANR"))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 640);
					MISC::SET_BIT(&(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/]), 12);
					iLocal_336 = 2;
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
					if (iLocal_341 == 0)
					{
						func_260(&iLocal_341, 4, "FHU_MANR", 0, 0, 0, 0);
					}
				}
			}
			else if (func_150("FHU_MANR"))
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				vVar3 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
				vLocal_342.z = (vVar3.z - 1f);
				ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), vLocal_342, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), MISC::GET_HEADING_FROM_VECTOR_2D((vLocal_129.x - vLocal_342.x), (vLocal_129.y - vLocal_342.y)));
				BRAIN::CLEAR_SEQUENCE_TASK(&uVar4);
				BRAIN::OPEN_SEQUENCE_TASK(&uVar4);
				BRAIN::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				BRAIN::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 262145, 0, 0, 0, 0);
				BRAIN::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				CUTSCENE::_0x8D9DF6ECA8768583(uVar4);
				BRAIN::TASK_PERFORM_SEQUENCE(AUDIO::_0x0626A247D2405330(), uVar4);
				PED::SET_PED_USING_ACTION_MODE(AUDIO::_0x0626A247D2405330(), 0, 4294967295, 0);
				PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 200, 1);
				PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 71, 1);
				bVar2 = WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iLocal_340, 1);
				if (bVar2)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_unarmed"), true);
				}
				MISC::_0x1327E2FE9746BAEE(AUDIO::_0x0626A247D2405330(), 0, 0);
				if (!CAM::DOES_CAM_EXIST(iLocal_337))
				{
					iLocal_337 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_337, AUDIO::_0x0626A247D2405330(), -0.1878f, 3.0635f, 0.68f, 1);
				CAM::POINT_CAM_AT_ENTITY(iLocal_337, AUDIO::_0x0626A247D2405330(), -0.0129f, 0.0927f, 0.3008f, 1);
				CAM::SET_CAM_FOV(iLocal_337, 35f);
				CAM::SHAKE_CAM(iLocal_337, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(iLocal_337, 1);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			}
			iLocal_336 = 3;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_338))
				{
					iLocal_338 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_338, AUDIO::_0x0626A247D2405330(), -1.0346f, 2.9183f, 0.68f, 1);
				CAM::POINT_CAM_AT_ENTITY(iLocal_338, AUDIO::_0x0626A247D2405330(), -0.0574f, 0.1074f, 0.3008f, 1);
				CAM::SET_CAM_FOV(iLocal_338, 35f);
				CAM::SHAKE_CAM(iLocal_338, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_338, iLocal_337, 6000, 1, 1);
				PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 71, 1);
				PED::SET_PED_USING_ACTION_MODE(AUDIO::_0x0626A247D2405330(), 0, 4294967295, 0);
				PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 200, 1);
			}
			iLocal_336 = 4;
			break;
		
		case 4:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_338))
			{
				iLocal_336 = 5;
			}
			else if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(AUDIO::_0x0626A247D2405330(), "oddjobs@shop_robbery@rob_till", "loop", 3))
				{
					fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(AUDIO::_0x0626A247D2405330(), "oddjobs@shop_robbery@rob_till", "loop");
					if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
					{
						if (!iLocal_339)
						{
							iVar5 = SYSTEM::ROUND(((IntToFloat(iLocal_132) * 0.75f) / 4f));
							iVar6 = SYSTEM::ROUND(((IntToFloat(iLocal_133) * 0.75f) / 4f));
							iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(iVar5, iVar6 + 1);
							iVar1 = func_222(iVar1, 1);
							if (iVar1 > (Global_40001.f_A6 / 4))
							{
								iVar1 = (Global_40001.f_A6 / 4);
							}
							if (func_221(CAM::_0xDC9DA9E8789F5246()) && func_219(func_220(CAM::_0xDC9DA9E8789F5246())) < 1f)
							{
								if (Global_40001.f_1082 > 1f)
								{
									Global_40001.f_1082 = 1f;
								}
								iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1082));
							}
							if (iVar1 > 0)
							{
								if (func_218())
								{
									func_207(1734805203, iVar1, &uVar7, 0, 0, 0);
								}
								else
								{
									func_203(iVar1, 1, 1, 1092616192);
									NETWORKCASH::NETWORK_EARN_FROM_HOLDUPS(iVar1);
								}
							}
							Global_26862F.f_15FE = (Global_26862F.f_15FE + iVar1);
							iLocal_335 = (iLocal_335 + iVar1);
							func_191(1, iLocal_335);
							unk_0x1190AB7024CBD8CB(4294967295, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
							iLocal_339 = 1;
						}
					}
					else if (iLocal_339)
					{
						iLocal_339 = 0;
					}
				}
				PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 71, 1);
				PED::SET_PED_USING_ACTION_MODE(AUDIO::_0x0626A247D2405330(), 0, 4294967295, 0);
				PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 200, 1);
			}
			break;
		
		case 5:
			if (iLocal_340 != joaat("weapon_unarmed") && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), iLocal_340, true);
			}
			PED::SET_PED_USING_ACTION_MODE(AUDIO::_0x0626A247D2405330(), 1, 4294967295, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			if (CAM::DOES_CAM_EXIST(iLocal_337))
			{
				CAM::DESTROY_CAM(iLocal_337, 0);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_338))
			{
				CAM::DESTROY_CAM(iLocal_338, 0);
			}
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
			Global_26862F.f_15FE.f_2 = 1;
			Global_26862F.f_15FE.f_5 = 1;
			if (func_187(1))
			{
				func_178(4);
			}
			iLocal_336 = 7;
			break;
		
		case 6:
			CAM::SET_CAM_ACTIVE(iLocal_338, 0);
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(AUDIO::_0x0626A247D2405330());
			}
			iLocal_336 = 5;
			break;
	}
}

void func_260(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0xB8DF
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == 4294967295)
		{
			func_261(iParam0);
		}
		return;
	}
	if (!*iParam0 == 4294967295)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_8FDB[iVar0 /*32*/])
		{
			Global_8FDB[iVar0 /*32*/] = 1;
			Global_8FDB[iVar0 /*32*/].f_1 = Global_90A4;
			Global_90A4++;
			Global_8FDB[iVar0 /*32*/].f_4 = 0;
			Global_8FDB[iVar0 /*32*/].f_1D = 0;
			Global_8FDB[iVar0 /*32*/].f_5 = 0;
			Global_8FDB[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_8FDB[iVar0 /*32*/].f_8), sParam2, 16);
			Global_8FDB[iVar0 /*32*/].f_6 = iParam3;
			Global_8FDB[iVar0 /*32*/].f_1F = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_8FDB[iVar0 /*32*/].f_7 = 0;
			Global_8FDB[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_8FDB[iVar0 /*32*/].f_C = 1;
				StringCopy(&(Global_8FDB[iVar0 /*32*/].f_D), sParam4, 64);
				Global_8FDB[iVar0 /*32*/].f_1E = iParam6;
			}
			else
			{
				Global_8FDB[iVar0 /*32*/].f_C = 0;
				Global_8FDB[iVar0 /*32*/].f_1E = 0;
			}
			*iParam0 = Global_8FDB[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_261(var uParam0)//Position - 0xBA0A
{
	int iVar0;
	
	if (*uParam0 == 4294967295)
	{
		return;
	}
	iVar0 = func_262(*uParam0);
	if (iVar0 == 4294967295)
	{
		*uParam0 = 4294967295;
		return;
	}
	if (iVar0 > 4294967295 && iVar0 < 6)
	{
		if (Global_8FDB[iVar0 /*32*/])
		{
			Global_8FDB[iVar0 /*32*/].f_7 = 1;
			*uParam0 = 4294967295;
			return;
		}
	}
	*uParam0 = 4294967295;
}

int func_262(int iParam0)//Position - 0xBA61
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_8FDB[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_263(int iParam0)//Position - 0xBA9C
{
	if (iParam0 == 1)
	{
		if (Global_38B1.f_1 > 3)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 14))
			{
				if (Global_38B0 == 1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_38B0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_38B1.f_1 > 3)
	{
		if (Global_38B0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_264()//Position - 0xBB20
{
	return MISC::GET_GAME_TIMER() <= Global_43D7.f_16F1 + 100;
}

int func_265(vector3 vParam0)//Position - 0xBB35
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_266(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, var uParam5, int iParam6, bool bParam7, bool bParam8)//Position - 0xBB5F
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	char* sVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	
	if (((uParam5->f_4 >= 1000 || (uParam5->f_4 + uParam0->f_33) >= 1000) || func_389(&(uParam5->f_5))) || (func_146(&(Global_26862F.f_A)) && !func_388(Global_26862F.f_A, 300000, 0)))
	{
		if (func_146(&(Global_26862F.f_A)))
		{
			if ((MISC::GET_GAME_TIMER() % 2500) < 50)
			{
			}
		}
		if (!uParam0->f_22)
		{
			uParam0->f_22 = 1;
			if (!func_146(&(Global_26862F.f_A)))
			{
				func_18(&(Global_26862F.f_A), 0, 0);
			}
		}
	}
	else
	{
		if (func_146(&(Global_26862F.f_A)))
		{
			func_13(&(Global_26862F.f_A));
		}
		if (uParam0->f_22)
		{
			uParam0->f_22 = 0;
		}
	}
	if ((MISC::GET_GAME_TIMER() % 5000) < 50)
	{
	}
	if ((((((uParam5->f_3 < 2 && func_44(CAM::_0xDC9DA9E8789F5246(), 1, 1)) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_34, 26)) && !func_387(3212836864)) && PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) < 1) && !bParam7) && !func_392(*uParam5))
	{
		iVar4 = 0;
		if ((HUD::IS_PAUSE_MENU_ACTIVE() && uParam0->f_36 != 0) && !NETWORK::_0x2EAC52B4019E2782())
		{
			if (!bParam8)
			{
				uParam0->f_36 = 0;
				func_386(uParam0, &(iParam6->f_3));
			}
		}
		switch (uParam0->f_36)
		{
			case 0:
				if ((((!HUD::IS_PAUSE_MENU_ACTIVE() && !PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1)) && !BRAIN::IS_PED_RUNNING(AUDIO::_0x0626A247D2405330())) && (!func_142(CAM::_0xDC9DA9E8789F5246()) || func_93(CAM::_0xDC9DA9E8789F5246()) == 154)) && !func_385(CAM::_0xDC9DA9E8789F5246(), 21))
				{
					if (func_384(*uParam0, &uParam1, vParam4.z, &(uParam0->f_10[0 /*3*/]), &(uParam0->f_10[1 /*3*/]), &(uParam0->f_17), &(uParam0->f_1A)))
					{
						vVar2 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
						vVar3 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_PED(*uParam5), 1) };
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(vVar2, uParam0->f_17, 1) < 5f && MISC::ABSF((vVar2.z - vVar3.z)) < 0.25f) || func_431(1))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), uParam0->f_10[0 /*3*/], uParam0->f_10[1 /*3*/], uParam0->f_1A, 0, 1, 0) || func_431(1))
							{
								if (PED::_0xFCF37A457CB96DC0(AUDIO::_0x0626A247D2405330(), uParam0->f_17, 135f) || func_431(1))
								{
									if (uParam0->f_22)
									{
										if (func_431(1))
										{
											func_406();
										}
										if (((!func_150("SHR_HOLDUP_1") && !func_150("SHR_MENU")) && !func_383()) && func_382())
										{
											func_152("SHR_SOLD_OUT", 4294967295);
											uParam0->f_36 = 10;
										}
									}
									else
									{
										if (func_431(1))
										{
										}
										uParam0->f_E = 4294967295;
										func_260(&(uParam0->f_E), 4, "SHR_MENU", 0, 0, 0, 0);
										uParam0->f_36 = 2;
									}
								}
								else if ((MISC::GET_GAME_TIMER() % 8000) < 50)
								{
								}
							}
							else
							{
								if ((MISC::GET_GAME_TIMER() % 8000) < 50)
								{
								}
								GRAPHICS::DRAW_DEBUG_LINE(vVar2, uParam0->f_10[0 /*3*/], 0, 0, 255, 255);
								GRAPHICS::DRAW_DEBUG_LINE(vVar2, uParam0->f_10[1 /*3*/], 0, 0, 255, 255);
							}
						}
						else
						{
							if ((MISC::GET_GAME_TIMER() % 8000) < 50)
							{
							}
							GRAPHICS::DRAW_DEBUG_LINE(vVar2, uParam0->f_17, 0, 0, 255, 255);
						}
					}
				}
				else
				{
					if (func_150("SHR_MENU"))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
					}
					if (func_38(CAM::_0xDC9DA9E8789F5246()))
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_35, 4))
						{
							func_152("SHR_FM_CRIT", 4294967295);
							unk_0x652B3075D0E58C13(3, 21, 200, 0, 0);
							MISC::SET_BIT(&(uParam0->f_35), 4);
						}
					}
					if ((MISC::GET_GAME_TIMER() % 8000) < 50)
					{
					}
				}
				break;
			
			case 2:
				vVar2 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
				vVar3 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_PED(*uParam5), 1) };
				if ((!PED::_0xFCF37A457CB96DC0(AUDIO::_0x0626A247D2405330(), uParam0->f_17, 135f) || MISC::ABSF((vVar2.z - vVar3.z)) >= 0.25f) && !func_431(1))
				{
					if (func_150("SHR_MENU"))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
					}
					func_261(&(uParam0->f_E));
					uParam0->f_36 = 0;
				}
				if (HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_150("SHR_MENU"))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
					}
					func_261(&(uParam0->f_E));
					uParam0->f_36 = 0;
				}
				if (func_172(0) || func_171())
				{
					if (func_150("SHR_MENU"))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
					}
					func_261(&(uParam0->f_E));
					func_166(1, *uParam0);
					GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_34), 26);
					uParam0->f_36 = 0;
				}
				if (!BRAIN::IS_PED_RUNNING(AUDIO::_0x0626A247D2405330()))
				{
					if (func_381(uParam0->f_E, 1) || func_431(1))
					{
						if (func_431(1))
						{
							func_406();
						}
						if (func_150("SHR_MENU"))
						{
							GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
						}
						func_379(&(uParam0->f_2C));
						func_261(&(uParam0->f_E));
						func_373(0, 0);
						MISC::SET_BIT(&(uParam0->f_35), 7);
						func_423(CAM::_0xDC9DA9E8789F5246(), 0, 66048);
						HUD::_0xA8FDB297A8D25FBA();
						if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && !func_392(*uParam5))
						{
							BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_PED(*uParam5), 0);
							GRAPHICS::_0x35FB78DC42B7BD21(&(iParam6->f_1), 1);
						}
						func_372();
						uParam0->f_36 = 3;
					}
				}
				break;
			
			case 3:
				if (!bParam8)
				{
					if (!CAM::DOES_CAM_EXIST(uParam0->f_1))
					{
						uParam0->f_1 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
						func_371(*uParam0, &(uParam0->f_2), &(uParam0->f_5), &fVar6);
						CAM::SET_CAM_COORD(uParam0->f_1, uParam0->f_2);
						CAM::SET_CAM_ROT(uParam0->f_1, uParam0->f_5, 2);
						CAM::SET_CAM_FOV(uParam0->f_1, fVar6);
						CAM::SHAKE_CAM(uParam0->f_1, "HAND_SHAKE", 0.1f);
						CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					}
					uParam0->f_25 = func_394(*uParam0);
				}
				if (PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
				{
					PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
				}
				uParam0->f_D = 6;
				func_370(0, 0);
				func_369(1, 1, 0, 0, 0);
				func_368(1, 2, 1, 1, 1);
				func_367("SNK_ITEM");
				if (!bParam8)
				{
					func_365(1, uParam0->f_25, uParam0->f_25);
				}
				iVar7 = 0;
				while (iVar7 < uParam0->f_D)
				{
					func_360(iVar7, func_364(iVar7), 0, 1, 0, 0);
					if (uParam5->f_5[iVar7] >= 10 || ((func_146(&(Global_26862F.f_C[iVar7 /*2*/])) && !func_388(Global_26862F.f_C[iVar7 /*2*/], 150000, 0)) && *uParam0 == Global_26862F.f_1B))
					{
						func_360(iVar7, "", 1, 1, 0, 0);
						func_359(15, 0);
						if (func_146(&(Global_26862F.f_C[iVar7 /*2*/])) && !func_388(Global_26862F.f_C[iVar7 /*2*/], 150000, 0))
						{
							uParam5->f_5[iVar7] = 10;
						}
						if (!func_146(&(Global_26862F.f_C[iVar7 /*2*/])))
						{
							Global_26862F.f_1B = *uParam0;
							func_18(&(Global_26862F.f_C[iVar7 /*2*/]), 0, 0);
						}
					}
					else if (func_356(iVar7))
					{
						func_360(iVar7, "SNK_FULL", 0, 1, 0, 0);
					}
					else if (!bParam8)
					{
						func_360(iVar7, "ITEM_COST", 1, 1, 0, 0);
						func_352(func_355(uParam0, iVar7), 0);
					}
					else
					{
						func_360(iVar7, "SNK_FREE", 0, 1, 0, 0);
					}
					iVar7++;
				}
				func_351(0);
				func_350(uParam0->f_C, 1, 1);
				if (uParam0->f_23)
				{
					if (!bParam8)
					{
						func_349("SNK_BOUGHT", 0, 0);
					}
					else
					{
						func_349("SNK_STORED", 0, 0);
					}
				}
				else if (uParam5->f_5[uParam0->f_C] >= 10)
				{
					func_349("SNK_SOUT", 0, 0);
				}
				else
				{
					func_349(func_348(uParam0->f_C), 0, 0);
				}
				func_347(201, "ITEM_SELECT", 4294967295, 0);
				func_347(202, "ITEM_BACK", 4294967295, 0);
				if (!bParam8)
				{
					func_347(203, "SNK_LIFT", 4294967295, 0);
					func_314(1, *uParam0, 1, 0, 1, 3212836864, 0, 0, 4294967295);
				}
				uParam0->f_36 = 4;
				break;
			
			case 4:
				if (PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
				{
					PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
				}
				if (BRAIN::GET_SCRIPT_TASK_STATUS(AUDIO::_0x0626A247D2405330(), 3419293077) == 7)
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam6->f_1, 1))
					{
						if (!bParam8)
						{
							func_423(CAM::_0xDC9DA9E8789F5246(), 0, 98816);
						}
						else
						{
							func_423(CAM::_0xDC9DA9E8789F5246(), 0, 256);
						}
						MISC::SET_BIT(&(iParam6->f_1), 1);
					}
				}
				iVar4 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::_IS_INPUT_JUST_DISABLED(2))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 241, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 242, 1);
						func_310(0, 0, 0, 1);
						func_309(0, 4294967295, 1);
						if (func_308())
						{
							if (Global_411C36 != uParam0->f_C)
							{
								unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								uParam0->f_C = Global_411C36;
								func_350(uParam0->f_C, 1, 1);
								uParam0->f_1B = 0;
								uParam0->f_1D = 0;
								uParam0->f_1E = 0;
								uParam0->f_20 = 0;
								sVar5 = func_348(uParam0->f_C);
								if (HUD::DOES_TEXT_LABEL_EXIST(sVar5))
								{
									func_349(sVar5, 0, 0);
								}
							}
							else
							{
								iVar4 = 1;
							}
						}
					}
				}
				if (!bParam8)
				{
					func_314(1, *uParam0, 1, 0, 1, 3212836864, 0, 0, 4294967295);
				}
				func_298(uParam0, &(uParam5->f_5), bParam8);
				if ((uParam5->f_2 > 2 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam5->f_1, 0)) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam6->f_1, 0))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(iParam6->f_1), 0);
				}
				if ((PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar4 == 1) || uParam0->f_2F)
				{
					if (!uParam0->f_2F)
					{
						uParam0->f_1B = 1;
						uParam0->f_1D = 0;
						uParam0->f_1E = 0;
						uParam0->f_20 = 0;
						func_379(&(uParam0->f_2C));
					}
					if ((uParam0->f_1C && uParam0->f_1F) && uParam0->f_21)
					{
						if (func_218())
						{
							uParam0->f_2F = 1;
							uParam0->f_30 = 0;
							uParam0->f_31 = 4294967295;
							iVar0 = 0;
							if (!bParam8)
							{
								iVar0 = func_355(uParam0, uParam0->f_C);
							}
							func_286(uParam0, 2991135598, 537254313, iVar0);
							uParam0->f_36 = 5;
						}
						else
						{
							uParam0->f_23 = 1;
							unk_0x1190AB7024CBD8CB(4294967295, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							uParam5->f_5[uParam0->f_C]++;
							uParam0->f_36 = 6;
						}
					}
					else
					{
						uParam0->f_23 = 0;
						if (!uParam0->f_1C && !uParam0->f_24)
						{
							iVar0 = 0;
							if (!bParam8)
							{
								iVar0 = func_355(uParam0, uParam0->f_C);
							}
							func_285(MISC::GET_HASH_KEY(func_348(uParam0->f_C)), iVar0, 0);
							func_278(0, 31, 3);
							uParam0->f_36 = 11;
						}
						unk_0x1190AB7024CBD8CB(4294967295, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
					if (!uParam0->f_21)
					{
						uParam0->f_36 = 3;
					}
				}
				if (!bParam8)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 203) && !uParam0->f_2F)
					{
						uParam0->f_1B = 1;
						if (uParam5->f_5[uParam0->f_C] < 10)
						{
							uParam0->f_21 = 1;
						}
						else
						{
							uParam0->f_21 = 0;
						}
						func_379(&(uParam0->f_2C));
						if (!uParam0->f_21)
						{
							unk_0x1190AB7024CBD8CB(4294967295, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						}
						else if (!uParam0->f_1F)
						{
							unk_0x1190AB7024CBD8CB(4294967295, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						}
						else
						{
							BRAIN::TASK_PLAY_ANIM(AUDIO::_0x0626A247D2405330(), func_162(), func_277(), 8f, -8f, 4294967295, 1048576, 0, 0, 0, 0);
							uParam0->f_36 = 8;
							uParam0->f_F = MISC::GET_GAME_TIMER();
							unk_0x1190AB7024CBD8CB(4294967295, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							if (!bParam8)
							{
								func_386(uParam0, &(iParam6->f_3));
							}
						}
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238))
				{
					if (func_431(1))
					{
						func_406();
					}
					uParam0->f_36 = 9;
					uParam0->f_F = MISC::GET_GAME_TIMER();
					if (!bParam8)
					{
						unk_0x1190AB7024CBD8CB(4294967295, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						func_386(uParam0, &(iParam6->f_3));
					}
					else
					{
						unk_0x1190AB7024CBD8CB(4294967295, "BACK", "HUD_FREEMODE_SOUNDSET", 1);
						Global_25826D = 1;
					}
				}
				if (uParam0->f_22)
				{
					uParam0->f_36 = 10;
					uParam0->f_F = MISC::GET_GAME_TIMER();
					if (!bParam8)
					{
						func_386(uParam0, &(iParam6->f_3));
					}
					func_152("SHR_SOLD_OUT", 4294967295);
				}
				iVar8 = 0;
				while (iVar8 < uParam0->f_D)
				{
					if (func_146(&(Global_26862F.f_C[iVar8 /*2*/])) && func_388(Global_26862F.f_C[iVar8 /*2*/], 150000, 0))
					{
						func_13(&(Global_26862F.f_C[iVar8 /*2*/]));
						uParam5->f_5[iVar8] = 0;
						uParam0->f_36 = 3;
					}
					iVar8++;
				}
				break;
			
			case 5:
				iVar0 = 0;
				if (!bParam8)
				{
					func_314(1, *uParam0, 1, 0, 1, 3212836864, 0, 0, 4294967295);
					iVar0 = func_355(uParam0, uParam0->f_C);
				}
				if (func_286(uParam0, 2991135598, 537254313, iVar0))
				{
				}
				else
				{
					switch (uParam0->f_31)
					{
						case 0:
							uParam0->f_23 = 0;
							if (!uParam0->f_1C && !uParam0->f_24)
							{
								if (!bParam8)
								{
									iVar0 = func_355(uParam0, uParam0->f_C);
								}
								func_285(MISC::GET_HASH_KEY(func_348(uParam0->f_C)), iVar0, 0);
								func_278(0, 31, 3);
								func_276();
								func_275();
								uParam0->f_36 = 11;
							}
							else
							{
								if (func_431(1))
								{
									func_406();
								}
								uParam0->f_36 = 9;
								uParam0->f_F = MISC::GET_GAME_TIMER();
								unk_0x1190AB7024CBD8CB(4294967295, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
								if (!bParam8)
								{
									func_386(uParam0, &(iParam6->f_3));
								}
							}
							break;
						
						case 2:
							uParam0->f_23 = 1;
							unk_0x1190AB7024CBD8CB(4294967295, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							uParam5->f_5[uParam0->f_C]++;
							uParam0->f_36 = 6;
							break;
						
						default:
							break;
						}
				}
				break;
			
			case 6:
				if (!bParam8)
				{
					func_314(1, *uParam0, 1, 0, 1, 3212836864, 0, 0, 4294967295);
				}
				if (func_218())
				{
					unk_0x7D3EC9370CE8AE07(func_273(func_274()));
				}
				if (bParam8)
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_73, 6))
					{
						unk_0xBC861966BE6E16EA(1, uParam0->f_C, 0, 1);
						MISC::SET_BIT(&(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_73), 6);
					}
					iVar1 = 0;
					switch (uParam0->f_C)
					{
						case 3:
							func_111(1275, 1, 4294967295);
							func_110(16, 1, 4294967295, 1);
							break;
						
						case 1:
							func_111(1276, 1, 4294967295);
							func_110(15, 1, 4294967295, 1);
							break;
						
						case 2:
							func_110(14, 1, 4294967295, 1);
							func_111(1277, 1, 4294967295);
							break;
						
						case 4:
							uParam0->f_37 = 20;
							if (func_130(1097, 4294967295, 0) + 20 > 20)
							{
								uParam0->f_37 = (20 - func_130(1097, 4294967295, 0));
							}
							func_111(1097, uParam0->f_37, 4294967295);
							break;
						
						case 0:
							func_111(62, 1, 4294967295);
							break;
						
						case 5:
							func_111(63, 1, 4294967295);
							break;
					}
				}
				else
				{
					switch (uParam0->f_C)
					{
						case 3:
							if (func_272(CAM::_0xDC9DA9E8789F5246(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_355(uParam0, uParam0->f_C);
							}
							func_111(1275, 1, 4294967295);
							func_110(16, 1, 4294967295, 1);
							NETWORKCASH::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM1"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 1:
							if (func_272(CAM::_0xDC9DA9E8789F5246(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_355(uParam0, uParam0->f_C);
							}
							func_111(1276, 1, 4294967295);
							func_110(15, 1, 4294967295, 1);
							NETWORKCASH::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM2"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 2:
							if (func_272(CAM::_0xDC9DA9E8789F5246(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_355(uParam0, uParam0->f_C);
							}
							func_110(14, 1, 4294967295, 1);
							func_111(1277, 1, 4294967295);
							NETWORKCASH::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM3"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 4:
							if (func_272(CAM::_0xDC9DA9E8789F5246(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_355(uParam0, uParam0->f_C);
							}
							uParam0->f_37 = 20;
							if (func_130(1097, 4294967295, 0) + 20 > 20)
							{
								uParam0->f_37 = (20 - func_130(1097, 4294967295, 0));
							}
							func_111(1097, uParam0->f_37, 4294967295);
							NETWORKCASH::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM4"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 0:
							if (func_272(CAM::_0xDC9DA9E8789F5246(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_355(uParam0, uParam0->f_C);
							}
							func_111(62, 1, 4294967295);
							NETWORKCASH::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM5"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 5:
							if (func_272(CAM::_0xDC9DA9E8789F5246(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_355(uParam0, uParam0->f_C);
							}
							func_111(63, 1, 4294967295);
							NETWORKCASH::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM6"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						}
				}
				if (func_218())
				{
					func_210(func_274());
				}
				func_271(-iVar1, 0);
				uParam0->f_33 = (uParam0->f_33 + iVar1);
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam6, 30))
				{
					MISC::SET_BIT(iParam6, 30);
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam6->f_1, 0))
				{
					MISC::SET_BIT(&(iParam6->f_1), 0);
					iParam6->f_2 = uParam0->f_C;
				}
				if (uParam0->f_22 || uParam0->f_33 >= 1000)
				{
					uParam0->f_36 = 10;
					if (!bParam8)
					{
						func_386(uParam0, &(iParam6->f_3));
					}
					func_152("SHR_SOLD_OUT", 4294967295);
				}
				else if (uParam5->f_5[uParam0->f_C] >= 10 || func_356(uParam0->f_C))
				{
					uParam0->f_36 = 3;
				}
				else
				{
					uParam0->f_36 = 4;
				}
				break;
			
			case 8:
				func_197(1);
				switch (uParam0->f_C)
				{
					case 3:
						func_269(0, 1f, 3);
						func_111(1275, 1, 4294967295);
						func_110(13, 1, 4294967295, 1);
						break;
					
					case 1:
						func_269(1, 1f, 3);
						func_111(1276, 1, 4294967295);
						func_110(13, 1, 4294967295, 1);
						break;
					
					case 2:
						func_269(2, 1f, 3);
						func_111(1277, 1, 4294967295);
						func_110(13, 1, 4294967295, 1);
						break;
					
					case 4:
						uParam0->f_37 = 20;
						if (func_130(1097, 4294967295, 0) + 20 > 20)
						{
							uParam0->f_37 = (20 - func_130(1097, 4294967295, 0));
						}
						func_269(5, SYSTEM::TO_FLOAT(uParam0->f_37), 3);
						func_111(1097, uParam0->f_37, 4294967295);
						break;
					
					case 0:
						func_269(3, 1f, 3);
						func_111(62, 1, 4294967295);
						break;
					
					case 5:
						func_269(4, 1f, 3);
						func_111(63, 1, 4294967295);
						break;
				}
				if (!bParam8)
				{
					func_423(CAM::_0xDC9DA9E8789F5246(), 1, 0);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) < 1 && !func_267(CAM::_0xDC9DA9E8789F5246()))
				{
					PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(1));
					MISC::SET_BIT(iParam6, 25);
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam6, 1))
					{
						MISC::SET_BIT(iParam6, 2);
					}
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam6->f_1, 2))
				{
					MISC::SET_BIT(&(iParam6->f_1), 2);
				}
				uParam0->f_36 = 12;
				break;
			
			case 11:
				if (!Global_16C64.f_571 && !NETWORK::_0x2EAC52B4019E2782())
				{
					uParam0->f_36 = 4;
				}
				break;
			
			case 10:
				if (!bParam8)
				{
					func_423(CAM::_0xDC9DA9E8789F5246(), 1, 0);
				}
				if ((MISC::GET_GAME_TIMER() - uParam0->f_F) > 1000)
				{
					uParam0->f_36 = 12;
				}
				else
				{
					PAD::SET_INPUT_EXCLUSIVE(2, 203);
					PAD::SET_INPUT_EXCLUSIVE(2, 202);
					PAD::SET_INPUT_EXCLUSIVE(2, 188);
					PAD::SET_INPUT_EXCLUSIVE(2, 187);
					PAD::SET_INPUT_EXCLUSIVE(2, 189);
					PAD::SET_INPUT_EXCLUSIVE(2, 190);
				}
				break;
			
			case 9:
				if ((MISC::GET_GAME_TIMER() - uParam0->f_F) > 1000)
				{
					uParam0->f_36 = 0;
				}
				else
				{
					PAD::SET_INPUT_EXCLUSIVE(2, 203);
					PAD::SET_INPUT_EXCLUSIVE(2, 202);
					PAD::SET_INPUT_EXCLUSIVE(2, 188);
					PAD::SET_INPUT_EXCLUSIVE(2, 187);
					PAD::SET_INPUT_EXCLUSIVE(2, 189);
					PAD::SET_INPUT_EXCLUSIVE(2, 190);
				}
				break;
			
			case 12:
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam5->f_1, 3))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam6->f_1, 2))
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&(iParam6->f_1), 2);
					}
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam6->f_1, 3))
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&(iParam6->f_1), 3);
					}
				}
				break;
		}
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() % 8000) < 50)
		{
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam5->f_1, 3))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam6->f_1, 2))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(iParam6->f_1), 2);
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam6->f_1, 3))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(iParam6->f_1), 3);
			}
		}
		if ((uParam0->f_36 != 12 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_34, 26)) && !NETWORK::_0x2EAC52B4019E2782())
		{
			if ((((uParam0->f_36 == 4 || uParam0->f_36 == 3) || uParam0->f_36 == 6) || uParam0->f_36 == 11) || uParam0->f_36 == 5)
			{
				func_386(uParam0, &(iParam6->f_3));
			}
			uParam0->f_36 = 12;
		}
		if (uParam0->f_E != 4294967295)
		{
			func_261(&(uParam0->f_E));
		}
	}
}

int func_267(int iParam0)//Position - 0xD01E
{
	if ((func_38(iParam0) || func_268(iParam0)) && func_219(func_220(iParam0)) == 0f)
	{
		return 1;
	}
	return 0;
}

int func_268(int iParam0)//Position - 0xD051
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iVar0 /*560*/].f_1, 7);
	}
	return 0;
}

void func_269(int iParam0, float fParam1, int iParam2)//Position - 0xD077
{
	struct<8> Var0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	
	if (fParam1 > 0f)
	{
		if (func_270(iParam0, &Var0))
		{
			vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0) };
			func_197(1);
			iVar3 = 4294967295;
			iVar2 = 0;
			while (iVar2 < 20)
			{
				if (Global_252F9E.f_505[iVar2 /*30*/].f_6 == 0 || Global_252F9E.f_505[iVar2 /*30*/].f_6 == 7)
				{
					iVar3 = iVar2;
					iVar2 = 20;
				}
				iVar2++;
			}
			if (iVar3 != 4294967295)
			{
				Global_252F9E.f_505[iVar3 /*30*/] = { vVar1 };
				Global_252F9E.f_505[iVar3 /*30*/].f_6 = 1;
				Global_252F9E.f_505[iVar3 /*30*/].f_4 = func_196(Global_252F9E.f_505[iVar3 /*30*/], &Global_14063D, &Global_14063E);
				Global_252F9E.f_505[iVar3 /*30*/].f_5 = fParam1;
				Global_252F9E.f_505[iVar3 /*30*/].f_7 = HUD::_0x13C4B962653A5280();
				Global_252F9E.f_505[iVar3 /*30*/].f_8 = iParam2;
				Global_252F9E.f_505[iVar3 /*30*/].f_E = { Var0 };
				Global_252F9E.f_505[iVar3 /*30*/].f_9 = func_195();
				Global_252F9E.f_505[iVar3 /*30*/].f_A = func_194();
			}
		}
	}
}

int func_270(int iParam0, char* sParam1)//Position - 0xD199
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "PU_REWARD_S1", 32);
			return 1;
		
		case 1:
			StringCopy(sParam1, "PU_REWARD_S2", 32);
			return 1;
		
		case 2:
			StringCopy(sParam1, "PU_REWARD_S3", 32);
			return 1;
		
		case 3:
			StringCopy(sParam1, "PU_REWARD_D1", 32);
			return 1;
		
		case 4:
			StringCopy(sParam1, "PU_REWARD_D2", 32);
			return 1;
		
		case 5:
			StringCopy(sParam1, "PU_REWARD_11", 32);
			return 1;
		
		case 6:
			StringCopy(sParam1, "PU_REWARD_PC", 32);
			return 1;
		
		default:
	}
	return 0;
}

void func_271(int iParam0, int iParam1)//Position - 0xD227
{
	func_205(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_206(iParam0, 0);
	}
}

int func_272(int iParam0, bool bParam1, bool bParam2)//Position - 0xD245
{
	if (iParam0 == func_184())
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
		{
			return 1;
		}
	}
	return 0;
}

int func_273(int iParam0)//Position - 0xD2AF
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_410C0F[iParam0 /*80*/].f_3D;
	}
	return 4294967295;
}

int func_274()//Position - 0xD2D5
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_273(iVar0) != 2147483647)
		{
			if (func_213(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

void func_275()//Position - 0xD30F
{
	Global_255C02.f_2A1.f_20 = 1;
}

void func_276()//Position - 0xD321
{
	Global_255C02.f_2A1.f_1C = 1;
	Global_255C02.f_2A1.f_20 = 0;
	Global_255C02.f_2A1.f_1F = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	func_13(&(Global_255C02.f_2A1.f_1D));
}

char* func_277()//Position - 0xD35B
{
	if (func_12())
	{
		return "Shoplift_Mid";
	}
	return "Shoplift_Low";
}

void func_278(int iParam0, int iParam1, int iParam2)//Position - 0xD375
{
	int iVar0;
	
	if (!NETWORK::_0x883D79C4071E18B3())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_282(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		return;
	}
	if (PAD::IS_CONTROL_PRESSED(2, 199) || unk_0xE11F00B4AC919F45(2, 199))
	{
		return;
	}
	if (HUD::GET_PAUSE_MENU_STATE() != 0)
	{
		return;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return;
	}
	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return;
	}
	if (func_281())
	{
		return;
	}
	if (!func_279())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || iParam0)
	{
		if (!Global_16C64.f_571 && !NETWORK::_0x2EAC52B4019E2782())
		{
			iVar0 = 18;
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, 4294967295, 0, 0, 1, 0);
			Global_25866C = iParam1;
			Global_16C64.f_571 = 1;
			Global_16C64.f_572 = iParam2;
		}
	}
}

int func_279()//Position - 0xD44F
{
	if (func_280())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_280()//Position - 0xD46F
{
	return Global_258443;
}

bool func_281()//Position - 0xD47B
{
	return Global_2586D5;
}

int func_282(int iParam0, bool bParam1)//Position - 0xD487
{
	if (bParam1)
	{
		if (func_283(iParam0))
		{
			return 1;
		}
	}
	if (Global_1841F3[iParam0 /*790*/] == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool func_283(int iParam0)//Position - 0xD4B3
{
	return func_284(iParam0);
}

bool func_284(int iParam0)//Position - 0xD4C1
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_D.f_1, 0);
}

void func_285(int iParam0, int iParam1, int iParam2)//Position - 0xD4DB
{
	Global_16C64.f_573 = iParam0;
	Global_16C64.f_574 = iParam1;
	Global_16C64.f_575 = iParam2;
}

int func_286(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD4FE
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	char* sVar4;
	
	if (uParam0->f_2F)
	{
		switch (uParam0->f_30)
		{
			case 0:
				iVar0 = 0;
				iVar1 = 0;
				iVar2 = iParam3;
				if (unk_0xB977B8EE1916CBE3() > 0)
				{
					if (unk_0xB977B8EE1916CBE3() >= iVar2)
					{
						iVar1 = iVar2;
					}
					else
					{
						iVar1 = (iVar2 - (iVar2 - unk_0xB977B8EE1916CBE3()));
					}
					iVar2 = (iVar2 - iVar1);
				}
				if (iVar2 > 0)
				{
					if (unk_0xCCADB536D2A7894D(4294967295) > 0)
					{
						if (unk_0xCCADB536D2A7894D(4294967295) >= iVar2)
						{
							iVar0 = iVar2;
						}
						else
						{
							iVar0 = (iVar2 - (iVar2 - unk_0xCCADB536D2A7894D(4294967295)));
						}
						iVar2 = (iVar2 - iVar0);
					}
				}
				cVar3 = func_364(uParam0->f_C);
				func_294(&sVar4, cVar3, func_295(uParam0));
				if (func_291(78225582, iParam1, MISC::GET_HASH_KEY(&sVar4), iParam2, 1, iParam3, 1, 8, 0, 3))
				{
					if (func_289())
					{
						AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(1);
						HUD::_SET_PLAYER_CASH_CHANGE(-iVar0, -iVar1);
						uParam0->f_30 = 1;
					}
					else
					{
						uParam0->f_30 = 3;
					}
				}
				else
				{
					uParam0->f_30 = 3;
				}
				break;
			
			case 1:
				if (func_288(func_274()))
				{
					if (func_287(func_274()) == 2)
					{
						uParam0->f_30 = 2;
					}
					else
					{
						uParam0->f_30 = 3;
					}
				}
				break;
			
			case 2:
				uParam0->f_2F = 0;
				uParam0->f_30 = 0;
				AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(0);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				uParam0->f_31 = 2;
				return 0;
				break;
			
			case 3:
				func_210(func_274());
				uParam0->f_2F = 0;
				uParam0->f_30 = 0;
				AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(0);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				uParam0->f_31 = 0;
				return 0;
				break;
		}
		return 1;
	}
	uParam0->f_30 = 0;
	uParam0->f_31 = 4294967295;
	return 0;
}

int func_287(int iParam0)//Position - 0xD67B
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_410C0F[iParam0 /*80*/].f_3D.f_2;
	}
	return 0;
}

int func_288(int iParam0)//Position - 0xD6A3
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_410C0F[iParam0 /*80*/].f_3D.f_2 != 1;
	}
	return 0;
}

int func_289()//Position - 0xD6CD
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_218())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_274();
	if (iVar2 == 4294967295)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_77()) || unk_0x64BE694244417BDA())
		{
			if (func_290(Global_410C0F[iVar2 /*80*/].f_3D.f_6, Global_410C0F[iVar2 /*80*/].f_3D.f_4, Global_410C0F[iVar2 /*80*/].f_3D.f_1) == 1)
			{
				Global_410E36 = 1;
			}
			return 0;
		}
		if (Global_2586D5)
		{
			if (Global_410C0F[iVar2 /*80*/].f_3D.f_6 == 1067618600 || Global_410C0F[iVar2 /*80*/].f_3D.f_6 == 2991135598)
			{
				Global_410E37 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_273(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x93EA4BE98F3F425A(iVar3))
		{
			Global_410C0F[iVar2 /*80*/].f_3D.f_D = 1;
			Global_410C0F[iVar2 /*80*/].f_3D.f_C = 0;
			Global_410C0F[iVar2 /*80*/].f_3D.f_E = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_410C0F[iVar2 /*80*/].f_3D.f_8 = 1;
				Global_410C0F[iVar2 /*80*/].f_3D.f_C = 1;
			}
			Global_410C0F[iVar2 /*80*/].f_3D.f_12 = 0;
			if (bVar0 || iVar1)
			{
				func_216(Global_410C0F[iVar2 /*80*/], iVar2);
			}
			Global_410E28 = 1;
			return 1;
		}
	}
	return 0;
}

int func_290(int iParam0, int iParam1, int iParam2)//Position - 0xD82D
{
	if (iParam0 == 3861527201 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case 4263810419:
			case 3967048882:
			case 550898518:
			case 835976347:
			case 1347433368:
			case 3194003497:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case 3267748665:
			case 2896648878:
			case 1652884147:
			case 4237099040:
			case 3078478004:
			case 4248344981:
			case 3942610365:
			case 3304681061:
			case 563463121:
			case 1734805203:
			case 941287179:
			case 3108887451:
			case 2309817038:
			case 3167945912:
			case 4185766010:
			case 312105838:
			case 3633936878:
			case 1301046174:
			case 2708796979:
			case 393059668:
			case 23796958:
			case 3217811126:
			case 1780666425:
			case 2251272238:
			case 2372412947:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case 4140234963:
			case 2932306805:
			case 645708827:
			case 767907967:
			case 2324815990:
			case 718859568:
			case 2339402525:
			case 892388724:
			case 2868046458:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case 4235299214:
			case 1736933716:
			case 2826443171:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case 3360501964:
			case 3100714174:
			case 4082360211:
			case 3479420741:
			case 1048226110:
			case 569170531:
			case 3438960429:
			case 848090538:
			case 4247420391:
			case 4001907056:
			case 463142405:
			case 1550217370:
			case 3630369731:
			case 599804707:
			case 1052472386:
			case 2164767625:
			case 3067312758:
			case 1864522104:
			case 215608230:
			case 3418954532:
			case 3572072971:
			case 1407278493:
			case 2715572802:
			case 4267523385:
			case 1179783540:
			case 923419301:
			case 3986141121:
			case 603298940:
			case 4282347442:
			case 3983854621:
			case 870439158:
			case 3320678556:
			case 4290828642:
			case 3114013174:
			case 2376916280:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case 3122066507:
			case 2279567963:
			case 2720171655:
			case 3333932415:
			case 1135468152:
			case 1265272476:
			case 3660240660:
			case 696556762:
			case 443347049:
			case 403506509:
			case 3411090882:
			case 3230816581:
			case 2907714241:
			case 3578004144:
			case 1138089938:
			case 3733955243:
			case 1240683675:
			case 1241904665:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case 3395164992:
			case 3631022961:
			case 1208553146:
			case 3681746286:
			case 3623904420:
			case 291576838:
			case 3018288428:
			case 711665950:
			case 3887766060:
			case 3540943093:
			case 2409522409:
			case 1931729587:
			case 1064954035:
			case 4114826223:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case 3418119454:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == 3160114106 || iParam0 == 925407197) || iParam0 == 2705588414)
	{
		return 0;
	}
	return 1;
}

int func_291(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0xDC08
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_218())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_77()) || unk_0x64BE694244417BDA())
		{
			Global_410E36 = 1;
			return 0;
		}
		if (Global_2586D5)
		{
			if (iParam1 == 1067618600 || iParam1 == 2991135598)
			{
				Global_410E37 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_274();
	if (iVar1 == 4294967295)
	{
		if (!func_293(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != 4294967295)
	{
		if (iParam8 != 0 && func_292(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		Global_410C0F[iVar1 /*80*/].f_3D.f_1 = Var2.f_2;
		Global_410C0F[iVar1 /*80*/].f_3D.f_F = Var2;
		Global_410C0F[iVar1 /*80*/].f_3D.f_10 = Var2.f_1;
		if (bVar0 || unk_0x37434C9C32C0C1D5(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_292(int iParam0)//Position - 0xDD2A
{
	switch (iParam0)
	{
		case 4073160221:
		case 3070042943:
		case 2172999952:
		case 1394405165:
		case 2242153190:
		case 1701289268:
		case 2498431461:
		case 2366164904:
		case 581564040:
		case 23048035:
		case 2117376854:
		case 2917086169:
		case 3790292094:
		case 1906937290:
		case 2678351269:
		case 2495443095:
		case 269396419:
		case 69656641:
		case 4191087286:
		case 2800053648:
			return 1;
			break;
	}
	return 0;
}

int func_293(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0xDDB9
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_218())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_77()) || unk_0x64BE694244417BDA())
		{
			Global_410E36 = 1;
			return 0;
		}
		if (Global_2586D5)
		{
			if (iParam2 == 1067618600 || iParam2 == 2991135598)
			{
				Global_410E37 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_410C0F[iVar1 /*80*/].f_3D.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_410C0F[iVar1 /*80*/].f_3D.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0xE85465535CBA17D7())
		{
			unk_0x220FA7ABD5D740BF();
		}
	}
	if (bVar0 || unk_0x4A5CD6185EA0E17E(&iVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_215(iVar3, iParam1, 2209654107, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

void func_294(char* sParam0, char* sParam1, int iParam2)//Position - 0xDEB5
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

int func_295(var uParam0)//Position - 0xDED9
{
	if (func_272(CAM::_0xDC9DA9E8789F5246(), 1, 0) || func_296(CAM::_0xDC9DA9E8789F5246()))
	{
		return 3;
	}
	else if (uParam0->f_32 >= 10 && uParam0->f_32 <= 14)
	{
		return 0;
	}
	else if (uParam0->f_32 >= 15 && uParam0->f_32 <= 19)
	{
		return 1;
	}
	else
	{
		return 2;
	}
	return 4294967295;
}

int func_296(int iParam0)//Position - 0xDF42
{
	if (iParam0 != func_184())
	{
		if (func_44(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_297(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_297(int iParam0)//Position - 0xDF89
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
	}
	return 4294967295;
}

void func_298(var uParam0, var uParam1, bool bParam2)//Position - 0xE2E3
{
	char* sVar0;
	
	if (!uParam0->f_1D)
	{
	}
	if (func_307(uParam0))
	{
		uParam0->f_1B = 0;
		func_306(&(uParam0->f_2C));
		uParam0->f_C = (uParam0->f_C - 1);
		if (uParam0->f_C < 0)
		{
			uParam0->f_C = (uParam0->f_D - 1);
		}
		unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_350(uParam0->f_C, 1, 1);
		sVar0 = func_348(uParam0->f_C);
		uParam0->f_1D = 0;
		uParam0->f_1E = 0;
		uParam0->f_20 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_349(sVar0, 0, 0);
		}
	}
	if (func_303(uParam0))
	{
		uParam0->f_1B = 0;
		func_306(&(uParam0->f_2C));
		uParam0->f_C++;
		if (uParam0->f_C > (uParam0->f_D - 1))
		{
			uParam0->f_C = 0;
		}
		unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_350(uParam0->f_C, 1, 1);
		sVar0 = func_348(uParam0->f_C);
		uParam0->f_1D = 0;
		uParam0->f_1E = 0;
		uParam0->f_20 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_349(sVar0, 0, 0);
		}
	}
	if (!uParam0->f_1D)
	{
		if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(func_355(uParam0, uParam0->f_C), 0, 1, 0, 4294967295))
		{
			uParam0->f_1C = 1;
		}
		else
		{
			uParam0->f_1C = 0;
			uParam0->f_24 = 1;
		}
		uParam0->f_1D = 1;
	}
	if (!uParam0->f_1E)
	{
		uParam0->f_1F = 1;
		if (uParam0->f_C == 3)
		{
			uParam0->f_1F = func_130(1275, 4294967295, 0) < 30;
		}
		else if (uParam0->f_C == 1)
		{
			uParam0->f_1F = func_130(1276, 4294967295, 0) < 15;
		}
		else if (uParam0->f_C == 2)
		{
			uParam0->f_1F = func_130(1277, 4294967295, 0) < 5;
		}
		else if (uParam0->f_C == 4)
		{
			uParam0->f_1F = func_130(1097, 4294967295, 0) < 20;
		}
		else if (uParam0->f_C == 0)
		{
			uParam0->f_1F = func_130(62, 4294967295, 0) < 10;
		}
		else if (uParam0->f_C == 5)
		{
			uParam0->f_1F = func_130(63, 4294967295, 0) < 10;
		}
		uParam0->f_1E = 1;
	}
	if (!uParam0->f_20)
	{
		if ((*uParam1)[uParam0->f_C] < 10)
		{
			uParam0->f_21 = 1;
		}
		else
		{
			uParam0->f_21 = 0;
			func_349("SNK_SOUT", 0, 0);
		}
		uParam0->f_20 = 1;
	}
	if (uParam0->f_1B)
	{
		if (func_299(&(uParam0->f_2C)) < 3f)
		{
			if (uParam0->f_23)
			{
				if (!bParam2)
				{
					func_349("SNK_BOUGHT", 0, 0);
				}
				else
				{
					func_349("SNK_STORED", 0, 0);
				}
			}
			else if (!uParam0->f_1C)
			{
				func_349("SNK_AFFORD", 0, 0);
			}
			else if (!uParam0->f_21)
			{
				func_349("SNK_SOUT", 0, 0);
			}
			else if (!uParam0->f_1F)
			{
				if (uParam0->f_C == 3)
				{
					func_349("SNK_SNK1FU", 0, 0);
				}
				else if (uParam0->f_C == 1)
				{
					func_349("SNK_SNK2FU", 0, 0);
				}
				else if (uParam0->f_C == 2)
				{
					func_349("SNK_SNK3FU", 0, 0);
				}
				else if (uParam0->f_C == 4)
				{
					func_349("SNK_SMOKFU", 0, 0);
				}
				else if (uParam0->f_C == 0)
				{
					func_349("SNK_DRK1FU", 0, 0);
				}
				else if (uParam0->f_C == 5)
				{
					func_349("SNK_DRK2FU", 0, 0);
				}
				else
				{
					func_349("SNK_NEEDED", 0, 0);
				}
				MISC::SET_BIT(&(uParam0->f_35), 26);
			}
		}
		else
		{
			uParam0->f_1B = 0;
			uParam0->f_23 = 0;
			func_306(&(uParam0->f_2C));
			sVar0 = func_348(uParam0->f_C);
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				func_349(sVar0, 0, 0);
			}
		}
	}
}

float func_299(var uParam0)//Position - 0xE61D
{
	if (func_302(uParam0))
	{
		if (func_301(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_300(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_300(bool bParam0)//Position - 0xE659
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = HUD::_0x13C4B962653A5280();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_301(var uParam0)//Position - 0xE6B1
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 2);
}

bool func_302(var uParam0)//Position - 0xE6C1
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 1);
}

int func_303(var uParam0)//Position - 0xE6D1
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2, 187)) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
	{
		if (!func_302(&(uParam0->f_29)))
		{
			func_305(&(uParam0->f_29));
			return 1;
		}
		else if (func_304(&(uParam0->f_29)) > 0.25f)
		{
			func_379(&(uParam0->f_29));
			return 1;
		}
	}
	else if (func_302(&(uParam0->f_29)))
	{
		func_306(&(uParam0->f_29));
	}
	return 0;
}

float func_304(var uParam0)//Position - 0xE756
{
	if (func_302(uParam0))
	{
		if (func_301(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_300(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_305(int iParam0)//Position - 0xE795
{
	if (!func_302(iParam0))
	{
		func_379(iParam0);
	}
}

void func_306(var uParam0)//Position - 0xE7AD
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_307(var uParam0)//Position - 0xE7C3
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2, 188)) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
	{
		if (!func_302(&(uParam0->f_26)))
		{
			func_305(&(uParam0->f_26));
			return 1;
		}
		else if (func_304(&(uParam0->f_26)) > 0.25f)
		{
			func_379(&(uParam0->f_26));
			return 1;
		}
	}
	else if (func_302(&(uParam0->f_26)))
	{
		func_306(&(uParam0->f_26));
	}
	return 0;
}

int func_308()//Position - 0xE848
{
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (Global_411C36 > 4294967295)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_309(int iParam0, int iParam1, bool bParam2)//Position - 0xE86F
{
	if (!PAD::_IS_INPUT_DISABLED(2))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (bParam2)
	{
		HUD::_SHOW_CURSOR_THIS_FRAME();
	}
	if (Global_411C36 == 4294967290)
	{
		HUD::_SET_CURSOR_SPRITE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_411C36 = 4294967295;
			return 0;
		}
	}
	if (((Global_411C36 > 4294967295 || Global_411C36 == 4294967293) || Global_411C36 == 4294967294) || HUD::_0x3D9ACB1EB139E702())
	{
		HUD::_SET_CURSOR_SPRITE(1);
		return 0;
	}
	if (Global_411C36 == 4294967295 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 237))
		{
			HUD::_SET_CURSOR_SPRITE(4);
			Global_411C36 = 4294967290;
			return 1;
		}
		else
		{
			HUD::_SET_CURSOR_SPRITE(3);
			return 0;
		}
	}
	HUD::_SET_CURSOR_SPRITE(1);
	return 0;
}

void func_310(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xE94F
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = 4294967295;
	if (!PAD::_IS_INPUT_DISABLED(2))
	{
		Global_411C36 = 4294967295;
		return;
	}
	unk_0xA561536D61421F90(1);
	fVar0 = Global_43D4;
	fVar2 = (fVar0 + Global_43D6);
	fVar3 = Global_43D7.f_1660;
	fVar1 = (Global_43D7.f_1660 - (IntToFloat(Global_43D7.f_1662) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_43D7.f_1662 < 1)
	{
		fVar1 = (Global_43D7.f_1660 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_313();
	if (Global_411C36 == 4294967290)
	{
		return;
	}
	Global_411C36 = 4294967295;
	fVar7 = Global_411C30;
	fVar8 = Global_411C31;
	if (Global_43D7.f_1663 > Global_43D7.f_1662)
	{
		if (((Global_411C30 >= fVar0 && Global_411C30 <= fVar2) && Global_411C31 >= fVar3) && Global_411C31 < (fVar3 + fVar6))
		{
			Global_411C36 = 4294967294;
			if (bParam3)
			{
				func_312(0);
			}
			return;
		}
		if (((Global_411C30 >= fVar0 && Global_411C30 <= fVar2) && Global_411C31 >= (fVar3 + fVar6)) && Global_411C31 < (fVar3 + 0.034722f))
		{
			Global_411C36 = 4294967293;
			if (bParam3)
			{
				func_312(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_43D7.f_1663 == 4294967295)
		{
			Global_411C36 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_43D7.f_1662);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_311(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_43D6, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_411C36 = Global_43D7.f_1E20[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_411C36 = 4294967292;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_411C36 = 4294967291;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_411C36 = 4294967292;
		return;
	}
	Global_411C36 = 4294967295;
}

void func_311(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xEBFB
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_312(bool bParam0)//Position - 0xEC2A
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_43D4;
	fVar1 = Global_43D7.f_1660;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_411C36 == 4294967294)
	{
		func_311(fVar0, fVar1, Global_43D6, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_411C36 == 4294967293)
	{
		func_311(fVar0, (fVar1 + fVar2), Global_43D6, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_313()//Position - 0xECB3
{
	Global_411C32 = Global_411C30;
	Global_411C33 = Global_411C31;
	Global_411C30 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_411C31 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_411C34 = (Global_411C30 - Global_411C32);
	Global_411C35 = (Global_411C31 - Global_411C33);
}

void func_314(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0xECFB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	int iVar53;
	bool bVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar65[64];
	float fVar66;
	int iVar67;
	float fVar68;
	float fVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_168(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == 4294967295)
	{
	}
	if (!func_345(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_43D7)
	{
		if (func_343(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = fVar37;
			fVar57 = fVar36;
			fVar56 = (fVar56 + 0f);
		}
		else
		{
			Global_43D7 = 0;
		}
	}
	if (MISC::GET_HASH_KEY(&(Global_43D7.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar58 = Global_43D5;
	}
	else
	{
		fVar58 = (((Global_43D5 + fVar56) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_43D6;
	}
	fVar61 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar59, &iVar60);
		fVar62 = GRAPHICS::_GET_ASPECT_RATIO(0);
		if (func_342())
		{
			iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) * fVar62));
		}
		fVar63 = (SYSTEM::TO_FLOAT(iVar59) / SYSTEM::TO_FLOAT(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_342())
		{
			fVar61 = 1f;
		}
		iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) / fVar61));
		iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) / fVar61));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_43D7.f_165E)
		{
			if (MISC::GET_HASH_KEY(&(Global_43D7.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar49 = Global_43D5;
			}
			else
			{
				if (Global_43D7)
				{
					StringCopy(&cVar64, func_341(29), 64);
					StringCopy(&cVar65, func_339(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_43D7.f_1ACF[29 /*16*/])) == 2807284209)
					{
						func_311(Global_43D4, Global_43D5, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar64, &cVar65, (Global_43D4 + (fParam5 * 0.5f)), (Global_43D5 + ((fVar56 - 0f) * 0.5f)), fVar57, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar64, &cVar65, (Global_43D4 + (fParam5 * 0.5f)), (Global_43D5 + ((fVar56 - 0f) * 0.5f)), fParam5, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_43D7.f_1F7D)
				{
					iVar1 = Global_43D7.f_1F79;
					iVar2 = Global_43D7.f_1F7A;
					iVar3 = Global_43D7.f_1F7B;
					iVar4 = Global_43D7.f_1F7C;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_311(Global_43D4, (Global_43D5 + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_43D5 + fVar56) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_43D7.f_1)) != 0)
				{
					func_338();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_43D7.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_43D7.f_44)
					{
						if (Global_43D7.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_43D7.f_A[iVar15]);
							iVar15++;
						}
						else if (Global_43D7.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_43D7.f_E[iVar16], Global_43D7.f_12[iVar16]);
							iVar16++;
						}
						else if (Global_43D7.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_43D7.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_43D7.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_43D7.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_43D7.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_43D7.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_43D4 + 0.00390625f), ((Global_43D5 + fVar56) + 0.00416664f), 0);
				}
				if (Global_43D7.f_1661 > Global_43D7.f_1467)
				{
					if (Global_43D7.f_1664 != 0)
					{
						func_338();
						func_336((((Global_43D4 + fParam5) - 0.00390625f) - func_337("CM_ITEM_COUNT", Global_43D7.f_1664, Global_43D7.f_1663)), ((Global_43D5 + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_43D7.f_1664, Global_43D7.f_1663);
					}
				}
			}
			iVar6 = Global_43D7.f_1665;
			iVar9 = 0;
			fVar66 = fVar49;
			if (Global_43D7.f_1F87)
			{
				iVar1 = Global_43D7.f_1F83;
				iVar2 = Global_43D7.f_1F84;
				iVar3 = Global_43D7.f_1F85;
				iVar4 = Global_43D7.f_1F86;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_43D7.f_1467 && iVar6 <= Global_43D7.f_1460)
			{
				if (iVar6 >= 0)
				{
					if (Global_43D7.f_156B[iVar6])
					{
						if (Global_43D7.f_14EA[iVar6] && iVar6 != Global_43D7.f_1665)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar55 = 0.034722f;
						if (Global_43D7.f_166C[iVar6] != 0f)
						{
							fVar55 = Global_43D7.f_166C[iVar6];
						}
						fVar49 = (fVar49 + fVar55);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar55 = 0.034722f;
					fVar49 = (fVar49 + fVar55);
					iVar9++;
					if (Global_43D7.f_1460 <= 1)
					{
						Global_43D7.f_1460++;
					}
					iVar53 = 1;
				}
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_43D4 + (fParam5 * 0.5f)), ((fVar66 + ((fVar49 - fVar66) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar66), 0f, 255, 255, 255, 255, 0);
			if (Global_43D7.f_1661 > Global_43D7.f_1467)
			{
				if (Global_43D7.f_1F8C)
				{
					iVar1 = Global_43D7.f_1F88;
					iVar2 = Global_43D7.f_1F89;
					iVar3 = Global_43D7.f_1F8A;
					iVar4 = Global_43D7.f_1F8B;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_311(Global_43D4, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar61));
				vVar38.y = (vVar38.y * (0.5f / fVar61));
				if (Global_43D7.f_1F99)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_43D4 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar61), ((vVar38.y / 720f) * fVar61), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_43D7.f_1252)) != 0 && Global_43D7.f_129C != 4294967295)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_43D4 + 0.0046875f);
				if (Global_43D7.f_129E != 0)
				{
					func_343(Global_43D7.f_129E, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_43D4 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_335(fVar40);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_43D7.f_1252));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_43D7.f_1298)
				{
					if (Global_43D7.f_1256[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_43D7.f_125B[iVar15]);
						iVar15++;
					}
					else if (Global_43D7.f_1256[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_43D7.f_125F[iVar16], Global_43D7.f_1263[iVar16]);
						iVar16++;
					}
					else if (Global_43D7.f_1256[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_GET_TEXT_SCREEN_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_311(Global_43D4, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_43D7.f_1F91)
				{
					iVar1 = Global_43D7.f_1F8D;
					iVar2 = Global_43D7.f_1F8E;
					iVar3 = Global_43D7.f_1F8F;
					iVar4 = Global_43D7.f_1F90;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_43D4 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_335(fVar40);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_43D7.f_1252));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_43D7.f_1298)
				{
					if (Global_43D7.f_1256[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_43D7.f_125B[iVar15]);
						iVar15++;
					}
					else if (Global_43D7.f_1256[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_43D7.f_125F[iVar16], Global_43D7.f_1263[iVar16]);
						iVar16++;
					}
					else if (Global_43D7.f_1256[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_43D7.f_129E != 0)
				{
					func_343(Global_43D7.f_129E, 1, 1, &fVar36, &fVar37, bParam7);
					func_334(Global_43D7.f_129E, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_341(Global_43D7.f_129E), func_339(Global_43D7.f_129E, 1), ((Global_43D4 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_43D7.f_129C > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_43D7.f_129D) > Global_43D7.f_129C)
					{
						StringCopy(&(Global_43D7.f_1252), "", 16);
						Global_43D7.f_129C = 4294967295;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_411BEA.f_15)) != 0 && Global_411BEA.f_41 != 4294967295)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_43D4 + 0.0046875f);
				if (Global_411BEA.f_43 != 0)
				{
					func_343(Global_411BEA.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_43D4 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_335(fVar40);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_411BEA.f_15));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_411BEA.f_3D)
				{
					if (Global_411BEA.f_19[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_411BEA.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_411BEA.f_19[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_411BEA.f_22[iVar16], Global_411BEA.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_411BEA.f_19[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_GET_TEXT_SCREEN_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_311(Global_43D4, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_43D7.f_1F91)
				{
					iVar1 = Global_43D7.f_1F8D;
					iVar2 = Global_43D7.f_1F8E;
					iVar3 = Global_43D7.f_1F8F;
					iVar4 = Global_43D7.f_1F90;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_43D4 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_335(fVar40);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_411BEA.f_15));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_411BEA.f_3D)
				{
					if (Global_411BEA.f_19[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_411BEA.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_411BEA.f_19[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_411BEA.f_22[iVar16], Global_411BEA.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_411BEA.f_19[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_411BEA.f_43 != 0)
				{
					func_343(Global_411BEA.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					func_334(Global_411BEA.f_43, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_341(Global_411BEA.f_43), func_339(Global_411BEA.f_43, 1), ((Global_43D4 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_411BEA.f_41 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_411BEA.f_42) > Global_411BEA.f_41)
					{
						StringCopy(&(Global_411BEA.f_15), "", 16);
						Global_411BEA.f_41 = 4294967295;
					}
				}
			}
			func_327(iVar59, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_43D7.f_165E)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar67 = Global_43D7.f_1460;
			if (Global_43D7.f_165F)
			{
				iVar67 = (Global_43D7.f_1662 - 1);
			}
			fVar68 = 0f;
			fVar69 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar67)
			{
				fVar55 = 0.034722f;
				if (Global_43D7.f_166C[iVar6] != 0f)
				{
					fVar55 = Global_43D7.f_166C[iVar6];
				}
				if (Global_43D7.f_165F)
				{
					iVar6 = Global_43D7.f_1E20[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_43D7.f_1665 && iVar9 < Global_43D7.f_1467)
				{
					bVar33 = true;
					if (Global_43D7.f_1666 == iVar6)
					{
						fVar69 = fVar68;
					}
					if (Global_43D7.f_14EA[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar58 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_43D7.f_16F2[iVar6] = fVar35;
				fVar34 = (Global_43D4 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_43D7.f_1666 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_43D7.f_1F93)
					{
						HUD::GET_HUD_COLOUR(Global_43D7.f_1F92, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_43D4 + (fParam5 * 0.5f)), (((fVar58 + fVar69) + (0.00277776f * IntToFloat(iVar12))) + (fVar55 * 0.5f)), fParam5, fVar55, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_43D7.f_16F0 = fVar35;
				}
				if (iVar53 && iVar7 == iVar67)
				{
					func_325(bVar32, 1, 0, 0, 0, 0, 0);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("DFLT_MNU_OPT");
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar34, fVar35, 0);
					bVar39 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_43D7.f_1468)
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_43D7.f_13DF[iVar6], iVar8) || Global_43D7.f_13BE[iVar8] == 5)
						{
							if (Global_43D7.f_165F)
							{
								iVar19 = Global_43D7.f_1E30[((iVar9 * Global_43D7.f_1468) + iVar8)];
								iVar20 = Global_43D7.f_1E59[((iVar9 * Global_43D7.f_1468) + iVar8)];
								iVar21 = Global_43D7.f_1E82[((iVar9 * Global_43D7.f_1468) + iVar8)];
								iVar22 = Global_43D7.f_1EAB[((iVar9 * Global_43D7.f_1468) + iVar8)];
								iVar23 = Global_43D7.f_1ED4[((iVar9 * Global_43D7.f_1468) + iVar8)];
							}
							else
							{
								Global_43D7.f_1E30[((iVar9 * Global_43D7.f_1468) + iVar8)] = iVar19;
								Global_43D7.f_1E59[((iVar9 * Global_43D7.f_1468) + iVar8)] = iVar20;
								Global_43D7.f_1E82[((iVar9 * Global_43D7.f_1468) + iVar8)] = iVar21;
								Global_43D7.f_1EAB[((iVar9 * Global_43D7.f_1468) + iVar8)] = iVar22;
								Global_43D7.f_1ED4[((iVar9 * Global_43D7.f_1468) + iVar8)] = iVar23;
							}
							iVar74 = 0;
							bVar54 = false;
							if (Global_43D7.f_1776[0] != 4294967295)
							{
								if ((iVar6 * 5 + iVar8) == Global_43D7.f_1773[0])
								{
									bVar54 = true;
									iVar74 = 0;
								}
							}
							if (Global_43D7.f_1776[1] != 4294967295)
							{
								if ((iVar6 * 5 + iVar8) == Global_43D7.f_1773[1])
								{
									bVar54 = true;
									iVar74 = 1;
								}
							}
							if (Global_43D7.f_13C4[iVar8] != -1f)
							{
								fVar34 = ((Global_43D4 + 0.0046875f) + Global_43D7.f_13C4[iVar8]);
							}
							if ((iVar8 < 4 && Global_43D7.f_13C4[iVar8 + 1] != -1f) && fVar34 < Global_43D7.f_13C4[iVar8 + 1])
							{
								fVar44 = (Global_43D7.f_13C4[iVar8 + 1] - fVar34);
							}
							else
							{
								fVar44 = (((Global_43D4 + Global_43D6) - 0.0046875f) - fVar34);
							}
							if ((Global_43D7.f_13D1[iVar8] && Global_43D7.f_16ED) && bVar32)
							{
								bVar52 = true;
							}
							else
							{
								bVar52 = false;
							}
							switch (Global_43D7.f_13BE[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43D7.f_165F)
										{
											fVar41 = 0f;
											fVar42 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												bVar51 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 5 || Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 8)
													{
														bVar51 = true;
													}
													else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 9)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_325(bVar32, Global_43D7.f_64A[iVar24], Global_43D7.f_74B[iVar24], bVar54, iVar74, bVar51, bVar50);
												HUD::_BEGIN_TEXT_COMMAND_WIDTH(&(Global_43D7.f_49[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_49[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_49[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 5)
												{
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 6)
												{
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 7)
												{
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 9)
												{
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 2)
												{
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_INTEGER(Global_43D7.f_F4E[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 3)
												{
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_FLOAT(Global_43D7.f_104F[(iVar21 + iVar27)], Global_43D7.f_10D0[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
											{
												fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_343(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + fVar36);
														if (iVar14 > 0)
														{
															fVar42 = (fVar42 - (0.00078125f * 4f));
														}
														if (Global_43D7.f_1151[(iVar22 + iVar14)] == 2 || Global_43D7.f_1151[(iVar22 + iVar14)] == 48)
														{
															fVar42 = (fVar42 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar40 = 0f;
											if (Global_43D7.f_13D9[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
											}
											else if (Global_43D7.f_13D9[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
											}
											Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar40;
											Global_43D7.f_1F26[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar41;
											Global_43D7.f_1F4F[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)];
											fVar41 = Global_43D7.f_1F26[((iVar9 * Global_43D7.f_1468) + iVar8)];
											fVar42 = Global_43D7.f_1F4F[((iVar9 * Global_43D7.f_1468) + iVar8)];
										}
										if (bVar52)
										{
											if (func_343(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_43D7.f_13D9[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_343(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_334(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_341(26), func_339(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_343(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_343(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_334(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_341(27), func_339(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar31 = 0;
										if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 5 || Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_325(bVar32, Global_43D7.f_64A[iVar24], Global_43D7.f_74B[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_43D7.f_1F97 && Global_43D7.f_1F98 == iVar6)
											{
												func_324(bVar32);
											}
											HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_43D7.f_49[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_49[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 1;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_49[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 8;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 5;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 6;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 7;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 9;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_43D7.f_F4E[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar31 = 2;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_43D7.f_104F[(iVar21 + iVar27)], Global_43D7.f_10D0[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar31 = 3;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_43D7.f_1151[(iVar22 + iVar28)] == 2 || Global_43D7.f_1151[(iVar22 + iVar28)] == 48)
												{
													if (func_343(Global_43D7.f_1151[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_343(Global_43D7.f_1151[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_334(Global_43D7.f_1151[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_43D7.f_13D9[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_341(Global_43D7.f_1151[(iVar22 + iVar28)]), func_339(Global_43D7.f_1151[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_341(Global_43D7.f_1151[(iVar22 + iVar28)]), func_339(Global_43D7.f_1151[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															fVar40 = (fVar40 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar31 = 4;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
										{
											if (iVar31 == 4 && Global_43D7.f_13D9[iVar8] == 2)
											{
												HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
											}
											else
											{
												HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar40), fVar35, 0);
												if (func_323() && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_325(0, Global_43D7.f_64A[iVar24], Global_43D7.f_74B[iVar24], bVar54, 0, bVar51, bVar50);
														StringCopy(&cVar75, "TEST_LABEL", 16);
														fVar76 = 0f;
														fVar77 = 55f;
														fVar78 = 0.0185f;
														fVar79 = 0.004f;
														fVar80 = 0.02f;
														HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
														HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
														GRAPHICS::DRAW_RECT((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar77), 0);
														HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar75);
														HUD::ADD_TEXT_COMPONENT_INTEGER((Global_43D7.f_1665 + iVar30));
														HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar80), (fVar35 + fVar79), 0);
														iVar30++;
													}
												}
											}
										}
										if (iVar28 > 0)
										{
											fVar40 = (fVar40 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_43D7.f_1151[(iVar22 + iVar14)] != 2 && Global_43D7.f_1151[(iVar22 + iVar14)] != 48)
												{
													if (func_343(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_343(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_334(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_43D7.f_1151[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_341(Global_43D7.f_1151[(iVar22 + iVar14)]), func_339(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32), (Global_43D4 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_43D7.f_13D9[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_341(Global_43D7.f_1151[(iVar22 + iVar14)]), func_339(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_341(Global_43D7.f_1151[(iVar22 + iVar14)]), func_339(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar39 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43D7.f_165F)
										{
											func_325(bVar32, Global_43D7.f_64A[iVar24], Global_43D7.f_74B[iVar24], bVar54, 0, 0, 0);
											if (Global_43D7.f_1F97 && Global_43D7.f_1F98 == iVar6)
											{
												func_324(bVar32);
											}
											HUD::_BEGIN_TEXT_COMMAND_WIDTH("NUMBER");
											HUD::ADD_TEXT_COMPONENT_INTEGER(Global_43D7.f_F4E[iVar20]);
											fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar40 = 0f;
											if (Global_43D7.f_13D9[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
											}
											else if (Global_43D7.f_13D9[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
											}
											Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar40;
											Global_43D7.f_1F26[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)];
											fVar41 = Global_43D7.f_1F26[((iVar9 * Global_43D7.f_1468) + iVar8)];
										}
										if (bVar52)
										{
											if (func_343(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_43D7.f_13D9[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_343(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_334(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_341(26), func_339(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_343(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_343(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_334(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_341(27), func_339(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_325(bVar32, Global_43D7.f_64A[iVar24], Global_43D7.f_74B[iVar24], bVar54, 0, 0, 0);
										func_322((fVar34 + fVar40), fVar35, "NUMBER", Global_43D7.f_F4E[iVar20], 0);
									}
									bVar39 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43D7.f_165F)
										{
											func_325(bVar32, Global_43D7.f_64A[iVar24], Global_43D7.f_74B[iVar24], bVar54, 0, 0, 0);
											if (Global_43D7.f_1F97 && Global_43D7.f_1F98 == iVar6)
											{
												func_324(bVar32);
											}
											HUD::_BEGIN_TEXT_COMMAND_WIDTH("NUMBER");
											HUD::ADD_TEXT_COMPONENT_FLOAT(Global_43D7.f_104F[iVar21], Global_43D7.f_10D0[iVar21]);
											fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar40 = 0f;
											if (Global_43D7.f_13D9[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
											}
											else if (Global_43D7.f_13D9[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
											}
											Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar40;
											Global_43D7.f_1F26[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)];
											fVar41 = Global_43D7.f_1F26[((iVar9 * Global_43D7.f_1468) + iVar8)];
										}
										if (bVar52)
										{
											if (func_343(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_43D7.f_13D9[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_343(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_334(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_341(26), func_339(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_343(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_343(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_334(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_341(27), func_339(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_325(bVar32, Global_43D7.f_64A[iVar24], Global_43D7.f_74B[iVar24], bVar54, 0, 0, 0);
										func_321((fVar34 + fVar40), fVar35, "NUMBER", Global_43D7.f_104F[iVar21], Global_43D7.f_10D0[iVar21]);
									}
									bVar39 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_343(Global_43D7.f_1151[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
										{
											if (!Global_43D7.f_165F)
											{
												fVar42 = fVar36;
												fVar40 = 0f;
												if (Global_43D7.f_13D9[iVar8] == 2)
												{
													fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
												}
												else if (Global_43D7.f_13D9[iVar8] == 0)
												{
													fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
												}
												Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar40;
												Global_43D7.f_1F4F[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar42;
											}
											else
											{
												fVar40 = Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)];
												fVar42 = Global_43D7.f_1F4F[((iVar9 * Global_43D7.f_1468) + iVar8)];
											}
											if (bVar52)
											{
												if (func_343(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_43D7.f_13D9[iVar8] == 2)
													{
														fVar40 = (fVar40 - (fVar36 * 2f));
													}
													fVar43 = (fVar36 * 0.5f);
													if (func_343(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_334(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														GRAPHICS::DRAW_SPRITE(func_341(26), func_339(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
												if (func_343(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + fVar36);
													fVar43 = (fVar36 * 0.5f);
													if (func_343(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_334(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														GRAPHICS::DRAW_SPRITE(func_341(27), func_339(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_343(Global_43D7.f_1151[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_334(Global_43D7.f_1151[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												GRAPHICS::DRAW_SPRITE(func_341(Global_43D7.f_1151[iVar22]), func_339(Global_43D7.f_1151[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), (fVar36 * func_320(Global_43D7.f_1151[iVar22])), (fVar37 * func_320(Global_43D7.f_1151[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
									bVar39 = true;
									iVar22++;
									break;
								
								case 5:
									bVar39 = true;
									break;
							}
							if (Global_43D7.f_13BE[iVar8] == 5)
							{
								if (Global_43D7.f_13CA[iVar8] > 0.05f)
								{
									fVar34 = (fVar34 + Global_43D7.f_13CA[iVar8]);
								}
								else
								{
									fVar34 = (fVar34 + 0.05f);
								}
							}
							else
							{
								fVar34 = (fVar34 + Global_43D7.f_13CA[iVar8]);
								if (Global_43D7.f_13D1[iVar8])
								{
									if (func_343(26, 1, 1, &fVar36, &fVar37, bParam7))
									{
										fVar34 = (fVar34 - fVar36);
									}
								}
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_43D7.f_13CA[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_43D7.f_1E20[iVar9] = iVar6;
						Global_43D7.f_1667 = iVar6;
						iVar9++;
						if (Global_43D7.f_14EA[iVar6])
						{
							iVar13++;
						}
						if (Global_43D7.f_166C[iVar6] != 0f)
						{
							fVar68 = (fVar68 + Global_43D7.f_166C[iVar6]);
						}
						else
						{
							fVar68 = (fVar68 + 0.034722f);
						}
					}
					if (!Global_43D7.f_165E)
					{
						Global_43D7.f_156B[iVar6] = 1;
						if (Global_43D7.f_1469[iVar6])
						{
							if (bVar32)
							{
								Global_43D7.f_1664 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_43D7.f_1664 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_43D7.f_165E)
			{
				Global_43D7.f_1660 = ((fVar58 + fVar68) + (0.00277776f * IntToFloat(iVar12)));
				Global_43D7.f_1663 = iVar11;
				Global_43D7.f_1661 = iVar10;
				Global_43D7.f_165E = 1;
			}
		}
		iVar5++;
	}
	if (!Global_43D7.f_165F)
	{
		Global_43D7.f_1662 = iVar9;
		Global_43D7.f_165F = 1;
	}
	Global_43D7.f_16EF = fVar49;
	Global_43D7.f_16F1 = MISC::GET_GAME_TIMER();
	HUD::_CLEAR_NOTIFICATIONS_POS(Global_43D7.f_16EF);
	if (!Global_43D7.f_1F78)
	{
		func_316(0);
	}
	Global_43D7.f_1F78 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_315(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_315(int iParam0)//Position - 0x11963
{
	Global_14E696.f_437 = iParam0;
}

void func_316(int iParam0)//Position - 0x11974
{
	if (func_319())
	{
		return;
	}
	if (!Global_38B1.f_1 == 1)
	{
		if (func_172(0))
		{
			func_317(iParam0);
		}
		MISC::SET_BIT(&Global_950, 2);
	}
}

void func_317(int iParam0)//Position - 0x119A7
{
	if (func_319())
	{
		return;
	}
	if (Global_3959)
	{
		func_318(0, 0);
	}
	if (Global_38B1.f_1 == 10 || Global_38B1.f_1 == 9)
	{
		MISC::SET_BIT(&Global_950, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_3DCE = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_94F, 30);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 30);
	}
	if (!func_237())
	{
		Global_38B1.f_1 = 3;
	}
}

void func_318(bool bParam0, bool bParam1)//Position - 0x11A21
{
	if (bParam0)
	{
		if (func_172(0))
		{
			Global_3959 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_3872);
			}
			Global_3869 = { Global_387B[Global_387A /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_3869);
		}
	}
	else if (Global_3959 == 1)
	{
		Global_3959 = 0;
		Global_3869 = { Global_3882[Global_387A /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_3872);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_3869);
		}
	}
}

bool func_319()//Position - 0x11A95
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

float func_320(int iParam0)//Position - 0x11AA7
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 50:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_321(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x11B16
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_322(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x11B35
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_323()//Position - 0x11B53
{
	return DLC::IS_DLC_PRESENT(2532323046);
}

void func_324(bool bParam0)//Position - 0x11B64
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_43D7.f_1F94[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_43D7.f_1F94[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_325(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x11BAA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_326(Global_43D7.f_1776[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_326(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x11D58
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_327(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x11FE2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_168(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_345(bParam4, bParam8))
	{
		return;
	}
	if (func_332())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_330(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_43D7.f_129F != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_43D7.f_129F)
			{
				if (Global_43D7.f_13A0[iVar1] != 358)
				{
					StringCopy(&(Global_43D7.f_12A1[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_43D7.f_13A0[iVar1], true), 64);
				}
				else if (Global_43D7.f_13AD[iVar1] != 32)
				{
					StringCopy(&(Global_43D7.f_12A1[iVar1 /*16*/]), PAD::_0x80C2FD58D720C801(2, Global_43D7.f_13AD[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_43D7.f_12A0 = 0;
		}
		if (!Global_43D7.f_12A0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "CLEAR_ALL");
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT((1f - (Global_43D7.f_13D7 / 100f)));
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SET_SEETHROUGH(true);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
			iVar1 = 0;
			while (iVar1 < Global_43D7.f_129F)
			{
				if (MISC::GET_HASH_KEY(&(Global_43D7.f_1362[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar1);
					func_329(&(Global_43D7.f_12A1[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_43D7.f_1362[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_329(&(Global_43D7.f_12A1[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_43D7.f_1393[iVar1] == 4294967295)
					{
						func_328(&(Global_43D7.f_1362[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_43D7.f_1393[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_43D7.f_1362[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_43D7.f_13A0[iVar1] != 358 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_43D7.f_13BA, iVar1))
						{
							GRAPHICS::SET_SEETHROUGH(true);
							GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_43D7.f_13A0[iVar1]);
						}
						else
						{
							GRAPHICS::SET_SEETHROUGH(false);
							GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(358);
						}
					}
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_411BEA.f_10)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_43D7.f_129F);
				func_329(&Global_411BEA);
				if (Global_411BEA.f_14 == 4294967295)
				{
					func_328(&(Global_411BEA.f_10));
				}
				else
				{
					iVar4 = Global_43D7.f_1393[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_411BEA.f_10));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(80);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_43D7.f_13D8)
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
			}
			else
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
			}
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			Global_43D7.f_12A0 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_43D7.f_129F)
		{
			if (Global_43D7.f_1393[iVar1] != 4294967295)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_43D7.f_1362[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
			}
			iVar1++;
		}
		if (Global_411BEA.f_14 != 4294967295)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_411BEA.f_10));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_43D7.f_1F9B)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_43D7.f_1F9B = 1;
			}
		}
		else if (Global_43D7.f_1F9B)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_43D7.f_1F9B = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_43D7.f_13BD)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_43D7.f_161A[iVar0 /*10*/], Global_43D7.f_13BB, Global_43D7.f_13BC, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_43D7.f_161A[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_328(char* sParam0)//Position - 0x124EA
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

void func_329(char* sParam0)//Position - 0x124FC
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

bool func_330(int iParam0, int iParam1)//Position - 0x1250A
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_331(4294967295, 0) == 8;
	}
	else
	{
		bVar0 = Global_1841F3[iParam0 /*790*/].f_D3 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_331(int iParam0, bool bParam1)//Position - 0x12555
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_77();
	}
	if (Global_140845[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1407DA[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_332()//Position - 0x12596
{
	vector3 vVar0;
	
	if (Global_38B1.f_1 > 3)
	{
		return 1;
	}
	if (func_333())
	{
		vVar0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&vVar0);
		if (Global_387A == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_333()//Position - 0x12604
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_334(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1261E
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 50:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 51:
			*iParam5 = 100;
			break;
		
		case 52:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_335(float fParam0)//Position - 0x1270D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_43D4 + Global_43D6) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_336(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x1276C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_337(char* sParam0, int iParam1, int iParam2)//Position - 0x1278F
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_338();
	HUD::_BEGIN_TEXT_COMMAND_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_338()//Position - 0x127D1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_43D7.f_1F82)
	{
		iVar0 = Global_43D7.f_1F7E;
		iVar1 = Global_43D7.f_1F7F;
		iVar2 = Global_43D7.f_1F80;
		iVar3 = Global_43D7.f_1F81;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_43D4 + 0.0046875f), ((Global_43D4 + Global_43D6) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

var func_339(int iParam0, bool bParam1)//Position - 0x1285B
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_43D7.f_1ACF[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_43D7.f_1ACF[iParam0 /*16*/])) == 2807284209)
		{
			Var2 = { func_70(CAM::_0xDC9DA9E8789F5246()) };
			if (NETWORK::_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var2, &uVar1))
			{
				return func_340(&uVar1);
			}
		}
		else
		{
			return func_340(&(Global_43D7.f_1ACF[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 52:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_340(var uParam0)//Position - 0x12CC8
{
	return uParam0;
}

char* func_341(int iParam0)//Position - 0x12CD2
{
	var uVar0;
	struct<13> Var1;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_43D7.f_177E[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_43D7.f_177E[iParam0 /*16*/])) == 2807284209)
		{
			Var1 = { func_70(CAM::_0xDC9DA9E8789F5246()) };
			NETWORK::_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var1, &uVar0);
			return func_340(&uVar0);
		}
		else
		{
			return func_340(&(Global_43D7.f_177E[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_342()//Position - 0x12D47
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_343(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x12D79
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_341(iParam0), 64);
	StringCopy(&cVar1, func_339(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_342())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_342())
			{
				fVar4 = 1f;
			}
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) > 0)
			{
				GRAPHICS::GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
		}
		vVar7 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_344(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_344(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_43D7.f_1ACF[29 /*16*/])) == 2807284209)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_43D6)
			{
				*fParam4 = (*fParam4 * (Global_43D6 / *fParam3));
				*fParam3 = Global_43D6;
			}
		}
		return 1;
	}
	return 0;
}

float func_344(int iParam0)//Position - 0x12F2A
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_345(bool bParam0, bool bParam1)//Position - 0x12FC9
{
	if (Global_252F9E.f_761.f_2B0 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_246(8, 4294967295) && func_346() != 64)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::_0x2EAC52B4019E2782()) || Global_11729) || Global_43D7.f_1F9A) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_16C64.f_571)
	{
		return 0;
	}
	return 1;
}

int func_346()//Position - 0x13066
{
	return Global_140818;
}

void func_347(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x13072
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, true);
	if (Global_43D7.f_129F >= 12)
	{
		StringCopy(&Global_411BEA, sVar0, 64);
		StringCopy(&(Global_411BEA.f_10), sParam1, 16);
		Global_411BEA.f_14 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_43D7.f_13BA), Global_43D7.f_129F);
	}
	StringCopy(&(Global_43D7.f_12A1[Global_43D7.f_129F /*16*/]), sVar0, 64);
	StringCopy(&(Global_43D7.f_1362[Global_43D7.f_129F /*4*/]), sParam1, 16);
	Global_43D7.f_1393[Global_43D7.f_129F] = iParam2;
	Global_43D7.f_13A0[Global_43D7.f_129F] = iParam0;
	Global_43D7.f_13AD[Global_43D7.f_129F] = 32;
	Global_43D7.f_129F++;
}

char* func_348(int iParam0)//Position - 0x13127
{
	int iVar0;
	
	if (iParam0 != 4294967295)
	{
		iVar0 = iParam0;
	}
	else
	{
		iVar0 = 6;
	}
	switch (iVar0)
	{
		case 6:
			return "SNK_AFFORD";
		
		case 3:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		case 4:
			return "SNK_ITEM4_D";
		
		case 0:
			return "SNK_ITEM5_D";
		
		case 5:
			return "SNK_ITEM6_D";
		
		default:
	}
	return "";
}

void func_349(char* sParam0, int iParam1, int iParam2)//Position - 0x131A5
{
	int iVar0;
	
	StringCopy(&(Global_43D7.f_1252), sParam0, 16);
	Global_43D7.f_1298 = 0;
	Global_43D7.f_1299 = 0;
	Global_43D7.f_129A = 0;
	Global_43D7.f_129B = 0;
	Global_43D7.f_129C = iParam1;
	Global_43D7.f_129D = MISC::GET_GAME_TIMER();
	Global_43D7.f_129E = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43D7.f_1256[iVar0] = 0;
		iVar0++;
	}
}

void func_350(var uParam0, bool bParam1, int iParam2)//Position - 0x1320A
{
	int iVar0;
	int iVar1;
	
	Global_43D7.f_1666 = uParam0;
	Global_43D7.f_16ED = iParam2;
	if (Global_43D7.f_1666 < Global_43D7.f_1665)
	{
		Global_43D7.f_1665 = Global_43D7.f_1666;
	}
	else if ((Global_43D7.f_165F && Global_43D7.f_1666 > Global_43D7.f_1667) || (!Global_43D7.f_165F && Global_43D7.f_1666 >= (Global_43D7.f_1665 + Global_43D7.f_1467)))
	{
		iVar0 = Global_43D7.f_1665;
		while (iVar0 <= Global_43D7.f_1666)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_43D7.f_13DF[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_43D7.f_1467 && Global_43D7.f_1665 < 128)
		{
			Global_43D7.f_1665++;
			iVar1 = 0;
			iVar0 = Global_43D7.f_1665;
			while (iVar0 <= Global_43D7.f_1666)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_43D7.f_13DF[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_43D7.f_165E = 0;
	Global_43D7.f_165F = 0;
	if (bParam1)
	{
		StringCopy(&(Global_43D7.f_1252), "", 16);
		StringCopy(&(Global_411BEA.f_15), "", 16);
	}
}

void func_351(int iParam0)//Position - 0x1335C
{
	Global_43D7.f_1665 = iParam0;
}

void func_352(var uParam0, bool bParam1)//Position - 0x1336C
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_43D7.f_1464 >= 256)
	{
		return;
	}
	if (Global_43D7.f_166A >= 4)
	{
		return;
	}
	if (Global_43D7.f_166B != 1)
	{
		return;
	}
	if (Global_43D7.f_166A >= Global_43D7.f_1668)
	{
		return;
	}
	Global_43D7.f_F4E[Global_43D7.f_1464] = uParam0;
	Global_43D7.f_1464++;
	Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][Global_43D7.f_166A] = 2;
	Global_43D7.f_166A++;
	if (Global_43D7.f_166A >= Global_43D7.f_1668)
	{
		fVar0 = func_354();
		if (Global_43D7.f_13D1[Global_43D7.f_1461] && Global_43D7.f_166A == Global_43D7.f_1668)
		{
			func_343(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_43D7.f_13CA[(Global_43D7.f_1461 - 1)])
		{
			Global_43D7.f_13CA[(Global_43D7.f_1461 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_43D7.f_166A >= Global_43D7.f_1668)
		{
			fVar3 = func_353();
			if (fVar3 > Global_43D7.f_166C[Global_43D7.f_1460])
			{
				Global_43D7.f_166C[Global_43D7.f_1460] = fVar3;
			}
		}
	}
}

float func_353()//Position - 0x134A7
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_43D7.f_166A)
	{
		if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_43D7.f_1151[((Global_43D7.f_1466 - iVar1) + iVar0)] != 0)
		{
			if (func_343(Global_43D7.f_1151[((Global_43D7.f_1466 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_354()//Position - 0x1355A
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_43D7.f_166A)
	{
		if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_325(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[Global_43D7.f_1669 /*6*/])) != 0)
	{
		HUD::_BEGIN_TEXT_COMMAND_WIDTH(&(Global_43D7.f_49[Global_43D7.f_1669 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_43D7.f_166A)
	{
		if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[Global_43D7.f_1669 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_49[(Global_43D7.f_1669 + iVar8) /*6*/]));
			}
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[Global_43D7.f_1669 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_49[(Global_43D7.f_1669 + iVar8) /*6*/]));
			}
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[Global_43D7.f_1669 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_43D7.f_F4E[((Global_43D7.f_1464 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[Global_43D7.f_1669 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_43D7.f_104F[((Global_43D7.f_1465 - iVar4) + iVar10)], Global_43D7.f_10D0[((Global_43D7.f_1465 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[Global_43D7.f_1669 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[((Global_43D7.f_1463 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[Global_43D7.f_1669 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_25846A[((Global_43D7.f_1463 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[Global_43D7.f_1669 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[((Global_43D7.f_1463 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 9)
		{
			if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[Global_43D7.f_1669 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[((Global_43D7.f_1463 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[Global_43D7.f_1669 /*6*/])) != 0)
	{
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_43D7.f_1151[((Global_43D7.f_1466 - iVar5) + iVar7)] != 0)
		{
			func_343(Global_43D7.f_1151[((Global_43D7.f_1466 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_355(var uParam0, int iParam1)//Position - 0x139A1
{
	int iVar0;
	
	iVar0 = iParam1;
	switch (func_295(uParam0))
	{
		case 0:
			switch (iVar0)
			{
				case 3:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 5;
				
				case 4:
					return 7;
				
				case 0:
					return 2;
				
				case 5:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 4:
					return 8;
				
				case 0:
					return 2;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 4;
				
				case 4:
					return 6;
				
				case 0:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_356(int iParam0)//Position - 0x13A9E
{
	if (func_130(func_358(iParam0), 4294967295, 0) >= func_357(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_357(var uParam0)//Position - 0x13AC0
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 30;
		
		case 1:
			return 15;
		
		case 2:
			return 5;
		
		case 4:
			return 20;
		
		case 0:
			return 10;
		
		case 5:
			return 10;
		
		default:
	}
	return 0;
}

int func_358(var uParam0)//Position - 0x13B15
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 1275;
		
		case 1:
			return 1276;
		
		case 2:
			return 1277;
		
		case 4:
			return 1097;
		
		case 0:
			return 62;
		
		case 5:
			return 63;
		
		default:
	}
	return 9954;
}

void func_359(int iParam0, bool bParam1)//Position - 0x13B71
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_43D7.f_1466 >= 256)
	{
		return;
	}
	if (Global_43D7.f_166A >= 4)
	{
		return;
	}
	if (Global_43D7.f_166B != 1)
	{
		return;
	}
	if (Global_43D7.f_166A >= Global_43D7.f_1668)
	{
		return;
	}
	Global_43D7.f_1151[Global_43D7.f_1466] = iParam0;
	Global_43D7.f_1466++;
	Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][Global_43D7.f_166A] = 4;
	Global_43D7.f_166A++;
	if (Global_43D7.f_166A >= Global_43D7.f_1668)
	{
		fVar0 = func_354();
		if (Global_43D7.f_13D1[Global_43D7.f_1461] && Global_43D7.f_166A == Global_43D7.f_1668)
		{
			func_343(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_43D7.f_13CA[(Global_43D7.f_1461 - 1)])
		{
			Global_43D7.f_13CA[(Global_43D7.f_1461 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_43D7.f_166A >= Global_43D7.f_1668)
		{
			fVar3 = func_353();
			if (fVar3 > Global_43D7.f_166C[Global_43D7.f_1460])
			{
				Global_43D7.f_166C[Global_43D7.f_1460] = fVar3;
			}
		}
	}
}

void func_360(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x13CAC
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_43D7.f_1460 > iParam0)
	{
		return;
	}
	if (Global_43D7.f_1460 >= 128)
	{
		return;
	}
	if (Global_43D7.f_1462 >= 256)
	{
		return;
	}
	if (Global_43D7.f_166A < Global_43D7.f_1668)
	{
		return;
	}
	if (Global_43D7.f_1460 != iParam0)
	{
		Global_43D7.f_1460 = iParam0;
		Global_43D7.f_1461 = 0;
	}
	iVar0 = Global_43D7.f_13BE[Global_43D7.f_1461];
	if (iVar0 != 1)
	{
		while (Global_43D7.f_1461 < 4 && iVar0 != 1)
		{
			Global_43D7.f_1461++;
			iVar0 = Global_43D7.f_13BE[Global_43D7.f_1461];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_43D7.f_49[Global_43D7.f_1462 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_43D7.f_64A[Global_43D7.f_1462] = bParam3;
	Global_43D7.f_74B[Global_43D7.f_1462] = iParam4;
	Global_43D7.f_1462++;
	if (!bParam3)
	{
		func_363(Global_43D7.f_1460, 1);
	}
	else
	{
		func_363(Global_43D7.f_1460, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_362(&(Global_43D7.f_49[Global_43D7.f_1462 /*6*/]));
		if (Global_43D7.f_13D1[Global_43D7.f_1461])
		{
			func_343(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_43D7.f_13CA[Global_43D7.f_1461])
		{
			Global_43D7.f_13CA[Global_43D7.f_1461] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_361(&(Global_43D7.f_49[Global_43D7.f_1462 /*6*/]));
			if (fVar4 > Global_43D7.f_166C[iParam0])
			{
				Global_43D7.f_166C[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_43D7.f_13DF[iParam0]), Global_43D7.f_1461);
	Global_43D7.f_1461++;
	Global_43D7.f_166B = 1;
	Global_43D7.f_1669 = (Global_43D7.f_1462 - 1);
	Global_43D7.f_166A = 0;
	Global_43D7.f_1668 = iParam2;
}

float func_361(char* sParam0)//Position - 0x13EB8
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_362(char* sParam0)//Position - 0x13ED4
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_325(0, 1, 0, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_363(int iParam0, bool bParam1)//Position - 0x13F11
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_43D7.f_1779[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_43D7.f_1779[iVar0]), (iParam0 - iVar0 * 32));
	}
}

char* func_364(int iParam0)//Position - 0x13F5D
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "SNK_ITEM1";
		
		case 1:
			return "SNK_ITEM2";
		
		case 2:
			return "SNK_ITEM3";
		
		case 4:
			return "SNK_ITEM4";
		
		case 0:
			return "SNK_ITEM5";
		
		case 5:
			return "SNK_ITEM6";
		
		default:
	}
	return "";
}

void func_365(int iParam0, char* sParam1, char* sParam2)//Position - 0x13FC2
{
	Global_43D7 = iParam0;
	func_366(29, sParam1, sParam2);
}

void func_366(int iParam0, char* sParam1, char* sParam2)//Position - 0x13FD9
{
	StringCopy(&(Global_43D7.f_177E[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_43D7.f_1ACF[iParam0 /*16*/]), sParam2, 64);
}

void func_367(char* sParam0)//Position - 0x13FFD
{
	int iVar0;
	
	StringCopy(&(Global_43D7.f_1), sParam0, 16);
	Global_43D7.f_44 = 0;
	Global_43D7.f_45 = 0;
	Global_43D7.f_46 = 0;
	Global_43D7.f_47 = 0;
	Global_43D7.f_48 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43D7.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_368(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1404B
{
	Global_43D7.f_13D9[0] = iParam0;
	Global_43D7.f_13D9[1] = iParam1;
	Global_43D7.f_13D9[2] = iParam2;
	Global_43D7.f_13D9[3] = iParam3;
	Global_43D7.f_13D9[4] = iParam4;
}

void func_369(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1408A
{
	Global_43D7.f_13BE[0] = iParam0;
	Global_43D7.f_13BE[1] = iParam1;
	Global_43D7.f_13BE[2] = iParam2;
	Global_43D7.f_13BE[3] = iParam3;
	Global_43D7.f_13BE[4] = iParam4;
	Global_43D7.f_1468 = 0;
	if (iParam0 != 0)
	{
		Global_43D7.f_1468++;
	}
	if (iParam1 != 0)
	{
		Global_43D7.f_1468++;
	}
	if (iParam2 != 0)
	{
		Global_43D7.f_1468++;
	}
	if (iParam3 != 0)
	{
		Global_43D7.f_1468++;
	}
	if (iParam4 != 0)
	{
		Global_43D7.f_1468++;
	}
}

void func_370(bool bParam0, bool bParam1)//Position - 0x14134
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_43D7.f_49[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_43D7.f_84C[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_25846A[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_43D7.f_F4E[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_43D7.f_104F[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_43D7.f_1151[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_43D7.f_13DF[iVar0] = 0;
		Global_43D7.f_1469[iVar0] = 0;
		Global_43D7.f_14EA[iVar0] = 0;
		Global_43D7.f_16F2[iVar0] = 0f;
		Global_43D7.f_156B[iVar0] = 0;
		Global_43D7.f_166C[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_43D7.f_13BE[iVar0] = 0;
		Global_43D7.f_13CA[iVar0] = 0f;
		Global_43D7.f_13C4[iVar0] = -1f;
		Global_43D7.f_13D1[iVar0] = 0;
		Global_43D7.f_13D9[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_43D7.f_1362[iVar0 /*4*/]), "", 16);
		Global_43D7.f_1393[iVar0] = 4294967295;
		Global_43D7.f_13A0[iVar0] = 358;
		Global_43D7.f_13AD[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 53)
	{
		StringCopy(&(Global_43D7.f_177E[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_43D7.f_1ACF[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_43D7.f_64A[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_411BEA.f_10), "", 16);
	Global_411BEA.f_14 = 4294967295;
	Global_43D7 = 0;
	Global_43D7.f_1460 = 0;
	Global_43D7.f_1461 = 0;
	Global_43D7.f_1462 = 0;
	Global_43D7.f_1464 = 0;
	Global_43D7.f_1465 = 0;
	Global_43D7.f_1466 = 0;
	Global_43D7.f_1463 = 0;
	Global_43D7.f_16ED = 0;
	Global_43D7.f_1666 = 0;
	Global_43D7.f_1665 = 0;
	Global_43D7.f_1667 = 0;
	StringCopy(&(Global_43D7.f_1252), "", 16);
	Global_43D7.f_1298 = 0;
	Global_43D7.f_1299 = 0;
	Global_43D7.f_129A = 0;
	Global_43D7.f_129B = 0;
	Global_43D7.f_129C = 0;
	Global_43D7.f_129D = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43D7.f_1256[iVar0] = 0;
		iVar0++;
	}
	Global_43D7.f_129E = 0;
	StringCopy(&(Global_411BEA.f_15), "", 16);
	Global_411BEA.f_3D = 0;
	Global_411BEA.f_3E = 0;
	Global_411BEA.f_3F = 0;
	Global_411BEA.f_40 = 0;
	Global_411BEA.f_41 = 0;
	Global_411BEA.f_42 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_411BEA.f_19[iVar0] = 0;
		iVar0++;
	}
	Global_411BEA.f_43 = 0;
	StringCopy(&(Global_43D7.f_1), "", 16);
	Global_43D7.f_13D0 = 0f;
	Global_43D7.f_44 = 0;
	Global_43D7.f_45 = 0;
	Global_43D7.f_46 = 0;
	Global_43D7.f_47 = 0;
	Global_43D7.f_48 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43D7.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_43D7.f_166B = 0;
	Global_43D7.f_166A = 0;
	Global_43D7.f_1668 = 0;
	Global_43D7.f_1669 = 0;
	Global_43D7.f_129F = 0;
	Global_43D7.f_12A0 = 0;
	Global_43D7.f_1467 = 10;
	Global_43D7.f_1468 = 0;
	Global_43D7.f_16EF = 0f;
	Global_43D7.f_16F0 = 0f;
	Global_43D7.f_165E = 0;
	Global_43D7.f_165F = 0;
	Global_43D7.f_1660 = 0f;
	Global_43D7.f_1661 = 0;
	Global_43D7.f_1663 = 0;
	Global_43D7.f_1662 = 0;
	Global_43D7.f_1664 = 0;
	Global_43D7.f_1F97 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_43D7.f_1773[iVar0] = 4294967295;
		Global_43D7.f_1776[iVar0] = 4294967295;
		iVar0++;
	}
	Global_43D7.f_13D7 = 0f;
	Global_43D7.f_13BA = 0;
	Global_43D7.f_13D8 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43D7.f_1779)
	{
		Global_43D7.f_1779[iVar0] = 0;
		iVar0++;
	}
	Global_43D7.f_1F82 = 0;
	Global_43D7.f_1F7D = 0;
	Global_43D7.f_1F87 = 0;
	Global_43D7.f_1F8C = 0;
	Global_43D7.f_1F91 = 0;
	Global_43D7.f_1F93 = 0;
	Global_43D7.f_1F99 = 0;
	Global_43D4 = 0.05f;
	Global_43D5 = 0.05f;
	Global_43D6 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (bParam0)
	{
		Global_43D6 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_43D6 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_43D6 = 0.225f;
	}
}

int func_371(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x14617
{
	vector3 vVar0;
	float fVar1;
	
	switch (iParam0)
	{
		case 0:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-706.6382f, -913.6887f, 19.21f, -89.999f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-89.999f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 1:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-47.19871f, -1757.67f, 29.42f, -130f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-130f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 2:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(1164.21f, -322.89f, 69.2f, -80f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-80f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 3:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(1698.307f, 4923.371f, 42.06f, 145f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (145f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 4:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1820.465f, 793.8166f, 138.09f, -47.53f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-47.53f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 5:
			vVar0 = { 1165.958f, 2710.201f, 38.14286f };
			fVar1 = -1.15f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 6:
			vVar0 = { -2967.027f, 390.9038f, 15.02f };
			fVar1 = -94.76f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 7:
			vVar0 = { -1222.331f, -907.8234f, 12.31f };
			fVar1 = -147.297f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 8:
			vVar0 = { 1134.811f, -982.3615f, 46.4f };
			fVar1 = 96.68562f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 9:
			vVar0 = { -1486.673f, -378.4638f, 40.15f };
			fVar1 = -46.229f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 10:
			vVar0 = { -3244.573f, 1000.658f, 12.83f };
			fVar1 = 175.074f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 11:
			vVar0 = { -3041.357f, 584.2665f, 7.9f };
			fVar1 = -162.241f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 12:
			vVar0 = { 548.9015f, 2668.941f, 42.15f };
			fVar1 = -82.5f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 13:
			vVar0 = { 2554.875f, 381.3857f, 108.62f };
			fVar1 = 177.716f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 14:
			vVar0 = { 2676.212f, 3280.969f, 55.24f };
			fVar1 = 150.87f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 15:
			vVar0 = { 1729.329f, 6417.123f, 35.03f };
			fVar1 = 63.641f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 16:
			vVar0 = { 1959.323f, 3742.29f, 32.34f };
			fVar1 = 120f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 17:
			vVar0 = { 24.94562f, -1344.954f, 29.49f };
			fVar1 = 90f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 18:
			vVar0 = { 373.5954f, 328.5892f, 103.56f };
			fVar1 = 75.885f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 4294967294:
			*uParam1 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam2 = { -3.6091f, 0.022f, -8.6461f };
			*uParam3 = 35f;
			break;
	}
	return 1;
}

void func_372()//Position - 0x14DB0
{
	if (MISC::IS_PC_VERSION())
	{
		PAD::_SET_CURSOR_LOCATION(0.325f, 0.3f);
	}
}

void func_373(int iParam0, int iParam1)//Position - 0x14DCE
{
	if (!func_282(CAM::_0xDC9DA9E8789F5246(), 1) || iParam1)
	{
		if (!func_378())
		{
			Global_1406A0.f_1 = 1;
			Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_9 = 1;
			if (iParam0 == 1)
			{
				Global_1406A0.f_2 = 1;
			}
			func_374(0);
		}
	}
}

void func_374(int iParam0)//Position - 0x14E20
{
	if (!func_378() || iParam0)
	{
		Global_1406A0 = 1;
		func_377(1);
		if (((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_376()) && !func_375(CAM::_0xDC9DA9E8789F5246())) && !func_142(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_EC6C8 = 1;
		}
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_8 = 1;
	}
}

int func_375(int iParam0)//Position - 0x14E83
{
	if (func_282(iParam0, 1))
	{
		if (Global_1841F3[iParam0 /*790*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_376()//Position - 0x14EA7
{
	return Global_255C02.f_2D9;
}

void func_377(bool bParam0)//Position - 0x14EB6
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_378())
		{
			if (func_44(CAM::_0xDC9DA9E8789F5246(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(AUDIO::_0x0626A247D2405330(), 1);
				PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 342, false);
				PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(CAM::_0xDC9DA9E8789F5246(), 1f);
			unk_0x6CF2954DEC49C61F(0);
			unk_0xEF791AEFDDE09A3D(1);
			if (Global_1406A0.f_1 == 0 || Global_1406A0.f_2 == 1)
			{
				Global_1406A0.f_2 = 0;
				if (bParam0)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0, 0);
				}
			}
		}
		else
		{
			if (func_44(CAM::_0xDC9DA9E8789F5246(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(AUDIO::_0x0626A247D2405330(), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 342, true);
				PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(CAM::_0xDC9DA9E8789F5246(), 0.5f);
				if (Global_1406A0.f_1 == 0 || Global_1406A0.f_2 == 1)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(1, 0);
				}
			}
			unk_0x6CF2954DEC49C61F(1);
			unk_0xEF791AEFDDE09A3D(0);
		}
	}
}

bool func_378()//Position - 0x14FAF
{
	return Global_1406A0;
}

void func_379(int iParam0)//Position - 0x14FBB
{
	func_380(iParam0, 0f);
}

void func_380(int iParam0, float fParam1)//Position - 0x14FCA
{
	iParam0->f_1 = (func_300(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_381(int iParam0, bool bParam1)//Position - 0x14FF8
{
	int iVar0;
	
	iVar0 = func_262(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_172(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > 4294967295 && iVar0 < 6)
	{
		if (Global_8FDB[iVar0 /*32*/] == 1 && Global_8FDB[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_8FDB[iVar0 /*32*/].f_1D)
				{
					return 0;
				}
			}
			Global_8FDB[iVar0 /*32*/].f_5 = 1;
			Global_8FDB[iVar0 /*32*/].f_1D = 1;
			return 1;
		}
		else
		{
			if (Global_8FDB[iVar0 /*32*/] == 0)
			{
			}
			if (Global_8FDB[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_382()//Position - 0x150B0
{
	if (Global_19E56.f_4F9E.f_91 > 0)
	{
		return 0;
	}
	return 1;
}

bool func_383()//Position - 0x150CD
{
	return Global_434A;
}

int func_384(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x150D8
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 4294967294:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

bool func_385(int iParam0, int iParam1)//Position - 0x152BE
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_D0, iParam1);
}

void func_386(var uParam0, var uParam1)//Position - 0x152D7
{
	NETWORK::_0x5E3AA4CA2B6FB0EE(AUDIO::_0x0626A247D2405330());
	func_423(CAM::_0xDC9DA9E8789F5246(), 1, 0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	if (uParam0->f_33 > 0)
	{
		*uParam1 = uParam0->f_33;
		uParam0->f_33 = 0;
	}
	func_407();
	GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_35), 7);
	if (func_150("SHR_MENU"))
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	}
	if (uParam0->f_E != 4294967295)
	{
		func_261(&(uParam0->f_E));
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_1, 0);
	}
	CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
}

int func_387(float fParam0)//Position - 0x15361
{
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()) && !ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (fParam0 <= 0f)
		{
			return PED::_0x5407B7288D0478B7(AUDIO::_0x0626A247D2405330()) > 0;
		}
		else
		{
			return PED::_0x336B3D200AB007CB(AUDIO::_0x0626A247D2405330(), unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), fParam0) > 0;
		}
	}
	return 0;
}

int func_388(int iParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x153B3
{
	if (iParam2 == 4294967295)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_389(var uParam0)//Position - 0x15406
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((*uParam0)[iVar0] < 10)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_390()//Position - 0x15430
{
	BRAIN::OPEN_SEQUENCE_TASK(&uLocal_119);
	BRAIN::TASK_LOOK_AT_ENTITY(0, AUDIO::_0x0626A247D2405330(), 4294967295, 0, 2);
	BRAIN::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_enter", 8f, -8f, 4294967295, 262192, 0, 0, 0, 0);
	BRAIN::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_base", 8f, -4f, 4294967295, 262193, 0, 0, 0, 0);
	CUTSCENE::_0x8D9DF6ECA8768583(uLocal_119);
	BRAIN::OPEN_SEQUENCE_TASK(&uLocal_120);
	BRAIN::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_base", 4f, -4f, 4294967295, 262193, 0, 0, 0, 0);
	CUTSCENE::_0x8D9DF6ECA8768583(uLocal_120);
	BRAIN::OPEN_SEQUENCE_TASK(&uLocal_121);
	BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_112, 2f, 4294967295, 0.25f, 0, fLocal_113);
	BRAIN::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_intro", 8f, -4f, 4294967295, 262144, 0, 0, 0, 0);
	BRAIN::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_loop", 8f, -4f, 4294967295, 270337, 0, 0, 0, 0);
	BRAIN::TASK_SMART_FLEE_COORD(0, vLocal_112, 250f, 4294967295, 1, 0);
	BRAIN::TASK_SWAP_WEAPON(0, 0);
	CUTSCENE::_0x8D9DF6ECA8768583(uLocal_121);
	BRAIN::OPEN_SEQUENCE_TASK(&uLocal_123);
	BRAIN::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_intro", 8f, -4f, 4294967295, 262144, 0, 0, 0, 0);
	BRAIN::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_loop", 8f, -4f, 4294967295, 270337, 0, 0, 0, 0);
	BRAIN::TASK_SWAP_WEAPON(0, 0);
	CUTSCENE::_0x8D9DF6ECA8768583(uLocal_123);
	BRAIN::OPEN_SEQUENCE_TASK(&uLocal_122);
	BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_112, 2f, 4294967295, 0.25f, 0, (fLocal_113 - 180f));
	unk_0x74C219E0C7FC4E4B(0, 1);
	BRAIN::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 20f, 0);
	CUTSCENE::_0x8D9DF6ECA8768583(uLocal_122);
}

void func_391(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x155B7
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_11625)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

int func_392(var uParam0)//Position - 0x15652
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
	}
	return 1;
}

int func_393()//Position - 0x15671
{
	return Local_103.f_C;
}

char* func_394(int iParam0)//Position - 0x1567D
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case 4294967294:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

int func_395()//Position - 0x15729
{
	vector3 vVar0;
	
	if (func_403(&(Local_105.f_32), 0))
	{
		func_401(Local_105.f_32, &iLocal_139, &iLocal_140, &iLocal_141, &iLocal_142, &vLocal_143, &vLocal_144);
		func_400(Local_105.f_32, &vLocal_145, &vLocal_146, &fLocal_147);
		func_399(Local_105.f_32, &vLocal_148, &vLocal_149, &fLocal_150);
		switch (Local_105.f_32)
		{
			case 0:
				vLocal_115 = { 1393.1f, 3605.89f, (35.2f - 0.2f) };
				vLocal_116 = { 0f, 0f, 21.89f };
				iLocal_110 = func_50(0);
				vLocal_112 = { 1394.852f, 3609.509f, 33.9809f };
				fLocal_113 = 116.5329f;
				iLocal_134 = 1;
				if (func_397(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				break;
			
			case 1:
				vLocal_116 = { 0f, 0f, -160f };
				vLocal_115 = { -3041.38f, 584.35f, (8.11f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { -3047.512f, 588.9807f, 6.9089f };
				fLocal_113 = 178.8753f;
				iLocal_134 = 1;
				if (func_397(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				break;
			
			case 2:
				vLocal_115 = { -3244.56f, 1000.74f, (13.03f - 0.2f) };
				vLocal_116 = { 0f, 0f, 175.52f };
				iLocal_110 = func_50(0);
				vLocal_112 = { -3249.114f, 1006.558f, 11.8307f };
				fLocal_113 = 191.594f;
				iLocal_134 = 1;
				if (func_397(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				break;
			
			case 3:
				vLocal_116 = { 0f, 0f, -82.38f };
				vLocal_115 = { 548.82f, 2668.93f, (42.36f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 543.0796f, 2663.967f, 41.1565f };
				fLocal_113 = 228.4295f;
				iLocal_134 = 1;
				if (func_397(6, 18))
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				break;
			
			case 4:
				vLocal_116 = { 0f, 0f, 180f };
				vLocal_115 = { 2554.88f, 381.47f, (108.82f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 2549.85f, 387.1622f, 107.623f };
				fLocal_113 = 197.2994f;
				iLocal_134 = 1;
				if (func_397(6, 18))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				break;
			
			case 5:
				vLocal_116 = { 0f, 0f, 155f };
				vLocal_115 = { 2676.26f, 3281.04f, (55.44f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 2671.351f, 3283.136f, 54.2411f };
				fLocal_113 = 296.5427f;
				iLocal_134 = 1;
				if (func_397(6, 18))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				break;
			
			case 6:
				vLocal_116 = { 0f, 0f, 63.3f };
				vLocal_115 = { 1729.4f, 6417.08f, (35.24f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 1733.967f, 6421.495f, 34.0372f };
				fLocal_113 = 130.9518f;
				iLocal_134 = 1;
				if (func_397(6, 18))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				break;
			
			case 7:
				vLocal_116 = { 0f, 0f, 117f };
				vLocal_115 = { 1959.4f, 3742.33f, (32.54f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 1958.92f, 3746.267f, 31.3438f };
				fLocal_113 = 73.6245f;
				iLocal_134 = 1;
				if (func_397(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				break;
			
			case 8:
				vLocal_116 = { 0f, 0f, 92f };
				vLocal_115 = { 25.03f, -1344.96f, (29.69f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 30.5721f, -1339.782f, 28.4939f };
				fLocal_113 = 110.7699f;
				iLocal_134 = 1;
				if (func_397(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				break;
			
			case 9:
				vLocal_116 = { 0f, 0f, 75f };
				vLocal_115 = { 373.68f, 328.56f, (103.77f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 376.2976f, 331.8158f, 102.5664f };
				fLocal_113 = 52.0064f;
				iLocal_134 = 1;
				if (func_397(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				break;
			
			case 10:
				vLocal_116 = { 0f, 0f, 0f };
				vLocal_115 = { 1165.96f, 2710.2f, (38.25f - 0.105f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 1168.971f, 2719.118f, 36.0632f };
				fLocal_113 = 136.5945f;
				iLocal_134 = 3;
				if (func_397(10, 22))
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 11:
				vLocal_116 = { 0f, 0f, -92f };
				vLocal_115 = { -2967.03f, 390.9f, (15.23f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { -2962.983f, 391.9788f, 14.0433f };
				fLocal_113 = 176.1174f;
				iLocal_134 = 3;
				if (func_397(10, 22))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 12:
				vLocal_116 = { 0f, 0f, -145f };
				vLocal_115 = { -1222.33f, -907.82f, (12.52f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { -1218.283f, -915.7103f, 10.3264f };
				fLocal_113 = 43.8031f;
				iLocal_134 = 3;
				if (func_397(10, 22))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 13:
				vLocal_116 = { 0f, 0f, 103f };
				vLocal_115 = { 1134.81f, -982.36f, (46.6f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 1130.155f, -979.2816f, 45.4158f };
				fLocal_113 = 269.2587f;
				iLocal_134 = 3;
				if (func_397(10, 22))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 14:
				vLocal_116 = { 0f, 0f, -41f };
				vLocal_115 = { -1486.67f, -378.46f, (40.35f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { -1479.163f, -375.0302f, 38.1633f };
				fLocal_113 = 36.5415f;
				iLocal_134 = 3;
				if (func_397(10, 22))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 15:
				vLocal_116 = { 0f, 0f, 145f };
				vLocal_115 = { (1698.33f - 0.04f), 4923.33f, (42.12f - 0.06f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 1707.303f, 4918.31f, 41.0636f };
				fLocal_113 = 24.9178f;
				iLocal_134 = 2;
				if (func_397(8, 20))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 16:
				vLocal_116 = { 0f, 0f, -87f };
				vLocal_115 = { -706.69f, -913.69f, (19.27f - 0.06f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { -709.7998f, -907.1352f, 18.2156f };
				fLocal_113 = 291.6504f;
				iLocal_134 = 2;
				if (func_397(8, 20))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 17:
				vLocal_116 = { 0f, 0f, -125f };
				vLocal_115 = { -47.23f, -1757.64f, (29.48f - 0.06f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { -40.42f, -1751.423f, 28.421f };
				fLocal_113 = 145.6553f;
				iLocal_134 = 2;
				if (func_397(8, 20))
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 18:
				vLocal_116 = { 0f, 0f, -74f };
				vLocal_115 = { 1164.16f, -322.9f, (69.26f - 0.06f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 1159.682f, -314.254f, 68.2051f };
				fLocal_113 = 232.6337f;
				iLocal_134 = 2;
				if (func_397(8, 20))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 19:
				vLocal_115 = { -1820.5f, 793.78f, (138.32f - 0.22f) };
				vLocal_116 = { 0f, 0f, -47.3f };
				iLocal_110 = func_50(0);
				vLocal_112 = { -1828.907f, 799.6096f, 137.1776f };
				fLocal_113 = 247.1234f;
				iLocal_134 = 2;
				if (func_397(8, 20))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
		}
		vLocal_115 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_115, vLocal_116.z, 0f, 0.075f, 0f) };
		vLocal_111 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s", vLocal_115, vLocal_116, 0f, 2) };
		vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s", vLocal_115, vLocal_116, 0f, 2) };
		Local_103.f_2A = vVar0.z;
		vLocal_127 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s_bag", vLocal_115, vLocal_116, 0f, 2) };
		vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s_bag", vLocal_115, vLocal_116, 0f, 2) };
		fLocal_128 = vVar0.z;
		vLocal_129 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s_till", vLocal_115, vLocal_116, 0f, 2) };
		vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s_till", vLocal_115, vLocal_116, 0f, 2) };
		fLocal_130 = vVar0.z;
		Local_105 = func_396(Local_105.f_32);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_103.f_2D = iLocal_316[0];
			if (Local_103.f_2D == 0)
			{
				StringCopy(&(Local_103.f_32), "MP_M_SHOPKEEP_01_PAKISTANI_MINI_01", 64);
				StringCopy(&(Local_103.f_2E), "StoreOwner2", 16);
			}
			else if (Local_103.f_2D == 1)
			{
				StringCopy(&(Local_103.f_32), "MP_M_SHOPKEEP_01_LATINO_MINI_01", 64);
				StringCopy(&(Local_103.f_2E), "StoreOwner", 16);
			}
			else
			{
				StringCopy(&(Local_103.f_32), "MP_M_SHOPKEEP_01_CHINESE_MINI_01", 64);
				StringCopy(&(Local_103.f_2E), "StoreOwner3", 16);
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 29))
		{
			ENTITY::CREATE_MODEL_HIDE(vLocal_115, 0.5f, iLocal_131, 1);
			MISC::SET_BIT(&(Local_105.f_34), 29);
		}
		return 1;
	}
	return 0;
}

int func_396(int iParam0)//Position - 0x16BB8
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 18:
			return 2;
		
		case 15:
			return 3;
		
		case 19:
			return 4;
		
		case 10:
			return 5;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		case 13:
			return 8;
		
		case 14:
			return 9;
		
		case 2:
			return 10;
		
		case 1:
			return 11;
		
		case 3:
			return 12;
		
		case 4:
			return 13;
		
		case 5:
			return 14;
		
		case 6:
			return 15;
		
		case 7:
			return 16;
		
		case 8:
			return 17;
		
		case 9:
			return 18;
		
		case 0:
			return 4294967294;
		
		default:
	}
	return 4294967295;
}

bool func_397(int iParam0, int iParam1)//Position - 0x16C9D
{
	return func_398(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

int func_398(int iParam0, int iParam1, int iParam2)//Position - 0x16CB1
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_399(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x16D5A
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1393.091f, 3607.383f, 33.9809f };
		*uParam2 = { 1391.178f, 3612.516f, (38.3614f - 0.2f) };
		*uParam3 = 12.5f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3045.013f, 585.9666f, (10.35421f - 0.2f) };
		*uParam2 = { -3048.714f, 584.7961f, 6.948262f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3247.313f, 1003.657f, (15.27433f - 0.2f) };
		*uParam2 = { -3251.157f, 1003.984f, 11.83501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 546.5474f, 2665.642f, (44.60108f - 0.2f) };
		*uParam2 = { 547.054f, 2661.794f, 41.15667f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2552f, 384.2527f, (111.0656f - 0.2f) };
		*uParam2 = { 2548.145f, 384.4133f, 107.6241f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2674.946f, 3284.833f, (57.68088f - 0.2f) };
		*uParam2 = { 2671.569f, 3286.699f, 54.24464f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1733.119f, 6418.579f, (37.48002f - 0.2f) };
		*uParam2 = { 1734.839f, 6422.032f, 34.03751f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1960.224f, 3746.258f, (34.7878f - 0.2f) };
		*uParam2 = { 1958.295f, 3749.599f, 31.34522f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 27.71382f, -1341.968f, (31.93314f - 0.2f) };
		*uParam2 = { 27.71049f, -1338.109f, 28.49479f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 377.0183f, 330.808f, (106.0112f - 0.2f) };
		*uParam2 = { 377.9499f, 334.5523f, 102.567f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1167.015f, 2711.601f, (40.66147f - 0.2f) };
		*uParam2 = { 1167.082f, 2720.243f, 36.06501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2965.705f, 389.6696f, (17.64162f - 0.2f) };
		*uParam2 = { -2957.095f, 389.139f, 13.04323f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1222.402f, -909.5575f, (14.92466f - 0.2f) };
		*uParam2 = { -1217.682f, -916.7974f, 10.33735f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.284f, -981.473f, (49.01414f - 0.2f) };
		*uParam2 = { 1124.708f, -982.6027f, 44.42008f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.883f, -378.2694f, (42.76172f - 0.2f) };
		*uParam2 = { -1478.771f, -372.1664f, 38.16948f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1704.556f, 4921.806f, (44.02687f - 0.2f) };
		*uParam2 = { 1708.285f, 4919.196f, 41.06359f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -709.019f, -907.7159f, (21.17918f - 0.2f) };
		*uParam2 = { -709.0177f, -903.1516f, 18.21618f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.16617f, -1751.578f, (31.37973f - 0.2f) };
		*uParam2 = { -42.22961f, -1748.09f, 28.42099f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1160.825f, -317.4214f, (71.16085f - 0.2f) };
		*uParam2 = { 1160.033f, -312.932f, 68.20509f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1826.218f, 796.6393f, (140.1334f - 0.2f) };
		*uParam2 = { -1829.301f, 799.9996f, 137.18f };
		*uParam3 = 4f;
	}
}

void func_400(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1721B
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1395.548f, 3600.575f, 33.98914f };
		*uParam2 = { 1392.08f, 3609.983f, (37.33543f - 0.2f) };
		*uParam3 = 12.25f;
	}
	if (iParam0 == 1)
	{
		*uParam1 = { -3038.657f, 589.5176f, 6.904751f };
		*uParam2 = { -3045.476f, 587.4066f, (11.31222f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 2)
	{
		*uParam1 = { -3240.032f, 1004.482f, 11.8307f };
		*uParam2 = { -3247.188f, 1005.107f, (16.25224f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 3)
	{
		*uParam1 = { 544.2278f, 2672.5f, 41.1565f };
		*uParam2 = { 545.201f, 2665.442f, (45.69155f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 4)
	{
		*uParam1 = { 2559.176f, 385.3936f, 107.623f };
		*uParam2 = { 2552.054f, 385.6057f, (112.1638f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 5)
	{
		*uParam1 = { 2681.864f, 3282.603f, 54.24114f };
		*uParam2 = { 2675.586f, 3285.981f, (58.79021f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 6)
	{
		*uParam1 = { 1731.237f, 6411.557f, 34.03723f };
		*uParam2 = { 1734.383f, 6417.952f, (38.58461f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 7)
	{
		*uParam1 = { 1964.999f, 3740.795f, 31.34375f };
		*uParam2 = { 1961.384f, 3746.928f, (35.89571f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 8)
	{
		*uParam1 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
		*uParam2 = { Vector(33.03834f, -1341.382f, 27.05614f) - Vector(0.2f, 0.2f, 0.2f) + Vector(0f, -0.4f, 2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 9)
	{
		*uParam1 = { 376.6309f, 323.5533f, 102.5664f };
		*uParam2 = { 378.3253f, 330.4793f, (107.1095f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 10)
	{
		*uParam1 = { 1166.497f, 2703.756f, 37.06307f };
		*uParam2 = { 1166.525f, 2711.974f, (41.66307f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 11)
	{
		*uParam1 = { -2973.512f, 390.7873f, 14.04322f };
		*uParam2 = { -2965.288f, 390.2452f, (18.54322f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 12)
	{
		*uParam1 = { -1226.417f, -902.6738f, 11.33496f };
		*uParam2 = { -1221.765f, -909.5887f, (15.82626f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 13)
	{
		*uParam1 = { 1141.35f, -980.9322f, 45.41594f };
		*uParam2 = { 1132.976f, -982.0952f, (49.91574f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 14)
	{
		*uParam1 = { -1490.949f, -383.4771f, 39.16332f };
		*uParam2 = { -1485.006f, -377.6167f, (43.66332f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 15)
	{
		*uParam1 = { 1698.98f, 4929.093f, 41.06357f };
		*uParam2 = { 1705.233f, 4924.578f, (45.60386f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 16)
	{
		*uParam1 = { -711.77f, -916.4685f, 18.21557f };
		*uParam2 = { -711.7368f, -908.7517f, (22.76488f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 17)
	{
		*uParam1 = { -52.90452f, -1756.474f, 28.42097f };
		*uParam2 = { -47.92523f, -1750.614f, (32.94246f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 18)
	{
		*uParam1 = { 1159.633f, -326.5087f, 68.20507f };
		*uParam2 = { 1158.335f, -318.9123f, (72.74828f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 19)
	{
		*uParam1 = { -1822.373f, 788.2851f, 137.1876f };
		*uParam2 = { -1827.484f, 794.0739f, (141.6933f - 0.2f) };
		*uParam3 = 14f;
	}
}

void func_401(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x176C8
{
	func_402(iParam0, uParam5, uParam6);
	switch (iParam0)
	{
		case 0:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_methlab");
			}
			*uParam2 = 2673182454;
			*uParam4 = 3370757038;
			*uParam3 = 4294967295;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_shop_247");
			}
			*uParam2 = 1569794095;
			*uParam4 = 462608346;
			*uParam3 = 4294967295;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_gen_liquor");
			}
			*uParam2 = 4016457029;
			*uParam4 = 3001531479;
			*uParam3 = 4294967295;
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_gasstation");
			}
			*uParam2 = 2635446821;
			*uParam4 = 3022576943;
			*uParam3 = 3459302568;
			break;
	}
}

void func_402(int iParam0, var uParam1, var uParam2)//Position - 0x17811
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1394.169f, 3599.86f, 34.0121f };
			*uParam2 = { 1395.548f, 3600.575f, 33.98914f };
			break;
		
		case 1:
			*uParam1 = { -3038.908f, 589.5187f, 6.9048f };
			*uParam2 = { -3038.657f, 589.5176f, 6.904751f };
			break;
		
		case 2:
			*uParam1 = { -3240.317f, 1004.433f, 11.8307f };
			*uParam2 = { -3240.032f, 1004.482f, 11.8307f };
			break;
		
		case 3:
			*uParam1 = { 544.2802f, 2672.811f, 41.1566f };
			*uParam2 = { 544.2278f, 2672.5f, 41.1565f };
			break;
		
		case 4:
			*uParam1 = { 2559.247f, 385.5266f, 107.623f };
			*uParam2 = { 2559.176f, 385.3936f, 107.623f };
			break;
		
		case 5:
			*uParam1 = { 2682.003f, 3282.543f, 54.2411f };
			*uParam2 = { 2681.864f, 3282.603f, 54.24114f };
			break;
		
		case 6:
			*uParam1 = { 1731.21f, 6411.403f, 34.0372f };
			*uParam2 = { 1731.237f, 6411.557f, 34.03723f };
			break;
		
		case 7:
			*uParam1 = { 1965.054f, 3740.555f, 31.3448f };
			*uParam2 = { 1964.999f, 3740.795f, 31.34375f };
			break;
		
		case 8:
			*uParam1 = { Vector(28.5036f, -1348.813f, 27.0641f) + Vector(0f, -0.4f, 2f) };
			*uParam2 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
			break;
		
		case 9:
			*uParam1 = { 376.6533f, 323.6471f, 102.5664f };
			*uParam2 = { 376.6309f, 323.5533f, 102.5664f };
			break;
		
		case 10:
			*uParam1 = { Vector(37.1573f, 2703.114f, 1195.432f) + Vector(0f, 0.39f, -29.04f) };
			*uParam2 = { 1166.497f, 2703.756f, 37.06307f };
			break;
		
		case 11:
			*uParam1 = { -2973.262f, 390.8184f, 14.0433f };
			*uParam2 = { -2973.512f, 390.7873f, 14.04322f };
			break;
		
		case 12:
			*uParam1 = { -1226.464f, -902.5864f, 11.2783f };
			*uParam2 = { -1226.417f, -902.6738f, 11.33496f };
			break;
		
		case 13:
			*uParam1 = { 1141.36f, -980.8802f, 45.4155f };
			*uParam2 = { 1141.35f, -980.9322f, 45.41594f };
			break;
		
		case 14:
			*uParam1 = { -1491.057f, -383.5728f, 39.1706f };
			*uParam2 = { -1490.949f, -383.4771f, 39.16332f };
			break;
		
		case 15:
			*uParam1 = { 1698.808f, 4929.198f, 41.0783f };
			*uParam2 = { 1698.98f, 4929.093f, 41.06357f };
			break;
		
		case 16:
			*uParam1 = { -711.721f, -916.6965f, 18.2145f };
			*uParam2 = { -711.77f, -916.4685f, 18.21557f };
			break;
		
		case 17:
			*uParam1 = { -53.124f, -1756.405f, 28.421f };
			*uParam2 = { -52.90452f, -1756.474f, 28.42097f };
			break;
		
		case 18:
			*uParam1 = { 1159.542f, -326.6986f, 67.923f };
			*uParam2 = { 1159.633f, -326.5087f, 68.20507f };
			break;
		
		case 19:
			*uParam1 = { -1822.287f, 788.006f, 137.1859f };
			*uParam2 = { -1822.373f, 788.2851f, 137.1876f };
			break;
	}
}

int func_403(var uParam0, bool bParam1)//Position - 0x17BE8
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar1 = 9999.9f;
	iVar2 = 0;
	while (iVar2 < 20)
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_85(CAM::_0xDC9DA9E8789F5246()), func_404(iVar2), 1);
		if (fVar0 < fVar1)
		{
			if (bParam1)
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FB4E.f_3E, iVar2) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FB4E.f_40, iVar2))
				{
					fVar1 = fVar0;
					*uParam0 = iVar2;
				}
			}
			else
			{
				fVar1 = fVar0;
				*uParam0 = iVar2;
			}
		}
		iVar2++;
	}
	return 1;
}

Vector3 func_404(int iParam0)//Position - 0x17C63
{
	vector3 vVar0;
	var uVar1;
	
	func_402(iParam0, &vVar0, &uVar1);
	return vVar0;
}

int func_405(int iParam0)//Position - 0x17C79
{
	return Local_104[iParam0 /*10*/].f_4;
}

void func_406()//Position - 0x17C89
{
	Global_255C02.f_2A1.f_1C = 0;
}

void func_407()//Position - 0x17C9B
{
	if (Global_1406A0.f_1 == 1)
	{
		func_408(0);
		Global_1406A0.f_1 = 0;
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_9 = 0;
	}
}

void func_408(int iParam0)//Position - 0x17CC7
{
	if (func_378())
	{
		if (iParam0 == 1)
		{
			if (Global_26862F.f_111E == 4294967295)
			{
				Global_26862F.f_111E = 60000;
			}
			func_409(&(Global_26862F.f_111C), 0, 0);
			if (Global_26862F.f_1121 == 4294967295)
			{
				Global_26862F.f_1121 = 10000;
			}
			func_409(&(Global_26862F.f_111F), 0, 0);
		}
		else
		{
			Global_1406A0 = 0;
			Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_8 = 0;
			func_377(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_376()) && !func_375(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_EC6C8 = 0;
		}
	}
}

void func_409(var uParam0, bool bParam1, bool bParam2)//Position - 0x17D61
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = HUD::_0x13C4B962653A5280();
		}
		else
		{
			*uParam0 = NETWORK::_0x89023FBBF9200E9F();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_410()//Position - 0x17D9E
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!func_44(CAM::_0xDC9DA9E8789F5246(), 1, 1))
	{
		iVar0 = 1;
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_35, 6) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_35, 5))
		{
			iVar1 = unk_0xCCADB536D2A7894D(4294967295);
			iVar2 = 0;
			MISC::SET_BIT(&iVar2, 8);
			MISC::SET_BIT(&iVar2, 4);
			MISC::SET_BIT(&iVar2, 1);
			if (iLocal_335 > Global_40001.f_A6)
			{
				iLocal_335 = Global_40001.f_A6;
			}
			if (iVar1 < iLocal_335)
			{
				if (iVar1 > 0)
				{
					if (func_49(func_50(1)))
					{
						if (NETWORKCASH::_0x7303E27CC6532080(iVar1, 0, 0, 0, &uVar3, 4294967295))
						{
							if (func_218())
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_7, 1))
								{
									Global_26862F.f_1265 = iVar1;
									Global_26862F.f_1266 = iVar2;
									Global_26862F.f_1267 = { PED::GET_DEAD_PED_PICKUP_COORDS(AUDIO::_0x0626A247D2405330(), 1067030938, 1069547520) };
									func_208(&(Global_26862F.f_1264), 3159588365, 537254313, 1474183246, 1022400740, Global_26862F.f_1265, 1, 3);
									MISC::SET_BIT(&(Global_26862F.f_7), 1);
									iLocal_335 = 0;
									MISC::SET_BIT(&(Local_105.f_35), 5);
								}
							}
							else
							{
								OBJECT::CREATE_AMBIENT_PICKUP(joaat("pickup_money_variable"), PED::GET_DEAD_PED_PICKUP_COORDS(AUDIO::_0x0626A247D2405330(), 1067030938, 1069547520), iVar2, iVar1, func_50(1), 0, 0);
								func_203(-iVar1, 1, 1, 1092616192);
								NETWORKCASH::NETWORK_SPENT_HOLDUPS(iVar1, 0, 0);
								func_207(1022400740, iVar1, &uVar4, 0, 0, 0);
								iLocal_335 = 0;
								func_411();
								MISC::SET_BIT(&(Local_105.f_35), 5);
							}
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
			else if (iLocal_335 > 0)
			{
				if (func_49(func_50(1)))
				{
					if (NETWORKCASH::_0x7303E27CC6532080(iLocal_335, 0, 0, 0, &uVar3, 4294967295))
					{
						if (func_218())
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_7, 1))
							{
								Global_26862F.f_1265 = iLocal_335;
								Global_26862F.f_1266 = iVar2;
								Global_26862F.f_1267 = { PED::GET_DEAD_PED_PICKUP_COORDS(AUDIO::_0x0626A247D2405330(), 1067030938, 1069547520) };
								func_208(&(Global_26862F.f_1264), 3159588365, 537254313, 1474183246, 1022400740, Global_26862F.f_1265, 1, 3);
								MISC::SET_BIT(&(Global_26862F.f_7), 1);
								iLocal_335 = 0;
								MISC::SET_BIT(&(Local_105.f_35), 5);
							}
						}
						else
						{
							OBJECT::CREATE_AMBIENT_PICKUP(joaat("pickup_money_variable"), PED::GET_DEAD_PED_PICKUP_COORDS(AUDIO::_0x0626A247D2405330(), 1067030938, 1069547520), iVar2, iLocal_335, func_50(1), 0, 0);
							func_203(-iLocal_335, 1, 1, 1092616192);
							NETWORKCASH::NETWORK_SPENT_HOLDUPS(iLocal_335, 0, 0);
							func_207(1022400740, iLocal_335, &uVar5, 0, 0, 0);
							iLocal_335 = 0;
							func_411();
							MISC::SET_BIT(&(Local_105.f_35), 5);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
		}
		if (iVar0 == 1)
		{
			func_432();
		}
		else
		{
			return;
		}
	}
}

void func_411()//Position - 0x18057
{
	Global_26862F.f_110 = 0;
	Global_26862F.f_111 = 0;
	Global_26862F.f_112 = 0;
}

int func_412()//Position - 0x18077
{
	var uVar0;
	
	func_419(&uVar0);
	if (Global_140842 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_418())
	{
		return 1;
	}
	if (Global_258B0A)
	{
		return 1;
	}
	if (func_417())
	{
		return 1;
	}
	if (func_416(157))
	{
		if (!func_415())
		{
			return 1;
		}
	}
	if (func_416(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_413() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_413()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_413()//Position - 0x18101
{
	switch (func_414())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_414()//Position - 0x18135
{
	return Global_6373;
}

bool func_415()//Position - 0x18140
{
	return Global_255C02.f_24B;
}

int func_416(int iParam0)//Position - 0x1814F
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_417()//Position - 0x18166
{
	return Global_25824F;
}

bool func_418()//Position - 0x18172
{
	return Global_255C02.f_246;
}

void func_419(var uParam0)//Position - 0x18181
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 171)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 3731680626:
					func_420(iVar0);
					break;
				
				case 566035618:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar3, 4);
					if (vVar3.z == 2305239146)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_420(int iParam0)//Position - 0x181F4
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_44(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_421(iVar2, &bVar3))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_421(int iParam0, var uParam1)//Position - 0x18275
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_422()//Position - 0x182D4
{
	SYSTEM::WAIT(0);
}

void func_423(int iParam0, bool bParam1, int iParam2)//Position - 0x182E1
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (SCRIPT::_GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_429())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && PLAYER::IS_PLAYER_PLAYING(iParam0))
		{
			iVar25 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar13 || (!func_330(CAM::_0xDC9DA9E8789F5246(), 0) && !func_428()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar18)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_24FBF9[iParam0 /*413*/].f_F4 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_427(iVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar25))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar25, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar25))
				{
					if (!bVar20)
					{
						unk_0x346478B12F69D4E3(iVar25, false);
					}
					ENTITY::_SET_ENTITY_SOMETHING(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x346478B12F69D4E3(iVar25, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar25, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				unk_0x86195BFC9E6E3412(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar25) && PED::_0x7350823473013C02(iVar25))
				{
					PED::_0x4668D80430D6C299(iVar25);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar25, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()) == 0)
				{
					func_426();
					func_425();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar22)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_24FBF9[iParam0 /*413*/].f_F5 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_24B2CE.f_A67)
				{
					Global_24B2CE.f_A67 = 0;
				}
			}
			else
			{
				if (!func_427(iVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar25))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar25, !bVar14, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar25))
					{
						if (!bVar20)
						{
							unk_0x346478B12F69D4E3(iVar25, bVar15);
						}
						if (!bVar15)
						{
							ENTITY::_SET_ENTITY_SOMETHING(iVar25, 1);
						}
					}
					if (func_424(Global_440000.f_2559E))
					{
						unk_0x346478B12F69D4E3(iVar25, true);
					}
				}
				if (Global_140842)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar25, bVar16);
				if (bVar2)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar25) && !PED::IS_PED_IN_ANY_VEHICLE(iVar25, 0))
					{
						BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar26);
		}
	}
}

bool func_424(int iParam0)//Position - 0x186FA
{
	return iParam0 == 17;
}

void func_425()//Position - 0x18707
{
	vector3 vVar0;
	
	Global_252F9E.f_4CC = 0;
	Global_252F9E.f_4CD = 0;
	Global_252F9E.f_4CE = { 9999.9f, 9999.9f, 9999.9f };
	Global_252F9E.f_4D3 = 4294967295;
	Global_252F9E.f_4D4 = 0;
	Global_24B2CE.f_A72 = { vVar0 };
}

void func_426()//Position - 0x18754
{
	Global_24B2CE.f_2B3 = 0;
	Global_24B2CE.f_A9D = 0;
	Global_24B2CE.f_1FD = 0;
	Global_24B2CE.f_255 = 0;
	Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 0;
	Global_24B2CE.f_A70 = 0;
}

int func_427(int iParam0)//Position - 0x18792
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, 2500551826);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_428()//Position - 0x187C3
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

int func_429()//Position - 0x187D4
{
	if (func_430() == 0)
	{
		return 1;
	}
	return 0;
}

int func_430()//Position - 0x187E9
{
	return Global_1406D2.f_12;
}

bool func_431(bool bParam0)//Position - 0x187F7
{
	if (bParam0)
	{
		return (Global_255C02.f_2A1.f_1C && MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_255C02.f_2A1.f_1F);
	}
	return Global_255C02.f_2A1.f_1C;
}

void func_432()//Position - 0x18833
{
	int iVar0;
	
	Global_26862F.f_8 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_392(Local_103))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103) || (!unk_0xDD5EE7D9FC37FA16(Local_103) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_103), 0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_103));
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 22))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 20))
					{
						if (Local_103.f_3 != 7)
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 9))
							{
								NETWORK::_0x5E3AA4CA2B6FB0EE(NETWORK::NET_TO_PED(Local_103));
								BRAIN::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_103), uLocal_121);
								ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_103), 0);
							}
						}
						else if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), 2852500626) != 0 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), 2852500626) != 1)
						{
							NETWORK::_0x5E3AA4CA2B6FB0EE(NETWORK::NET_TO_PED(Local_103));
							if (!WEAPON::HAS_PED_GOT_WEAPON(NETWORK::NET_TO_PED(Local_103), joaat("weapon_pistol"), 0))
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103), joaat("weapon_pistol"), 25000, 1);
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_103), 30);
							}
							func_232(4);
							BRAIN::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_103), 20f, 0);
						}
					}
					else if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 3) || !func_9()) || !func_436())
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/], 9))
						{
							NETWORK::_0x5E3AA4CA2B6FB0EE(NETWORK::NET_TO_PED(Local_103));
							BRAIN::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_103), uLocal_121);
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_103), 0);
						}
					}
					else
					{
						NETWORK::_0x5E3AA4CA2B6FB0EE(NETWORK::NET_TO_PED(Local_103));
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_103), 1);
						BRAIN::TASK_STAND_STILL(NETWORK::NET_TO_PED(Local_103), 4294967295);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_103), 0);
					}
				}
			}
		}
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 3) || !func_9()) || NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_D))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_D))
				{
					ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_103.f_D), 1, 1);
					func_45(&(Local_103.f_D));
				}
			}
		}
		if (((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 3) || !func_9()) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 20)) || NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_E))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_E))
				{
					func_45(&(Local_103.f_E));
				}
			}
		}
		if (func_218() && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_7, 1))
		{
			if (func_287(Global_26862F.f_1264) == 1)
			{
				func_435(Global_26862F.f_1264, 4);
			}
			else
			{
				func_210(Global_26862F.f_1264);
			}
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_7), 1);
		}
		if (Local_103.f_C == 6)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103))
			{
				if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_PED(Local_103), "XP_Blocker"))
				{
					DECORATOR::DECOR_REMOVE(NETWORK::NET_TO_PED(Local_103), "XP_Blocker");
				}
			}
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			EVENT::REMOVE_SHOCKING_EVENT(Local_103.f_1E);
		}
	}
	func_434();
	STREAMING::REMOVE_ANIM_DICT("mp_am_hold_up");
	PLAYER::_0x0032A6DBA562C518();
	if (func_150("SHR_MENU"))
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	}
	Global_26862F.f_9 = func_184();
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_394(Local_105));
	func_166(1, Local_105);
	if (Local_105.f_E != 4294967295)
	{
		func_261(&(Local_105.f_E));
	}
	Global_26862F.f_1B = Local_105;
	if (Global_26862F.f_15FE.f_4 == 1)
	{
		Global_26862F.f_15FE.f_4 = 0;
	}
	if (Global_26862F.f_15FE.f_5 == 1)
	{
		Global_26862F.f_15FE.f_5 = 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_34, 29))
	{
		ENTITY::REMOVE_MODEL_HIDE(vLocal_115, 0.5f, iLocal_131, 1);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105.f_35, 7))
	{
		func_407();
		GRAPHICS::_0x35FB78DC42B7BD21(&(Local_105.f_35), 7);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 6) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 21))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_17, 21))
			{
				iVar0 = 1;
			}
			STATS::_0xCB00196B31C39EB1(30, iLocal_334, iLocal_335, iVar0);
		}
	}
	if (CAM::DOES_CAM_EXIST(Local_105.f_1))
	{
		if (CAM::IS_CAM_ACTIVE(Local_105.f_1))
		{
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
		}
		CAM::DESTROY_CAM(Local_105.f_1, 0);
	}
	func_433();
}

void func_433()//Position - 0x18C4A
{
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_434()//Position - 0x18C56
{
	BRAIN::CLEAR_SEQUENCE_TASK(&uLocal_118);
	BRAIN::CLEAR_SEQUENCE_TASK(&uLocal_119);
}

void func_435(int iParam0, int iParam1)//Position - 0x18C6C
{
	if (func_273(iParam0) != 4294967295)
	{
		if (Global_410C0F[iParam0 /*80*/].f_3D.f_2 == 1)
		{
			Global_410C0F[iParam0 /*80*/].f_3D.f_B = iParam1;
		}
	}
}

int func_436()//Position - 0x18C9C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (func_44(iVar1, 1, 1))
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar2) == iLocal_139)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_437(struct<21> Param0)//Position - 0x18CF6
{
	int iVar0;
	
	func_443(func_444(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(8);
	func_441(0, 4294967295, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_103, 73);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_104, 321);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_440())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_49(func_50(0));
		func_49(func_50(1));
		func_49(func_50(2));
		STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
		STREAMING::REQUEST_ANIM_DICT("mp_missheist_countrybank@cower");
		Local_103.f_2C = 8;
		if (func_439())
		{
			MISC::SET_BIT(&(Local_103.f_18), 11);
		}
		else if (func_438())
		{
			MISC::SET_BIT(&(Local_103.f_18), 12);
		}
		Local_103.f_1C = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
		Local_103.f_1F = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
		if ((func_12() && !func_385(CAM::_0xDC9DA9E8789F5246(), 1)) && !func_385(CAM::_0xDC9DA9E8789F5246(), 2))
		{
			Local_103.f_2B = 2;
			MISC::SET_BIT(&(Local_103.f_19), 0);
		}
		else
		{
			Local_103.f_2B = 1;
		}
		Local_103.f_47 = MISC::GET_RANDOM_FLOAT_IN_RANGE(18f, 28f);
	}
	if (func_93(CAM::_0xDC9DA9E8789F5246()) != 155)
	{
		OBJECT::_0x0BF3B3BD47D79C08(func_50(1), 0);
	}
	iVar0 = func_130(1190, 4294967295, 0);
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 20) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 21))
	{
		MISC::SET_BIT(&(Local_105.f_35), 1);
	}
	Local_104[NETSHOP::_NETWORK_SHOP_BASKET_START() /*10*/].f_4 = 0;
	return 1;
}

int func_438()//Position - 0x18E52
{
	if (Local_105.f_32 >= 0 && Local_105.f_32 <= 9)
	{
		if (func_397(5, 6) || func_397(17, 18))
		{
			return 1;
		}
		return 0;
	}
	if (Local_105.f_32 >= 10 && Local_105.f_32 <= 14)
	{
		if (func_397(9, 10) || func_397(21, 22))
		{
			return 1;
		}
		return 0;
	}
	if (Local_105.f_32 >= 15 && Local_105.f_32 <= 19)
	{
		if (func_397(7, 8) || func_397(19, 20))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_439()//Position - 0x18EFE
{
	if (Local_105.f_32 >= 0 && Local_105.f_32 <= 9)
	{
		if (func_397(6, 7) || func_397(18, 19))
		{
			return 1;
		}
		return 0;
	}
	if (Local_105.f_32 >= 10 && Local_105.f_32 <= 14)
	{
		if (func_397(10, 11) || func_397(22, 23))
		{
			return 1;
		}
		return 0;
	}
	if (Local_105.f_32 >= 15 && Local_105.f_32 <= 19)
	{
		if (func_397(8, 9) || func_397(20, 21))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_440()//Position - 0x18FAA
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_418())
		{
			return 0;
		}
		if (func_416(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_441(int iParam0, int iParam1, bool bParam2)//Position - 0x19003
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_433();
			}
			else
			{
				return 0;
			}
		}
		if (!func_442())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_433();
					}
					else
					{
						return 0;
					}
				}
				if (func_418())
				{
					if (!bParam2)
					{
						func_433();
					}
					else
					{
						return 0;
					}
				}
				if (func_416(155))
				{
					if (!bParam2)
					{
						func_433();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_433();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > 4294967295)
	{
		Global_1406F4 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_433();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_433();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_442()//Position - 0x19118
{
	return Global_140842;
}

void func_443(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x19124
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_433();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_10);
}

int func_444(int iParam0)//Position - 0x19143
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
		
		case 124:
			return 32;
		
		case 125:
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
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 131:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 2;
		
		case 147:
			return 1;
		
		case 143:
			return 2;
		
		case 144:
			return 4;
		
		case 145:
			return 2;
		
		case 146:
			return 2;
		
		case 128:
			return 1;
		
		case 148:
			return 2;
		
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
			return 0;
		
		case 158:
			return 1;
		
		case 155:
			return 4;
		
		case 156:
			return 16;
		
		case 157:
			return 32;
		
		default:
	}
	return 0;
}
