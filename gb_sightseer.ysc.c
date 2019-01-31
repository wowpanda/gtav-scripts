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
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	float fLocal_67 = 0f;
	int iLocal_68[5] = { 0, 0, 0, 0, 0 };
	float fLocal_69 = 0f;
	float fLocal_70 = 0f;
	float fLocal_71 = 0f;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	struct<2> Local_79 = { 0, 0 } ;
	struct<2> Local_80[8];
	struct<2> Local_81 = { 0, 0 } ;
	struct<4> Local_82[8];
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 10;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 2;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 8;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 8;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	float fLocal_127 = 0f;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	struct<60> Local_143 = { 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	struct<6> Local_144[32];
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	var uLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	vector3 vLocal_154 = { 0f, 0f, 0f };
	var uLocal_155 = 0;
	struct<23> Local_156 = { 0, 0, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 1015222895;
	var uLocal_163 = 1021665346;
	var uLocal_164 = 0;
	var uLocal_165 = 255;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = -1;
	var uLocal_175 = 996499522;
	var uLocal_176 = 1002740646;
	var uLocal_177 = 0;
	var uLocal_178 = 60;
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
	var uLocal_239 = 1016296636;
	var uLocal_240 = 220;
	var uLocal_241 = 255;
	var uLocal_242 = 255;
	var uLocal_243 = 255;
	var uLocal_244 = 255;
	var uLocal_245 = 255;
	var uLocal_246 = 255;
	var uLocal_247 = 4096;
	var uLocal_248 = 40;
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
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 4;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 1065353216;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 1056964608;
	var uLocal_427 = 1056964608;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	vector3 vLocal_434[20] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	struct<21> Local_443 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_67 = 0f;
	fLocal_69 = 0f;
	fLocal_70 = 0f;
	fLocal_71 = 0f;
	fLocal_84 = 0.62f;
	fLocal_85 = 0.51f;
	fLocal_86 = 0.55f;
	fLocal_87 = 25f;
	fLocal_127 = ((0.05f + 0.275f) - 0.01f);
	iLocal_428 = 4294967295;
	iLocal_429 = 4294967295;
	iLocal_431 = 4294967295;
	iLocal_432 = 4294967295;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_1072(CAM::_0xDC9DA9E8789F5246(), 0, 1))
	{
		func_1034(ScriptParam_443);
	}
	else
	{
		func_986();
	}
	while (true)
	{
		func_985();
		if (func_977())
		{
			func_986();
		}
		Global_196EF6.f_2 = Local_143.f_3A;
		Global_196EF6.f_3 = Local_143.f_3B;
		switch (func_976(NETSHOP::_NETWORK_SHOP_BASKET_START()))
		{
			case 0:
				if (func_975() == 1)
				{
					func_974();
					if (func_973())
					{
						func_958(142, 1, 4294967295, 0);
						HUD::_0x14621BB1DF14E2B2(3);
						if (!func_957())
						{
							OBJECT::_0x616093EC6B139DD9(CAM::_0xDC9DA9E8789F5246(), joaat("pickup_portable_package"), 0);
						}
					}
					else
					{
						func_958(142, 0, 4294967295, 0);
					}
					Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/] = 1;
				}
				else if (func_975() == 4)
				{
					Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/] = 3;
				}
				break;
			
			case 1:
				if (func_951(1))
				{
					Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/] = 2;
				}
				if (func_975() == 1)
				{
					func_409();
					func_406();
					if (func_973() || func_405())
					{
						func_254(&(Global_14B91C.f_216), &Global_14B91C, 27, &(Global_14B91C.f_1), &(Global_14B91C.f_75), 4294967295, 0, 0);
					}
					func_201();
				}
				else if (func_975() == 4)
				{
					Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/] = 3;
				}
				func_198();
				break;
			
			case 3:
				func_197(&(Local_143.f_31));
				if (func_196(&(Local_143.f_31)))
				{
					Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/] = 4;
				}
				break;
			
			case 2:
				Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/] = 4;
			
			case 4:
				func_986();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_975())
			{
				case 0:
					if (func_189())
					{
						STATS::_0x6DEE77AFF8C21BD1(&(Local_143.f_3A), &(Local_143.f_3B));
						Local_143 = 1;
						Local_143.f_21 = NETSHOP::_NETWORK_SHOP_BASKET_START();
						Local_143.f_22 = CAM::_0xDC9DA9E8789F5246();
						func_958(142, 1, 4294967295, 0);
					}
					break;
				
				case 1:
					func_187();
					func_4();
					if (func_2())
					{
						Local_143 = 4;
					}
					else if (func_1())
					{
						Local_143 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x2BF
{
	if (Global_26862F.f_1313.f_22)
	{
		Global_26862F.f_1313.f_22 = 0;
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x2E2
{
	if (func_3())
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 2))
	{
		return 1;
	}
	return 0;
}

int func_3()//Position - 0x306
{
	return 0;
}

void func_4()//Position - 0x30F
{
	switch (Local_143.f_20)
	{
		case 0:
			func_12();
			func_10();
			func_5();
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 1))
			{
				Local_143.f_20 = 2;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 3))
			{
				Local_143.f_20 = 2;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 4))
			{
				Local_143.f_20 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_5()//Position - 0x380
{
	if (Local_143.f_5 == 0)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 6))
		{
			if (!func_9(&(Local_143.f_35)))
			{
				func_8(&(Local_143.f_35), 0, 0);
			}
			else if (func_6(&(Local_143.f_35), func_7(), 0))
			{
				MISC::SET_BIT(&(Local_143.f_1), 6);
			}
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)//Position - 0x3CF
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_8(uParam0, bParam2, 0);
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

int func_7()//Position - 0x42D
{
	return 600000;
}

void func_8(var uParam0, bool bParam1, bool bParam2)//Position - 0x439
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

bool func_9(var uParam0)//Position - 0x47E
{
	return uParam0->f_1;
}

void func_10()//Position - 0x48A
{
	if (!func_9(&(Local_143.f_33)))
	{
		func_8(&(Local_143.f_33), 0, 0);
	}
	else if (func_6(&(Local_143.f_33), func_11(), 0))
	{
		MISC::SET_BIT(&(Local_143.f_1), 3);
	}
}

int func_11()//Position - 0x4C4
{
	return Global_40001.f_3065;
}

void func_12()//Position - 0x4D3
{
	int iVar0;
	
	if (Local_143.f_21 < 0)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_143.f_21)))
	{
		if (Local_144[Local_143.f_21 /*6*/].f_4 > 0)
		{
			iVar0 = (Local_144[Local_143.f_21 /*6*/].f_4 - 1);
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_4, iVar0))
			{
				Local_143.f_24 = iVar0;
				if (func_13())
				{
					MISC::SET_BIT(&(Local_143.f_4), iVar0);
				}
			}
		}
	}
}

int func_13()//Position - 0x538
{
	int iVar0;
	struct<35> Var1;
	vector3 vVar2;
	
	iVar0 = joaat("prop_ld_case_01");
	Var1.f_5 = 1115815936;
	Var1.f_D = 2;
	Var1.f_14 = 2;
	Var1.f_20 = 3212836864;
	Var1.f_22 = 1;
	Var1.f_3 = 0;
	Var1.f_5 = 10f;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_143.f_3))
	{
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				vVar2 = { func_186() };
				if (func_14(vVar2, 5f, &vLocal_154, &uLocal_155, &Var1))
				{
					Local_143.f_3 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_package"), vLocal_154, true, iVar0));
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_143.f_3), vLocal_154 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_143.f_3), true);
					OBJECT::_SET_OBJECT_SOMETHING(NETWORK::NET_TO_OBJ(Local_143.f_3), 1);
					OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_143.f_3), 1);
					ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(Local_143.f_3), false);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_143.f_3));
					func_8(&(Local_143.f_37), 0, 0);
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_143.f_3))
	{
		return 1;
	}
	return 0;
}

int func_14(vector3 vParam0, float fParam1, var uParam2, var uParam3, var uParam4)//Position - 0x65B
{
	struct<17> Var0;
	struct<18> Var1;
	vector3 vVar2;
	
	if (uParam4->f_5 > (fParam1 - 20f))
	{
		uParam4->f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_10 = 5;
	Var0.f_16 = 5;
	Var0.f_1C = 5;
	Var1.f_10 = 1;
	Var1.f_16 = 1;
	Var1.f_17 = 1;
	Var1.f_18 = 1;
	Var1 = { vParam0 };
	Var1.f_3 = uParam4->f_B;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_F = 0;
	Var1.f_10 = 1;
	Var1.f_11 = 0;
	if (func_15(&Var1, uParam4, &Var0))
	{
		if ((uParam4->f_C > 0f && uParam4->f_7) && uParam4->f_8)
		{
			vVar2 = { vParam0 - Var0[0 /*3*/] };
			if (vVar2.z > uParam4->f_C)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_10[0] = uParam4->f_B;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_10[0];
		return 1;
	}
	return 0;
}

int func_15(var uParam0, var uParam1, var uParam2)//Position - 0x75B
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	bool bVar13;
	struct<56> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_24B2CE.f_991 == *uParam0 || !Global_24B2CE.f_991.f_1 == uParam0->f_1) || !Global_24B2CE.f_991.f_2 == uParam0->f_2) || !Global_24B2CE.f_994 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_24B2CE.f_99F == uParam0->f_8 || !Global_24B2CE.f_99F.f_1 == uParam0->f_8.f_1) || !Global_24B2CE.f_99F.f_2 == uParam0->f_8.f_2) || !Global_24B2CE.f_9A2 == uParam0->f_B) || !Global_24B2CE.f_9A2.f_1 == uParam0->f_B.f_1) || !Global_24B2CE.f_9A2.f_2 == uParam0->f_B.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_24B2CE.f_99F == uParam0->f_8 || !Global_24B2CE.f_99F.f_1 == uParam0->f_8.f_1) || !Global_24B2CE.f_99F.f_2 == uParam0->f_8.f_2) || !Global_24B2CE.f_9A2 == uParam0->f_B) || !Global_24B2CE.f_9A2.f_1 == uParam0->f_B.f_1) || !Global_24B2CE.f_9A2.f_2 == uParam0->f_B.f_2) || !Global_24B2CE.f_9A5 == uParam0->f_E)
			{
				bVar13 = true;
			}
			break;
	}
	if (bVar13)
	{
		if (Global_24B2CE.f_98F == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_998))
			{
				if (Global_24B2CE.f_998 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_995) < func_185(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_995) < func_185(0))
				{
					return 0;
				}
			}
			NETWORK::_0xFB8F2A6F3DF08CBE();
			PED::_0xFEE4A5459472A9F8();
			func_184();
		}
		Global_24B2CE.f_98F = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_995) > func_185(0))
	{
		Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
		func_178();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_B)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_B;
			}
			else
			{
				fVar2 = uParam0->f_B;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_B.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_B.f_1;
			}
			else
			{
				fVar3 = uParam0->f_B.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_B)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_E));
				fVar4 = (uParam0->f_B + (0.5f * uParam0->f_E));
			}
			else
			{
				fVar2 = (uParam0->f_B - (0.5f * uParam0->f_E));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_E));
			}
			if (uParam0->f_8.f_1 < uParam0->f_B.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_E));
				fVar5 = (uParam0->f_B.f_1 + (0.5f * uParam0->f_E));
			}
			else
			{
				fVar3 = (uParam0->f_B.f_1 - (0.5f * uParam0->f_E));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_E));
			}
			break;
	}
	PATHFIND::_0x07FB139B592FA687(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		vVar6 = { *uParam0 };
	}
	else
	{
		vVar6 = { uParam0->f_8 + uParam0->f_B * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar7 = { vVar6 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar8 = { vVar6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_24B2CE.f_98F)
	{
		NETWORK::_0xFB8F2A6F3DF08CBE();
		PED::_0xFEE4A5459472A9F8();
		func_184();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_177(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, 4294967295, 1, uParam1->f_5, uParam0->f_11, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::_0x3C67506996001F5E())
		{
			Global_24B2CE.f_9A6 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_24B2CE.f_991 = { *uParam0 };
					Global_24B2CE.f_994 = uParam0->f_4;
					break;
				
				case 1:
					Global_24B2CE.f_99F = { uParam0->f_8 };
					Global_24B2CE.f_9A2 = { uParam0->f_B };
					Global_24B2CE.f_9A5 = 0f;
					Global_24B2CE.f_991 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_24B2CE.f_99F = { uParam0->f_8 };
					Global_24B2CE.f_9A2 = { uParam0->f_B };
					Global_24B2CE.f_9A5 = uParam0->f_E;
					Global_24B2CE.f_991 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_176(vVar6.x, vVar6.y);
			}
			Global_24B2CE.f_990 = 1;
			Global_24B2CE.f_98F = 1;
			Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
			Global_24B2CE.f_995 = HUD::_0x13C4B962653A5280();
			Global_24B2CE.f_998 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_24B2CE.f_98F)
	{
		if (Global_24B2CE.f_990 == 1)
		{
			if (PATHFIND::_0xF7B79A50B905A30D(fVar2, fVar3, fVar4, fVar5) || NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_996) > 5000)
			{
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_15)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_12 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_A = 1;
					Var14.f_D = 1;
					Var14.f_F = 1;
					Var14.f_10 = 1;
					Var14.f_1F = 1;
					Var14.f_22 = joaat("TAILGATER");
					Var14.f_26 = 2;
					Var14.f_2D = 2;
					Var14.f_31 = 1123024896;
					Var14.f_35 = 999;
					Var14.f_36 = 1176256410;
					Var14.f_37 = 1;
					Var14.f_38 = 1;
					Var14.f_39 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_B = uParam1->f_9;
					Var14.f_12 = 1;
					if (uParam1->f_20 > 0f)
					{
						Var14.f_6 = uParam1->f_20;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_13 = { *uParam0 };
							Var14.f_19 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_13 = { uParam0->f_8 };
							Var14.f_16 = { uParam0->f_B };
							Var14.f_19 = 0f;
							break;
						
						case 2:
							Var14.f_13 = { uParam0->f_8 };
							Var14.f_16 = { uParam0->f_B };
							Var14.f_19 = uParam0->f_E;
							break;
					}
					Var14.f_1A = uParam0->f_7;
					Var14.f_C = uParam0->f_F;
					if (uParam0->f_15)
					{
						Var14.f_1E = 1;
						Var14.f_20 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_26[iVar9 /*3*/] = { uParam1->f_D[iVar9 /*3*/] };
						Var14.f_2D[iVar9] = uParam1->f_14[iVar9];
						iVar9++;
					}
					Var14.f_33 = uParam1->f_1E;
					Var14.f_37 = uParam0->f_10;
					if (uParam0->f_1A)
					{
						Var14.f_A = 0;
					}
					if (func_175(Global_440000.f_2559E))
					{
						Var14.f_9 = 1;
					}
					func_150(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_149(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_24B2CE.f_990 = 9;
				}
				else
				{
					Global_24B2CE.f_990 = 2;
				}
			}
		}
		if (Global_24B2CE.f_990 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar7, vVar8) || NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_996) > 15000) || PATHFIND::_0x01708E8DD3FF8C65(vVar7, vVar8) == 0)
			{
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				if (uParam0->f_5 && !func_146(CAM::_0xDC9DA9E8789F5246(), 0))
				{
					Global_24B2CE.f_990 = 3;
				}
				else
				{
					Global_24B2CE.f_990 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_99A) > 7000)
			{
				func_145(vVar6.x, vVar6.y);
			}
		}
		if (Global_24B2CE.f_990 == 3)
		{
			if (func_144() || NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_996) > 10000)
			{
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				Global_24B2CE.f_990 = 4;
			}
		}
		if (Global_24B2CE.f_990 == 4)
		{
			if (PED::_0x3C67506996001F5E())
			{
				NETWORK::_0xFB8F2A6F3DF08CBE();
				PED::_0xFEE4A5459472A9F8();
			}
			else
			{
				iVar0 = 0;
				func_178();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (NETWORK::_0x5A6FFA2433E2F14C(CAM::_0xDC9DA9E8789F5246(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
								Global_24B2CE.f_990 = 5;
							}
							break;
						
						case 1:
							func_143(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
							if (NETWORK::_0x4BA92A18502BCA61(CAM::_0xDC9DA9E8789F5246(), vVar10, vVar11, uVar12, *uParam1, iVar0))
							{
								Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
								Global_24B2CE.f_990 = 5;
							}
							break;
						
						case 2:
							if (NETWORK::_0x4BA92A18502BCA61(CAM::_0xDC9DA9E8789F5246(), uParam0->f_8, uParam0->f_B, uParam0->f_E, *uParam1, iVar0))
							{
								Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
								Global_24B2CE.f_990 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_A)
					{
						iVar0 += 32;
					}
					Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
					Global_24B2CE.f_990 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_143(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
							PED::_0xB2AFF10216DEFA2F(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_B, uParam0->f_E, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_24B2CE.f_990 == 5)
		{
			if (func_68(uParam2, uParam0, uParam1, 0))
			{
				if (Global_24B2CE.f_9AA.f_5)
				{
					Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
					Global_24B2CE.f_990 = 6;
				}
				else
				{
					Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						}
					}
					Global_24B2CE.f_990 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_996) > 20000)
			{
				NETWORK::_0xFB8F2A6F3DF08CBE();
				PED::_0xFEE4A5459472A9F8();
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				Global_24B2CE.f_990 = 8;
			}
		}
		if (Global_24B2CE.f_990 == 6)
		{
			iVar0 = 0;
			Global_24B2CE.f_9AA.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_67(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_66(uParam0->f_8, uParam0->f_B, uParam0->f_E))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_A)
			{
				iVar0 += 32;
			}
			if (uParam0->f_F)
			{
				iVar0 += 16;
			}
			Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
			Global_24B2CE.f_990 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_143(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
					PED::_0xB2AFF10216DEFA2F(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_B, uParam0->f_E, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_24B2CE.f_990 == 7)
		{
			if (func_68(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_24B2CE.f_A30[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_149(Global_24B2CE.f_A30[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_24B2CE.f_A30[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_64(Global_24B2CE.f_A30[iVar9 /*3*/], uParam0->f_8, uParam0->f_B, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_24B2CE.f_A30[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_24B2CE.f_A30[iVar9 /*3*/], uParam0->f_8, uParam0->f_B, uParam0->f_E, 0, true))
										{
											*(uParam2[0 /*3*/]) = { Global_24B2CE.f_A30[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
								break;
						}
						func_18(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						vVar1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_10[iVar9] = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						iVar9++;
					}
				}
				Global_24B2CE.f_990 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_996) > 20000)
			{
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				Global_24B2CE.f_990 = 8;
			}
		}
		if (Global_24B2CE.f_990 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_17(Global_24B2CE.f_1E3))
				{
				}
			}
			else if (Global_24B2CE.f_9AA.f_2)
			{
				func_16(uParam2, &(Global_24B2CE.f_9AA.f_6));
			}
			else
			{
				if (uParam0->f_F)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_24B2CE.f_991 };
				func_18(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
			Global_24B2CE.f_990 = 9;
		}
		if (Global_24B2CE.f_990 == 9)
		{
			Global_24B2CE.f_98F = 0;
			NETWORK::_0xFB8F2A6F3DF08CBE();
			PED::_0xFEE4A5459472A9F8();
			func_184();
			return 1;
		}
		Global_24B2CE.f_995 = HUD::_0x13C4B962653A5280();
	}
	return 0;
}

void func_16(var uParam0, var uParam1)//Position - 0x1714
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_10[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_16[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_17(int iParam0)//Position - 0x175E
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_18(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x177D
{
	vector3 vVar0;
	var uVar1;
	struct<56> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_A = 1;
	Var2.f_D = 1;
	Var2.f_F = 1;
	Var2.f_10 = 1;
	Var2.f_1F = 1;
	Var2.f_22 = joaat("TAILGATER");
	Var2.f_26 = 2;
	Var2.f_2D = 2;
	Var2.f_31 = 1123024896;
	Var2.f_35 = 999;
	Var2.f_36 = 1176256410;
	Var2.f_37 = 1;
	Var2.f_38 = 1;
	Var2.f_39 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_16)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar7 = { *uParam5 };
						if (func_67(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						vVar7 = { uParam5->f_8 + uParam5->f_B * Vector(0.5f, 0.5f, 0.5f) };
						if (func_66(uParam5->f_8, uParam5->f_B, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						vVar7 = { uParam5->f_8 + uParam5->f_B * Vector(0.5f, 0.5f, 0.5f) };
						if (func_66(uParam5->f_8, uParam5->f_B, uParam5->f_E) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_23(*uParam0, &vVar0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		vVar0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_A = 0;
		}
		else
		{
			Var2.f_A = 1;
		}
		Var2.f_D = uParam5->f_F;
		Var2.f_F = iParam3;
		if (uParam6->f_20 > 0f)
		{
			Var2.f_6 = uParam6->f_20;
		}
		if (bParam4)
		{
			Var2.f_12 = 1;
			Var2.f_1A = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_13 = { *uParam5 };
					Var2.f_19 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_13 = { uParam5->f_8 };
					Var2.f_16 = { uParam5->f_B };
					Var2.f_19 = 0f;
					break;
				
				case 2:
					Var2.f_13 = { uParam5->f_8 };
					Var2.f_16 = { uParam5->f_B };
					Var2.f_19 = uParam5->f_E;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_26[iVar4 /*3*/] = { uParam6->f_D[iVar4 /*3*/] };
			Var2.f_2D[iVar4] = uParam6->f_14[iVar4];
			iVar4++;
		}
		Var2.f_33 = uParam6->f_1E;
		Var2.f_37 = uParam5->f_10;
		if (func_20(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			Var2.f_9 = 1;
		}
		func_150(&vVar0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_B };
				break;
			
			case 2:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_B };
				fVar10 = uParam5->f_E;
				break;
		}
		if (!func_19(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
		{
			if (func_23(*uParam0, &vVar0, iVar6, iParam3, 0))
			{
				if (!func_19(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar8 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0, 0))
					{
						vVar0.z = uVar3;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar8 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0, 0))
				{
					vVar0.z = uVar3;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_24B2CE.f_292 = 1;
}

int func_19(vector3 vParam0, int iParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x1BC6
{
	switch (iParam1)
	{
		case 0:
			if (SYSTEM::VDIST(vParam0, vParam2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_64(vParam0, vParam2, vParam3, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam2, vParam3, fParam4, 0, true);
			break;
	}
	return 0;
}

int func_20(int iParam0, bool bParam1)//Position - 0x1C33
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("TERBYTE"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_22())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_22())
			{
				return func_21(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 12;
			}
		}
	}
	return 0;
}

int func_21(int iParam0)//Position - 0x1CC1
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

int func_22()//Position - 0x201B
{
	return 4294967295;
}

int func_23(vector3 vParam0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2024
{
	if (func_63(vParam0, uParam1))
	{
		if (func_24(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(vParam0, 0, uParam1, iParam2))
	{
		if (func_24(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_24(vector3 vParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x2080
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = SYSTEM::VDIST(vParam0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_44(Global_24B2CE.f_1FA, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_31(*uParam1, 1056964608))
			{
				if (!func_25(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_25(var uParam0, bool bParam1)//Position - 0x2105
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { *uParam0 };
	iVar2 = func_30(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_24CAF9[iVar2])
	{
		if (func_29(vVar1, &(Global_24C681[iVar2 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_26(&vVar1, Global_24C681[iVar2 /*127*/][iVar0 /*7*/], Global_24C681[iVar2 /*127*/][iVar0 /*7*/].f_3, Global_24C681[iVar2 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_24CAF9[8])
	{
		if (func_29(vVar1, &(Global_24C681[8 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_26(&vVar1, Global_24C681[8 /*127*/][iVar0 /*7*/], Global_24C681[8 /*127*/][iVar0 /*7*/].f_3, Global_24C681[8 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_26(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x2212
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	
	vVar0 = { vParam2 - vParam1 };
	vVar0.z = 0f;
	vVar1 = { *uParam0 - vParam1 };
	vVar1.z = 0f;
	vVar2 = { func_28(0f, 0f, 1f, vVar0) };
	vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
	fVar3 = (SYSTEM::VMAG(vVar1) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar0.x, vVar0.y, vVar1.x, vVar1.y)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_27(vVar2, vVar1) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_27(vVar2, vVar1) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar4 = { *uParam0 + vVar2 };
		fVar6 = SYSTEM::VDIST(vParam1.x, vParam1.y, 0f, vParam2.x, vParam2.y, 0f);
		vVar7 = { vParam1 + vParam2 / Vector(2f, 2f, 2f) };
		vVar7.z = 0f;
		vVar2 = { func_28(0f, 0f, 1f, vVar0) };
		vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
		vVar2 = { vVar2 * FtoV((fParam3 * 0.5f)) };
		vVar8 = { vVar7 - vVar2 };
		vVar9 = { vVar7 + vVar2 };
		vVar10 = { vVar9 - vVar8 };
		vVar10.z = 0f;
		vVar11 = { *uParam0 - vVar8 };
		vVar11.z = 0f;
		vVar2 = { func_28(0f, 0f, 1f, vVar10) };
		vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
		fVar3 = (SYSTEM::VMAG(vVar11) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.x, vVar10.y, vVar11.x, vVar11.y)));
		if (!bParam5)
		{
			if (func_27(vVar2, vVar11) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_27(vVar2, vVar11) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar5 = { *uParam0 + vVar2 };
		if (SYSTEM::VDIST(vVar4, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(vVar5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar4 };
		}
		else
		{
			*uParam0 = { vVar5 };
		}
	}
}

float func_27(vector3 vParam0, vector3 vParam1)//Position - 0x24E1
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_28(vector3 vParam0, vector3 vParam1)//Position - 0x2502
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

bool func_29(vector3 vParam0, var uParam1)//Position - 0x253B
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, true);
}

int func_30(struct<2> Param0, var uParam1)//Position - 0x255B
{
	if (Param0.f_1 > Global_24CB03[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_24CB03[1])
	{
		if (Param0 < Global_24CB07[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_24CB03[2])
	{
		if (Param0 < Global_24CB07[1])
		{
			return 3;
		}
		else if (Param0 < Global_24CB07[2])
		{
			return 4;
		}
		else if (Param0 < Global_24CB07[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_31(vector3 vParam0, float fParam1)//Position - 0x25F6
{
	int iVar0;
	
	if (func_41(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		if (Global_440000.f_E78A > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_440000.f_E78A)
			{
				if (Global_440000.f_E78B[iVar0 /*80*/].f_7 != 0)
				{
					if (func_32(vParam0, Global_440000.f_E78B[iVar0 /*80*/], Global_440000.f_E78B[iVar0 /*80*/].f_6, Global_440000.f_E78B[iVar0 /*80*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_440000.f_D972 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_440000.f_D972)
			{
				if (Global_440000.f_D975[iVar0 /*149*/].f_10 != 0)
				{
					if (func_32(vParam0, Global_440000.f_D975[iVar0 /*149*/], Global_440000.f_D975[iVar0 /*149*/].f_3, Global_440000.f_D975[iVar0 /*149*/].f_10, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_440000.f_136F4 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_440000.f_136F4)
			{
				if (Global_440000.f_136F8[iVar0 /*217*/].f_C != 0)
				{
					if (func_32(vParam0, Global_440000.f_136F8[iVar0 /*217*/], Global_440000.f_136F8[iVar0 /*217*/].f_3, Global_440000.f_136F8[iVar0 /*217*/].f_C, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_32(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)//Position - 0x277F
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (SYSTEM::VDIST(vParam0, vParam1) < func_40(iParam3, 1008981770))
	{
		func_33(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar1, fVar2, 0, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_33(vector3 vParam0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)//Position - 0x27D2
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 1f, 0f };
	func_39(&vVar0, 0f, 0f, fParam1);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_34(iParam2, &vVar1, &vVar2, 1086324736, 1080033280, 1077936128);
	vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
	vVar3.z = (vVar3.z - ((0.5f * MISC::ABSF((vVar2.z - vVar1.z))) + fParam6));
	vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
	vVar4.z = (vVar4.z + ((0.5f * MISC::ABSF((vVar2.z - vVar1.z))) + fParam6));
	*uParam3 = { vVar3 };
	*uParam4 = { vVar4 };
	*uParam5 = MISC::ABSF((vVar2.x - vVar1.x));
}

void func_34(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x289E
{
	int iVar0;
	
	if (NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_37(iParam0);
		if (iVar0 != 0)
		{
			func_35(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_35(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x295D
{
	int iVar0;
	
	func_36(iParam0, &Global_1413D0);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(Global_1413D0[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1413D0[iVar0], &(Global_1413D4[iVar0 /*3*/]), &(Global_1413DB[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1413D4[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1413DB[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1413D4[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1413DB[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1413D4[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1413DB[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1413D4[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1413DB[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1413E2[iVar0] = (Global_1413DB[iVar0 /*3*/] - Global_1413D4[iVar0 /*3*/]);
		Global_1413E5[iVar0] = (Global_1413DB[iVar0 /*3*/].f_1 - Global_1413D4[iVar0 /*3*/].f_1);
		Global_1413E8[iVar0] = (Global_1413DB[iVar0 /*3*/].f_2 - Global_1413D4[iVar0 /*3*/].f_2);
		if (Global_1413E2[iVar0] > Global_1413EB)
		{
			Global_1413EB = Global_1413E2[iVar0];
		}
		if (Global_1413E8[iVar0] > Global_1413EC)
		{
			Global_1413EC = Global_1413E8[iVar0];
		}
		iVar0++;
	}
	Global_1413ED = (Global_1413EB * -0.5f);
	Global_1413F0 = (Global_1413EB * 0.5f);
	Global_1413ED.f_1 = ((((0.5f * Global_1413E5[0]) + Global_1413E5[1]) + Global_1413D0.f_3) * -1f);
	Global_1413F0.f_1 = (0.5f * Global_1413E5[0]);
	Global_1413ED.f_2 = (Global_1413E8[0] * -0.5f);
	Global_1413F0.f_2 = (Global_1413E8[0] * 0.5f);
	*uParam1 = { Global_1413ED };
	*uParam2 = { Global_1413F0 };
}

void func_36(int iParam0, var uParam1)//Position - 0x2B69
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("HAULER2");
			(*uParam1)[1] = joaat("TRAILERLARGE");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("PHANTOM3");
			(*uParam1)[1] = joaat("TRAILERLARGE");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("NIGHTSHARK");
			(*uParam1)[1] = joaat("TRAILERSMALL2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_37(int iParam0)//Position - 0x2BEA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_38(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_38(int iParam0)//Position - 0x2C19
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_39(var uParam0, vector3 vParam1)//Position - 0x2C2B
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = SYSTEM::COS(vParam1.x);
	fVar1 = SYSTEM::SIN(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.y);
	fVar1 = SYSTEM::SIN(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.z);
	fVar1 = SYSTEM::SIN(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

float func_40(int iParam0, float fParam1)//Position - 0x2D02
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_34(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	vVar2 = { vVar1 - vVar0 };
	fVar3 = (SYSTEM::SQRT(((((vVar2.x * 0.5f) * (vVar2.x * 0.5f)) + ((vVar2.y * 0.5f) * (vVar2.y * 0.5f))) + ((vVar2.z * 0.5f) * (vVar2.z * 0.5f)))) + fParam1);
	return fVar3;
}

int func_41(int iParam0, bool bParam1)//Position - 0x2D82
{
	if (bParam1)
	{
		if (func_42(iParam0))
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

bool func_42(int iParam0)//Position - 0x2DAE
{
	return func_43(iParam0);
}

bool func_43(int iParam0)//Position - 0x2DBC
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_D.f_1, 0);
}

int func_44(vector3 vParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x2DD6
{
	int iVar0;
	bool bVar1;
	
	if (func_57(vParam0))
	{
		if (func_56(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_47(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_46(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_45(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

void func_45(var uParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4, float fParam5)//Position - 0x2E92
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_39(&vVar0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_39(&vVar0, 0f, 0f, fParam5);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		vVar1 = { vParam1 + vVar0 };
	}
	else
	{
		vVar1 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar1.x;
	uParam0->f_1 = vVar1.y;
}

int func_46(vector3 vParam0, float fParam1)//Position - 0x2F3A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(vParam0, Global_24B2CE.f_A9F[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_47(var uParam0, bool bParam1, bool bParam2)//Position - 0x2F75
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_52(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_49(&vVar2, &(Global_24B2CE.f_16A[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_52(vVar2, &uVar1) || func_48(vVar2))
			{
				vVar2 = { *uParam0 };
				func_49(&vVar2, &(Global_24B2CE.f_16A[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_48(vector3 vParam0)//Position - 0x2FF9
{
	float fVar0;
	
	if (Global_24B2CE.f_24B > 0f)
	{
		fVar0 = SYSTEM::VDIST(vParam0, Global_24B2CE.f_248);
		if (fVar0 < Global_24B2CE.f_24B)
		{
			return 1;
		}
	}
	return 0;
}

void func_49(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x3032
{
	if (bParam4)
	{
		switch (uParam1->f_A)
		{
			case 0:
				*uParam0 = { func_51(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_24B2CE.f_A9D) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_51(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_51(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_A)
		{
			case 0:
				func_45(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_24B2CE.f_A9D) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_50(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_26(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_50(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)//Position - 0x313C
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	vVar0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	vVar0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				vVar0.x = (Param1 - fParam5);
			}
			else
			{
				vVar0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			vVar0.y = (Param1.f_1 - fParam5);
		}
		else
		{
			vVar0.y = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			vVar0.x = (Param3 + fParam5);
		}
		else
		{
			vVar0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		vVar0.y = (Param3.f_1 + fParam5);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam5);
	}
	*uParam0 = { vVar0 };
}

Vector3 func_51(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, bool bParam6)//Position - 0x323B
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam4)
	{
		case 0:
			func_45(&vParam0, vParam1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_50(&vParam0, vParam1, vParam2, fParam5, bParam6);
			break;
		
		case 2:
			func_26(&vParam0, vParam1, vParam2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_149(vVar1, vParam1, fParam3, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_64(vVar1, vParam1, vParam2, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, vParam1, vParam2, fParam3, 0, true))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_52(vector3 vParam0, var uParam1)//Position - 0x333E
{
	int iVar0;
	int iVar1;
	
	if (func_55())
	{
		return 0;
	}
	iVar1 = func_54();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_24B2CE.f_16A[iVar0 /*12*/].f_9 == 1)
		{
			if (func_53(vParam0, &(Global_24B2CE.f_16A[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_53(vector3 vParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x33A2
{
	switch (uParam1->f_A)
	{
		case 0:
			return func_149(vParam0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_24B2CE.f_A9D) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_64(vParam0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false);
			}
			else if (bParam3)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false) && !(vParam0.z < uParam1->f_2 && vParam0.z < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false) && !(vParam0.z > uParam1->f_2 && vParam0.z > uParam1->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, true);
			}
			break;
	}
	return 0;
}

int func_54()//Position - 0x3503
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_24B2CE.f_16A[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_55()//Position - 0x3536
{
	return Global_197632.f_1C;
}

int func_56(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3544
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_24C5D6[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_24C5D6[iVar0 /*17*/].f_10))
			{
				if (func_53(*uParam0, &(Global_24C5D6[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_24C5D6[iVar0 /*17*/].f_C)
						{
							*uParam0 = { Global_24C5D6[iVar0 /*17*/].f_D };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_49(&vVar1, &(Global_24C5D6[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_56(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_49(&vVar1, &(Global_24C5D6[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_57(vector3 vParam0)//Position - 0x361F
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_24B2CE.f_1FD && !Global_24B2CE.f_1FE)
	{
		if (!Global_24B2CE.f_2C.f_13A)
		{
			if (!func_61(CAM::_0xDC9DA9E8789F5246(), 1))
			{
				return 1;
			}
			if (!func_60(vParam0, 1008981770))
			{
				if (!func_56(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_56(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_59(vParam0, 1008981770);
				if (iVar0 > 4294967295)
				{
					vVar1 = { func_58(&(Global_24B2CE.f_2C[iVar0 /*12*/])) };
					if (!func_56(&vVar1, 0, 0, 0, 1))
					{
						if (!func_56(&vParam0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_58(var uParam0)//Position - 0x36DF
{
	switch (uParam0->f_A)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_59(vector3 vParam0, float fParam1)//Position - 0x3728
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_24B2CE.f_2C[iVar0 /*12*/].f_9)
		{
			if (func_53(vParam0, &(Global_24B2CE.f_2C[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_60(vector3 vParam0, float fParam1)//Position - 0x3770
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_24B2CE.f_2C[iVar0 /*12*/].f_9)
		{
			if (func_53(vParam0, &(Global_24B2CE.f_2C[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_61(int iParam0, bool bParam1)//Position - 0x37B7
{
	if (Global_1406BF != 0)
	{
		return func_62(iParam0) != 0;
	}
	return func_41(iParam0, bParam1);
}

int func_62(int iParam0)//Position - 0x37DD
{
	if (func_1072(iParam0, 0, 1))
	{
		return Global_24FBF9[iParam0 /*413*/].f_1;
	}
	return 0;
}

int func_63(vector3 vParam0, var uParam1)//Position - 0x37FF
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = 4294967295;
	fVar2 = 999999.9f;
	if (Global_24B2CE.f_8C5 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_24B2CE.f_8C5)
		{
			fVar3 = SYSTEM::VDIST(Global_24B2CE.f_8C6[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == 4294967295)
		{
			*uParam1 = { Global_24B2CE.f_8C6[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_64(vector3 vParam0, vector3 vParam1, vector3 vParam2, bool bParam3, bool bParam4)//Position - 0x3879
{
	func_65(&vParam1, &vParam2);
	if (((!vParam0.x >= vParam1.x || !vParam0.y >= vParam1.y) || !vParam0.x <= vParam2.x) || !vParam0.y <= vParam2.y)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (vParam0.z >= vParam1.z)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (vParam0.z <= vParam2.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam1.z && vParam0.z <= vParam2.z)
	{
		return 1;
	}
	return 0;
}

void func_65(var uParam0, var uParam1)//Position - 0x3924
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_66(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x3986
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (vParam0.x > vParam1.x)
	{
		vVar1.x = vParam0.x;
		vVar0.x = vParam1.x;
	}
	else
	{
		vVar1.x = vParam1.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam1.y)
	{
		vVar1.y = vParam0.y;
		vVar0.y = vParam1.y;
	}
	else
	{
		vVar1.y = vParam1.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam1.z)
	{
		vVar1.z = vParam0.z;
		vVar0.z = vParam1.z;
	}
	else
	{
		vVar1.z = vParam1.z;
		vVar0.z = vParam0.z;
	}
	if (SYSTEM::VMAG(vVar1 - vVar0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_67(float fParam0)//Position - 0x3A31
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_68(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x3A49
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_24B2CE.f_9AA.f_1 == 0 && Global_24B2CE.f_9AA == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::_0x3C891A251567DFCE(&(Global_24B2CE.f_9AA.f_1)))
			{
				case 0:
					func_141(uParam1, uParam2);
					if (!Global_24B2CE.f_9AA.f_2)
					{
						if (uParam2->f_7 && Global_24B2CE.f_225.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_10[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_15)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_12 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_24B2CE.f_991 };
							}
							if (uParam1->f_5 && func_17(Global_24B2CE.f_1E3))
							{
								if (!Global_24B2CE.f_9AA.f_5)
								{
									Global_24B2CE.f_9AA.f_5 = 1;
								}
								else
								{
									func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_18(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_141(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::_0x3C67506996001F5E())
		{
			if (!PED::_0xF445DE8DA80A1792())
			{
				if (PED::_0xA586FBEB32A53DBB())
				{
					func_141(uParam1, uParam2);
					Global_24B2CE.f_9AA.f_1 = PED::_0xA635C11B8C44AFC2();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::_0xFEE4A5459472A9F8();
				func_141(uParam1, uParam2);
				if (!Global_24B2CE.f_9AA.f_2)
				{
					Global_24B2CE.f_9AA.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_138(Global_24B2CE.f_225, &(Global_24B2CE.f_9AA.f_39), &(Global_24B2CE.f_9AA.f_5A));
	}
	if (uParam2->f_7 && !Global_24B2CE.f_9AA.f_4)
	{
		Global_24B2CE.f_9AA.f_4 = 1;
		func_76(*uParam1, uParam1->f_3, uParam1, uParam2, 1, 4294967295);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_24B2CE.f_9AA.f_1 > 0 || Global_24B2CE.f_9AA > 0)
	{
		if (uParam1->f_5 || PED::_0x3C67506996001F5E())
		{
			iVar2 = 0;
			while (iVar2 < Global_24B2CE.f_9AA.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_24B2CE.f_9AA.f_3)
					{
						iVar2 = Global_24B2CE.f_9AA.f_3 + 1;
					}
					if (iVar2 > (Global_24B2CE.f_9AA.f_1 - 1))
					{
						iVar2 = (Global_24B2CE.f_9AA.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, &vVar0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						PED::_0x280C7E3AC7F56E90(iVar2, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = NETWORK::_0x6C34F1208B8923FD(iVar2);
					}
					else
					{
						PED::_0xB782F8238512BAD5(iVar2, &iVar3);
					}
					func_76(vVar0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_24B2CE.f_9AA.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_24B2CE.f_9AA.f_1;
		}
		if (Global_24B2CE.f_9AA.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_24B2CE.f_B37)
			{
				func_70(&(Global_24B2CE.f_9AA.f_6[0 /*10*/]), &(Global_24B2CE.f_9AA.f_6[1 /*10*/]), &(Global_24B2CE.f_9AA.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_17(Global_24B2CE.f_1E3))
			{
				if (Global_24B2CE.f_9AA.f_2)
				{
					func_16(uParam0, &(Global_24B2CE.f_9AA.f_6));
					func_69(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_24B2CE.f_991 };
					func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_69(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_24B2CE.f_9AA.f_2)
			{
				func_16(uParam0, &(Global_24B2CE.f_9AA.f_6));
				func_69(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_24B2CE.f_9AA.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_25(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_69(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_24B2CE.f_991 };
					func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_69(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_24B2CE.f_991 };
				func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_69(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_24B2CE.f_991 };
		if (uParam1->f_5 && func_17(Global_24B2CE.f_1E3))
		{
			if (!Global_24B2CE.f_9AA.f_5)
			{
				Global_24B2CE.f_9AA.f_5 = 1;
			}
			else
			{
				func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_F)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_18(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		func_69(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_69(vector3 vParam0)//Position - 0x4011
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_24B2CE.f_A30[(3 - iVar0) /*3*/] = { Global_24B2CE.f_A30[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_24B2CE.f_A30[0 /*3*/] = { vParam0 };
}

void func_70(var uParam0, var uParam1, var uParam2)//Position - 0x4061
{
	if (func_17(Global_24B2CE.f_1E3) && func_75() < 4096)
	{
		func_74(uParam0, 0f);
		func_74(uParam1, uParam0->f_2);
		func_74(uParam2, uParam1->f_2);
	}
	else
	{
		func_73(uParam0);
		func_72(uParam2, uParam0->f_4);
		func_71(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_71(var uParam0, vector3 vParam1, vector3 vParam2)//Position - 0x40C6
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_24BE21[iVar0 /*10*/].f_4, vParam1);
			fVar3 = SYSTEM::VDIST(Global_24BE21[iVar0 /*10*/].f_4, vParam2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_24BE21[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_24BE21[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_72(var uParam0, vector3 vParam1)//Position - 0x4165
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_24BE21[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_24BE21[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_24BE21[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_73(var uParam0)//Position - 0x41E7
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > 0)
		{
			if (Global_24BE21[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_24BE21[iVar0 /*10*/].f_1;
				Var2 = { Global_24BE21[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_74(var uParam0, float fParam1)//Position - 0x4254
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > 0)
		{
			if (Global_24BE21[iVar0 /*10*/].f_2 < fVar1 && Global_24BE21[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_24BE21[iVar0 /*10*/].f_2;
				Var2 = { Global_24BE21[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_75()//Position - 0x42D7
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_24BE21[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_76(vector3 vParam0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x430E
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	bool bVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_24B2CE.f_1E3 == 1)
		{
			if (MISC::ABSF((Global_24B2CE.f_1FA.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (func_134(CAM::_0xDC9DA9E8789F5246()))
		{
			if (iParam5 == 4294967295)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == 4294967295)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_133(vParam0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!PED::_0x68772DB2B2526F9F(AUDIO::_0x0626A247D2405330(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!PED::_0x68772DB2B2526F9F(AUDIO::_0x0626A247D2405330(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_132(vParam0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam3->f_D[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(vParam0, uParam3->f_D[iVar11 /*3*/]) > uParam3->f_14[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((SYSTEM::VMAG(uParam3->f_17) > 0f && SYSTEM::VMAG(uParam3->f_1A) > 0f) && uParam3->f_1D > 0f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, uParam3->f_17, uParam3->f_1A, uParam3->f_1D, 0, true))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_126(vParam0, fParam1, uParam2->f_F, func_131(1), uParam2->f_10, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_24B2CE.f_3;
		}
	}
	else if (!func_123(vParam0, 25f, CAM::_0xDC9DA9E8789F5246(), 1, 1))
	{
		if (uParam2->f_F)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_119(vParam0, fVar1, 1, 1, 120f, 0, 4294967295, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_119(vParam0, fVar1, 1, 1, 60f, 0, 4294967295, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_24B2CE.f_2B2)
		{
			vVar12 = { Global_24B2CE.f_1FA };
			if (Global_24B2CE.f_1E3 == 26)
			{
				vVar12 = { Global_24B2CE.f_225.f_12 };
			}
			if (!func_46(vParam0, 0.5f))
			{
				if (func_57(vVar12))
				{
					if (!func_56(&vParam0, 0, 0, 0, 1) && !func_118(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_118(&vParam0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_117(vParam0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_116(CAM::_0xDC9DA9E8789F5246()) && func_114(CAM::_0xDC9DA9E8789F5246())))
		{
			if (!func_113(&vParam0, &(Global_24B2CE.f_9AA.f_5A), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_114(CAM::_0xDC9DA9E8789F5246()))
		{
			if (!func_112(vParam0, &(Global_24B2CE.f_9AA.f_39), &(Global_24B2CE.f_9AA.f_5A), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_111(vParam0))
	{
		if (uParam2->f_5)
		{
			if (func_17(Global_24B2CE.f_1E3))
			{
				if (func_60(vParam0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_110(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_24B2CE.f_2C.f_37)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_24B2CE.f_2B2)
		{
			if (!func_47(&vParam0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_25(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = func_59(vParam0, 1008981770);
		if (iVar14 > 4294967295)
		{
			func_109(vParam0, &vVar15, &vVar16, &fVar17);
			if (!func_104(&(Global_24B2CE.f_2C[iVar14 /*12*/]), vVar15, vVar16, fVar17))
			{
				iVar8 = 4294967295;
			}
		}
		else
		{
			iVar8 = 4294967295;
		}
	}
	if (func_31(vParam0, 1056964608))
	{
		iVar8 = 4294967295;
	}
	if (uParam3->f_21)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
		{
			iVar8 = 4294967295;
		}
	}
	if (uParam3->f_22)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = 4294967295;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (func_103(vParam0, 1, 0, uParam2->f_F, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_24B2CE.f_B37 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_15)
			{
				fVar0 = func_95(vParam0, uParam2->f_12, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_95(vParam0, Global_24B2CE.f_991, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_17(Global_24B2CE.f_1E3) && iVar8 < 4096)
			{
				Var19.f_2 = func_93(vParam0);
			}
			uVar7 = func_82(vParam0, 1, 0, 0, 0);
			Var19.f_4 = { vParam0 };
			Var19.f_7 = fParam1;
			Var19 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = uVar7;
			func_81(Var19);
			Global_24B2CE.f_9AA.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_24B2CE.f_9AA.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_15)
						{
							fVar0 = func_95(vParam0, uParam2->f_12, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_95(vParam0, Global_24B2CE.f_991, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((func_17(Global_24B2CE.f_1E3) && iVar8 == Global_24B2CE.f_9AA.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = func_93(vParam0);
							bVar21 = true;
						}
						if (fVar2 < Global_24B2CE.f_9AA.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { vParam0 };
							Var19.f_7 = fParam1;
							Var19 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_80(Var19, iVar18);
							Global_24B2CE.f_9AA.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_24B2CE.f_9AA.f_6[iVar18 /*10*/] || (iVar8 == Global_24B2CE.f_9AA.f_6[iVar18 /*10*/] && fVar0 > Global_24B2CE.f_9AA.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_1 = fVar0;
						func_80(Var19, iVar18);
						Global_24B2CE.f_9AA.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_F)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_78(vParam0, fVar1, 1, 1, 0, 4294967295, 1);
						fVar6 = func_82(vParam0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_77(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_77(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_24B2CE.f_9AA.f_6[iVar18 /*10*/] || (iVar8 == Global_24B2CE.f_9AA.f_6[iVar18 /*10*/] && fVar3 > Global_24B2CE.f_9AA.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_3 = fVar3;
						func_80(Var19, iVar18);
						Global_24B2CE.f_9AA.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

float func_77(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x4CC9
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_78(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x4D67
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_1072(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam1))
				{
					fVar4 = SYSTEM::VDIST2(vParam0, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_1072(iVar1, 1, 1))
		{
			if (!func_146(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != CAM::_0xDC9DA9E8789F5246()))
				{
					if (func_79(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
								{
									fVar4 = SYSTEM::VDIST2(vParam0, unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iVar1), false));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam5 || PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
							{
								fVar4 = SYSTEM::VDIST2(vParam0, unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iVar1), false));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

int func_79(int iParam0)//Position - 0x4EFE
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_24FBF9[iParam0 /*413*/].f_F5)
	{
		return 1;
	}
	return 0;
}

void func_80(struct<10> Param0, int iParam1)//Position - 0x4F29
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_24B2CE.f_9AA.f_6[iParam1 /*10*/] };
	Global_24B2CE.f_9AA.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_80(Var0, iParam1 + 1);
	}
}

void func_81(struct<10> Param0)//Position - 0x4F7B
{
	int iVar0;
	struct<10> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_75();
	if (Param0 > iVar2)
	{
		iVar2 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] < iVar2)
		{
			Global_24BE21[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] == 0)
		{
			Global_24BE21[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999.9f;
	iVar4 = 4294967295;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > 0)
		{
			if (Global_24BE21[iVar0 /*10*/].f_1 < fVar3)
			{
				fVar3 = Global_24BE21[iVar0 /*10*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > 4294967295)
	{
		Global_24BE21[iVar4 /*10*/] = { Param0 };
	}
}

float func_82(vector3 vParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x506F
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_1072(iVar7, 1, 1))
		{
			if (!iVar7 == CAM::_0xDC9DA9E8789F5246() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_84(iVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar7) == PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar7) == 4294967295 || !func_61(CAM::_0xDC9DA9E8789F5246(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar7) || !bParam4)
					{
						if (func_79(iVar7))
						{
							vVar5 = { func_83(iVar7) };
							if (!iVar7 == CAM::_0xDC9DA9E8789F5246())
							{
								vVar6 = { unk_0xCCA038CFFE1C48BC(PLAYER::GET_PLAYER_PED(iVar7)) };
							}
							else
							{
								vVar6 = { vVar5 };
							}
							if (!bParam4)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar6.z < -100f)
								{
									vVar6.z = vParam0.z;
								}
							}
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar5, true);
							fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar6, true);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

Vector3 func_83(int iParam0)//Position - 0x51BB
{
	return unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_84(int iParam0)//Position - 0x51CE
{
	if (func_1072(iParam0, 0, 1))
	{
		if (!func_91(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))
				{
					if (func_41(CAM::_0xDC9DA9E8789F5246(), 1))
					{
						if (!func_90(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == 4294967295 && PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295)
				{
					if (!func_41(CAM::_0xDC9DA9E8789F5246(), 1))
					{
						if (!func_85(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_85(int iParam0)//Position - 0x5279
{
	if (func_89(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	Global_2633E1 = { func_88(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2633E1))
	{
		return 1;
	}
	if (func_86(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_86(int iParam0, int iParam1)//Position - 0x52C0
{
	int iVar0;
	
	iVar0 = func_87(iParam0);
	if (!iVar0 == func_22())
	{
		if (iVar0 == func_87(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_87(int iParam0)//Position - 0x52EB
{
	if (iParam0 != func_22())
	{
		return Global_18CD5B[iParam0 /*560*/].f_B;
	}
	return func_22();
}

struct<13> func_88(int iParam0)//Position - 0x530E
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_89(int iParam0, int iParam1)//Position - 0x5325
{
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		Global_2633E1 = { func_88(iParam0) };
		Global_2633EE = { func_88(iParam1) };
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

int func_90(int iParam0, int iParam1, int iParam2)//Position - 0x5392
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

int func_91(int iParam0)//Position - 0x555D
{
	if (func_146(iParam0, 0))
	{
		return 1;
	}
	if (func_92())
	{
		if (iParam0 == CAM::_0xDC9DA9E8789F5246())
		{
			return 1;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_C3, 2))
	{
		return 1;
	}
	return 0;
}

bool func_92()//Position - 0x559F
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

float func_93(vector3 vParam0)//Position - 0x55B0
{
	var uVar0;
	
	return func_94(vParam0, &(Global_24B2CE.f_2C), &uVar0);
}

float func_94(vector3 vParam0, var uParam1, var uParam2)//Position - 0x55C8
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = 4294967295;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_A)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam1[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_24B2CE.f_A9D) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (vParam0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_95(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)//Position - 0x5744
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam2)
	{
		fVar0 = func_77(SYSTEM::VDIST(vParam0, vParam1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_82(vParam0, 1, 0, 0, 1);
	fVar0 = func_77(fVar4, 0f, func_102(), func_100(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_98(vParam0);
	fVar0 = func_77(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && !func_61(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_97(vParam0, CAM::_0xDC9DA9E8789F5246(), 0);
	fVar0 = func_77(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_96(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_77(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_77(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_77(SYSTEM::VDIST(Global_24B2CE.f_1FA, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_96(vector3 vParam0, var uParam1, var uParam2)//Position - 0x592A
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(vParam0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar1))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(iVar1, &vVar0);
		*uParam1 = SYSTEM::VDIST(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam2 = MISC::ABSF((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_97(vector3 vParam0, int iParam1, int iParam2)//Position - 0x5983
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_1072(iParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (func_1072(iVar3, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar3) != PLAYER::GET_PLAYER_TEAM(iParam1) || (PLAYER::GET_PLAYER_TEAM(iVar3) == 4294967295 && PLAYER::GET_PLAYER_TEAM(iParam1) == 4294967295))
					{
						if (Global_24E392.f_105[iVar2])
						{
							fVar1 = SYSTEM::VDIST(Global_24E392.f_83[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_98(vector3 vParam0)//Position - 0x5A2F
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = PED::GET_PED_NEARBY_PEDS(AUDIO::_0x0626A247D2405330(), &uVar4, 4294967295);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar4[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar4[iVar2], 0))
			{
				if (func_99(uVar4[iVar2]))
				{
					vVar3 = { unk_0x8000C77B5F336760(uVar4[iVar2], true) };
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar3, true);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

int func_99(int iParam0)//Position - 0x5ABC
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0x4EE7377FBE72B4BC(Global_180824[CAM::_0xDC9DA9E8789F5246()]))
	{
		switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_180824[CAM::_0xDC9DA9E8789F5246()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 0)
	{
		iVar1 = PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246());
		if (iVar1 > 4294967295 && iVar1 < 4)
		{
			if (unk_0x4EE7377FBE72B4BC(Global_180702[iVar1]))
			{
				switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_180702[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_100()//Position - 0x5B87
{
	if (func_101())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_24B2CE.f_2C.f_43) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_24B2CE.f_2C.f_43)) || Global_24B2CE.f_2C.f_43 == joaat("RHINO"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_101()//Position - 0x5BE3
{
	if (Global_24B2CE.f_2C.f_41 && !Global_24B2CE.f_2C.f_12D)
	{
		if (!func_91(CAM::_0xDC9DA9E8789F5246()))
		{
			return 1;
		}
	}
	return 0;
}

float func_102()//Position - 0x5C19
{
	if (func_101())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_24B2CE.f_2C.f_43) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_24B2CE.f_2C.f_43)) || Global_24B2CE.f_2C.f_43 == joaat("RHINO"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_103(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)//Position - 0x5C75
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam5)) || (fVar0 > 0f && PED::IS_ANY_PED_NEAR_POINT(vParam0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_104(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x5D04
{
	switch (uParam0->f_A)
	{
		case 0:
			if (func_108(*uParam0, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_107(*uParam0, uParam0->f_3, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_105(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_105(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4, float fParam5)//Position - 0x5D90
{
	vector3 vVar0[8];
	int iVar1;
	
	func_106(vParam0, vParam1, fParam2, &vVar0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam3, vParam4, fParam5, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_106(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3)//Position - 0x5DE2
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	var uVar3;
	
	if (vParam0.z == vParam1.z)
	{
		vParam1.z = (vParam1.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam1 };
	vVar1 = { func_28(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar1 = { vVar1 / FtoV(SYSTEM::VMAG(vVar1)) };
	vVar1 = { vVar1 * FtoV((fParam2 * 0.5f)) };
	if (vParam0.z > vParam1.z)
	{
		uVar2 = vParam1.z;
		uVar3 = vParam0.z;
	}
	else
	{
		uVar2 = vParam0.z;
		uVar3 = vParam1.z;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) + vVar1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) + vVar1 };
}

int func_107(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x5F0F
{
	vector3 vVar0[8];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam1.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam1.y, vParam1.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam1.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam1.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam1.x, vParam0.y, vParam1.z };
	vVar0[6 /*3*/] = { vParam1.x, vParam1.y, vParam1.z };
	vVar0[7 /*3*/] = { vParam1.x, vParam1.y, vParam0.z };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_108(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x5FD9
{
	vector3 vVar0[4];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam1, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam1), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam1) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_109(vector3 vParam0, var uParam1, var uParam2, var uParam3)//Position - 0x605D
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { vParam0 };
	iVar2 = func_30(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_24CAF9[iVar2])
	{
		if (func_29(vVar1, &(Global_24C681[iVar2 /*127*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_24C681[iVar2 /*127*/][iVar0 /*7*/] };
			*uParam2 = { Global_24C681[iVar2 /*127*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_24C681[iVar2 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_24CAF9[8])
	{
		if (func_29(vVar1, &(Global_24C681[8 /*127*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_24C681[8 /*127*/][iVar0 /*7*/] };
			*uParam2 = { Global_24C681[8 /*127*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_24C681[8 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_110(vector3 vParam0)//Position - 0x614B
{
	int iVar0;
	int iVar1;
	
	if (Global_24B2CE.f_2C.f_37)
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_24B2CE.f_2C.f_38))
		{
			if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
			{
				iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam0);
				if (INTERIOR::IS_VALID_INTERIOR(iVar0))
				{
					iVar1 = INTERIOR::GET_INTERIOR_GROUP_ID(iVar0);
					if (!iVar1 == Global_24B2CE.f_2C.f_39)
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
	}
	return 1;
}

int func_111(vector3 vParam0)//Position - 0x61B6
{
	switch (Global_24B2CE.f_9A6)
	{
		case 0:
			return func_149(vParam0, Global_24B2CE.f_991, Global_24B2CE.f_994, 0, 0);
			break;
		
		case 1:
			return func_64(vParam0, Global_24B2CE.f_99F, Global_24B2CE.f_9A2, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, Global_24B2CE.f_99F, Global_24B2CE.f_9A2, Global_24B2CE.f_9A5, 0, true);
			break;
	}
	return 0;
}

int func_112(vector3 vParam0, var uParam1, var uParam2, float fParam3)//Position - 0x6248
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (SYSTEM::VDIST(*(uParam1[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		vVar2 = { *(uParam2[iVar1 /*10*/]) };
		vVar3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar2, vVar3, fVar4, 0, true))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_113(var uParam0, var uParam1, bool bParam2, float fParam3)//Position - 0x62F6
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_45(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_114(int iParam0)//Position - 0x6369
{
	switch (Global_1406BF)
	{
		case 0:
			if (!func_115(iParam0))
			{
				if (Global_1841F3[iParam0 /*790*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_115(int iParam0)//Position - 0x639F
{
	return Global_1841F3[iParam0 /*790*/].f_C4 != 0;
}

int func_116(int iParam0)//Position - 0x63B4
{
	if (func_41(iParam0, 1))
	{
		if (Global_1841F3[iParam0 /*790*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_117(vector3 vParam0, float fParam1, int iParam2)//Position - 0x63D8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (SYSTEM::VDIST2(Global_24B2CE.f_A30[iVar0 /*3*/], vParam0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_118(var uParam0, bool bParam1)//Position - 0x6416
{
	var uVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_48(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_45(&vVar1, Global_24B2CE.f_248, Global_24B2CE.f_24B, 1036831949, 0, fVar2);
			if (func_52(vVar1, &uVar0) || func_48(vVar1))
			{
				vVar1 = { *uParam0 };
				func_45(&vVar1, Global_24B2CE.f_248, Global_24B2CE.f_24B, 1036831949, 1, fVar2);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_119(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x64AE
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_1072(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_120(CAM::_0xDC9DA9E8789F5246()), vParam0, true) <= (fVar2 + fParam1))
				{
					if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam1))
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
		if (func_1072(iVar1, 1, 1))
		{
			if (!func_146(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != CAM::_0xDC9DA9E8789F5246()))
				{
					if ((func_79(iVar1) || !bParam8) && !Global_24FBF9[iVar1 /*413*/].f_103)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_120(iVar1), vParam0, true) <= (fVar2 + fParam1))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_120(iVar1), vParam0, true) <= (fVar2 + fParam1))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
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

Vector3 func_120(int iParam0)//Position - 0x6666
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_122() && Global_1841F3[iVar0 /*790*/].f_2F9) && !func_121(Global_1841F3[iVar0 /*790*/].f_2FA))
	{
		return Global_1841F3[iVar0 /*790*/].f_2FA;
	}
	return func_83(iParam0);
}

int func_121(vector3 vParam0)//Position - 0x66B9
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_122()//Position - 0x66E3
{
	return Global_255C02.f_10;
}

int func_123(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x66F1
{
	if (func_125(vParam0, fParam1, iParam2, iParam3, 0) || func_124(vParam0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_124(vector3 vParam0, int iParam1, int iParam2)//Position - 0x6722
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_32(vParam0, Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/], Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_1072(iVar2, 0, 1) && func_1072(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_125(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x67E4
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_1072(iVar1, 0, 1) && func_1072(iParam2, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_1072(iVar1, 0, 1) && func_1072(iParam2, 0, 1))
				{
					if (Global_24E392.f_105[iVar0])
					{
						if (SYSTEM::VDIST(Global_24E392.f_83[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_83(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_24E392.f_105[iVar0])
				{
					if (SYSTEM::VDIST(Global_24E392.f_83[iVar0 /*3*/], vParam0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_1072(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_83(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_126(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)//Position - 0x6901
{
	Global_24B2CE.f_3 = 0;
	if (!func_123(vParam0, 0.5f, CAM::_0xDC9DA9E8789F5246(), 0, 0))
	{
		Global_24B2CE.f_3++;
		if (bParam3)
		{
			if (func_177(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, 4294967295, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
				if (!func_130(vParam0, fParam10))
				{
					Global_24B2CE.f_3++;
					if (!func_31(vParam0, 1056964608))
					{
						Global_24B2CE.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_177(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, 4294967295, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
				if (!func_130(vParam0, fParam10))
				{
					Global_24B2CE.f_3++;
					if (!func_127(vParam0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_24B2CE.f_3++;
						if (!func_31(vParam0, 1056964608))
						{
							Global_24B2CE.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
			}
		}
		else if (func_177(vParam0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, 4294967295, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
			if (!func_130(vParam0, fParam10))
			{
				Global_24B2CE.f_3++;
				if (!func_127(vParam0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_24B2CE.f_3++;
					if (!func_31(vParam0, 1056964608))
					{
						Global_24B2CE.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
		}
	}
	return 0;
}

int func_127(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x6B41
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!CAM::_0xDC9DA9E8789F5246() == iVar1)
		{
			if ((func_1072(iVar1, 1, 1) && func_79(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
			{
				if (!func_129(CAM::_0xDC9DA9E8789F5246(), iVar1, 4294967294, 0))
				{
					if (func_128(func_83(iVar1), vParam0, fParam1, fParam2, fParam3, fParam4))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_128(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x6BC0
{
	vector3 vVar0;
	vector3 vVar1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	vVar0.x = SYSTEM::SIN(fParam2);
	vVar0.y = SYSTEM::COS(fParam2);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam3, fParam3, fParam3) };
	vVar1 = { vParam1 + vVar0 };
	vVar1.z = vParam1.z;
	vVar1.z = (vVar1.z + fParam5);
	vParam1.z = (vParam1.z + fParam5);
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam1, vVar1, fParam4, 0, true);
}

bool func_129(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6C4C
{
	if (iParam2 == 4294967294)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == 4294967295 && PLAYER::GET_PLAYER_TEAM(iParam1) == 4294967295)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == 4294967295 && iParam2 == 4294967295)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_130(vector3 vParam0, float fParam1)//Position - 0x6CC4
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_1072(iVar1, 1, 1) && func_79(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
		{
			if ((PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295) && !func_61(CAM::_0xDC9DA9E8789F5246(), 1))
			{
				return 0;
			}
			else if ((PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && !CAM::_0xDC9DA9E8789F5246() == iVar1) || !func_129(CAM::_0xDC9DA9E8789F5246(), iVar1, 4294967294, 0))
			{
				if (SYSTEM::VDIST(vParam0, func_83(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_131(int iParam0)//Position - 0x6D80
{
	if ((Global_24B2CE.f_1E3 == 9 || Global_24B2CE.f_1E3 == 9) || (Global_24B2CE.f_1E3 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_132(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x6DC3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && CAM::_0xDC9DA9E8789F5246() != iVar1) || iParam6 == 0)
		{
			if (func_1072(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_79(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295)
						{
							if (((PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && iParam7) && bParam4) && func_85(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_83(iVar1), vParam0, true) < fParam1)
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

int func_133(vector3 vParam0, float fParam1, int iParam2, float fParam3)//Position - 0x6EBF
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246());
	if (!iVar3 == 4294967295)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_1072(iVar1, 1, 1))
			{
				if ((!func_146(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1)) && iVar1 != CAM::_0xDC9DA9E8789F5246())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
						{
							if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == iVar3)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_83(iVar1), vParam0, true) <= (fVar2 + fParam1))
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_134(int iParam0)//Position - 0x6F84
{
	if (((func_61(iParam0, 1) || func_137(iParam0)) || func_136(iParam0, 0)) || func_135(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_135(int iParam0)//Position - 0x6FC0
{
	if (!func_1072(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1841F3[iParam0 /*790*/].f_23;
}

int func_136(int iParam0, int iParam1)//Position - 0x6FE3
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 || (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295))
	{
		return 1;
	}
	return 0;
}

int func_137(int iParam0)//Position - 0x701E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18CD5B[iVar0 /*560*/] != 4294967295;
	}
	return 0;
}

void func_138(vector3 vParam0, var uParam1, var uParam2)//Position - 0x703F
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	vector3 vVar5;
	vector3 vVar6;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1403FD)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2401A9[iVar1 /*26*/].f_C, 11))
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2401A9[iVar1 /*26*/].f_3, vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_2401A9[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2401A9[iVar1 /*26*/].f_6.f_2;
					func_140(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_40001.f_1739[iVar1 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
			{
				Var3 = { Global_40001.f_1739[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_140(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_40001.f_1767[iVar1 /*19*/][iVar2 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_40001.f_1767[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_140(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1403DA)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			vVar5 = { Global_140131[iVar1 /*8*/].f_1 + Global_140131[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam2[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(vVar5, vParam0) < SYSTEM::VDIST(vVar6, vParam0))
			{
				Var4 = { Global_140131[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_140131[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_140131[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_240065[iVar1 /*3*/] };
				func_139(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_139(var uParam0, var uParam1, int iParam2)//Position - 0x7362
{
	Global_24CEE6 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_139(&Global_24CEE6, uParam1, iParam2 + 1);
	}
}

void func_140(var uParam0, var uParam1, int iParam2)//Position - 0x73A0
{
	Global_24CEE2 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_140(&Global_24CEE2, uParam1, iParam2 + 1);
	}
}

void func_141(var uParam0, var uParam1)//Position - 0x73DA
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Global_24B2CE.f_8C5 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_24B2CE.f_8C5)
		{
			if (func_142(Global_24B2CE.f_8C6[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_24B2CE.f_8C6[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					vVar1 = { *uParam1 - Global_24B2CE.f_8C6[iVar0 /*4*/] };
					fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
				}
				func_76(Global_24B2CE.f_8C6[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, 4294967295);
				Global_24B2CE.f_9AA++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_24B2CE.f_B37)
	{
		func_70(&(Global_24B2CE.f_9AA.f_6[0 /*10*/]), &(Global_24B2CE.f_9AA.f_6[1 /*10*/]), &(Global_24B2CE.f_9AA.f_6[2 /*10*/]));
	}
}

int func_142(vector3 vParam0, var uParam1)//Position - 0x74C7
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_19(vParam0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_19(vParam0, uParam1->f_7, uParam1->f_8, uParam1->f_B, uParam1->f_E);
		
		default:
	}
	return 0;
}

void func_143(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)//Position - 0x7524
{
	float fVar0;
	
	func_65(&vParam0, &vParam1);
	fVar0 = (vParam1.x - vParam0.x);
	*uParam2 = (vParam0.x + (fVar0 * 0.5f));
	uParam2->f_1 = vParam0.y;
	uParam2->f_2 = vParam0.z;
	*uParam3 = *uParam2;
	uParam3->f_1 = vParam1.y;
	uParam3->f_2 = vParam1.z;
	*uParam4 = (fVar0 * 0.5f);
}

var func_144()//Position - 0x757A
{
	return Global_14010B.f_4;
}

void func_145(float fParam0, float fParam1)//Position - 0x7588
{
	func_184();
	func_176(fParam0, fParam1);
}

bool func_146(int iParam0, int iParam1)//Position - 0x759C
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_147(4294967295, 0) == 8;
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

int func_147(int iParam0, bool bParam1)//Position - 0x75E7
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_148();
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

int func_148()//Position - 0x7628
{
	return Global_1407E0;
}

bool func_149(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x7634
{
	if (bParam3 && bParam4)
	{
		vParam0.z = 0f;
		vParam1.z = 0f;
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (vParam0.z > vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (vParam0.z < vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
}

void func_150(var uParam0, var uParam1, var uParam2)//Position - 0x76E7
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_24B2CE.f_6C9 > 0)
	{
		iVar0 = 0;
		while (func_172(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_21 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_151(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_151(var uParam0, var uParam1, var uParam2)//Position - 0x7756
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	vector3 vVar25;
	var uVar26;
	vector3 vVar27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_23) > 0f)
	{
		uParam2->f_23 = { *uParam0 };
	}
	if (uParam2->f_F)
	{
		if (func_44(uParam2->f_23, uParam0, &(uParam2->f_26), &(uParam2->f_2D), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_33)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_30)
	{
		if (func_171(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_B)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_A == 0 || (uParam2->f_21 > 0 && uParam2->f_10))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_21)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_24CEF0.f_A2 = 0;
	Global_24CEF0.f_A3 = 0;
	Global_24CEF0.f_A4 = 4294967197;
	Global_24CEF0.f_A5 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_24CEF0[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_24CEF0.f_79[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_37(uParam2->f_22) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_12 = 0;
	}
	while (true)
	{
		iVar6 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &vVar1);
			bVar10 = false;
			if (Global_24CEF0.f_A4 == iVar6)
			{
				bVar10 = true;
			}
			Global_24CEF0.f_A5 = { vVar1 };
			if (((uParam2->f_A || uParam2->f_21 > 0) || !PATHFIND::_GET_IS_SLOW_ROAD_FLAG(iVar6)) || PATHFIND::_GET_SUPPORTS_GPS_ROUTE_FLAG(iVar6))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(vVar1, uParam2->f_23) > uParam2->f_4)
				{
					if (!func_118(&vVar1, 0))
					{
						if ((uParam2->f_D || uVar5 & 64 == 0) || uParam2->f_21 == 1)
						{
							if (uParam2->f_E || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_170(vVar1))
									{
										vVar1 = { func_166(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_B, uParam2->f_22, &bVar9, bVar10, 1, uParam2->f_33) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_31(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_23.f_2 - uParam2->f_7) || uParam2->f_21 >= 2)
												{
													if (vVar1.z <= (uParam2->f_23.f_2 + uParam2->f_6) || uParam2->f_21 >= 2)
													{
														if (func_165(vVar1, uParam2))
														{
															if ((uParam2->f_30 && !func_171(&vVar1, 0)) || uParam2->f_30 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + 4294967295);
																		bVar16 = false;
																	}
																}
																if (SYSTEM::VMAG(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar1.x, vVar1.y, 0f, uParam2->f_23, uParam2->f_23.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_21 >= 2)
																	{
																		if ((uParam2->f_C && !func_161(vVar1, fVar2, uParam2->f_22, CAM::_0xDC9DA9E8789F5246(), 0, uParam2->f_38)) || !uParam2->f_C)
																		{
																			if (!uParam2->f_F || !func_44(uParam2->f_23, &vVar1, &(uParam2->f_26), &(uParam2->f_2D), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_1F;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_31;
																					if (!uParam2->f_37)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_11)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_21 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_1C)
																						{
																							if (uParam2->f_21 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_160(vVar1, fVar2, uParam2->f_22))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_177(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_3A, 4294967295, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_177(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_3A, 4294967295, 1, 0f, 0, 0, 0, 0) && !func_158(vVar1, fVar2, uParam2->f_22, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_21 >= 2)
																					{
																						if (((uParam2->f_1D || uParam2->f_1E) || uParam2->f_34) || uParam2->f_21 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_34)
																							{
																								iVar22 = func_157(vVar1, uParam2->f_36, &fVar23);
																							}
																							if (!uParam2->f_34 || (uParam2->f_34 && iVar22 <= uParam2->f_35))
																							{
																								if (uParam2->f_34)
																								{
																									if (iVar22 < uParam2->f_35)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_24CEF0.f_A2)
																										{
																											Global_24CEF0[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_24CEF0.f_79[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_24CEF0.f_A2 = 0;
																										uParam2->f_35 = iVar22;
																									}
																								}
																								if (uParam2->f_1E)
																								{
																									if (Global_24CEF0.f_A2 == 0)
																									{
																										Global_24CEF0[0 /*3*/] = { vVar1 };
																										Global_24CEF0.f_79[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_24CEF0.f_A2 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (SYSTEM::VDIST2(vVar1, uParam2->f_23) < SYSTEM::VDIST2(Global_24CEF0[iVar14 /*3*/], uParam2->f_23))
																												{
																													func_156(vVar1, fVar2, iVar14);
																													iVar14 = Global_24CEF0.f_A2 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_24CEF0.f_A2++;
																									if (Global_24CEF0.f_A2 >= 5)
																									{
																										if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_24CEF0.f_A2 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_24CEF0[Global_24CEF0.f_A2 /*3*/] = { vVar1 };
																									Global_24CEF0.f_79[Global_24CEF0.f_A2] = fVar2;
																									Global_24CEF0.f_A2++;
																									if (func_165(vVar1, uParam2))
																									{
																										Global_24CEF0.f_A3++;
																									}
																									if (Global_24CEF0.f_A2 >= 10)
																									{
																										if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_24CEF0.f_A2 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_20)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_24CEF0.f_A2 > 0 && ((uParam2->f_1D || uParam2->f_1E) || uParam2->f_21 >= 2))
				{
					if (uParam2->f_1E)
					{
						*uParam0 = { Global_24CEF0[0 /*3*/] };
						*uParam1 = Global_24CEF0.f_79[0];
						return 1;
					}
					else
					{
						if (Global_24CEF0.f_A3 > 0 && !Global_24CEF0.f_A3 == Global_24CEF0.f_A2)
						{
							func_154(0, uParam2);
						}
						iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_24CEF0.f_A2);
						if (uParam2->f_12 && uParam2->f_1E)
						{
							iVar24 = 0;
						}
						vVar25 = { Global_24CEF0[0 /*3*/] };
						uVar26 = Global_24CEF0.f_79[0];
						Global_24CEF0[0 /*3*/] = { Global_24CEF0[iVar24 /*3*/] };
						Global_24CEF0.f_79[0] = Global_24CEF0.f_79[iVar24];
						Global_24CEF0[iVar24 /*3*/] = { vVar25 };
						Global_24CEF0.f_79[iVar24] = uVar26;
						*uParam0 = { Global_24CEF0[0 /*3*/] };
						*uParam1 = Global_24CEF0.f_79[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_21++;
					if (uParam2->f_21 < 3)
					{
						return 0;
					}
					else
					{
						func_153(iVar13, *uParam0, &iVar0, &vVar1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						vVar27 = { vVar1 };
						fVar28 = fVar2;
						if (!uParam2->f_32)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_44(uParam2->f_23, &vVar27, &(uParam2->f_26), &(uParam2->f_2D), bVar29, 1) || func_171(&vVar27, bVar29))
						{
							if (!uParam2->f_32)
							{
								uParam2->f_21 = 0;
								uParam2->f_32 = 1;
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { vVar27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_21++;
			if (uParam2->f_21 < 3)
			{
				return 0;
			}
			else
			{
				func_152(&Global_14053D, uParam0, uParam1, *uParam0);
				if (uParam2->f_B)
				{
					uParam2->f_1B = 1;
				}
				return 1;
			}
		}
		Global_24CEF0.f_A4 = iVar6;
	}
	return 0;
}

void func_152(var uParam0, var uParam1, var uParam2, vector3 vParam3)//Position - 0x8181
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 4294967295;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_123(*(uParam0[iVar2 /*4*/]), 5f, CAM::_0xDC9DA9E8789F5246(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == 4294967295)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_153(int iParam0, vector3 vParam1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)//Position - 0x8205
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10);
		*uParam3 = { func_166(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_B, uParam5->f_22, &bParam11, 0, 0, uParam5->f_33) };
		if (!func_170(*uParam3))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_154(int iParam0, var uParam1)//Position - 0x8289
{
	if (!func_165(Global_24CEF0[iParam0 /*3*/], uParam1))
	{
		Global_24CEF0.f_A2 = (Global_24CEF0.f_A2 - 1);
		func_155(iParam0);
		if (Global_24CEF0.f_A2 > Global_24CEF0.f_A3)
		{
			func_154(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_154(iParam0 + 1, uParam1);
	}
}

void func_155(int iParam0)//Position - 0x82E4
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_24CEF0[iParam0 /*3*/] = { Global_24CEF0[iParam0 + 1 /*3*/] };
			Global_24CEF0.f_79[iParam0] = Global_24CEF0.f_79[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_156(vector3 vParam0, float fParam1, int iParam2)//Position - 0x832F
{
	vector3 vVar0;
	var uVar1;
	
	vVar0 = { Global_24CEF0[iParam2 /*3*/] };
	uVar1 = Global_24CEF0.f_79[iParam2];
	Global_24CEF0[iParam2 /*3*/] = { vParam0 };
	Global_24CEF0.f_79[iParam2] = fParam1;
	if (iParam2 <= Global_24CEF0.f_A2 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(vVar0) > 0f)
		{
			func_156(vVar0, uVar1, iParam2 + 1);
		}
	}
}

int func_157(vector3 vParam0, float fParam1, float fParam2)//Position - 0x839C
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_84(iVar3))
		{
			vVar1 = { func_83(iVar3) };
			fVar5 = SYSTEM::VDIST(vParam0, vVar1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_158(vector3 vParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x8404
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && CAM::_0xDC9DA9E8789F5246() != iVar1) || iParam7 == 0)
		{
			if (func_1072(iVar1, bParam3, bParam4))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
				{
					if (!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_79(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295)
						{
							if (((PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && iParam8) && bParam5) && func_85(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), 0))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), 0);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, 0))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										vVar5 = { unk_0x8000C77B5F336760(iVar3, false) };
										fVar6 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_159(vParam0, fParam1, iParam2, vVar5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_32(func_83(iVar1), vParam0, fParam1, iParam2, fVar2))
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

int func_159(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)//Position - 0x8577
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (func_32(vParam0, vParam3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_34(iParam2, &vVar2, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar4 = { 0f, vVar3.y, 0f };
	func_39(&vVar4, 0f, 0f, fParam1);
	vVar5 = { 0f, vVar2.y, 0f };
	func_39(&vVar5, 0f, 0f, fParam1);
	vVar6 = { (MISC::ABSF((vVar3.x - vVar2.x)) * 0.5f), 0f, 0f };
	func_39(&vVar6, 0f, 0f, fParam1);
	vVar1[0 /*3*/] = { vParam0 + vVar4 + vVar6 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar4 - vVar6 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar5 + vVar6 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar5 - vVar6 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_32(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_159(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_160(vector3 vParam0, float fParam1, int iParam2)//Position - 0x8731
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		vVar3 = { unk_0x8000C77B5F336760(iVar1, false) };
		fVar4 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_159(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		vVar3 = { unk_0x8000C77B5F336760(iVar1, false) };
		fVar4 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_159(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_161(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x883D
{
	if (func_164(vParam0, fParam1, iParam2, iParam3, iParam4) || func_162(vParam0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_162(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8873
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_163(vParam0, iParam2, Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/], Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_159(vParam0, fParam1, iParam2, Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/], Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_1072(iVar2, 0, 1) && func_1072(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_163(vector3 vParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x894D
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_40(iParam1, 1008981770);
	fVar1 = func_40(iParam3, 1008981770);
	fVar2 = SYSTEM::VDIST(vParam0, vParam2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_164(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x898D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_1072(iVar1, 0, 1) && func_1072(iParam3, 0, 1))
			{
				if (Global_24E392.f_105[iVar0])
				{
					if (func_32(Global_24E392.f_83[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_32(func_83(iVar1), vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_24E392.f_105[iVar0])
			{
				if (func_32(Global_24E392.f_83[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_1072(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_32(func_83(iVar1), vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_165(vector3 vParam0, var uParam1)//Position - 0x8A9C
{
	if (uParam1->f_12)
	{
		switch (uParam1->f_1A)
		{
			case 0:
				if (func_149(vParam0, uParam1->f_13, uParam1->f_19, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_64(vParam0, uParam1->f_13, uParam1->f_16, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, uParam1->f_13, uParam1->f_16, uParam1->f_19, 0, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_166(vector3 vParam0, float fParam1, int iParam2, bool bParam3, vector3 vParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0x8B2D
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	
	if (bParam11)
	{
		if (SYSTEM::VMAG(vParam4) > 0f)
		{
			if (!func_169(vParam0, *fParam1, vParam4))
			{
				*fParam1 = (*fParam1 + 180f);
			}
		}
		return vParam0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vParam0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		PATHFIND::GET_CLOSEST_ROAD(vParam0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam7) && func_168(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*fParam1 = (*fParam1 + 180f);
			if (*fParam1 > 360f)
			{
				*fParam1 = (*fParam1 + -360f);
			}
		}
		if (*fParam1 <= 90f || *fParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_167(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_167(iParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(vParam4) > 0f)
	{
		if (!func_169(vParam0, *fParam1, vParam4))
		{
			if (bParam3 || ((uVar2 & 1024 != 0 || vParam0.z == 0f) && bParam6))
			{
				*fParam1 = (*fParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, *fParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0x4264B2362A7E120F(vParam0, *fParam1, &vVar11))
		{
			vVar12 = { vVar11 - vParam0 };
			if (!iParam7 == 0)
			{
				vVar13 = { vVar12 / FtoV(SYSTEM::VMAG(vVar12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_167(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_167(iParam7, 1.5f);
				}
				vVar13 = { vVar13 * FtoV((fVar10 * 0.5f)) };
				vVar12 = { vVar12 - vVar13 };
				vVar11 = { vParam0 + vVar12 };
			}
			vVar13 = { vVar0 - vVar11 };
			vVar0 = { vVar11 };
		}
	}
	return vVar0;
}

float func_167(int iParam0, float fParam1)//Position - 0x8F74
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_34(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_168(vector3 vParam0)//Position - 0x8FAB
{
	float fVar0;
	
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_169(vector3 vParam0, float fParam1, vector3 vParam2)//Position - 0x8FE3
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 0f, 1f, 0f };
	func_39(&vVar0, 0f, 0f, fParam1);
	vVar1 = { vParam2 - vParam0 };
	if (func_27(vVar1, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_170(vector3 vParam0)//Position - 0x901F
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_30(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_24CDCB[iVar1])
	{
		if (func_29(vParam0, &(Global_24CB0C[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_24CDCB[8])
	{
		if (func_29(vParam0, &(Global_24CB0C[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_171(var uParam0, bool bParam1)//Position - 0x909A
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_24B2CE.f_1A.f_11)
	{
		switch (Global_24B2CE.f_1A.f_10)
		{
			case 0:
				if (func_149(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_F, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_64(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_C, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_C, Global_24B2CE.f_1A.f_F, 0, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_51(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_C, Global_24B2CE.f_1A.f_F, Global_24B2CE.f_1A.f_10, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_172(var uParam0, var uParam1, var uParam2)//Position - 0x918C
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	vector3 vVar13;
	var uVar14;
	
	if (Global_24B2CE.f_6C9 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!SYSTEM::VMAG(uParam2->f_23) > 0f)
		{
			uParam2->f_23 = { *uParam0 };
		}
		if (uParam2->f_F)
		{
			if (func_44(uParam2->f_23, uParam0, &(uParam2->f_26), &(uParam2->f_2D), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_30)
		{
			if (func_171(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_24CEF0.f_A2 = 0;
		Global_24CEF0.f_A3 = 0;
		iVar4 = 0;
		while (iVar4 < 40)
		{
			Global_24CEF0[iVar4 /*3*/] = { 0f, 0f, 0f };
			Global_24CEF0.f_79[iVar4] = 0f;
			iVar4++;
		}
		func_173(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_24B2CE.f_6C9)
		{
			iVar1 = Global_24B2CE.f_85F[iVar0];
			if (iVar1 > 4294967295 && iVar1 < 101)
			{
				vVar2 = { Global_24B2CE.f_6CA[iVar1 /*4*/] };
				fVar3 = Global_24B2CE.f_6CA[iVar1 /*4*/].f_3;
				if (SYSTEM::VMAG(vVar2) > 0f)
				{
					if ((uParam2->f_39 && SYSTEM::VDIST(vVar2, uParam2->f_23) > uParam2->f_4) || uParam2->f_39 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar2.x, vVar2.y, 0f, uParam2->f_23, uParam2->f_23.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_C && !func_161(vVar2, fVar3, uParam2->f_22, CAM::_0xDC9DA9E8789F5246(), 0, uParam2->f_38)) || !uParam2->f_C)
							{
								if (!uParam2->f_F || !func_44(uParam2->f_23, &vVar2, &(uParam2->f_26), &(uParam2->f_2D), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar5 = uParam2->f_1F;
										bVar6 = true;
										iVar7 = 1;
										fVar8 = uParam2->f_31;
										if (!uParam2->f_37)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											fVar8 = 1f;
										}
										else if (uParam2->f_11)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											if (uParam2->f_21 == 1)
											{
												fVar8 = (fVar8 * 0.375f);
											}
										}
										else
										{
											bVar6 = true;
											iVar7 = 1;
											if (uParam2->f_1C)
											{
												if (uParam2->f_21 == 1)
												{
													fVar8 = (fVar8 * 0.375f);
												}
											}
										}
										bVar9 = false;
										if (!func_160(vVar2, fVar3, uParam2->f_22))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_177(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_3A, 4294967295, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar9 = true;
												}
											}
											else if (func_177(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_3A, 4294967295, 1, 0f, 0, 0, 0, 0) && !func_158(vVar2, fVar3, uParam2->f_22, 1, 1, 0, 0, uParam2->f_3A, 0))
											{
												bVar9 = true;
											}
										}
										if (bVar9)
										{
											if ((uParam2->f_1D || uParam2->f_1E) || uParam2->f_34)
											{
												fVar11 = 0f;
												if (uParam2->f_34)
												{
													iVar10 = func_157(vVar2, uParam2->f_36, &fVar11);
												}
												if (!uParam2->f_34 || (uParam2->f_34 && iVar10 <= uParam2->f_35))
												{
													if (uParam2->f_34)
													{
														if (iVar10 < uParam2->f_35)
														{
															iVar4 = 0;
															while (iVar4 < Global_24CEF0.f_A2)
															{
																Global_24CEF0[iVar4 /*3*/] = { 0f, 0f, 0f };
																Global_24CEF0.f_79[iVar4] = 0f;
																iVar4++;
															}
															Global_24CEF0.f_A2 = 0;
															uParam2->f_35 = iVar10;
														}
													}
													if (uParam2->f_1E)
													{
														if (Global_24CEF0.f_A2 == 0)
														{
															Global_24CEF0[0 /*3*/] = { vVar2 };
															Global_24CEF0.f_79[0] = fVar3;
														}
														else
														{
															iVar4 = 0;
															while (iVar4 < Global_24CEF0.f_A2 + 1)
															{
																if (iVar4 < 40)
																{
																	if (SYSTEM::VDIST2(vVar2, uParam2->f_23) < SYSTEM::VDIST2(Global_24CEF0[iVar4 /*3*/], uParam2->f_23))
																	{
																		func_156(vVar2, fVar3, iVar4);
																		iVar4 = Global_24CEF0.f_A2 + 1;
																	}
																}
																iVar4++;
															}
														}
														Global_24CEF0.f_A2++;
														if (Global_24CEF0.f_A2 >= 5)
														{
															if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
															{
																iVar0 = Global_24B2CE.f_6C9;
															}
															else if (Global_24CEF0.f_A2 == 40)
															{
																iVar0 = Global_24B2CE.f_6C9;
															}
														}
													}
													else
													{
														Global_24CEF0[Global_24CEF0.f_A2 /*3*/] = { vVar2 };
														Global_24CEF0.f_79[Global_24CEF0.f_A2] = fVar3;
														Global_24CEF0.f_A2++;
														if (Global_24CEF0.f_A2 >= 10)
														{
															if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
															{
																iVar0 = Global_24B2CE.f_6C9;
															}
															else if (Global_24CEF0.f_A2 == 40)
															{
																iVar0 = Global_24B2CE.f_6C9;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar3;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar3;
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
		if (Global_24CEF0.f_A2 > 0)
		{
			if (uParam2->f_1E)
			{
				*uParam0 = { Global_24CEF0[0 /*3*/] };
				*uParam1 = Global_24CEF0.f_79[0];
				return 1;
			}
			else
			{
				if (Global_24CEF0.f_A3 > 0 && !Global_24CEF0.f_A3 == Global_24CEF0.f_A2)
				{
					func_154(0, uParam2);
				}
				iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_24CEF0.f_A2);
				vVar13 = { Global_24CEF0[0 /*3*/] };
				uVar14 = Global_24CEF0.f_79[0];
				Global_24CEF0[0 /*3*/] = { Global_24CEF0[iVar12 /*3*/] };
				Global_24CEF0.f_79[0] = Global_24CEF0.f_79[iVar12];
				Global_24CEF0[iVar12 /*3*/] = { vVar13 };
				Global_24CEF0.f_79[iVar12] = uVar14;
				*uParam0 = { Global_24CEF0[0 /*3*/] };
				*uParam1 = Global_24CEF0.f_79[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_21++;
			if (uParam2->f_21 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_173(vector3 vParam0)//Position - 0x97C4
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_24B2CE.f_6C9)
	{
		uVar1 = func_174(vParam0, fVar0, &fVar0);
		Global_24B2CE.f_85F[iVar2] = uVar1;
		iVar2++;
	}
}

int func_174(vector3 vParam0, float fParam1, float fParam2)//Position - 0x97FF
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_24B2CE.f_6C9)
	{
		fVar2 = SYSTEM::VDIST2(vParam0, Global_24B2CE.f_6CA[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

bool func_175(int iParam0)//Position - 0x9861
{
	return iParam0 == 50;
}

void func_176(float fParam0, float fParam1)//Position - 0x986E
{
	PATHFIND::ADD_NAVMESH_REQUIRED_REGION(fParam0, fParam1, 0.1f);
	Global_24B2CE.f_999 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_24B2CE.f_997 = 1;
	Global_24B2CE.f_99A = HUD::_0x13C4B962653A5280();
}

int func_177(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x98A1
{
	Global_24B2CE.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (fParam12 > 0f)
	{
		if (func_132(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_119(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_24B2CE.f_2++;
	return 1;
}

void func_178()//Position - 0x99B2
{
	func_183();
	func_182();
	func_181();
	func_180();
	func_179();
}

void func_179()//Position - 0x99CE
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_24BE21[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_180()//Position - 0x9A06
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_24B2CE.f_9AA.f_5A[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_181()//Position - 0x9A35
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_24B2CE.f_9AA.f_39[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_182()//Position - 0x9A63
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_24B2CE.f_9AA.f_6[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_183()//Position - 0x9A9F
{
	struct<6> Var0;
	
	Var0.f_3 = 4294967295;
	Global_24B2CE.f_9AA = { Var0 };
}

void func_184()//Position - 0x9ABD
{
	if (Global_24B2CE.f_997)
	{
		if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_999)
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		else
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		Global_24B2CE.f_997 = 0;
	}
}

int func_185(bool bParam0)//Position - 0x9AF0
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

Vector3 func_186()//Position - 0x9B13
{
	return Local_143.f_26[Local_143.f_24 /*3*/];
}

void func_187()//Position - 0x9B27
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	bVar1 = false;
	if (Local_143 != 4)
	{
		iLocal_147 = 0;
		while (iLocal_147 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_147)))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_147));
				if (func_1072(iVar2, 1, 1))
				{
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 1))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_144[iLocal_147 /*6*/].f_1, 2))
					{
						if (Local_143.f_25 != iVar2)
						{
							Local_143.f_25 = iVar2;
						}
					}
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 1))
				{
					if (Local_144[iLocal_147 /*6*/].f_5 > 0)
					{
						iVar0 = (iVar0 + Local_144[iLocal_147 /*6*/].f_5);
					}
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 4))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_144[iLocal_147 /*6*/].f_1, 5))
					{
						MISC::SET_BIT(&(Local_143.f_1), 4);
						Local_143.f_23 = iVar2;
					}
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 2))
				{
					if (!bVar1)
					{
						if (((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 3)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 4)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 5))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_144[iLocal_147 /*6*/].f_1, 4))
							{
								bVar1 = true;
							}
						}
						else
						{
							bVar1 = true;
						}
					}
				}
			}
			else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 5))
			{
				if (Local_143.f_21 > 4294967295)
				{
					if (iLocal_147 == Local_143.f_21)
					{
						MISC::SET_BIT(&(Local_143.f_1), 5);
					}
				}
			}
			iLocal_147++;
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 1))
		{
			iVar0 = (iVar0 + Local_143.f_6);
			if (iVar0 >= func_188())
			{
				MISC::SET_BIT(&(Local_143.f_1), 1);
			}
			if (Local_143.f_5 != iVar0)
			{
				if (Local_143.f_5 < iVar0)
				{
					Local_143.f_5 = iVar0;
				}
				else if (Local_143.f_6 != (Local_143.f_5 - iVar0))
				{
					Local_143.f_6 = (Local_143.f_5 - iVar0);
				}
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 2))
		{
			if (!bVar1)
			{
				MISC::SET_BIT(&(Local_143.f_1), 2);
			}
		}
	}
}

int func_188()//Position - 0x9D0B
{
	return Global_40001.f_3067;
}

int func_189()//Position - 0x9D1A
{
	int iVar0;
	int iVar1;
	
	if (func_193() != 4294967295)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (func_192(Local_143.f_26[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 20);
				if (func_190(iVar1))
				{
					Local_143.f_26[iVar0 /*3*/] = { vLocal_434[iVar1 /*3*/] };
					vLocal_434[iVar1 /*3*/] = { 0f, 0f, 0f };
				}
			}
			iVar0++;
		}
	}
	else
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_192(Local_143.f_26[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_190(int iParam0)//Position - 0x9DB8
{
	int iVar0;
	float fVar1;
	
	if (func_192(vLocal_434[iParam0 /*3*/], 0f, 0f, 0f, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 < iParam0)
		{
			if (!func_192(Local_143.f_26[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_143.f_26[iVar0 /*3*/], vLocal_434[iParam0 /*3*/], true);
				if (fVar1 < func_191())
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

float func_191()//Position - 0x9E33
{
	return SYSTEM::TO_FLOAT(Global_40001.f_3068);
}

bool func_192(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x9E46
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_193()//Position - 0x9E8D
{
	int iVar0;
	
	if (Local_143.f_30 != 4294967295)
	{
		return Local_143.f_30;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	if (!func_195(iVar0))
	{
		Local_143.f_30 = iVar0;
		func_194();
	}
	return Local_143.f_30;
}

void func_194()//Position - 0x9EC7
{
	switch (Local_143.f_30)
	{
		case 0:
			vLocal_434[0 /*3*/] = { 959.4771f, -1673.839f, 29.0562f };
			vLocal_434[1 /*3*/] = { 711.3848f, -1230.569f, 25.5556f };
			vLocal_434[2 /*3*/] = { 282.5148f, -217.2699f, 62.4801f };
			vLocal_434[3 /*3*/] = { 388.7341f, -356.1966f, 47.023f };
			vLocal_434[4 /*3*/] = { 1112.403f, -645.8195f, 55.8211f };
			vLocal_434[5 /*3*/] = { 1112.403f, -645.8195f, 55.8211f };
			vLocal_434[6 /*3*/] = { 175.7449f, 557.355f, 179.142f };
			vLocal_434[7 /*3*/] = { 1061.679f, 214.6577f, 83.9904f };
			vLocal_434[8 /*3*/] = { 768.462f, 1279.458f, 359.2967f };
			vLocal_434[9 /*3*/] = { 2590.469f, 486.6694f, 107.69f };
			vLocal_434[10 /*3*/] = { 2820.659f, -760.044f, 1.4262f };
			vLocal_434[11 /*3*/] = { 1169.637f, -1382.508f, 33.7916f };
			vLocal_434[12 /*3*/] = { 1590.301f, -1691.78f, 87.103f };
			vLocal_434[13 /*3*/] = { 857.6887f, -2497.098f, 27.3195f };
			vLocal_434[14 /*3*/] = { 1292.737f, -3097.068f, 4.9066f };
			vLocal_434[15 /*3*/] = { 590.4111f, -2902.535f, 5.2464f };
			vLocal_434[16 /*3*/] = { 491.5606f, -2122.398f, 4.9175f };
			vLocal_434[17 /*3*/] = { 210.1278f, -937.7384f, 23.1416f };
			vLocal_434[18 /*3*/] = { 483.4742f, -1480.009f, 28.2904f };
			vLocal_434[19 /*3*/] = { 2288.854f, 1727.706f, 67.0398f };
			break;
		
		case 1:
			vLocal_434[0 /*3*/] = { -884.5568f, -2477.55f, 12.9877f };
			vLocal_434[1 /*3*/] = { -81.4004f, -2707.403f, 5.4398f };
			vLocal_434[2 /*3*/] = { -176.0256f, -633.2856f, 47.9812f };
			vLocal_434[3 /*3*/] = { -777.4452f, 20.5786f, 39.6541f };
			vLocal_434[4 /*3*/] = { -2333.458f, 237.6722f, 168.602f };
			vLocal_434[5 /*3*/] = { -1096.042f, -323.1984f, 36.8237f };
			vLocal_434[6 /*3*/] = { -822.8544f, -1222.888f, 6.3704f };
			vLocal_434[7 /*3*/] = { -590.8558f, -911.0305f, 22.8747f };
			vLocal_434[8 /*3*/] = { -110.7806f, 356.4308f, 111.6961f };
			vLocal_434[9 /*3*/] = { -330.9974f, -1314.573f, 30.5497f };
			vLocal_434[10 /*3*/] = { -330.9974f, -1314.573f, 30.5497f };
			vLocal_434[11 /*3*/] = { -255.1383f, -1543.092f, 30.9032f };
			vLocal_434[12 /*3*/] = { -1659.014f, 235.419f, 61.391f };
			vLocal_434[13 /*3*/] = { -3276.446f, 967.604f, 7.3522f };
			vLocal_434[14 /*3*/] = { -1997.696f, -257.592f, 28.0968f };
			vLocal_434[15 /*3*/] = { -388.8625f, -2282.671f, 6.6082f };
			vLocal_434[16 /*3*/] = { -1048.599f, -1120.179f, 1.1586f };
			vLocal_434[17 /*3*/] = { -287.5583f, 11.2136f, 53.7525f };
			vLocal_434[18 /*3*/] = { -481.1961f, 1101.528f, 324.8545f };
			vLocal_434[19 /*3*/] = { -1521.989f, 1493.556f, 110.593f };
			break;
		
		case 2:
			vLocal_434[0 /*3*/] = { -1585.629f, 2084.206f, 71.3231f };
			vLocal_434[1 /*3*/] = { -2188.034f, 4249.606f, 47.9395f };
			vLocal_434[2 /*3*/] = { -685.67f, 5794.155f, 16.331f };
			vLocal_434[3 /*3*/] = { -329.5496f, 6150.002f, 31.3133f };
			vLocal_434[4 /*3*/] = { -275.9802f, 6637.051f, 6.4552f };
			vLocal_434[5 /*3*/] = { -800.4709f, 5392.421f, 33.4985f };
			vLocal_434[6 /*3*/] = { -59.013f, 4416.56f, 55.8893f };
			vLocal_434[7 /*3*/] = { -207.2786f, 3658.027f, 50.7524f };
			vLocal_434[8 /*3*/] = { -596.9946f, 2091.172f, 130.4128f };
			vLocal_434[9 /*3*/] = { -2080.822f, 2608.639f, 2.089f };
			vLocal_434[10 /*3*/] = { -1622.297f, 3191.923f, 29.2567f };
			vLocal_434[11 /*3*/] = { -1098.166f, 2725.338f, 17.8007f };
			vLocal_434[12 /*3*/] = { -31.1729f, 1953.42f, 189.1861f };
			vLocal_434[13 /*3*/] = { -281.9674f, 2847.181f, 52.8867f };
			vLocal_434[14 /*3*/] = { -1633.186f, 4736.728f, 52.2963f };
			vLocal_434[15 /*3*/] = { -520.748f, 5307.176f, 79.2448f };
			vLocal_434[16 /*3*/] = { 50.1324f, 7117.781f, 2.1957f };
			vLocal_434[17 /*3*/] = { 163.8223f, 6654.26f, 30.5682f };
			vLocal_434[18 /*3*/] = { 59.0807f, 6310.772f, 30.3764f };
			vLocal_434[19 /*3*/] = { -1901.756f, 1911.103f, 165.2867f };
			break;
		
		case 3:
			vLocal_434[0 /*3*/] = { 721.9799f, 2314.477f, 49.4146f };
			vLocal_434[1 /*3*/] = { 376.9765f, 2628.43f, 43.6444f };
			vLocal_434[2 /*3*/] = { 1535.214f, 6597.865f, 2.1543f };
			vLocal_434[3 /*3*/] = { 2446.757f, 4963.825f, 45.5766f };
			vLocal_434[4 /*3*/] = { 2467.821f, 4080.605f, 37.0648f };
			vLocal_434[5 /*3*/] = { 1648.711f, 3811.429f, 37.6556f };
			vLocal_434[6 /*3*/] = { 1297.271f, 4342.019f, 40.3207f };
			vLocal_434[7 /*3*/] = { 1541.145f, 6335.578f, 23.0751f };
			vLocal_434[8 /*3*/] = { 2014.187f, 4721.405f, 40.609f };
			vLocal_434[9 /*3*/] = { 3800.848f, 4475.054f, 4.9977f };
			vLocal_434[10 /*3*/] = { 2661.859f, 3467.084f, 54.8171f };
			vLocal_434[11 /*3*/] = { 430.2967f, 6467.513f, 27.7718f };
			vLocal_434[12 /*3*/] = { 2930.072f, 4623.018f, 47.7272f };
			vLocal_434[13 /*3*/] = { 2973.685f, 3480.115f, 70.4423f };
			vLocal_434[14 /*3*/] = { 1989.081f, 3781.611f, 31.1808f };
			vLocal_434[15 /*3*/] = { 908.6296f, 3648.458f, 35.1522f };
			vLocal_434[16 /*3*/] = { 1560.581f, 2167.013f, 77.7169f };
			vLocal_434[17 /*3*/] = { 1230.12f, 2742.618f, 37.0054f };
			vLocal_434[18 /*3*/] = { 2545.243f, 2588.249f, 36.9449f };
			vLocal_434[19 /*3*/] = { 260.401f, 3180.358f, 41.6992f };
			break;
	}
}

int func_195(int iParam0)//Position - 0xA65C
{
	switch (iParam0)
	{
		case 0:
			return Global_40001.f_302E;
		
		case 1:
			return Global_40001.f_302F;
		
		case 2:
			return Global_40001.f_302D;
		
		case 3:
			return Global_40001.f_302C;
		
		default:
	}
	return 0;
}

int func_196(var uParam0)//Position - 0xA6AC
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

void func_197(var uParam0)//Position - 0xA6D5
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_198()//Position - 0xA6F4
{
	func_200();
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 9))
	{
		return;
	}
	if (func_973())
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 0))
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
			MISC::SET_BIT(&iLocal_146, 0);
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 1))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_START"))
			{
				MISC::SET_BIT(&iLocal_146, 1);
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 1))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 3))
			{
				if (Local_143.f_5 == 1)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_MID"))
					{
						MISC::SET_BIT(&iLocal_146, 3);
					}
				}
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 3))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 4))
			{
				if (Local_143.f_5 == 2)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_FINAL"))
					{
						MISC::SET_BIT(&iLocal_146, 4);
					}
				}
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 4))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 4))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 6))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_STOP"))
					{
						MISC::SET_BIT(&iLocal_146, 6);
						MISC::SET_BIT(&iLocal_146, 2);
						AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
						AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
					}
				}
			}
		}
	}
	if (func_405())
	{
		if (func_199(CAM::_0xDC9DA9E8789F5246(), 20))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 0))
			{
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
				MISC::SET_BIT(&iLocal_146, 0);
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 7))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_START_ATTACK"))
				{
					MISC::SET_BIT(&iLocal_146, 7);
				}
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 4))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 7))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 6))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_STOP"))
						{
							MISC::SET_BIT(&iLocal_146, 6);
							MISC::SET_BIT(&iLocal_146, 2);
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
						}
					}
				}
			}
		}
	}
}

bool func_199(int iParam0, int iParam1)//Position - 0xA8D6
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_B.f_4, iParam1);
}

void func_200()//Position - 0xA8F1
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 8))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 9))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 10))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 11))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
					}
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 15))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
					{
						MISC::SET_BIT(&iLocal_146, 15);
					}
				}
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 15))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 13))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							MISC::SET_BIT(&iLocal_146, 13);
						}
					}
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 13))
					{
						MISC::SET_BIT(&iLocal_146, 10);
					}
				}
			}
		}
	}
}

void func_201()//Position - 0xA9A5
{
	vector3 vVar0;
	int iVar1;
	
	if (!func_973() && !func_405())
	{
		return;
	}
	if (Local_143.f_22 > 4294967295)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			vVar0 = { unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iVar1), false) };
		}
	}
	if (!func_192(vVar0, 0f, 0f, 0f, 0))
	{
		func_202(142, vVar0, &uLocal_442, 1140457472, 1144750080, 0);
	}
}

void func_202(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, int iParam5)//Position - 0xAA14
{
	float fVar0;
	float fVar1;
	
	if ((((func_137(CAM::_0xDC9DA9E8789F5246()) && !func_253(CAM::_0xDC9DA9E8789F5246())) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 8)) && (func_252(CAM::_0xDC9DA9E8789F5246()) || func_251(CAM::_0xDC9DA9E8789F5246()))) || func_121(vParam1))
	{
		return;
	}
	Global_196EED = { vParam1 };
	fVar0 = SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), vParam1);
	func_247(iParam0, fVar0);
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_246(CAM::_0xDC9DA9E8789F5246()) || func_244(CAM::_0xDC9DA9E8789F5246()))
		{
			if (!unk_0x7922FBF86CF76430(1344549371))
			{
				HUD::_ADD_FRONTEND_MENU_CONTEXT(1344549371);
			}
		}
		else if (unk_0x7922FBF86CF76430(1344549371))
		{
			HUD::OBJECT_DECAL_TOGGLE(1344549371);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!func_243(CAM::_0xDC9DA9E8789F5246(), 21))
		{
			func_242(vParam1, 1, 0);
		}
		if (!*uParam2 && func_1072(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			*uParam2 = 1;
			if (func_241(iParam0))
			{
				GRAPHICS::_0x54E22EA2C1956A8D(func_240(iParam0));
				if (func_239(iParam0, 4294967295))
				{
					HUD::_0x14621BB1DF14E2B2(0);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), 0, 1);
						HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 1);
					}
					MISC::SET_BIT(&(Global_196EED.f_3), 0);
				}
			}
			if (func_238(iParam0))
			{
				fVar1 = func_237(iParam0);
				if (fVar1 != 1f)
				{
					func_234(fVar1);
					MISC::SET_BIT(&(Global_196EED.f_3), 1);
				}
			}
			if (!Global_247C05)
			{
				if (func_233(iParam0) && func_246(CAM::_0xDC9DA9E8789F5246()))
				{
					func_231(1);
					func_230(2);
				}
			}
			func_229(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_199(CAM::_0xDC9DA9E8789F5246(), 19))
			{
				func_228(19);
			}
		}
		if (*uParam2 && func_1072(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			*uParam2 = 0;
			if (func_241(iParam0))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 0))
				{
					GRAPHICS::_0x54E22EA2C1956A8D(1f);
					HUD::_0x14621BB1DF14E2B2(5);
					GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 0);
				}
			}
			if (func_238(iParam0))
			{
				func_227();
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 1);
			}
			if (iParam5 && !func_137(CAM::_0xDC9DA9E8789F5246()))
			{
				if (func_226(CAM::_0xDC9DA9E8789F5246()) != 152)
				{
					func_205();
				}
			}
			if (func_204(2))
			{
				func_231(0);
				func_203(2);
			}
		}
	}
}

void func_203(int iParam0)//Position - 0xAC87
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_27), iParam0);
}

bool func_204(int iParam0)//Position - 0xAC9E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_27, iParam0);
}

void func_205()//Position - 0xACB5
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_18), &Global_24C348, 2);
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_1A), &Global_24C34A, 18);
	func_224();
	func_208(1, 1, 0);
	func_206();
}

void func_206()//Position - 0xACEB
{
	func_207(0, 0);
}

void func_207(int iParam0, int iParam1)//Position - 0xACF9
{
	Global_24B2CE.f_16 = iParam0;
	Global_24B2CE.f_17 = iParam1;
}

void func_208(bool bParam0, bool bParam1, bool bParam2)//Position - 0xAD11
{
	if (bParam1)
	{
		unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_2C), &Global_24C35C, 318);
	}
	else
	{
		Global_24B2CE.f_2C = { Global_24C35C };
		Global_24B2CE.f_2C.f_31 = { Global_24C35C.f_31 };
		Global_24B2CE.f_2C.f_34 = Global_24C35C.f_34;
		Global_24B2CE.f_2C.f_35 = Global_24C35C.f_35;
	}
	if (bParam0)
	{
		func_223();
	}
	if (!bParam2)
	{
		func_211(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_210(0);
	func_209();
}

void func_209()//Position - 0xADB0
{
	struct<6> Var0;
	
	if (Global_24B2CE.f_1E4.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_24B2CE.f_1E4 = { Var0 };
	}
}

void func_210(bool bParam0)//Position - 0xADD5
{
	if (bParam0)
	{
		Global_24B2CE.f_2BE = 0;
	}
	else
	{
		Global_24B2CE.f_2BE = 1;
	}
}

void func_211(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0xADF5
{
	if (bParam0)
	{
		if (func_222())
		{
			func_221();
		}
		Global_24B2CE.f_2BF.f_203 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_24B2CE.f_2BF.f_1F8 = iParam1;
		Global_24B2CE.f_2BF.f_1F9 = iParam2;
		Global_24B2CE.f_2BF.f_1FA = iParam10;
		func_219();
		func_215(8, 0, 0, 0, 0);
		Global_24B2CE.f_2BF.f_1FB = iParam11;
		Global_24B2CE.f_2BF.f_1FE = iParam3;
		Global_24B2CE.f_2BF.f_1FF = iParam4;
		Global_24B2CE.f_2BF.f_1FC = iParam5;
		Global_24B2CE.f_2BF.f_1FD = iParam6;
		Global_24B2CE.f_2BF.f_200 = iParam7;
		Global_24B2CE.f_2BF.f_201 = iParam8;
		Global_24B2CE.f_2BF.f_202 = iParam9;
		Global_24B2CE.f_6C8 = 1;
	}
	else
	{
		func_212();
	}
}

void func_212()//Position - 0xAEBC
{
	if (func_222() && !func_214())
	{
		func_221();
	}
	if (func_214())
	{
		func_213();
	}
	else
	{
		func_219();
		func_215(0, 0, 0, 0, 0);
		Global_24B2CE.f_6C8 = 0;
		Global_24B2CE.f_6C7 = 0;
	}
}

void func_213()//Position - 0xAF04
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_2BF), &(Global_24B2CE.f_4C3), 516);
	Global_24B2CE.f_1E4 = { Global_24B2CE.f_1EA };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_2BF.f_203)
	{
		Global_24B2CE.f_6C7 = 0;
	}
}

int func_214()//Position - 0xAF4C
{
	if ((Global_24B2CE.f_6C7 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_4C3.f_203) && SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_4C3.f_203))
	{
		return 1;
	}
	return 0;
}

void func_215(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xAF8B
{
	if (Global_252F9E.f_761.f_2B2.f_10 != func_22())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[Global_252F9E.f_761.f_2B2.f_10 /*413*/].f_191, 0) && func_216())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_24CF98 = 0;
	}
	Global_24B2CE.f_1E4 = iParam0;
	Global_24B2CE.f_1E4.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_24B2CE.f_1E4.f_2 = iParam1;
	Global_24B2CE.f_1E4.f_3 = iParam2;
	Global_24B2CE.f_1E4.f_4 = iParam3;
	Global_24B2CE.f_1E4.f_5 = iParam4;
}

int func_216()//Position - 0xB02A
{
	if (((func_226(CAM::_0xDC9DA9E8789F5246()) == 229 || func_226(CAM::_0xDC9DA9E8789F5246()) == 191) || func_218()) || func_217())
	{
		return 0;
	}
	return 1;
}

var func_217()//Position - 0xB06A
{
	return Global_1805F4;
}

int func_218()//Position - 0xB076
{
	if (Global_440000 == 6)
	{
		return 1;
	}
	return 0;
}

void func_219()//Position - 0xB08B
{
	if (func_222() && !func_214())
	{
		func_221();
	}
	func_220();
	Global_24B2CE.f_2BF = 0;
}

void func_220()//Position - 0xB0B4
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_24B2CE.f_2BF.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_221()//Position - 0xB0EF
{
	if (func_214())
	{
		if (Global_24B2CE.f_2BF.f_203 == Global_24B2CE.f_4C3.f_203)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_2BF.f_203)
	{
		unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_4C3), &(Global_24B2CE.f_2BF), 516);
		Global_24B2CE.f_1EA = { Global_24B2CE.f_1E4 };
		Global_24B2CE.f_6C7 = 1;
	}
}

int func_222()//Position - 0xB15D
{
	if ((Global_24B2CE.f_6C8 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_2BF.f_203) && SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_2BF.f_203))
	{
		return 1;
	}
	return 0;
}

void func_223()//Position - 0xB19C
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_16A), &Global_24C49A, 121);
}

void func_224()//Position - 0xB1B5
{
	func_225();
	Global_24B2CE.f_8C5 = 0;
}

void func_225()//Position - 0xB1C9
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_24B2CE.f_8C6[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_226(int iParam0)//Position - 0xB1F5
{
	if (func_136(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_21;
	}
	return 4294967295;
}

void func_227()//Position - 0xB218
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_26862F.f_130F))
	{
		if (!Global_26862F.f_130F == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_26862F.f_130E < 1f)
		{
			return;
		}
	}
	Global_26862F.f_130F = 4294967295;
	Global_26862F.f_130E = 1f;
}

void func_228(int iParam0)//Position - 0xB25F
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_4), iParam0);
}

void func_229(int iParam0)//Position - 0xB27C
{
	MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_4), iParam0);
}

void func_230(int iParam0)//Position - 0xB299
{
	MISC::SET_BIT(&(Global_26862F.f_1313.f_27), iParam0);
}

void func_231(int iParam0)//Position - 0xB2B0
{
	if (func_232() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_247C05)
	{
		return;
	}
	Global_247C05 = iParam0;
	Global_247C07 = 0;
	Global_247C08 = 0;
}

int func_232()//Position - 0xB2E5
{
	if ((((Global_EC6C9 != 4294967295 && Global_EC6C9 != 33) && Global_EC6C9 != 35) && Global_EC6C9 != 37) && Global_EC6C9 != 21)
	{
		return 1;
	}
	return 0;
}

int func_233(int iParam0)//Position - 0xB32B
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_234(float fParam0)//Position - 0xB37B
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_235())
	{
		return;
	}
	fVar0 = (Global_26862F.f_130E - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_26862F.f_130F))
	{
		if (!Global_26862F.f_130F == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_26862F.f_130E = fParam0;
	Global_26862F.f_130F = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_235()//Position - 0xB3E7
{
	switch (func_236())
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

int func_236()//Position - 0xB41B
{
	return Global_6373;
}

float func_237(int iParam0)//Position - 0xB426
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
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
		
		default:
	}
	return 1f;
}

int func_238(int iParam0)//Position - 0xB5BA
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
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
			return 1;
		
		default:
	}
	return 0;
}

int func_239(int iParam0, int iParam1)//Position - 0xB682
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
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
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_240(int iParam0)//Position - 0xB803
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

int func_241(int iParam0)//Position - 0xB8BB
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
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
			return 1;
		
		default:
	}
	return 0;
}

void func_242(vector3 vParam0, int iParam1, int iParam2)//Position - 0xB9B9
{
	Global_24B2CE.f_2C.f_31 = { vParam0 };
	Global_24B2CE.f_2C.f_34 = iParam1;
	Global_24B2CE.f_2C.f_35 = iParam2;
}

bool func_243(int iParam0, int iParam1)//Position - 0xB9E3
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_D0, iParam1);
}

int func_244(int iParam0)//Position - 0xB9FC
{
	if (func_245(iParam0))
	{
		if (func_246(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_245(int iParam0)//Position - 0xBA1B
{
	if (iParam0 != func_22())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_22())
		{
			return Global_18CD5B[iParam0 /*560*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_246(int iParam0)//Position - 0xBA50
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return func_199(iParam0, 9);
	}
	return 0;
}

void func_247(int iParam0, float fParam1)//Position - 0xBA6E
{
	int iVar0;
	
	iVar0 = func_250(iParam0);
	if (iVar0 == 4294967295)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_248();
	}
}

void func_248()//Position - 0xBA94
{
	if (!func_249(CAM::_0xDC9DA9E8789F5246()))
	{
		func_229(25);
	}
}

bool func_249(int iParam0)//Position - 0xBAAE
{
	return func_199(iParam0, 25);
}

int func_250(int iParam0)//Position - 0xBABE
{
	switch (iParam0)
	{
		case 152:
			return Global_40001.f_3079;
		
		case 142:
			return Global_40001.f_306D;
		
		case 157:
			return Global_40001.f_304C;
		
		case 159:
			return Global_40001.f_303B;
		
		case 162:
			return Global_40001.f_30AA;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return 4294967295;
}

int func_251(int iParam0)//Position - 0xBB34
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

int func_252(int iParam0)//Position - 0xBB5A
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iVar0 /*560*/].f_1, 7);
	}
	return 0;
}

bool func_253(int iParam0)//Position - 0xBB80
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 2);
}

void func_254(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0xBB98
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
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
	struct<2> Var22;
	
	if (func_395(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = 4294967295;
	iVar12 = 4294967295;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_24 = 0;
	if (func_393() || iParam2 == 27)
	{
		if (func_340(iParam1, iParam2, uParam3, Global_180518, 0, func_391(), sParam7))
		{
			func_339(1);
			if ((!func_337() && !func_335()) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 1))
			{
				if (func_334())
				{
					func_331();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_1B == 0)
					{
						func_330(1);
						Global_180518 = 0;
						iVar19 = 4294967295;
						if (Global_1805F5 != 1)
						{
							func_329(iParam1, 0, 0);
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 7))
							{
								GRAPHICS::_0x35FB78DC42B7BD21(&(uParam3->f_21), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = 4294967295;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_1072(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
									if (!func_146(iVar3, 0))
									{
										if ((func_328(iVar3) || Global_24FBF9[iVar3 /*413*/].f_EC != 4294967295) || func_115(iVar3))
										{
											iVar9 = iVar3;
											if (func_245(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_325(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_322(CAM::_0xDC9DA9E8789F5246(), 0) && func_226(CAM::_0xDC9DA9E8789F5246()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_321())
							{
								if (func_1072(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
								}
								else
								{
									iVar3 = func_22();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_320(iVar3) && func_316(iVar3, iParam2)) && func_1072(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1841F3[iVar9 /*790*/].f_D3.f_6;
								Var6 = { func_311(iVar3) };
								if (iVar3 == CAM::_0xDC9DA9E8789F5246())
								{
									uParam3->f_23 = iVar18;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_88(iVar3) };
								iVar5 = func_305(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
								}
								Global_180518++;
								if ((uParam0[iVar17 /*42*/])->f_16 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_16;
								}
								if ((uParam0[iVar17 /*42*/])->f_1F != 4294967295)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_1F;
								}
								if ((uParam0[iVar17 /*42*/])->f_29 != 4294967295)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_29;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != 4294967295 || (uParam0[iVar17 /*42*/])->f_16 != -1f) || (uParam0[iVar17 /*42*/])->f_1F != 4294967295)
								{
									if (!func_321())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != 4294967295)
								{
									func_300(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_68), func_299(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = 4294967294;
									}
								}
								iVar16 = func_293(iVar3, 0);
								if (bVar2)
								{
									if (func_292(iVar3, 1) && iVar1[iVar9] != 4294967295)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_27 != 4294967295)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_27, 16);
								}
								if (func_291(iParam5))
								{
									func_290(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								else
								{
									func_290(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								MISC::SET_BIT(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
							if (func_1072(iVar3, 0, 1) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar14, iVar3))
							{
								iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
							}
							else
							{
								iVar3 = func_22();
							}
							if (func_320(iVar3))
							{
								if (func_1072(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1841F3[iVar9 /*790*/].f_D3.f_6;
									Var6 = { func_311(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_88(iVar3) };
									iVar5 = func_305(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
									}
									Global_180518++;
									iVar16 = func_293(iVar3, 1);
									if (bVar2)
									{
										if (func_292(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
									func_268(iVar3, PLAYER::GET_PLAYER_NAME(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 11))
						{
							func_265(uParam3, iParam1);
						}
						func_264(&(uParam3->f_15));
						func_263();
						uParam3->f_1B = 2;
					}
					if (uParam3->f_1B == 2)
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 7))
						{
							func_262(uParam3, iParam1);
							func_261(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_21), 7);
						}
						func_262(uParam3, iParam1);
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 11))
						{
							MISC::SET_BIT(&(uParam3->f_21), 11);
						}
						if (func_257(uParam3))
						{
							Global_1805F5 = 1;
						}
						func_255(uParam3);
						if (Global_1805F5 == 1)
						{
							uParam3->f_1B = 0;
						}
						if (Global_1805F5 == 2)
						{
							uParam3->f_1B = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_1B = 0;
			func_263();
			func_330(0);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 7))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam3->f_21), 7);
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 10))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam3->f_21), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_255(var uParam0)//Position - 0xC1E8
{
	if (!func_9(&(uParam0->f_15)))
	{
		func_8(&(uParam0->f_15), 0, 0);
	}
	else if (func_6(&(uParam0->f_15), 250, 0))
	{
		func_264(&(uParam0->f_15));
		func_256(0);
	}
}

void func_256(bool bParam0)//Position - 0xC224
{
	if (bParam0)
	{
		if (Global_1805F5 != 2)
		{
			Global_1805F5 = 2;
		}
	}
	else
	{
		switch (Global_1805F5)
		{
			case 0:
				Global_1805F5 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_257(var uParam0)//Position - 0xC26A
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_25;
	iVar3 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_25);
	if (iVar3 != func_22() && func_1072(iVar3, 0, 1))
	{
		Var2 = { func_88(iVar3) };
		iVar1 = func_260(uParam0, uParam0->f_25);
		if (func_259(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_258(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_258(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_258(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_258(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar4 = 1;
							func_258(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_258(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_25++;
	if (uParam0->f_25 >= 32)
	{
		uParam0->f_25 = 0;
	}
	return iVar4;
}

void func_258(var uParam0, int iParam1, int iParam2)//Position - 0xC397
{
	uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_259(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0xC3A9
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_260(var uParam0, int iParam1)//Position - 0xC3B9
{
	return uParam0->f_26[iParam1 /*2*/];
}

void func_261(int iParam0, bool bParam1, int iParam2)//Position - 0xC3C9
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::SET_SEETHROUGH(bParam1);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
	}
}

void func_262(var uParam0, int iParam1)//Position - 0xC3FF
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_21, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_23);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		MISC::SET_BIT(&(uParam0->f_21), 10);
	}
}

void func_263()//Position - 0xC436
{
	if (Global_1805F5 != 0)
	{
		Global_1805F5 = 0;
	}
}

void func_264(var uParam0)//Position - 0xC44B
{
	uParam0->f_1 = 0;
}

void func_265(var uParam0, int iParam1)//Position - 0xC458
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_22())
		{
			if (func_1072(iVar2, 0, 1))
			{
				if (uParam0->f_26[iVar0 /*2*/].f_1 != 4294967295)
				{
					iVar1 = func_267(uParam0->f_26[iVar0 /*2*/], 0);
					func_266(iParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_1841F3[iVar0 /*790*/].f_D3.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_266(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC4CB
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
			}
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
	}
}

int func_267(int iParam0, bool bParam1)//Position - 0xC507
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_268(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0xC53B
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_289() && iParam4 < func_288())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_18051A)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1805F5 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam4);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 8) || uParam3->f_6C == 6)
			{
				func_287("");
			}
			else
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam10);
			}
			func_287(sParam1);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam11);
			if (uParam3->f_6C == 6)
			{
				func_287("");
			}
			else
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(65);
			}
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4294967295);
			func_287("");
			if (uParam3->f_6C == 6)
			{
				func_287("");
			}
			else
			{
				func_287(&sParam5);
			}
			func_273(uParam3, iParam0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			if (func_272(uParam3))
			{
				func_271("DPAD_FRIEND");
			}
			else if (func_270(uParam3))
			{
				func_271("DPAD_FRIEND");
			}
			else if (func_269(uParam3))
			{
				func_271("DPAD_CREW");
			}
			else
			{
				func_271("");
			}
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
	}
}

bool func_269(var uParam0)//Position - 0xC664
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_21, 6);
}

bool func_270(var uParam0)//Position - 0xC675
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_21, 5);
}

void func_271(char* sParam0)//Position - 0xC686
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

int func_272(var uParam0)//Position - 0xC698
{
	if (func_270(uParam0) && func_269(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_273(var uParam0, int iParam1)//Position - 0xC6B9
{
	if (func_286(iParam1))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(121);
	}
	else if (func_278(iParam1))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(122);
	}
	else if (((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_1B, 15) && iParam1 > 4294967295) && iParam1 < 32) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam1 /*413*/].f_19A, 0))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(123);
	}
	else
	{
		if (func_274())
		{
			uParam0->f_24 = 0;
		}
		GRAPHICS::SET_SEETHROUGH(uParam0->f_24);
	}
}

int func_274()//Position - 0xC73A
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_276() || func_275())
		{
			return 1;
		}
	}
	return 0;
}

var func_275()//Position - 0xC75F
{
	return Global_255C02.f_E;
}

int func_276()//Position - 0xC76D
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_275();
	}
	return func_277(Global_440000.f_1FEDE);
}

int func_277(int iParam0)//Position - 0xC791
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_40001.f_1378[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_278(int iParam0)//Position - 0xC7CB
{
	if ((func_1072(iParam0, 0, 1) && func_282()) && func_279(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_279(int iParam0, bool bParam1)//Position - 0xC7F8
{
	return func_280(iParam0, bParam1, 1);
}

int func_280(int iParam0, bool bParam1, int iParam2)//Position - 0xC809
{
	int iVar0;
	
	if (iParam0 == func_22())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_281(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18CD5B[iParam0 /*560*/].f_B;
	if (iVar0 != func_22() && Global_18CD5B[iVar0 /*560*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_281(int iParam0, int iParam1)//Position - 0xC865
{
	if (iParam0 != func_22())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_22())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B == iParam0 && Global_18CD5B[iParam0 /*560*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_282()//Position - 0xC8B4
{
	if (func_137(CAM::_0xDC9DA9E8789F5246()) || func_285())
	{
		if (!func_283(CAM::_0xDC9DA9E8789F5246(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_283(int iParam0, int iParam1)//Position - 0xC8E4
{
	if (func_284(iParam0) == iParam1)
	{
		return func_252(iParam0);
	}
	return 0;
}

int func_284(int iParam0)//Position - 0xC901
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18CD5B[iVar0 /*560*/];
	}
	return 4294967295;
}

int func_285()//Position - 0xC920
{
	switch (func_226(CAM::_0xDC9DA9E8789F5246()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_286(int iParam0)//Position - 0xC95E
{
	if (func_274())
	{
		if (func_1072(iParam0, 0, 1))
		{
			return func_245(iParam0);
		}
	}
	if ((func_1072(iParam0, 0, 1) && func_282()) && func_281(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_287(char* sParam0)//Position - 0xC9A6
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

int func_288()//Position - 0xC9B4
{
	int iVar0;
	
	if (Global_18051A)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_289()//Position - 0xC9D0
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_18051A)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_290(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0xC9E8
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_289() && iParam3 < func_288())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_18051A)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == 4294967294)
			{
				iParam10 = 4294967295;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1805F5 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam2->f_21, 8) || uParam2->f_6C == 6)
				{
					func_287("");
				}
				else
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam9);
				}
				if (uParam2->f_6C == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_271(sParam16);
				}
				else
				{
					func_287(&(uParam2->f_1));
				}
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam11);
				if (uParam2->f_6C == 6)
				{
					func_287("");
				}
				else
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
				}
				else
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4294967295);
				}
				if (func_321())
				{
					func_287("");
				}
				else if (uParam2->f_6C == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (uParam2->f_6C == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (uParam2->f_6C == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (uParam2->f_6C == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_68)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != 4294967295)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_68));
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (uParam2->f_6C == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (uParam2->f_6C == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					}
				}
				else if (iParam15 > 4294967295)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_68)))
					{
						func_271(&(uParam2->f_68));
					}
					else
					{
						func_287("");
					}
				}
				else if (iParam14 != 4294967295)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (iParam10 != 4294967295)
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam10);
				}
				else
				{
					func_287("");
				}
				if (uParam2->f_6C == 6)
				{
					func_287("");
				}
				else
				{
					func_287(&sParam4);
				}
				func_273(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_287("");
					func_287("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
				}
				if (func_272(uParam2))
				{
					func_271("DPAD_FRIEND");
				}
				else if (func_270(uParam2))
				{
					func_271("DPAD_FRIEND");
				}
				else if (func_269(uParam2))
				{
					func_271("DPAD_CREW");
				}
				else
				{
					func_271("");
				}
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
		}
	}
}

int func_291(int iParam0)//Position - 0xCD41
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_292(int iParam0, bool bParam1)//Position - 0xCD65
{
	if (!bParam1)
	{
		if (func_245(iParam0))
		{
			return 0;
		}
	}
	return Global_18CD5B[iParam0 /*560*/].f_B != func_22();
}

int func_293(int iParam0, bool bParam1)//Position - 0xCD90
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_137(iParam0)) && !func_298(iParam0))
	{
		iVar0 = func_297();
	}
	iVar1 = func_296(iParam0);
	if (!iVar1 == 4294967295)
	{
		return func_294(iVar1);
	}
	return iVar0;
}

int func_294(int iParam0)//Position - 0xCDDA
{
	int iVar0;
	
	if (iParam0 > 4294967295)
	{
		iVar0 = func_295(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_295(int iParam0)//Position - 0xCE9D
{
	return Global_24E392.f_817.f_2C[iParam0 /*2*/].f_1;
}

int func_296(int iParam0)//Position - 0xCEB4
{
	if (!iParam0 == func_22())
	{
		if (func_292(iParam0, 1))
		{
			return Global_24E392.f_817.f_B[func_87(iParam0)];
		}
	}
	return 4294967295;
}

int func_297()//Position - 0xCEE6
{
	return 21;
}

bool func_298(int iParam0)//Position - 0xCEF0
{
	return func_199(iParam0, 20);
}

char* func_299(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xCF00
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_300(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0xD08D
{
	if (func_304(iParam3))
	{
		*fParam1 = (func_301(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_291(iParam3))
	{
		*fParam1 = (func_301(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_301(int iParam0, int iParam1)//Position - 0xD0DD
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_303(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_302(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_302(float fParam0)//Position - 0xD180
{
	return (fParam0 / 1.609344f);
}

float func_303(float fParam0)//Position - 0xD190
{
	return (fParam0 / 0.3048f);
}

int func_304(int iParam0)//Position - 0xD1A0
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_305(int iParam0)//Position - 0xD1FC
{
	int iVar0;
	
	iVar0 = func_308(iParam0);
	if (iVar0 == 4294967295)
	{
		func_306(iParam0, 1);
		return 0;
	}
	Global_150E71[iVar0 /*5*/].f_4 = 1;
	return Global_150E71[iVar0 /*5*/].f_2;
}

void func_306(int iParam0, bool bParam1)//Position - 0xD232
{
	if (!func_1072(iParam0, 0, 1))
	{
		return;
	}
	if (func_308(iParam0) != 4294967295)
	{
		return;
	}
	if (Global_150F14)
	{
		if (iParam0 == Global_150F14.f_1)
		{
			return;
		}
	}
	if (func_307(iParam0))
	{
		return;
	}
	if (Global_150F3A >= 32)
	{
		return;
	}
	Global_150F19[Global_150F3A] = iParam0;
	Global_150F3A++;
	if (bParam1)
	{
	}
}

int func_307(int iParam0)//Position - 0xD29E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_150F3A)
	{
		if (Global_150F19[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_308(int iParam0)//Position - 0xD2D0
{
	int iVar0;
	
	if (!func_1072(iParam0, 0, 1))
	{
		return 4294967295;
	}
	if (Global_150F12 == 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_150F12)
	{
		if (Global_150E71[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_150E71[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_150E71[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_309(iVar0);
			return 4294967295;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_309(int iParam0)//Position - 0xD34F
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_150F12)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_150E71[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_150E71[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_150E71[iParam0 /*5*/].f_2), 64);
			HUD::_0x317EBA71D7543F52(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_150E71[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_150F12)
	{
		Global_150E71[iVar2 /*5*/] = { Global_150E71[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_310(&(Global_150E71[iVar2 /*5*/]));
	Global_150F12 = (Global_150F12 - 1);
}

void func_310(var uParam0)//Position - 0xD405
{
	*uParam0 = 0;
	uParam0->f_1 = func_22();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = HUD::_0x13C4B962653A5280();
	}
}

struct<4> func_311(int iParam0)//Position - 0xD432
{
	char cVar0[32];
	
	if (func_1072(iParam0, 0, 1))
	{
		Global_2633E1 = { func_88(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_259(Global_2633E1))
			{
				if (!NETWORK::_0xB57A49545BA53CE7(&Global_2633E1))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::_0x72D918C99BCACC54(0))
		{
			return cVar0;
		}
		if (func_315(&Global_2633E1))
		{
			Global_26339B = { func_313(iParam0) };
			func_312(&Global_26339B, &cVar0);
		}
	}
	return cVar0;
}

void func_312(var uParam0, char* sParam1)//Position - 0xD4B3
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

struct<35> func_313(int iParam0)//Position - 0xD4C5
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_314(iParam0))
	{
		return Global_140879[CAM::_0xDC9DA9E8789F5246() /*35*/];
	}
	Var0 = { func_88(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_314(int iParam0)//Position - 0xD501
{
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		return 1;
	}
	return 0;
}

int func_315(var uParam0)//Position - 0xD517
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (GRAPHICS::_DRAW_SHOWROOM() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_316(int iParam0, int iParam1)//Position - 0xD53D
{
	if (iParam1 == 26)
	{
		if ((func_253(iParam0) || func_319(iParam0)) || func_318(iParam0))
		{
			return 0;
		}
	}
	if (!func_317(iParam0))
	{
		return 0;
	}
	if ((!func_328(iParam0) && Global_24FBF9[iParam0 /*413*/].f_EC == 4294967295) && !func_115(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_317(int iParam0)//Position - 0xD5AC
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_8E, 22);
}

bool func_318(int iParam0)//Position - 0xD5C5
{
	if (func_253(iParam0))
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 8);
}

int func_319(int iParam0)//Position - 0xD5EB
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 10) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 9));
	}
	return 0;
}

int func_320(int iParam0)//Position - 0xD629
{
	int iVar0;
	
	if (iParam0 == func_22())
	{
		return 0;
	}
	if (func_146(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iVar0 /*790*/].f_8E, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_321()//Position - 0xD66E
{
	switch (func_226(CAM::_0xDC9DA9E8789F5246()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_284(CAM::_0xDC9DA9E8789F5246()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_298(CAM::_0xDC9DA9E8789F5246()))
	{
		switch (func_226(CAM::_0xDC9DA9E8789F5246()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_283(CAM::_0xDC9DA9E8789F5246(), 236))
	{
		return 1;
	}
	return 0;
}

int func_322(int iParam0, int iParam1)//Position - 0xD7AA
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 && func_323(Global_18CD5B[iParam0 /*560*/].f_B.f_21))
	{
		return 1;
	}
	if (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295)
	{
		if (func_323(Global_18CD5B[iParam0 /*560*/].f_B.f_20))
		{
			return 1;
		}
	}
	return 0;
}

int func_323(int iParam0)//Position - 0xD810
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_324(iParam0, 0);
	return 0;
}

int func_324(int iParam0, int iParam1)//Position - 0xD86A
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_325(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD8BF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1072(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_146(iVar1, 0))
			{
				if ((func_328(iVar1) || Global_24FBF9[iVar1 /*413*/].f_EC != 4294967295) || func_115(iVar1))
				{
					if (func_326(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_326(int iParam0, int iParam1, bool bParam2)//Position - 0xD949
{
	if (iParam1 != func_22())
	{
		if (!bParam2)
		{
			if (func_327(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_22())
		{
			return iParam1 == Global_18CD5B[iParam0 /*560*/].f_B;
		}
	}
	return 0;
}

int func_327(int iParam0, int iParam1)//Position - 0xD993
{
	if (iParam1 != func_22())
	{
		if (iParam0 != func_22())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B != func_22())
			{
				if (Global_18CD5B[iParam0 /*560*/].f_B == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_328(int iParam0)//Position - 0xD9D8
{
	if (func_1072(iParam0, 0, 1))
	{
		if (func_1072(CAM::_0xDC9DA9E8789F5246(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, CAM::_0xDC9DA9E8789F5246()) || func_226(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_329(int iParam0, int iParam1, int iParam2)//Position - 0xDA19
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

void func_330(bool bParam0)//Position - 0xDA47
{
	if (bParam0)
	{
		if (Global_14E0B2.f_2 == 0)
		{
			Global_14E0B2.f_2 = 1;
		}
	}
	else if (Global_14E0B2.f_2 == 1)
	{
		Global_14E0B2.f_2 = 0;
	}
}

void func_331()//Position - 0xDA79
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 1))
	{
		if (func_333())
		{
			func_332();
		}
	}
}

void func_332()//Position - 0xDA9B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_252F9E.f_A90[iVar0 /*80*/].f_2 != 0)
		{
			Global_252F9E.f_A90[iVar0 /*80*/].f_2 = 5;
			MISC::SET_BIT(&(Global_252F9E.f_A90[iVar0 /*80*/].f_45), 0);
		}
		iVar0++;
	}
}

bool func_333()//Position - 0xDAE6
{
	return Global_252F9E.f_A90[0 /*80*/].f_1 != 0;
}

int func_334()//Position - 0xDAFC
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 0) && func_333())
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 1) && func_333())
	{
		return 1;
	}
	return 0;
}

int func_335()//Position - 0xDB3D
{
	if (func_333())
	{
		if (func_336(Global_252F9E.f_A90[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_336(int iParam0)//Position - 0xDB64
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_337()//Position - 0xDBE4
{
	if (func_333())
	{
		if (func_338(Global_252F9E.f_A90[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_338(int iParam0)//Position - 0xDC0B
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_339(int iParam0)//Position - 0xDC9D
{
	if (Global_14E0B2.f_1 != Global_14E0B2)
	{
		Global_14E0B2.f_1 = Global_14E0B2;
	}
	if (Global_14E0B2 != iParam0)
	{
		Global_14E0B2 = iParam0;
	}
}

int func_340(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0xDCCB
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	char* sVar5;
	int iVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_390(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_389();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_388())
		{
			if (func_387() > 0 && Global_18051A)
			{
				HUD::_0x25F87B30C382FCA7();
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_374())
		{
			func_373(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11E1, 26))
	{
		func_373(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_9(&(uParam2->f_13)))
	{
		if (func_387() == 1)
		{
			func_372(bVar3, iParam0, 0);
			func_8(&(uParam2->f_13), 0, 0);
			func_373(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_26862F.f_11E2), 5);
		}
	}
	if (func_9(&(uParam2->f_13)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_6(&(uParam2->f_13), 10000, 0) || (func_387() == 0 && !bParam5))
		{
			func_373(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_371();
				if (iParam1 == 26 || iParam1 == 27)
				{
					HUD::_0x25F87B30C382FCA7();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam2->f_21, 0))
			{
				if (bVar2 == 0)
				{
					func_371();
					if (iParam1 == 26 || iParam1 == 27)
					{
						HUD::_0x25F87B30C382FCA7();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (func_372(bVar3, iParam0, 0))
				{
					func_329(iParam0, 0, 0);
					sVar1 = func_369(iParam1, &(Global_440000.f_1FEE5), bParam4);
					Var0 = { func_367(iParam1) };
					if (bParam4)
					{
						func_364(iParam0, sVar1, "", 0, 4294967295, 4294967295, 1);
					}
					else if (iParam1 == 26)
					{
						func_357(iParam0, func_361(uParam2), func_358(uParam2), 4294967295);
					}
					else if (iParam1 == 27)
					{
						sVar5 = func_350(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar5 = sParam6;
						}
						func_348(iParam0, sVar5, func_349(), 4294967295);
					}
					else if (func_274())
					{
						uParam2->f_22 = Global_180519;
						func_364(iParam0, sVar1, &Var0, 1, 4294967295, Global_180519, 1);
					}
					else if (bVar2)
					{
						uParam2->f_22 = Global_180519;
						func_364(iParam0, sVar1, "", 0, 4294967295, Global_180519, 1);
					}
					else
					{
						iVar6 = func_341(iParam1);
						func_364(iParam0, sVar1, &Var0, 1, iVar6, 4294967295, 1);
					}
					MISC::SET_BIT(&(uParam2->f_21), 0);
				}
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam2->f_21, 0))
			{
				Global_180518 = uParam3;
				Global_180517 = 1;
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (bVar2)
				{
					if (uParam2->f_22 != Global_180519)
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&(uParam2->f_21), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_341(int iParam0)//Position - 0xDF9E
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (func_347())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
		case 30:
		case 29:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_346(CAM::_0xDC9DA9E8789F5246()))
			{
				iVar0 = 20;
			}
			if (func_345(CAM::_0xDC9DA9E8789F5246()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_344(CAM::_0xDC9DA9E8789F5246()))
	{
		iVar0 = 2;
	}
	if (func_342())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_342()//Position - 0xE0EA
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_122();
	}
	return func_343(Global_440000.f_1FEDE);
}

int func_343(int iParam0)//Position - 0xE10E
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

bool func_344(int iParam0)//Position - 0xE148
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 4;
}

bool func_345(int iParam0)//Position - 0xE15D
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 7;
}

bool func_346(int iParam0)//Position - 0xE172
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 2;
}

bool func_347()//Position - 0xE187
{
	return Global_440000.f_1 == 0;
}

void func_348(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xE197
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_271(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		func_271("");
		if (iParam3 != 4294967295)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

char* func_349()//Position - 0xE1F6
{
	switch (func_226(CAM::_0xDC9DA9E8789F5246()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_350(var uParam0)//Position - 0xE24E
{
	switch (uParam0->f_70)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_6E)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_226(CAM::_0xDC9DA9E8789F5246()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_353())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_352(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_352(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_351(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_B0))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_351(int iParam0)//Position - 0xE67A
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_352(bool bParam0)//Position - 0xE6AC
{
	return func_279(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

bool func_353()//Position - 0xE6BE
{
	return (func_356() && func_354(func_355()));
}

bool func_354(int iParam0)//Position - 0xE6D7
{
	return func_281(iParam0, 1);
}

int func_355()//Position - 0xE6E6
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_23;
}

bool func_356()//Position - 0xE6FD
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 148;
}

void func_357(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xE713
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_271(sParam1);
		}
		else if (func_284(CAM::_0xDC9DA9E8789F5246()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		func_271("");
		if (iParam3 != 4294967295)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

char* func_358(var uParam0)//Position - 0xE79A
{
	int iVar0;
	
	iVar0 = func_284(CAM::_0xDC9DA9E8789F5246());
	if (func_360())
	{
		if (uParam0->f_67 != 4294967295)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_359())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_359()//Position - 0xE945
{
	if (func_284(CAM::_0xDC9DA9E8789F5246()) == 133)
	{
		return Global_26862F.f_12C4;
	}
	return 4294967295;
}

bool func_360()//Position - 0xE968
{
	return Global_184174;
}

char* func_361(var uParam0)//Position - 0xE974
{
	int iVar0;
	
	iVar0 = func_284(CAM::_0xDC9DA9E8789F5246());
	if (func_360())
	{
		if (uParam0->f_67 != 4294967295)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_363() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_363() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_359())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_362() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_362()//Position - 0xEB69
{
	return Global_26862F.f_12C7;
}

int func_363()//Position - 0xEB78
{
	if (func_284(CAM::_0xDC9DA9E8789F5246()) == 132)
	{
		return Global_26862F.f_12C2;
	}
	return 4294967295;
}

void func_364(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0xEB9B
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_287(sParam1);
		}
		else if (iParam5 != 4294967295)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		else
		{
			func_271(sParam1);
		}
		if (func_388() && iParam6)
		{
			if (func_366())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		else
		{
			func_271(sParam2);
		}
		if (iParam4 != 4294967295)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam4);
			if (func_365(CAM::_0xDC9DA9E8789F5246()))
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(166);
			}
			else if (func_122())
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(220);
			}
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

int func_365(int iParam0)//Position - 0xEC5C
{
	if (func_346(iParam0) || func_345(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_366()//Position - 0xEC7E
{
	return Global_18051A;
}

struct<4> func_367(int iParam0)//Position - 0xEC8A
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_368(CAM::_0xDC9DA9E8789F5246()) || func_344(CAM::_0xDC9DA9E8789F5246()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_440000.f_26, 16);
			break;
	}
	if (func_274() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_440000.f_26, 16);
	}
	return Var0;
}

bool func_368(int iParam0)//Position - 0xED25
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 5;
}

char* func_369(int iParam0, char* sParam1, bool bParam2)//Position - 0xED3A
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_274() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_370();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_180607 == 0)
		{
			Global_180607 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_180607 == 1)
		{
			Global_180607 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_180607 == 0)
		{
			Global_180607 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 30:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_370()//Position - 0xEE9E
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_371()//Position - 0xEEE2
{
	Global_90A3 = 1;
}

bool func_372(bool bParam0, int iParam1, bool bParam2)//Position - 0xEEEE
{
	if (bParam0)
	{
		*iParam1 = unk_0x9934FEFB3B8C6DB8("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0x9934FEFB3B8C6DB8("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0x9934FEFB3B8C6DB8("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_373(int iParam0, var uParam1, bool bParam2)//Position - 0xEF2E
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_21), 7);
	Global_180518 = 0;
	func_263();
	Global_180517 = 0;
	uParam1->f_1B = 0;
	if (bParam2)
	{
		if (func_9(&(uParam1->f_13)))
		{
			func_264(&(uParam1->f_13));
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11E2), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_21, 0))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_21), 0);
	}
	HUD::_CLEAR_NOTIFICATIONS_POS(0f);
}

int func_374()//Position - 0xEFA0
{
	if (func_386())
	{
		return 0;
	}
	if (func_385())
	{
		return 0;
	}
	if (!func_383())
	{
		return 0;
	}
	if (!func_381())
	{
		return 0;
	}
	if (func_380(8, 4294967295))
	{
		return 0;
	}
	if (func_387() == 2)
	{
		return 0;
	}
	if (Global_26862F.f_11B2)
	{
		return 0;
	}
	if (func_379())
	{
		return 0;
	}
	else if (!func_41(CAM::_0xDC9DA9E8789F5246(), 1) && Global_1403E4[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_378(1) || func_376(1)) || Global_434C.f_7C) || Global_434C)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_375() && Global_19BACA == 2)
	{
		return 0;
	}
	if (func_91(CAM::_0xDC9DA9E8789F5246()) && !func_375())
	{
		return 0;
	}
	if (Global_193F0F)
	{
		return 0;
	}
	if (Global_193F15)
	{
		return 0;
	}
	if (func_204(0))
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 4))
	{
		return 0;
	}
	if (Global_14C619)
	{
		return 0;
	}
	if ((Global_19A0DD.f_2C1.f_5 || Global_19ABD8.f_2C1.f_5) || Global_199D20.f_2C1.f_5)
	{
		return 0;
	}
	return 1;
}

bool func_375()//Position - 0xF108
{
	return (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_1E, 12) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19BACB, 0));
}

int func_376(bool bParam0)//Position - 0xF12A
{
	if (PAD::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			if (func_377(AUDIO::_0x0626A247D2405330()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_434C.f_82)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && unk_0xE11F00B4AC919F45(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xE11F00B4AC919F45(0, 166) || unk_0xE11F00B4AC919F45(0, 167)) || unk_0xE11F00B4AC919F45(0, 168)) || unk_0xE11F00B4AC919F45(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_377(int iParam0)//Position - 0xF215
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_378(bool bParam0)//Position - 0xF272
{
	if (bParam0)
	{
		return (Global_434C.f_4 && Global_434C.f_68 == 4);
	}
	return Global_434C.f_4;
}

bool func_379()//Position - 0xF29B
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_C4 != 0;
}

bool func_380(int iParam0, int iParam1)//Position - 0xF2B2
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

int func_381()//Position - 0xF2ED
{
	if (func_382() == 0)
	{
		return 1;
	}
	return 0;
}

int func_382()//Position - 0xF302
{
	return Global_1406D2.f_12;
}

int func_383()//Position - 0xF310
{
	if (func_384())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_384()//Position - 0xF34F
{
	return Global_1406B6;
}

bool func_385()//Position - 0xF35B
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 5;
}

bool func_386()//Position - 0xF370
{
	return MISC::GET_GAME_TIMER() <= Global_43D7.f_16F1 + 100;
}

int func_387()//Position - 0xF385
{
	return Global_14E0B5.f_44;
}

int func_388()//Position - 0xF393
{
	if (Global_180519 > 16)
	{
		return 1;
	}
	return 0;
}

float func_389()//Position - 0xF3A9
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_390(int iParam0)//Position - 0xF3CD
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
			return 1;
			break;
	}
	return 0;
}

int func_391()//Position - 0xF3F6
{
	if (func_392(CAM::_0xDC9DA9E8789F5246()))
	{
		return Global_141784;
	}
	return 0;
}

int func_392(int iParam0)//Position - 0xF411
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_146(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

int func_393()//Position - 0xF434
{
	if (func_391())
	{
		return 1;
	}
	if (func_318(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_360())
	{
		return 1;
	}
	if (func_137(CAM::_0xDC9DA9E8789F5246()))
	{
		switch (func_284(CAM::_0xDC9DA9E8789F5246()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_394(CAM::_0xDC9DA9E8789F5246()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_394(CAM::_0xDC9DA9E8789F5246()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_394(CAM::_0xDC9DA9E8789F5246()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_394(int iParam0)//Position - 0xF50F
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 4);
}

int func_395(int iParam0)//Position - 0xF527
{
	if (iParam0 == 27)
	{
		if ((func_137(CAM::_0xDC9DA9E8789F5246()) && !func_298(CAM::_0xDC9DA9E8789F5246())) && !func_283(CAM::_0xDC9DA9E8789F5246(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_136(CAM::_0xDC9DA9E8789F5246(), 0) && func_298(CAM::_0xDC9DA9E8789F5246()))
		{
			return 1;
		}
		if (func_396(CAM::_0xDC9DA9E8789F5246()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_396(int iParam0)//Position - 0xF598
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_137(iParam0) && !func_253(iParam0)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 8));
	bVar2 = func_298(iParam0);
	uVar3 = func_404();
	uVar4 = func_398();
	if ((bVar1 && (func_252(iParam0) || func_251(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_246(iParam0)) && !func_397(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_26862F.f_1313.f_D2 != iVar0)
	{
		Global_26862F.f_1313.f_D2 = iVar0;
	}
	return iVar0;
}

bool func_397(int iParam0)//Position - 0xF656
{
	return func_199(iParam0, 19);
}

int func_398()//Position - 0xF666
{
	if ((func_199(CAM::_0xDC9DA9E8789F5246(), 21) || func_199(CAM::_0xDC9DA9E8789F5246(), 22)) || func_401())
	{
		return 1;
	}
	if (func_399())
	{
		func_229(22);
		return 1;
	}
	return 0;
}

int func_399()//Position - 0xF6AB
{
	if (func_136(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if ((func_404() && !func_400()) || func_243(CAM::_0xDC9DA9E8789F5246(), 21))
		{
			return 1;
		}
		else
		{
			func_228(27);
		}
	}
	return 0;
}

bool func_400()//Position - 0xF6EE
{
	return Global_1406A0.f_1;
}

bool func_401()//Position - 0xF6FC
{
	return func_402(306, 4294967295);
}

int func_402(int iParam0, int iParam1)//Position - 0xF70C
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2727B6[iParam0 /*3*/][func_403(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_403(int iParam0)//Position - 0xF738
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_148();
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

bool func_404()//Position - 0xF76C
{
	return Global_1406A0;
}

bool func_405()//Position - 0xF778
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 1);
}

void func_406()//Position - 0xF790
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_407(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_407(int iParam0)//Position - 0xF7CD
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 11))
	{
		if (Local_143.f_22 > 4294967295)
		{
			if (func_405())
			{
				if (!func_398())
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 5))
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 4))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var0))
							{
								if (Var0.f_3)
								{
									if (ENTITY::IS_ENTITY_A_PED(Var0))
									{
										iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
										if (PED::IS_PED_A_PLAYER(iVar2))
										{
											iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
											if (iVar3 == PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22))
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(iVar1))
														{
															iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
															if (iVar4 == CAM::_0xDC9DA9E8789F5246())
															{
																MISC::SET_BIT(&(Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 5);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (func_405())
	{
		if (!func_199(CAM::_0xDC9DA9E8789F5246(), 20))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0))
			{
				if (ENTITY::IS_ENTITY_A_PED(Var0))
				{
					iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
							{
								iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
								if (PED::IS_PED_A_PLAYER(iVar1))
								{
									iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
									if (iVar4 == CAM::_0xDC9DA9E8789F5246())
									{
										if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
										{
											if (func_292(iVar3, 1))
											{
												if (Local_143.f_21 > 4294967295)
												{
													iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_143.f_21));
													if (func_326(iVar3, iVar5, 1))
													{
														func_408(0);
														func_248();
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_408(int iParam0)//Position - 0xF95C
{
	if (!func_298(CAM::_0xDC9DA9E8789F5246()))
	{
		if (iParam0 || func_396(CAM::_0xDC9DA9E8789F5246()) != 0)
		{
			func_229(20);
			if (func_137(CAM::_0xDC9DA9E8789F5246()))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 8))
				{
					MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 8);
				}
			}
		}
	}
}

void func_409()//Position - 0xF9C3
{
	switch (Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_2)
	{
		case 0:
			func_815();
			func_410();
			if (Local_143.f_20 == 2)
			{
				Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_2 = 2;
			}
			else if (Local_143.f_20 == 3)
			{
				Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_2 = 3;
			}
			break;
		
		case 2:
			func_410();
			if (Local_143.f_20 == 3)
			{
				Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_2 = 3;
			}
			break;
		
		case 3:
			func_986();
			break;
	}
}

void func_410()//Position - 0xFA45
{
	struct<20> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	iVar1 = func_22();
	iVar2 = func_22();
	iVar3 = func_22();
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 4))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 9))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 1))
			{
				if (NETSHOP::_NETWORK_SHOP_BASKET_START() == Local_143.f_21 || func_974() == Local_143.f_21)
				{
					if (func_396(CAM::_0xDC9DA9E8789F5246()) >= 2)
					{
						sVar4 = func_814();
						iVar5 = func_813(CAM::_0xDC9DA9E8789F5246());
						func_811(87, "GB_WINNER", "BIGM_SGHTYD", sVar4, iVar5, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 6))
					{
						func_710(1, 1, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
						MISC::SET_BIT(&iLocal_145, 6);
					}
					func_523(142, 1, &Var0, 0);
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
				}
				else if (func_405())
				{
					if (func_292(CAM::_0xDC9DA9E8789F5246(), 1))
					{
						if (func_396(CAM::_0xDC9DA9E8789F5246()) >= 2)
						{
							sVar4 = func_517(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22));
							iVar5 = func_813(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22));
							func_811(88, "GB_WORK_OVER", "BIGM_SGHTFD3", sVar4, iVar5, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
						}
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 6))
						{
							func_710(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
							MISC::SET_BIT(&iLocal_145, 6);
						}
						func_523(142, 0, &Var0, 0);
					}
					else
					{
						if (func_396(CAM::_0xDC9DA9E8789F5246()) >= 2)
						{
							sVar4 = func_517(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22));
							iVar5 = func_813(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22));
							func_811(88, "GB_WORK_OVER", "BIGM_SGHTFD5", sVar4, iVar5, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
						}
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 6))
						{
							func_710(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
							MISC::SET_BIT(&iLocal_145, 6);
						}
						func_523(142, 0, &Var0, 0);
					}
				}
				MISC::SET_BIT(&iLocal_145, 9);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 3))
			{
				func_516(88, "GB_WORK_OVER", "BIGM_SGHTFT", 1, 4294967295, 2, 1);
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 6))
				{
					func_710(0, 7, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
					MISC::SET_BIT(&iLocal_145, 6);
				}
				func_523(142, 0, &Var0, 0);
				MISC::SET_BIT(&iLocal_145, 9);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 4))
			{
				if (Local_143.f_23 > 4294967295)
				{
					iVar2 = PLAYER::INT_TO_PLAYERINDEX(Local_143.f_23);
				}
				if (NETSHOP::_NETWORK_SHOP_BASKET_START() == Local_143.f_21)
				{
					if (func_396(CAM::_0xDC9DA9E8789F5246()) >= 2)
					{
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
						{
							if (func_292(iVar2, 1))
							{
								sVar4 = func_517(iVar2);
								iVar5 = func_813(iVar2);
							}
							else
							{
								sVar4 = PLAYER::GET_PLAYER_NAME(iVar2);
								iVar5 = 1;
							}
							func_811(88, "GB_WORK_OVER", "BIGM_SGHTFMK", sVar4, iVar5, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
						}
						else
						{
							func_811(88, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar4, iVar5, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
						}
					}
					func_523(142, 0, &Var0, 0);
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 6))
					{
						func_710(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
						MISC::SET_BIT(&iLocal_145, 6);
					}
				}
				else if (func_974() == Local_143.f_21)
				{
					iVar1 = PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22);
					if (iVar1 != func_22())
					{
						if (func_396(CAM::_0xDC9DA9E8789F5246()) >= 2)
						{
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
							{
								if (func_292(iVar2, 1))
								{
									sVar4 = func_517(iVar2);
									iVar5 = func_813(iVar2);
								}
								else
								{
									sVar4 = PLAYER::GET_PLAYER_NAME(iVar2);
									iVar5 = 1;
								}
								func_811(88, "GB_WORK_OVER", "BIGM_SGHTGK", sVar4, iVar5, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
							}
							else
							{
								func_811(88, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar4, iVar5, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
							}
						}
						func_523(142, 0, &Var0, 0);
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 6))
						{
							func_710(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
							MISC::SET_BIT(&iLocal_145, 6);
						}
					}
				}
				else if (func_405())
				{
					iVar2 = PLAYER::INT_TO_PLAYERINDEX(Local_143.f_23);
					if (iVar2 != func_22())
					{
						if (iVar2 == CAM::_0xDC9DA9E8789F5246())
						{
							if (func_396(CAM::_0xDC9DA9E8789F5246()) >= 2)
							{
								if (func_515(1))
								{
									func_516(87, "GB_WINNER", "BIGM_SGHTYK", 1, 4294967295, 2, 1);
								}
								else
								{
									func_516(87, "GB_WINNER", "BIGM_SGHTYK2", 1, 4294967295, 2, 1);
								}
							}
							PLAYER::CLEAR_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 6))
							{
								func_710(1, 1, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
								MISC::SET_BIT(&iLocal_145, 6);
							}
							func_523(142, 1, &Var0, 0);
						}
						else if (func_515(1))
						{
							iVar3 = func_514();
							if (func_326(iVar2, iVar3, 1))
							{
								if (func_396(CAM::_0xDC9DA9E8789F5246()) >= 2)
								{
									func_482(87, iVar2, 4294967295, "BIGM_SGHTWK", "GB_WINNER", 1, 4294967295, 2, 4294967295);
								}
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 6))
								{
									func_710(1, 1, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
									MISC::SET_BIT(&iLocal_145, 6);
								}
								func_523(142, 0, &Var0, 0);
							}
							else
							{
								if (func_396(CAM::_0xDC9DA9E8789F5246()) >= 2)
								{
									if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
									{
										if (func_292(iVar2, 1))
										{
											sVar4 = func_517(iVar2);
											iVar5 = func_813(iVar2);
										}
										else
										{
											sVar4 = PLAYER::GET_PLAYER_NAME(iVar2);
											iVar5 = 1;
										}
										func_811(88, "GB_WORK_OVER", "BIGM_SGHTWK", sVar4, iVar5, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
									}
									else
									{
										func_516(88, "GB_WORK_OVER", "BIGM_SGHTRK", 1, 4294967295, 2, 1);
									}
								}
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 6))
								{
									func_710(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
									MISC::SET_BIT(&iLocal_145, 6);
								}
								func_523(142, 0, &Var0, 0);
							}
						}
						else
						{
							if (func_396(CAM::_0xDC9DA9E8789F5246()) >= 2)
							{
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
								{
									if (func_292(iVar2, 1))
									{
										sVar4 = func_517(iVar2);
										iVar5 = func_813(iVar2);
									}
									else
									{
										sVar4 = PLAYER::GET_PLAYER_NAME(iVar2);
										iVar5 = 1;
									}
									func_811(88, "GB_WORK_OVER", "BIGM_SGHTNGK", sVar4, iVar5, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
								}
								else
								{
									func_516(88, "GB_WORK_OVER", "BIGM_SGHTRK", 1, 4294967295, 2, 1);
								}
							}
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 6))
							{
								func_710(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
								MISC::SET_BIT(&iLocal_145, 6);
							}
							func_523(142, 0, &Var0, 0);
						}
					}
				}
				MISC::SET_BIT(&iLocal_145, 9);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 5))
			{
				if (func_444())
				{
					if (func_973())
					{
						if (func_396(CAM::_0xDC9DA9E8789F5246()) >= 2)
						{
						}
					}
					else if (func_396(CAM::_0xDC9DA9E8789F5246()) >= 2)
					{
						func_516(88, "GB_WORK_OVER", "BIGM_SGHTRBQ", 1, 4294967295, 2, 1);
					}
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 6))
				{
					func_710(0, 8, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
					MISC::SET_BIT(&iLocal_145, 6);
				}
				func_523(159, 0, &Var0, 0);
				MISC::SET_BIT(&iLocal_145, 9);
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 9))
		{
			func_437();
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 8))
			{
				MISC::SET_BIT(&iLocal_146, 8);
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 10))
			{
				if (Local_143.f_22 != 4294967295)
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 5))
					{
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22)))
						{
							func_435(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), 432, 0, 0);
							func_434(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), 1, 0, 0);
							func_433(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), 0, 0, 0);
							func_432(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), 0);
							func_429(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), Global_40001.f_2FD2, 0, 0);
							MISC::SET_BIT(&iLocal_145, 10);
						}
					}
				}
			}
			if (func_411(&uLocal_435, 1, 0))
			{
				MISC::SET_BIT(&(Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 4);
			}
		}
	}
}

int func_411(var uParam0, bool bParam1, int iParam2)//Position - 0x101B7
{
	bool bVar0;
	
	func_229(29);
	if ((*uParam0 > 0 && !func_333()) && func_396(CAM::_0xDC9DA9E8789F5246()) != 0)
	{
		if (!func_427())
		{
			func_426();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_9(&(uParam0->f_3)))
			{
				func_8(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_196EED.f_3), 2);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_26862F.f_11DE), 0);
					func_8(&(uParam0->f_5), 0, 0);
				}
				func_8(&(uParam0->f_1), 0, 0);
				func_425(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_9(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_418(iParam2);
				func_425(uParam0, 2);
			}
			break;
		
		case 2:
			func_418(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_412(func_413(0)))
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				}
				func_425(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DE), 1);
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 2);
				func_425(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DE), 1);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 2);
			return 1;
	}
	return 0;
}

int func_412(char* sParam0)//Position - 0x10331
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_413(int iParam0)//Position - 0x10344
{
	if (((func_416(CAM::_0xDC9DA9E8789F5246()) || func_415(CAM::_0xDC9DA9E8789F5246())) || func_353()) || iParam0)
	{
		if (func_415(CAM::_0xDC9DA9E8789F5246()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_323(func_414()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_414()//Position - 0x103A6
{
	return Global_19135D;
}

bool func_415(int iParam0)//Position - 0x103B2
{
	return func_324(func_226(iParam0), 0);
}

bool func_416(int iParam0)//Position - 0x103C5
{
	return func_417(func_226(iParam0));
}

int func_417(int iParam0)//Position - 0x103D7
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 148 && func_281(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_23, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_418(int iParam0)//Position - 0x104B9
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 0))
	{
		if (((((((((((!HUD::IS_RADAR_HIDDEN() && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_310, 2)) && func_1072(CAM::_0xDC9DA9E8789F5246(), 1, 1)) && !Global_10B8E) && !Global_D072) && !CAM::IS_SCREEN_FADED_OUT()) && !func_199(CAM::_0xDC9DA9E8789F5246(), 22)) && func_396(CAM::_0xDC9DA9E8789F5246()) != 0) && !func_423(func_424())) && !func_416(CAM::_0xDC9DA9E8789F5246())) && !func_422(func_226(CAM::_0xDC9DA9E8789F5246()))) && !func_421(func_226(CAM::_0xDC9DA9E8789F5246())))
		{
			MISC::SET_BIT(&(Global_26862F.f_11DE), 1);
			func_420(func_413(iParam0), 4294967295);
			func_419(1);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DE), 0);
		}
	}
}

void func_419(int iParam0)//Position - 0x1059D
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_352(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_333())
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Boss_Message_Orange", sVar0, false);
	}
}

void func_420(char* sParam0, int iParam1)//Position - 0x105D4
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam1);
}

int func_421(int iParam0)//Position - 0x105EB
{
	switch (iParam0)
	{
		case 236:
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
			return 1;
		
		default:
	}
	return 0;
}

int func_422(int iParam0)//Position - 0x10641
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_423(int iParam0)//Position - 0x10691
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_424()//Position - 0x106B7
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_SELL"))
	{
		return 237;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_DEFEND"))
	{
		return 238;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_SECURITY_VAN"))
	{
		return 239;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_TARGET_PURSUIT"))
	{
		return 240;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_JEWEL_STORE_GRAB"))
	{
		return 241;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_BANK_JOB"))
	{
		return 242;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_DATA_HACK"))
	{
		return 244;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_INFILTRATION"))
	{
		return 248;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_PHONECALL"))
	{
		return 249;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_CLUB_MANAGEMENT"))
	{
		return 250;
	}
	return 0;
}

void func_425(var uParam0, int iParam1)//Position - 0x10C42
{
	*uParam0 = iParam1;
}

void func_426()//Position - 0x10C4F
{
	Global_258852 = 1;
}

int func_427()//Position - 0x10C5C
{
	if (((((((func_226(CAM::_0xDC9DA9E8789F5246()) == 170 || func_226(CAM::_0xDC9DA9E8789F5246()) == 219) || func_226(CAM::_0xDC9DA9E8789F5246()) == 221) || func_226(CAM::_0xDC9DA9E8789F5246()) == 220) || func_226(CAM::_0xDC9DA9E8789F5246()) == 216) || func_226(CAM::_0xDC9DA9E8789F5246()) == 215) || func_226(CAM::_0xDC9DA9E8789F5246()) == 214) || func_226(CAM::_0xDC9DA9E8789F5246()) == 218)
	{
		return 1;
	}
	if (func_428(CAM::_0xDC9DA9E8789F5246()))
	{
		return 1;
	}
	return 0;
}

int func_428(int iParam0)//Position - 0x10CFD
{
	if (iParam0 != func_22())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_21(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 2;
			}
		}
	}
	return 0;
}

void func_429(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x10D43
{
	var uVar0;
	
	if (func_431(iParam0))
	{
		return;
	}
	if (func_430(&(Global_24DCF5.f_2EA[iParam0]), &(Global_24DCF5.f_455[iParam0]), &(Global_24DCF5.f_185), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DCF5.f_224[iParam0] = uParam1;
		}
	}
}

int func_430(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)//Position - 0x10D95
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, iParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam2, iParam4))
			{
				*uParam6 = 1;
				GRAPHICS::_0x35FB78DC42B7BD21(iParam2, iParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = 4294967295;
			}
			*uParam0 = 4294967295;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_431(int iParam0)//Position - 0x10E5A
{
	if (iParam0 == func_22())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_235())
	{
		return 1;
	}
	return 0;
}

void func_432(int iParam0, bool bParam1)//Position - 0x10E83
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_24DCF5.f_16D), iParam0);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_24DCF5.f_16D), iParam0);
	}
	if (HUD::DOES_BLIP_EXIST(Global_24DCF5[iParam0]))
	{
		if (bParam1)
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_24DCF5[iParam0], false);
		}
		else
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_24DCF5[iParam0], true);
		}
	}
}

void func_433(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x10EDE
{
	var uVar0;
	
	if (func_431(iParam0))
	{
		return;
	}
	if (func_430(&(Global_24DCF5.f_32C[iParam0]), &(Global_24DCF5.f_497[iParam0]), &(Global_24DCF5.f_16C), bParam1, iParam0, bParam3, &uVar0))
	{
		func_432(iParam0, bParam2);
	}
}

void func_434(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x10F26
{
	var uVar0;
	
	if (func_431(iParam0))
	{
		return;
	}
	if (func_430(&(Global_24DCF5.f_266[iParam0]), &(Global_24DCF5.f_3D1[iParam0]), &(Global_24DCF5.f_182), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DCF5.f_1C1[iParam0] = iParam1;
		}
	}
}

void func_435(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x10F78
{
	bool bVar0;
	
	if (func_431(iParam0))
	{
		return;
	}
	if (func_430(&(Global_24DCF5.f_245[iParam0]), &(Global_24DCF5.f_3B0[iParam0]), &(Global_24DCF5.f_181), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_24DCF5.f_1A0[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_436();
		}
	}
}

void func_436()//Position - 0x10FD3
{
	Global_24DCF5.f_5E4 = 1;
}

void func_437()//Position - 0x10FE3
{
	if (!func_443())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_140740.f_9)
	{
		return;
	}
	func_438();
}

void func_438()//Position - 0x11010
{
	func_440();
	func_439(0);
}

void func_439(bool bParam0)//Position - 0x11021
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_140740 = 20;
	StringCopy(&(Global_140740.f_1), "", 32);
	Global_140740.f_9 = 0;
	if (bVar0)
	{
		Global_140740.f_A = HUD::_0x13C4B962653A5280();
		Global_140740.f_B = HUD::_0x13C4B962653A5280();
	}
	StringCopy(&(Global_140740.f_C), "", 16);
	StringCopy(&(Global_140740.f_10), "", 64);
	StringCopy(&(Global_140740.f_20), "", 64);
	Global_140740.f_34 = 0;
	Global_140740.f_35 = 0;
	Global_140740.f_36 = 0;
	Global_140740.f_37 = 4294967295;
	Global_140740.f_38 = 0;
	Global_140740.f_3B = 0;
	if (bParam0)
	{
		return;
	}
}

void func_440()//Position - 0x110B3
{
	if (!func_442())
	{
	}
	if (func_443())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_140740.f_C));
		func_441();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_441()//Position - 0x110DC
{
	switch (Global_140740)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_140740.f_34);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_140740.f_34);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_140740.f_35);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			return;
		
		case 6:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			return;
		
		case 8:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			return;
		
		case 9:
			HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_140740.f_10));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_20));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 13:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_39);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 11:
			HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_140740.f_10));
			return;
		
		case 14:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 15:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_39);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_20));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_30));
			return;
		
		case 16:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			return;
		
		case 19:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_30));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_20));
			return;
		
		default:
	}
}

int func_442()//Position - 0x1134E
{
	if (!func_443())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_140740.f_C));
	func_441();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_443()//Position - 0x11374
{
	if (Global_140740 == 20)
	{
		return 0;
	}
	return 1;
}

int func_444()//Position - 0x1138A
{
	if (!func_445(1, 1, 1))
	{
		return 0;
	}
	if (func_398())
	{
		return 0;
	}
	return 1;
}

int func_445(bool bParam0, bool bParam1, bool bParam2)//Position - 0x113AD
{
	if (func_481(CAM::_0xDC9DA9E8789F5246(), 29))
	{
		return 0;
	}
	if (func_243(CAM::_0xDC9DA9E8789F5246(), 21))
	{
		return 0;
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			return 0;
		}
	}
	if (!func_317(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_116(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_480())
	{
		return 0;
	}
	if (func_385())
	{
		return 0;
	}
	if (func_479())
	{
		return 0;
	}
	if (func_379())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_42(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (!func_381())
	{
		return 0;
	}
	if (func_243(CAM::_0xDC9DA9E8789F5246(), 0) || func_243(CAM::_0xDC9DA9E8789F5246(), 3))
	{
		return 0;
	}
	if ((func_243(CAM::_0xDC9DA9E8789F5246(), 12) || func_243(CAM::_0xDC9DA9E8789F5246(), 14)) || func_243(CAM::_0xDC9DA9E8789F5246(), 13))
	{
		return 0;
	}
	if (func_475(CAM::_0xDC9DA9E8789F5246(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_451())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_450())
		{
			return 0;
		}
	}
	if (Global_193F0F)
	{
		return 0;
	}
	if (func_135(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_449())
	{
		return 0;
	}
	if (func_448(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_447())
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 4))
	{
		return 0;
	}
	if (func_446(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	return 1;
}

int func_446(int iParam0)//Position - 0x11556
{
	if (Global_24FBF9[iParam0 /*413*/].f_105.f_4 != 0 || Global_24FBF9[iParam0 /*413*/].f_105.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_447()//Position - 0x1158A
{
	return Global_197632.f_D1F != 4294967295;
}

int func_448(int iParam0)//Position - 0x1159B
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 14))
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 11))
	{
		return 1;
	}
	return 0;
}

int func_449()//Position - 0x115DA
{
	if (Global_40EAC7.f_31D > 4294967295)
	{
		return 1;
	}
	return 0;
}

bool func_450()//Position - 0x115F2
{
	return Global_16C64.f_148 > 0;
}

int func_451()//Position - 0x11603
{
	int iVar0;
	
	iVar0 = func_226(CAM::_0xDC9DA9E8789F5246());
	if (((func_474(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_18) || func_473(CAM::_0xDC9DA9E8789F5246())) || func_472(CAM::_0xDC9DA9E8789F5246())) || func_467(CAM::_0xDC9DA9E8789F5246()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_465(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_464(iVar0) || func_463(iVar0))
		{
			return 1;
		}
	}
	if (func_428(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_463(iVar0))
		{
			return 1;
		}
	}
	if (func_462(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_461(iVar0))
		{
			return 1;
		}
	}
	if (func_460(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_459(iVar0))
		{
			return 1;
		}
	}
	if (func_458(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_457(iVar0))
		{
			return 1;
		}
	}
	if (func_456(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_455(iVar0))
		{
			return 1;
		}
	}
	if (func_20(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if (func_454(iVar0))
		{
			if (func_452(CAM::_0xDC9DA9E8789F5246()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_452(int iParam0)//Position - 0x11744
{
	if (func_453(iParam0) != func_22())
	{
		return func_453(iParam0) == func_87(iParam0);
	}
	return 0;
}

int func_453(int iParam0)//Position - 0x1176A
{
	return Global_18CD5B[iParam0 /*560*/].f_B.f_23;
}

int func_454(int iParam0)//Position - 0x1177F
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_455(int iParam0)//Position - 0x117B7
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_456(int iParam0)//Position - 0x117E3
{
	if (iParam0 != func_22())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_21(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_457(int iParam0)//Position - 0x1182A
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_458(int iParam0)//Position - 0x11844
{
	if (iParam0 != func_22())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_21(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_459(int iParam0)//Position - 0x1188B
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_460(int iParam0)//Position - 0x118AB
{
	if (iParam0 != func_22())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_21(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 7;
			}
		}
	}
	return 0;
}

int func_461(int iParam0)//Position - 0x118F1
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_462(int iParam0)//Position - 0x11917
{
	if (iParam0 != func_22())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_21(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 4;
			}
		}
	}
	return 0;
}

int func_463(int iParam0)//Position - 0x1195D
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_464(int iParam0)//Position - 0x11983
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_465(int iParam0)//Position - 0x119D9
{
	if (func_466(Global_1841F3[iParam0 /*790*/].f_111.f_18, 4294967295))
	{
		return 1;
	}
	return 0;
}

int func_466(int iParam0, int iParam1)//Position - 0x119FC
{
	if (iParam1 == 4294967295)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_467(int iParam0)//Position - 0x11AD9
{
	if (func_468(Global_1841F3[iParam0 /*790*/].f_111.f_18, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_468(int iParam0, bool bParam1, bool bParam2)//Position - 0x11AFD
{
	if (bParam2)
	{
		return func_469(CAM::_0xDC9DA9E8789F5246(), 0);
	}
	if (bParam1)
	{
		if (func_469(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_469(int iParam0, bool bParam1)//Position - 0x11BD8
{
	if (Global_184156 != func_22())
	{
		if (!func_471(Global_184156))
		{
			return 0;
		}
		if (bParam1)
		{
			if (CAM::_0xDC9DA9E8789F5246() != Global_184156)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[Global_184156 /*413*/].f_C3, 24) || func_470(Global_184156))
				{
					return 1;
				}
			}
		}
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_C3, 24);
}

int func_470(int iParam0)//Position - 0x11C44
{
	if (iParam0 != func_22())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_C3, 9);
	}
	return 0;
}

int func_471(int iParam0)//Position - 0x11C6A
{
	if (iParam0 != func_22())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 2);
	}
	return 0;
}

int func_472(int iParam0)//Position - 0x11C96
{
	if (iParam0 != func_22())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_21(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 1;
			}
		}
	}
	return 0;
}

int func_473(int iParam0)//Position - 0x11CDC
{
	if (iParam0 != func_22())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_21(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 0;
			}
		}
	}
	return 0;
}

int func_474(int iParam0)//Position - 0x11D22
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_475(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)//Position - 0x11D51
{
	if (Global_1841F3[iParam0 /*790*/].f_111.f_18 > 0)
	{
		if (bParam1)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_473(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_428(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_472(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_462(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_460(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_458(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_478(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_456(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_477(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_20(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_476(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_476(int iParam0)//Position - 0x11E64
{
	if (iParam0 != func_22())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_21(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_477(int iParam0)//Position - 0x11EAB
{
	if (iParam0 != func_22())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_21(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_478(int iParam0)//Position - 0x11EF2
{
	if (iParam0 != func_22())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_22())
			{
				return func_21(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 8;
			}
		}
	}
	return 0;
}

bool func_479()//Position - 0x11F52
{
	return Global_140859;
}

bool func_480()//Position - 0x11F5E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 0);
}

bool func_481(int iParam0, int iParam1)//Position - 0x11F7A
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_B.f_5, iParam1);
}

int func_482(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x11F95
{
	struct<80> Var0;
	
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 3212836864;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = 4294967295;
	func_513(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_11 = iParam1;
	Var0.f_47 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_48 = iParam7;
	if (iParam8 != 4294967295)
	{
		MISC::SET_BIT(&(Var0.f_45), iParam8);
	}
	return func_483(&Var0);
}

int func_483(var uParam0)//Position - 0x12016
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_252F9E.f_BD2)
		{
			return 0;
		}
	}
	func_493(uParam0, uParam0->f_11);
	func_492(uParam0);
	if (func_122())
	{
		func_492(uParam0);
	}
	if (func_491(uParam0->f_1))
	{
		func_484();
		if (Global_252F9E.f_A90[0 /*80*/].f_2 == 0)
		{
			Global_252F9E.f_A90[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_252F9E.f_A90[0 /*80*/].f_1 == 13 || Global_252F9E.f_A90[0 /*80*/].f_1 == 53) || Global_252F9E.f_A90[0 /*80*/].f_1 == 54) || Global_252F9E.f_A90[0 /*80*/].f_1 == 58)
		{
			Global_252F9E.f_A90[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_252F9E.f_A90[iVar0 + 1 /*80*/] = { Global_252F9E.f_A90[iVar0 /*80*/] };
			iVar0 = (iVar0 + 4294967295);
		}
		Global_252F9E.f_A90[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_252F9E.f_A90[iVar0 /*80*/].f_2 == 0)
		{
			Global_252F9E.f_A90[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_484();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				MISC::SET_BIT(&(Global_252F9E.f_A90[iVar0 /*80*/].f_45), 1);
				Global_252F9E.f_A90[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_45, 7))
			{
				if (func_336(Global_252F9E.f_A90[iVar0 /*80*/].f_1))
				{
					Global_252F9E.f_A90[iVar0 /*80*/].f_2 = 5;
					MISC::SET_BIT(&(Global_252F9E.f_A90[iVar0 /*80*/].f_45), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_484()//Position - 0x121E7
{
	bool bVar0;
	
	if (Global_252F9E.f_BD3)
	{
		return;
	}
	if (!Global_11731)
	{
		Global_11731 = 1;
		bVar0 = true;
	}
	func_485();
	if (bVar0)
	{
		Global_11731 = 0;
	}
}

void func_485()//Position - 0x1221A
{
	Global_252F9E.f_BD4 = 0;
	Global_252F9E.f_BD4.f_242 = 0;
	func_489(&(Global_252F9E.f_BD4.f_1));
	Global_252F9E.f_BD4.f_1.f_1 = 0;
	func_486(&(Global_252F9E.f_BD4.f_1));
}

void func_486(var uParam0)//Position - 0x1225B
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_232 && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SET_SEETHROUGH(false);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_234)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_234 = 0;
	}
	if (!Global_11731)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_11732)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_488(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_487(0);
}

void func_487(int iParam0)//Position - 0x12302
{
	Global_11729 = iParam0;
	Global_1172A = iParam0;
}

bool func_488(bool bParam0)//Position - 0x12316
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

void func_489(var uParam0)//Position - 0x12341
{
	func_490(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

void func_490(var uParam0)//Position - 0x1236B
{
	uParam0->f_223 = 1f;
	uParam0->f_222 = 0;
	uParam0->f_238 = 0f;
	uParam0->f_22E = 0;
	uParam0->f_1E = 0f;
	uParam0->f_224 = 0f;
	uParam0->f_22F = 0f;
	uParam0->f_230 = 0f;
	uParam0->f_221 = 0;
	uParam0->f_233 = 0;
	uParam0->f_23C = 0;
	uParam0->f_234 = 0;
	uParam0->f_235 = 0;
	uParam0->f_236 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_23E = 0;
	uParam0->f_23F = 0;
	uParam0->f_23D = 1f;
}

int func_491(int iParam0)//Position - 0x123EA
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_492(var uParam0)//Position - 0x124EC
{
	if (func_338(uParam0->f_1))
	{
		uParam0->f_48 = func_297();
	}
}

void func_493(var uParam0, int iParam1)//Position - 0x12507
{
	if (func_338(uParam0->f_1))
	{
		uParam0->f_49 = 1;
	}
	if (iParam1 == func_22() || !func_1072(iParam1, 0, 1))
	{
		return;
	}
	if (func_336(uParam0->f_1))
	{
		if (uParam0->f_47 == 1)
		{
			uParam0->f_49 = func_494(iParam1, 4294967294, 0, 0, 0);
		}
	}
}

int func_494(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1255E
{
	int iVar0;
	int iVar1;
	
	if (func_91(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == 4294967294)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > 4294967295 && iVar0 < 4)
		{
			if (Global_440000.f_1EBA3[iVar0] != 4294967295)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_91(CAM::_0xDC9DA9E8789F5246()) || (func_512() && func_511())) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11E1, 31)) && !bParam4)
	{
		iVar1 = func_510();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != 4294967295)
				{
					if (func_1072(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_440000.f_1EBA3[iParam1] != 4294967295)
							{
								return func_508(iParam1, iParam0, 0);
							}
							else
							{
								return func_504(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_504(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_440000.f_1EBA3[iParam1] != 4294967295)
				{
					return func_508(iParam1, iParam0, 0);
				}
				else
				{
					return func_495(0, 4294967295, 0);
				}
			}
			else
			{
				return func_495(0, 4294967295, 0);
			}
		}
	}
	if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_440000.f_1EBA3[iParam1] != 4294967295)
		{
			return func_508(iParam1, iParam0, 0);
		}
		else
		{
			return func_504(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
		}
	}
	return func_504(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
}

int func_495(bool bParam0, int iParam1, bool bParam2)//Position - 0x1273E
{
	return func_496(CAM::_0xDC9DA9E8789F5246(), bParam0, iParam1, bParam2);
}

int func_496(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x12754
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (func_502() && Global_150AAC.f_1)
	{
		if (bParam1)
		{
			return func_501(iParam2, iVar0);
		}
		else
		{
			return func_501(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 4294967295)
		{
			if (func_90(iVar0, iParam2, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_500(1);
				}
				else
				{
					return func_500(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 20))
			{
				return func_497(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_497(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == 4294967295)
	{
		return func_500(1);
	}
	return func_500(0);
}

int func_497(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x12848
{
	int iVar0;
	
	iVar0 = func_499(iParam0, iParam1, iParam3);
	if (func_498(Global_440000.f_1FEDE, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_498(int iParam0, bool bParam1)//Position - 0x12960
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_440000.f_2559E == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_40001.f_22CA[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_499(int iParam0, int iParam1, int iParam2)//Position - 0x129B1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_90(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_500(bool bParam0)//Position - 0x129F8
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_501(int iParam0, int iParam1)//Position - 0x12A0F
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_499(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_502()//Position - 0x12A5D
{
	if (func_503() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

bool func_503()//Position - 0x12A7A
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_23D58, 12);
}

int func_504(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x12A92
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == 4294967294)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > 4294967295)
	{
		if (Global_1841F3[iVar2 /*790*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != 4294967295)
		{
			if (func_506(1))
			{
				iVar3 = func_296(iParam0);
				if (!iVar3 == 4294967295)
				{
					return func_294(iVar3);
				}
			}
			if ((func_129(iParam1, iParam0, iVar0, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)) || ((func_90(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 23)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)))
			{
				return func_500(1);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26))
			{
				return func_505(1);
			}
			else
			{
				return func_496(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1805F9 || Global_1805F0) || Global_1841F3[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1805F9 == 1 && Global_180603 == 0))
			{
				return func_500(1);
			}
			else
			{
				return func_496(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1805F4 && Global_1803FE.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_296(iParam0);
	if (!iVar4 == 4294967295)
	{
		return func_294(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_505(bool bParam0)//Position - 0x12C36
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_506(int iParam0)//Position - 0x12C4D
{
	if ((func_275() || func_507()) || (func_122() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_507()//Position - 0x12C7C
{
	return Global_255C02.f_F;
}

int func_508(int iParam0, int iParam1, bool bParam2)//Position - 0x12C8A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC93F.f_D[iParam0];
	if (func_506(1))
	{
		iVar2 = func_296(iParam1);
		if (!iVar2 == 4294967295)
		{
			return func_294(iVar2);
		}
	}
	if (iVar1 > 4294967295 && iVar1 < 17)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_68[iParam0 /*10693*/].f_159C[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > 4294967295 && iParam1 != func_22())
	{
		if (Global_440000.f_1EBA3[iParam0] != 4294967295 && Global_440000.f_1EBA3[iParam0] <= 4)
		{
			if (Global_440000.f_1EBA3[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_440000.f_1EBA3[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_440000.f_1EBA3[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_440000.f_1EBA3[iParam0] == 4)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_440000.f_1EBA3[iParam0];
			}
		}
		else
		{
			iVar0 = func_496(iParam1, !bParam2, iParam0, 0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_15, 13))
		{
			iVar0 = func_509(iParam0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_18, 29))
		{
			iVar0 = 0;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26) && !func_90(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_505(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_509(int iParam0)//Position - 0x12E18
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_440000.f_255C9;
			break;
		
		case 1:
			iVar0 = Global_440000.f_255CA;
			break;
		
		case 2:
			iVar0 = Global_440000.f_255CB;
			break;
		
		case 3:
			iVar0 = Global_440000.f_255CC;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_510()//Position - 0x12EED
{
	return Global_240006.f_2;
}

bool func_511()//Position - 0x12EFB
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 4);
}

bool func_512()//Position - 0x12F0C
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 14);
}

void func_513(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x12F29
{
	uParam1->f_11 = func_22();
	uParam1->f_12 = func_22();
	uParam1->f_13 = func_22();
	uParam1->f_14 = func_22();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_15), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_10 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_47 = 1;
	uParam1->f_4A = 1;
	uParam1->f_4B = 1;
	uParam1->f_4C = 0;
	uParam1->f_4D = 0;
	uParam1->f_49 = 0;
	StringCopy(&(uParam1->f_19), "", 64);
	StringCopy(&(uParam1->f_29), "", 64);
}

int func_514()//Position - 0x12FA7
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B;
}

bool func_515(bool bParam0)//Position - 0x12FBC
{
	return func_292(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

int func_516(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x12FCE
{
	struct<80> Var0;
	
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 3212836864;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = 4294967295;
	func_513(iParam0, &Var0, 4294967295, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	return func_483(&Var0);
}

char* func_517(int iParam0)//Position - 0x1303E
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		sVar0 = func_522(&(Global_18CD5B[iParam0 /*560*/].f_B.f_63));
		return sVar0;
	}
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_73 != Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_73)
	{
		sVar0 = func_520(iParam0, 0);
		return sVar0;
	}
	if (((func_199(iParam0, 28) || func_199(CAM::_0xDC9DA9E8789F5246(), 28)) || func_519(iParam0)) && !func_518(iParam0))
	{
		return func_520(iParam0, 0);
	}
	iVar1 = func_87(iParam0);
	if (iVar1 != func_22())
	{
		if (iVar1 != CAM::_0xDC9DA9E8789F5246())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, 4294967295, 1))
			{
				return func_520(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_22())
	{
		sVar0 = func_522(&(Global_18CD5B[iVar1 /*560*/].f_B.f_63));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_520(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_518(int iParam0)//Position - 0x13144
{
	struct<13> Var0;
	
	Var0 = { func_88(iParam0) };
	if (MISC::IS_DURANGO_VERSION())
	{
		if (NETWORK::_0x72D918C99BCACC54(0))
		{
			if (NETWORK::_0xB57A49545BA53CE7(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_519(int iParam0)//Position - 0x13174
{
	struct<13> Var0;
	
	if (iParam0 != func_22())
	{
		Var0 = { func_88(iParam0) };
		if (MISC::IS_ORBIS_VERSION() || MISC::IS_PC_VERSION())
		{
			if (NETWORK::_0x72D918C99BCACC54(0))
			{
				return 0;
			}
		}
		else if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::_0x72D918C99BCACC54(0))
			{
				if (NETWORK::_0xB57A49545BA53CE7(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_520(int iParam0, bool bParam1)//Position - 0x131CD
{
	if (!bParam1)
	{
		if (func_279(iParam0, 1))
		{
			return func_521();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_521()//Position - 0x131F4
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

var func_522(var uParam0)//Position - 0x13204
{
	return uParam0;
}

void func_523(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x1320E
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	bool bVar14;
	struct<2> Var15;
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
	
	func_708(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_40001.f_46E7);
		}
		else
		{
			iVar1 = (iVar1 + func_707(iParam0, uParam2->f_D));
		}
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_A / uParam2->f_B) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_706(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_40001.f_46E6);
		}
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_12 > 4294967295)
	{
		iVar0 = (iVar0 + uParam2->f_12);
	}
	if (uParam2->f_13 > 4294967295)
	{
		iVar1 = (iVar1 + uParam2->f_13);
	}
	if (func_704(iParam0))
	{
		if (bParam1)
		{
			if (func_703(CAM::_0xDC9DA9E8789F5246()) > 0)
			{
				func_702();
			}
			else
			{
				func_701();
			}
		}
		else
		{
			func_700();
		}
	}
	func_684(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_682(iParam0, uParam2, &iVar0, &iVar5);
	func_660(iParam0, uParam2, &iVar0, &iVar5);
	func_646(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_629(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_26862F.f_1313.f_175 = iVar4;
	}
	else
	{
		Global_26862F.f_1313.f_175 = iVar5;
	}
	iVar8 = func_355();
	if (iVar8 != func_22() && iParam0 != 148)
	{
		if (func_292(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			if (!func_326(CAM::_0xDC9DA9E8789F5246(), iVar8, 1))
			{
				func_614(&iVar0, 1);
			}
		}
	}
	func_610(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_196EF6.f_A = iVar1;
		func_609();
		func_566(0, AUDIO::_0x0626A247D2405330(), "", 3419251281, 1626430110, iVar1, 1, 4294967295, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_196EF6.f_9 = iVar0;
		iVar13 = func_514();
		if (iVar13 != func_22())
		{
			func_565(iVar13, &uVar11, &uVar12);
		}
		bVar14 = !func_515(1);
		if (iParam0 == 168)
		{
			if (!func_564())
			{
				unk_0xF8ED2CAA140D95A9(iVar0, iVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_563())
			{
				if (!func_564())
				{
					Var15 = { func_562() };
					unk_0x7C78EDD3BFB2E833(iVar0, MISC::GET_HASH_KEY(func_561(Var15)), func_560(Var15), iVar5);
				}
			}
			else if (func_564())
			{
				func_548(3438960429, iVar0, &iVar16, 0, 1, 0);
				Global_410C0F[iVar16 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar16 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar16 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xF8ED2CAA140D95A9(iVar0, iVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_957())
			{
				if (!func_564())
				{
					unk_0x7C78EDD3BFB2E833(iVar0, MISC::GET_HASH_KEY(func_561(func_547(CAM::_0xDC9DA9E8789F5246()))), 5, iVar5);
				}
			}
			else if (func_564())
			{
				func_548(3438960429, iVar0, &iVar17, 0, 1, 0);
				Global_410C0F[iVar17 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar17 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar17 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xF8ED2CAA140D95A9(iVar0, iVar5);
			}
		}
		else if (iParam0 == 230)
		{
			if (func_957())
			{
				if (!func_564())
				{
					iVar18 = func_543(uParam2->f_10, iVar5);
					iVar19 = iVar0;
					if (iVar18 > 0)
					{
						iVar19 = (iVar19 - iVar18);
					}
					if (iVar7 > 0)
					{
						iVar19 = (iVar19 - iVar7);
					}
					unk_0xB6DC534CAEB0D937(iVar19, iVar5, iVar7, iVar18, uParam2->f_10);
				}
			}
			else if (func_564())
			{
				func_548(463142405, iVar0, &iVar20, 0, 1, 0);
				Global_410C0F[iVar20 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar20 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar20 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xACD5CE18E734968D(uVar11, uVar12, iVar0, bVar14);
			}
		}
		else if (iParam0 == 233)
		{
			if (func_564())
			{
				func_548(1407278493, iVar0, &iVar21, 0, 1, 0);
				Global_410C0F[iVar21 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar21 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar21 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0x02A33E5F88B092E3(iVar0);
			}
		}
		else if (iParam0 == 237)
		{
			if (func_957())
			{
				if (!func_564())
				{
					unk_0x7C5AFBDB4A63099E(iVar0, uParam2->f_14, iVar5);
				}
			}
			else if (func_564())
			{
				func_548(3438960429, iVar0, &iVar22, 0, 1, 0);
				Global_410C0F[iVar22 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar22 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar22 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xF8ED2CAA140D95A9(iVar0, iVar5);
			}
		}
		else if (iParam0 == 250)
		{
			if (func_564())
			{
				func_548(3333932415, iVar0, &iVar23, 0, 1, 0);
				Global_410C0F[iVar23 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar23 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar23 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0x70275A5DEC872CA2(iVar0);
			}
		}
		else if (iParam0 == 249)
		{
			if (func_564())
			{
				func_548(1135468152, iVar0, &iVar24, 0, 1, 0);
				Global_410C0F[iVar24 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar24 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar24 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xF03B782EEA848691(iVar0);
			}
		}
		else if (((((iParam0 == 242 || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240)
		{
			if (func_564())
			{
				func_548(3660240660, iVar0, &iVar25, 0, 1, 0);
				Global_410C0F[iVar25 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar25 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar25 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xB509D8DC0549312F(iVar0);
			}
		}
		else if (func_564())
		{
			func_548(3438960429, iVar0, &iVar26, 0, 1, 0);
			Global_410C0F[iVar26 /*80*/].f_6 = uVar11;
			Global_410C0F[iVar26 /*80*/].f_7 = uVar12;
			Global_410C0F[iVar26 /*80*/].f_8 = bVar14;
		}
		else
		{
			unk_0xECDF3A47BBA3F980(uVar11, uVar12, iVar0, bVar14);
		}
		func_542(iParam0, iVar0);
		if (func_541(iParam0))
		{
			if (func_540(iParam0) > 4294967295)
			{
				func_539(func_540(iParam0), iVar0);
			}
		}
		Global_258AE3 = iVar0;
		func_538(&Global_25841E, 0, 0);
	}
	if (func_246(CAM::_0xDC9DA9E8789F5246()) || func_298(CAM::_0xDC9DA9E8789F5246()))
	{
		func_529(iParam0);
	}
	if (func_417(iParam0))
	{
		Global_196F08.f_D = iVar0;
		Global_196F08.f_E = iVar1;
	}
	if (func_422(iParam0))
	{
		Global_196F3E.f_D = iVar0;
		Global_196F3E.f_E = iVar1;
	}
	if (func_461(iParam0))
	{
		Global_196F7D.f_C = iVar0;
		Global_196F7D.f_D = iVar1;
	}
	if (func_459(iParam0))
	{
		Global_196FA9.f_C = iVar0;
		Global_196FA9.f_D = iVar1;
	}
	if (func_457(iParam0))
	{
		Global_196FDF.f_C = iVar0;
		Global_196FDF.f_D = iVar1;
	}
	if (func_421(iParam0))
	{
		if (func_528(iParam0))
		{
			Global_197030.f_C = iVar0;
			Global_197030.f_D = iVar1;
		}
		else if (func_524(iParam0))
		{
			Global_197065.f_C = iVar0;
			Global_197065.f_D = iVar1;
		}
	}
}

int func_524(int iParam0)//Position - 0x139CF
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_525(func_526(CAM::_0xDC9DA9E8789F5246()))))
	{
		return 1;
	}
	return 0;
}

int func_525(int iParam0)//Position - 0x13A58
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_526(int iParam0)//Position - 0x13A90
{
	if (func_226(iParam0) == 237 || func_226(iParam0) == 250)
	{
		return func_527(iParam0);
	}
	return 4294967295;
}

int func_527(int iParam0)//Position - 0x13ABD
{
	if (func_136(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_B0;
	}
	return 4294967295;
}

int func_528(int iParam0)//Position - 0x13AE0
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_529(int iParam0)//Position - 0x13AF4
{
	if (func_537(CAM::_0xDC9DA9E8789F5246()) && func_563())
	{
		if (func_464(iParam0))
		{
			func_532(8657, 4294967295);
		}
		else if (func_531(iParam0))
		{
			func_532(8659, 4294967295);
		}
		else if (func_324(iParam0, 1))
		{
			func_532(8660, 4294967295);
		}
		else if (func_530(iParam0))
		{
			func_532(8661, 4294967295);
		}
	}
}

int func_530(int iParam0)//Position - 0x13B5E
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_531(int iParam0)//Position - 0x13B8A
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_532(int iParam0, int iParam1)//Position - 0x13BB6
{
	int iVar0;
	
	iVar0 = func_536(iParam0, func_403(iParam1), 0);
	iVar0++;
	if (!func_535(iParam0))
	{
		func_534(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_533(iParam0, iVar0, iParam1, 1);
	}
}

void func_533(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x13BF7
{
	int iVar0;
	
	iVar0 = Global_26B05F[iParam0 /*3*/][func_403(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_150A45[func_403(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_150A4B[func_403(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_150A51[func_403(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_150A57[func_403(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_150A2D[func_403(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_150A33[func_403(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_150A39[func_403(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_150A3F[func_403(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_150A15[func_403(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_150A1B[func_403(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_150A21[func_403(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_150A27[func_403(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_150A5D[func_403(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_150A63[func_403(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_150A69[func_403(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_150A6F[func_403(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_150A75[func_403(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_150A7B[func_403(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_150A81[func_403(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_150A87[func_403(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_272FA8[0 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_272FA8[1 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_272FA8[2 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_272FA8[3 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_273025[func_403(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_150A8D[func_403(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_150A93[func_403(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_150A99[func_403(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_150A9F[func_403(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_272FE5[0 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_272FE5[1 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_272FE5[2 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_272FE5[3 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_272FE5[4 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_273028[0 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_273028[1 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_273028[2 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_273028[3 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_273028[4 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_273038[0 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_273038[1 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_273038[2 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_273038[3 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_273038[4 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_272FE5[5 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_272FA8[4 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_273048[func_403(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_273051[func_403(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_27304B[func_403(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_273054[func_403(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_27304E[func_403(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_273057[func_403(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_27305A[func_403(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_272FE5[6 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_272FA8[5 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_272FE5[7 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_272FA8[6 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_272FE5[8 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_272FA8[7 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_272FE5[9 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_272FA8[8 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_272FE5[10 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_272FA8[9 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_272FE5[11 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_272FA8[10 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_272FE5[12 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_272FA8[11 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_272FE5[13 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_272FA8[12 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_272FE5[14 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_272FA8[13 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_272FE5[15 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_272FA8[14 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_272FE5[16 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_272FA8[15 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_272FE5[17 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_272FA8[16 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_272FA8[17 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_272FA8[18 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_272FA8[19 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_534(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x14403
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_403(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_535(int iParam0)//Position - 0x14433
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

int func_536(int iParam0, int iParam1, int iParam2)//Position - 0x1463D
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_403(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

bool func_537(int iParam0)//Position - 0x1466F
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_73, 14);
}

void func_538(var uParam0, bool bParam1, bool bParam2)//Position - 0x14695
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

void func_539(int iParam0, int iParam1)//Position - 0x146D2
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

int func_540(int iParam0)//Position - 0x14744
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_541(int iParam0)//Position - 0x14825
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_542(int iParam0, int iParam1)//Position - 0x1488D
{
	if (func_537(CAM::_0xDC9DA9E8789F5246()) && func_563())
	{
		if (func_464(iParam0) && iParam1 > 0)
		{
			func_534(8658, (func_536(8658, 4294967295, 0) + iParam1), 4294967295, 1, 0);
		}
	}
}

int func_543(int iParam0, int iParam1)//Position - 0x148D1
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_546(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_544(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_544(int iParam0, int iParam1)//Position - 0x148FA
{
	return (func_545(iParam0) * iParam1);
}

int func_545(int iParam0)//Position - 0x1490B
{
	switch (iParam0)
	{
		case 8:
			return Global_40001.f_569E;
		
		case 0:
			return Global_40001.f_569F;
		
		case 1:
			return Global_40001.f_56A0;
		
		case 2:
			return Global_40001.f_56A1;
		
		case 3:
			return Global_40001.f_56A2;
		
		case 4:
			return Global_40001.f_56A3;
		
		case 5:
			return Global_40001.f_56A4;
		
		case 6:
			return Global_40001.f_56A5;
		
		case 7:
			return Global_40001.f_56A6;
		
		default:
	}
	return 0;
}

float func_546(int iParam0, int iParam1)//Position - 0x149AB
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_56A8);
	switch (iParam0)
	{
		case 4294967295:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_40001.f_56AA;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_56A7);
			break;
		
		case 3:
			fVar0 = Global_40001.f_56AA;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_56A7);
			break;
		
		case 0:
			fVar0 = Global_40001.f_56AB;
			break;
		
		case 1:
			fVar0 = Global_40001.f_56AB;
			break;
		
		case 4:
			fVar0 = Global_40001.f_56AB;
			break;
		
		case 6:
			fVar0 = Global_40001.f_56AC;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_56A9);
			break;
		
		case 2:
			fVar0 = Global_40001.f_56AC;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_56A9);
			break;
		
		case 5:
			fVar0 = Global_40001.f_56AC;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_56A9);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_547(int iParam0)//Position - 0x14AC3
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return Global_1841F3[iParam0 /*790*/].f_111.f_AE[5 /*12*/];
}

void func_548(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x14AE9
{
	int iVar0;
	
	if (!func_564())
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
				func_549(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_549(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case 2952902635:
		case 3696988851:
			if (iParam1 > 0)
			{
				func_549(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case 3194003497:
			func_549(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_549(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x15056
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_564())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_148()) || unk_0x64BE694244417BDA())
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
			*uParam0 = func_556(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_555(1, iParam4);
			Global_410E35 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_550(4294967295, iParam4, iParam6, iParam5, 4294967295);
		}
	}
	return 0;
}

void func_550(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x15201
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_7A.f_47), 0);
			break;
	}
	if (iParam0 != 4294967295)
	{
		func_551(iParam0);
	}
}

void func_551(int iParam0)//Position - 0x15239
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_564())
	{
		bVar0 = true;
	}
	if (iParam0 != 4294967295)
	{
		if (func_554(iParam0))
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
		func_552(&(Global_410C0F[iParam0 /*80*/]));
	}
}

void func_552(var uParam0)//Position - 0x1528D
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
	func_553(&(uParam0->f_D));
	func_553(&(uParam0->f_D.f_D));
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

void func_553(var uParam0)//Position - 0x15394
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

int func_554(int iParam0)//Position - 0x153DC
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_410C0F[iParam0 /*80*/].f_3D.f_5 == 1;
	}
	return 0;
}

void func_555(int iParam0, int iParam1)//Position - 0x15406
{
	Global_258B69 = iParam1;
	Global_258B68 = iParam0;
}

int func_556(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x1541A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_410C0F[iVar0 /*80*/].f_3D.f_2 == 0)
		{
			if (!func_564())
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
			if (iParam1 == 3159588365 && iParam10)
			{
				func_557(Global_410C0F[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_557(struct<62> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x15556
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
	iVar1 = func_559(vVar0.y);
	if ((Global_40001.f_5B83 && !Global_40001.f_5B84) && !Global_40001.f_5B85)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_558();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_558()//Position - 0x155E8
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_559(int iParam0)//Position - 0x155F8
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_560(int iParam0)//Position - 0x1560A
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return 4294967295;
}

char* func_561(int iParam0)//Position - 0x15750
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_562()//Position - 0x15932
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_BC;
}

bool func_563()//Position - 0x1594B
{
	return func_354(CAM::_0xDC9DA9E8789F5246());
}

int func_564()//Position - 0x1595B
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

void func_565(int iParam0, var uParam1, var uParam2)//Position - 0x15972
{
	*uParam1 = Global_18CD5B[iParam0 /*560*/].f_B.f_8[0];
	*uParam2 = Global_18CD5B[iParam0 /*560*/].f_B.f_8[1];
}

int func_566(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x159A0
{
	return func_567(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_567(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x159C2
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_577(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == 3702944691 || iParam4 == 2379775567)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_573(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_568(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_568(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x15A3B
{
	vector3 vVar0;
	
	vVar0 = { func_571(iParam0, 1) };
	if (iParam0 == func_570(AUDIO::_0x0626A247D2405330()))
	{
		func_569(1);
	}
	func_573(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_569(int iParam0)//Position - 0x15A6F
{
	Global_252F9E.f_75E = iParam0;
}

int func_570(int iParam0)//Position - 0x15A80
{
	return iParam0;
}

Vector3 func_571(int iParam0, bool bParam1)//Position - 0x15A8A
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
	if (iParam0 == func_572(AUDIO::_0x0626A247D2405330()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, false) };
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

int func_572(int iParam0)//Position - 0x15B4E
{
	return iParam0;
}

void func_573(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x15B58
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
			Global_252F9E.f_505[iVar1 /*30*/].f_4 = func_576(Global_252F9E.f_505[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_252F9E.f_505[iVar1 /*30*/].f_7 = HUD::_0x13C4B962653A5280();
			Global_252F9E.f_505[iVar1 /*30*/].f_3 = iParam1;
			Global_252F9E.f_505[iVar1 /*30*/].f_8 = iParam2;
			Global_252F9E.f_505[iVar1 /*30*/].f_9 = func_575();
			Global_252F9E.f_505[iVar1 /*30*/].f_A = func_574();
			StringCopy(&(Global_252F9E.f_505[iVar1 /*30*/].f_16), sParam3, 16);
			Global_252F9E.f_505[iVar1 /*30*/].f_1A = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), iParam4);
		}
	}
}

int func_574()//Position - 0x15C6F
{
	if (Global_252F9E.f_75E)
	{
		Global_252F9E.f_75E = 0;
		return 1;
	}
	Global_252F9E.f_75E = 0;
	return 0;
}

var func_575()//Position - 0x15C99
{
	var uVar0;
	
	uVar0 = Global_252F9E.f_760;
	Global_252F9E.f_760 = 1;
	return uVar0;
}

float func_576(vector3 vParam0, var uParam1, var uParam2)//Position - 0x15CB4
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam0, true);
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

var func_577(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x15D4D
{
	var uVar0;
	
	uVar0 = func_578(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_578(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x15D70
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_608(CAM::_0xDC9DA9E8789F5246()) || func_607(CAM::_0xDC9DA9E8789F5246()))
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
	else if (func_342() || func_606(CAM::_0xDC9DA9E8789F5246()))
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
	if (func_605(sParam2))
	{
	}
	if (func_604())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_602(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_601(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_599(0, &iVar1);
					break;
				
				case 3:
					func_599(1, &iVar1);
					break;
				
				case 1:
					func_597(&iVar1);
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
			func_596(1164, iVar1, 4294967295);
			if (iParam1 == 0)
			{
				func_588((func_595(CAM::_0xDC9DA9E8789F5246()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_2 != 4294967295)
				{
					func_596(1165, iVar1, 4294967295);
				}
				if (iParam1 == 0)
				{
					func_583(iVar1);
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
				func_579((func_581(CAM::_0xDC9DA9E8789F5246()) + iVar1));
			}
			else
			{
				func_579((func_581(CAM::_0xDC9DA9E8789F5246()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_579(int iParam0)//Position - 0x15F6E
{
	if (func_604())
	{
		Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_5 = iParam0;
		func_580(joaat("mpply_globalxp"), iParam0);
	}
}

void func_580(int iParam0, int iParam1)//Position - 0x15F99
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_581(int iParam0)//Position - 0x15FB5
{
	if (iParam0 > 4294967295)
	{
		if (func_1072(iParam0, 0, 1))
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return func_582(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_5;
			}
		}
		else
		{
			return func_582(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_582(int iParam0)//Position - 0x16006
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

void func_583(int iParam0)//Position - 0x16024
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_88(CAM::_0xDC9DA9E8789F5246()) };
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_586(func_587(&Var0));
			if (iVar1 == 0)
			{
				func_585(&Global_150A08, iParam0);
				func_584(joaat("mpply_crew_local_xp_0"), Global_150A08);
			}
			else if (iVar1 == 1)
			{
				func_585(&Global_150A09, iParam0);
				func_584(joaat("mpply_crew_local_xp_1"), Global_150A09);
			}
			else if (iVar1 == 2)
			{
				func_585(&Global_150A0A, iParam0);
				func_584(joaat("mpply_crew_local_xp_2"), Global_150A0A);
			}
			else if (iVar1 == 3)
			{
				func_585(&Global_150A0B, iParam0);
				func_584(joaat("mpply_crew_local_xp_3"), Global_150A0B);
			}
			else if (iVar1 == 4)
			{
				func_585(&Global_150A0C, iParam0);
				func_584(joaat("mpply_crew_local_xp_4"), Global_150A0C);
			}
		}
	}
}

void func_584(int iParam0, int iParam1)//Position - 0x160F8
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

void func_585(var uParam0, int iParam1)//Position - 0x1621D
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_586(int iParam0)//Position - 0x1622E
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

int func_587(var uParam0)//Position - 0x1628B
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

void func_588(int iParam0, int iParam1, int iParam2)//Position - 0x162AE
{
	if (func_604())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2512 == 0 && iParam1 != 3218036588)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_150A81[func_403(4294967295)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, 3771058946, iParam1);
					return;
				}
				else if (iParam0 == Global_150A81[func_403(4294967295)])
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
		if (func_594(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_1 = iParam0;
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_6 = func_592(iParam0, 1);
		}
		func_533(639, iParam0, 4294967295, 1);
		func_534(640, func_592(iParam0, 1), 4294967295, 1, 0);
		Global_150A81[func_403(4294967295)] = iParam0;
		func_589(7, 0);
	}
}

void func_589(int iParam0, int iParam1)//Position - 0x163CF
{
	int iVar0;
	
	if (func_591(iParam0, iParam1))
	{
		iVar0 = func_590();
		Global_2581E6[iVar0] = iParam0;
	}
}

int func_590()//Position - 0x163F2
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

int func_591(int iParam0, var uParam1)//Position - 0x16427
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

int func_592(int iParam0, bool bParam1)//Position - 0x164AD
{
	if (bParam1)
	{
	}
	return func_593(iParam0, 0);
}

int func_593(int iParam0, int iParam1)//Position - 0x164C1
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

int func_594(int iParam0)//Position - 0x16580
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

int func_595(int iParam0)//Position - 0x165A5
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > 4294967295)
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return Global_150A81[func_403(4294967295)];
			}
			else if (func_594(iParam0))
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_150A81[func_403(4294967295)];
	}
	return 0;
}

void func_596(int iParam0, int iParam1, int iParam2)//Position - 0x16602
{
	int iVar0;
	
	iVar0 = func_536(iParam0, func_403(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_535(iParam0))
	{
		func_534(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_533(iParam0, iVar0, iParam2, 1);
	}
}

void func_597(int iParam0)//Position - 0x16644
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_90(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != CAM::_0xDC9DA9E8789F5246())
					{
						if (func_89(CAM::_0xDC9DA9E8789F5246(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_598(*iParam0, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_598(*iParam0, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_598(int iParam0, int iParam1)//Position - 0x1672F
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_599(bool bParam0, int iParam1)//Position - 0x16750
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
				if (func_1072(iVar4, 0, 1))
				{
					if (iVar4 != CAM::_0xDC9DA9E8789F5246())
					{
						iVar1++;
						if (func_89(CAM::_0xDC9DA9E8789F5246(), iVar4))
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
			if (func_1072(iVar4, 1, 1))
			{
				if (iVar4 != CAM::_0xDC9DA9E8789F5246())
				{
					if (func_600(CAM::_0xDC9DA9E8789F5246(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_89(CAM::_0xDC9DA9E8789F5246(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_598(*iParam1, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_598(*iParam1, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_600(int iParam0, int iParam1)//Position - 0x16868
{
	return SYSTEM::VDIST(func_83(iParam0), func_83(iParam1));
	return 0f;
}

int func_601(int iParam0)//Position - 0x16884
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_598(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_602(int iParam0)//Position - 0x168BB
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_595(CAM::_0xDC9DA9E8789F5246()))
		{
			iParam0 = -func_595(CAM::_0xDC9DA9E8789F5246());
		}
	}
	if (func_603(8000, 0, 0) > 0)
	{
		if (func_603(8000, 0, 0) < (iParam0 + func_595(CAM::_0xDC9DA9E8789F5246())))
		{
			iParam0 = (func_603(8000, 0, 0) - func_595(CAM::_0xDC9DA9E8789F5246()));
		}
	}
	return iParam0;
}

int func_603(int iParam0, bool bParam1, int iParam2)//Position - 0x1691F
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

int func_604()//Position - 0x16947
{
	return 1;
}

int func_605(char* sParam0)//Position - 0x16950
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

int func_606(int iParam0)//Position - 0x16989
{
	return func_457(func_226(iParam0));
}

bool func_607(int iParam0)//Position - 0x1699B
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 2;
}

bool func_608(int iParam0)//Position - 0x169B0
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 7;
}

void func_609()//Position - 0x169C5
{
	Global_258851 = 1;
}

void func_610(int iParam0, var uParam1, var uParam2)//Position - 0x169D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_204(7))
	{
		return;
	}
	iVar0 = func_613(iParam0);
	iVar1 = func_612(iParam0);
	iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_26862F.f_1313.f_103, HUD::_0x13C4B962653A5280()));
	if (func_611(iParam0) != 4294967295)
	{
		if (iVar2 > func_611(iParam0))
		{
			iVar2 = func_611(iParam0);
		}
	}
	else if (iVar2 > Global_40001.f_2FFA)
	{
		iVar2 = Global_40001.f_2FFA;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_611(int iParam0)//Position - 0x16A7C
{
	if (func_324(iParam0, 0) || func_531(iParam0))
	{
		return Global_40001.f_47B4;
	}
	if (func_464(iParam0))
	{
		return Global_40001.f_47B3;
	}
	switch (iParam0)
	{
		case 192:
			return Global_40001.f_47B0;
		
		case 191:
			return Global_40001.f_47B2;
		
		case 190:
			return Global_40001.f_47B1;
		
		case 227:
			return Global_40001.f_51AF;
		
		case 226:
			return Global_40001.f_51A3;
		
		case 225:
			return Global_40001.f_51B7;
		
		case 230:
			return Global_40001.f_569B;
		
		case 229:
			return Global_40001.f_563B;
		
		case 233:
			return Global_40001.f_5875;
		
		case 237:
			return Global_40001.f_5CF9;
		
		case 238:
			return Global_40001.f_5D68;
		
		case 249:
			return Global_40001.f_5D78;
		
		default:
	}
	return 4294967295;
}

int func_612(int iParam0)//Position - 0x16B7F
{
	switch (iParam0)
	{
		case 148:
			return Global_40001.f_3055;
		
		case 152:
			return Global_40001.f_3078;
		
		case 151:
			return 0;
		
		case 142:
			return Global_40001.f_306C;
		
		case 157:
			return Global_40001.f_304B;
		
		case 159:
			return Global_40001.f_303A;
		
		case 164:
			return Global_40001.f_3062;
		
		case 160:
			return Global_40001.f_3094;
		
		case 162:
			return Global_40001.f_30A8;
		
		case 163:
			return Global_40001.f_3085;
		
		case 154:
			return Global_40001.f_30CB;
		
		case 155:
			return Global_40001.f_30C1;
		
		case 153:
			return Global_40001.f_309D;
		
		case 170:
			return Global_40001.f_3A14;
		
		case 171:
			return Global_40001.f_3A4F;
		
		case 172:
			return Global_40001.f_3A61;
		
		case 173:
			return Global_40001.f_3A26;
		
		case 166:
			return Global_40001.f_3A35;
		
		case 167:
			return Global_40001.f_3A90;
		
		case 169:
			return Global_40001.f_3A74;
		
		case 168:
			return Global_40001.f_3A6D;
		
		case 179:
			return Global_40001.f_473B;
		
		case 180:
			return Global_40001.f_465E;
		
		case 182:
			return Global_40001.f_465E;
		
		case 183:
			return Global_40001.f_465E;
		
		case 185:
			return Global_40001.f_465E;
		
		case 186:
			return Global_40001.f_465E;
		
		case 189:
			return Global_40001.f_473B;
		
		case 190:
			return Global_40001.f_45E2;
		
		case 191:
			return Global_40001.f_463D;
		
		case 192:
			return Global_40001.f_456F;
		
		case 193:
			return Global_40001.f_473B;
		
		case 194:
			return Global_40001.f_473B;
		
		case 195:
			return Global_40001.f_465E;
		
		case 197:
			return Global_40001.f_465E;
		
		case 198:
			return Global_40001.f_465E;
		
		case 199:
			return Global_40001.f_473B;
		
		case 200:
			return Global_40001.f_473B;
		
		case 201:
			return Global_40001.f_473B;
		
		case 205:
			return Global_40001.f_473B;
		
		case 207:
			return Global_40001.f_465E;
		
		case 208:
			return Global_40001.f_465E;
		
		case 209:
			return Global_40001.f_465E;
		
		case 210:
			return Global_40001.f_473B;
		
		case 211:
			return Global_40001.f_473B;
		
		case 214:
			return Global_40001.f_4A8C;
		
		case 215:
			return Global_40001.f_4A8E;
		
		case 216:
			return Global_40001.f_4A90;
		
		case 217:
			return Global_40001.f_4A92;
		
		case 218:
			return Global_40001.f_4A94;
		
		case 219:
			return Global_40001.f_4A96;
		
		case 220:
			return Global_40001.f_4A98;
		
		case 221:
			return Global_40001.f_4A9A;
		
		case 225:
			if (func_515(0) || func_352(0))
			{
				return Global_40001.f_51B9;
			}
			break;
		
		case 226:
			if (func_515(0) || func_352(0))
			{
				return Global_40001.f_51A5;
			}
			break;
		
		case 227:
			if (func_515(0) || func_352(0))
			{
				return Global_40001.f_51B1;
			}
			break;
		
		case 229:
			if (func_515(0) || func_352(0))
			{
				return Global_40001.f_563D;
			}
			break;
		
		case 230:
			if (func_515(0) || func_352(0))
			{
				return Global_40001.f_569D;
			}
			break;
		
		case 233:
			if (func_515(0) || func_352(0))
			{
				return Global_40001.f_5874;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (func_515(0) || func_352(0))
			{
				return Global_40001.f_5CFB;
			}
			break;
		
		case 238:
			if (func_515(0) || func_352(0))
			{
				return Global_40001.f_5D6A;
			}
			break;
		
		case 249:
			if (func_515(0) || func_352(0))
			{
				return Global_40001.f_5D7A;
			}
			break;
	}
	return 0;
}

int func_613(int iParam0)//Position - 0x1707C
{
	switch (iParam0)
	{
		case 148:
			return Global_40001.f_3054;
		
		case 152:
			return Global_40001.f_3077;
		
		case 151:
			return 0;
		
		case 142:
			return Global_40001.f_306B;
		
		case 157:
			return Global_40001.f_304A;
		
		case 159:
			return Global_40001.f_3039;
		
		case 164:
			return Global_40001.f_3061;
		
		case 160:
			return Global_40001.f_3093;
		
		case 162:
			return Global_40001.f_30A7;
		
		case 163:
			return Global_40001.f_3084;
		
		case 154:
			return Global_40001.f_30CA;
		
		case 155:
			return Global_40001.f_30C0;
		
		case 153:
			return Global_40001.f_309C;
		
		case 170:
			return Global_40001.f_3A13;
		
		case 171:
			return Global_40001.f_3A4E;
		
		case 172:
			return Global_40001.f_3A60;
		
		case 173:
			return Global_40001.f_3A25;
		
		case 166:
			return Global_40001.f_3A34;
		
		case 179:
			return Global_40001.f_473A;
		
		case 180:
			return Global_40001.f_465D;
		
		case 182:
			return Global_40001.f_465D;
		
		case 183:
			return Global_40001.f_465D;
		
		case 185:
			return Global_40001.f_465D;
		
		case 186:
			return Global_40001.f_465D;
		
		case 189:
			return Global_40001.f_473A;
		
		case 193:
			return Global_40001.f_473A;
		
		case 194:
			return Global_40001.f_473A;
		
		case 195:
			return Global_40001.f_465D;
		
		case 197:
			return Global_40001.f_465D;
		
		case 198:
			return Global_40001.f_465D;
		
		case 199:
			return Global_40001.f_473A;
		
		case 200:
			return Global_40001.f_473A;
		
		case 201:
			return Global_40001.f_473A;
		
		case 205:
			return Global_40001.f_473A;
		
		case 207:
			return Global_40001.f_465D;
		
		case 208:
			return Global_40001.f_465D;
		
		case 209:
			return Global_40001.f_465D;
		
		case 210:
			return Global_40001.f_473A;
		
		case 211:
			return Global_40001.f_473A;
		
		case 190:
			if (!func_957())
			{
				return Global_40001.f_45E1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_957())
			{
				return Global_40001.f_463C;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_957())
			{
				return Global_40001.f_456E;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_40001.f_4A8B;
		
		case 215:
			return Global_40001.f_4A8D;
		
		case 216:
			return Global_40001.f_4A8F;
		
		case 217:
			return Global_40001.f_4A91;
		
		case 218:
			return Global_40001.f_4A93;
		
		case 219:
			return Global_40001.f_4A95;
		
		case 220:
			return Global_40001.f_4A97;
		
		case 221:
			return Global_40001.f_4A99;
		
		case 225:
			if (func_352(0))
			{
				return Global_40001.f_51B8;
			}
			break;
		
		case 226:
			if (func_352(0))
			{
				return Global_40001.f_51A4;
			}
			break;
		
		case 227:
			if (func_352(0))
			{
				return Global_40001.f_51B0;
			}
			break;
		
		case 229:
			if (func_352(0))
			{
				return Global_40001.f_563C;
			}
			break;
		
		case 230:
			if (func_352(0))
			{
				return Global_40001.f_569C;
			}
			break;
		
		case 233:
			if (func_352(0))
			{
				return Global_40001.f_5876;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_352(0))
			{
				return Global_40001.f_5CFA;
			}
			break;
		
		case 238:
			if (func_352(0))
			{
				return Global_40001.f_5D69;
			}
			break;
		
		case 249:
			if (func_352(0))
			{
				return Global_40001.f_5D79;
			}
			break;
	}
	return 0;
}

void func_614(int iParam0, int iParam1)//Position - 0x17523
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_957())
		{
			if (func_515(0))
			{
				if (!func_352(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_514()))
					{
						if (func_628() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_628());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_626(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_619("GB_BCUT_TICK1", func_514(), iVar0, 0, 0, 1, 1);
						}
						func_618(20);
						func_615(func_514(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_615(int iParam0, int iParam1, int iParam2)//Position - 0x175C4
{
	struct<8> Var0;
	
	if (func_1072(iParam0, 0, 1))
	{
		Var0 = 2084031113;
		Var0.f_1 = CAM::_0xDC9DA9E8789F5246();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_617(iParam0);
		func_616(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_559(iParam0));
	}
}

void func_616(var uParam0, var uParam1)//Position - 0x1761A
{
	*uParam0 = Global_19135D.f_9;
	*uParam1 = Global_19135D.f_A;
}

var func_617(int iParam0)//Position - 0x17634
{
	return Global_18CD5B[iParam0 /*560*/].f_1EB;
}

void func_618(int iParam0)//Position - 0x17648
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_26862F.f_1313.f_7[iVar0]), iVar1);
}

int func_619(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x17671
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 4294967295;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		HUD::_SET_NOTIFICATION_COLOR_NEXT(func_494(iParam1, 4294967294, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_624(&Var1));
		if (!iParam3 == 0)
		{
			HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		func_620(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_620(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x17709
{
	int iVar0;
	
	if ((!func_623() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_146(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		return;
	}
	iVar0 = func_621(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_196195.f_5[iVar0 /*53*/] = iParam0;
		Global_196195.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_196195.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_196195.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_196195.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_196195.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_196195.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_C), sParam3, 64);
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_1C[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_1C[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_1C[2 /*6*/]), sParam11, 24);
	}
}

int func_621(int iParam0)//Position - 0x17811
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_196195 - 1))
	{
		if (iParam0 > Global_196195.f_5[iVar0 /*53*/].f_1)
		{
			func_622(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_196195++;
	if (Global_196195 > 5)
	{
		Global_196195 = 5;
		return Global_196195;
	}
	return (Global_196195 - 1);
}

void func_622(int iParam0)//Position - 0x17873
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_196195.f_5[iVar0 /*53*/] = { Global_196195.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + 4294967295);
	}
}

bool func_623()//Position - 0x178AC
{
	return DLC::IS_DLC_PRESENT(2532323046);
}

var func_624(char* sParam0)//Position - 0x178BD
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_625(&cVar0);
}

var func_625(char[4] cParam0)//Position - 0x178E1
{
	return cParam0;
}

void func_626(int iParam0, bool bParam1)//Position - 0x178EB
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_627(1);
	}
	else
	{
		iVar1 = func_627(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_627(bool bParam0)//Position - 0x1791D
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_2FF5;
}

int func_628()//Position - 0x17943
{
	return Global_40001.f_2FF4;
}

void func_629(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x17952
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_352(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_957())
		{
			iVar17 = CAM::_0xDC9DA9E8789F5246();
		}
		else
		{
			iVar17 = func_514();
		}
		iVar11 = iVar17;
		if (iVar11 != 4294967295)
		{
			iVar0 = Global_1841F3[iVar11 /*790*/].f_300.f_1;
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1841F3[iVar11 /*790*/].f_300.f_2;
			}
			else
			{
				iVar2 = func_645(Global_1841F3[iVar11 /*790*/].f_300, *uParam3);
			}
			if (uParam1->f_11)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_644(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == CAM::_0xDC9DA9E8789F5246())
				{
					func_643("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_197030.f_31 = *uParam3;
			if (iVar17 == CAM::_0xDC9DA9E8789F5246())
			{
				if (iVar2 > 0)
				{
					func_642(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_640(*uParam3);
				}
				iVar6 = func_639(&uVar5);
				iVar7 = Global_40001.f_5D18;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_5D17));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_618(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar22 = iVar21;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar22))
							{
								iVar23 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar22);
								if (func_638(iVar23))
								{
									func_630(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_26862F.f_1313.f_174 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_40001.f_5CFC;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_5CFD;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_19993F = *iParam2;
					func_618(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_630(int iParam0, int iParam1, int iParam2)//Position - 0x17BB9
{
	var uVar0;
	
	uVar0 = func_632(iParam0);
	func_631(iParam0, uVar0, iParam1, iParam2);
}

void func_631(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x17BD5
{
	struct<8> Var0;
	
	Var0 = 2440128305;
	Var0.f_1 = CAM::_0xDC9DA9E8789F5246();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_617(iParam0);
	func_616(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_22())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_559(iParam0));
		}
	}
}

int func_632(int iParam0)//Position - 0x17C3B
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_637();
	iVar0 = func_635(iParam0, iVar0);
	iVar1 = Global_18CD5B[func_514() /*560*/].f_B.f_198;
	iVar0 = (iVar0 + (iVar1 * Global_40001.f_39EC));
	if (iVar0 < func_634())
	{
		iVar0 = func_634();
	}
	if (iVar0 > func_633())
	{
		iVar0 = func_633();
	}
	return iVar0;
}

int func_633()//Position - 0x17C94
{
	return Global_40001.f_39ED;
}

int func_634()//Position - 0x17CA3
{
	return Global_40001.f_3E84;
}

int func_635(int iParam0, int iParam1)//Position - 0x17CB2
{
	int iVar0;
	
	iVar0 = (func_703(iParam0) * func_636());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_636()//Position - 0x17CD0
{
	return Global_40001.f_3E83;
}

var func_637()//Position - 0x17CDF
{
	return Global_40001.f_2FEC;
}

int func_638(int iParam0)//Position - 0x17CEE
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != CAM::_0xDC9DA9E8789F5246())
		{
			if (func_326(iParam0, CAM::_0xDC9DA9E8789F5246(), 0))
			{
				if (!func_199(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_639(var uParam0)//Position - 0x17D27
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_146(iVar2, 0) && !func_326(iVar2, CAM::_0xDC9DA9E8789F5246(), 1))
			{
				iVar1++;
			}
			else if (func_146(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_640(int iParam0)//Position - 0x17D93
{
	func_641(iParam0, 7236);
}

void func_641(int iParam0, int iParam1)//Position - 0x17DA4
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_536(iParam1, 4294967295, 0);
	func_534(iParam1, (iVar0 + iParam0), 4294967295, 1, 0);
}

void func_642(int iParam0)//Position - 0x17DCD
{
	func_641(iParam0, 7231);
}

int func_643(char* sParam0, int iParam1, int iParam2)//Position - 0x17DDE
{
	int iVar0;
	
	iVar0 = 4294967295;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_620(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_644(int iParam0)//Position - 0x17E13
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_40001.f_5D19);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_645(struct<5> Param0, int iParam1)//Position - 0x17E47
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam1 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam1) / SYSTEM::TO_FLOAT(Param0.f_1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_646(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)//Position - 0x17EB1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_352(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_957())
		{
			iVar15 = CAM::_0xDC9DA9E8789F5246();
		}
		else
		{
			iVar15 = func_514();
		}
		if (iVar15 != 4294967295)
		{
			if (uParam1->f_10 == 8)
			{
				iVar0 = (func_658(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_649(uParam1->f_10) + uParam1->f_8);
			}
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_544(uParam1->f_10, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_543(uParam1->f_10, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_648(*iParam2) > 0)
			{
				if (iVar15 == CAM::_0xDC9DA9E8789F5246())
				{
					func_643("SMTICK_RONCUT", func_648(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_648(*iParam2));
			}
			if (iVar15 == CAM::_0xDC9DA9E8789F5246())
			{
				func_647(iVar2, iVar9);
				iVar6 = func_639(&uVar5);
				iVar7 = Global_40001.f_56AE;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_56AD));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_618(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_638(iVar20))
								{
									func_630(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_26862F.f_1313.f_174 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_40001.f_566B;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_566C;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_19993F = *iParam2;
					func_618(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_647(int iParam0, int iParam1)//Position - 0x180F9
{
	if (iParam0 > 0)
	{
		func_641(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_641(iParam1, 6117);
	}
}

int func_648(int iParam0)//Position - 0x1811F
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_40001.f_568D);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_40001.f_568E))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_568E);
	}
	return SYSTEM::ROUND(fVar1);
}

int func_649(int iParam0)//Position - 0x1815F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_656())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_658(CAM::_0xDC9DA9E8789F5246());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_651(func_652(func_655(iVar0), 4294967295, 4294967295));
		if (func_650(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_650(int iParam0)//Position - 0x181BD
{
	switch (iParam0)
	{
		case 3786007249:
			return 5;
		
		case 2298388584:
			return 5;
		
		case 3970904288:
			return 7;
		
		case 2757724536:
			return 7;
		
		case 167523060:
			return 1;
		
		case 440723308:
			return 1;
		
		case 2473282811:
			return 6;
		
		case 1075487129:
			return 6;
		
		case 1339867730:
			return 4;
		
		case 1158536477:
			return 4;
		
		case 3072258214:
			return 0;
		
		case 4034544605:
			return 0;
		
		case 3177327825:
			return 3;
		
		case 2860494080:
			return 3;
		
		case 690570889:
			return 2;
		
		case 320416020:
			return 2;
		
		default:
	}
	return 4294967295;
}

int func_651(int iParam0)//Position - 0x1826D
{
	switch (iParam0)
	{
		case 1:
			return 3786007249;
		
		case 2:
			return 2298388584;
		
		case 3:
			return 3970904288;
		
		case 4:
			return 2757724536;
		
		case 5:
			return 167523060;
		
		case 6:
			return 440723308;
		
		case 7:
			return 2473282811;
		
		case 8:
			return 1075487129;
		
		case 9:
			return 1339867730;
		
		case 10:
			return 1158536477;
		
		case 11:
			return 3072258214;
		
		case 12:
			return 4034544605;
		
		case 13:
			return 3177327825;
		
		case 14:
			return 2860494080;
		
		case 15:
			return 690570889;
		
		case 16:
			return 320416020;
		
		default:
	}
	return 0;
}

int func_652(int iParam0, int iParam1, int iParam2)//Position - 0x1835D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_148();
	}
	iVar0 = 0;
	iVar1 = func_654(iParam0, iParam1);
	iVar2 = func_653(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_653(int iParam0)//Position - 0x183A3
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	return iVar0;
}

int func_654(int iParam0, int iParam1)//Position - 0x18745
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_148();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	return iVar0;
}

int func_655(int iParam0)//Position - 0x18A9A
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_656()//Position - 0x18D04
{
	return func_657() != 0;
}

int func_657()//Position - 0x18D12
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_FF;
}

int func_658(int iParam0)//Position - 0x18D2A
{
	if (iParam0 != func_22() && func_659(iParam0))
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_FF.f_3;
	}
	return 0;
}

int func_659(int iParam0)//Position - 0x18D5B
{
	if (iParam0 != func_22())
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_FF != 0;
	}
	return 0;
}

void func_660(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x18D80
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_352(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_957())
		{
			iVar15 = CAM::_0xDC9DA9E8789F5246();
		}
		else
		{
			iVar15 = func_514();
		}
		if (iVar15 != 4294967295)
		{
			iVar16 = func_547(iVar15);
			iVar0 = (func_681(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_677(iVar15, iVar16, iVar1);
			if (uParam1->f_E == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_40001.f_51A7));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_40001.f_51A6));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == CAM::_0xDC9DA9E8789F5246())
			{
				func_674(iVar16, iVar2);
				if (func_670(iVar16) >= Global_40001.f_4FE3 || iVar2 >= Global_40001.f_4FE3)
				{
					func_661(5);
				}
				iVar6 = func_639(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_40001.f_51A9);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_51A8));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_618(108);
					}
					else
					{
						func_618(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_638(iVar20))
								{
									func_630(iVar20, 1, 2389839094);
								}
							}
							iVar18++;
						}
					}
				}
				Global_26862F.f_1313.f_174 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_40001.f_51AA;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_51AB;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_19993F = *iParam2;
					func_618(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_661(int iParam0)//Position - 0x18FBB
{
	switch (iParam0)
	{
		case 0:
			if (Global_40001.f_4FD7)
			{
				if (func_663(Global_40001.f_4FD8))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_40001.f_4FD9)
			{
				if (func_663(Global_40001.f_4FDA))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_40001.f_4FDB)
			{
				if (func_663(Global_40001.f_4FDC))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_40001.f_4FDD)
			{
				if (func_663(Global_40001.f_4FDE))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_40001.f_4FDF)
			{
				if (func_663(Global_40001.f_4FE0))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_40001.f_4FE1)
			{
				if (func_663(Global_40001.f_4FE2))
				{
					func_643("CLOTHAWDSTRAP3", Global_40001.f_4FE3, 1);
				}
			}
			break;
		
		case 6:
			if (Global_40001.f_4FE4)
			{
				if (func_663(Global_40001.f_4FE5))
				{
					func_643("CLOTHAWDSTRAP5", Global_40001.f_5069, 1);
				}
			}
			break;
		
		case 7:
			if (Global_40001.f_4FE7)
			{
				if (func_663(Global_40001.f_4FE8))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_40001.f_4FE9)
			{
				if (func_663(Global_40001.f_4FEA))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_40001.f_4FEB)
			{
				if (func_663(Global_40001.f_4FEC))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_40001.f_4FED)
			{
				if (func_663(Global_40001.f_4FEE))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_40001.f_4FEF)
			{
				if (func_663(Global_40001.f_4FF0))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_40001.f_4FF1)
			{
				if (func_663(Global_40001.f_4FF2))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_40001.f_4FF3)
			{
				if (func_663(Global_40001.f_4FF4))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_40001.f_4FF5)
			{
				if (func_663(Global_40001.f_4FF6))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_662(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x192B8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4294967295;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	if (!iParam2 == 0)
	{
		HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	if (!iParam3 == 0)
	{
		HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	if (!bParam4)
	{
		iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	}
	else
	{
		Global_2633E1 = { func_88(CAM::_0xDC9DA9E8789F5246()) };
		if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_26339B, 35, &Global_2633E1))
		{
			iVar1 = 0;
			if (MISC::ARE_STRINGS_EQUAL(&(Global_26339B.f_16), "Leader") && Global_26339B.f_1E == 0)
			{
				iVar1 = 1;
			}
			if (Global_26339B.f_15 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = HUD::_DRAW_NOTIFICATION_CLAN_INVITE(iVar2, NETWORK::_0x7543BB439F63792B(&Global_26339B, 35), &(Global_26339B.f_11), Global_26339B.f_1E, iVar1, 0, Global_26339B, PLAYER::GET_PLAYER_NAME(CAM::_0xDC9DA9E8789F5246()), Global_140CDE, Global_140CDF, Global_140CE0);
		}
		else
		{
			iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		}
	}
	func_620(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_663(int iParam0)//Position - 0x193AC
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case 3103481304:
		case 2559625089:
			if (!func_667(15417, 4294967295, 4294967295))
			{
				func_666(15417, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case 4174055868:
		case 2887664642:
		case 2255168310:
			if (!func_667(15418, 4294967295, 4294967295))
			{
				func_666(15418, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case 2935769924:
		case 4153970748:
		case 2444324359:
			if (!func_667(15425, 4294967295, 4294967295))
			{
				func_666(15425, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 3599602535:
		case 1263491585:
		case 2987652061:
		case 258618816:
			if (!func_667(15405, 4294967295, 4294967295))
			{
				func_666(15405, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case 3723642317:
		case 1374601256:
			if (!func_667(15393, 4294967295, 4294967295))
			{
				func_666(15393, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case 3634679186:
			if (!func_667(15409, 4294967295, 4294967295))
			{
				func_666(15409, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case 2492427392:
		case 3289780757:
		case 3868944767:
			if (!func_667(15396, 4294967295, 4294967295))
			{
				func_666(15396, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2196597796:
		case 3097998512:
		case 2980310317:
		case 3162445127:
			if (!func_667(15412, 4294967295, 4294967295))
			{
				func_666(15412, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3122223739:
		case 2792755277:
		case 1110085176:
		case 3405296186:
			if (!func_402(209, 4294967295))
			{
				func_664(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2411791819:
		case 3710352815:
		case 2557983445:
		case 4112352903:
			if (!func_667(15403, 4294967295, 4294967295))
			{
				func_666(15403, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case 3404257586:
		case 2797983601:
		case 48701978:
			if (!func_402(209, 4294967295))
			{
				func_664(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3424976530:
		case 3713826333:
		case 1827333048:
		case 3648114472:
			if (!func_667(15389, 4294967295, 4294967295))
			{
				func_666(15389, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3752338848:
		case 3424508832:
		case 420690954:
		case 3886574485:
			if (!func_402(209, 4294967295))
			{
				func_664(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_667(15398, 4294967295, 4294967295))
			{
				func_666(15398, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 2933869803:
		case 4221319652:
		case 3258386893:
		case 2529150874:
		case 2303587303:
		case 2563356175:
			if (!func_667(15400, 4294967295, 4294967295))
			{
				func_666(15400, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3127501824:
		case 3981548879:
		case 4091931946:
		case 2761646929:
		case 2065127290:
		case 3904886266:
			if (!func_402(209, 4294967295))
			{
				func_664(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2189358123:
		case 3596480360:
		case 917598912:
		case 939297301:
		case 4238563984:
		case 2926043467:
			if (!func_667(15408, 4294967295, 4294967295))
			{
				func_666(15408, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2430046428:
		case 3222061766:
		case 682284723:
		case 1186965403:
		case 4002266725:
		case 2226228703:
			if (!func_402(209, 4294967295))
			{
				func_664(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case 3646067695:
		case 3682843522:
			if (!func_667(15411, 4294967295, 4294967295))
			{
				func_666(15411, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case 3405772618:
		case 801334272:
			if (!func_667(15397, 4294967295, 4294967295))
			{
				func_666(15397, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case 4148261629:
			if (!func_667(15413, 4294967295, 4294967295))
			{
				func_666(15413, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case 2297277414:
		case 627387411:
		case 3447136105:
			if (!func_667(15391, 4294967295, 4294967295))
			{
				func_666(15391, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case 2731313194:
		case 1932815241:
		case 2677758273:
		case 308545041:
		case 1682427144:
			if (!func_667(15388, 4294967295, 4294967295))
			{
				func_666(15388, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case 3574885561:
		case 1626031863:
		case 2903012379:
		case 35480964:
		case 2029975158:
			if (!func_402(209, 4294967295))
			{
				func_664(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3170262904:
		case 3444874261:
		case 926585800:
		case 2461997424:
		case 1539395388:
		case 1377465778:
			if (!func_667(15401, 4294967295, 4294967295))
			{
				func_666(15401, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case 3972875916:
		case 2690230073:
		case 3458584499:
			if (!func_667(15394, 4294967295, 4294967295))
			{
				func_666(15394, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3760111810:
		case 3126392231:
		case 2927838092:
		case 3288939386:
			if (!func_402(209, 4294967295))
			{
				func_664(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3778634034:
		case 756873456:
		case 87453937:
		case 2856191972:
			if (!func_667(15406, 4294967295, 4294967295))
			{
				func_666(15406, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case 3564929588:
		case 2608307573:
		case 3200692489:
			if (!func_667(15395, 4294967295, 4294967295))
			{
				func_666(15395, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case 3324508810:
		case 1992217604:
		case 2946241204:
			if (!func_402(209, 4294967295))
			{
				func_664(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2804308795:
		case 975601953:
		case 2360410088:
		case 1786218600:
			if (!func_667(15410, 4294967295, 4294967295))
			{
				func_666(15410, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2559332058:
		case 1614208560:
		case 3260934977:
		case 2436945402:
			if (!func_667(15407, 4294967295, 4294967295))
			{
				func_666(15407, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case 3568934735:
		case 1747334867:
		case 1237632771:
			if (!func_402(209, 4294967295))
			{
				func_664(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2363349808:
		case 2469980134:
		case 236389050:
		case 1987485798:
			if (!func_402(209, 4294967295))
			{
				func_664(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2568634995:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_667(15414, 4294967295, 4294967295))
			{
				func_666(15414, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2912044766:
		case 734151492:
		case 3937330446:
		case 3272973588:
			if (!func_667(15415, 4294967295, 4294967295))
			{
				func_666(15415, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case 2528104976:
		case 479676642:
		case 2640138660:
			if (!func_667(15399, 4294967295, 4294967295))
			{
				func_666(15399, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2518176946:
		case 579562906:
		case 242920617:
		case 2929259547:
			if (!func_667(15404, 4294967295, 4294967295))
			{
				func_666(15404, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2306910001:
		case 3675212365:
		case 3075243594:
		case 3906758817:
			if (!func_402(209, 4294967295))
			{
				func_664(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case 2717995956:
		case 2087194554:
			if (!func_667(15392, 4294967295, 4294967295))
			{
				func_666(15392, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case 2889930927:
		case 3672065391:
		case 981732339:
			if (!func_667(15390, 4294967295, 4294967295))
			{
				func_666(15390, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case 3313834683:
		case 1271443068:
			if (!func_667(15402, 4294967295, 4294967295))
			{
				func_666(15402, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 4002044941:
		case 4260428506:
		case 2385980452:
		case 2509849112:
			if (!func_667(15416, 4294967295, 4294967295))
			{
				func_666(15416, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2799534611:
		case 1898518287:
		case 2029126042:
		case 2773934483:
			if (!func_402(209, 4294967295))
			{
				func_664(209, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 2171481858:
		case 1457900554:
		case 4280650683:
		case 619771057:
			if (!func_667(15426, 4294967295, 4294967295))
			{
				func_666(15426, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3479260505:
		case 3228839791:
		case 1281631799:
		case 2775938488:
			if (!func_667(15422, 4294967295, 4294967295))
			{
				func_666(15422, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2976164949:
		case 2928217253:
		case 447234752:
		case 1996626130:
			if (!func_667(15423, 4294967295, 4294967295))
			{
				func_666(15423, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case 2313207439:
			if (!func_667(15421, 4294967295, 4294967295))
			{
				func_666(15421, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case 2655677837:
		case 3732359775:
		case 3415687675:
			if (!func_667(15427, 4294967295, 4294967295))
			{
				func_666(15427, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3375652548:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_667(15419, 4294967295, 4294967295))
			{
				func_666(15419, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case 3410686596:
		case 4208984884:
		case 1573086793:
			if (!func_667(15420, 4294967295, 4294967295))
			{
				func_666(15420, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_664(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x19F21
{
	int iVar0;
	
	if (func_665())
	{
		iVar0 = Global_2727B6[iParam0 /*3*/][func_403(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_665()//Position - 0x19F53
{
	return 1;
	return 0;
}

int func_666(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x19F60
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
		iParam2 = func_148();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_667(int iParam0, int iParam1, int iParam2)//Position - 0x1A4C8
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_148();
	}
	iVar1 = func_669(iParam0, iParam1);
	uVar2 = func_668(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_668(int iParam0)//Position - 0x1A505
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	return iVar0;
}

int func_669(int iParam0, int iParam1)//Position - 0x1A81D
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_148();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	return iVar0;
}

int func_670(int iParam0)//Position - 0x1AB15
{
	int iVar0;
	
	iVar0 = func_672(iParam0);
	return func_536(func_671(iVar0), 4294967295, 0);
}

int func_671(int iParam0)//Position - 0x1AB31
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_672(int iParam0)//Position - 0x1AB8B
{
	int iVar0;
	
	if (func_673(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_673(int iParam0)//Position - 0x1ABCD
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_674(int iParam0, int iParam1)//Position - 0x1ABEC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_672(iParam0);
	iVar1 = func_671(iVar0);
	iVar2 = (func_536(iVar1, 4294967295, 0) + iParam1);
	func_534(iVar1, iVar2, 4294967295, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_652(9357, 4294967295, 4294967295) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iVar0 /*12*/] != 0)
			{
				iVar1 = func_671(iVar0);
				iVar3 = (iVar3 + func_536(iVar1, 4294967295, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_676(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_675(9357, iVar5, 4294967295, 1);
	}
}

var func_675(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1ACA1
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == 4294967295)
	{
		iParam2 = func_148();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_676(int iParam0)//Position - 0x1B1DF
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_677(int iParam0, int iParam1, int iParam2)//Position - 0x1B21F
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_560(iParam1);
	if (func_673(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_40001.f_41C2;
				if (func_678(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_41C7);
				}
				if (func_678(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_41CC);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_40001.f_41C1;
				if (func_678(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_41C6);
				}
				if (func_678(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_41CB);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_40001.f_41C0;
				if (func_678(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_41C5);
				}
				if (func_678(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_41CA);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_40001.f_41BE;
				if (func_678(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_41C3);
				}
				if (func_678(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_41C8);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_40001.f_41BF;
				if (func_678(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_41C4);
				}
				if (func_678(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_41C9);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_40001.f_51C0;
				if (func_678(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_51C2);
				}
				if (func_678(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_51C1);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_678(int iParam0, int iParam1, int iParam2)//Position - 0x1B3F7
{
	int iVar0;
	
	if (func_680(iParam0, iParam1))
	{
		iVar0 = func_679(iParam0, iParam1);
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_679(int iParam0, int iParam1)//Position - 0x1B432
{
	int iVar0;
	
	if (func_673(iParam1) && iParam0 != func_22())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_680(int iParam0, int iParam1)//Position - 0x1B47E
{
	int iVar0;
	
	if (func_673(iParam1) && iParam0 != func_22())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_681(int iParam0, int iParam1)//Position - 0x1B4C9
{
	int iVar0;
	
	if (iParam0 == func_22())
	{
		return 0;
	}
	if (func_673(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam1)
			{
				return Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_682(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x1B528
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_A > 0)
		{
			if (func_563())
			{
				Var0 = { func_562() };
				if (uParam1->f_A == uParam1->f_B)
				{
					*uParam3 = (uParam1->f_F + uParam1->f_8);
				}
				else
				{
					fVar1 = SYSTEM::TO_FLOAT(uParam1->f_A);
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_B);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_F + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = SYSTEM::CEIL(fVar5);
				}
				iVar6 = func_677(CAM::_0xDC9DA9E8789F5246(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (SYSTEM::TO_FLOAT(iVar6) * Global_40001.f_4820);
					iVar6 = SYSTEM::ROUND(fVar7);
				}
				else
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar6) * Global_40001.f_481F);
					iVar6 = SYSTEM::ROUND(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_639(&uVar9);
				iVar11 = SYSTEM::ROUND(Global_40001.f_4816);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = SYSTEM::CEIL((IntToFloat(iVar10) * Global_40001.f_4815));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_C == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_C == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0)
				{
					func_618(86);
				}
				Global_26862F.f_1313.f_174 = *iParam2;
			}
			else if (func_352(0))
			{
				Var14 = { func_683(func_514()) };
				if (uParam1->f_A == uParam1->f_B)
				{
					*uParam3 = (uParam1->f_F + uParam1->f_8);
				}
				else
				{
					fVar15 = SYSTEM::TO_FLOAT(uParam1->f_A);
					fVar16 = SYSTEM::TO_FLOAT(uParam1->f_B);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_F + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = SYSTEM::CEIL(fVar19);
				}
				iVar20 = func_677(func_514(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_40001.f_4820));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_40001.f_481F));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_40001.f_4847;
				iVar22 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_40001.f_4848;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_C == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_683(int iParam0)//Position - 0x1B7CB
{
	return Global_18CD5B[iParam0 /*560*/].f_B.f_BC;
}

void func_684(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)//Position - 0x1B7E2
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_245(CAM::_0xDC9DA9E8789F5246()))
		{
			if (bParam1)
			{
				func_699();
			}
			func_698();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_245(CAM::_0xDC9DA9E8789F5246()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_690(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_B1));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_689(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_639(&uVar2);
					iVar4 = Global_40001.f_3E8E;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_40001.f_3B77));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_618(44);
					}
				}
				func_687(*iParam3);
				func_686();
				Global_26862F.f_1313.f_174 = *iParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_638(iVar9))
						{
							func_630(iVar9, 1, 3002513507);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_245(CAM::_0xDC9DA9E8789F5246()))
		{
			func_685();
		}
	}
}

void func_685()//Position - 0x1B94E
{
	int iVar0;
	
	iVar0 = Global_27304E[func_148()];
	iVar0++;
	func_533(3667, iVar0, 4294967295, 1);
}

void func_686()//Position - 0x1B973
{
	int iVar0;
	
	iVar0 = Global_273054[func_148()];
	iVar0++;
	func_533(3666, iVar0, 4294967295, 1);
}

void func_687(int iParam0)//Position - 0x1B998
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_273057[func_148()];
	iVar0 = (iVar0 + iParam0);
	func_533(3668, iVar0, 4294967295, 1);
	if (func_652(7666, 4294967295, 4294967295) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_688(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_675(7666, iVar2, 4294967295, 1);
	}
}

int func_688(int iParam0)//Position - 0x1B9FA
{
	switch (iParam0)
	{
		case 1:
			return Global_40001.f_3F13;
			break;
		
		case 2:
			return Global_40001.f_3F14;
			break;
		
		case 3:
			return Global_40001.f_3F15;
			break;
		
		case 4:
			return Global_40001.f_3F16;
			break;
		
		case 5:
			return Global_40001.f_3F17;
			break;
		
		case 6:
			return Global_40001.f_3F18;
			break;
		
		case 7:
			return Global_40001.f_3F19;
			break;
		
		case 8:
			return Global_40001.f_3F1A;
			break;
		
		case 9:
			return Global_40001.f_3F1B;
			break;
		
		case 10:
			return Global_40001.f_3F1C;
			break;
		
		case 11:
			return Global_40001.f_3F1D;
			break;
		
		case 12:
			return Global_40001.f_3F1E;
			break;
		
		case 13:
			return Global_40001.f_3F1F;
			break;
		
		case 14:
			return Global_40001.f_3F20;
			break;
		
		case 15:
			return Global_40001.f_3F21;
			break;
		
		case 16:
			return Global_40001.f_3F22;
			break;
		
		case 17:
			return Global_40001.f_3F23;
			break;
		
		case 18:
			return Global_40001.f_3F24;
			break;
		
		case 19:
			return Global_40001.f_3F25;
			break;
		
		case 20:
			return Global_40001.f_3F26;
			break;
		
		case 21:
			return Global_40001.f_3F27;
			break;
		
		case 22:
			return Global_40001.f_3F28;
			break;
		
		case 23:
			return Global_40001.f_3F29;
			break;
		
		case 24:
			return Global_40001.f_3F2A;
			break;
	}
	return 0;
}

var func_689(int iParam0)//Position - 0x1BBD2
{
	if (iParam0 >= Global_40001.f_3B61)
	{
		return Global_40001.f_3B76;
	}
	else if (iParam0 >= Global_40001.f_3B60)
	{
		return Global_40001.f_3B75;
	}
	else if (iParam0 >= Global_40001.f_3B5F)
	{
		return Global_40001.f_3B74;
	}
	else if (iParam0 >= Global_40001.f_3B5E)
	{
		return Global_40001.f_3B73;
	}
	else if (iParam0 >= Global_40001.f_3B5D)
	{
		return Global_40001.f_3B72;
	}
	else if (iParam0 >= Global_40001.f_3B5C)
	{
		return Global_40001.f_3B71;
	}
	else if (iParam0 >= Global_40001.f_3B5B)
	{
		return Global_40001.f_3B70;
	}
	else if (iParam0 >= Global_40001.f_3B5A)
	{
		return Global_40001.f_3B6F;
	}
	else if (iParam0 >= Global_40001.f_3B59)
	{
		return Global_40001.f_3B6E;
	}
	else if (iParam0 >= Global_40001.f_3B58)
	{
		return Global_40001.f_3B6D;
	}
	else if (iParam0 >= Global_40001.f_3B57)
	{
		return Global_40001.f_3B6C;
	}
	else if (iParam0 >= Global_40001.f_3B56)
	{
		return Global_40001.f_3B6B;
	}
	else if (iParam0 >= Global_40001.f_3B55)
	{
		return Global_40001.f_3B6A;
	}
	else if (iParam0 >= Global_40001.f_3B54)
	{
		return Global_40001.f_3B69;
	}
	else if (iParam0 >= Global_40001.f_3B53)
	{
		return Global_40001.f_3B68;
	}
	else if (iParam0 >= Global_40001.f_3B52)
	{
		return Global_40001.f_3B67;
	}
	else if (iParam0 >= Global_40001.f_3B51)
	{
		return Global_40001.f_3B66;
	}
	else if (iParam0 >= Global_40001.f_3B50)
	{
		return Global_40001.f_3B65;
	}
	else if (iParam0 >= Global_40001.f_3B4F)
	{
		return Global_40001.f_3B64;
	}
	else if (iParam0 >= Global_40001.f_3B4E)
	{
		return Global_40001.f_3B63;
	}
	return Global_40001.f_3B62;
}

int func_690(int iParam0)//Position - 0x1BDD2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_697(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_696(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_695(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_691(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_691(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_695(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_691(int iParam0)//Position - 0x1BE4E
{
	int iVar0;
	
	if (func_694(iParam0))
	{
		iVar0 = func_692(func_693(iParam0));
		return func_536(iVar0, 4294967295, 0);
	}
	return 0;
}

int func_692(int iParam0)//Position - 0x1BE77
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_693(int iParam0)//Position - 0x1BECA
{
	int iVar0;
	
	if (func_694(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_62[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_694(int iParam0)//Position - 0x1BF0C
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_695(int iParam0)//Position - 0x1BF2B
{
	if (iParam0 == 1)
	{
		return Global_40001.f_3C29;
	}
	else if (iParam0 == 2)
	{
		return Global_40001.f_3C27;
	}
	else if (iParam0 == 3)
	{
		return Global_40001.f_3C2B;
	}
	else if (iParam0 == 4)
	{
		return Global_40001.f_3C25;
	}
	else if (iParam0 == 5)
	{
		return Global_40001.f_3C23;
	}
	else if (iParam0 == 6)
	{
		return Global_40001.f_3C2D;
	}
	return 0;
}

int func_696(int iParam0, int iParam1)//Position - 0x1BFA3
{
	int iVar0;
	
	if (func_694(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_197512[iVar0] == iParam1 && Global_197519[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_697(int iParam0)//Position - 0x1BFE9
{
	int iVar0;
	
	if (func_694(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_62[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_698()//Position - 0x1C02D
{
	int iVar0;
	
	iVar0 = Global_27304B[func_148()];
	iVar0++;
	Global_27304B[func_148()] = iVar0;
	func_533(3665, iVar0, 4294967295, 1);
}

void func_699()//Position - 0x1C05E
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_273048[func_148()];
	iVar1 = Global_273051[func_148()];
	iVar0++;
	iVar1++;
	Global_273048[func_148()] = iVar0;
	Global_273051[func_148()] = iVar1;
	Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_78 = iVar1;
	func_533(3663, iVar0, 4294967295, 1);
	func_533(3664, iVar1, 4294967295, 1);
}

void func_700()//Position - 0x1C0CA
{
	if (func_957())
	{
		Global_255F11.f_BFC.f_86 = 0;
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_198 = Global_255F11.f_BFC.f_86;
	}
}

void func_701()//Position - 0x1C0FC
{
	if (func_957())
	{
		if (Global_255F11.f_BFC.f_86 < 10)
		{
			Global_255F11.f_BFC.f_86++;
			Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_198 = Global_255F11.f_BFC.f_86;
		}
	}
}

void func_702()//Position - 0x1C146
{
	if (func_957())
	{
		if (Global_255F11.f_BFC.f_86 > 0)
		{
			Global_255F11.f_BFC.f_86 = (Global_255F11.f_BFC.f_86 - 1);
			Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_198 = Global_255F11.f_BFC.f_86;
		}
	}
}

int func_703(int iParam0)//Position - 0x1C18F
{
	return Global_18CD5B[iParam0 /*560*/].f_B.f_1C;
}

int func_704(int iParam0)//Position - 0x1C1A4
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
			if (func_515(1) && !func_352(1))
			{
				if (func_705(func_514()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_705(int iParam0)//Position - 0x1C219
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 26);
}

int func_706(int iParam0)//Position - 0x1C23F
{
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3069) * Global_40001.f_306E));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3037) * Global_40001.f_303C));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3052) * Global_40001.f_3056));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_305F) * Global_40001.f_3063));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3075) * Global_40001.f_307A));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3117) * Global_40001.f_3118));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_311D) * Global_40001.f_311E));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_311B) * Global_40001.f_311C));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3115) * Global_40001.f_3116));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3119) * Global_40001.f_311A));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3113) * Global_40001.f_3114));
		
		case 170:
			return 0;
		
		case 171:
			return Global_40001.f_3A4C;
		
		case 172:
			return Global_40001.f_3A5C;
		
		case 173:
			return Global_40001.f_3A23;
		
		case 166:
			return 0;
		
		case 179:
			return Global_40001.f_46EE;
		
		case 180:
			return Global_40001.f_4672;
		
		case 182:
			return 0;
		
		case 183:
			return Global_40001.f_467A;
		
		case 185:
			return Global_40001.f_4683;
		
		case 186:
			return 0;
		
		case 189:
			return Global_40001.f_4746;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_40001.f_4757;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_40001.f_46BF;
		
		case 198:
			return 0;
		
		case 199:
			return Global_40001.f_4776;
		
		case 200:
			return 0;
		
		case 201:
			return Global_40001.f_46FC;
		
		case 205:
			return Global_40001.f_4769;
		
		case 207:
			return 0;
		
		case 208:
			return Global_40001.f_46DB;
		
		case 209:
			return 0;
		
		case 210:
			return Global_40001.f_4764;
		
		case 211:
			return Global_40001.f_4740;
		
		case 214:
			return Global_40001.f_4991;
		
		case 215:
			return Global_40001.f_499B;
		
		case 216:
			return Global_40001.f_49A5;
		
		case 217:
			return Global_40001.f_49AE;
		
		case 218:
			return Global_40001.f_49B7;
		
		case 219:
			return Global_40001.f_49C7;
		
		case 241:
			return Global_40001.f_5D8D;
		
		case 242:
			return Global_40001.f_5D89;
		
		case 248:
			return Global_40001.f_5D8C;
		
		case 244:
			return Global_40001.f_5D8A;
		
		case 239:
			return Global_40001.f_5D8E;
		
		case 240:
			return Global_40001.f_5D8F;
		
		default:
	}
	return 0;
}

int func_707(int iParam0, bool bParam1)//Position - 0x1C5E4
{
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_306A) * Global_40001.f_306F));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3038) * Global_40001.f_303D));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3053) * Global_40001.f_3057));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3060) * Global_40001.f_3064));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3076) * Global_40001.f_307B));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_309B) * Global_40001.f_309E));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30C9) * Global_40001.f_30CC));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30BF) * Global_40001.f_30C2));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3092) * Global_40001.f_3095));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30A6) * Global_40001.f_30AB));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3083) * Global_40001.f_3086));
		
		case 170:
			return Global_40001.f_3A12;
		
		case 171:
			return Global_40001.f_3A4D;
		
		case 172:
			return Global_40001.f_3A5D;
		
		case 173:
			return Global_40001.f_3A24;
		
		case 166:
			return 0;
		
		case 167:
			return Global_40001.f_4242;
		
		case 168:
			return Global_40001.f_4241;
		
		case 179:
			return Global_40001.f_46EF;
		
		case 180:
			return Global_40001.f_4673;
		
		case 182:
			return 0;
		
		case 183:
			return Global_40001.f_467B;
		
		case 185:
			return Global_40001.f_4684;
		
		case 186:
			return 0;
		
		case 189:
			return Global_40001.f_4747;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_40001.f_4758;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_40001.f_46C0;
		
		case 198:
			return 0;
		
		case 199:
			return Global_40001.f_4777;
		
		case 200:
			return 0;
		
		case 201:
			return Global_40001.f_46FD;
		
		case 205:
			return Global_40001.f_476A;
		
		case 207:
			return 0;
		
		case 208:
			return Global_40001.f_46DC;
		
		case 209:
			return 0;
		
		case 210:
			return Global_40001.f_4765;
		
		case 211:
			return Global_40001.f_4741;
		
		case 214:
			return Global_40001.f_4992;
		
		case 215:
			return Global_40001.f_499C;
		
		case 216:
			return Global_40001.f_49A6;
		
		case 217:
			return Global_40001.f_49AF;
		
		case 218:
			return Global_40001.f_49B8;
		
		case 219:
			return Global_40001.f_49C8;
		
		case 178:
			if (func_957())
			{
				return Global_40001.f_4917;
			}
			else if (bParam1)
			{
				return Global_40001.f_4918;
			}
			break;
		
		case 188:
			if (func_957())
			{
				return Global_40001.f_496B;
			}
			else if (bParam1)
			{
				return Global_40001.f_496C;
			}
			break;
		
		case 225:
			if (func_957() && !func_563())
			{
				if (func_705(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_51B4;
				}
				else
				{
					return Global_40001.f_51B5;
				}
			}
			else if (func_563())
			{
				return Global_40001.f_51B6;
			}
			break;
		
		case 226:
			if (func_957() && !func_563())
			{
				if (func_705(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_51A0;
				}
				else
				{
					return Global_40001.f_51A1;
				}
			}
			else if (func_563())
			{
				return Global_40001.f_51A2;
			}
			break;
		
		case 227:
			if (func_957() && !func_563())
			{
				if (func_705(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_51AC;
				}
				else
				{
					return Global_40001.f_51AD;
				}
			}
			else if (func_563())
			{
				return Global_40001.f_51AE;
			}
			break;
		
		case 229:
			if (func_957() && !func_563())
			{
				if (func_705(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5638;
				}
				else
				{
					return Global_40001.f_5639;
				}
			}
			else if (func_563())
			{
				return Global_40001.f_563A;
			}
			break;
		
		case 230:
			if (func_957() && !func_563())
			{
				if (func_705(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5698;
				}
				else
				{
					return Global_40001.f_5699;
				}
			}
			else if (func_563())
			{
				return Global_40001.f_569A;
			}
			break;
		
		case 233:
			if (func_957() && !func_563())
			{
				if (func_705(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5872;
				}
				else
				{
					return Global_40001.f_5873;
				}
			}
			else if (func_563())
			{
				return Global_40001.f_5871;
			}
			break;
		
		case 241:
			return Global_40001.f_5D94;
		
		case 242:
			return Global_40001.f_5D90;
		
		case 244:
			return Global_40001.f_5D91;
		
		case 248:
			return Global_40001.f_5D93;
		
		case 239:
			return Global_40001.f_5D95;
		
		case 240:
			return Global_40001.f_5D96;
		
		case 237:
			if (func_957() && !func_563())
			{
				if (func_705(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5CF6;
				}
				else
				{
					return Global_40001.f_5CF7;
				}
			}
			else if (func_563())
			{
				return Global_40001.f_5CF8;
			}
			break;
		
		case 238:
			if (func_957() && !func_563())
			{
				if (func_705(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5D65;
				}
				else
				{
					return Global_40001.f_5D66;
				}
			}
			else if (func_563())
			{
				return Global_40001.f_5D67;
			}
			break;
		
		case 249:
			if (func_957() && !func_563())
			{
				if (func_705(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5D75;
				}
				else
				{
					return Global_40001.f_5D76;
				}
			}
			else if (func_563())
			{
				return Global_40001.f_5D77;
			}
			break;
	}
	return 0;
}

void func_708(int iParam0, var uParam1, var uParam2)//Position - 0x1CCD7
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_709(iParam0))
	{
		if (!func_957())
		{
			*uParam1 = 1f;
			*uParam2 = Global_40001.f_2FFF;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_292(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		if (func_417(iParam0))
		{
			*uParam1 = (Global_40001.f_465B / 100f);
			*uParam2 = (Global_40001.f_465B / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_40001.f_5D97;
			*uParam2 = Global_40001.f_5D97;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_40001.f_5D98;
			*uParam2 = Global_40001.f_5D98;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_40001.f_5D9A;
			*uParam2 = Global_40001.f_5D9A;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_40001.f_5D9B;
			*uParam2 = Global_40001.f_5D9B;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_40001.f_5D9C;
			*uParam2 = Global_40001.f_5D9C;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_40001.f_5D9D;
			*uParam2 = Global_40001.f_5D9D;
		}
		else
		{
			*uParam1 = Global_40001.f_2FFC;
			*uParam2 = Global_40001.f_2FFB;
		}
	}
	else if (func_417(iParam0))
	{
		*uParam1 = (Global_40001.f_465C / 100f);
		*uParam2 = (Global_40001.f_465C / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_40001.f_5D9E;
		*uParam2 = Global_40001.f_5D9E;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_40001.f_5D9F;
		*uParam2 = Global_40001.f_5D9F;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_40001.f_5DA1;
		*uParam2 = Global_40001.f_5DA1;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_40001.f_5DA2;
		*uParam2 = Global_40001.f_5DA2;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_40001.f_5DA3;
		*uParam2 = Global_40001.f_5DA3;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_40001.f_5DA4;
		*uParam2 = Global_40001.f_5DA4;
	}
	else
	{
		*uParam1 = Global_40001.f_2FFE;
		*uParam2 = Global_40001.f_2FFD;
	}
	iVar0 = func_355();
	if (iVar0 != func_22())
	{
		if (func_326(CAM::_0xDC9DA9E8789F5246(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_709(int iParam0)//Position - 0x1CF3A
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_710(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x1CF7E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_284(CAM::_0xDC9DA9E8789F5246());
		Global_19700D.f_4 = func_810();
		Global_19700D.f_5 = func_809();
		if (func_251(CAM::_0xDC9DA9E8789F5246()) || func_252(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_19700D.f_6 = 1;
		}
		else
		{
			Global_19700D.f_6 = 0;
		}
		Global_19700D.f_1 = func_805(bParam9);
		Global_19700D.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_19700D.f_9 = func_804(bParam0);
		Global_19700D.f_A = iParam1;
		Global_19700D.f_11 = Global_19700D.f_2;
		Global_19700D.f_12 = Global_19700D.f_2;
		Global_19700D.f_13 = func_803();
		Global_19700D.f_15 = (Global_19700D.f_8 - Global_19700D.f_7);
		if (func_292(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			Global_19700D.f_17 = func_804(func_352(1));
		}
		Global_19700D.f_18 = func_802(CAM::_0xDC9DA9E8789F5246());
		Global_19700D.f_1C = func_801(CAM::_0xDC9DA9E8789F5246());
		if (Global_19700D.f_18 > 2)
		{
			Global_19700D.f_18 = 2;
		}
		func_799(iVar0);
	}
	else
	{
		iVar0 = func_226(CAM::_0xDC9DA9E8789F5246());
	}
	if (func_417(iVar0))
	{
		Global_196F08.f_2 = func_810();
		Global_196F08.f_3 = func_809();
		Global_196F08.f_32 = iParam4;
		Global_196F08.f_33 = iParam5;
		Global_196F08.f_A = NETWORK::_GET_POSIX_TIME();
		Global_196F08.f_14 = (Global_196F08.f_A - Global_196F08.f_9);
		Global_196F08.f_C = iParam1;
		Global_196F08.f_13 = func_793(iVar0, bParam0, func_798(bParam3));
		if (bParam0)
		{
			Global_196F08.f_B = 1;
		}
		else
		{
			Global_196F08.f_B = 0;
		}
		if ((func_246(CAM::_0xDC9DA9E8789F5246()) || func_397(CAM::_0xDC9DA9E8789F5246())) || func_298(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196F08.f_8 = 1;
		}
		else
		{
			Global_196F08.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_196F08.f_2B = 0;
			Global_196F08.f_2D = func_792(func_514(), iParam2);
			Global_196F08.f_2F = iParam7;
			Global_196F08.f_2E = iParam6;
			Global_196F08.f_34 = func_791(func_514(), iParam2);
		}
		func_789(iVar0);
	}
	else if (func_422(iVar0))
	{
		Global_196F3E.f_2 = func_810();
		Global_196F3E.f_3 = func_809();
		Global_196F3E.f_A = NETWORK::_GET_POSIX_TIME();
		Global_196F3E.f_13 = (Global_196F3E.f_A - Global_196F3E.f_9);
		Global_196F3E.f_C = iParam1;
		if (bParam0)
		{
			Global_196F3E.f_B = 1;
		}
		else
		{
			Global_196F3E.f_B = 0;
		}
		if ((func_246(CAM::_0xDC9DA9E8789F5246()) || func_397(CAM::_0xDC9DA9E8789F5246())) || func_298(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196F3E.f_8 = 1;
		}
		else
		{
			Global_196F3E.f_8 = 0;
		}
		func_787(iVar0);
	}
	else if (func_461(iVar0))
	{
		Global_196F7D.f_2 = func_810();
		Global_196F7D.f_3 = func_809();
		Global_196F7D.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_196F7D.f_12 = (Global_196F7D.f_9 - Global_196F7D.f_8);
		Global_196F7D.f_B = iParam1;
		Global_196F7D.f_7 = func_803();
		Global_196F7D.f_2A = func_785(func_148(), 5);
		iVar1 = CAM::_0xDC9DA9E8789F5246();
		iVar2 = func_547(iVar1);
		Global_196F7D.f_1C = iVar2;
		Global_196F7D.f_1D = func_804((func_784(iVar1) || func_783(iVar1)));
		Global_196F7D.f_1E = func_804(func_782(iVar1));
		Global_196F7D.f_20 = func_804(func_781(iVar1));
		Global_196F7D.f_21 = func_804(func_780(iVar1));
		Global_196F7D.f_22 = func_804(func_779(iVar1));
		Global_196F7D.f_23 = func_804(func_778(0, iVar1) == 1);
		Global_196F7D.f_24 = func_804(func_777(iVar1));
		Global_196F7D.f_25 = func_804(func_776(iVar1));
		Global_196F7D.f_26 = func_804(func_775(iVar1));
		Global_196F7D.f_27 = func_804(func_678(iVar1, iVar2, 0));
		Global_196F7D.f_28 = func_804(func_678(iVar1, iVar2, 2));
		Global_196F7D.f_29 = func_804(func_678(iVar1, iVar2, 1));
		if (func_774(iVar1))
		{
			Global_196F7D.f_1F = 2;
		}
		else if (func_773(iVar1))
		{
			Global_196F7D.f_1F = 1;
		}
		if (bParam0)
		{
			Global_196F7D.f_A = 1;
		}
		else
		{
			Global_196F7D.f_A = 0;
		}
		if ((func_246(CAM::_0xDC9DA9E8789F5246()) || func_397(CAM::_0xDC9DA9E8789F5246())) || func_298(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196F7D.f_6 = 1;
		}
		else
		{
			Global_196F7D.f_6 = 0;
		}
		Global_196F7D.f_15 = 4294967294;
		Global_196F7D.f_16 = 4294967294;
		func_771(iVar0);
	}
	else if (func_459(iVar0))
	{
		Global_196FA9.f_2 = func_810();
		Global_196FA9.f_3 = func_809();
		if ((func_246(CAM::_0xDC9DA9E8789F5246()) || func_397(CAM::_0xDC9DA9E8789F5246())) || func_298(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196FA9.f_6 = 1;
		}
		else
		{
			Global_196FA9.f_6 = 0;
		}
		Global_196FA9.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_196FA9.f_A = func_804(bParam0);
		Global_196FA9.f_B = iParam1;
		Global_196FA9.f_11 = func_770(func_355());
		Global_196FA9.f_12 = (Global_196FA9.f_9 - Global_196FA9.f_8);
		Global_196FA9.f_14 = iParam8;
		Global_196FA9.f_15 = 4294967294;
		Global_196FA9.f_16 = 4294967294;
		Global_196FA9.f_1B = func_769();
		Global_196FA9.f_1D = func_536(6107, 4294967295, 0);
		Global_196FA9.f_1E = func_536(6103, 4294967295, 0);
		Global_196FA9.f_1F = func_536(6104, 4294967295, 0);
		Global_196FA9.f_20 = func_536(6106, 4294967295, 0);
		Global_196FA9.f_21 = func_536(6105, 4294967295, 0);
		Global_196FA9.f_22 = func_536(6108, 4294967295, 0);
		Global_196FA9.f_24 = func_804(func_352(1));
		Global_196FA9.f_25 = func_767();
		func_752();
		func_750(iVar0);
	}
	else if (func_457(iVar0))
	{
		Global_196FDF.f_2 = func_810();
		Global_196FDF.f_3 = func_809();
		if ((func_246(CAM::_0xDC9DA9E8789F5246()) || func_397(CAM::_0xDC9DA9E8789F5246())) || func_298(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196FDF.f_6 = 1;
		}
		else
		{
			Global_196FDF.f_6 = 0;
		}
		Global_196FDF.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_196FDF.f_A = func_804(bParam0);
		Global_196FDF.f_B = iParam1;
		Global_196FDF.f_12 = (Global_196FDF.f_9 - Global_196FDF.f_8);
		Global_196FDF.f_14 = iParam8;
		Global_196FDF.f_17 = Global_C0073;
		Global_196FDF.f_24 = Global_C0073.f_1;
		Global_196FDF.f_18 = func_536(6157, 4294967295, 0);
		Global_196FDF.f_19 = func_536(6162, 4294967295, 0);
		Global_196FDF.f_1A = func_536(6163, 4294967295, 0);
		Global_196FDF.f_1B = func_804((((func_749() || func_748()) || func_747()) || func_746(CAM::_0xDC9DA9E8789F5246())));
		Global_196FDF.f_1C = func_536(6164, 4294967295, 0);
		Global_196FDF.f_1D = func_804(func_745());
		Global_196FDF.f_23 = 4294967295;
		Global_196FDF.f_26 = 4294967295;
		Global_196FDF.f_27 = Global_196FDF.f_4;
		Global_196FDF.f_28 = Global_196FDF.f_5;
		Global_196FDF.f_29 = func_810();
		Global_196FDF.f_2A = func_804(func_352(1));
		Global_196FDF.f_2C = Global_196FDF.f_12;
		func_743(iVar0);
	}
	else if (func_524(iVar0))
	{
		if (Global_197065.f_2 == 4294967295)
		{
			Global_197065.f_2 = func_810();
		}
		if (Global_197065.f_3 == 4294967295)
		{
			Global_197065.f_3 = func_809();
		}
		if ((func_246(CAM::_0xDC9DA9E8789F5246()) || func_397(CAM::_0xDC9DA9E8789F5246())) || func_298(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_197065.f_6 = 1;
		}
		else
		{
			Global_197065.f_6 = 0;
		}
		Global_197065.f_1 = func_805(0);
		Global_197065.f_7 = func_803();
		Global_197065.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_197065.f_A = func_804(bParam0);
		Global_197065.f_B = iParam1;
		if (func_514() != 4294967295)
		{
			Global_197065.f_11 = func_742(func_514());
		}
		Global_197065.f_12 = (Global_197065.f_9 - Global_197065.f_8);
		Global_197065.f_13 = Global_26862F.f_185C;
		Global_197065.f_1C = func_801(CAM::_0xDC9DA9E8789F5246());
		Global_197065.f_1D = func_804(func_741(CAM::_0xDC9DA9E8789F5246()));
		Global_197065.f_1E = func_804(func_740(CAM::_0xDC9DA9E8789F5246()));
		Global_197065.f_1F = func_739(CAM::_0xDC9DA9E8789F5246());
		if (func_292(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			Global_197065.f_21 = func_804(func_352(1));
		}
		if (Global_197065.f_22 > 2)
		{
			Global_197065.f_22 = 2;
		}
		func_737(iVar0);
	}
	else if (func_528(iVar0))
	{
		Global_197030.f_2 = func_810();
		Global_197030.f_3 = func_809();
		if ((func_246(CAM::_0xDC9DA9E8789F5246()) || func_397(CAM::_0xDC9DA9E8789F5246())) || func_298(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_197030.f_6 = 1;
		}
		else
		{
			Global_197030.f_6 = 0;
		}
		Global_197030.f_1 = func_805(0);
		Global_197030.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_197030.f_A = func_804(bParam0);
		Global_197030.f_B = iParam1;
		Global_197030.f_12 = (Global_197030.f_9 - Global_197030.f_8);
		Global_197030.f_1C = func_801(CAM::_0xDC9DA9E8789F5246());
		if (Global_197030.f_1C)
		{
			Global_197030.f_1D = func_736(CAM::_0xDC9DA9E8789F5246());
		}
		else
		{
			Global_197030.f_1D = 0;
		}
		Global_197030.f_1E = func_720(CAM::_0xDC9DA9E8789F5246(), 4, 4294967295);
		Global_197030.f_1F = func_739(CAM::_0xDC9DA9E8789F5246());
		Global_197030.f_20 = func_804(func_719(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_21 = func_804(func_718(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_22 = func_804(func_717(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_23 = func_804(func_716(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_24 = func_715(CAM::_0xDC9DA9E8789F5246());
		Global_197030.f_25 = func_714(CAM::_0xDC9DA9E8789F5246());
		Global_197030.f_27 = func_713(CAM::_0xDC9DA9E8789F5246());
		if (func_292(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			Global_197030.f_29 = func_804(func_352(1));
		}
		if (Global_197030.f_2A > 2)
		{
			Global_197030.f_2A = 2;
		}
		func_711(iVar0);
	}
	else
	{
		Global_196EF6.f_6 = NETWORK::_GET_POSIX_TIME();
		if (bParam0)
		{
			Global_196EF6.f_7 = 1;
		}
		else
		{
			Global_196EF6.f_7 = 0;
		}
		Global_196EF6.f_8 = iParam1;
		if (Global_196EF6.f_4 == 0)
		{
			if ((func_246(CAM::_0xDC9DA9E8789F5246()) || func_397(CAM::_0xDC9DA9E8789F5246())) || func_298(CAM::_0xDC9DA9E8789F5246()))
			{
				Global_196EF6.f_4 = 1;
			}
		}
	}
}

void func_711(int iParam0)//Position - 0x1D9D6
{
	unk_0x2D7A9B577E72385E(&Global_197030);
	func_712();
}

void func_712()//Position - 0x1D9EA
{
	struct<53> Var0;
	
	Var0 = 4294967295;
	Var0.f_1 = 4294967295;
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_28 = 4294967295;
	Var0.f_29 = 4294967295;
	Var0.f_2A = 4294967295;
	Var0.f_2B = 4294967295;
	Var0.f_2C = 4294967295;
	Var0.f_2D = 4294967295;
	Var0.f_2E = 4294967295;
	Var0.f_2F = 4294967295;
	Var0.f_30 = 4294967295;
	Var0.f_31 = 4294967295;
	Var0.f_32 = 4294967295;
	Var0.f_33 = 4294967295;
	Var0.f_34 = 4294967295;
	Global_197030 = { Var0 };
}

int func_713(int iParam0)//Position - 0x1DB13
{
	if (iParam0 != func_22())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_145, 12);
	}
	return 0;
}

int func_714(int iParam0)//Position - 0x1DB3D
{
	if (iParam0 != func_22())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_145, 10);
	}
	return 0;
}

int func_715(int iParam0)//Position - 0x1DB67
{
	if (iParam0 != func_22())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_145, 11);
	}
	return 0;
}

bool func_716(int iParam0)//Position - 0x1DB91
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 4);
}

bool func_717(int iParam0)//Position - 0x1DBBC
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 3);
}

bool func_718(int iParam0)//Position - 0x1DBE7
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 2);
}

bool func_719(int iParam0)//Position - 0x1DC12
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 1);
}

int func_720(int iParam0, int iParam1, int iParam2)//Position - 0x1DC3D
{
	if (iParam0 == func_22() || !func_735(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_730(iParam0, iParam2);
		
		case 1:
			return func_728(iParam0, iParam2);
		
		case 3:
			return func_727(iParam0);
		
		case 2:
			return func_722(iParam0, iParam2);
		
		case 4:
			return func_721(iParam0);
		
		default:
	}
	return 0;
}

bool func_721(int iParam0)//Position - 0x1DCB9
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 6);
}

int func_722(int iParam0, int iParam1)//Position - 0x1DCE4
{
	switch (iParam1)
	{
		case 10:
			return func_726(iParam0);
		
		case 11:
			return func_725(iParam0);
		
		case 12:
			return func_724(iParam0);
		
		case 13:
			return func_723(iParam0);
		
		default:
	}
	return 0;
}

bool func_723(int iParam0)//Position - 0x1DD30
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 15);
}

bool func_724(int iParam0)//Position - 0x1DD5C
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 14);
}

bool func_725(int iParam0)//Position - 0x1DD88
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 13);
}

bool func_726(int iParam0)//Position - 0x1DDB4
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 12);
}

bool func_727(int iParam0)//Position - 0x1DDE0
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 5);
}

int func_728(int iParam0, int iParam1)//Position - 0x1DE0B
{
	switch (iParam1)
	{
		case 5:
			return func_729(iParam0);
		
		case 6:
			return func_719(iParam0);
		
		case 7:
			return func_718(iParam0);
		
		case 8:
			return func_717(iParam0);
		
		case 9:
			return func_716(iParam0);
		
		default:
	}
	return 0;
}

bool func_729(int iParam0)//Position - 0x1DE66
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 0);
}

int func_730(int iParam0, int iParam1)//Position - 0x1DE91
{
	switch (iParam1)
	{
		case 0:
			return func_734(iParam0);
		
		case 1:
			return func_733(iParam0);
		
		case 2:
			return func_732(iParam0);
		
		case 3:
			return func_731(iParam0);
		
		case 4:
			return func_739(iParam0);
		
		default:
	}
	return 0;
}

bool func_731(int iParam0)//Position - 0x1DEEC
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 10);
}

bool func_732(int iParam0)//Position - 0x1DF18
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 9);
}

bool func_733(int iParam0)//Position - 0x1DF44
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 8);
}

bool func_734(int iParam0)//Position - 0x1DF70
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 7);
}

bool func_735(int iParam0)//Position - 0x1DF9B
{
	return (iParam0 != 4294967295 && iParam0 != 6);
}

int func_736(int iParam0)//Position - 0x1DFB0
{
	int iVar0;
	
	if (iParam0 == func_22())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_720(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_720(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_720(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_720(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_737(int iParam0)//Position - 0x1E00F
{
	unk_0x6481F441CE5CA40E(&Global_197065);
	func_738();
}

void func_738()//Position - 0x1E023
{
	struct<39> Var0;
	
	Var0 = 4294967295;
	Var0.f_1 = 4294967295;
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_24 = 4294967295;
	Var0.f_25 = 4294967295;
	Var0.f_26 = 4294967295;
	Global_197065 = { Var0 };
}

bool func_739(int iParam0)//Position - 0x1E116
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 31);
}

bool func_740(int iParam0)//Position - 0x1E133
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_139.f_1, 0);
}

bool func_741(int iParam0)//Position - 0x1E15E
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_139.f_1, 19);
}

var func_742(int iParam0)//Position - 0x1E18A
{
	return Global_1841F3[iParam0 /*790*/].f_D3.f_6;
}

void func_743(int iParam0)//Position - 0x1E19F
{
	unk_0x0360568A8CE21561(&Global_196FDF);
	func_744();
}

void func_744()//Position - 0x1E1B3
{
	struct<46> Var0;
	
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1C = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_1F = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_24 = 4294967295;
	Var0.f_25 = 4294967295;
	Var0.f_26 = 4294967295;
	Var0.f_27 = 4294967295;
	Var0.f_28 = 4294967295;
	Var0.f_29 = 4294967295;
	Var0.f_2A = 4294967295;
	Var0.f_2B = 4294967295;
	Var0.f_2C = 4294967295;
	Var0.f_2D = 4294967295;
	Global_196FDF = { Var0 };
	Global_196FDF.f_10 = 0;
}

bool func_745()//Position - 0x1E2C1
{
	return func_536(6156, 4294967295, 0) != 0;
}

int func_746(int iParam0)//Position - 0x1E2D4
{
	if (iParam0 != func_22())
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_106 != 0;
	}
	return 0;
}

bool func_747()//Position - 0x1E2FA
{
	return func_536(6164, 4294967295, 0) == 3;
}

bool func_748()//Position - 0x1E30D
{
	return func_536(6164, 4294967295, 0) == 2;
}

bool func_749()//Position - 0x1E320
{
	return func_536(6164, 4294967295, 0) == 1;
}

void func_750(int iParam0)//Position - 0x1E333
{
	unk_0x04824802BBD52BB4(&Global_196FA9);
	func_751();
}

void func_751()//Position - 0x1E347
{
	struct<54> Var0;
	
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1C = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_1F = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_24 = 4294967295;
	Var0.f_25 = 4294967295;
	Var0.f_26 = 4294967295;
	Var0.f_27 = 4294967295;
	Var0.f_28 = 4294967295;
	Var0.f_29 = 4294967295;
	Var0.f_2A = 4294967295;
	Var0.f_2B = 4294967295;
	Var0.f_2C = 4294967295;
	Var0.f_2D = 4294967295;
	Var0.f_2E = 4294967295;
	Var0.f_2F = 4294967295;
	Var0.f_30 = 4294967295;
	Var0.f_31 = 4294967295;
	Var0.f_32 = 4294967295;
	Var0.f_33 = 4294967295;
	Var0.f_34 = 4294967295;
	Var0.f_35 = 4294967295;
	Global_196FA9 = { Var0 };
	Global_196FA9.f_17 = 0;
	Global_196FA9.f_18 = 0;
	Global_196FA9.f_10 = 0;
}

void func_752()//Position - 0x1E493
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = 4294967295;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_763(12));
		func_762(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_142958[iVar1 /*141*/].f_42 != 0 && func_754(Global_142958[iVar1 /*141*/].f_42, 1))
			{
				if (Global_26862F.f_375 != iVar1)
				{
					if (func_753(Global_142958[iVar1 /*141*/].f_42))
					{
						if (Global_142958[iVar1 /*141*/].f_42 != 0)
						{
							iVar3 = Global_142958[iVar1 /*141*/].f_42;
						}
						switch (iVar0)
						{
							case 0:
								Global_196FA9.f_26 = iVar3;
								break;
							
							case 1:
								Global_196FA9.f_27 = iVar3;
								break;
							
							case 2:
								Global_196FA9.f_28 = iVar3;
								break;
							
							case 3:
								Global_196FA9.f_29 = iVar3;
								break;
							
							case 4:
								Global_196FA9.f_2A = iVar3;
								break;
							
							case 5:
								Global_196FA9.f_2B = iVar3;
								break;
							
							case 6:
								Global_196FA9.f_2C = iVar3;
								break;
							
							case 7:
								Global_196FA9.f_2D = iVar3;
								break;
							
							case 8:
								Global_196FA9.f_2E = iVar3;
								break;
							
							case 9:
								Global_196FA9.f_2F = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_753(int iParam0)//Position - 0x1E5D9
{
	switch (iParam0)
	{
		case joaat("BUZZARD"):
		case joaat("SAVAGE"):
		case joaat("VALKYRIE"):
		case joaat("HYDRA"):
		case joaat("CARGOBOB"):
		case joaat("CARGOBOB2"):
		case joaat("HAVOK"):
		case joaat("HUNTER"):
		case joaat("VOLATUS"):
		case joaat("SUPERVOLITO"):
		case joaat("SUPERVOLITO2"):
		case joaat("SWIFT"):
		case joaat("SWIFT2"):
		case joaat("FROGGER"):
		case joaat("MAVERICK"):
		case joaat("ANNIHILATOR"):
		case joaat("MOGUL"):
		case joaat("ROGUE"):
		case joaat("STARLING"):
		case joaat("SEABREEZE"):
		case joaat("MICROLIGHT"):
		case joaat("TULA"):
		case joaat("LAZER"):
		case joaat("PYRO"):
		case joaat("MOLOTOK"):
		case joaat("NOKOTA"):
		case joaat("HOWARD"):
		case joaat("BOMBUSHKA"):
		case joaat("ALPHAZ1"):
		case joaat("NIMBUS"):
		case joaat("LUXOR2"):
		case joaat("VELUM2"):
		case joaat("DODO"):
		case joaat("MILJET"):
		case joaat("BESRA"):
		case joaat("VESTRA"):
		case joaat("DUSTER"):
		case joaat("SHAMAL"):
		case joaat("CUBAN800"):
		case joaat("LUXOR"):
		case joaat("STUNT"):
		case joaat("MAMMATUS"):
		case joaat("TITAN"):
		case joaat("VELUM"):
		case joaat("AKULA"):
		case joaat("VOLATOL"):
		case joaat("SEASPARROW"):
			return 1;
		
		default:
	}
	if (iParam0 == joaat("STRIKEFORCE"))
	{
		return 1;
	}
	return 0;
}

int func_754(int iParam0, bool bParam1)//Position - 0x1E715
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("DOMINATOR2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("BUFFALO3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("GAUNTLET2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("BLIMP2")) || (iParam0 == joaat("STALION2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_761())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILE::GET_NUM_DLC_VEHICLES())
		{
			if (FILE::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILE::_IS_DLC_DATA_EMPTY(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("BLIMP"))
	{
		if ((((!func_760() && !func_759()) && !func_758()) && !func_757()) && !func_761())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("HOTKNIFE") || iParam0 == joaat("CARBONRS")) || iParam0 == joaat("KHAMELION"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_758())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_756(iParam0))
		{
			return 0;
		}
	}
	if (!func_755(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_755(int iParam0)//Position - 0x1E895
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_564())
	{
		return 1;
	}
	unk_0x0B2954993B98F51D(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("DUNE4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("VOLTIC2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("RUINER2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("PHANTOM2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("TECHNICAL2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("BOXVILLE5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("WASTELANDER"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("BLAZER5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x3B6DCE62F381F366(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_756(int iParam0)//Position - 0x1E961
{
	int iVar0;
	int iVar1;
	
	if (Global_263409)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::_GET_POSIX_TIME();
	if (iParam0 == joaat("BTYPE3"))
	{
		if ((!Global_40001.f_1958 && !Global_40001.f_31FD) && iVar1 < Global_40001.f_31FE)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("FACTION3"))
	{
		if (!Global_40001.f_370F && iVar1 < Global_40001.f_371B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIRGO3") || iParam0 == joaat("VIRGO2"))
	{
		if (!Global_40001.f_370B && iVar1 < Global_40001.f_3717)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SABREGT2"))
	{
		if (!Global_40001.f_370C && iVar1 < Global_40001.f_3718)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORNADO5"))
	{
		if (!Global_40001.f_370D && iVar1 < Global_40001.f_3719)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MINIVAN2"))
	{
		if (!Global_40001.f_370E && iVar1 < Global_40001.f_371A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SLAMVAN3"))
	{
		if (!Global_40001.f_3710 && iVar1 < Global_40001.f_371C)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("PROTOTIPO"))
	{
		if (!Global_40001.f_3711 && iVar1 < Global_40001.f_3714)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEVEN70"))
	{
		if (!Global_40001.f_3712 && iVar1 < Global_40001.f_3715)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PFISTER811"))
	{
		if (!Global_40001.f_3713 && iVar1 < Global_40001.f_3716)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("BF400"))
	{
		if (!Global_40001.f_4157 && iVar1 < Global_40001.f_4133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BRIOSO"))
	{
		if (!Global_40001.f_4152 && iVar1 < Global_40001.f_412E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CLIFFHANGER"))
	{
		if (!Global_40001.f_4156 && iVar1 < Global_40001.f_4132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CONTENDER"))
	{
		if (!Global_40001.f_4155 && iVar1 < Global_40001.f_4131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LE7B"))
	{
		if (!Global_40001.f_414F && iVar1 < Global_40001.f_412B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OMNIS"))
	{
		if (!Global_40001.f_4150 && iVar1 < Global_40001.f_412C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPHYTRUCK"))
	{
		if (!Global_40001.f_4153 && iVar1 < Global_40001.f_412F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPHYTRUCK2"))
	{
		if (!Global_40001.f_4154 && iVar1 < Global_40001.f_4130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPOS"))
	{
		if (!Global_40001.f_4151 && iVar1 < Global_40001.f_412D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GARGOYLE"))
	{
		if (!Global_40001.f_4159 && iVar1 < Global_40001.f_4135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RALLYTRUCK"))
	{
		if (!Global_40001.f_415A && iVar1 < Global_40001.f_4136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TAMPA2"))
	{
		if (!Global_40001.f_414E && iVar1 < Global_40001.f_412A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TYRUS"))
	{
		if (!Global_40001.f_414D && iVar1 < Global_40001.f_4129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SHEAVA"))
	{
		if (!Global_40001.f_414C && iVar1 < Global_40001.f_4128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LYNX"))
	{
		if (!Global_40001.f_4158 && iVar1 < Global_40001.f_4134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STALION2"))
	{
		if (!Global_40001.f_415B && iVar1 < Global_40001.f_4137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GAUNTLET2"))
	{
		if (!Global_40001.f_415C && iVar1 < Global_40001.f_4138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DOMINATOR2"))
	{
		if (!Global_40001.f_415D && iVar1 < Global_40001.f_4139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BUFFALO3"))
	{
		if (!Global_40001.f_415E && iVar1 < Global_40001.f_413A)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("DEFILER"))
	{
		if (!Global_40001.f_41EF && iVar1 < Global_40001.f_4205)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NIGHTBLADE"))
	{
		if (!Global_40001.f_41F0 && iVar1 < Global_40001.f_4206)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ZOMBIEA"))
	{
		if (!Global_40001.f_41F1 && iVar1 < Global_40001.f_4207)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ESSKEY"))
	{
		if (!Global_40001.f_41F2 && iVar1 < Global_40001.f_4208)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AVARUS"))
	{
		if (!Global_40001.f_41F3 && iVar1 < Global_40001.f_4209)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ZOMBIEB"))
	{
		if (!Global_40001.f_41F4 && iVar1 < Global_40001.f_420A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HAKUCHOU2"))
	{
		if (!Global_40001.f_41F6 && iVar1 < Global_40001.f_420B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VORTEX"))
	{
		if (!Global_40001.f_41F7 && iVar1 < Global_40001.f_420C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SHOTARO"))
	{
		if (!Global_40001.f_41F8 && iVar1 < Global_40001.f_420D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHIMERA"))
	{
		if (!Global_40001.f_41F9 && iVar1 < Global_40001.f_420E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAPTOR"))
	{
		if (!Global_40001.f_41FA && iVar1 < Global_40001.f_420F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DAEMON2"))
	{
		if (!Global_40001.f_41FB && iVar1 < Global_40001.f_4210)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER4"))
	{
		if (!Global_40001.f_41FC && iVar1 < Global_40001.f_4211)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORNADO6"))
	{
		if (!Global_40001.f_4202 && iVar1 < Global_40001.f_4218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("YOUGA2"))
	{
		if (!Global_40001.f_41FF && iVar1 < Global_40001.f_4214)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WOLFSBANE"))
	{
		if (!Global_40001.f_4200 && iVar1 < Global_40001.f_4215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGGIO3"))
	{
		if (!Global_40001.f_4201 && iVar1 < Global_40001.f_4216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGGIO"))
	{
		if (!Global_40001.f_41F5 && iVar1 < Global_40001.f_4217)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BAGGER"))
	{
		if (!Global_40001.f_4203 && iVar1 < Global_40001.f_4219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SANCTUS"))
	{
		if (!Global_40001.f_41FD && iVar1 < Global_40001.f_4212)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MANCHEZ"))
	{
		if (!Global_40001.f_41FE && iVar1 < Global_40001.f_4213)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RATBIKE"))
	{
		if (!Global_40001.f_4204 && iVar1 < Global_40001.f_421A)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("VOLTIC2"))
	{
		if (!Global_40001.f_4860 && iVar1 < Global_40001.f_48C1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUINER2"))
	{
		if (!Global_40001.f_4861 && iVar1 < Global_40001.f_48C2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DUNE4"))
	{
		if (!Global_40001.f_4862 && iVar1 < Global_40001.f_48C3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DUNE5"))
	{
		if (!Global_40001.f_4863 && iVar1 < Global_40001.f_48C4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PHANTOM2"))
	{
		if (!Global_40001.f_4864 && iVar1 < Global_40001.f_48C5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TECHNICAL2"))
	{
		if (!Global_40001.f_4865 && iVar1 < Global_40001.f_48C6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOXVILLE5"))
	{
		if (!Global_40001.f_4866 && iVar1 < Global_40001.f_48C7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WASTELANDER"))
	{
		if (!Global_40001.f_4867 && iVar1 < Global_40001.f_48C8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER5"))
	{
		if (!Global_40001.f_4868 && iVar1 < Global_40001.f_48C9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET2"))
	{
		if (!Global_40001.f_4869 && iVar1 < Global_40001.f_48CA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET3"))
	{
		if (!Global_40001.f_486A && iVar1 < Global_40001.f_48CB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DIABLOUS"))
	{
		if (!Global_40001.f_486B && iVar1 < Global_40001.f_48CC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DIABLOUS2"))
	{
		if (!Global_40001.f_486C && iVar1 < Global_40001.f_48CD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELEGY"))
	{
		if (!Global_40001.f_486D && iVar1 < Global_40001.f_48CE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELEGY2"))
	{
		if (!Global_40001.f_486E && iVar1 < Global_40001.f_48CF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FCR"))
	{
		if (!Global_40001.f_486F && iVar1 < Global_40001.f_48D0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FCR2"))
	{
		if (!Global_40001.f_4870 && iVar1 < Global_40001.f_48D1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTB"))
	{
		if (!Global_40001.f_4871 && iVar1 < Global_40001.f_48D2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTB2"))
	{
		if (!Global_40001.f_4872 && iVar1 < Global_40001.f_48D3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NERO"))
	{
		if (!Global_40001.f_4873 && iVar1 < Global_40001.f_48D4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NERO2"))
	{
		if (!Global_40001.f_4874 && iVar1 < Global_40001.f_48D5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PENETRATOR"))
	{
		if (!Global_40001.f_4875 && iVar1 < Global_40001.f_48D6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SPECTER"))
	{
		if (!Global_40001.f_4876 && iVar1 < Global_40001.f_48D7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SPECTER2"))
	{
		if (!Global_40001.f_4877 && iVar1 < Global_40001.f_48D8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TEMPESTA"))
	{
		if (!Global_40001.f_4878 && iVar1 < Global_40001.f_48D9)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("GP1"))
	{
		if (!Global_40001.f_4C98 && iVar1 < Global_40001.f_4C94)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("INFERNUS2"))
	{
		if (!Global_40001.f_4C99 && iVar1 < Global_40001.f_4C95)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUSTON"))
	{
		if (!Global_40001.f_4C9A && iVar1 < Global_40001.f_4C96)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TURISMO2"))
	{
		if (!Global_40001.f_4C9B && iVar1 < Global_40001.f_4C97)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("XA21"))
	{
		if (!Global_40001.f_5007 && iVar1 < Global_40001.f_500F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHEETAH2"))
	{
		if (!Global_40001.f_5008 && iVar1 < Global_40001.f_5010)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORERO"))
	{
		if (!Global_40001.f_5009 && iVar1 < Global_40001.f_5011)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VAGNER"))
	{
		if (!Global_40001.f_500A && iVar1 < Global_40001.f_5012)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ARDENT"))
	{
		if (!Global_40001.f_500B && iVar1 < Global_40001.f_5013)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NIGHTSHARK"))
	{
		if (!Global_40001.f_500C && iVar1 < Global_40001.f_5014)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("MICROLIGHT"))
	{
		if (!Global_40001.f_5310 && iVar1 < Global_40001.f_5324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MOGUL"))
	{
		if (!Global_40001.f_531C && iVar1 < Global_40001.f_5330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ROGUE"))
	{
		if (!Global_40001.f_5313 && iVar1 < Global_40001.f_5327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STARLING"))
	{
		if (!Global_40001.f_531D && iVar1 < Global_40001.f_5331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEABREEZE"))
	{
		if (!Global_40001.f_5311 && iVar1 < Global_40001.f_5325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TULA"))
	{
		if (!Global_40001.f_5321 && iVar1 < Global_40001.f_5335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PYRO"))
	{
		if (!Global_40001.f_531F && iVar1 < Global_40001.f_5333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MOLOTOK"))
	{
		if (!Global_40001.f_5320 && iVar1 < Global_40001.f_5334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NOKOTA"))
	{
		if (!Global_40001.f_531B && iVar1 < Global_40001.f_532F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOMBUSHKA"))
	{
		if (!Global_40001.f_5322 && iVar1 < Global_40001.f_5336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HUNTER"))
	{
		if (!Global_40001.f_531E && iVar1 < Global_40001.f_5332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HAVOK"))
	{
		if (!Global_40001.f_531A && iVar1 < Global_40001.f_532E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HOWARD"))
	{
		if (!Global_40001.f_5312 && iVar1 < Global_40001.f_5326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ALPHAZ1"))
	{
		if (!Global_40001.f_5314 && iVar1 < Global_40001.f_5328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CYCLONE"))
	{
		if (!Global_40001.f_5315 && iVar1 < Global_40001.f_5329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VISIONE"))
	{
		if (!Global_40001.f_5316 && iVar1 < Global_40001.f_532A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIGILANTE"))
	{
		if (!Global_40001.f_5317 && iVar1 < Global_40001.f_532B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RETINUE"))
	{
		if (!Global_40001.f_5318 && iVar1 < Global_40001.f_532C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAPIDGT3"))
	{
		if (!Global_40001.f_5319 && iVar1 < Global_40001.f_532D)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("DELUXO"))
	{
		if (!Global_40001.f_56D1 && iVar1 < Global_40001.f_56ED)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STROMBERG"))
	{
		if (!Global_40001.f_56D2 && iVar1 < Global_40001.f_56EE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RIOT2"))
	{
		if (!Global_40001.f_56D3 && iVar1 < Global_40001.f_56EF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHERNOBOG"))
	{
		if (!Global_40001.f_56D4 && iVar1 < Global_40001.f_56F0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KHANJALI"))
	{
		if (!Global_40001.f_56D5 && iVar1 < Global_40001.f_56F1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AKULA"))
	{
		if (!Global_40001.f_56D6 && iVar1 < Global_40001.f_56F2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("THRUSTER"))
	{
		if (!Global_40001.f_56D7 && iVar1 < Global_40001.f_56F3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BARRAGE"))
	{
		if (!Global_40001.f_56D8 && iVar1 < Global_40001.f_56F4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VOLATOL"))
	{
		if (!Global_40001.f_56D9 && iVar1 < Global_40001.f_56F5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET4"))
	{
		if (!Global_40001.f_56DA && iVar1 < Global_40001.f_56F6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2445973230)
	{
		if (!Global_40001.f_56DB && iVar1 < Global_40001.f_56F7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_40001.f_56DC && iVar1 < Global_40001.f_56F8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SENTINEL3"))
	{
		if (!Global_40001.f_56DD && iVar1 < Global_40001.f_56F9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("YOSEMITE"))
	{
		if (!Global_40001.f_56DE && iVar1 < Global_40001.f_56FA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SC1"))
	{
		if (!Global_40001.f_56DF && iVar1 < Global_40001.f_56FB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AUTARCH"))
	{
		if (!Global_40001.f_56E0 && iVar1 < Global_40001.f_56FC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GT500"))
	{
		if (!Global_40001.f_56E1 && iVar1 < Global_40001.f_56FD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HUSTLER"))
	{
		if (!Global_40001.f_56E2 && iVar1 < Global_40001.f_56FE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("REVOLTER"))
	{
		if (!Global_40001.f_56E3 && iVar1 < Global_40001.f_56FF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PARIAH"))
	{
		if (!Global_40001.f_56E4 && iVar1 < Global_40001.f_5700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAIDEN"))
	{
		if (!Global_40001.f_56E5 && iVar1 < Global_40001.f_5701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SAVESTRA"))
	{
		if (!Global_40001.f_56E6 && iVar1 < Global_40001.f_5702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RIATA"))
	{
		if (!Global_40001.f_56E7 && iVar1 < Global_40001.f_5703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HERMES"))
	{
		if (!Global_40001.f_56E8 && iVar1 < Global_40001.f_5704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET5"))
	{
		if (!Global_40001.f_56E9 && iVar1 < Global_40001.f_5705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("Z190"))
	{
		if (!Global_40001.f_56EA && iVar1 < Global_40001.f_5706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VISERIS"))
	{
		if (!Global_40001.f_56EB && iVar1 < Global_40001.f_5707)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KAMACHO"))
	{
		if (!Global_40001.f_56EC && iVar1 < Global_40001.f_5708)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("GB200"))
	{
		if (!Global_40001.f_5B88 && iVar1 < Global_40001.f_5B98)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGALOA"))
	{
		if (!Global_40001.f_5B89 && iVar1 < Global_40001.f_5B99)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELLIE"))
	{
		if (!Global_40001.f_5B8D && iVar1 < Global_40001.f_5B9D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ISSI3"))
	{
		if (!Global_40001.f_5B90 && iVar1 < Global_40001.f_5BA0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MICHELLI"))
	{
		if (!Global_40001.f_5B95 && iVar1 < Global_40001.f_5BA5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FLASHGT"))
	{
		if (!Global_40001.f_5B8F && iVar1 < Global_40001.f_5B9F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HOTRING"))
	{
		if (!Global_40001.f_5B87 && iVar1 < Global_40001.f_5B97)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TEZERACT"))
	{
		if (!Global_40001.f_5B8E && iVar1 < Global_40001.f_5B9E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TYRANT"))
	{
		if (!Global_40001.f_5B94 && iVar1 < Global_40001.f_5BA4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DOMINATOR3"))
	{
		if (!Global_40001.f_5B93 && iVar1 < Global_40001.f_5BA3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TAIPAN"))
	{
		if (!Global_40001.f_5B8A && iVar1 < Global_40001.f_5B9A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ENTITY2"))
	{
		if (!Global_40001.f_5B8C && iVar1 < Global_40001.f_5B9C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("JESTER3"))
	{
		if (!Global_40001.f_5B96 && iVar1 < Global_40001.f_5BA6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHEBUREK"))
	{
		if (!Global_40001.f_5B92 && iVar1 < Global_40001.f_5BA2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CARACARA"))
	{
		if (!Global_40001.f_5B8B && iVar1 < Global_40001.f_5B9B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEASPARROW"))
	{
		if (!Global_40001.f_5B91 && iVar1 < Global_40001.f_5BA1)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("TERBYTE"))
	{
		if (!Global_40001.f_5BE2 && iVar1 < Global_40001.f_5BD5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PBUS2"))
	{
		if (!Global_40001.f_5BE3 && iVar1 < Global_40001.f_5BD6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MULE4"))
	{
		if (!Global_40001.f_5BE8 && iVar1 < Global_40001.f_5BDB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("POUNDER2"))
	{
		if (!Global_40001.f_5BE7 && iVar1 < Global_40001.f_5BDA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SWINGER"))
	{
		if (!Global_40001.f_5BE5 && iVar1 < Global_40001.f_5BD8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MENACER"))
	{
		if (!Global_40001.f_5BEB && iVar1 < Global_40001.f_5BDE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SCRAMJET"))
	{
		if (!Global_40001.f_5BED && iVar1 < Global_40001.f_5BE0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STRIKEFORCE"))
	{
		if (!Global_40001.f_5BEE && iVar1 < Global_40001.f_5BE1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OPPRESSOR2"))
	{
		if (!Global_40001.f_5BEC && iVar1 < Global_40001.f_5BDF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PATRIOT2"))
	{
		if (!Global_40001.f_5BE4 && iVar1 < Global_40001.f_5BD7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STAFFORD"))
	{
		if (!Global_40001.f_5BE6 && iVar1 < Global_40001.f_5BD9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FREECRAWLER"))
	{
		if (!Global_40001.f_5BEA && iVar1 < Global_40001.f_5BDD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLIMP3"))
	{
		if (!Global_40001.f_5BE9 && iVar1 < Global_40001.f_5BDC)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("MONSTER3"))
	{
	}
	else if (iParam0 == joaat("CERBERUS"))
	{
	}
	else if (iParam0 == joaat("CERBERUS2"))
	{
	}
	else if (iParam0 == joaat("CERBERUS3"))
	{
	}
	else if (iParam0 == joaat("BRUTUS"))
	{
	}
	else if (iParam0 == joaat("BRUTUS2"))
	{
	}
	else if (iParam0 == joaat("BRUTUS3"))
	{
	}
	else if (iParam0 == joaat("SCARAB"))
	{
	}
	else if (iParam0 == joaat("SCARAB2"))
	{
	}
	else if (iParam0 == joaat("SCARAB3"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR2"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR3"))
	{
	}
	else if (iParam0 == joaat("ZR380"))
	{
	}
	else if (iParam0 == joaat("ZR3802"))
	{
	}
	else if (iParam0 == joaat("ZR3803"))
	{
	}
	else if (iParam0 == joaat("IMPALER"))
	{
	}
	else if (iParam0 == joaat("DEVESTE"))
	{
		if (!Global_40001.f_641C && iVar1 < Global_40001.f_641E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TOROS"))
	{
		if (!Global_40001.f_606B && iVar1 < Global_40001.f_6064)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CLIQUE"))
	{
		if (!Global_40001.f_606C && iVar1 < Global_40001.f_6065)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTO"))
	{
		if (!Global_40001.f_606D && iVar1 < Global_40001.f_6066)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DEVIANT"))
	{
		if (!Global_40001.f_606E && iVar1 < Global_40001.f_6067)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VAMOS"))
	{
		if (!Global_40001.f_641D && iVar1 < Global_40001.f_641F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TULIP"))
	{
		if (!Global_40001.f_606F && iVar1 < Global_40001.f_6068)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SCHLAGEN"))
	{
		if (!Global_40001.f_6070 && iVar1 < Global_40001.f_6069)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RCBANDITO"))
	{
		if (!Global_40001.f_6071 && iVar1 < Global_40001.f_606A)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_757()//Position - 0x2065F
{
	return 0;
}

int func_758()//Position - 0x20668
{
	return 1;
}

int func_759()//Position - 0x20671
{
	return 1;
}

int func_760()//Position - 0x2067A
{
	if (DLC::IS_DLC_PRESENT(3068027362))
	{
		return 1;
	}
	return 0;
}

int func_761()//Position - 0x20693
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, 4294967295);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_19, 2);
				MISC::SET_BIT(&Global_19, 4);
				MISC::SET_BIT(&Global_19, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (MISC::_0x5AA3BEFA29F03AD4())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_2357D == 2)
	{
		return 1;
	}
	else if (Global_2357D == 3)
	{
		return 0;
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_762(int iParam0, int iParam1, bool bParam2)//Position - 0x2074E
{
	if (Global_40001.f_2742)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1962F6[iParam0] - 1);
		if (bParam2)
		{
			if ((MISC::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = 4294967295;
	}
}

int func_763(int iParam0)//Position - 0x2078E
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return 4294967295;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_766(iParam0);
		return func_765(iVar0);
	}
	return (func_764(iParam0, 4294967295) * iParam0);
}

int func_764(int iParam0, int iParam1)//Position - 0x2089F
{
	if (iParam0 == 4294967295)
	{
		if (iParam1 >= 1)
		{
			if (func_468(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_474(iParam1))
			{
				return 0;
			}
			else if (func_466(iParam1, 4294967295))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 <= 124 && iParam1 > 0)
			{
				if (Global_1004B2[iParam1 /*1951*/].f_21 == 2)
				{
					return 3;
				}
				else if (Global_1004B2[iParam1 /*1951*/].f_21 == 6)
				{
					return 8;
				}
				else if (Global_1004B2[iParam1 /*1951*/].f_21 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
	}
	return 0;
}

int func_765(int iParam0)//Position - 0x20A98
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return 4294967295;
}

int func_766(int iParam0)//Position - 0x20AC9
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return 4294967295;
}

var func_767()//Position - 0x20AEF
{
	var uVar0;
	
	uVar0 = func_768();
	if (!func_957())
	{
		if (func_514() != func_22())
		{
			uVar0 = func_802(func_514()) + 1;
		}
	}
	return uVar0;
}

int func_768()//Position - 0x20B1E
{
	return func_802(CAM::_0xDC9DA9E8789F5246()) + 1;
}

int func_769()//Position - 0x20B30
{
	return func_536(6113, 4294967295, 0);
}

int func_770(int iParam0)//Position - 0x20B41
{
	if (func_292(iParam0, 1))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_19A;
	}
	return 4294967295;
}

void func_771(int iParam0)//Position - 0x20B65
{
	if (iParam0 == 0)
	{
	}
	unk_0x5F080E7F4F761E28(&Global_196F7D);
	func_772();
}

void func_772()//Position - 0x20B7F
{
	struct<44> Var0;
	
	Global_196F7D = { Var0 };
	Global_196F7D.f_17 = 0;
	Global_196F7D.f_18 = 0;
	Global_196F7D.f_10 = 0;
}

bool func_773(int iParam0)//Position - 0x20BA8
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 12);
}

bool func_774(int iParam0)//Position - 0x20BC5
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 13);
}

int func_775(int iParam0)//Position - 0x20BE2
{
	if (iParam0 != func_22())
	{
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 12) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 13)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_776(int iParam0)//Position - 0x20C43
{
	if (iParam0 != func_22())
	{
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 1)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_777(int iParam0)//Position - 0x20CA1
{
	if (iParam0 != func_22())
	{
		if (((((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 3) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 4)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 5)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 0)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 1)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_778(int iParam0, int iParam1)//Position - 0x20D4A
{
	if (iParam1 == func_22())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 0))
			{
				return 3;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 3))
			{
				return 2;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 6))
			{
				return 4;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 9))
			{
				return 1;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 12))
			{
				return 7;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 15))
			{
				return 5;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 18))
			{
				return 6;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 21))
			{
				return 0;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 1))
			{
				return 3;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 4))
			{
				return 2;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 7))
			{
				return 4;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 10))
			{
				return 1;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 13))
			{
				return 7;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 16))
			{
				return 5;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 19))
			{
				return 6;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 22))
			{
				return 0;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 2))
			{
				return 3;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 5))
			{
				return 2;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 8))
			{
				return 4;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 11))
			{
				return 1;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 14))
			{
				return 7;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 17))
			{
				return 5;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 20))
			{
				return 6;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 23))
			{
				return 0;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_779(int iParam0)//Position - 0x2109E
{
	if (iParam0 != func_22())
	{
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 6) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 7)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_780(int iParam0)//Position - 0x210FD
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 8);
}

bool func_781(int iParam0)//Position - 0x2111A
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 7);
}

bool func_782(int iParam0)//Position - 0x21136
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 9);
}

bool func_783(int iParam0)//Position - 0x21160
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 11);
}

bool func_784(int iParam0)//Position - 0x2118A
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 10);
}

int func_785(int iParam0, int iParam1)//Position - 0x211B4
{
	return func_536(func_786(iParam1), iParam0, 0);
}

int func_786(int iParam0)//Position - 0x211C9
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

void func_787(int iParam0)//Position - 0x21223
{
	if (iParam0 == 0)
	{
	}
	unk_0x446AB56E5D45010D(&Global_196F3E);
	func_788();
}

void func_788()//Position - 0x2123D
{
	struct<63> Var0;
	
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1C = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_1F = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_24 = 4294967295;
	Var0.f_25 = 4294967295;
	Var0.f_26 = 4294967295;
	Var0.f_27 = 4294967295;
	Var0.f_28 = 4294967295;
	Var0.f_29 = 4294967295;
	Var0.f_2A = 4294967295;
	Var0.f_2B = 4294967295;
	Var0.f_2C = 4294967295;
	Var0.f_2D = 4294967295;
	Var0.f_2E = 4294967295;
	Var0.f_2F = 4294967295;
	Var0.f_30 = 4294967295;
	Var0.f_31 = 4294967295;
	Var0.f_32 = 4294967295;
	Var0.f_33 = 4294967295;
	Var0.f_34 = 4294967295;
	Var0.f_35 = 4294967295;
	Var0.f_36 = 4294967295;
	Var0.f_37 = 4294967295;
	Var0.f_38 = 4294967295;
	Var0.f_39 = 4294967295;
	Var0.f_3A = 4294967295;
	Var0.f_3B = 4294967295;
	Var0.f_3C = 4294967295;
	Var0.f_3D = 4294967295;
	Var0.f_3E = 4294967295;
	Global_196F3E = { Var0 };
	Global_196F3E.f_18 = 0;
	Global_196F3E.f_19 = 0;
	Global_196F3E.f_11 = 0;
}

void func_789(int iParam0)//Position - 0x213A7
{
	if (iParam0 == 0)
	{
	}
	unk_0xF1381B4DBB31FA25(&Global_196F08);
	func_790();
}

void func_790()//Position - 0x213C1
{
	struct<54> Var0;
	
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1C = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_1F = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_24 = 4294967295;
	Var0.f_25 = 4294967295;
	Var0.f_26 = 4294967295;
	Var0.f_27 = 4294967295;
	Var0.f_28 = 4294967295;
	Var0.f_29 = 4294967295;
	Var0.f_2A = 4294967295;
	Var0.f_2B = 4294967295;
	Var0.f_2C = 4294967295;
	Var0.f_2D = 4294967295;
	Var0.f_2E = 4294967295;
	Var0.f_2F = 4294967295;
	Var0.f_30 = 4294967295;
	Var0.f_31 = 4294967295;
	Var0.f_32 = 4294967295;
	Var0.f_33 = 4294967295;
	Var0.f_34 = 4294967295;
	Var0.f_35 = 4294967295;
	Global_196F08 = { Var0 };
	Global_196F08.f_1D = 0;
	Global_196F08.f_1E = 0;
	Global_196F08.f_11 = 0;
}

int func_791(int iParam0, int iParam1)//Position - 0x214F5
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_678(iParam0, iParam1, 2);
	bVar1 = func_678(iParam0, iParam1, 1);
	bVar2 = func_678(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_792(int iParam0, int iParam1)//Position - 0x215AB
{
	int iVar0;
	
	if (iParam0 == func_22())
	{
		return 0;
	}
	if (func_673(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam1)
			{
				return Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_793(int iParam0, bool bParam1, bool bParam2)//Position - 0x2160A
{
	int iVar0;
	int iVar1;
	
	if (func_464(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_40001.f_44A1;
		}
		else if (!bParam2)
		{
			iVar0 = Global_40001.f_44A0;
		}
		else
		{
			iVar0 = Global_40001.f_448E;
		}
		iVar1 = 19;
	}
	else if (func_463(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_324(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_40001.f_448D;
			iVar1 = 20;
		}
	}
	else if (func_417(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_40001.f_44A1;
		}
		else if (!bParam2)
		{
			iVar0 = Global_40001.f_44A0;
		}
		else
		{
			iVar0 = Global_40001.f_448E;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x0022CBDAA2EA4C4F(func_797(func_514()), func_796(func_514()), func_810(), func_809(), iVar1, iVar0);
	}
	func_795(iVar0);
	func_794(iVar0);
	return iVar0;
}

void func_794(int iParam0)//Position - 0x216FD
{
	int iVar0;
	
	iVar0 = func_536(3968, 4294967295, 0);
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
	func_534(3968, iVar0, 4294967295, 1, 0);
}

void func_795(int iParam0)//Position - 0x2174B
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

int func_796(int iParam0)//Position - 0x217C5
{
	if (iParam0 == func_22())
	{
		return 4294967295;
	}
	return Global_18CD5B[iParam0 /*560*/].f_B.f_8[1];
}

int func_797(int iParam0)//Position - 0x217EA
{
	if (iParam0 == func_22())
	{
		return 4294967295;
	}
	return Global_18CD5B[iParam0 /*560*/].f_B.f_8[0];
}

int func_798(bool bParam0)//Position - 0x2180F
{
	if (bParam0)
	{
		return 0;
	}
	if (func_246(CAM::_0xDC9DA9E8789F5246()) || func_298(CAM::_0xDC9DA9E8789F5246()))
	{
		return 1;
	}
	return 0;
}

void func_799(var uParam0)//Position - 0x2183E
{
	unk_0x316DB59CD14C1774(&Global_19700D);
	func_800();
}

void func_800()//Position - 0x21852
{
	struct<35> Var0;
	
	Var0 = 4294967295;
	Var0.f_1 = 4294967295;
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_1F = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Global_19700D = { Var0 };
}

int func_801(int iParam0)//Position - 0x21933
{
	if (iParam0 != func_22())
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_139 != 0;
	}
	return 0;
}

int func_802(int iParam0)//Position - 0x21959
{
	return Global_18CD5B[iParam0 /*560*/].f_B.f_13;
}

int func_803()//Position - 0x2196E
{
	int iVar0;
	
	if (func_563())
	{
		return 4;
	}
	else if (func_957())
	{
		if (func_705(CAM::_0xDC9DA9E8789F5246()))
		{
			return 8;
		}
		return 6;
	}
	if (func_352(1))
	{
		iVar0 = func_770(CAM::_0xDC9DA9E8789F5246());
		if (iVar0 == 4294967295)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_515(1))
	{
		if (func_705(func_514()))
		{
			return 9;
		}
		return 7;
	}
	return 4294967294;
}

int func_804(bool bParam0)//Position - 0x219E1
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_805(bool bParam0)//Position - 0x219F3
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4294967295;
	iVar1 = 4294967295;
	if (bParam0)
	{
		iVar0 = func_284(CAM::_0xDC9DA9E8789F5246());
	}
	else
	{
		iVar0 = func_226(CAM::_0xDC9DA9E8789F5246());
	}
	if (iVar0 != 4294967295)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_808(CAM::_0xDC9DA9E8789F5246());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_807(CAM::_0xDC9DA9E8789F5246());
			if (func_525(func_526(CAM::_0xDC9DA9E8789F5246())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_807(CAM::_0xDC9DA9E8789F5246());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_806(CAM::_0xDC9DA9E8789F5246());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_806(CAM::_0xDC9DA9E8789F5246());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_806(int iParam0)//Position - 0x21B2B
{
	if (func_226(CAM::_0xDC9DA9E8789F5246()) == 238 || func_226(CAM::_0xDC9DA9E8789F5246()) == 249)
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_1C9;
	}
	return 4294967295;
}

int func_807(int iParam0)//Position - 0x21B64
{
	if (func_226(CAM::_0xDC9DA9E8789F5246()) == 237 || func_226(CAM::_0xDC9DA9E8789F5246()) == 250)
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_1C8;
	}
	return 4294967295;
}

int func_808(int iParam0)//Position - 0x21B9D
{
	if (func_284(iParam0) == 236)
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_1C7;
	}
	return 4294967295;
}

int func_809()//Position - 0x21BC2
{
	if (Global_196EF6.f_3 != 0)
	{
		return Global_196EF6.f_3;
	}
	return 4294967295;
}

int func_810()//Position - 0x21BDE
{
	if (Global_196EF6.f_2 != 0)
	{
		return Global_196EF6.f_2;
	}
	return 4294967295;
}

int func_811(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x21BFA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_22();
	iVar1 = func_22();
	iVar2 = func_22();
	return func_812(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_812(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x21C35
{
	struct<80> Var0;
	
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 3212836864;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = 4294967295;
	func_513(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_11 = iParam5;
	Var0.f_12 = iParam6;
	Var0.f_13 = iParam7;
	StringCopy(&(Var0.f_19), sParam3, 64);
	StringCopy(&(Var0.f_39), sParam8, 16);
	Var0.f_49 = uParam4;
	Var0.f_47 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_48 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_47 = iParam14;
	}
	MISC::SET_BIT(&(Var0.f_45), 2);
	return func_483(&Var0);
}

int func_813(int iParam0)//Position - 0x21CE9
{
	int iVar0;
	
	iVar0 = func_296(iParam0);
	if (iVar0 != 4294967295)
	{
		return func_294(iVar0);
	}
	return 1;
}

char* func_814()//Position - 0x21D09
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_87(CAM::_0xDC9DA9E8789F5246());
	if (iVar0 != func_22())
	{
		if (iVar0 != CAM::_0xDC9DA9E8789F5246())
		{
			if (((func_199(iVar0, 28) || func_199(CAM::_0xDC9DA9E8789F5246(), 28)) || func_519(iVar0)) && !func_518(iVar0))
			{
				return func_520(iVar0, 0);
			}
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, 4294967295, 1))
			{
				return func_520(iVar0, 0);
			}
		}
		sVar1 = func_522(&(Global_18CD5B[iVar0 /*560*/].f_B.f_63));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_520(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

void func_815()//Position - 0x21DBA
{
	func_950();
	func_906();
	func_895();
	func_885();
	func_837();
	func_832();
	func_819();
	func_816();
}

void func_816()//Position - 0x21DE2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_433 != Local_143.f_5)
	{
		if (Local_143.f_22 != 4294967295)
		{
			if (func_444())
			{
				if (func_396(CAM::_0xDC9DA9E8789F5246()) >= 1)
				{
					if (Local_143.f_5 > 0)
					{
						if (Local_143.f_25 > 4294967295)
						{
							iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_143.f_25);
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
							{
								if (iVar0 != CAM::_0xDC9DA9E8789F5246())
								{
									if (func_292(iVar0, 1))
									{
										iVar1 = func_296(iVar0);
										if (iVar1 > 4294967295)
										{
											iVar2 = func_294(iVar1);
											func_817("GB_SGHT_TCKC", iVar0, iVar2, 0, 0, 0, 1, 1, 0);
										}
									}
									else
									{
										func_817("GB_SGHT_TCKC", iVar0, 1, 0, 0, 0, 1, 1, 0);
									}
								}
							}
						}
					}
				}
			}
			iLocal_433 = Local_143.f_5;
		}
	}
}

int func_817(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)//Position - 0x21E8A
{
	int iVar0;
	struct<16> Var1;
	int iVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_624(&Var1));
		if (!bParam5)
		{
			iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		}
		else
		{
			Global_2633E1 = { func_88(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_26339B, 35, &Global_2633E1))
			{
				iVar2 = 0;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_26339B.f_16), "Leader") && Global_26339B.f_1E == 0)
				{
					iVar2 = 1;
				}
				if (Global_26339B.f_15 > 0)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				if (bParam7)
				{
					if (bParam8)
					{
						Var1 = { func_818(&Var1) };
					}
					iVar0 = HUD::_DRAW_NOTIFICATION_CLAN_INVITE(iVar3, NETWORK::_0x7543BB439F63792B(&Global_26339B, 35), &(Global_26339B.f_11), Global_26339B.f_1E, iVar2, 0, Global_26339B, &Var1, Global_140CDE, Global_140CDF, Global_140CE0);
				}
				else
				{
					iVar0 = HUD::_DRAW_NOTIFICATION_APARTMENT_INVITE(iVar3, NETWORK::_0x7543BB439F63792B(&Global_26339B, 35), &(Global_26339B.f_11), Global_26339B.f_1E, iVar2, 0, Global_26339B, Global_140CDE, Global_140CDF, Global_140CE0);
				}
			}
			else
			{
				iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
			}
		}
		func_620(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_818(char* sParam0)//Position - 0x21FEB
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_819()//Position - 0x22016
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_973() && !func_405())
	{
		return;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_156, 0))
	{
		return;
	}
	if (!func_444())
	{
		return;
	}
	iVar0 = func_396(CAM::_0xDC9DA9E8789F5246());
	if (iVar0 < 3)
	{
		return;
	}
	if (func_9(&(Local_143.f_33)))
	{
		iVar1 = (func_11() - func_831(&(Local_143.f_33), 0, 0));
		iVar2 = (func_188() - Local_143.f_5);
		func_830(iVar1);
		if (iVar1 > 30000)
		{
			func_820(iVar2, "GB_SGHT_HUD", iVar1, 1, "GB_WORK_END");
		}
		else if (iVar1 > 0)
		{
			func_820(iVar2, "GB_SGHT_HUD", iVar1, 6, "GB_WORK_END");
		}
		else
		{
			func_820(iVar2, "GB_SGHT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_820(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)//Position - 0x220D2
{
	char* sVar0;
	
	if (func_828(0) == 0)
	{
		return;
	}
	func_827();
	func_824(iParam0, sParam1, 4294967295, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_605(sParam4))
	{
		sVar0 = sParam4;
	}
	func_821(iParam2, sVar0, 0, 0, 4294967295, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0);
}

void func_821(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x22137
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_823(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_822(7, iVar0);
		Global_14E696.f_112F[iVar0] = uParam0;
		StringCopy(&(Global_14E696.f_112F.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14E696.f_112F.f_AC[iVar0] = iParam2;
		Global_14E696.f_112F.f_D8[iVar0] = iParam3;
		Global_14E696.f_112F.f_B7[iVar0] = iParam4;
		Global_14E696.f_112F.f_C2[iVar0] = iParam5;
		Global_14E696.f_112F.f_F9[iVar0] = iParam6;
		Global_14E696.f_112F.f_104[iVar0] = iParam7;
		Global_14E696.f_112F.f_CD[iVar0] = uParam8;
		Global_14E696.f_112F.f_13A[iVar0] = iParam9;
		Global_14E696.f_112F.f_145[iVar0] = iParam10;
		Global_14E696.f_112F.f_165[iVar0] = iParam11;
		Global_14E696.f_112F.f_EE[iVar0] = uParam12;
		Global_14E696.f_112F.f_10F[iVar0] = iParam13;
		Global_14E696.f_112F.f_170[iVar0] = iParam14;
		Global_14E696.f_112F.f_17B[iVar0] = iParam15;
		Global_14E696.f_112F.f_186[iVar0] = iParam16;
	}
}

void func_822(int iParam0, int iParam1)//Position - 0x22285
{
	MISC::SET_BIT(&(Global_14E696.f_17F2[iParam0]), iParam1);
}

bool func_823(int iParam0, int iParam1)//Position - 0x2229E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E696.f_17F2[iParam0], iParam1);
}

void func_824(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)//Position - 0x222B7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_823(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_822(6, iVar0);
		Global_14E696.f_EC5[iVar0] = iParam0;
		StringCopy(&(Global_14E696.f_EC5.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14E696.f_EC5.f_B7[iVar0] = iParam3;
		Global_14E696.f_EC5.f_AC[iVar0] = iParam2;
		Global_14E696.f_EC5.f_104[iVar0] = iParam4;
		Global_14E696.f_EC5.f_10F[iVar0] = iParam5;
		StringCopy(&(Global_14E696.f_EC5.f_11A[iVar0 /*16*/]), sParam6, 64);
		Global_14E696.f_EC5.f_1BB[iVar0] = iParam7;
		Global_14E696.f_EC5.f_1C6[iVar0] = iParam8;
		Global_14E696.f_EC5.f_1F1[iVar0] = iParam9;
		Global_14E696.f_EC5.f_1FC[iVar0] = iParam10;
		Global_14E696.f_EC5.f_CD[iVar0] = iParam11;
		Global_14E696.f_EC5.f_D8[iVar0] = iParam12;
		Global_14E696.f_EC5.f_E3[iVar0] = iParam13;
		Global_14E696.f_EC5.f_EE[iVar0] = iParam14;
		Global_14E696.f_EC5.f_F9[iVar0] = iParam15;
		Global_14E696.f_EC5.f_207[iVar0] = iParam16;
		Global_14E696.f_EC5.f_212[iVar0] = iParam17;
		Global_14E696.f_EC5.f_21D[iVar0] = iParam18;
		Global_14E696.f_EC5.f_228[iVar0] = iParam19;
		Global_14E696.f_EC5.f_233[iVar0] = iParam20;
		Global_14E696.f_EC5.f_23E[iVar0] = iParam21;
		Global_14E696.f_EC5.f_249[iVar0] = iParam22;
		Global_14E696.f_EC5.f_254[iVar0] = iParam23;
		Global_14E696.f_EC5.f_25F[iVar0] = iParam24;
		if (iParam15 == 5 && func_826())
		{
			Global_14E696.f_440 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_14E696.f_444 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_14E696.f_443 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_14E696.f_440 = 1;
			}
			if (func_825())
			{
				Global_14E696.f_444 = 1;
			}
		}
	}
}

int func_825()//Position - 0x22519
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_826()//Position - 0x2253D
{
	if (((UNK::_GET_CURRENT_LANGUAGE_ID() == 8 || UNK::_GET_CURRENT_LANGUAGE_ID() == 9) || UNK::_GET_CURRENT_LANGUAGE_ID() == 10) || UNK::_GET_CURRENT_LANGUAGE_ID() == 12)
	{
		return 1;
	}
	return 0;
}

void func_827()//Position - 0x2257B
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_258855 = 1;
}

int func_828(bool bParam0)//Position - 0x2259E
{
	if (func_829())
	{
		return 0;
	}
	if (func_379())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_1072(CAM::_0xDC9DA9E8789F5246(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_829()//Position - 0x225D5
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 12);
}

void func_830(int iParam0)//Position - 0x225E7
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 8))
	{
		func_200();
		return;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 15))
	{
		if (iParam0 <= 35000)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("APT_PRE_COUNTDOWN_STOP"))
			{
				MISC::SET_BIT(&iLocal_146, 15);
				MISC::SET_BIT(&iLocal_146, 9);
			}
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 11))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
				{
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
					AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
					MISC::SET_BIT(&iLocal_146, 11);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 14))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S"))
				{
					MISC::SET_BIT(&iLocal_146, 14);
				}
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
						MISC::SET_BIT(&iLocal_146, 12);
					}
					if (iParam0 <= 500)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
							GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_146, 9);
						}
					}
				}
			}
		}
	}
}

int func_831(var uParam0, bool bParam1, bool bParam2)//Position - 0x226FD
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_832()//Position - 0x22744
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_143.f_3))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 2))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_143.f_3), AUDIO::_0x0626A247D2405330()))
				{
					MISC::SET_BIT(&(Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 2);
					iLocal_431 = AUDIO::GET_SOUND_ID();
					if (func_352(1))
					{
						unk_0x1190AB7024CBD8CB(iLocal_431, "Pickup_Briefcase", "GTAO_Biker_Modes_Soundset", false);
					}
					else
					{
						unk_0x1190AB7024CBD8CB(iLocal_431, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", false);
					}
					Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_5++;
				}
			}
		}
	}
	if (iLocal_148 != Local_143.f_5)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 3))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 3);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 2))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_143.f_3))
			{
				iVar0 = NETWORK::NET_TO_ENT(Local_143.f_3);
				ENTITY::DELETE_ENTITY(&iVar0);
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 2);
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_143.f_3);
			}
		}
		else
		{
			iLocal_148 = Local_143.f_5;
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_143.f_3))
	{
		if (func_957())
		{
			if (func_973())
			{
				func_834();
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 13))
		{
			if (!func_973() || !func_957())
			{
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_143.f_3), true, 1);
				MISC::SET_BIT(&iLocal_145, 13);
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 3))
		{
			ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_143.f_3), 1200);
			MISC::SET_BIT(&iLocal_145, 3);
		}
	}
	else
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 13))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_145, 13);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 3))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_145, 3);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_150))
		{
			HUD::REMOVE_BLIP(&iLocal_150);
		}
	}
	func_833();
}

void func_833()//Position - 0x2291C
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!func_444())
	{
		return;
	}
	if (func_396(CAM::_0xDC9DA9E8789F5246()) >= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_143.f_3) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_143.f_3), 0))
		{
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(NETWORK::NET_TO_OBJ(Local_143.f_3)))
			{
				HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
				GRAPHICS::DRAW_MARKER(2, unk_0x8000C77B5F336760(NETWORK::NET_TO_ENT(Local_143.f_3), true) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar0, iVar1, iVar2, 100, 1, 1, 2, 0, 0, 0, false);
			}
		}
	}
}

void func_834()//Position - 0x229B5
{
	int iVar0;
	
	iVar0 = func_396(CAM::_0xDC9DA9E8789F5246());
	if (iVar0 < 2)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_150))
		{
			HUD::REMOVE_BLIP(&iLocal_150);
		}
		return;
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_150))
	{
		return;
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_145, 11);
	iLocal_150 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_143.f_3));
	HUD::SET_BLIP_PRIORITY(iLocal_150, 12);
	HUD::SET_BLIP_SPRITE(iLocal_150, 459);
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_150, "GB_SGHT_BLP");
	HUD::SET_BLIP_ROUTE(iLocal_150, true);
	HUD::SET_BLIP_SCALE(iLocal_150, Global_40001.f_2FD2);
	if (func_973())
	{
		func_835(&iLocal_150, 18);
	}
	HUD::_0x75A16C3DA34F1245(iLocal_150, true);
	iLocal_432 = AUDIO::GET_SOUND_ID();
	if (func_352(1))
	{
		unk_0x1190AB7024CBD8CB(iLocal_432, "Blip_Pickup", "GTAO_Biker_Modes_Soundset", false);
	}
	else
	{
		unk_0x1190AB7024CBD8CB(iLocal_432, "Blip_Pickup", "GTAO_Magnate_Boss_Modes_Soundset", false);
	}
}

void func_835(int iParam0, int iParam1)//Position - 0x22A84
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = func_836(iParam1);
		HUD::SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

int func_836(int iParam0)//Position - 0x22AAA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_837()//Position - 0x22D12
{
	if (NETSHOP::_NETWORK_SHOP_BASKET_START() != Local_143.f_21)
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_143.f_3))
	{
		if (iLocal_428 != 4294967295)
		{
			iLocal_428 = 4294967295;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 20))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_41212A, 20);
		}
		return;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 20))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 21))
		{
			if (iLocal_428 < 0)
			{
				MISC::SET_BIT(&Global_41212A, 20);
			}
		}
	}
	if (iLocal_429 == 4294967295)
	{
		iLocal_429 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	}
	if (iLocal_428 < 0)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 21))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_41212A, 21);
			iLocal_428 = 0;
		}
	}
	func_838();
}

void func_838()//Position - 0x22DBB
{
	bool bVar0;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 4))
	{
		if (iLocal_428 >= 0)
		{
			if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&Local_156, 0);
				iLocal_428 = 4294967295;
			}
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
				{
					func_884(1);
				}
			}
		}
	}
	else if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		func_883(&Local_156);
		func_882(&Local_156);
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_145, 4);
	}
	switch (iLocal_428)
	{
		case 0:
			func_881(1);
			HUD::REQUEST_ADDITIONAL_TEXT("HACK", 3);
			iLocal_428++;
			break;
		
		case 1:
			if (func_880(1) && HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
			{
				MISC::SET_BIT(&Local_156, 0);
				MISC::SET_BIT(&(Local_156.f_1), 0);
				func_437();
				iLocal_430 = 10;
				if (iLocal_429 == 2)
				{
					Local_156.f_16 = 1;
				}
				else if (iLocal_429 == 1)
				{
					Local_156.f_16 = 0;
					iLocal_430 = 77;
				}
				else if (iLocal_429 == 0)
				{
					iLocal_430 = 50;
					Local_156.f_16 = 0;
				}
				func_875(CAM::_0xDC9DA9E8789F5246(), 0, 66048);
				iLocal_428++;
			}
			else
			{
				if (!func_880(1))
				{
				}
				if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
				{
				}
			}
			break;
		
		case 2:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
			if (!func_204(0))
			{
				func_230(0);
			}
			if (iLocal_429 == 0)
			{
				func_853(&Local_156, 5, 5, iLocal_430, 10, 8, 10, 0, 1, 0, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_852(&Local_156, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_429 == 1)
			{
				func_853(&Local_156, 5, 5, iLocal_430, 10, 8, 10, 0, 0, 1, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_851(&Local_156, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_429 == 2)
			{
				func_853(&Local_156, 5, 5, iLocal_430, 10, 8, 10, 0, 0, 0, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_839(&Local_156, 1))
				{
					bVar0 = true;
				}
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_156.f_1, 1))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&Local_156, 0);
				func_883(&Local_156);
				func_875(CAM::_0xDC9DA9E8789F5246(), 1, 0);
				if (func_204(0))
				{
					func_203(0);
				}
				iLocal_428 = 4294967295;
			}
			else if (bVar0)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&Local_156, 0);
				func_883(&Local_156);
				Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_4++;
				MISC::SET_BIT(&(Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 3);
				iLocal_429++;
				if (iLocal_429 >= 3)
				{
					iLocal_429 = 0;
				}
				if (func_204(0))
				{
					func_203(0);
				}
				func_875(CAM::_0xDC9DA9E8789F5246(), 1, 0);
				iLocal_428++;
			}
			break;
	}
}

int func_839(int iParam0, bool bParam1)//Position - 0x23057
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 26))
	{
		if (bParam1)
		{
			func_840(iParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_840(int iParam0, bool bParam1, bool bParam2)//Position - 0x23084
{
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 0);
	MISC::SET_BIT(iParam0, 12);
	unk_0x6AEB48E3B648804A(0);
	if (bParam2)
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
		{
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(AUDIO::_0x0626A247D2405330(), 1, 1, 1, 0);
		}
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		MISC::SET_MINIGAME_IN_PROGRESS(0);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	if (bParam1)
	{
		PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
	}
	CAM::DESTROY_CAM(iLocal_72, 0);
	func_844(0);
	func_843();
	GRAPHICS::_0x9B079E5221D984D3(0);
	func_842(iParam0, 1, 1, 0);
	func_841(0, 1, 1, 0);
}

int func_841(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x23104
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && iParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_842(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x23137
{
	int iVar0;
	
	iVar0 = 0;
	if (!bParam3)
	{
		iVar0 = 4;
		while (iVar0 <= 0)
		{
			if (iLocal_68[iVar0] != 4294967295)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[iVar0]))
				{
					AUDIO::STOP_SOUND(iLocal_68[iVar0]);
					AUDIO::RELEASE_SOUND_ID(iLocal_68[iVar0]);
					iLocal_68[iVar0] = 4294967295;
				}
			}
			iVar0++;
		}
		if (iParam0->f_14 > 4294967295)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iParam0->f_14))
			{
				AUDIO::STOP_SOUND(iParam0->f_14);
				AUDIO::RELEASE_SOUND_ID(iParam0->f_14);
				iParam0->f_14 = 4294967295;
			}
		}
	}
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 25);
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 5);
	if (iParam2 == 1)
	{
		GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 12);
		GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 9);
		GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 18);
		GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 27);
		GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 28);
	}
	iParam0->f_1 = 0;
	iParam0->f_7 = iParam0->f_6;
	iLocal_75 = 0;
	if (bParam1)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_74);
	}
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 29);
	func_841(0, 1, 1, 0);
}

void func_843()//Position - 0x2321F
{
	int iVar0;
	
	Global_14E0B5.f_417 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_14E0B5.f_AA[iVar0] = 0;
		iVar0++;
	}
	Global_26862F.f_11A7 = 1;
}

void func_844(bool bParam0)//Position - 0x23255
{
	if (bParam0)
	{
		func_850();
		if (Global_38B1.f_1 == 10 || Global_38B1.f_1 == 9)
		{
			MISC::SET_BIT(&Global_950, 16);
		}
		Global_38B1.f_1 = 1;
		if (func_849(0))
		{
			func_845(0);
		}
	}
	else if (Global_38B1.f_1 == 1)
	{
		if (!Global_38B1.f_1 == 0)
		{
			Global_38B1.f_1 = 3;
		}
	}
}

void func_845(int iParam0)//Position - 0x232B8
{
	if (func_848())
	{
		return;
	}
	if (Global_3959)
	{
		func_847(0, 0);
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
	if (!func_846())
	{
		Global_38B1.f_1 = 3;
	}
}

int func_846()//Position - 0x23332
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_847(bool bParam0, bool bParam1)//Position - 0x23359
{
	if (bParam0)
	{
		if (func_849(0))
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

bool func_848()//Position - 0x233CD
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

int func_849(int iParam0)//Position - 0x233DF
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

void func_850()//Position - 0x23439
{
	if (Global_38B1.f_1 == 9 || Global_38B1.f_1 == 10)
	{
		Global_3E03 = 0;
		Global_3DFF = 1;
	}
}

int func_851(int iParam0, bool bParam1)//Position - 0x23462
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 9))
	{
		if (bParam1)
		{
			func_840(iParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_852(int iParam0, bool bParam1)//Position - 0x2348F
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 18))
	{
		if (bParam1)
		{
			func_840(iParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_853(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)//Position - 0x234BC
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 0))
	{
		func_854(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, iParam14, bParam15, bParam16, bParam17, bParam18);
	}
}

void func_854(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19)//Position - 0x234FA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11[4];
	int iVar12;
	int iVar13;
	
	PAD::_DISABLE_INPUT_GROUP(0);
	PAD::_DISABLE_INPUT_GROUP(2);
	unk_0x6AEB48E3B648804A(1);
	if (bParam17)
	{
		func_874(1);
	}
	func_873(4, 4294967295);
	func_872(0);
	if (func_880(bParam16))
	{
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			if (HUD::GET_PAUSE_MENU_STATE() == 0 && !HUD::IS_PAUSE_MENU_ACTIVE())
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_74, 255, 255, 255, 0, 0);
			}
		}
		if (PAD::_IS_INPUT_JUST_DISABLED(2))
		{
			iParam0->f_122 = PAD::_0x5B84D09CEC5209C5(2, 239);
			iParam0->f_123 = PAD::_0x5B84D09CEC5209C5(2, 240);
			if (iParam0->f_124 != iParam0->f_122 || iParam0->f_125 != iParam0->f_123)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_CURSOR");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(iParam0->f_122);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(iParam0->f_123);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
			iParam0->f_124 = iParam0->f_122;
			iParam0->f_125 = iParam0->f_123;
		}
		else
		{
			func_871(&iVar2, &iVar3, &iVar4, &iVar5, 0);
			if (iVar4 < 0 || iVar5 < 0)
			{
			}
			fVar6 = ((SYSTEM::TO_FLOAT(iVar2) * 8f) * SYSTEM::TIMESTEP());
			fVar7 = ((SYSTEM::TO_FLOAT(iVar3) * 8f) * SYSTEM::TIMESTEP());
			if (iLocal_75 != 8)
			{
				if (((fVar6 > 1f || fVar7 > 1f) || fVar6 < -1f) || fVar7 < -1f)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "MOVE_CURSOR");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fVar6);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fVar7);
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
			}
		}
		if (iLocal_75 > 4)
		{
			if (PAD::_IS_INPUT_JUST_DISABLED(2))
			{
				iParam0->f_122 = PAD::GET_CONTROL_NORMAL(2, 239);
				iParam0->f_123 = PAD::GET_CONTROL_NORMAL(2, 240);
				if (MISC::IS_ORBIS_VERSION())
				{
					if (iParam0->f_124 != iParam0->f_122)
					{
						if (iParam0->f_122 < 0.49f)
						{
							unk_0x1190AB7024CBD8CB(4294967295, "HACKING_MOVE_CURSOR", 0, true);
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
							GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(10);
							CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
						}
						else if (iParam0->f_122 > 0.51f)
						{
							unk_0x1190AB7024CBD8CB(4294967295, "HACKING_MOVE_CURSOR", 0, true);
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
							GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(11);
							CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
						}
					}
				}
				iParam0->f_124 = iParam0->f_122;
				iParam0->f_125 = iParam0->f_123;
			}
			if (PAD::_IS_INPUT_DISABLED(2))
			{
				fVar8 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 1);
				fVar9 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 2);
				bVar10 = false;
				fLocal_67 = (fLocal_67 + SYSTEM::TIMESTEP());
				fLocal_69 = (fLocal_69 + fVar8);
				fLocal_70 = (fLocal_70 + fVar9);
				fLocal_71 = (fLocal_71 + 1f);
				if (fLocal_67 > 0.15f)
				{
					fLocal_67 = 0f;
					fLocal_69 = (fLocal_69 / fLocal_71);
					fLocal_70 = (fLocal_70 / fLocal_71);
					if (MISC::ABSF(fLocal_70) < 0.2f)
					{
						if (fLocal_69 < 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
							GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(10);
							CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
						}
						else if (fLocal_69 > 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
							GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(11);
							CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
						}
					}
					if (MISC::ABSF(fLocal_69) < 0.2f)
					{
						if (fLocal_70 < 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
							GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(8);
							CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
						}
						else if (fLocal_70 > 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
							GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(9);
							CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
						}
					}
					if (bVar10)
					{
						unk_0x1190AB7024CBD8CB(4294967295, "HACKING_MOVE_CURSOR", 0, true);
					}
					fLocal_69 = 0f;
					fLocal_70 = 0f;
					fLocal_71 = 0f;
				}
			}
			func_870(&(iVar11[0]), &(iVar11[1]), &(iVar11[2]), &(iVar11[3]), 0, 0);
			iVar12 = 0;
			while (iVar12 < iVar11)
			{
				if (MISC::ABSI(iVar11[iVar12]) > 0)
				{
					if (iVar12 == 0 || iVar12 == 1)
					{
						if (AUDIO::HAS_SOUND_FINISHED(iParam0->f_14))
						{
							if (iLocal_75 != 8)
							{
								unk_0x1190AB7024CBD8CB(iParam0->f_14, "HACKING_MOVE_CURSOR", 0, true);
							}
						}
					}
				}
				iVar12++;
			}
			if (((PAD::IS_CONTROL_JUST_PRESSED(2, 195) || PAD::IS_CONTROL_JUST_PRESSED(2, 196)) || PAD::IS_CONTROL_PRESSED(2, 195)) || PAD::IS_CONTROL_PRESSED(2, 196))
			{
			}
			if (PAD::_IS_INPUT_DISABLED(2))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 32) || PAD::IS_CONTROL_JUST_PRESSED(2, 172))
				{
					unk_0x1190AB7024CBD8CB(4294967295, "HACKING_MOVE_CURSOR", 0, true);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(8);
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 33) || PAD::IS_CONTROL_JUST_PRESSED(2, 173))
				{
					unk_0x1190AB7024CBD8CB(4294967295, "HACKING_MOVE_CURSOR", 0, true);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(9);
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 34) || PAD::IS_CONTROL_JUST_PRESSED(2, 174))
				{
					unk_0x1190AB7024CBD8CB(4294967295, "HACKING_MOVE_CURSOR", 0, true);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(10);
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 35) || PAD::IS_CONTROL_JUST_PRESSED(2, 175))
				{
					unk_0x1190AB7024CBD8CB(4294967295, "HACKING_MOVE_CURSOR", 0, true);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(11);
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
			{
				unk_0x1190AB7024CBD8CB(4294967295, "HACKING_MOVE_CURSOR", 0, true);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(8);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 187))
			{
				unk_0x1190AB7024CBD8CB(4294967295, "HACKING_MOVE_CURSOR", 0, true);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(9);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
			{
				unk_0x1190AB7024CBD8CB(4294967295, "HACKING_MOVE_CURSOR", 0, true);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(10);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
			{
				unk_0x1190AB7024CBD8CB(4294967295, "HACKING_MOVE_CURSOR", 0, true);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(11);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
		}
		if (bParam12)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_SELECT");
				iLocal_73 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
			}
			if (GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(iLocal_73))
			{
				iVar0 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(iLocal_73);
				if (iVar0 == 6)
				{
					func_869(iParam0);
				}
			}
		}
		func_868();
	}
	if (iLocal_75 == 5 || iLocal_75 == 6)
	{
		if (iLocal_64)
		{
			func_867((iParam15 - (MISC::GET_GAME_TIMER() - iLocal_63)), &iLocal_60, &iLocal_61, &iLocal_62);
			if ((iLocal_60 >= 0 && iLocal_61 >= 0) && iLocal_62 >= 0)
			{
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COUNTDOWN", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), 3212836864, 3212836864);
			}
			else
			{
				iLocal_60 = 0;
				iLocal_61 = 0;
				iLocal_62 = 0;
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COUNTDOWN", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), 3212836864, 3212836864);
			}
		}
	}
	if (iLocal_75 == 5)
	{
		if (func_866(&iLocal_76, (10000 / iParam4)))
		{
			if (iParam0->f_9 > 20f)
			{
				iParam0->f_9 = (iParam0->f_9 - 1f);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_SPEED", iParam0->f_9, 3212836864, 3212836864, 3212836864, 3212836864);
				iLocal_76 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if (iLocal_75 == 6)
	{
		if (func_866(&iLocal_76, (10000 / iParam4)))
		{
			if (iParam0->f_9 > 20f)
			{
				iParam0->f_9 = (iParam0->f_9 - 1f);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 0f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 1f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 2f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 3f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 4f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 5f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 6f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 7f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
				iLocal_76 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_1, 0))
	{
		if (iLocal_75 == 2)
		{
			iLocal_75 = 3;
		}
		else if (iLocal_75 == 3)
		{
			iVar0 = 81;
		}
		else if (iLocal_75 == 4)
		{
			if (bParam8)
			{
				iVar0 = 82;
			}
			else if (bParam9)
			{
				iVar0 = 83;
			}
		}
	}
	switch (iLocal_75)
	{
		case 0:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 29))
			{
				func_865(iParam0, iParam14);
			}
			func_881(1);
			GRAPHICS::_0x9B079E5221D984D3(1);
			iParam0->f_14 = AUDIO::GET_SOUND_ID();
			iLocal_91 = 0;
			iLocal_92 = 0;
			iParam0->f_17 = 0;
			iLocal_75++;
			break;
		
		case 1:
			iVar13 = 0;
			while (iVar13 < 5)
			{
				iLocal_68[iVar13] = 4294967295;
				iVar13++;
			}
			GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), SYSTEM::TO_FLOAT(iParam2), 3212836864, 3212836864, 3212836864);
			GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_SPEED", SYSTEM::TO_FLOAT(iParam3), 3212836864, 3212836864, 3212836864, 3212836864);
			if (bParam12 == 1)
			{
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(iLocal_74, "ADD_PROGRAM", SYSTEM::TO_FLOAT(7), SYSTEM::TO_FLOAT(6), -1f, -1f, -1f, "EXIT", 0, 0, 0, 0);
			}
			uParam5 = uParam5;
			uParam6 = uParam6;
			iParam0->f_7 = iParam1;
			iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
			GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 1);
			fLocal_69 = 0f;
			fLocal_70 = 0f;
			fLocal_71 = 0f;
			iLocal_68[0] = AUDIO::GET_SOUND_ID();
			iLocal_68[1] = AUDIO::GET_SOUND_ID();
			func_841(1, 0, 1, 0);
			if (iParam0->f_16)
			{
				iLocal_75 = 8;
			}
			else
			{
				iLocal_75++;
			}
			break;
		
		case 2:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					if (!func_412("H_EXIT_PROMPT"))
					{
						if (!func_412("HACKOBJ1"))
						{
							func_864("HACKOBJ1");
							iLocal_65 = 1;
						}
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (PAD::_IS_INPUT_JUST_DISABLED(2))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_SELECT");
						iLocal_73 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_SELECT");
					iLocal_73 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
				}
			}
			if (GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(iLocal_73))
			{
				iVar0 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(iLocal_73);
				if (iVar0 == 4)
				{
					if (iParam7 == 1)
					{
						if (func_412("H_EXIT_PROMPT"))
						{
							GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
						}
					}
					iLocal_65 = 0;
					iLocal_75++;
				}
			}
			if (iLocal_78 == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_77) > 500)
				{
					if (((MISC::GET_GAME_TIMER() - iLocal_77) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						func_863(0, "");
					}
				}
			}
			if (GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(iLocal_73))
			{
				iVar0 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(iLocal_73);
				if (iVar0 == 80)
				{
					if (iLocal_78 == 0)
					{
						unk_0x1190AB7024CBD8CB(4294967295, "HACKING_CLICK_BAD", 0, true);
						func_863(1, "ACCESSD");
					}
				}
			}
			break;
		
		case 3:
			if (iParam7 == 1)
			{
				if (iLocal_75 == 3)
				{
					if (iLocal_65 == 0)
					{
						if (!func_412("HACKOBJ2"))
						{
							func_864("HACKOBJ2");
							iLocal_65 = 1;
						}
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(iLocal_73))
				{
					if (PAD::_IS_INPUT_JUST_DISABLED(2))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_SELECT");
							iLocal_73 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_SELECT");
						iLocal_73 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (iLocal_78 == 0)
				{
					if (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(iLocal_73))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_BACK");
							iLocal_73 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
							if (iParam7 == 1)
							{
								if (func_412("HACKOBJ2"))
								{
									GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
								}
								func_864("H_EXIT_PROMPT");
								iLocal_65 = 0;
								iLocal_75 = (iLocal_75 - 1);
							}
						}
					}
				}
			}
			if (iLocal_78 == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_77) > 500)
				{
					if (((MISC::GET_GAME_TIMER() - iLocal_77) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						func_863(0, "");
					}
				}
			}
			if (iLocal_78 == 0)
			{
				if (GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(iLocal_73))
				{
					iVar0 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(iLocal_73);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_78 == 0)
				{
					unk_0x1190AB7024CBD8CB(4294967295, "HACKING_CLICK_BAD", 0, true);
					func_863(1, "ACCESSD");
				}
			}
			if (iVar0 == 81)
			{
				iLocal_65 = 0;
				iLocal_75++;
			}
			break;
		
		case 4:
			if (iLocal_68[1] != 4294967295)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
				{
					AUDIO::STOP_SOUND(iLocal_68[1]);
					iLocal_68[1] = 4294967295;
				}
			}
			if (iLocal_68[0] != 4294967295)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
				{
					AUDIO::STOP_SOUND(iLocal_68[0]);
					iLocal_68[0] = 4294967295;
				}
			}
			if (iLocal_68[1] != 4294967295)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
				{
					AUDIO::STOP_SOUND(iLocal_68[1]);
					iLocal_68[1] = 4294967295;
				}
			}
			if (iParam7 == 1)
			{
				if (iLocal_75 == 4)
				{
					if (bParam9 == 1)
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 5))
						{
							if (iLocal_65 == 0)
							{
								if (!func_412("HACKOBJ5"))
								{
									func_864("HACKOBJ5");
									iLocal_65 = 1;
								}
							}
						}
					}
					else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 18))
					{
						if (iLocal_65 == 0)
						{
							if (!func_412("HACKOBJ3"))
							{
								func_864("HACKOBJ3");
								iLocal_65 = 1;
							}
						}
					}
					else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 5))
					{
						if (iLocal_65 == 0)
						{
							if (!func_412("HACKOBJ5"))
							{
								func_864("HACKOBJ5");
								iLocal_65 = 1;
							}
						}
					}
					else if (iLocal_65 == 1)
					{
						if (func_412("HACKOBJ5"))
						{
							GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
							iLocal_65 = 0;
						}
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (iLocal_78 == 0)
				{
					if (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(iLocal_73))
					{
						if (PAD::_IS_INPUT_JUST_DISABLED(2))
						{
							if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_SELECT");
								iLocal_73 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
							}
						}
						else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_SELECT");
							iLocal_73 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
						}
					}
				}
			}
			if (iLocal_78 == 0)
			{
				if (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(iLocal_73))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_BACK");
						iLocal_73 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
						if (iParam7 == 1)
						{
							if (func_412("HACKOBJ5") || func_412("HACKOBJ3"))
							{
								GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
							}
							iLocal_65 = 0;
							iLocal_75 = (iLocal_75 - 1);
						}
					}
				}
			}
			if (iLocal_78 == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_77) > 500)
				{
					if (((MISC::GET_GAME_TIMER() - iLocal_77) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						func_863(0, "");
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(iLocal_73))
				{
					iVar0 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(iLocal_73);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_78 == 0)
				{
					unk_0x1190AB7024CBD8CB(4294967295, "HACKING_CLICK_BAD", 0, true);
					func_863(1, "ACCESSD");
				}
			}
			if (iVar0 == 82)
			{
				if (bParam9 == 0)
				{
					if (bParam8 == 1)
					{
						iLocal_76 = MISC::GET_GAME_TIMER();
						iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_1, 0))
						{
							GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), 3212836864, 3212836864, 3212836864, 3212836864);
							GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_SPEED", iParam0->f_9, 3212836864, 3212836864, 3212836864, 3212836864);
							GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "OPEN_APP", SYSTEM::TO_FLOAT(0), 3212836864, 3212836864, 3212836864, 3212836864);
						}
						else
						{
							GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), 3212836864, 3212836864, 3212836864, 3212836864);
							GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_SPEED", iParam0->f_9, 3212836864, 3212836864, 3212836864, 3212836864);
							GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "RUN_PROGRAM", SYSTEM::TO_FLOAT(4), 3212836864, 3212836864, 3212836864, 3212836864);
							GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "OPEN_APP", SYSTEM::TO_FLOAT(0), 3212836864, 3212836864, 3212836864, 3212836864);
						}
						iLocal_63 = MISC::GET_GAME_TIMER();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[0] = AUDIO::GET_SOUND_ID();
						unk_0x1190AB7024CBD8CB(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", 0, true);
						iLocal_75++;
					}
					else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 18))
					{
						iLocal_76 = MISC::GET_GAME_TIMER();
						iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), 3212836864, 3212836864, 3212836864, 3212836864);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_SPEED", iParam0->f_9, 3212836864, 3212836864, 3212836864, 3212836864);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "OPEN_APP", SYSTEM::TO_FLOAT(0), 3212836864, 3212836864, 3212836864, 3212836864);
						iLocal_63 = MISC::GET_GAME_TIMER();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[0] = AUDIO::GET_SOUND_ID();
						unk_0x1190AB7024CBD8CB(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", 0, true);
						iLocal_75++;
					}
					else
					{
						if (iLocal_78 == 1)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_77) > 500)
							{
								if (((MISC::GET_GAME_TIMER() - iLocal_77) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
								{
									func_863(0, "");
								}
							}
						}
						if (iLocal_78 == 0)
						{
							unk_0x1190AB7024CBD8CB(4294967295, "HACKING_CLICK_BAD", 0, true);
							if (bParam13 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 9))
							{
								func_863(1, "TRYDL");
							}
							else
							{
								func_863(1, "TRYBRUTE");
							}
						}
					}
				}
				else
				{
					if (iLocal_78 == 1)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_77) > 500)
						{
							if (((MISC::GET_GAME_TIMER() - iLocal_77) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
							{
								func_863(0, "");
							}
						}
					}
					if (iLocal_78 == 0)
					{
						unk_0x1190AB7024CBD8CB(4294967295, "HACKING_CLICK_BAD", 0, true);
						if (bParam13 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 9))
						{
							func_863(1, "TRYDL");
						}
						else
						{
							func_863(1, "TRYBRUTE");
						}
					}
				}
			}
			if (iVar0 == 83)
			{
				if (bParam8 == 0)
				{
					if (bParam9 == 1)
					{
						iLocal_76 = MISC::GET_GAME_TIMER();
						iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), 3212836864, 3212836864, 3212836864, 3212836864);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_SPEED", SYSTEM::TO_FLOAT(iParam3), 3212836864, 3212836864, 3212836864, 3212836864);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 0f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 1f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 2f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 3f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 4f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 5f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 6f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 7f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_1, 0))
						{
							GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "OPEN_APP", SYSTEM::TO_FLOAT(1), 3212836864, 3212836864, 3212836864, 3212836864);
						}
						else
						{
							GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "RUN_PROGRAM", SYSTEM::TO_FLOAT(4), 3212836864, 3212836864, 3212836864, 3212836864);
							GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "OPEN_APP", SYSTEM::TO_FLOAT(1), 3212836864, 3212836864, 3212836864, 3212836864);
						}
						iLocal_63 = MISC::GET_GAME_TIMER();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[1] = AUDIO::GET_SOUND_ID();
						if (bParam10)
						{
							func_862(iParam0, bParam18);
						}
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_STRING_PARAMS(iLocal_74, "SET_ROULETTE_WORD", &(iParam0->f_E), 0, 0, 0, 0);
						unk_0x1190AB7024CBD8CB(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, true);
						iLocal_75 = 6;
					}
					else if ((!bParam11 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 18)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 9))
					{
						iLocal_76 = MISC::GET_GAME_TIMER();
						iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), 3212836864, 3212836864, 3212836864, 3212836864);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_SPEED", SYSTEM::TO_FLOAT(iParam3), 3212836864, 3212836864, 3212836864, 3212836864);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 0f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 1f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 2f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 3f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 4f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 5f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 6f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_COLUMN_SPEED", 7f, iParam0->f_9, 3212836864, 3212836864, 3212836864);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "OPEN_APP", SYSTEM::TO_FLOAT(1), 3212836864, 3212836864, 3212836864, 3212836864);
						iLocal_63 = MISC::GET_GAME_TIMER();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[1] = AUDIO::GET_SOUND_ID();
						if (bParam10)
						{
							func_862(iParam0, bParam18);
						}
						if (func_412("HACKOBJ5"))
						{
							GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
						}
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_STRING_PARAMS(iLocal_74, "SET_ROULETTE_WORD", &(iParam0->f_E), 0, 0, 0, 0);
						unk_0x1190AB7024CBD8CB(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, true);
						iLocal_75 = 6;
					}
					else
					{
						if (iLocal_78 == 1)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_77) > 500)
							{
								if (((MISC::GET_GAME_TIMER() - iLocal_77) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
								{
									func_863(0, "");
								}
							}
						}
						if (iLocal_78 == 0)
						{
							unk_0x1190AB7024CBD8CB(4294967295, "HACKING_CLICK_BAD", 0, true);
							if (bParam13 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 18))
							{
								func_863(1, "TRYDL");
							}
							else
							{
								func_863(1, "TRYHACK");
							}
						}
					}
				}
				else
				{
					if (iLocal_78 == 1)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_77) > 500)
						{
							if (((MISC::GET_GAME_TIMER() - iLocal_77) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
							{
								func_863(0, "");
							}
						}
					}
					if (iLocal_78 == 0)
					{
						unk_0x1190AB7024CBD8CB(4294967295, "HACKING_CLICK_BAD", 0, true);
						if (bParam13 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 18))
						{
							func_863(1, "TRYDL");
						}
						else
						{
							func_863(1, "TRYHACK");
						}
					}
				}
			}
			if (bParam13)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 18))
				{
					if (iVar0 == 93)
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 18) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 9))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 28))
							{
								MISC::SET_BIT(iParam0, 28);
								iLocal_75 = 8;
							}
						}
						else
						{
							if (iLocal_78 == 1)
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_77) > 500)
								{
									if (((MISC::GET_GAME_TIMER() - iLocal_77) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
									{
										func_863(0, "");
									}
								}
							}
							if (iLocal_78 == 0)
							{
								unk_0x1190AB7024CBD8CB(4294967295, "HACKING_CLICK_BAD", 0, true);
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 18))
								{
									func_863(1, "TRYBRUTE");
								}
								else
								{
									func_863(1, "TRYHACK");
								}
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					func_861("H_USE_PC6", 4294967295);
					iLocal_65 = 1;
				}
				else if (iLocal_66 == 1)
				{
					func_861("H_USE_PC7", 4294967295);
					iLocal_66 = 0;
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_1, 1))
				{
					if (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(iLocal_73))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
						{
							iParam0->f_7 = iParam1;
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_74, "CLOSE_APP");
							if (iLocal_68[1] != 4294967295)
							{
								if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
								{
									AUDIO::STOP_SOUND(iLocal_68[1]);
									iLocal_68[1] = 4294967295;
								}
							}
							if (iLocal_68[0] != 4294967295)
							{
								if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
								{
									AUDIO::STOP_SOUND(iLocal_68[0]);
									iLocal_68[0] = 4294967295;
								}
							}
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_1, 0))
							{
								iLocal_75 = 4;
							}
							else
							{
								MISC::SET_BIT(&(iParam0->f_1), 1);
							}
						}
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(iLocal_73))
				{
					if (PAD::_IS_INPUT_JUST_DISABLED(2))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_SELECT");
							iLocal_73 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_SELECT");
						iLocal_73 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
					}
				}
				if (GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(iLocal_73))
				{
					iVar0 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(iLocal_73);
				}
			}
			if (iVar0 == 85)
			{
				if (iParam0->f_7 > 1)
				{
					iParam0->f_7 = (iParam0->f_7 - 1);
					GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam0->f_7), 3212836864, 3212836864, 3212836864, 3212836864);
					unk_0x1190AB7024CBD8CB(4294967295, "HACKING_CLICK_BAD", 0, true);
				}
				else
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
					{
						AUDIO::STOP_SOUND(iLocal_68[0]);
					}
					MISC::SET_BIT(iParam0, 25);
					iLocal_64 = 0;
					iLocal_66 = 1;
					unk_0x1190AB7024CBD8CB(4294967295, "HACKING_FAILURE", 0, true);
					GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(iLocal_74, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 90)
			{
				iParam0->f_7 = iParam1;
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), 3212836864, 3212836864, 3212836864, 3212836864);
				iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
				iLocal_63 = MISC::GET_GAME_TIMER();
				iLocal_68[0] = AUDIO::GET_SOUND_ID();
				unk_0x1190AB7024CBD8CB(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", 0, true);
				MISC::SET_BIT(iParam0, 25);
				iLocal_64 = 1;
			}
			if (iVar0 == 91)
			{
				iParam0->f_7 = iParam1;
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_74, "CLOSE_APP");
				if (iLocal_68[0] != 4294967295)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
					{
						AUDIO::STOP_SOUND(iLocal_68[0]);
						iLocal_68[0] = 4294967295;
					}
				}
				MISC::SET_BIT(iParam0, 25);
				iLocal_75 = 4;
			}
			if (iLocal_64 == 1)
			{
				iVar1 = (60000 - (MISC::GET_GAME_TIMER() - iLocal_63));
				if (iVar1 < 1)
				{
					MISC::SET_BIT(iParam0, 25);
					iParam0->f_7 = iParam1;
					GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), 3212836864, 3212836864, 3212836864, 3212836864);
					iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
					iLocal_63 = MISC::GET_GAME_TIMER();
					iLocal_64 = 0;
					iLocal_66 = 1;
					unk_0x1190AB7024CBD8CB(4294967295, "HACKING_FAILURE", 0, true);
					if (iLocal_68[0] != 4294967295)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
						{
							AUDIO::STOP_SOUND(iLocal_68[0]);
							iLocal_68[0] = 4294967295;
						}
					}
					GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(iLocal_74, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 84)
			{
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(iLocal_74, "SET_IP_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINIP", 0, 0, 0, 0);
				iLocal_76 = MISC::GET_GAME_TIMER();
				MISC::SET_BIT(iParam0, 18);
				iLocal_64 = 0;
				iLocal_65 = 0;
				unk_0x1190AB7024CBD8CB(4294967295, "HACKING_CLICK_GOOD", 0, true);
				if (iLocal_68[0] != 4294967295)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
					{
						AUDIO::STOP_SOUND(iLocal_68[0]);
						iLocal_68[0] = 4294967295;
					}
				}
				iLocal_75 = 7;
			}
			break;
		
		case 6:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					func_861("H_USE_PC8", 4294967295);
					iLocal_65 = 1;
				}
				else if (iLocal_66 == 1)
				{
					func_861("H_USE_PC9", 4294967295);
					iLocal_66 = 0;
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(iLocal_73))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_1, 1))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
						{
							iParam0->f_7 = iParam1;
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_74, "CLOSE_APP");
							if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
							{
								AUDIO::STOP_SOUND(iLocal_68[0]);
							}
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_1, 0))
							{
								iLocal_75 = 4;
							}
							else
							{
								MISC::SET_BIT(&(iParam0->f_1), 1);
							}
						}
					}
				}
				if (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(iLocal_73))
				{
					if (PAD::_IS_INPUT_JUST_DISABLED(2))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_SELECT");
							iLocal_73 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_INPUT_EVENT_SELECT");
						iLocal_73 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
					}
				}
				if (GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(iLocal_73))
				{
					iVar0 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(iLocal_73);
				}
			}
			if (iVar0 == 86)
			{
				unk_0x1190AB7024CBD8CB(4294967295, "HACKING_CLICK_GOOD", 0, true);
			}
			if (iVar0 == 92)
			{
				unk_0x1190AB7024CBD8CB(4294967295, "HACKING_CLICK", 0, true);
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 23))
			{
				if (func_866(&(iParam0->f_A), 500))
				{
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_74, "RESET_ROULETTE");
					GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 23);
				}
			}
			if (iVar0 == 87)
			{
				if (iParam0->f_7 > 1)
				{
					unk_0x1190AB7024CBD8CB(4294967295, "HACKING_CLICK_BAD", 0, true);
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_74, "STOP_ROULETTE");
					iParam0->f_A = MISC::GET_GAME_TIMER();
					MISC::SET_BIT(iParam0, 23);
					MISC::SET_BIT(iParam0, 31);
					if (func_236() == 0)
					{
						iParam0->f_7 = (iParam0->f_7 - 1);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam0->f_7), 3212836864, 3212836864, 3212836864, 3212836864);
					}
				}
				else
				{
					MISC::SET_BIT(iParam0, 25);
					MISC::SET_BIT(iParam0, 31);
					unk_0x1190AB7024CBD8CB(4294967295, "HACKING_FAILURE", 0, true);
					iParam0->f_7 = iParam1;
					GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), 3212836864, 3212836864, 3212836864, 3212836864);
					iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
					iLocal_63 = MISC::GET_GAME_TIMER();
					if (iLocal_68[1] != 4294967295)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
						{
							AUDIO::STOP_SOUND(iLocal_68[1]);
							iLocal_68[1] = 4294967295;
						}
					}
					if (func_236() == 0)
					{
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(iLocal_74, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
					}
				}
			}
			if (iLocal_64 == 1)
			{
				iVar1 = (60000 - (MISC::GET_GAME_TIMER() - iLocal_63));
				if (iVar1 < 1)
				{
					iParam0->f_7 = iParam1;
					MISC::SET_BIT(iParam0, 25);
					GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), 3212836864, 3212836864, 3212836864, 3212836864);
					iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
					iLocal_63 = MISC::GET_GAME_TIMER();
					iLocal_64 = 0;
					iLocal_66 = 1;
					unk_0x1190AB7024CBD8CB(4294967295, "HACKING_FAILURE", 0, true);
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
					if (iLocal_68[1] != 4294967295)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
						{
							AUDIO::STOP_SOUND(iLocal_68[1]);
							iLocal_68[1] = 4294967295;
						}
					}
					GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(iLocal_74, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 88)
			{
				iParam0->f_7 = iParam1;
				MISC::SET_BIT(iParam0, 25);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), 3212836864, 3212836864, 3212836864, 3212836864);
				iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
				iLocal_63 = MISC::GET_GAME_TIMER();
				iLocal_68[1] = AUDIO::GET_SOUND_ID();
				unk_0x1190AB7024CBD8CB(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, true);
				iLocal_64 = 1;
			}
			if (iVar0 == 89)
			{
				iParam0->f_7 = iParam1;
				MISC::SET_BIT(iParam0, 25);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_74, "CLOSE_APP");
				if (iLocal_68[1] != 4294967295)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
					{
						AUDIO::STOP_SOUND(iLocal_68[1]);
						iLocal_68[1] = 4294967295;
					}
				}
				iLocal_75 = 4;
			}
			if (iVar0 == 86)
			{
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(iLocal_74, "SET_ROULETTE_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINBRUTE", 0, 0, 0, 0);
				iLocal_76 = MISC::GET_GAME_TIMER();
				MISC::SET_BIT(iParam0, 9);
				if (bParam19)
				{
					unk_0x1190AB7024CBD8CB(4294967295, "Hack_Success", "DLC_GR_Steal_Railguns_Sounds", true);
				}
				else
				{
					unk_0x1190AB7024CBD8CB(4294967295, "HACKING_SUCCESS", 0, true);
				}
				if (iLocal_68[1] != 4294967295)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
					{
						AUDIO::STOP_SOUND(iLocal_68[1]);
						iLocal_68[1] = 4294967295;
					}
				}
				iLocal_75 = 7;
			}
			break;
		
		case 7:
			if (iParam7 == 1)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 9) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 18))
				{
					if (iLocal_91 == 0)
					{
						if (!func_412("HACKOBJ7"))
						{
							func_864("HACKOBJ7");
							iLocal_91 = 1;
						}
					}
				}
				if (((func_412("H_USE_PC6") || func_412("H_USE_PC7")) || func_412("H_USE_PC8")) || func_412("H_USE_PC9"))
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				}
			}
			if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 9) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 18)) && (!bParam13 || (bParam13 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 28))))
			{
				if (func_412("HACKOBJ7"))
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				}
				if (!iLocal_92)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(4294967295, "unlocked_bleep", AUDIO::_0x0626A247D2405330(), "HACKING_DOOR_UNLOCK_SOUNDS", 0, 0);
					iLocal_92 = 1;
				}
				if (func_866(&iLocal_76, 3000))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 0);
					MISC::SET_BIT(iParam0, 12);
					GRAPHICS::_0x9B079E5221D984D3(0);
				}
			}
			else
			{
				if (((bParam13 && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 27)) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 9)) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 18))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "OPEN_DOWNLOAD");
					GRAPHICS::SET_SEETHROUGH(true);
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					MISC::SET_BIT(iParam0, 27);
				}
				if (func_866(&iLocal_76, 2000))
				{
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_74, "CLOSE_APP");
					iLocal_75 = 4;
				}
			}
			break;
		
		case 8:
			func_855(iParam0);
			break;
	}
}

void func_855(int iParam0)//Position - 0x2558D
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0->f_17 > 0)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 22))
		{
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("hackingNG"))
			{
				if (!HUD::IS_PAUSE_MENU_ACTIVE())
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHMain", Local_79, Local_79.f_1, 0.731f, 1.306f, 0f, 255, 255, 255, 255, 0);
				}
			}
		}
	}
	if (((((((Local_82[0 /*4*/] == 1 && Local_82[1 /*4*/] == 1) && Local_82[2 /*4*/] == 1) && Local_82[3 /*4*/] == 1) && Local_82[4 /*4*/] == 1) && Local_82[5 /*4*/] == 1) && Local_82[6 /*4*/] == 1) && Local_82[7 /*4*/] == 1)
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Hack_Success", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
		if (func_412("H1_HNG"))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
		if (MISC::IS_PC_VERSION())
		{
			if (func_412("H1_HNG_KM"))
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			}
		}
		MISC::SET_BIT(iParam0, 26);
	}
	else if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (!func_412("H1_HNG_KM"))
		{
			func_864("H1_HNG_KM");
		}
	}
	else if (!func_412("H1_HNG"))
	{
		func_864("H1_HNG");
	}
	switch (iParam0->f_17)
	{
		case 0:
			unk_0xE2BBD32891C18569("hackingNG", false);
			GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 22);
			func_860();
			iLocal_88 = MISC::GET_GAME_TIMER();
			Local_81 = 0;
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_90, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_90, 1);
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_90, 2);
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_90, 3);
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_90, 4);
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_90, 5);
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_90, 6);
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_90, 7);
			iParam0->f_17++;
			break;
		
		case 1:
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("hackingNG"))
			{
				MISC::SET_BIT(iParam0, 22);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_CURSOR_VISIBILITY");
				GRAPHICS::SET_SEETHROUGH(false);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				iParam0->f_17++;
			}
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Local_82[iVar0 /*4*/].f_3 == 1)
				{
					if (Local_82[iVar0 /*4*/].f_2 < 1f)
					{
						Local_82[iVar0 /*4*/].f_2 = (Local_82[iVar0 /*4*/].f_2 + ((Local_82[iVar0 /*4*/].f_1 * SYSTEM::TIMESTEP()) * fLocal_87));
					}
					else
					{
						Local_82[iVar0 /*4*/].f_3 = 0;
					}
				}
				else if (Local_82[iVar0 /*4*/].f_2 > 0f)
				{
					Local_82[iVar0 /*4*/].f_2 = (Local_82[iVar0 /*4*/].f_2 - ((Local_82[iVar0 /*4*/].f_1 * SYSTEM::TIMESTEP()) * fLocal_87));
				}
				else
				{
					Local_82[iVar0 /*4*/].f_3 = 1;
				}
				if (Local_82[iVar0 /*4*/] == 0)
				{
					Local_80[iVar0 /*2*/].f_1 = func_858(0.744f, 0.4f, Local_82[iVar0 /*4*/].f_2);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Local_82[iVar0 /*4*/] == 0)
				{
					if (Local_81 == iVar0)
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_90, iVar0))
						{
							iLocal_89[iVar0] = AUDIO::GET_SOUND_ID();
							unk_0x1190AB7024CBD8CB(iLocal_89[iVar0], "Pin_Movement", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
							MISC::SET_BIT(&iLocal_90, iVar0);
						}
						else
						{
							if (Local_82[iVar0 /*4*/].f_2 >= 0.5f)
							{
								fLocal_83 = (2f * (1f - Local_82[iVar0 /*4*/].f_2));
							}
							else
							{
								fLocal_83 = (2f * Local_82[iVar0 /*4*/].f_2);
							}
							AUDIO::SET_VARIABLE_ON_SOUND(iLocal_89[iVar0], "PinMovementY", fLocal_83);
						}
					}
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_90, iVar0))
				{
					AUDIO::STOP_SOUND(iLocal_89[iVar0]);
					AUDIO::RELEASE_SOUND_ID(iLocal_89[iVar0]);
					GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_90, iVar0);
					iLocal_89[iVar0] = 4294967295;
				}
				iVar0++;
			}
			if (func_857(Local_81))
			{
				unk_0x1190AB7024CBD8CB(4294967295, "Pin_Centred", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				if (func_866(&iLocal_88, 300))
				{
					if (func_856(Local_81))
					{
						Local_82[Local_81 /*4*/] = 1;
						Local_80[Local_81 /*2*/].f_1 = 0.572f;
						unk_0x1190AB7024CBD8CB(4294967295, "Pin_Good", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
						if (Local_81 != 7)
						{
							Local_81++;
						}
					}
					else
					{
						if (Local_81 != 0)
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_90, Local_81))
							{
								AUDIO::STOP_SOUND(iLocal_89[Local_81]);
								AUDIO::RELEASE_SOUND_ID(iLocal_89[Local_81]);
								GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_90, Local_81);
								iLocal_89[Local_81] = 4294967295;
							}
							Local_82[(Local_81 - 1) /*4*/] = 0;
							Local_81 = (Local_81 - 1);
						}
						if (!HUD::IS_PAUSE_MENU_ACTIVE())
						{
							GRAPHICS::DRAW_RECT(0.5f, 0.5f, 4f, 4f, 255, 0, 0, 100, 0);
						}
						iLocal_88 = MISC::GET_GAME_TIMER();
						PAD::SET_PAD_SHAKE(0, 100, 100);
						unk_0x1190AB7024CBD8CB(4294967295, "Pin_Bad", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
						Local_81.f_1 = 1;
					}
				}
				else
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						GRAPHICS::DRAW_SPRITE("hackingNG", "DHMain", Local_79, Local_79.f_1, 0.731f, 1.306f, 0f, 255, 0, 0, 100, 0);
					}
					iLocal_88 = MISC::GET_GAME_TIMER();
					PAD::SET_PAD_SHAKE(0, 100, 100);
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (Local_81 == 0)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_80[0 /*2*/], Local_80[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_80[0 /*2*/], Local_80[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_81 == 1)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_80[1 /*2*/], Local_80[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_80[1 /*2*/], Local_80[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_81 == 2)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_80[2 /*2*/], Local_80[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_80[2 /*2*/], Local_80[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_81 == 3)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_80[3 /*2*/], Local_80[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_80[3 /*2*/], Local_80[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_81 == 4)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_80[4 /*2*/], Local_80[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_80[4 /*2*/], Local_80[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_81 == 5)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_80[5 /*2*/], Local_80[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_80[5 /*2*/], Local_80[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_81 == 6)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_80[6 /*2*/], Local_80[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_80[6 /*2*/], Local_80[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_81 == 7)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_80[7 /*2*/], Local_80[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_80[7 /*2*/], Local_80[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_1, 0))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_1, 1))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
						{
							MISC::SET_BIT(&(iParam0->f_1), 1);
							GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
						}
					}
				}
			}
			break;
	}
}

int func_856(int iParam0)//Position - 0x25D41
{
	if (Local_80[iParam0 /*2*/].f_1 >= fLocal_85 && Local_80[iParam0 /*2*/].f_1 <= fLocal_84)
	{
		return 1;
	}
	return 0;
}

int func_857(int iParam0)//Position - 0x25D6C
{
	if (Local_80[iParam0 /*2*/].f_1 == 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_858(float fParam0, float fParam1, float fParam2)//Position - 0x25D8A
{
	float fVar0;
	
	fVar0 = ((1f - SYSTEM::COS(func_859((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_859(float fParam0)//Position - 0x25DB9
{
	return (fParam0 * 57.29578f);
}

void func_860()//Position - 0x25DC9
{
	fLocal_84 = 0.6f;
	fLocal_85 = 0.53f;
	Local_82[0 /*4*/].f_1 = (0.02f * fLocal_86);
	Local_82[1 /*4*/].f_1 = (0.025f * fLocal_86);
	Local_82[2 /*4*/].f_1 = (0.03f * fLocal_86);
	Local_82[3 /*4*/].f_1 = (0.035f * fLocal_86);
	Local_82[4 /*4*/].f_1 = (0.04f * fLocal_86);
	Local_82[5 /*4*/].f_1 = (0.045f * fLocal_86);
	Local_82[6 /*4*/].f_1 = (0.048f * fLocal_86);
	Local_82[7 /*4*/].f_1 = (0.05f * fLocal_86);
	Local_82[0 /*4*/] = 0;
	Local_82[1 /*4*/] = 0;
	Local_82[2 /*4*/] = 0;
	Local_82[3 /*4*/] = 0;
	Local_82[4 /*4*/] = 0;
	Local_82[5 /*4*/] = 0;
	Local_82[6 /*4*/] = 0;
	Local_82[7 /*4*/] = 0;
	Local_79 = 0.5f;
	Local_79.f_1 = 0.5f;
	Local_80[0 /*2*/] = 0.35f;
	Local_80[0 /*2*/].f_1 = 0.4f;
	Local_80[1 /*2*/] = 0.39f;
	Local_80[1 /*2*/].f_1 = 0.4f;
	Local_80[2 /*2*/] = 0.43f;
	Local_80[2 /*2*/].f_1 = 0.4f;
	Local_80[3 /*2*/] = 0.47f;
	Local_80[3 /*2*/].f_1 = 0.4f;
	Local_80[4 /*2*/] = 0.51f;
	Local_80[4 /*2*/].f_1 = 0.74f;
	Local_80[5 /*2*/] = 0.55f;
	Local_80[5 /*2*/].f_1 = 0.74f;
	Local_80[6 /*2*/] = 0.59f;
	Local_80[6 /*2*/].f_1 = 0.74f;
	Local_80[7 /*2*/] = 0.63f;
	Local_80[7 /*2*/].f_1 = 0.74f;
}

void func_861(char* sParam0, int iParam1)//Position - 0x25F47
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_862(int iParam0, bool bParam1)//Position - 0x25F5E
{
	int iVar0;
	
	if (bParam1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 15);
		if (iVar0 == 0)
		{
			StringCopy(&(iParam0->f_E), "GR_PWD_RA", 24);
		}
		else if (iVar0 == 1)
		{
			StringCopy(&(iParam0->f_E), "GR_PWD_PA", 24);
		}
		else if (iVar0 == 2)
		{
			StringCopy(&(iParam0->f_E), "GR_PWD_PE", 24);
		}
		else if (iVar0 == 3)
		{
			StringCopy(&(iParam0->f_E), "GR_PWD_GE", 24);
		}
		else if (iVar0 == 4)
		{
			StringCopy(&(iParam0->f_E), "GR_PWD_CH", 24);
		}
		else if (iVar0 == 5)
		{
			StringCopy(&(iParam0->f_E), "GR_PWD_FI", 24);
		}
		else if (iVar0 == 6)
		{
			StringCopy(&(iParam0->f_E), "GR_PWD_PR", 24);
		}
		else if (iVar0 == 7)
		{
			StringCopy(&(iParam0->f_E), "GR_PWD_UN", 24);
		}
		else if (iVar0 == 8)
		{
			StringCopy(&(iParam0->f_E), "GR_PWD_DE", 24);
		}
		else if (iVar0 == 9)
		{
			StringCopy(&(iParam0->f_E), "GR_PWD_FO", 24);
		}
		else if (iVar0 == 10)
		{
			StringCopy(&(iParam0->f_E), "GR_PWD_AR", 24);
		}
		else if (iVar0 == 11)
		{
			StringCopy(&(iParam0->f_E), "GR_PWD_TO", 24);
		}
		else if (iVar0 == 12)
		{
			StringCopy(&(iParam0->f_E), "GR_PWD_IN", 24);
		}
		else if (iVar0 == 13)
		{
			StringCopy(&(iParam0->f_E), "GR_PWD_PRI", 24);
		}
		else if (iVar0 == 14)
		{
			StringCopy(&(iParam0->f_E), "GR_PWD_LA", 24);
		}
		else
		{
			StringCopy(&(iParam0->f_E), "GR_PWD_PA", 24);
		}
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		if (iVar0 == 0)
		{
			StringCopy(&(iParam0->f_E), "PASSWORD", 24);
		}
		else if (iVar0 == 1)
		{
			StringCopy(&(iParam0->f_E), "PETSNAME", 24);
		}
		else if (iVar0 == 2)
		{
			StringCopy(&(iParam0->f_E), "DYNAMITE", 24);
		}
		else if (iVar0 == 3)
		{
			StringCopy(&(iParam0->f_E), "BACKDOOR", 24);
		}
		else if (iVar0 == 4)
		{
			StringCopy(&(iParam0->f_E), "MORPHEUS", 24);
		}
		else if (iVar0 == 5)
		{
			StringCopy(&(iParam0->f_E), "CREAMPIE", 24);
		}
		else if (iVar0 == 6)
		{
			StringCopy(&(iParam0->f_E), "WORMSIGN", 24);
		}
		else if (iVar0 == 7)
		{
			StringCopy(&(iParam0->f_E), "UNLOCKED", 24);
		}
		else if (iVar0 == 8)
		{
			StringCopy(&(iParam0->f_E), "BLUEBOOK", 24);
		}
		else if (iVar0 == 9)
		{
			StringCopy(&(iParam0->f_E), "DECIPHER", 24);
		}
		else if (iVar0 == 10)
		{
			StringCopy(&(iParam0->f_E), "JUNKYARD", 24);
		}
		else
		{
			StringCopy(&(iParam0->f_E), "PASSWORD", 24);
		}
	}
}

void func_863(bool bParam0, char* sParam1)//Position - 0x2618C
{
	if (bParam0)
	{
		GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(iLocal_74, "OPEN_ERROR_POPUP", SYSTEM::TO_FLOAT(1), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_77 = MISC::GET_GAME_TIMER();
		iLocal_78 = 1;
	}
	else
	{
		GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(iLocal_74, "OPEN_ERROR_POPUP", SYSTEM::TO_FLOAT(0), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_78 = 0;
	}
}

void func_864(char* sParam0)//Position - 0x261DA
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, 4294967295);
}

void func_865(int iParam0, int iParam1)//Position - 0x261F0
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 29))
	{
		GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(iLocal_74, "SET_BACKGROUND", SYSTEM::TO_FLOAT(iParam1), 3212836864, 3212836864, 3212836864, 3212836864);
		if (GRAPHICS::GET_IS_WIDESCREEN())
		{
			GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(iLocal_74, "ADD_PROGRAM", SYSTEM::TO_FLOAT(7), SYSTEM::TO_FLOAT(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		else
		{
			GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(iLocal_74, "ADD_PROGRAM", SYSTEM::TO_FLOAT(8), SYSTEM::TO_FLOAT(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SET_LABELS");
		func_271("H_ICON_1");
		if (iParam1 == 0)
		{
			func_271("H_ICON_2a");
		}
		else
		{
			func_271("H_ICON_2");
		}
		func_271("H_ICON_3");
		func_271("H_ICON_4");
		func_271("H_ICON_5");
		func_271("H_ICON_6");
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		MISC::SET_BIT(iParam0, 29);
	}
}

int func_866(int iParam0, int iParam1)//Position - 0x262CA
{
	int iVar0;
	
	iVar0 = MISC::GET_GAME_TIMER();
	if ((iVar0 - *iParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_867(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x262E8
{
	*uParam1 = ((iParam0 % 3600000) / 60000);
	*uParam2 = (((iParam0 % 3600000) % 60000) / 1000);
	*uParam3 = (((iParam0 % 3600000) % 60000) % 1000);
}

void func_868()//Position - 0x26325
{
	if (iLocal_75 < 5)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
		{
			unk_0x1190AB7024CBD8CB(4294967295, "HACKING_CLICK", 0, true);
		}
	}
}

void func_869(int iParam0)//Position - 0x26355
{
	WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(AUDIO::_0x0626A247D2405330(), 1, 1, 1, 0);
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		MISC::SET_MINIGAME_IN_PROGRESS(0);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
	CAM::DESTROY_CAM(iLocal_72, 0);
	func_844(0);
	func_843();
	MISC::SET_BIT(iParam0, 1);
	GRAPHICS::_0x9B079E5221D984D3(0);
	func_842(iParam0, 1, 0, 0);
	func_841(0, 1, 1, 0);
}

void func_870(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x263B2
{
	*uParam0 = SYSTEM::FLOOR((PAD::_0x5B84D09CEC5209C5(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::_0x5B84D09CEC5209C5(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::_0x5B84D09CEC5209C5(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::_0x5B84D09CEC5209C5(2, 221) * 127f));
	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((PAD::_0x4F8A26A890FD62FB(2, 218) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((PAD::_0x4F8A26A890FD62FB(2, 219) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((PAD::_0x4F8A26A890FD62FB(2, 220) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((PAD::_0x4F8A26A890FD62FB(2, 221) * 127f));
		}
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * 4294967295);
			}
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				*uParam3 = (*uParam3 * 4294967295);
			}
		}
	}
}

void func_871(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x264B6
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

void func_872(int iParam0)//Position - 0x2658B
{
	if (func_848())
	{
		return;
	}
	if (!Global_38B1.f_1 == 1)
	{
		if (func_849(0))
		{
			func_845(iParam0);
		}
		MISC::SET_BIT(&Global_950, 2);
	}
}

void func_873(int iParam0, int iParam1)//Position - 0x265BE
{
	MISC::SET_BIT(&(Global_14E0B5.f_417), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > 4294967295)
			{
				Global_14E0B5.f_AA[iParam1] = 1;
			}
			break;
	}
}

void func_874(int iParam0)//Position - 0x265F4
{
	Global_14E696.f_437 = iParam0;
}

void func_875(int iParam0, bool bParam1, int iParam2)//Position - 0x26605
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
			SCRIPT::SET_NO_LOADING_SCREEN(false);
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
		if (!func_381())
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
				else if (bVar13 || (!func_146(CAM::_0xDC9DA9E8789F5246(), 0) && !func_92()))
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
				if (!func_879(iVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar25))
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
					ENTITY::_SET_ENTITY_SOMETHING(iVar25, true);
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
					func_878();
					func_877();
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
				if (!func_879(iVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar25))
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
							ENTITY::_SET_ENTITY_SOMETHING(iVar25, true);
						}
					}
					if (func_876(Global_440000.f_2559E))
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

bool func_876(int iParam0)//Position - 0x26A1E
{
	return iParam0 == 17;
}

void func_877()//Position - 0x26A2B
{
	vector3 vVar0;
	
	Global_252F9E.f_4CC = 0;
	Global_252F9E.f_4CD = 0;
	Global_252F9E.f_4CE = { 9999.9f, 9999.9f, 9999.9f };
	Global_252F9E.f_4D3 = 4294967295;
	Global_252F9E.f_4D4 = 0;
	Global_24B2CE.f_A72 = { vVar0 };
}

void func_878()//Position - 0x26A78
{
	Global_24B2CE.f_2B3 = 0;
	Global_24B2CE.f_A9D = 0;
	Global_24B2CE.f_1FD = 0;
	Global_24B2CE.f_255 = 0;
	Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 0;
	Global_24B2CE.f_A70 = 0;
}

int func_879(int iParam0)//Position - 0x26AB6
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

int func_880(bool bParam0)//Position - 0x26AE7
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_74) && (!bParam0 || (((((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_0") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_1")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_2")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_3")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_4")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_5"))))
	{
		return 1;
	}
	return 0;
}

void func_881(bool bParam0)//Position - 0x26B54
{
	if (bParam0)
	{
		unk_0xE2BBD32891C18569("HACKING_PC_desktop_0", false);
		unk_0xE2BBD32891C18569("HACKING_PC_desktop_1", false);
		unk_0xE2BBD32891C18569("HACKING_PC_desktop_2", false);
		unk_0xE2BBD32891C18569("HACKING_PC_desktop_3", false);
		unk_0xE2BBD32891C18569("HACKING_PC_desktop_4", false);
		unk_0xE2BBD32891C18569("HACKING_PC_desktop_5", false);
	}
	iLocal_74 = GRAPHICS::_REQUEST_SCALEFORM_MOVIE_INTERACTIVE("Hacking_PC");
}

void func_882(int iParam0)//Position - 0x26BA1
{
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(AUDIO::_0x0626A247D2405330(), 1, 1, 1, 0);
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		MISC::SET_MINIGAME_IN_PROGRESS(0);
	}
	unk_0x6AEB48E3B648804A(0);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
	CAM::DESTROY_CAM(iLocal_72, 0);
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 0);
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 12);
	func_844(0);
	func_843();
	GRAPHICS::_0x9B079E5221D984D3(0);
}

void func_883(int iParam0)//Position - 0x26C05
{
	func_842(iParam0, 1, 1, 0);
	*iParam0 = 0;
	iParam0->f_17 = 0;
	Local_81 = 0;
	Local_81.f_1 = 0;
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 26);
	Local_82[0 /*4*/] = 0;
	Local_82[1 /*4*/] = 0;
	Local_82[2 /*4*/] = 0;
	Local_82[3 /*4*/] = 0;
	Local_82[4 /*4*/] = 0;
	Local_82[5 /*4*/] = 0;
	Local_82[6 /*4*/] = 0;
	Local_82[7 /*4*/] = 0;
}

void func_884(bool bParam0)//Position - 0x26C5F
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
}

void func_885()//Position - 0x26D44
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_156, 0))
	{
		return;
	}
	if (!func_444())
	{
		if (func_412("GB_SGHT_HLP1"))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
		if (func_412("GB_SGHT_HLP2"))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
		if (func_405())
		{
			sVar0 = func_517(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22));
			iVar1 = func_813(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22));
			if (func_292(CAM::_0xDC9DA9E8789F5246(), 1))
			{
				if (func_894("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				}
			}
			else if (func_894("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			}
		}
		if (func_412("GB_SGHT_RVL"))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
		return;
	}
	iVar2 = func_396(CAM::_0xDC9DA9E8789F5246());
	if (iVar2 < 2)
	{
		if (func_412("GB_SGHT_HLP1"))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
		if (func_412("GB_SGHT_HLP2"))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
		if (func_405())
		{
			sVar0 = func_517(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22));
			iVar1 = func_813(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22));
			if (func_292(CAM::_0xDC9DA9E8789F5246(), 1))
			{
				if (func_894("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				}
			}
			else if (func_894("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			}
		}
		if (func_412("GB_SGHT_RVL"))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
		return;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 2))
	{
		if (!func_893(86))
		{
			if (iLocal_428 == 4294967295)
			{
				if (func_887(0, 1, 1, 1))
				{
					if (NETSHOP::_NETWORK_SHOP_BASKET_START() == Local_143.f_21)
					{
						func_420("GB_SGHT_HLP1", 4294967295);
						func_419(1);
						MISC::SET_BIT(&iLocal_145, 2);
					}
					else if (func_974() == Local_143.f_21)
					{
						func_420("GB_SGHT_HLP2", 4294967295);
						func_419(1);
						MISC::SET_BIT(&iLocal_145, 2);
					}
					else if (func_405())
					{
						sVar0 = func_517(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22));
						iVar1 = func_813(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22));
						if (func_292(CAM::_0xDC9DA9E8789F5246(), 1))
						{
							func_886("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1, 4294967295);
							func_419(1);
						}
						else
						{
							func_886("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1, 4294967295);
							func_419(1);
						}
						MISC::SET_BIT(&iLocal_145, 2);
					}
				}
			}
			else
			{
				MISC::SET_BIT(&iLocal_145, 2);
			}
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 2))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 7))
		{
			if (iLocal_428 == 4294967295)
			{
				if (NETSHOP::_NETWORK_SHOP_BASKET_START() == Local_143.f_21)
				{
					if (func_887(0, 1, 1, 1))
					{
						func_420("GB_SGHT_APPH", 4294967295);
						func_419(1);
						MISC::SET_BIT(&iLocal_145, 7);
					}
				}
				else
				{
					MISC::SET_BIT(&iLocal_145, 7);
				}
			}
			else
			{
				MISC::SET_BIT(&iLocal_145, 7);
			}
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 8))
	{
		if (func_973())
		{
			if (func_957())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_143.f_3))
				{
					if (func_887(0, 1, 1, 1))
					{
						func_420("GB_SGHT_PKGH", 4294967295);
						func_419(1);
						MISC::SET_BIT(&iLocal_145, 8);
					}
				}
			}
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 12))
	{
		if (func_973())
		{
			if (Local_143.f_5 > 0 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 6))
			{
				if (func_887(0, 1, 1, 1))
				{
					func_420("GB_SGHT_RVL", 4294967295);
					func_419(1);
					MISC::SET_BIT(&iLocal_145, 12);
				}
			}
		}
	}
}

void func_886(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2708B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	if (!iParam4 == 0)
	{
		HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam5);
}

int func_887(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x270CA
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_892())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_386())
	{
		return 0;
	}
	if (func_480())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_41(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_891(CAM::_0xDC9DA9E8789F5246()))
		{
			return 0;
		}
	}
	if (func_890())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
		{
			return 0;
		}
	}
	if (Global_180517)
	{
		return 0;
	}
	if (func_889())
	{
		return 0;
	}
	if (func_888())
	{
		return 0;
	}
	if (func_379())
	{
		return 0;
	}
	if (Global_10B8E)
	{
		return 0;
	}
	if (Global_26AAFF)
	{
		return 0;
	}
	return 1;
}

bool func_888()//Position - 0x271B7
{
	return Global_255C02.f_244;
}

bool func_889()//Position - 0x271C6
{
	return Global_255C02.f_2DD;
}

bool func_890()//Position - 0x271D5
{
	return Global_252F9E.f_BD4.f_242;
}

int func_891(int iParam0)//Position - 0x271E7
{
	if (Global_24FBF9[iParam0 /*413*/].f_D0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_892()//Position - 0x27203
{
	if (Global_3DCE != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_893(int iParam0)//Position - 0x27225
{
	return Global_252F9E.f_A90[0 /*80*/].f_1 == iParam0;
}

int func_894(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2723C
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	if (!iParam2 == 0)
	{
		HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	if (!iParam4 == 0)
	{
		HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam3);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_895()//Position - 0x27277
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_156, 0))
	{
		return;
	}
	if (!func_444())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 5))
		{
			if (Local_143.f_22 != 4294967295)
			{
				iVar0 = func_296(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22));
				if (iVar0 > 4294967295)
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22)))
					{
						iVar1 = func_294(iVar0);
						iVar2 = func_836(iVar1);
						func_435(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), 432, 0, 0);
						func_434(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), iVar2, 0, 0);
						func_433(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), 0, 0, 0);
						func_432(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), 0);
						func_429(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), Global_40001.f_2FD2, 0, 0);
						GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_145, 5);
					}
					else
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_145, 5);
					}
				}
			}
			func_437();
		}
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_143.f_3))
	{
		if (NETSHOP::_NETWORK_SHOP_BASKET_START() == Local_143.f_21)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 3))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_156, 0))
				{
					if (Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_5 < 3)
					{
						if (func_396(CAM::_0xDC9DA9E8789F5246()) == 3)
						{
							if (!func_905("GB_SGHT_HCK"))
							{
								func_902("GB_SGHT_HCK", 0);
							}
						}
						else if (func_905("GB_SGHT_HCK"))
						{
							func_437();
						}
					}
					else
					{
						func_437();
					}
				}
			}
		}
		else if (func_974() == Local_143.f_21)
		{
			if (Local_143.f_22 != 4294967295)
			{
				if (func_396(CAM::_0xDC9DA9E8789F5246()) == 3)
				{
					if (!func_905("GB_SGHT_PROT"))
					{
						iVar0 = func_296(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22));
						if (iVar0 > 4294967295)
						{
							iVar1 = func_294(iVar0);
							func_896("GB_SGHT_PROT", PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
				}
				else if (func_905("GB_SGHT_PROT"))
				{
					func_437();
				}
			}
		}
		else if (func_405())
		{
			if (Local_143.f_22 != 4294967295)
			{
				if (func_396(CAM::_0xDC9DA9E8789F5246()) == 3)
				{
					if (Local_143.f_22 != 4294967295)
					{
						iVar0 = func_296(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22));
						if (iVar0 > 4294967295)
						{
							iVar1 = func_294(iVar0);
							if (func_292(CAM::_0xDC9DA9E8789F5246(), 1))
							{
								if (!func_905("GB_SGHT_STOP"))
								{
									func_896("GB_SGHT_STOP", PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), "GB_SGHT_BOSS", 1, iVar1, 0);
								}
							}
							else if (!func_905("GB_SGHT_STOP"))
							{
								func_896("GB_SGHT_STOP", PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), "GB_SGHT_BOSS", 1, iVar1, 0);
							}
						}
					}
				}
				else
				{
					if (func_905("GB_SGHT_STOP"))
					{
						func_437();
					}
					if (func_905("GB_SGHT_STOP2"))
					{
						func_437();
					}
				}
				if (func_396(CAM::_0xDC9DA9E8789F5246()) >= 2)
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 5))
					{
						if (Local_143.f_22 != 4294967295)
						{
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22)))
							{
								if (func_1072(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), 1, 1))
								{
									iVar0 = func_296(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22));
									if (iVar0 > 4294967295)
									{
										iVar1 = func_294(iVar0);
										iVar2 = func_836(iVar1);
										func_435(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), 432, 1, 0);
										func_434(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), iVar2, 1, 0);
										func_433(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), 1, 1, 0);
										func_432(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), 1);
										func_429(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), Global_40001.f_2FD2, 1, 0);
										MISC::SET_BIT(&iLocal_145, 5);
									}
								}
							}
						}
					}
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 5))
				{
					if (Local_143.f_22 != 4294967295)
					{
						iVar0 = func_296(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22));
						if (iVar0 > 4294967295)
						{
							iVar1 = func_294(iVar0);
							iVar2 = func_836(iVar1);
							func_435(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), 432, 0, 0);
							func_434(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), iVar2, 0, 0);
							func_433(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), 0, 0, 0);
							func_432(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), 0);
							func_429(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), Global_40001.f_2FD2, 0, 0);
							GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_145, 5);
						}
					}
				}
			}
		}
	}
	else if (func_396(CAM::_0xDC9DA9E8789F5246()) == 3)
	{
		if (NETSHOP::_NETWORK_SHOP_BASKET_START() == Local_143.f_21)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_156, 0))
			{
				if (!func_905("GB_SGHT_RETP"))
				{
					func_902("GB_SGHT_RETP", 0);
				}
			}
		}
		else if (func_974() == Local_143.f_21)
		{
			if (Local_143.f_22 != 4294967295)
			{
				if (!func_905("GB_SGHT_PROT"))
				{
					iVar0 = func_296(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22));
					if (iVar0 > 4294967295)
					{
						iVar1 = func_294(iVar0);
						func_896("GB_SGHT_PROT", PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
		else if (func_405())
		{
			if (Local_143.f_22 != 4294967295)
			{
				iVar0 = func_296(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22));
				if (iVar0 > 4294967295)
				{
					iVar1 = func_294(iVar0);
					if (func_292(CAM::_0xDC9DA9E8789F5246(), 1))
					{
						if (!func_905("GB_SGHT_STOP"))
						{
							func_896("GB_SGHT_STOP", PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
					else if (!func_905("GB_SGHT_STOP"))
					{
						func_896("GB_SGHT_STOP", PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
	}
	else
	{
		if (func_905("GB_SGHT_PROT"))
		{
			func_437();
		}
		if (func_905("GB_SGHT_RETP"))
		{
			func_437();
		}
		if (func_905("GB_SGHT_STOP"))
		{
			func_437();
		}
		if (func_905("GB_SGHT_STOP2"))
		{
			func_437();
		}
	}
}

void func_896(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x2779C
{
	if (func_897(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), sParam2, bParam5, iParam3))
	{
		Global_140740 = 15;
		Global_140740.f_38 = iParam3;
		Global_140740.f_39 = iParam4;
		Global_140740.f_36 = iParam1;
	}
}

int func_897(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)//Position - 0x277D7
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam1) > 63)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam2) > 63)
	{
		return 0;
	}
	if (func_901(sParam0, sParam1, sParam2) && Global_140740.f_38 == Global_140740.f_3A)
	{
		return 0;
	}
	func_438();
	Global_140740 = 10;
	StringCopy(&(Global_140740.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_140740.f_9 = MISC::GET_HASH_KEY(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	StringCopy(&(Global_140740.f_10), sParam1, 64);
	StringCopy(&(Global_140740.f_20), sParam2, 64);
	Global_140740.f_3A = uParam4;
	Global_140740.f_38 = uParam4;
	func_900();
	func_899(bParam3);
	func_898();
	return 1;
}

void func_898()//Position - 0x278B9
{
	MISC::SET_BIT(&(Global_140740.f_3B), 1);
}

void func_899(bool bParam0)//Position - 0x278CC
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_140740.f_3B), 0);
		return;
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_140740.f_3B), 0);
}

void func_900()//Position - 0x278F2
{
	Global_140740.f_A = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), 86400000);
	Global_140740.f_B = HUD::_0x13C4B962653A5280();
}

bool func_901(char* sParam0, char* sParam1, char* sParam2)//Position - 0x27917
{
	if (!func_443())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_C)))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_140740.f_10)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam2) == MISC::GET_HASH_KEY(&(Global_140740.f_20));
}

void func_902(char* sParam0, bool bParam1)//Position - 0x27995
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return;
	}
	if (func_903(sParam0))
	{
		return;
	}
	func_438();
	Global_140740 = 0;
	StringCopy(&(Global_140740.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_140740.f_9 = MISC::GET_HASH_KEY(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	func_900();
	func_899(bParam1);
	func_898();
}

bool func_903(char* sParam0)//Position - 0x27A00
{
	if (!func_443())
	{
		return 0;
	}
	if (Global_140740 == 11)
	{
		return func_904(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_C));
}

bool func_904(char* sParam0)//Position - 0x27A44
{
	if (!func_443())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_10));
}

int func_905(char* sParam0)//Position - 0x27A76
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_443())
	{
		return 0;
	}
	if (Global_140740 == 11)
	{
		if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return 0;
	}
	return func_903(sParam0);
}

void func_906()//Position - 0x27AC7
{
	int iVar0;
	char* sVar1;
	var uVar2;
	
	if (!func_973() && !func_405())
	{
		return;
	}
	if (!func_444())
	{
		return;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 1))
	{
		iVar0 = func_396(CAM::_0xDC9DA9E8789F5246());
		if (iVar0 >= 2)
		{
			if (NETSHOP::_NETWORK_SHOP_BASKET_START() == Local_143.f_21 || func_974() == Local_143.f_21)
			{
				if (func_933(82, "GB_INTTXT_SS", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_516(86, "BIGM_SGHTN", "BIGM_SGHTBD", 1, 4294967295, 2, 1);
					OBJECT::_0x78857FC65CADB909(1);
					OBJECT::_0x616093EC6B139DD9(CAM::_0xDC9DA9E8789F5246(), joaat("pickup_portable_package"), 1);
					func_932(1);
					func_907(4294967295, 0, 0, 4294967295, 0, 0);
				}
			}
			else if (func_292(CAM::_0xDC9DA9E8789F5246(), 1))
			{
				sVar1 = func_517(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22));
				uVar2 = func_813(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22));
				func_811(86, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
				func_907(4294967295, 0, 0, 4294967295, 0, 0);
			}
			else
			{
				sVar1 = func_517(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22));
				uVar2 = func_813(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22));
				func_811(86, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
				func_907(4294967295, 0, 0, 4294967295, 0, 0);
			}
		}
		MISC::SET_BIT(&iLocal_145, 1);
	}
}

void func_907(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x27C0B
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_284(CAM::_0xDC9DA9E8789F5246());
		Global_19700D = iVar0;
		Global_19700D.f_1 = iParam0;
		if (func_514() != func_22())
		{
			Global_19700D.f_2 = func_797(func_514());
			Global_19700D.f_3 = func_796(func_514());
		}
		if (func_355() != func_22())
		{
			func_565(func_355(), &(Global_19700D.f_2), &(Global_19700D.f_3));
		}
		Global_19700D.f_7 = NETWORK::_GET_POSIX_TIME();
		Global_19700D.f_1C = func_801(CAM::_0xDC9DA9E8789F5246());
		Global_19700D.f_D = 0;
		Global_19700D.f_E = 0;
		if (func_292(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			Global_19700D.f_17 = func_804(func_352(1));
		}
	}
	else
	{
		iVar0 = func_226(CAM::_0xDC9DA9E8789F5246());
	}
	if (iParam2 || func_417(iVar0))
	{
		if (iParam3 != 4294967295 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_196F08 = iVar0;
		if (func_464(iVar0))
		{
			Global_196F08.f_1 = 4;
		}
		else if (func_463(iVar0))
		{
			Global_196F08.f_1 = 5;
		}
		else if (func_324(iVar0, 0))
		{
			Global_196F08.f_1 = 2;
			if (func_530(iVar0))
			{
				Global_196F08.f_1 = 3;
			}
		}
		else
		{
			Global_196F08.f_1 = 1;
		}
		if (func_514() != func_22())
		{
			Global_196F08.f_4 = func_797(func_514());
			Global_196F08.f_5 = func_796(func_514());
		}
		if (func_355() != func_22())
		{
			func_565(func_355(), &(Global_196F08.f_6), &(Global_196F08.f_7));
		}
		Global_196F08.f_9 = NETWORK::_GET_POSIX_TIME();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_196F08.f_1B = 1;
			Global_196F08.f_1C = 1;
		}
		if (iParam0 != 4294967295)
		{
			Global_196F08.f_1A = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_196F08.f_28 = func_560(iParam1);
			Global_196F08.f_29 = func_931();
			Global_196F08.f_2A = func_681(CAM::_0xDC9DA9E8789F5246(), iParam1);
			Global_196F08.f_2C = func_792(CAM::_0xDC9DA9E8789F5246(), iParam1);
		}
		if (!func_957() || iVar0 != 192)
		{
			Global_196F08.f_35 = 0;
		}
	}
	else if (func_461(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_196F7D = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_196F7D = iParam0 + 1;
		}
		else
		{
			Global_196F7D = func_930(CAM::_0xDC9DA9E8789F5246());
		}
		switch (iVar0)
		{
			case 225:
				if (func_527(CAM::_0xDC9DA9E8789F5246()) == 0)
				{
					Global_196F7D.f_1 = 0;
				}
				else
				{
					Global_196F7D.f_1 = 1;
				}
				break;
			
			case 226:
				Global_196F7D.f_1 = 2;
				break;
			
			case 227:
				Global_196F7D.f_1 = 3;
				break;
		}
		Global_196F7D.f_15 = 1;
		Global_196F7D.f_16 = 1;
		if (func_514() != func_22())
		{
			Global_196F7D.f_4 = func_797(func_514());
			Global_196F7D.f_5 = func_796(func_514());
		}
		if (func_355() != func_22())
		{
			func_565(func_355(), &(Global_196F7D.f_4), &(Global_196F7D.f_5));
		}
		Global_196F7D.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != 4294967295)
		{
			Global_196F7D.f_14 = iParam0;
		}
	}
	else if (func_422(iVar0))
	{
		if (iParam3 != 4294967295 && iParam2)
		{
		}
		Global_196F3E = iVar0;
		Global_196F08.f_1 = 1;
		if (func_514() != func_22())
		{
			Global_196F3E.f_4 = func_797(func_514());
			Global_196F3E.f_5 = func_796(func_514());
		}
		if (func_355() != func_22())
		{
			func_565(func_355(), &(Global_196F3E.f_6), &(Global_196F3E.f_7));
		}
		Global_196F3E.f_9 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != 4294967295)
		{
			Global_196F3E.f_15 = iParam0;
		}
	}
	else if (func_459(iVar0))
	{
		Global_196FA9 = iVar0;
		Global_196FA9.f_1 = iParam0;
		Global_196FA9.f_15 = 1;
		Global_196FA9.f_16 = 1;
		if (func_514() != func_22())
		{
			Global_196FA9.f_4 = func_797(func_514());
			Global_196FA9.f_5 = func_796(func_514());
		}
		if (func_355() != func_22())
		{
			func_565(func_355(), &(Global_196FA9.f_4), &(Global_196FA9.f_5));
		}
		Global_196FA9.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != 4294967295)
		{
			Global_196FA9.f_14 = iParam0;
		}
		Global_196FA9.f_1B = func_785(func_148(), 5);
		Global_196FA9.f_1C = func_804(func_659(CAM::_0xDC9DA9E8789F5246()));
		Global_196FA9.f_1D = func_536(6107, 4294967295, 0);
		Global_196FA9.f_1E = func_536(6103, 4294967295, 0);
		Global_196FA9.f_1F = func_536(6104, 4294967295, 0);
		Global_196FA9.f_20 = func_536(6106, 4294967295, 0);
		Global_196FA9.f_21 = func_536(6105, 4294967295, 0);
		Global_196FA9.f_22 = func_536(6108, 4294967295, 0);
		Global_196FA9.f_7 = func_803();
		Global_196FA9.f_33 = func_804(bParam4);
	}
	else if (func_457(iVar0))
	{
		Global_196FDF = iVar0;
		Global_196FDF.f_1 = iParam0;
		Global_196FDF.f_15 = 1;
		Global_196FDF.f_16 = 1;
		if (func_514() != func_22())
		{
			Global_196FDF.f_4 = func_797(func_514());
			Global_196FDF.f_5 = func_796(func_514());
		}
		if (func_355() != func_22())
		{
			func_565(func_355(), &(Global_196FDF.f_4), &(Global_196FDF.f_5));
		}
		Global_196FDF.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != 4294967295)
		{
			Global_196FDF.f_14 = iParam0;
		}
		Global_196FDF.f_18 = func_536(6157, 4294967295, 0);
		Global_196FDF.f_19 = func_536(6162, 4294967295, 0);
		Global_196FDF.f_1A = func_536(6163, 4294967295, 0);
		Global_196FDF.f_1B = func_804((((func_749() || func_748()) || func_747()) || func_746(CAM::_0xDC9DA9E8789F5246())));
		Global_196FDF.f_1C = func_536(6164, 4294967295, 0);
		Global_196FDF.f_1D = func_804(func_745());
		Global_196FDF.f_1F = 0;
		Global_196FDF.f_1E = 0;
		Global_196FDF.f_20 = 0;
		Global_196FDF.f_21 = 0;
		Global_196FDF.f_22 = 0;
		Global_196FDF.f_10 = 0;
		Global_196FDF.f_7 = func_803();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_525(func_526(CAM::_0xDC9DA9E8789F5246()))))
	{
		Global_197065 = iVar0;
		Global_197065.f_1 = iParam0;
		Global_197065.f_15 = 1;
		Global_197065.f_16 = 1;
		Global_197065.f_7 = func_803();
		if (func_514() != func_22())
		{
			Global_197065.f_4 = func_797(func_514());
			Global_197065.f_5 = func_796(func_514());
		}
		if (func_355() != func_22())
		{
			func_565(func_355(), &(Global_197065.f_4), &(Global_197065.f_5));
		}
		if (func_514() != 4294967295)
		{
			Global_197065.f_11 = func_742(func_514());
		}
		Global_197065.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_197065.f_1C = func_801(CAM::_0xDC9DA9E8789F5246());
		Global_197065.f_10 = 0;
		Global_197065.f_18 = 0;
		Global_197065.f_17 = 0;
		if (func_292(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			Global_197065.f_21 = func_804(func_352(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_197030 = iVar0;
		Global_197030.f_1 = iParam0;
		Global_197030.f_15 = 1;
		Global_197030.f_16 = 1;
		Global_197030.f_7 = func_803();
		Global_197030.f_18 = 0;
		Global_197030.f_17 = 0;
		Global_197030.f_10 = 0;
		if (func_514() != func_22())
		{
			Global_197030.f_4 = func_797(func_514());
			Global_197030.f_5 = func_796(func_514());
		}
		Global_197030.f_1C = func_801(CAM::_0xDC9DA9E8789F5246());
		if (Global_197030.f_1C)
		{
			Global_197030.f_1D = func_736(CAM::_0xDC9DA9E8789F5246());
		}
		else
		{
			Global_197030.f_1D = 0;
		}
		Global_197030.f_1E = func_720(CAM::_0xDC9DA9E8789F5246(), 4, 4294967295);
		Global_197030.f_1F = func_739(CAM::_0xDC9DA9E8789F5246());
		Global_197030.f_20 = func_804(func_719(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_21 = func_804(func_718(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_22 = func_804(func_717(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_23 = func_804(func_716(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_24 = func_715(CAM::_0xDC9DA9E8789F5246());
		Global_197030.f_25 = func_714(CAM::_0xDC9DA9E8789F5246());
		Global_197030.f_27 = func_713(CAM::_0xDC9DA9E8789F5246());
		if (func_292(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			Global_197030.f_29 = func_804(func_352(1));
		}
		if (func_355() != func_22())
		{
			func_565(func_355(), &(Global_197030.f_4), &(Global_197030.f_5));
		}
		Global_197030.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_197030.f_1C = func_801(CAM::_0xDC9DA9E8789F5246());
	}
	else
	{
		if (func_514() != func_22())
		{
			Global_196EF6 = func_797(func_514());
			Global_196EF6.f_1 = func_796(func_514());
		}
		Global_196EF6.f_5 = NETWORK::_GET_POSIX_TIME();
		Global_196EF6.f_D = func_929();
		Global_196EF6.f_F = 0;
		if (func_515(1))
		{
			if (func_355() == func_514())
			{
				Global_196EF6.f_F = 1;
			}
		}
		if (func_928())
		{
			Global_196F7D.f_1C = 1;
		}
		if (((((func_927() || func_926()) || func_925()) || func_924()) || func_922()) || func_921(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196F7D.f_1E = 1;
		}
		if (func_919(func_920(joaat("TRAILERSMALL2"))))
		{
			Global_196F7D.f_20 = 1;
		}
		if (func_911(func_918(joaat("CADDY"))))
		{
			Global_196F7D.f_1F = 1;
		}
		if (func_784(CAM::_0xDC9DA9E8789F5246()) || func_783(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196F7D.f_1D = 1;
		}
		if (func_780(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196F7D.f_21 = 1;
			Global_196F7D.f_22 = 1;
		}
		if (func_781(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196F7D.f_24 = 1;
		}
		if (func_778(0, CAM::_0xDC9DA9E8789F5246()) == 1)
		{
			Global_196F7D.f_23 = 1;
		}
		if (func_910(CAM::_0xDC9DA9E8789F5246(), 3, &uVar1))
		{
			Global_196F7D.f_25 = 1;
		}
		if (func_910(CAM::_0xDC9DA9E8789F5246(), 7, &uVar1))
		{
			Global_196F7D.f_26 = 1;
		}
		if (func_909(CAM::_0xDC9DA9E8789F5246()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_908(CAM::_0xDC9DA9E8789F5246(), iVar2);
				if (func_678(CAM::_0xDC9DA9E8789F5246(), iVar3, 0))
				{
					Global_196F7D.f_27 = 1;
				}
				if (func_678(CAM::_0xDC9DA9E8789F5246(), iVar3, 2))
				{
					Global_196F7D.f_28 = 1;
				}
				if (func_678(CAM::_0xDC9DA9E8789F5246(), iVar3, 1))
				{
					Global_196F7D.f_29 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_908(int iParam0, int iParam1)//Position - 0x28679
{
	var uVar0;
	
	if (iParam0 == func_22())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_673(Global_1841F3[iParam0 /*790*/].f_111.f_AE[iParam1 /*12*/]))
	{
		uVar0 = Global_1841F3[iParam0 /*790*/].f_111.f_AE[iParam1 /*12*/];
	}
	return uVar0;
}

int func_909(int iParam0)//Position - 0x286D2
{
	int iVar0;
	
	if (iParam0 == func_22())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_910(int iParam0, int iParam1, var uParam2)//Position - 0x28714
{
	int iVar0;
	
	if (iParam0 != func_22())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_778(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_911(int iParam0)//Position - 0x2874E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_916(11, 4294967295) == 0)
	{
		return 0;
	}
	if (iParam0 != 4294967295)
	{
		iVar0 = 4294967295;
		iVar1 = (iParam0 + func_763(11));
		func_762(iVar1, &iVar0, 1);
		iVar2 = func_916(func_913(iVar1), 4294967295);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_536(func_912(4, iVar0), 4294967295, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_912(int iParam0, int iParam1)//Position - 0x287CA
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case 79:
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case 79:
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case 79:
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			break;
			break;
	}
	return 1629;
}

int func_913(int iParam0)//Position - 0x2DE10
{
	int iVar0;
	
	if (iParam0 < 261)
	{
		iVar0 = 0;
		while (iVar0 < 21)
		{
			if (iParam0 >= func_763(iVar0) && iParam0 < func_914(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_914(int iParam0)//Position - 0x2DE53
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return 4294967295;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_766(iParam0);
		return func_915(iVar0);
	}
	return (func_764(iParam0, 4294967295) * iParam0 + 1);
}

int func_915(int iParam0)//Position - 0x2DF67
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return 4294967295;
}

int func_916(int iParam0, int iParam1)//Position - 0x2DF98
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == 4294967295)
	{
		iVar0 = func_148();
	}
	if (iParam0 == 7 && !Global_40001.f_41D8)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_766(iParam0);
		if (iVar1 == 0 && func_536(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_917(4294967295) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_801(CAM::_0xDC9DA9E8789F5246()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_150A87[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_273025[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 21)
		{
			return 0;
		}
		return Global_272FA8[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_917(int iParam0)//Position - 0x2E073
{
	if (!Global_40001.f_5BE2)
	{
		return 0;
	}
	return func_536(7207, iParam0, 0) != 0;
}

int func_918(int iParam0)//Position - 0x2E096
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("TECHNICAL2"):
			return 0;
			break;
		
		case joaat("BOXVILLE5"):
			return 1;
			break;
		
		case joaat("WASTELANDER"):
			return 2;
			break;
		
		case joaat("PHANTOM2"):
			return 3;
			break;
		
		case joaat("VOLTIC2"):
			return 4;
			break;
		
		case joaat("DUNE4"):
			return 5;
			break;
		
		case joaat("DUNE5"):
			return 5;
			break;
		
		case joaat("RUINER2"):
			return 6;
			break;
		
		case joaat("BLAZER5"):
			return 7;
			break;
	}
	return 4294967295;
}

int func_919(int iParam0)//Position - 0x2E11F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != 4294967295)
	{
		iVar0 = 4294967295;
		iVar1 = iParam0 + 157;
		func_762(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_536(func_912(4, iVar0), 4294967295, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_920(int iParam0)//Position - 0x2E165
{
	switch (iParam0)
	{
		case joaat("TRAILERSMALL2"):
			return 0;
			break;
	}
	return 4294967295;
}

int func_921(int iParam0)//Position - 0x2E182
{
	if (iParam0 != func_22())
	{
		if (Global_1841F3[iParam0 /*790*/].f_111.f_14A != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_922()//Position - 0x2E1AB
{
	return func_536(func_923(3), 4294967295, 0) != 0;
}

int func_923(int iParam0)//Position - 0x2E1C0
{
	switch (iParam0)
	{
		case 0:
			return 6538;
			break;
		
		case 1:
			return 6540;
			break;
		
		case 2:
			return 6541;
			break;
		
		case 3:
			return 6542;
			break;
		
		case 4:
			return 6543;
			break;
		
		case 5:
			return 6544;
			break;
	}
	return 9954;
}

bool func_924()//Position - 0x2E22C
{
	return func_536(6163, 4294967295, 0) != 0;
}

bool func_925()//Position - 0x2E23F
{
	return func_536(5380, 4294967295, 0) != 0;
}

bool func_926()//Position - 0x2E252
{
	return func_536(3828, 4294967295, 0) != 0;
}

bool func_927()//Position - 0x2E265
{
	return func_536(3223, 4294967295, 0) != 0;
}

bool func_928()//Position - 0x2E278
{
	return func_536(5379, 4294967295, 0) != 0;
}

int func_929()//Position - 0x2E28B
{
	int iVar0;
	
	iVar0 = func_514();
	if (iVar0 != func_22())
	{
		return Global_18CD5B[iVar0 /*560*/].f_B.f_5D;
	}
	return 0;
}

int func_930(int iParam0)//Position - 0x2E2B3
{
	if (func_226(iParam0) == 225 || func_226(iParam0) == 226)
	{
		return func_527(iParam0);
	}
	return 4294967295;
}

var func_931()//Position - 0x2E2E0
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_680(CAM::_0xDC9DA9E8789F5246(), iVar0))
		{
			MISC::SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_932(bool bParam0)//Position - 0x2E312
{
	if (bParam0)
	{
		if (!func_199(CAM::_0xDC9DA9E8789F5246(), 9))
		{
			if (func_396(CAM::_0xDC9DA9E8789F5246()) != 0)
			{
				func_229(9);
			}
		}
	}
	else if (func_199(CAM::_0xDC9DA9E8789F5246(), 9))
	{
		func_228(9);
	}
}

int func_933(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x2E358
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = 4294967197;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_934(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_C12 = iParam6;
			Global_BB1[3 /*6*/] = { Global_19E56.f_6D76[iParam0 /*29*/].f_3 };
			Global_BFE = iParam0;
			MISC::SET_BIT(&Global_94F, 1);
			MISC::SET_BIT(&Global_94F, 7);
		}
		return 1;
	}
	return 0;
}

int func_934(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x2E3F0
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_944();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_38B1 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_38B1 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_38B1 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(AUDIO::_0x0626A247D2405330()))
			{
				return 0;
			}
		}
		if (Global_19E56.f_36C7[Global_38B1 /*20*/].f_11 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_943() == 0)
	{
		func_941();
		return 0;
	}
	func_940(Global_41F9);
	StringCopy(&(Global_19E56.f_3721[Global_41F9 /*104*/]), sParam1, 64);
	Global_19E56.f_3721[Global_41F9 /*104*/].f_11 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_19E56.f_3721[Global_41F9 /*104*/].f_18 = iParam2;
	}
	Global_19E56.f_3721[Global_41F9 /*104*/].f_19 = iParam7;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_1A = uParam8;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_1D = uParam9;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_1E = uParam12;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_1F = uParam11;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_1C = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_20 = iParam3;
	StringCopy(&(Global_19E56.f_3721[Global_41F9 /*104*/].f_21), sParam4, 64);
	Global_19E56.f_3721[Global_41F9 /*104*/].f_31 = iParam6;
	StringCopy(&(Global_19E56.f_3721[Global_41F9 /*104*/].f_32), sParam5, 64);
	Global_19E56.f_3721[Global_41F9 /*104*/].f_42 = iParam13;
	StringCopy(&(Global_19E56.f_3721[Global_41F9 /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_19E56.f_3721[Global_41F9 /*104*/].f_53), sParam15, 64);
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 10))
	{
		Global_19E56.f_3721[Global_41F9 /*104*/].f_63[0] = 1;
		Global_19E56.f_3721[Global_41F9 /*104*/].f_63[1] = 1;
		Global_19E56.f_3721[Global_41F9 /*104*/].f_63[2] = 1;
		Global_C11 = 4;
		func_939(0);
		func_939(2);
		func_939(1);
	}
	else
	{
		func_944();
		switch (iParam16)
		{
			case 3:
				Global_19E56.f_3721[Global_41F9 /*104*/].f_63[Global_38B1] = 1;
				break;
			
			case 0:
				Global_19E56.f_3721[Global_41F9 /*104*/].f_63[0] = 1;
				break;
			
			case 2:
				Global_19E56.f_3721[Global_41F9 /*104*/].f_63[2] = 1;
				break;
			
			case 1:
				Global_19E56.f_3721[Global_41F9 /*104*/].f_63[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_38B1)
			{
				case 0:
					func_939(0);
					Global_C11 = 0;
					break;
				
				case 1:
					func_939(1);
					Global_C11 = 1;
					break;
				
				case 2:
					func_939(2);
					Global_C11 = 2;
					break;
				
				case 3:
					func_939(3);
					Global_C11 = 3;
					break;
				
				default:
					Global_C11 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 10))
		{
			Global_19E56.f_36C7[0 /*20*/].f_11 = 1;
			Global_19E56.f_36C7[1 /*20*/].f_11 = 1;
			Global_19E56.f_36C7[2 /*20*/].f_11 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_19E56.f_36C7[Global_38B1 /*20*/].f_11 = 1;
					break;
				
				case 0:
					Global_19E56.f_36C7[0 /*20*/].f_11 = 1;
					break;
				
				case 2:
					Global_19E56.f_36C7[2 /*20*/].f_11 = 1;
					break;
				
				case 1:
					Global_19E56.f_36C7[1 /*20*/].f_11 = 1;
					break;
				}
			}
	}
	Global_41FB[Global_41F9] = 0;
	if (bParam10)
	{
		func_944();
		if (Global_3878)
		{
			StringCopy(&Global_38A6, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_38B1)
			{
				case 0:
					StringCopy(&Global_38A6, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_38A6, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_38A6, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_38A6, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 1)
		{
			if (!func_479())
			{
				unk_0x1190AB7024CBD8CB(4294967295, "Text_Arrive_Tone", &Global_38A6, true);
			}
		}
	}
	if (!Global_395A)
	{
		if (Global_38B1.f_1 == 6)
		{
			func_938(Global_389E, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_935(1);
			func_938(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_389D), 3212836864, 3212836864, 3212836864);
		}
	}
	return 1;
}

void func_935(int iParam0)//Position - 0x2E8A6
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
	
	Global_41FA = 0;
	Global_BAC = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_B88[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_937(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_956[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_956[iVar1 /*15*/].f_4)
					{
						if (Global_B88[iVar0] == 0)
						{
							Global_B64[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 3))
								{
									iVar2 = 42;
									Global_395D = 1;
								}
								else
								{
									iVar2 = 255;
									Global_395D = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_271(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar2);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							if (Global_25824A)
							{
								if (iVar1 == 14)
								{
									func_936(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41F5), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_B88[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_956[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_956[iVar1 /*15*/].f_4)
					{
						if (Global_B88[iVar0] == 0)
						{
							Global_B64[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_19E56.f_3721[iVar3 /*104*/].f_18 != 0)
									{
										if (Global_19E56.f_3721[iVar3 /*104*/].f_1C == 0)
										{
											if (Global_19E56.f_3721[iVar3 /*104*/].f_63[Global_38B1] == 1)
											{
												Global_41FA++;
											}
										}
									}
									iVar3++;
								}
								func_936(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41FA), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_11625)
								{
									iVar4 = 0;
									iVar4 = Global_411C38;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_411C39[iVar5 /*104*/].f_18 != 0)
										{
											if (Global_411C39[iVar5 /*104*/].f_1C == 0)
											{
												if (Global_411C39[iVar5 /*104*/].f_63[Global_38B1] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_936(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_38B1)
									{
										case 0:
											iVar6 = Global_919C;
											break;
										
										case 1:
											iVar6 = Global_919D;
											break;
										
										case 2:
											iVar6 = Global_919E;
											break;
										
										default:
											break;
									}
									func_936(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_936(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41F5), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_271(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_955);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (iVar1 == 2)
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_271(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar7);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (iVar1 == 3)
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 3))
								{
									iVar8 = 42;
									Global_395D = 1;
								}
								else
								{
									iVar8 = 255;
									Global_395D = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_271(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar8);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_271(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(42);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_956[iVar1 /*15*/]), "CELL_BENWEB")) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_271(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(42);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (Global_956[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18C80F.f_1;
								func_936(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_936(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_B88[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_936(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x2EE3F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_271(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_271(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_271(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_271(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_271(sParam11);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

bool func_937(int iParam0)//Position - 0x2EEF2
{
	return Global_8D15 == iParam0;
}

void func_938(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x2EF00
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam6));
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_939(int iParam0)//Position - 0x2EF63
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_19E56.f_36C7[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_940(int iParam0)//Position - 0x2EF82
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_19E56.f_3721[iParam0 /*104*/].f_12 = iVar0;
	Global_19E56.f_3721[iParam0 /*104*/].f_12.f_1 = iVar1;
	Global_19E56.f_3721[iParam0 /*104*/].f_12.f_2 = iVar2;
	Global_19E56.f_3721[iParam0 /*104*/].f_12.f_3 = iVar3;
	Global_19E56.f_3721[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_19E56.f_3721[iParam0 /*104*/].f_12.f_5 = iVar5;
}

void func_941()//Position - 0x2F014
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_11625)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_41F9 = 34;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12 = 4294967295;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_1 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_2 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_3 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_942(Global_19E56.f_3721[iVar2 /*104*/].f_12, Global_19E56.f_3721[Global_41F9 /*104*/].f_12))
		{
			Global_41F9 = iVar2;
		}
		iVar2++;
	}
	Global_19E56.f_3721[Global_41F9 /*104*/].f_18 = 1;
}

int func_942(struct<6> Param0, struct<6> Param1)//Position - 0x2F0DF
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_943()//Position - 0x2F1CA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_11625)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_19E56.f_3721[iVar2 /*104*/].f_18 == 0)
		{
			Global_41F9 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_41F9 = 34;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12 = 4294967295;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_1 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_2 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_3 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_19E56.f_3721[iVar2 /*104*/].f_18 == 0 || Global_19E56.f_3721[iVar2 /*104*/].f_18 == 1)
		{
			if (!func_942(Global_19E56.f_3721[iVar2 /*104*/].f_12, Global_19E56.f_3721[Global_41F9 /*104*/].f_12))
			{
				Global_41F9 = iVar2;
			}
		}
		if (Global_19E56.f_3721[iVar2 /*104*/].f_18 == 2)
		{
		}
		iVar2++;
	}
	if (Global_41F9 == 34)
	{
		return 0;
	}
	Global_19E56.f_3721[Global_41F9 /*104*/].f_63[0] = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_63[1] = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_63[2] = 0;
	return 1;
}

void func_944()//Position - 0x2F332
{
	if (func_937(14))
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
		Global_38B1 = func_945();
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

var func_945()//Position - 0x2F3D4
{
	func_946();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_946()//Position - 0x2F3ED
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_949(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_948(AUDIO::_0x0626A247D2405330());
			if (func_947(iVar0) && (!func_937(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_947(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_947(int iParam0)//Position - 0x2F4EA
{
	return iParam0 < 3;
}

int func_948(int iParam0)//Position - 0x2F4F6
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_949(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_949(int iParam0)//Position - 0x2F533
{
	if (func_947(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_950()//Position - 0x2F55D
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 1))
	{
		if (!func_973())
		{
			if (Local_143.f_5 > 0 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 6))
			{
				func_231(1);
				MISC::SET_BIT(&(Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 1);
			}
		}
	}
}

int func_951(bool bParam0)//Position - 0x2F5AE
{
	if (func_955(1))
	{
		return 1;
	}
	if (Global_26862F.f_1313.f_23)
	{
		Global_26862F.f_1313.f_23 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_355() == func_22() || !func_1072(func_355(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_452(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_954(CAM::_0xDC9DA9E8789F5246()) && func_952(func_953(CAM::_0xDC9DA9E8789F5246()), 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_952(int iParam0, int iParam1)//Position - 0x2F631
{
	return func_21(iParam0) == iParam1;
}

int func_953(int iParam0)//Position - 0x2F642
{
	if (iParam0 != func_22() && func_1072(iParam0, 1, 1))
	{
		return Global_24FBF9[iParam0 /*413*/].f_135.f_D;
	}
	return 4294967295;
}

int func_954(int iParam0)//Position - 0x2F673
{
	if (iParam0 != func_22() && func_1072(iParam0, 1, 1))
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_135, 4);
	}
	return 0;
}

int func_955(bool bParam0)//Position - 0x2F6A7
{
	bool bVar0;
	
	if (!func_515(1))
	{
		bVar0 = false;
		if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39 != func_22())
		{
			if (func_1072(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39, 0, 1))
			{
				if ((Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_18 == 4 || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_18 == 8) || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_18 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_956(func_226(CAM::_0xDC9DA9E8789F5246())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_618(31);
				if (func_417(func_226(CAM::_0xDC9DA9E8789F5246())))
				{
					func_618(81);
				}
				if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39 != func_22() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39))
				{
					Global_18C773 = func_494(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39, 4294967294, 0, 0, 0);
					if (!func_354(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39))
					{
						func_618(88);
					}
				}
				else
				{
					Global_18C773 = 1;
				}
				Global_18C763 = { Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_63 };
			}
			return 1;
		}
	}
	return 0;
}

int func_956(int iParam0)//Position - 0x2F7F9
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return 4294967295;
}

bool func_957()//Position - 0x2F9AD
{
	return func_245(CAM::_0xDC9DA9E8789F5246());
}

void func_958(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2F9BD
{
	float fVar0;
	
	if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 != iParam0)
	{
		func_972(4294967295);
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 = iParam0;
		if (func_971() != 4294967295)
		{
			func_970(4294967295);
		}
		if (func_969() != 4294967295)
		{
			func_968(4294967295);
		}
		func_967(iParam2);
		func_965(iParam0);
		if (!func_238(iParam0))
		{
			fVar0 = func_237(iParam0);
			if (fVar0 != 1f)
			{
				func_234(fVar0);
				MISC::SET_BIT(&(Global_196EED.f_3), 1);
			}
		}
		if (!func_241(iParam0) || iParam3)
		{
			if (func_239(iParam0, iParam2) && iParam3 == 1)
			{
				HUD::_0x14621BB1DF14E2B2(0);
				if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), 0, 0);
					HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
				}
				MISC::SET_BIT(&(Global_196EED.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				GRAPHICS::_0x54E22EA2C1956A8D(1f);
				HUD::_0x14621BB1DF14E2B2(5);
			}
		}
		if (func_404())
		{
			func_229(27);
		}
		if (bParam1)
		{
			if (!func_398())
			{
				func_231(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11BE, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11BE, 4)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11BE, 0))
			{
				func_618(6);
			}
			func_964();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (func_137(CAM::_0xDC9DA9E8789F5246()) && func_246(CAM::_0xDC9DA9E8789F5246()))
		{
			MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 8);
		}
		func_960();
		if (func_959(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_196EED.f_3), 6);
		}
		Global_26862F.f_185C = 0;
	}
}

int func_959(int iParam0)//Position - 0x2FBDA
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_960()//Position - 0x2FC24
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_963();
	iVar2 = func_87(CAM::_0xDC9DA9E8789F5246());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_326(iVar1, iVar2, 1) || func_961(iVar1, CAM::_0xDC9DA9E8789F5246()))
			{
				unk_0xB7BCAAFF114A94F2(CAM::_0xDC9DA9E8789F5246(), iVar1, iVar3);
				unk_0xB7BCAAFF114A94F2(iVar1, CAM::_0xDC9DA9E8789F5246(), iVar3);
			}
		}
		iVar0++;
	}
}

int func_961(int iParam0, int iParam1)//Position - 0x2FC94
{
	if (func_292(iParam0, 1) && func_292(iParam1, 1))
	{
		return (func_962(iParam0) == func_87(iParam1) || func_962(iParam1) == func_87(iParam0));
	}
	return 0;
}

int func_962(int iParam0)//Position - 0x2FCD6
{
	if (func_292(iParam0, 1))
	{
		return Global_18CD5B[func_87(iParam0) /*560*/].f_B.f_1BB;
	}
	return func_22();
}

int func_963()//Position - 0x2FD01
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_514();
	if (iVar0 != func_22())
	{
		if (func_1072(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != 4294967295)
			{
				return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iVar1 /*560*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_964()//Position - 0x2FD42
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11BE, 1))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11BE), 1);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11BE, 4))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11BE), 4);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11BE, 6))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11BE), 6);
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11BE), 0);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11BE), 2);
	Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_29A = 0;
	if (Global_26862F.f_11C0 > 0)
	{
		HUD::_0x14621BB1DF14E2B2(Global_26862F.f_11C0);
	}
	Global_26862F.f_11BF = 0;
}

void func_965(int iParam0)//Position - 0x2FDE0
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_536(3791, 4294967295, 0);
	iVar1 = func_966(iParam0);
	if (iVar1 != 4294967295)
	{
		MISC::SET_BIT(&iVar0, iVar1);
		func_534(3791, iVar0, 4294967295, 1, 0);
	}
}

int func_966(int iParam0)//Position - 0x2FE15
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return 4294967295;
}

void func_967(int iParam0)//Position - 0x2FEAC
{
	int iVar0;
	
	iVar0 = CAM::_0xDC9DA9E8789F5246();
	if (Global_18CD5B[iVar0 /*560*/].f_B.f_B0 != iParam0)
	{
		Global_18CD5B[iVar0 /*560*/].f_B.f_B0 = iParam0;
	}
}

void func_968(int iParam0)//Position - 0x2FEDB
{
	if (Global_26862F.f_1313.f_14B != iParam0)
	{
		Global_26862F.f_1313.f_14B = iParam0;
	}
}

int func_969()//Position - 0x2FEFE
{
	return Global_26862F.f_1313.f_14B;
}

void func_970(int iParam0)//Position - 0x2FF10
{
	if (Global_26862F.f_1313.f_14A != iParam0)
	{
		Global_26862F.f_1313.f_14A = iParam0;
	}
}

int func_971()//Position - 0x2FF33
{
	return Global_26862F.f_1313.f_14A;
}

void func_972(int iParam0)//Position - 0x2FF45
{
	Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_20 = iParam0;
}

int func_973()//Position - 0x2FF5E
{
	int iVar0;
	
	iVar0 = func_974();
	if (iVar0 > 4294967295)
	{
		if (Local_143.f_21 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_974()//Position - 0x2FF80
{
	int iVar0;
	
	if (Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_3 != 4294967295)
	{
		return Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_3;
	}
	if (func_245(CAM::_0xDC9DA9E8789F5246()))
	{
		Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_3 = NETSHOP::_NETWORK_SHOP_BASKET_START();
		if (NETSHOP::_NETWORK_SHOP_BASKET_START() == Local_143.f_21)
		{
			func_932(1);
		}
	}
	else if (func_292(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		iVar0 = func_514();
		if (iVar0 != func_22())
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
			{
				Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			}
		}
	}
	return Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_3;
}

int func_975()//Position - 0x30015
{
	return Local_143;
}

int func_976(int iParam0)//Position - 0x3001F
{
	return Local_144[iParam0 /*6*/];
}

int func_977()//Position - 0x3002E
{
	var uVar0;
	
	func_982(&uVar0);
	if (Global_140842 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_981())
	{
		return 1;
	}
	if (Global_258B0A)
	{
		return 1;
	}
	if (func_980())
	{
		return 1;
	}
	if (func_979(157))
	{
		if (!func_978())
		{
			return 1;
		}
	}
	if (func_979(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_235() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_235()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_978()//Position - 0x300B8
{
	return Global_255C02.f_24B;
}

int func_979(int iParam0)//Position - 0x300C7
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_980()//Position - 0x300DE
{
	return Global_25824F;
}

bool func_981()//Position - 0x300EA
{
	return Global_255C02.f_246;
}

void func_982(var uParam0)//Position - 0x300F9
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
					func_983(iVar0);
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

void func_983(int iParam0)//Position - 0x3016C
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_1072(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_984(iVar2, &bVar3))
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

int func_984(int iParam0, var uParam1)//Position - 0x301ED
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

void func_985()//Position - 0x3024C
{
	SYSTEM::WAIT(0);
}

void func_986()//Position - 0x30259
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 6))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_973() || func_405())
			{
				func_710(0, 4, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
				MISC::SET_BIT(&iLocal_145, 6);
			}
		}
	}
	func_1032(3, 3, 4294967295, 3212836864);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETSHOP::_NETWORK_SHOP_BASKET_START() == Local_143.f_21)
		{
			if (iLocal_428 >= 0)
			{
				func_883(&Local_156);
				func_882(&Local_156);
			}
		}
	}
	if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(AUDIO::_0x0626A247D2405330()) == iLocal_151)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(AUDIO::_0x0626A247D2405330(), iLocal_153);
	}
	if (iLocal_428 > 0)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_143.f_1, 3))
		{
			func_875(CAM::_0xDC9DA9E8789F5246(), 1, 0);
		}
	}
	func_1031();
	if (Local_143.f_22 != 4294967295)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_145, 5))
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22)))
			{
				func_435(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), 432, 0, 0);
				func_434(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), 1, 0, 0);
				func_433(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), 0, 0, 0);
				func_432(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), 0);
				func_429(PLAYER::INT_TO_PLAYERINDEX(Local_143.f_22), Global_40001.f_2FD2, 0, 0);
			}
		}
	}
	if (func_204(0))
	{
		func_203(0);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 0))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_146, 2))
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
			AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_STOP");
		}
	}
	MISC::SET_BIT(&iLocal_146, 8);
	func_200();
	OBJECT::_0x78857FC65CADB909(1);
	func_932(0);
	func_988(1, 0);
	HUD::_0x14621BB1DF14E2B2(5);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_41212A, 21);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_41212A, 20);
	func_987();
}

void func_987()//Position - 0x303F6
{
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_988(bool bParam0, int iParam1)//Position - 0x30402
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_14B91C.f_1.f_6C != 0)
	{
		Global_14B91C.f_1.f_6C = 0;
	}
	Global_14B91C.f_1.f_6D = 4294967295;
	Global_14B91C.f_1.f_6E = 4294967295;
	if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 167 || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 168)
	{
		func_1029();
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 4);
	}
	if ((func_563() && iParam1 != 0) && Global_40001.f_41D5)
	{
		if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 190 || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 192)
		{
			func_1011(CAM::_0xDC9DA9E8789F5246(), iParam1, 1, 0);
		}
	}
	if (((Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 164 || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 208) || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 250) || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 237)
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
	}
	if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 != 4294967295)
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 = 4294967295;
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 14) && !func_137(CAM::_0xDC9DA9E8789F5246()))
		{
			func_231(0);
		}
	}
	else if (func_1009(CAM::_0xDC9DA9E8789F5246()) != 4294967295)
	{
		func_972(4294967295);
	}
	func_1008(func_22());
	if (func_204(16))
	{
		func_203(16);
	}
	func_1005(0);
	func_967(4294967295);
	func_1004();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1003(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_1001(iVar1);
		iVar1++;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 0))
	{
		GRAPHICS::_0x54E22EA2C1956A8D(1f);
		HUD::_0x14621BB1DF14E2B2(5);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 0);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 5))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 5);
	}
	iVar2 = func_424();
	if ((func_323(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_1000(4294967295);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_464(iVar2))
	{
		func_997(4294967295, 1);
	}
	else if (((((func_423(iVar2) || func_996(iVar2)) || func_995(iVar2)) || func_461(iVar2)) || func_459(iVar2)) || func_457(iVar2))
	{
	}
	else
	{
		func_997(4294967295, 1);
	}
	func_228(19);
	func_228(20);
	func_228(21);
	func_228(22);
	func_228(27);
	func_203(3);
	func_203(4);
	func_203(7);
	func_994();
	if (func_246(CAM::_0xDC9DA9E8789F5246()))
	{
		func_932(0);
	}
	func_228(29);
	Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39 = func_22();
	if (Global_26862F.f_1313.f_23 != 0)
	{
		Global_26862F.f_1313.f_23 = 0;
	}
	if (bParam0)
	{
		func_205();
	}
	if (!func_137(CAM::_0xDC9DA9E8789F5246()))
	{
		func_227();
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 1);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 6);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 7))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 7);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 8))
	{
		func_993("IMPEXP_SELFDES", 0);
		func_991("IMPEXP_SELFDES");
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 8);
	}
	func_989(iVar2, 0);
}

void func_989(int iParam0, bool bParam1)//Position - 0x307CB
{
	if (bParam1)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_990(iParam0));
			MISC::SET_BIT(&(Global_196EED.f_3), 9);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_990(iParam0));
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 9);
	}
}

char* func_990(int iParam0)//Position - 0x30827
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_991(char* sParam0)//Position - 0x308A1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_19E56.f_3721[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_19E56.f_3721[iVar0 /*104*/]), sParam0))
			{
				if (Global_19E56.f_3721[iVar0 /*104*/].f_18 == 2)
				{
				}
				else
				{
					func_944();
					Global_19E56.f_3721[iVar0 /*104*/].f_63[Global_38B1] = 0;
					if (func_992(iVar0))
					{
					}
					else
					{
						Global_19E56.f_3721[iVar0 /*104*/].f_18 = 0;
						Global_19E56.f_3721[iVar0 /*104*/].f_1C = 0;
						Global_19E56.f_3721[iVar0 /*104*/].f_1D = 0;
					}
					HUD::_REMOVE_NOTIFICATION(Global_19E56.f_3721[iVar0 /*104*/].f_10);
				}
			}
		}
		iVar0++;
	}
}

int func_992(int iParam0)//Position - 0x30955
{
	if ((Global_19E56.f_3721[iParam0 /*104*/].f_63[0] == 1 || Global_19E56.f_3721[iParam0 /*104*/].f_63[1] == 1) || Global_19E56.f_3721[iParam0 /*104*/].f_63[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_993(char* sParam0, int iParam1)//Position - 0x309AA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_19E56.f_3721[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_19E56.f_3721[iVar0 /*104*/]), sParam0))
			{
				if (Global_19E56.f_3721[iVar0 /*104*/].f_18 == 0)
				{
				}
				Global_19E56.f_3721[iVar0 /*104*/].f_18 = 1;
				if (Global_19E56.f_3721[iVar0 /*104*/].f_19 == 1)
				{
					if (Global_19E56.f_3721[iVar0 /*104*/].f_63[0] == 1)
					{
						Global_19E56.f_36C7[0 /*20*/].f_11 = 0;
					}
					if (Global_19E56.f_3721[iVar0 /*104*/].f_63[1] == 1)
					{
						Global_19E56.f_36C7[1 /*20*/].f_11 = 0;
					}
					if (Global_19E56.f_3721[iVar0 /*104*/].f_63[2] == 1)
					{
						Global_19E56.f_36C7[2 /*20*/].f_11 = 0;
					}
					if (Global_19E56.f_3721[iVar0 /*104*/].f_63[3] == 1)
					{
						Global_19E56.f_36C7[3 /*20*/].f_11 = 0;
					}
					Global_19E56.f_3721[iVar0 /*104*/].f_19 = 0;
					if (iParam1 == 1)
					{
						Global_19E56.f_3721[iVar0 /*104*/].f_1B = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_994()//Position - 0x30AC2
{
	if (func_249(CAM::_0xDC9DA9E8789F5246()))
	{
		func_228(25);
	}
}

int func_995(int iParam0)//Position - 0x30ADB
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_996(int iParam0)//Position - 0x30AFB
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_997(int iParam0, bool bParam1)//Position - 0x30B26
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_424();
	}
	if (iParam0 > 0)
	{
		if (func_514() != func_22())
		{
			if (func_453(CAM::_0xDC9DA9E8789F5246()) == CAM::_0xDC9DA9E8789F5246())
			{
				Global_26366D.f_5D[func_999(iParam0)] = 1;
			}
		}
		iVar0 = func_999(159);
		if (func_998(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(157);
		if (func_998(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(148);
		if (func_998(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(164);
		if (func_998(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(142);
		if (func_998(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(152);
		if (func_998(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(166);
		if (func_998(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(170);
		if (func_998(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(173);
		if (func_998(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(179);
		if (func_998(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(200);
		if (func_998(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(201);
		if (func_998(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(182);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(183);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(185);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(186);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(180);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(195);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(197);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(198);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(207);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(208);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(209);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(214);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(215);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(216);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(217);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(218);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(219);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(220);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(221);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_998(int iParam0, int iParam1, bool bParam2)//Position - 0x311A2
{
	if (bParam2)
	{
		if ((!func_199(CAM::_0xDC9DA9E8789F5246(), 19) && !func_199(CAM::_0xDC9DA9E8789F5246(), 20)) && !func_199(CAM::_0xDC9DA9E8789F5246(), 9))
		{
			return 0;
		}
	}
	if (Global_26366D.f_5D[iParam0] == 1 && func_9(&(Global_26366D[iParam0 /*2*/])))
	{
		if (func_831(&(Global_26366D[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_26366D.f_5D[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_999(int iParam0)//Position - 0x31228
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return 4294967295;
}

void func_1000(int iParam0)//Position - 0x3142A
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_424();
	}
	if (iParam0 > 0)
	{
		if (func_514() != func_22())
		{
			Global_26366D.f_5D[func_999(iParam0)] = 1;
		}
		iVar0 = func_999(155);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(163);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(160);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(153);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(162);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(154);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(171);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(172);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(199);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(194);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(193);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(210);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(205);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(189);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(211);
		if (func_998(iVar0, Global_40001.f_30CE, 0))
		{
			func_264(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_1001(int iParam0)//Position - 0x3175B
{
	if (!func_192(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_12F[iParam0 /*3*/], func_1002(), 0))
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_12F[iParam0 /*3*/] = { func_1002() };
	}
	if (!func_192(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_122[iParam0 /*3*/], func_1002(), 0))
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_122[iParam0 /*3*/] = { func_1002() };
	}
}

Vector3 func_1002()//Position - 0x317DD
{
	vector3 vVar0;
	
	return vVar0;
}

void func_1003(int iParam0)//Position - 0x317E9
{
	if (!func_192(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_91[iParam0 /*3*/], func_1002(), 0))
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_91[iParam0 /*3*/] = { func_1002() };
	}
	if (!func_192(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_78[iParam0 /*3*/], func_1002(), 0))
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_78[iParam0 /*3*/] = { func_1002() };
	}
}

void func_1004()//Position - 0x31867
{
	struct<20> Var0;
	
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Global_1803FE = { Var0 };
	Global_1803FE.f_D = func_22();
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1801DE, 3))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_1801DE, 3);
	}
}

void func_1005(bool bParam0)//Position - 0x318C1
{
	if (bParam0)
	{
		if (!func_481(CAM::_0xDC9DA9E8789F5246(), 14))
		{
			func_1007(14);
		}
	}
	else if (func_481(CAM::_0xDC9DA9E8789F5246(), 14))
	{
		func_1006(14);
	}
}

void func_1006(int iParam0)//Position - 0x318F8
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_5), iParam0);
}

void func_1007(int iParam0)//Position - 0x31915
{
	MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_5), iParam0);
}

void func_1008(int iParam0)//Position - 0x31932
{
	if (func_245(CAM::_0xDC9DA9E8789F5246()))
	{
		if (CAM::_0xDC9DA9E8789F5246() != iParam0)
		{
			if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_1BB != iParam0)
			{
				Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_1BB = iParam0;
				if (iParam0 != func_22())
				{
				}
			}
		}
	}
}

int func_1009(int iParam0)//Position - 0x31981
{
	if (func_1010(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_20;
	}
	return 4294967295;
}

int func_1010(int iParam0, int iParam1)//Position - 0x319A4
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295 || (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295))
	{
		return 1;
	}
	return 0;
}

void func_1011(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x319DF
{
	int iVar0;
	
	if (func_680(iParam0, iParam1) && func_1028(iParam0, iParam1))
	{
		iVar0 = func_679(iParam0, iParam1);
		func_1015(iVar0, bParam2, bParam3);
		func_1012(iVar0, 1);
	}
}

void func_1012(int iParam0, bool bParam1)//Position - 0x31A1A
{
	if (!func_1014(iParam0))
	{
		return;
	}
	func_666(func_1013(iParam0), bParam1, 4294967295, 1);
	Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iParam0 /*12*/].f_6 = bParam1;
}

int func_1013(int iParam0)//Position - 0x31A56
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_1014(int iParam0)//Position - 0x31AB0
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_1015(int iParam0, bool bParam1, bool bParam2)//Position - 0x31AC5
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_908(CAM::_0xDC9DA9E8789F5246(), iParam0);
	if (!bParam1)
	{
		func_1027(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2634DD[iParam0];
		iVar0 = func_1026(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1975A4 = 4294967295;
		}
		func_1025(iParam0, 0, bParam2);
	}
	else if (func_1023(iParam0, bParam2))
	{
		iVar0 = func_1022(iVar2, 0);
		iVar3 = func_792(CAM::_0xDC9DA9E8789F5246(), iVar2);
		iVar4 = func_1021(iVar2, bParam2);
		iVar5 = func_1022(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1020(iVar2) && func_1019(CAM::_0xDC9DA9E8789F5246(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1027(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1018(CAM::_0xDC9DA9E8789F5246(), iVar2) > 0)
		{
			func_1017(iParam0, (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iParam0 /*12*/].f_2 - (func_1021(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1022(iVar2, bParam2) / func_1018(CAM::_0xDC9DA9E8789F5246(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1020(iVar2) && func_1019(CAM::_0xDC9DA9E8789F5246(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1016(CAM::_0xDC9DA9E8789F5246(), iVar2, iVar0, bParam2);
}

void func_1016(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x31C36
{
	int iVar0;
	
	if (iParam0 == func_22())
	{
		return;
	}
	if (func_673(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1841F3[iParam0 /*790*/].f_111.f_F8 = iParam2;
				}
				else
				{
					Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_1017(int iParam0, int iParam1)//Position - 0x31CAA
{
	if (iParam0 != 4294967295 && iParam1 != Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iParam0 /*12*/].f_2)
	{
		Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_1018(int iParam0, int iParam1)//Position - 0x31CEF
{
	int iVar0;
	
	if (iParam0 == func_22())
	{
		return 0;
	}
	if (func_673(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam1)
			{
				return Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1019(int iParam0, int iParam1)//Position - 0x31D4E
{
	int iVar0;
	
	if (iParam0 == func_22())
	{
		return 0;
	}
	if (func_673(iParam1) && func_1020(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam1)
			{
				return Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_B;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_1020(int iParam0)//Position - 0x31DB8
{
	return func_560(iParam0) == 5;
}

int func_1021(int iParam0, bool bParam1)//Position - 0x31DC8
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_560(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_40001.f_41B8;
			if (func_678(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				uVar0 = Global_40001.f_41BD;
			}
			break;
		
		case 3:
			uVar0 = Global_40001.f_41B7;
			if (func_678(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				uVar0 = Global_40001.f_41BC;
			}
			break;
		
		case 4:
			uVar0 = Global_40001.f_41B6;
			if (func_678(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				uVar0 = Global_40001.f_41BB;
			}
			break;
		
		case 0:
			uVar0 = Global_40001.f_41B4;
			if (func_678(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				uVar0 = Global_40001.f_41B9;
			}
			break;
		
		case 2:
			uVar0 = Global_40001.f_41B5;
			if (func_678(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				uVar0 = Global_40001.f_41BA;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_40001.f_51CE;
				if (func_678(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
				{
					uVar0 = Global_40001.f_51CF;
				}
			}
			else
			{
				uVar0 = Global_40001.f_51BE;
				if (func_678(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
				{
					uVar0 = Global_40001.f_51BF;
				}
			}
			break;
	}
	return uVar0;
}

int func_1022(int iParam0, bool bParam1)//Position - 0x31EFF
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_560(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_40001.f_41A5;
			if (func_678(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_41AE);
			}
			if (func_678(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_41B3);
			}
			break;
		
		case 3:
			iVar0 = Global_40001.f_41A6;
			if (func_678(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_41AD);
			}
			if (func_678(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_41B2);
			}
			break;
		
		case 4:
			iVar0 = Global_40001.f_41A7;
			if (func_678(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_41AC);
			}
			if (func_678(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_41B1);
			}
			break;
		
		case 0:
			iVar0 = Global_40001.f_41A8;
			if (func_678(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_41AA);
			}
			if (func_678(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_41AF);
			}
			break;
		
		case 2:
			iVar0 = Global_40001.f_41A9;
			if (func_678(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_41AB);
			}
			if (func_678(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_41B0);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_40001.f_51CB;
			}
			else
			{
				iVar0 = Global_40001.f_51BB;
			}
			if (func_678(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_40001.f_51CC);
				}
				else
				{
					iVar0 = (iVar0 - Global_40001.f_51BC);
				}
			}
			if (func_678(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_40001.f_51CD);
				}
				else
				{
					iVar0 = (iVar0 - Global_40001.f_51BD);
				}
			}
			if (func_1019(CAM::_0xDC9DA9E8789F5246(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_1023(int iParam0, bool bParam1)//Position - 0x32109
{
	if (bParam1)
	{
		return func_667(15384, 4294967295, 4294967295);
	}
	return func_667(func_1024(iParam0), 4294967295, 4294967295);
}

int func_1024(int iParam0)//Position - 0x3212E
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_1025(int iParam0, bool bParam1, bool bParam2)//Position - 0x32188
{
	if (bParam2)
	{
		func_666(15384, bParam1, 4294967295, 1);
		return;
	}
	func_666(func_1024(iParam0), bParam1, 4294967295, 1);
}

int func_1026(int iParam0, bool bParam1)//Position - 0x321B3
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2634DD[iParam0];
	iVar1 = func_908(CAM::_0xDC9DA9E8789F5246(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2634E4;
	}
	if (func_1020(iVar1))
	{
		if (func_1019(CAM::_0xDC9DA9E8789F5246(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_1027(int iParam0, int iParam1, bool bParam2)//Position - 0x321FB
{
	if (bParam2)
	{
		Global_2634E4 = iParam1;
		return;
	}
	Global_2634DD[iParam0] = iParam1;
}

int func_1028(int iParam0, int iParam1)//Position - 0x3221B
{
	int iVar0;
	
	if (func_680(iParam0, iParam1))
	{
		iVar0 = func_679(iParam0, iParam1);
		if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_4 > 0 && Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_1029()//Position - 0x3226F
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BD), 28);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BD), 29);
	func_1030(24);
}

void func_1030(int iParam0)//Position - 0x32297
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_7[iVar0]), iVar1);
}

void func_1031()//Position - 0x322C0
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_152);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_151);
}

void func_1032(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x322D6
{
	char* sVar0;
	struct<14> Var1;
	struct<17> Var2;
	struct<17> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<16> Var6;
	struct<18> Var7;
	struct<18> Var8;
	struct<19> Var9;
	struct<18> Var10;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	Var1 = Global_196EF6;
	Var1.f_1 = Global_196EF6.f_1;
	Var1.f_2 = Global_196EF6.f_2;
	Var1.f_3 = Global_196EF6.f_3;
	Var1.f_4 = Global_196EF6.f_4;
	Var1.f_5 = Global_196EF6.f_5;
	Var1.f_6 = Global_196EF6.f_6;
	Var1.f_7 = Global_196EF6.f_7;
	Var1.f_8 = Global_196EF6.f_8;
	Var1.f_9 = Global_196EF6.f_9;
	Var1.f_A = Global_196EF6.f_A;
	Var1.f_B = Global_196EF6.f_B;
	Var1.f_C = Global_196EF6.f_C;
	Var1.f_D = Global_196EF6.f_E;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
		{
			Var2 = { Var1 };
			Var2.f_E = Global_196EF6.f_F;
			Var2.f_F = Global_196EF6.f_10;
			Var2.f_10 = Global_196EF6.f_11;
			unk_0x6899EB66155B3500(&Var2);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
		{
			Var3 = { Var1 };
			Var3.f_E = Global_196EF6.f_F;
			Var3.f_F = iParam0;
			Var3.f_10 = iParam1;
			unk_0x536E90877E33B644(&Var3);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var4 = { Var1 };
			Var4.f_E = Global_196EF6.f_F;
			Var4.f_F = iParam0;
			unk_0x3A6ACC2FAB290CDC(&Var4);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
		{
			Var5 = { Var1 };
			Var5.f_E = Global_196EF6.f_F;
			Var5.f_F = iParam0;
			Var5.f_10 = iParam1;
			unk_0x4071F63CF95F324E(&Var5);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
		{
			Var6 = { Var1 };
			Var6.f_E = Global_196EF6.f_F;
			Var6.f_F = iParam0;
			unk_0x217787AB4F2FB1E9(&Var6);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
		{
			Var7 = { Var1 };
			Var7.f_E = Global_196EF6.f_F;
			Var7.f_F = iParam0;
			Var7.f_10 = iParam1;
			Var7.f_11 = iParam2;
			unk_0x63FAAF4414D8B3D5(&Var7);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
		{
			Var8 = { Var1 };
			Var8.f_E = iParam0;
			Var8.f_F = iParam1;
			Var8.f_10 = iParam2;
			Var8.f_11 = Global_196EF6.f_F;
			unk_0xFDDF5012CAC01420(&Var8);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var9 = { Var1 };
			Var9.f_F = iParam0;
			Var9.f_10 = iParam1;
			Var9.f_11 = iParam2;
			Var9.f_E = iParam3;
			Var9.f_12 = Global_196EF6.f_F;
			unk_0x26687349CB68A516(&Var9);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
		{
			Var10 = { Var1 };
			Var10.f_E = iParam0;
			Var10.f_F = iParam1;
			Var10.f_10 = iParam2;
			Var10.f_11 = Global_196EF6.f_F;
			unk_0x37D5D670955A5AA7(&Var10);
		}
	}
	func_1033();
}

void func_1033()//Position - 0x32574
{
	struct<18> Var0;
	
	Global_196EF6 = { Var0 };
}

void func_1034(struct<21> Param0)//Position - 0x32588
{
	func_1070(func_1071(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(3);
	func_1068(0, 4294967295, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_143, 60);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_144, 193);
	if (!func_1067())
	{
		func_986();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
		}
		func_1066();
		func_1035(0, 0);
		Local_144[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/] = 0;
	}
	else
	{
		func_986();
	}
}

void func_1035(int iParam0, int iParam1)//Position - 0x325F7
{
	func_1065();
	if (func_452(CAM::_0xDC9DA9E8789F5246()))
	{
		func_1038(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_1037(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				MISC::SET_BIT(&Global_196EE8, 0);
				break;
			}
	}
	if (!func_957() && !func_292(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		if (func_401())
		{
			func_230(3);
		}
	}
	func_230(4);
	if (func_515(0))
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39 = func_514();
	}
	if (func_417(iParam0))
	{
		func_790();
		Global_196F08.f_12 = func_770(func_355());
	}
	else if (func_422(func_1009(CAM::_0xDC9DA9E8789F5246())))
	{
		func_788();
		Global_196F3E.f_12 = func_770(func_355());
	}
	func_1036();
}

void func_1036()//Position - 0x326D3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_14B91C.f_216[iVar0 /*42*/].f_1 = func_22();
		Global_14B91C.f_216[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_1037(int iParam0, bool bParam1)//Position - 0x3270D
{
	return func_326(CAM::_0xDC9DA9E8789F5246(), iParam0, bParam1);
}

void func_1038(bool bParam0)//Position - 0x32721
{
	int iVar0;
	
	func_1030(33);
	func_1030(34);
	func_1030(35);
	func_1030(36);
	func_1030(37);
	func_1030(38);
	func_1030(39);
	func_1030(40);
	func_1030(43);
	func_1030(41);
	func_1030(54);
	func_1030(42);
	func_1030(47);
	func_1064(23);
	func_1064(24);
	func_1030(92);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BD), 2);
	func_1063();
	func_1058();
	func_1053();
	func_1048();
	func_1040();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_26862F.f_1313.f_E[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1039(3))
	{
		func_1064(3);
	}
	else if (func_1039(4))
	{
		func_1064(4);
	}
	else if (func_1039(5))
	{
		func_1064(5);
	}
	else if (func_1039(6))
	{
		func_1064(6);
	}
	else if (func_1039(7))
	{
		func_1064(7);
	}
	else if (((((((((((((((((func_1039(0) || func_1039(1)) || func_1039(2)) || func_1039(8)) || func_1039(9)) || func_1039(10)) || func_1039(11)) || func_1039(12)) || func_1039(13)) || func_1039(14)) || func_1039(15)) || func_1039(16)) || func_1039(17)) || func_1039(18)) || func_1039(19)) || func_1039(20)) || func_1039(21)) || func_1039(22))
	{
		func_1064(8);
		func_1064(0);
		func_1064(1);
		func_1064(2);
		func_1064(9);
		func_1064(10);
		func_1064(11);
		func_1064(12);
		func_1064(13);
		func_1064(14);
		func_1064(15);
		func_1064(16);
		func_1064(17);
		func_1064(18);
		func_1064(19);
		func_1064(20);
		func_1064(21);
		func_1064(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_26862F.f_1313.f_E[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_1039(int iParam0)//Position - 0x3297F
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_E[iVar0], iVar1);
}

void func_1040()//Position - 0x329A8
{
	int iVar0;
	
	if (func_1047())
	{
		func_1046(8);
		func_1046(9);
		func_1046(10);
		func_1046(12);
		func_1046(13);
		func_1046(14);
		func_1046(19);
		func_1046(20);
		func_1046(21);
		func_1046(22);
		func_1046(23);
		func_1046(24);
		func_1046(25);
		func_1046(26);
		func_1046(15);
		func_1046(16);
		func_1046(17);
		func_1046(18);
		func_1046(35);
		func_1046(45);
		func_1046(46);
		if (func_1045(11))
		{
			func_1046(11);
			iVar0 = func_536(7226, 4294967295, 0);
			MISC::SET_BIT(&iVar0, 2);
			func_534(7226, iVar0, 4294967295, 1, 0);
		}
	}
	if (func_1045(48))
	{
		if (func_1044(151, 3))
		{
			func_1043(151, 3);
		}
		func_1046(48);
	}
	if (func_1045(49))
	{
		if (func_1044(152, 3))
		{
			func_1043(152, 3);
		}
		func_1046(49);
	}
	if (func_1045(50))
	{
		if (func_1044(153, 3))
		{
			func_1043(153, 3);
		}
		func_1046(50);
	}
	if (func_1045(51))
	{
		if (func_1044(func_1041(), 3))
		{
			func_1043(func_1041(), 3);
		}
		func_1046(51);
	}
}

int func_1041()//Position - 0x32AF2
{
	if (func_1042())
	{
		Global_19E56.f_6D76[154 /*29*/].f_18[Global_38B1] = 1;
	}
	return 154;
}

int func_1042()//Position - 0x32B16
{
	int iVar0;
	
	iVar0 = func_87(CAM::_0xDC9DA9E8789F5246());
	if (((iVar0 != CAM::_0xDC9DA9E8789F5246() && iVar0 != func_22()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != 4294967295)
	{
		return 1;
	}
	return 0;
}

void func_1043(int iParam0, int iParam1)//Position - 0x32B57
{
	if (Global_75[iParam0 /*10*/].f_8 != 145)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_19E56.f_6D76[iParam0 /*29*/].f_C[iParam1] = 0;
			Global_19E56.f_6D76[iParam0 /*29*/].f_18[iParam1] = 0;
		}
	}
}

int func_1044(int iParam0, int iParam1)//Position - 0x32B9A
{
	if (Global_19E56.f_6D76[iParam0 /*29*/].f_C[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

bool func_1045(int iParam0)//Position - 0x32BBF
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_1A[iVar0], iVar1);
}

void func_1046(int iParam0)//Position - 0x32BE8
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_1A[iVar0]), iVar1);
}

int func_1047()//Position - 0x32C11
{
	if (((((((((((((((((((((func_1045(8) || func_1045(9)) || func_1045(10)) || func_1045(12)) || func_1045(11)) || func_1045(13)) || func_1045(14)) || func_1045(19)) || func_1045(20)) || func_1045(21)) || func_1045(22)) || func_1045(23)) || func_1045(24)) || func_1045(25)) || func_1045(26)) || func_1045(15)) || func_1045(16)) || func_1045(17)) || func_1045(18)) || func_1045(35)) || func_1045(45)) || func_1045(46))
	{
		return 1;
	}
	return 0;
}

void func_1048()//Position - 0x32D23
{
	if (func_1052())
	{
		func_1051(0);
		func_1051(1);
		func_1051(2);
		func_1051(3);
		func_1051(4);
		func_1051(5);
		if (func_1050(32))
		{
			if (func_1044(func_1049(), 3))
			{
				func_1043(func_1049(), 3);
			}
			func_1051(32);
		}
	}
}

int func_1049()//Position - 0x32D77
{
	if (func_1042())
	{
		Global_19E56.f_6D76[12 /*29*/].f_18[Global_38B1] = 1;
	}
	return 12;
}

bool func_1050(int iParam0)//Position - 0x32D9B
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_17[iVar0], iVar1);
}

void func_1051(int iParam0)//Position - 0x32DC4
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_17[iVar0]), iVar1);
}

int func_1052()//Position - 0x32DED
{
	if ((((func_1050(1) || func_1050(0)) || func_1050(2)) || func_1050(4)) || func_1050(5))
	{
		return 1;
	}
	return 0;
}

void func_1053()//Position - 0x32E2E
{
	if (func_1057())
	{
		func_1056(0);
		func_1056(1);
		func_1056(2);
		func_1056(3);
		func_1056(4);
		func_1056(5);
		func_1056(6);
		func_1056(7);
		if (func_1055(8))
		{
			func_1056(8);
		}
		if (func_1055(15))
		{
			if (func_1044(func_1054(), 3))
			{
				func_1043(func_1054(), 3);
			}
			func_1056(15);
		}
	}
}

int func_1054()//Position - 0x32E9B
{
	if (func_1042())
	{
		Global_19E56.f_6D76[20 /*29*/].f_18[Global_38B1] = 1;
	}
	return 20;
}

bool func_1055(int iParam0)//Position - 0x32EBF
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_15[iVar0], iVar1);
}

void func_1056(int iParam0)//Position - 0x32EE8
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_15[iVar0]), iVar1);
}

int func_1057()//Position - 0x32F11
{
	if ((((((((func_1055(0) || func_1055(1)) || func_1055(2)) || func_1055(3)) || func_1055(4)) || func_1055(5)) || func_1055(6)) || func_1055(7)) || func_1055(8))
	{
		return 1;
	}
	return 0;
}

void func_1058()//Position - 0x32F7F
{
	if (func_1062())
	{
		func_1061(0);
		func_1061(1);
		func_1061(2);
		func_1061(3);
		func_1061(4);
		func_1061(5);
		func_1061(6);
		func_1061(7);
		func_1061(8);
		func_1061(9);
		func_1061(10);
		func_1061(11);
		func_1061(12);
		if (func_1060(13))
		{
			if (func_1044(func_1059(), 3))
			{
				func_1043(func_1059(), 3);
			}
			func_1061(13);
		}
	}
}

int func_1059()//Position - 0x32FFB
{
	if (func_1042())
	{
		Global_19E56.f_6D76[76 /*29*/].f_18[Global_38B1] = 1;
	}
	return 76;
}

bool func_1060(int iParam0)//Position - 0x3301F
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_13[iVar0], iVar1);
}

void func_1061(int iParam0)//Position - 0x33048
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_13[iVar0]), iVar1);
}

int func_1062()//Position - 0x33071
{
	if ((((((((((((func_1060(0) || func_1060(1)) || func_1060(2)) || func_1060(3)) || func_1060(4)) || func_1060(5)) || func_1060(6)) || func_1060(7)) || func_1060(8)) || func_1060(9)) || func_1060(10)) || func_1060(11)) || func_1060(12))
	{
		return 1;
	}
	return 0;
}

void func_1063()//Position - 0x3310F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_26862F.f_1313.f_11[iVar0] = 0;
		iVar0++;
	}
}

void func_1064(int iParam0)//Position - 0x33137
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_E[iVar0]), iVar1);
}

void func_1065()//Position - 0x33160
{
	struct<14> Var0;
	
	Global_196EF6 = { Var0 };
	Global_196EF6.f_E = 0;
	Global_196EF6.f_F = 0;
}

void func_1066()//Position - 0x33182
{
}

int func_1067()//Position - 0x3318A
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
		if (func_981())
		{
			return 0;
		}
		if (func_979(155))
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

int func_1068(int iParam0, int iParam1, bool bParam2)//Position - 0x331E3
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_987();
			}
			else
			{
				return 0;
			}
		}
		if (!func_1069())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_987();
					}
					else
					{
						return 0;
					}
				}
				if (func_981())
				{
					if (!bParam2)
					{
						func_987();
					}
					else
					{
						return 0;
					}
				}
				if (func_979(155))
				{
					if (!bParam2)
					{
						func_987();
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
					func_987();
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
				func_987();
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
			func_987();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_1069()//Position - 0x332F8
{
	return Global_140842;
}

void func_1070(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x33304
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_987();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_10);
}

int func_1071(int iParam0)//Position - 0x33323
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

int func_1072(int iParam0, bool bParam1, bool bParam2)//Position - 0x339B9
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

