#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	float fLocal_50 = 0f;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 16;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
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
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
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
	var uLocal_94 = 0;
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
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
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
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
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
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	vector3 vLocal_232 = { 0f, 0f, 0f };
	vector3 vLocal_233 = { 0f, 0f, 0f };
	vector3 vLocal_234 = { 0f, 0f, 0f };
	vector3 vLocal_235 = { 0f, 0f, 0f };
	vector3 vLocal_236 = { 0f, 0f, 0f };
	vector3 vLocal_237 = { 0f, 0f, 0f };
	vector3 vLocal_238 = { 0f, 0f, 0f };
	vector3 vLocal_239 = { 0f, 0f, 0f };
	vector3 vLocal_240 = { 0f, 0f, 0f };
	vector3 vLocal_241 = { 0f, 0f, 0f };
	vector3 vLocal_242 = { 0f, 0f, 0f };
	vector3 vLocal_243 = { 0f, 0f, 0f };
	vector3 vLocal_244 = { 0f, 0f, 0f };
	vector3 vLocal_245 = { 0f, 0f, 0f };
	bool bLocal_246 = 0;
	bool bLocal_247 = 0;
	bool bLocal_248 = 0;
	bool bLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	var uLocal_255[2] = { 0, 0 };
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258[2] = { 0, 0 };
	int iLocal_259[5] = { 0, 0, 0, 0, 0 };
	int iLocal_260[3] = { 0, 0, 0 };
	int iLocal_261[2] = { 0, 0 };
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	var uLocal_270 = 8;
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
	var uLocal_417 = 1;
	struct<2> Local_418 = { 0, 5 } ;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 5;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	var uVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iLocal_0 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	iLocal_19 = 4294967295;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_47 = HUD::_0x4A9923385BDB9DAD();
	iLocal_48 = HUD::_GET_BLIP_INFO_ID_ITERATOR();
	fLocal_50 = -1f;
	iLocal_218 = 1;
	iLocal_227 = 4294967295;
	iLocal_228 = 4294967295;
	vLocal_236 = { 370.2576f, -1597.488f, 35.94954f };
	vLocal_237 = { 824.992f, -1289.267f, 27.24564f };
	vLocal_238 = { 450.1889f, -981.6754f, 42.69174f };
	vLocal_239 = { -1088.37f, -842.2911f, 30.27554f };
	vLocal_240 = { 608.9076f, 0.806411f, 100.2497f };
	vLocal_241 = { -562.0159f, -130.8113f, 37.4369f };
	vLocal_242 = { 1855.237f, 3683.236f, 33.29165f };
	vLocal_243 = { -443.5063f, 6016.231f, 30.71787f };
	vLocal_244 = { -1034.6f, 4918.6f, 205.9f };
	iVar0 = 0;
	iVar2 = 0;
	vLocal_232 = { ScriptParam_418.f_1[0 /*3*/] };
	Var1 = joaat("g_m_y_mexgoon_02");
	Var1.f_1 = joaat("hc_gunman");
	Var1.f_2 = joaat("mp_m_shopkeep_01");
	Var1.f_3 = joaat("a_f_y_soucent_01");
	Var1.f_4 = joaat("a_m_m_soucent_01");
	Var1.f_5 = joaat("s_m_y_cop_01");
	Var1.f_6 = joaat("POLICE3");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_258[0]))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_258[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_258[0]);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_258[1]))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_258[1]))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_258[1]);
			}
		}
		func_239(Var1, &iLocal_258, bVar4);
	}
	func_238(&uLocal_270, 3);
	if (func_207(vLocal_232, 4294967295, 0, 0, 0))
	{
		func_204(4294967295);
	}
	else
	{
		HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
	}
	while (iVar0 != 7)
	{
		iVar8 = 0;
		func_201(&uLocal_270);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && !func_200())
		{
			iVar8 = 0;
			iVar0 = 7;
			func_239(Var1, &iLocal_258, bVar4);
		}
		if (!func_200())
		{
			if (func_199() || func_198(7))
			{
				iVar8 = 0;
				iVar0 = 7;
				func_239(Var1, &iLocal_258, bVar4);
			}
		}
		RECORDING::_0x208784099002BC30("RE_GD", 0);
		if (func_197())
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_258[0]))
			{
				PED::DELETE_PED(&(iLocal_258[0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_258[1]))
			{
				PED::DELETE_PED(&(iLocal_258[1]));
			}
			while (!func_196())
			{
				SYSTEM::WAIT(0);
			}
			func_192(9, 0);
			func_183(4294967295, 0);
			func_180();
			iVar8 = 0;
			iVar0 = 7;
			func_239(Var1, &iLocal_258, bVar4);
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (PED::IS_COP_PED_IN_AREA_3D(func_179(CAM::_0xDC9DA9E8789F5246()) - Vector(10f, 20f, 20f), func_179(CAM::_0xDC9DA9E8789F5246()) + Vector(10f, 20f, 20f)) || VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(func_179(CAM::_0xDC9DA9E8789F5246()) - Vector(10f, 20f, 20f), func_179(CAM::_0xDC9DA9E8789F5246()) + Vector(10f, 20f, 20f)))
			{
				if ((((!PED::IS_PED_INJURED(iLocal_258[0]) && !PED::IS_PED_INJURED(iLocal_258[1])) && PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0)) && PED::IS_PED_IN_VEHICLE(iLocal_258[0], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0)) && PED::IS_PED_IN_VEHICLE(iLocal_258[1], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)) < 0.2f)
					{
						if (iLocal_228 == 4294967295)
						{
							iLocal_228 = MISC::GET_GAME_TIMER();
						}
					}
					else
					{
						iLocal_228 = 4294967295;
					}
					if (iLocal_228 != 4294967295 && MISC::GET_GAME_TIMER() > iLocal_228 + 1000)
					{
						if (!func_178())
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_LOSE", 4, 0, 0, 0);
						}
						if (iLocal_228 != 4294967295 && MISC::GET_GAME_TIMER() > iLocal_228 + 10000)
						{
							func_167();
							SYSTEM::WAIT(0);
							func_169(&uLocal_53, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
							if (!PED::IS_PED_INJURED(iLocal_258[0]))
							{
								BRAIN::OPEN_SEQUENCE_TASK(&iLocal_265);
								BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								BRAIN::TASK_SMART_FLEE_PED(0, AUDIO::_0x0626A247D2405330(), 1000f, 4294967295, 0, 0);
								CUTSCENE::_0x8D9DF6ECA8768583(iLocal_265);
								BRAIN::TASK_PERFORM_SEQUENCE(iLocal_258[0], iLocal_265);
								BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_265);
								PED::SET_PED_KEEP_TASK(iLocal_258[0], true);
							}
							if (!PED::IS_PED_INJURED(iLocal_258[1]))
							{
								BRAIN::OPEN_SEQUENCE_TASK(&iLocal_265);
								BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 500, 0);
								BRAIN::TASK_SMART_FLEE_PED(0, AUDIO::_0x0626A247D2405330(), 1000f, 4294967295, 0, 0);
								CUTSCENE::_0x8D9DF6ECA8768583(iLocal_265);
								BRAIN::TASK_PERFORM_SEQUENCE(iLocal_258[1], iLocal_265);
								BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_265);
								PED::SET_PED_KEEP_TASK(iLocal_258[1], true);
							}
							iVar8 = 0;
							iVar0 = 7;
							func_239(Var1, &iLocal_258, bVar4);
						}
					}
				}
			}
		}
		if (iVar2 > 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_266, 3261945386);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_266, 1166638144);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 3261945386, iLocal_266);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1166638144, iLocal_266);
			}
			else
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_266, 3261945386);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_266, 1166638144);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 3261945386, iLocal_266);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, iLocal_266);
			}
		}
		if ((iVar2 > 1 && iVar2 < 7) && !iLocal_253)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_257))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_257, AUDIO::_0x0626A247D2405330(), 1))
				{
					func_167();
					SYSTEM::WAIT(0);
					if (!PED::IS_PED_INJURED(iLocal_258[0]))
					{
						BRAIN::TASK_SMART_FLEE_PED(iLocal_258[0], AUDIO::_0x0626A247D2405330(), 200f, 4294967295, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_258[1]))
					{
						BRAIN::TASK_SMART_FLEE_PED(iLocal_258[1], AUDIO::_0x0626A247D2405330(), 200f, 4294967295, 0, 0);
					}
					iVar8 = 0;
					iVar0 = 7;
					func_239(Var1, &iLocal_258, bVar4);
				}
			}
		}
		if ((iVar2 > 7 && iVar2 < 18) && !iLocal_253)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_258[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_258[1]))
			{
				if (PED::IS_PED_INJURED(iLocal_258[1]) || !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_258[0], AUDIO::_0x0626A247D2405330(), 80f, 80f, 80f, 0, 1, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_258[0]))
					{
						BRAIN::OPEN_SEQUENCE_TASK(&iLocal_265);
						BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						BRAIN::TASK_SMART_FLEE_PED(0, AUDIO::_0x0626A247D2405330(), 200f, 4294967295, 0, 0);
						CUTSCENE::_0x8D9DF6ECA8768583(iLocal_265);
						BRAIN::TASK_PERFORM_SEQUENCE(iLocal_258[0], iLocal_265);
						BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_265);
						PED::SET_PED_KEEP_TASK(iLocal_258[0], true);
						func_167();
						SYSTEM::WAIT(0);
						func_169(&uLocal_53, "REGETAU", "REAWA_FKDB", 4, 0, 0, 0);
					}
					iVar8 = 0;
					iVar0 = 7;
					func_239(Var1, &iLocal_258, bVar4);
				}
				if (PED::IS_PED_INJURED(iLocal_258[0]) || !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_258[1], AUDIO::_0x0626A247D2405330(), 80f, 80f, 80f, 0, 1, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_258[1]))
					{
						BRAIN::OPEN_SEQUENCE_TASK(&iLocal_265);
						BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						BRAIN::TASK_SMART_FLEE_PED(0, AUDIO::_0x0626A247D2405330(), 200f, 4294967295, 0, 0);
						CUTSCENE::_0x8D9DF6ECA8768583(iLocal_265);
						BRAIN::TASK_PERFORM_SEQUENCE(iLocal_258[1], iLocal_265);
						BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_265);
						PED::SET_PED_KEEP_TASK(iLocal_258[1], true);
						func_167();
						SYSTEM::WAIT(0);
						func_169(&uLocal_53, "REGETAU", "REAWA_DEAD1", 4, 0, 0, 0);
					}
					iVar8 = 0;
					iVar0 = 7;
					func_239(Var1, &iLocal_258, bVar4);
				}
			}
		}
		if (func_166(&iLocal_258, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 180f))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_258[0], AUDIO::_0x0626A247D2405330(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_258[0], AUDIO::_0x0626A247D2405330(), 1))
			{
				iLocal_253 = 1;
			}
			if (iLocal_253)
			{
				if (!bLocal_248)
				{
					func_165();
				}
				if (!bLocal_249)
				{
					if (!PED::IS_PED_INJURED(iLocal_257))
					{
						BRAIN::OPEN_SEQUENCE_TASK(&iLocal_265);
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_257, "random@getawaydriver", "idle_a", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_257, "random@getawaydriver", "idle_2_hands_up", 3))
						{
							BRAIN::TASK_PLAY_ANIM(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, 4294967295, 0, 0, 0, 0, 0);
						}
						BRAIN::TASK_LOOK_AT_ENTITY(0, AUDIO::_0x0626A247D2405330(), 10000, 2052, 4);
						BRAIN::TASK_GO_TO_ENTITY(0, AUDIO::_0x0626A247D2405330(), 4294967295, 5f, 3f, 1073741824, 0);
						BRAIN::TASK_PLAY_ANIM(0, "random@getawaydriver", "gesture_nod_yes_soft", 8f, -8f, 4294967295, 48, 0, 0, 0, 0);
						BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, AUDIO::_0x0626A247D2405330(), 3000);
						BRAIN::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
						CUTSCENE::_0x8D9DF6ECA8768583(iLocal_265);
						BRAIN::TASK_PERFORM_SEQUENCE(iLocal_257, iLocal_265);
						BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_265);
						PED::SET_PED_KEEP_TASK(iLocal_257, true);
						bLocal_249 = true;
					}
				}
			}
			else
			{
				iVar8 = 0;
				iVar0 = 7;
				func_239(Var1, &iLocal_258, bVar4);
			}
			if (bLocal_248)
			{
				GRAPHICS::_0x54E22EA2C1956A8D(1f);
				PLAYER::SET_POLICE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 0);
				if (!PED::IS_PED_INJURED(iLocal_260[0]))
				{
					if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_260[0], AUDIO::_0x0626A247D2405330(), 4f, 4f, 4f, 0, 1, 0))
						{
							if (!func_178())
							{
								BRAIN::TASK_LOOK_AT_ENTITY(iLocal_260[0], AUDIO::_0x0626A247D2405330(), 1000, 2052, 4);
								func_169(&uLocal_53, "REGETAU", "REAWA_THX", 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
							}
							else
							{
								if (!PED::IS_PED_INJURED(iLocal_260[0]))
								{
									ENTITY::SET_ENTITY_HEALTH(iLocal_260[0], false);
								}
								if (!PED::IS_PED_INJURED(iLocal_260[1]))
								{
									ENTITY::SET_ENTITY_HEALTH(iLocal_260[1], false);
								}
								if (SYSTEM::TIMERB() > 3000)
								{
									while (!func_196())
									{
										SYSTEM::WAIT(0);
									}
									func_192(9, 0);
									func_164(5);
									func_183(4294967295, 0);
									func_180();
									iVar8 = 0;
									iVar0 = 7;
									func_239(Var1, &iLocal_258, bVar4);
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_260[0], AUDIO::_0x0626A247D2405330(), 120f, 120f, 120f, 0, 1, 0))
						{
							iVar8 = 0;
							iVar0 = 7;
							func_239(Var1, &iLocal_258, bVar4);
						}
					}
					else
					{
						NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_260[0]);
						func_167();
						SYSTEM::WAIT(0);
						iVar8 = 0;
						iVar0 = 7;
						func_239(Var1, &iLocal_258, bVar4);
					}
				}
				else if (PED::IS_PED_INJURED(iLocal_257))
				{
					iVar8 = 0;
					iVar0 = 7;
					func_239(Var1, &iLocal_258, bVar4);
				}
			}
			if (bLocal_249)
			{
				if (!PED::IS_PED_INJURED(iLocal_257))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_257, AUDIO::_0x0626A247D2405330(), 4f, 4f, 4f, 0, 1, 0))
					{
						if (!func_178())
						{
							BRAIN::TASK_LOOK_AT_ENTITY(iLocal_257, AUDIO::_0x0626A247D2405330(), 3000, 2048, 2);
							func_169(&uLocal_53, "REGETAU", "REAWA_THANKS", 4, 0, 0, 0);
						}
						else
						{
							if (!PED::IS_PED_INJURED(iLocal_257))
							{
								PED::SET_PED_CAN_BE_TARGETTED(iLocal_257, true);
							}
							while (func_178())
							{
								SYSTEM::WAIT(0);
							}
							while (!func_196())
							{
								SYSTEM::WAIT(0);
							}
							EVENT::REMOVE_ALL_SHOCKING_EVENTS(1);
							func_192(9, 0);
							func_164(5);
							func_183(4294967295, 0);
							func_180();
							iVar8 = 0;
							iVar0 = 7;
							func_239(Var1, &iLocal_258, bVar4);
						}
					}
					else if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_257, AUDIO::_0x0626A247D2405330(), 120f, 120f, 120f, 0, 1, 0))
					{
						iVar8 = 0;
						iVar0 = 7;
						func_239(Var1, &iLocal_258, bVar4);
					}
				}
				else if (PED::IS_PED_INJURED(iLocal_260[0]))
				{
					iVar8 = 0;
					iVar0 = 7;
					func_239(Var1, &iLocal_258, bVar4);
				}
			}
		}
		switch (iVar0)
		{
			case 0:
				if (func_152())
				{
					iVar8 = 0;
					iVar0 = 7;
					func_239(Var1, &iLocal_258, bVar4);
				}
				if (func_140(1, Var1))
				{
					iVar8 = 0;
					iVar0 = 2;
				}
				break;
			
			case 2:
				if (func_128(3))
				{
					iLocal_269 = 1;
					func_127(1);
					iVar7 = MISC::GET_GAME_TIMER();
					iVar0 = 4;
				}
				else
				{
					iVar0 = 6;
				}
				iVar8 = 0;
				break;
			
			case 4:
				iVar8 = 0;
				MISC::SET_BIT(&uVar3, 4);
				MISC::SET_BIT(&uVar3, 1);
				MISC::SET_BIT(&uVar3, 5);
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
					{
						if (func_126())
						{
							if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
							{
								if ((VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 0) && VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 2, 0)) && VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, 0))
								{
									iVar0 = 5;
								}
							}
						}
					}
				}
				else
				{
					iVar0 = 6;
				}
				iVar0 = 5;
				PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), &uVar5, &uVar6, 1, 1077936128, 0);
				if (func_125(iVar7, 20000))
				{
					iVar0 = 6;
				}
				if (iVar0 != 5)
				{
				}
				break;
			
			case 5:
				if (iVar2 > 1)
				{
					if (!func_200())
					{
						if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
						{
							iVar8 = 0;
							iVar0 = 6;
							break;
						}
						if (!iLocal_252)
						{
							if (PED::IS_PED_SHOOTING_IN_AREA(AUDIO::_0x0626A247D2405330(), Vector(28.4601f, -1565.293f, 61.5891f) - Vector(30f, 30f, 30f), Vector(28.4601f, -1565.293f, 61.5891f) + Vector(30f, 30f, 30f), 0, 1))
							{
								iVar9 = 0;
								while (iVar9 < iLocal_259)
								{
									if (!PED::IS_PED_INJURED(iLocal_259[iVar9]))
									{
										BRAIN::TASK_SMART_FLEE_PED(iLocal_259[iVar9], AUDIO::_0x0626A247D2405330(), 1000f, 4294967295, 0, 0);
										PED::SET_PED_KEEP_TASK(iLocal_259[iVar9], true);
									}
									iVar9++;
								}
								if (!PED::IS_PED_INJURED(iLocal_257))
								{
									BRAIN::TASK_SMART_FLEE_PED(iLocal_257, AUDIO::_0x0626A247D2405330(), 1000f, 4294967295, 0, 0);
									PED::SET_PED_KEEP_TASK(iLocal_257, true);
								}
								iLocal_252 = 1;
							}
						}
					}
				}
				else if (func_152())
				{
					iVar8 = 0;
					iVar0 = 7;
					func_239(Var1, &iLocal_258, bVar4);
				}
				if (iVar0 != 6)
				{
					if (func_1(&iVar2, Var1, &iLocal_258, &iVar8, &bVar4))
					{
						iVar0 = 6;
						break;
					}
				}
				break;
			
			case 6:
				iVar8 = 0;
				iVar0 = 7;
				func_239(Var1, &iLocal_258, bVar4);
				break;
				break;
			
			case 7:
				iVar8 = 0;
				break;
		}
		if (iVar0 != 7)
		{
			SYSTEM::WAIT(iVar8);
		}
	}
	func_239(Var1, &iLocal_258, bVar4);
}

int func_1(int iParam0, struct<5> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, bool bParam8)//Position - 0xE0E
{
	int iVar0;
	vector3 vVar1[2];
	float fVar2[2];
	vector3 vVar3;
	float fVar4;
	vector3 vVar5[5];
	float fVar6;
	vector3 vVar7[5];
	int iVar8;
	vector3 vVar9;
	int iVar10[3];
	vector3 vVar11;
	vector3 vVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	vVar5[0 /*3*/] = { -56.7157f, -1317.766f, 27.9845f };
	vVar5[1 /*3*/] = { 457.5345f, -813.3361f, 26.511f };
	vVar5[2 /*3*/] = { 884.047f, -2239.43f, 29.4387f };
	vVar5[3 /*3*/] = { -1339.328f, -762.4225f, 19.314f };
	vVar5[4 /*3*/] = { -461.6898f, 283.665f, 82.2492f };
	vVar7[0 /*3*/] = { -45.2654f, -1290.126f, 28.1977f };
	vVar7[1 /*3*/] = { 470.193f, -731.1867f, 26.412f };
	vVar7[2 /*3*/] = { 889.9938f, -2177.638f, 29.5195f };
	vVar7[3 /*3*/] = { -1334.826f, -792.1527f, 18.8175f };
	vVar7[4 /*3*/] = { -424.5901f, 288.3558f, 82.2293f };
	switch (*iParam0)
	{
		case 0:
			if (func_124(vLocal_232, 300f, 1))
			{
				*iParam0 = 1;
			}
			break;
		
		case 1:
			*iParam7 = 0;
			func_115(39, 1);
			func_115(40, 1);
			func_115(41, 1);
			func_115(42, 1);
			func_115(43, 1);
			func_115(44, 1);
			if (func_114() == 0)
			{
				func_113(&uLocal_53, 0, AUDIO::_0x0626A247D2405330(), "MICHAEL", 0, 1);
			}
			else if (func_114() == 1)
			{
				func_113(&uLocal_53, 0, AUDIO::_0x0626A247D2405330(), "FRANKLIN", 0, 1);
			}
			else if (func_114() == 2)
			{
				func_113(&uLocal_53, 0, AUDIO::_0x0626A247D2405330(), "TREVOR", 0, 1);
			}
			if (SYSTEM::VDIST(vLocal_232, 933.83f, 3640.22f, 32.36f) < 20f)
			{
				vVar1[0 /*3*/] = { 943.1853f, 3647.218f, 31.3603f };
				fVar2[0] = 58.2967f;
				vVar1[1 /*3*/] = { 941.3207f, 3650.301f, 31.3111f };
				fVar2[1] = 92.7793f;
				vVar3 = { 939.2422f, 3649.755f, 31.3536f };
				fVar4 = 260.4475f;
			}
			else if (SYSTEM::VDIST(vLocal_232, 57.86f, -1562.4f, 29.47f) < 20f)
			{
				vVar1[0 /*3*/] = { 66.0644f, -1564.218f, 28.4602f };
				fVar2[0] = 198.4093f;
				vVar1[1 /*3*/] = { 63.5055f, -1568.178f, 28.4602f };
				fVar2[1] = 254.133f;
				vVar3 = { 68.4259f, -1569.067f, 28.6027f };
				fVar4 = 64.1114f;
			}
			iLocal_231 = PLAYER::GET_PLAYER_GROUP(CAM::_0xDC9DA9E8789F5246());
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), false, 1);
			PED::ADD_SCENARIO_BLOCKING_AREA(vLocal_232 - Vector(50f, 50f, 50f), vLocal_232 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
			PATHFIND::SET_PED_PATHS_IN_AREA(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), false, 0);
			PATHFIND::SET_ROADS_IN_AREA(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), false, 1);
			STREAMING::REQUEST_MODEL(joaat("PICADOR"));
			STREAMING::REQUEST_MODEL(joaat("STANIER"));
			STREAMING::REQUEST_MODEL(joaat("PATRIOT"));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("PICADOR")) || !STREAMING::HAS_MODEL_LOADED(joaat("STANIER"))) || !STREAMING::HAS_MODEL_LOADED(joaat("PATRIOT")))
			{
				SYSTEM::WAIT(0);
			}
			iVar10[0] = VEHICLE::CREATE_VEHICLE(joaat("PICADOR"), 59.5209f, -1547.228f, 28.4602f, 49.1762f, true, true, false);
			iVar10[1] = VEHICLE::CREATE_VEHICLE(joaat("STANIER"), 33.3296f, -1577.537f, 28.2826f, 51.8183f, true, true, false);
			iVar10[2] = VEHICLE::CREATE_VEHICLE(joaat("PATRIOT"), 48.8282f, -1582.706f, 28.4603f, 226.8345f, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar10[0], 1084227584);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar10[1], 1084227584);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar10[2], 1084227584);
			if (iLocal_229 == 0)
			{
			}
			PED::ADD_RELATIONSHIP_GROUP("reCriminals", &iLocal_266);
			PED::ADD_RELATIONSHIP_GROUP("reShopKeep", &iLocal_267);
			PED::ADD_RELATIONSHIP_GROUP("reCops", &iLocal_268);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_266, 2761840924);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_268, iLocal_266);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2761840924, iLocal_266);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2761840924, iLocal_268);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_268, 2761840924);
			(*uParam6)[0] = PED::CREATE_PED(22, Param1, vVar1[0 /*3*/], fVar2[0], 1, true);
			ENTITY::SET_ENTITY_HEALTH((*uParam6)[0], true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam6)[0], iLocal_266);
			WEAPON::GIVE_WEAPON_TO_PED((*uParam6)[0], joaat("weapon_appistol"), 4294967295, true, true);
			PED::SET_PED_MONEY((*uParam6)[0], MISC::GET_RANDOM_INT_IN_RANGE(800, 2000));
			PED::SET_PED_CONFIG_FLAG((*uParam6)[0], 206, true);
			PED::SET_PED_FLEE_ATTRIBUTES((*uParam6)[0], 2, false);
			PED::SET_PED_FLEE_ATTRIBUTES((*uParam6)[0], 1024, true);
			PED::SET_PED_FLEE_ATTRIBUTES((*uParam6)[0], 65536, true);
			PED::SET_PED_COMPONENT_VARIATION((*uParam6)[0], 9, 1, 0, 0);
			func_113(&uLocal_53, 2, (*uParam6)[0], "REGETRobber2", 0, 1);
			(*uParam6)[1] = PED::CREATE_PED(22, Param1.f_1, vVar1[1 /*3*/], fVar2[1], 1, true);
			ENTITY::SET_ENTITY_HEALTH((*uParam6)[1], true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param1.f_1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam6)[1], iLocal_266);
			WEAPON::GIVE_WEAPON_TO_PED((*uParam6)[1], joaat("weapon_pistol"), 4294967295, true, true);
			PED::SET_PED_MONEY((*uParam6)[1], MISC::GET_RANDOM_INT_IN_RANGE(800, 2000));
			PED::SET_PED_CONFIG_FLAG((*uParam6)[1], 206, true);
			PED::SET_PED_FLEE_ATTRIBUTES((*uParam6)[1], 2, false);
			PED::SET_PED_FLEE_ATTRIBUTES((*uParam6)[1], 1024, true);
			PED::SET_PED_FLEE_ATTRIBUTES((*uParam6)[1], 65536, true);
			PED::SET_PED_COMPONENT_VARIATION((*uParam6)[1], 0, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam6)[1], 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam6)[1], 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam6)[1], 3, 6, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam6)[1], 4, 6, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam6)[1], 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam6)[1], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam6)[1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam6)[1], 10, 1, 0, 0);
			AUDIO::SET_AMBIENT_VOICE_NAME((*uParam6)[1], "PACKIE_AI_Norm_Part1_Booth");
			func_113(&uLocal_53, 1, (*uParam6)[1], "PACKIE", 0, 1);
			iLocal_257 = PED::CREATE_PED(4, Param1.f_2, vVar3, fVar4, 1, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param1.f_2);
			ENTITY::SET_ENTITY_HEALTH(iLocal_257, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_257, iLocal_267);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_257, "A_M_Y_Business_01_CHINESE_MINI_01");
			func_113(&uLocal_53, 3, iLocal_257, "StoreOwner", 0, 1);
			iLocal_259[0] = PED::CREATE_PED(5, Param1.f_3, 62.8929f, -1575.52f, 28.6027f, 326.1814f, 1, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param1.f_3);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_259[0], 17, true);
			BRAIN::TASK_COWER(iLocal_259[0], 4294967295);
			iLocal_259[2] = PED::CREATE_PED(5, Param1.f_3, 61.6538f, -1555.256f, 28.4601f, 206.7004f, 1, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param1.f_3);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_259[2], 17, true);
			BRAIN::TASK_START_SCENARIO_IN_PLACE(iLocal_259[2], "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 0, 0);
			iLocal_259[3] = PED::CREATE_PED(4, Param1.f_4, 75.9343f, -1556.306f, 28.6028f, 147.2908f, 1, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param1.f_4);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_259[3], 17, true);
			*iParam0 = 2;
			break;
		
		case 2:
			if (((((!ENTITY::IS_ENTITY_DEAD(iLocal_257, 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_259[0], 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_259[2], 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_259[3], 0)) && !ENTITY::IS_ENTITY_DEAD((*uParam6)[0], 0)) && !ENTITY::IS_ENTITY_DEAD((*uParam6)[1], 0))
			{
				if (((((PED::_0x7350823473013C02(iLocal_257) && PED::_0x7350823473013C02(iLocal_259[0])) && PED::_0x7350823473013C02(iLocal_259[2])) && PED::_0x7350823473013C02(iLocal_259[3])) && PED::_0x7350823473013C02((*uParam6)[0])) && PED::_0x7350823473013C02((*uParam6)[1]))
				{
					STREAMING::REQUEST_ANIM_DICT("random@getawaydriver@thugs");
					STREAMING::REQUEST_ANIM_DICT("combat@gestures@pistol@halt");
					STREAMING::REQUEST_ANIM_DICT("misslamar1ig_20");
					STREAMING::REQUEST_ANIM_DICT("random@getawaydriver");
					while (((!STREAMING::HAS_ANIM_DICT_LOADED("random@getawaydriver@thugs") || !STREAMING::HAS_ANIM_DICT_LOADED("combat@gestures@pistol@halt")) || !STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_20")) || !STREAMING::HAS_ANIM_DICT_LOADED("random@getawaydriver"))
					{
						SYSTEM::WAIT(0);
					}
					if (!PED::IS_PED_INJURED(iLocal_257))
					{
						BRAIN::TASK_HANDS_UP(iLocal_257, 4294967295, 0, 4294967295, 0);
						if (!PED::IS_PED_INJURED((*uParam6)[0]))
						{
							BRAIN::TASK_PLAY_ANIM((*uParam6)[0], "random@getawaydriver@thugs", "base_a", 4f, -2f, 4294967295, 1, 0, 0, 0, 0);
							BRAIN::TASK_LOOK_AT_ENTITY((*uParam6)[0], AUDIO::_0x0626A247D2405330(), 4294967295, 2052, 4);
						}
						if (!PED::IS_PED_INJURED((*uParam6)[1]))
						{
							BRAIN::TASK_PLAY_ANIM((*uParam6)[1], "random@getawaydriver@thugs", "base_b", 4f, -2f, 4294967295, 1, 0, 0, 0, 0);
							BRAIN::TASK_LOOK_AT_ENTITY((*uParam6)[1], AUDIO::_0x0626A247D2405330(), 4294967295, 2052, 4);
						}
					}
					SYSTEM::SETTIMERA(0);
					*iParam0 = 3;
				}
			}
			break;
		
		case 3:
			if (SYSTEM::TIMERA() > 0)
			{
				if (!PED::IS_PED_INJURED(iLocal_259[0]))
				{
					func_111(iLocal_259[0], "GENERIC_SHOCKED_HIGH", 24);
				}
			}
			if (SYSTEM::TIMERA() > 1000)
			{
				if (!PED::IS_PED_INJURED(iLocal_259[2]))
				{
					func_111(iLocal_259[2], "GENERIC_FRIGHTENED_HIGH", 24);
				}
			}
			if (SYSTEM::TIMERA() > 2000)
			{
				if (!PED::IS_PED_INJURED(iLocal_259[3]))
				{
					func_111(iLocal_259[3], "GENERIC_FRIGHTENED_HIGH", 24);
					SYSTEM::SETTIMERA(0);
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), 81.71976f, -1530.834f, 28.17651f, 26.78526f, -1595.693f, 58.29443f, 32.875f, 0, true, 0))
			{
				if (!iLocal_252)
				{
					if (!PED::IS_PED_INJURED(iLocal_259[0]))
					{
						BRAIN::TASK_SMART_FLEE_COORD(iLocal_259[0], vLocal_232, 200f, 4294967295, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_259[2]))
					{
						BRAIN::OPEN_SEQUENCE_TASK(&iLocal_265);
						BRAIN::TASK_PAUSE(0, 250);
						BRAIN::TASK_SMART_FLEE_COORD(0, vLocal_232, 200f, 4294967295, 0, 0);
						CUTSCENE::_0x8D9DF6ECA8768583(iLocal_265);
						BRAIN::TASK_PERFORM_SEQUENCE(iLocal_259[2], iLocal_265);
						BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_265);
					}
					if (!PED::IS_PED_INJURED(iLocal_259[3]))
					{
						BRAIN::OPEN_SEQUENCE_TASK(&iLocal_265);
						BRAIN::TASK_PAUSE(0, 500);
						BRAIN::TASK_SMART_FLEE_COORD(0, vLocal_232, 200f, 4294967295, 0, 0);
						CUTSCENE::_0x8D9DF6ECA8768583(iLocal_265);
						BRAIN::TASK_PERFORM_SEQUENCE(iLocal_259[3], iLocal_265);
						BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_265);
					}
					iLocal_252 = 1;
				}
			}
			if (func_72(uParam6, PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				*iParam0 = 4;
			}
			if (func_71())
			{
				*iParam0 = 18;
			}
			if (PED::IS_COP_PED_IN_AREA_3D(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f)) || VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f)))
			{
				if (!PED::IS_PED_INJURED((*uParam6)[0]) && !PED::IS_PED_INJURED((*uParam6)[1]))
				{
					BRAIN::TASK_SMART_FLEE_PED((*uParam6)[0], AUDIO::_0x0626A247D2405330(), 1000f, 4294967295, 0, 0);
					BRAIN::TASK_SMART_FLEE_PED((*uParam6)[1], AUDIO::_0x0626A247D2405330(), 1000f, 4294967295, 0, 0);
					func_167();
					SYSTEM::WAIT(0);
					func_169(&uLocal_53, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 4:
			if (!func_178())
			{
				if ((!PED::IS_PED_INJURED((*uParam6)[0]) && !PED::IS_PED_INJURED((*uParam6)[1])) && !PED::IS_PED_INJURED(iLocal_257))
				{
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_257))
				{
					if (!PED::IS_PED_INJURED(iLocal_257))
					{
						func_169(&uLocal_53, "REGETAU", "REAWA_DOWN", 4, 0, 0, 0);
						BRAIN::TASK_LOOK_AT_ENTITY((*uParam6)[0], AUDIO::_0x0626A247D2405330(), 10000, 2052, 4);
						BRAIN::OPEN_SEQUENCE_TASK(&iLocal_265);
						BRAIN::TASK_PLAY_ANIM(0, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, 4294967295, 0, 0.25f, 0, 0, 0);
						BRAIN::TASK_PLAY_ANIM(0, "random@getawaydriver", "idle_a", 4f, -4f, 4294967295, 1, 0, 0, 0, 0);
						CUTSCENE::_0x8D9DF6ECA8768583(iLocal_265);
						BRAIN::TASK_PERFORM_SEQUENCE(iLocal_257, iLocal_265);
						BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_265);
					}
					*iParam0 = 5;
				}
			}
			if (func_71())
			{
				*iParam0 = 18;
			}
			if (((PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(AUDIO::_0x0626A247D2405330())) || PED::IS_COP_PED_IN_AREA_3D(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f))) || VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f)))
			{
				if (!PED::IS_PED_INJURED((*uParam6)[0]) && !PED::IS_PED_INJURED((*uParam6)[1]))
				{
					BRAIN::TASK_SMART_FLEE_PED((*uParam6)[0], AUDIO::_0x0626A247D2405330(), 1000f, 4294967295, 0, 0);
					BRAIN::TASK_SMART_FLEE_PED((*uParam6)[1], AUDIO::_0x0626A247D2405330(), 1000f, 4294967295, 0, 0);
					func_167();
					SYSTEM::WAIT(0);
					func_169(&uLocal_53, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 5:
			if (PED::IS_PED_INJURED(iLocal_257))
			{
				if (!PED::IS_PED_INJURED((*uParam6)[0]) && !PED::IS_PED_INJURED((*uParam6)[1]))
				{
					BRAIN::TASK_TURN_PED_TO_FACE_ENTITY((*uParam6)[0], AUDIO::_0x0626A247D2405330(), 4294967295);
					BRAIN::TASK_TURN_PED_TO_FACE_ENTITY((*uParam6)[1], AUDIO::_0x0626A247D2405330(), 4294967295);
				}
			}
			else if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_257, 242628503) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_257, 242628503) != 0)
			{
				BRAIN::OPEN_SEQUENCE_TASK(&iLocal_265);
				BRAIN::TASK_PLAY_ANIM(0, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, 4294967295, 0, 0.25f, 0, 0, 0);
				BRAIN::TASK_PLAY_ANIM(0, "random@getawaydriver", "idle_a", 4f, -4f, 4294967295, 1, 0, 0, 0, 0);
				CUTSCENE::_0x8D9DF6ECA8768583(iLocal_265);
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_257, iLocal_265);
				BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_265);
			}
			if (!PED::IS_PED_INJURED(iLocal_258[0]) && !PED::IS_PED_INJURED(iLocal_258[1]))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) && !PED::IS_PED_ON_ANY_BIKE(AUDIO::_0x0626A247D2405330()))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
					{
						if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)) < 0.1f)
						{
							if (func_126() && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
							{
								VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()), 3);
								if (!PED::IS_PED_INJURED(iLocal_257))
								{
									vLocal_245 = { unk_0x8000C77B5F336760(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), false) };
									vVar11 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), -1.5f, -1.5f, 0f) };
									vVar12 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 1.5f, 0f, 0f) };
									BRAIN::OPEN_SEQUENCE_TASK(&iLocal_265);
									BRAIN::TASK_LOOK_AT_ENTITY(0, AUDIO::_0x0626A247D2405330(), 10000, 2096, 4);
									BRAIN::TASK_AIM_GUN_AT_ENTITY(0, iLocal_257, 1500, 0);
									BRAIN::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar11, iLocal_257, 3f, false, 1056964608, 1082130432, true, 0, 0, 3337513804, 20000);
									BRAIN::TASK_LOOK_AT_ENTITY(0, AUDIO::_0x0626A247D2405330(), 10000, 2096, 4);
									CUTSCENE::_0x8D9DF6ECA8768583(iLocal_265);
									BRAIN::TASK_PERFORM_SEQUENCE(iLocal_258[0], iLocal_265);
									BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_265);
									BRAIN::OPEN_SEQUENCE_TASK(&iLocal_265);
									BRAIN::TASK_LOOK_AT_ENTITY(0, AUDIO::_0x0626A247D2405330(), 10000, 2096, 4);
									BRAIN::TASK_AIM_GUN_AT_ENTITY(0, iLocal_257, 2500, 0);
									BRAIN::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar12, iLocal_257, 3f, false, 1056964608, 1082130432, true, 0, 0, 3337513804, 20000);
									BRAIN::TASK_LOOK_AT_ENTITY(0, AUDIO::_0x0626A247D2405330(), 10000, 2096, 4);
									CUTSCENE::_0x8D9DF6ECA8768583(iLocal_265);
									BRAIN::TASK_PERFORM_SEQUENCE(iLocal_258[1], iLocal_265);
									BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_265);
								}
								else
								{
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_258[0], func_70());
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_258[1], func_70());
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_258[0], 1);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_258[1], 0);
									if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330())) == joaat("BUS"))
									{
										if (!VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330()), 1, 0))
										{
											iVar13 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330()), 1, 0);
											if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar13))
											{
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar13, true, 0);
												PED::DELETE_PED(&iVar13);
											}
										}
										if (!VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330()), 0, 0))
										{
											iVar13 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330()), 0, 0);
											if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar13))
											{
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar13, true, 0);
												PED::DELETE_PED(&iVar13);
											}
										}
									}
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_258[0], 1);
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_258[1], 1);
								}
								*iParam0 = 6;
							}
							else if (!iLocal_250)
							{
								if (!func_178())
								{
									func_169(&uLocal_53, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
									BRAIN::TASK_LOOK_AT_ENTITY(iLocal_258[1], AUDIO::_0x0626A247D2405330(), 4294967295, 2096, 4);
									iLocal_250 = 1;
								}
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), (*uParam6)[1], 10f, 10f, 10f, 0, 1, 0))
				{
					if (!iLocal_250)
					{
						if (!func_178())
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_NDCAR", 4, 0, 0, 0);
							BRAIN::TASK_LOOK_AT_ENTITY(iLocal_258[1], AUDIO::_0x0626A247D2405330(), 4294967295, 2096, 4);
							iLocal_250 = 1;
						}
					}
				}
			}
			if (iLocal_250 || iLocal_251)
			{
				if (ENTITY::GET_ENTITY_SPEED(AUDIO::_0x0626A247D2405330()) < 0.2f)
				{
					if (iLocal_228 == 4294967295)
					{
						iLocal_228 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					iLocal_228 = 4294967295;
				}
				if (iLocal_228 != 4294967295 && MISC::GET_GAME_TIMER() > iLocal_228 + 10000)
				{
					func_167();
					SYSTEM::WAIT(0);
					func_169(&uLocal_53, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
					if (!PED::IS_PED_INJURED(iLocal_258[0]))
					{
						BRAIN::TASK_SMART_FLEE_PED(iLocal_258[0], AUDIO::_0x0626A247D2405330(), 200f, 4294967295, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_258[0], true);
						SYSTEM::WAIT(0);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_258[0]));
					}
					if (!PED::IS_PED_INJURED(iLocal_258[1]))
					{
						BRAIN::TASK_SMART_FLEE_PED(iLocal_258[1], AUDIO::_0x0626A247D2405330(), 200f, 4294967295, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_258[1], true);
						SYSTEM::WAIT(0);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_258[1]));
					}
					*iParam7 = 0;
					*iParam0 = 20;
				}
			}
			func_69(uParam6, 120f);
			if (func_71())
			{
				*iParam0 = 18;
			}
			if (((PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(AUDIO::_0x0626A247D2405330())) || PED::IS_COP_PED_IN_AREA_3D(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f))) || VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f)))
			{
				if (!PED::IS_PED_INJURED((*uParam6)[0]) && !PED::IS_PED_INJURED((*uParam6)[1]))
				{
					BRAIN::TASK_SMART_FLEE_PED((*uParam6)[0], AUDIO::_0x0626A247D2405330(), 200f, 4294967295, 0, 0);
					BRAIN::TASK_SMART_FLEE_PED((*uParam6)[1], AUDIO::_0x0626A247D2405330(), 200f, 4294967295, 0, 0);
					func_167();
					SYSTEM::WAIT(0);
					func_169(&uLocal_53, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 6:
			*iParam0 = 7;
			break;
		
		case 7:
			*iParam7 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				if (!func_68(uParam6, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 120f) || !bLocal_246)
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_245, 2f, 2f, 2f, false, true, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_258[0]) && !PED::IS_PED_INJURED(iLocal_258[1]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) && !PED::IS_PED_ON_ANY_BIKE(AUDIO::_0x0626A247D2405330()))
							{
								if (func_126() && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
								{
									VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()), 3);
									while (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
									{
										SYSTEM::WAIT(0);
									}
									if (!PED::IS_PED_INJURED(iLocal_258[0]) && !PED::IS_PED_INJURED(iLocal_258[1]))
									{
										if (!PED::IS_PED_IN_GROUP(iLocal_258[0]) && !PED::IS_PED_IN_GROUP(iLocal_258[1]))
										{
											NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_258[0]);
											NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_258[1]);
											BRAIN::TASK_LOOK_AT_ENTITY(iLocal_258[1], AUDIO::_0x0626A247D2405330(), 10000, 2052, 4);
											PED::SET_PED_AS_GROUP_MEMBER(iLocal_258[0], func_70());
											PED::SET_PED_AS_GROUP_MEMBER(iLocal_258[1], func_70());
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_258[0], 1);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_258[1], 0);
											if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330())) == joaat("BUS"))
											{
												if (!VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330()), 1, 0))
												{
													iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330()), 1, 0);
													if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar14))
													{
														ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar14, true, 0);
														PED::DELETE_PED(&iVar14);
													}
												}
												if (!VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330()), 0, 0))
												{
													iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330()), 0, 0);
													if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar14))
													{
														ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar14, true, 0);
														PED::DELETE_PED(&iVar14);
													}
												}
											}
											PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_258[0], 1);
											PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_258[1], 1);
										}
									}
								}
								else if (!iLocal_250)
								{
									if (!func_178())
									{
										func_169(&uLocal_53, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
										iLocal_250 = 1;
									}
								}
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), (*uParam6)[1], 10f, 10f, 10f, 0, 1, 0))
							{
								if (!iLocal_250)
								{
									if (!func_178())
									{
										func_169(&uLocal_53, "REGETAU", "REAWA_NDCAR", 4, 0, 0, 0);
										iLocal_250 = 1;
									}
								}
							}
						}
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_258[0]))
			{
				if (!PED::IS_PED_IN_GROUP(iLocal_258[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_257))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
						{
							if ((BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_258[0], 242628503) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_258[0], 242628503) != 0) || BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_258[0], 242628503) == 7)
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_258[0], func_70());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_258[0], 1);
							}
						}
					}
					else
					{
						PED::SET_PED_AS_GROUP_MEMBER(iLocal_258[0], func_70());
						PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_258[0], 1);
					}
				}
				else
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
					{
						if ((!PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_258[0]) && !ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_245, 2f, 2f, 2f, false, true, 0)) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_258[0], unk_0x8000C77B5F336760(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true), 2.5f, 2.5f, 2.5f, false, true, 0))
						{
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_258[0], 2f);
						}
					}
					if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_258[0], 3419293077) == 1 || BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_258[0], 3419293077) == 0)
					{
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_258[1]))
			{
				if (!PED::IS_PED_IN_GROUP(iLocal_258[1]))
				{
					if (!PED::IS_PED_INJURED(iLocal_257))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
						{
							if ((BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_258[1], 242628503) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_258[1], 242628503) != 0) || BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_258[1], 242628503) == 7)
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_258[1], func_70());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_258[1], 1);
							}
						}
					}
					else
					{
						PED::SET_PED_AS_GROUP_MEMBER(iLocal_258[1], func_70());
						PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_258[1], 1);
					}
				}
				else
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
					{
						if ((!PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_258[1]) && !ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_245, 2f, 2f, 2f, false, true, 0)) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_258[1], unk_0x8000C77B5F336760(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true), 2.5f, 2.5f, 2.5f, false, true, 0))
						{
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_258[1], 2f);
						}
					}
					if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_258[1], 3419293077) == 1 || BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_258[1], 3419293077) == 0)
					{
					}
				}
			}
			if (!bLocal_246)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					if ((!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 0) && !PED::IS_PED_INJURED(iLocal_258[0])) && !PED::IS_PED_INJURED(iLocal_258[1]))
					{
						if ((PED::IS_PED_IN_VEHICLE(iLocal_258[0], PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 0) && !PED::IS_PED_IN_VEHICLE(iLocal_258[1], PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 0)) && !ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_258[1], 20f, 20f, 20f, 0, 1, 0))
						{
							bLocal_246 = true;
						}
						if ((PED::IS_PED_IN_VEHICLE(iLocal_258[1], PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 0) && !PED::IS_PED_IN_VEHICLE(iLocal_258[0], PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 0)) && !ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_258[0], 20f, 20f, 20f, 0, 1, 0))
						{
							bLocal_246 = true;
						}
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				if (func_68(uParam6, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 120f) || bLocal_246)
				{
					if (!PED::IS_PED_INJURED(iLocal_257))
					{
						BRAIN::OPEN_SEQUENCE_TASK(&iLocal_265);
						BRAIN::TASK_PLAY_ANIM(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, 4294967295, 0, 0, 0, 0, 0);
						BRAIN::TASK_SMART_FLEE_PED(0, AUDIO::_0x0626A247D2405330(), 200f, 4294967295, 0, 0);
						CUTSCENE::_0x8D9DF6ECA8768583(iLocal_265);
						BRAIN::TASK_PERFORM_SEQUENCE(iLocal_257, iLocal_265);
						BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_265);
						PED::SET_PED_KEEP_TASK(iLocal_257, true);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_257);
					}
					func_67();
					if (!CAM::IS_SPHERE_VISIBLE(7.3162f, -1544.838f, 28.2558f, 3f))
					{
						iLocal_263 = VEHICLE::CREATE_VEHICLE(joaat("POLICE3"), 7.3162f, -1544.838f, 28.2558f, 251.9956f, true, true, false);
						iLocal_261[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_263, 6, joaat("s_m_y_cop_01"), 4294967295, 1, true);
						iLocal_261[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_263, 6, joaat("s_m_y_cop_01"), 0, 1, true);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_261[0], joaat("weapon_pistol"), 4294967295, false, true);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_261[1], joaat("weapon_pistol"), 4294967295, false, true);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_261[0], 0);
					}
					if (!CAM::IS_SPHERE_VISIBLE(91.6602f, -1541.899f, 28.3422f, 3f))
					{
						iLocal_263 = VEHICLE::CREATE_VEHICLE(joaat("POLICE3"), 91.6602f, -1541.899f, 28.3422f, 127.3064f, true, true, false);
						iLocal_261[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_263, 6, joaat("s_m_y_cop_01"), 4294967295, 1, true);
						iLocal_261[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_263, 6, joaat("s_m_y_cop_01"), 0, 1, true);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_261[0], joaat("weapon_pistol"), 4294967295, false, true);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_261[1], joaat("weapon_pistol"), 4294967295, false, true);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_261[0], 0);
					}
					if (!CAM::IS_SPHERE_VISIBLE(32.8029f, -1594.4f, 28.4262f, 3f))
					{
						iLocal_263 = VEHICLE::CREATE_VEHICLE(joaat("POLICE3"), 32.8029f, -1594.4f, 28.4262f, 337.7429f, true, true, false);
						iLocal_261[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_263, 6, joaat("s_m_y_cop_01"), 4294967295, 1, true);
						iLocal_261[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_263, 6, joaat("s_m_y_cop_01"), 0, 1, true);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_261[0], joaat("weapon_pistol"), 4294967295, false, true);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_261[1], joaat("weapon_pistol"), 4294967295, false, true);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_261[0], 0);
					}
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_GETAWAY_01", 0f);
					VEHICLE::SET_VEHICLE_IS_WANTED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
					PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), 2, 0);
					HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
					PLAYER::SET_WANTED_LEVEL_DIFFICULTY(CAM::_0xDC9DA9E8789F5246(), 0f);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2761840924, iLocal_266);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_266, 2761840924);
					SYSTEM::WAIT(1000);
					if (!bLocal_246)
					{
						func_169(&uLocal_53, "REGETAU", "REAWA_COPS2", 4, 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED((*uParam6)[iVar8]))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY((*uParam6)[iVar8]);
					}
					iLocal_222 = MISC::GET_GAME_TIMER();
					*iParam0 = 8;
				}
			}
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), 95.0746f, -1520.042f, 28.3593f, -5.9698f, -1641.819f, 38.4042f, 98.1875f, 0, true, 0))
			{
				if (!PED::IS_PED_INJURED((*uParam6)[0]) && !PED::IS_PED_INJURED((*uParam6)[1]))
				{
					BRAIN::TASK_SMART_FLEE_PED((*uParam6)[0], AUDIO::_0x0626A247D2405330(), 200f, 4294967295, 0, 0);
					BRAIN::TASK_SMART_FLEE_PED((*uParam6)[1], AUDIO::_0x0626A247D2405330(), 200f, 4294967295, 0, 0);
					func_167();
					SYSTEM::WAIT(0);
					func_169(&uLocal_53, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			func_69(uParam6, 120f);
			func_66();
			if (func_71())
			{
				*iParam0 = 18;
			}
			break;
		
		case 8:
			func_65(iLocal_51);
			if (func_125(iLocal_222, 3000))
			{
				*iParam0 = 9;
			}
			if (func_71())
			{
				*iParam0 = 18;
			}
			break;
		
		case 9:
			func_64(uParam6);
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2761840924, iLocal_266);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_266, 2761840924);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					VEHICLE::SET_VEHICLE_IS_WANTED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_263, 0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_263);
				}
				if (!PED::IS_PED_INJURED(iLocal_261[0]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_261[0]));
				}
				if (!PED::IS_PED_INJURED(iLocal_261[1]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_261[1]));
				}
				func_65(iLocal_51);
				*iParam0 = 10;
			}
			iVar8 = 0;
			while (iVar8 < *uParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0) && !PED::IS_PED_INJURED((*uParam6)[iVar8]))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE((*uParam6)[iVar8], PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_255[iVar8]))
						{
							uLocal_255[iVar8] = func_62((*uParam6)[iVar8], 0, 145);
							func_65(iLocal_51);
						}
					}
				}
				iVar8++;
			}
			func_69(uParam6, 120f);
			func_66();
			if (func_60())
			{
				*iParam0 = 12;
			}
			if (func_71())
			{
				*iParam0 = 18;
			}
			break;
		
		case 10:
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2761840924, iLocal_266);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_266, 2761840924);
				func_65(iLocal_51);
				*iParam0 = 8;
			}
			else
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2761840924, iLocal_266);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_266, 2761840924);
				vVar9 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
				fVar6 = 9999f;
				iVar15 = 0;
				while (iVar15 < vVar5.x)
				{
					if (SYSTEM::VDIST(vVar9, vVar5[iVar15 /*3*/]) < fVar6)
					{
						fVar6 = SYSTEM::VDIST(vVar9, vVar5[iVar15 /*3*/]);
						iLocal_221 = iVar15;
					}
					iVar15++;
				}
				if (func_59(vVar5[iLocal_221 /*3*/], 0f, 0f, 0f, 0))
				{
					iLocal_221 = 0;
				}
				iLocal_51 = func_57(vVar5[iLocal_221 /*3*/], 1);
				if (func_114() == 2 && !func_56())
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_256))
					{
						iLocal_256 = func_57(vLocal_244, 0);
						HUD::SET_BLIP_SPRITE(iLocal_256, 269);
						func_54();
					}
				}
				iLocal_222 = MISC::GET_GAME_TIMER();
				if (!iLocal_220)
				{
					func_167();
					SYSTEM::WAIT(0);
					func_169(&uLocal_53, "REGETAU", "REAWA_HOM", 4, 0, 0, 0);
					iLocal_220 = 1;
				}
				*iParam0 = 11;
			}
			if (func_71())
			{
				*iParam0 = 18;
			}
			break;
		
		case 11:
			*iParam7 = 0;
			func_53(uParam6);
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
			{
				func_65(iLocal_51);
				*iParam0 = 8;
			}
			else
			{
				if (func_52(vVar5[iLocal_221 /*3*/]))
				{
					func_169(&uLocal_53, "REGETAU", "REAWA_CULT", 4, 0, 0, 0);
				}
				if (func_50())
				{
					func_167();
					SYSTEM::WAIT(0);
					if (func_49())
					{
						func_169(&uLocal_53, "REGETAU", "REAWA_CULT2", 4, 0, 0, 0);
					}
					else
					{
						func_169(&uLocal_53, "REGETAU", "REAWA_CULT3", 4, 0, 0, 0);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_258[0]) && !PED::IS_PED_INJURED(iLocal_258[1]))
				{
					if ((ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vVar5[iLocal_221 /*3*/], Global_13, true, true, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_258[0], vVar5[iLocal_221 /*3*/], 20f, 20f, 20f, false, true, 0)) && ENTITY::IS_ENTITY_AT_COORD(iLocal_258[1], vVar5[iLocal_221 /*3*/], 20f, 20f, 20f, false, true, 0))
					{
						func_65(iLocal_51);
						iVar8 = 0;
						while (iVar8 <= (*uParam6 - 1))
						{
							if (iLocal_218)
							{
								VEHICLE::_SET_VEHICLE_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 2, 0);
								SYSTEM::WAIT(1000);
								iLocal_218 = 0;
							}
							if (!PED::IS_PED_INJURED((*uParam6)[iVar8]))
							{
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY((*uParam6)[iVar8]);
								PED::REMOVE_PED_FROM_GROUP((*uParam6)[iVar8]);
								PED::REMOVE_GROUP(iLocal_231);
							}
							iVar8++;
						}
						*iParam0 = 13;
					}
				}
			}
			iVar8 = 0;
			while (iVar8 < *uParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0) && !PED::IS_PED_INJURED((*uParam6)[iVar8]))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE((*uParam6)[iVar8], PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_255[iVar8]))
						{
							uLocal_255[iVar8] = func_62((*uParam6)[iVar8], 0, 145);
						}
					}
				}
				iVar8++;
			}
			func_69(uParam6, 120f);
			func_66();
			if (ENTITY::GET_ENTITY_SPEED(AUDIO::_0x0626A247D2405330()) < 0.2f)
			{
				if (iLocal_228 == 4294967295)
				{
					iLocal_228 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				iLocal_228 = 4294967295;
			}
			if (iLocal_228 != 4294967295 && MISC::GET_GAME_TIMER() > (iLocal_228 + 60000))
			{
				func_167();
				SYSTEM::WAIT(0);
				func_169(&uLocal_53, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_258[0]))
				{
					BRAIN::TASK_SMART_FLEE_PED(iLocal_258[0], AUDIO::_0x0626A247D2405330(), 200f, 4294967295, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_258[0], true);
				}
				if (!PED::IS_PED_INJURED(iLocal_258[1]))
				{
					BRAIN::TASK_SMART_FLEE_PED(iLocal_258[1], AUDIO::_0x0626A247D2405330(), 200f, 4294967295, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_258[1], true);
				}
				*iParam7 = 0;
				*iParam0 = 20;
			}
			if (func_60())
			{
				*iParam0 = 12;
			}
			if (func_71())
			{
				*iParam0 = 18;
			}
			break;
		
		case 12:
			func_165();
			if (bLocal_248)
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_258[0]);
				PED::REMOVE_PED_FROM_GROUP(iLocal_258[1]);
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
				func_167();
				SYSTEM::WAIT(0);
				func_169(&uLocal_53, "REGETAU", "REAWA_COPS3", 4, 0, 0, 0);
				if (!PED::IS_PED_INJURED((*uParam6)[0]))
				{
					BRAIN::OPEN_SEQUENCE_TASK(&iLocal_265);
					BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194304);
					BRAIN::TASK_SMART_FLEE_PED(0, AUDIO::_0x0626A247D2405330(), 200f, 4294967295, 0, 0);
					CUTSCENE::_0x8D9DF6ECA8768583(iLocal_265);
					BRAIN::TASK_PERFORM_SEQUENCE((*uParam6)[0], iLocal_265);
					BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_265);
					PED::SET_PED_KEEP_TASK((*uParam6)[0], true);
				}
				if (!PED::IS_PED_INJURED((*uParam6)[1]))
				{
					BRAIN::OPEN_SEQUENCE_TASK(&iLocal_265);
					BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 500, 4194304);
					BRAIN::TASK_SMART_FLEE_PED(0, AUDIO::_0x0626A247D2405330(), 200f, 4294967295, 0, 0);
					CUTSCENE::_0x8D9DF6ECA8768583(iLocal_265);
					BRAIN::TASK_PERFORM_SEQUENCE((*uParam6)[1], iLocal_265);
					BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_265);
					PED::SET_PED_KEEP_TASK((*uParam6)[1], true);
				}
				*iParam0 = 20;
			}
			break;
		
		case 13:
			if (ENTITY::GET_ENTITY_SPEED(AUDIO::_0x0626A247D2405330()) < 5f)
			{
				iVar8 = 0;
				while (iVar8 <= (*uParam6 - 1))
				{
					if (!PED::IS_PED_INJURED((*uParam6)[iVar8]))
					{
						if (BRAIN::GET_SCRIPT_TASK_STATUS((*uParam6)[iVar8], 242628503) != 1 || BRAIN::GET_SCRIPT_TASK_STATUS((*uParam6)[iVar8], 242628503) != 0)
						{
							if (!PED::IS_PED_INJURED((*uParam6)[iVar8]))
							{
								iVar0 = 0;
								iLocal_226 = iVar8;
							}
						}
					}
					iVar8++;
				}
				*iParam0 = 14;
			}
			break;
		
		case 14:
			iVar8 = 0;
			while (iVar8 < *uParam6)
			{
				if (!PED::IS_PED_INJURED((*uParam6)[0]))
				{
					BRAIN::TASK_LOOK_AT_ENTITY(AUDIO::_0x0626A247D2405330(), (*uParam6)[iVar8], 4000, 2048, 2);
					BRAIN::OPEN_SEQUENCE_TASK(&iVar0);
					BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194816);
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar7[iLocal_221 /*3*/], 2f, 4294967295, 1048576000, 0, 1193033728);
					BRAIN::TASK_SMART_FLEE_PED(0, AUDIO::_0x0626A247D2405330(), 200f, 4294967295, 0, 0);
					CUTSCENE::_0x8D9DF6ECA8768583(iVar0);
					BRAIN::TASK_PERFORM_SEQUENCE((*uParam6)[0], iVar0);
					BRAIN::CLEAR_SEQUENCE_TASK(&iVar0);
					if (!PED::IS_PED_INJURED((*uParam6)[1]))
					{
						BRAIN::OPEN_SEQUENCE_TASK(&iVar0);
						BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 2000, 4194816);
						BRAIN::TASK_LOOK_AT_ENTITY(0, AUDIO::_0x0626A247D2405330(), 3000, 2052, 2);
						BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar7[iLocal_221 /*3*/], 2f, 4294967295, 1048576000, 0, 1193033728);
						BRAIN::TASK_SMART_FLEE_PED(0, AUDIO::_0x0626A247D2405330(), 200f, 4294967295, 0, 0);
						CUTSCENE::_0x8D9DF6ECA8768583(iVar0);
						BRAIN::TASK_PERFORM_SEQUENCE((*uParam6)[1], iVar0);
						BRAIN::CLEAR_SEQUENCE_TASK(&iVar0);
					}
					iVar0 = 0;
					PED::SET_PED_KEEP_TASK((*uParam6)[iVar8], true);
					BRAIN::TASK_LOOK_AT_ENTITY((*uParam6)[iVar8], AUDIO::_0x0626A247D2405330(), 4000, 2052, 2);
					func_167();
					SYSTEM::WAIT(0);
					if (iLocal_226 > 0)
					{
						func_169(&uLocal_53, "REGETAU", "REAWA_STOP2", 4, 0, 0, 0);
					}
					else
					{
						func_169(&uLocal_53, "REGETAU", "REAWA_STOP", 4, 0, 0, 0);
					}
					*iParam0 = 15;
				}
				iVar8++;
			}
			break;
		
		case 15:
			if (!*bParam8)
			{
				if (!PED::IS_PED_INJURED((*uParam6)[1]))
				{
					if (!iLocal_218)
					{
						PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
						iLocal_218 = 1;
					}
					func_17(func_114(), 1, 1000, 0, 1);
					*bParam8 = 1;
				}
			}
			else if (!PED::IS_PED_INJURED((*uParam6)[0]) && !PED::IS_PED_INJURED((*uParam6)[1]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam6)[0], 0) && !PED::IS_PED_IN_ANY_VEHICLE((*uParam6)[1], 0))
				{
					HUD::CLEAR_PRINTS();
					BRAIN::TASK_CLEAR_LOOK_AT(AUDIO::_0x0626A247D2405330());
					while (!func_196())
					{
						SYSTEM::WAIT(0);
					}
					func_3(10, 0);
					if (func_2(77))
					{
						func_192(9, 0);
					}
					func_164(6);
					func_183(4294967295, 0);
					func_180();
					*iParam0 = 20;
				}
			}
			break;
		
		case 16:
			*bParam8 = 1;
			*iParam0 = 20;
			break;
		
		case 17:
			break;
		
		case 18:
			iLocal_253 = 1;
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_266, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_266, iLocal_266);
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
			GRAPHICS::_0x54E22EA2C1956A8D(0f);
			PLAYER::SET_POLICE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 1);
			iVar16 = 0;
			while (iVar16 < iLocal_258)
			{
				if (!PED::IS_PED_INJURED(iLocal_258[iVar16]))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_255[iVar16]))
					{
						HUD::REMOVE_BLIP(&(uLocal_255[iVar16]));
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_258[iVar16], 0))
						{
							BRAIN::TASK_LEAVE_ANY_VEHICLE(iLocal_258[iVar16], 0, 0);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_51))
						{
							HUD::REMOVE_BLIP(&iLocal_51);
						}
						PED::REMOVE_PED_FROM_GROUP(iLocal_258[iVar16]);
						BRAIN::TASK_COMBAT_PED(iLocal_258[iVar16], AUDIO::_0x0626A247D2405330(), 0, 16);
						PED::SET_PED_KEEP_TASK(iLocal_258[iVar16], true);
					}
				}
				iVar16++;
			}
			func_167();
			SYSTEM::WAIT(0);
			if (!PED::IS_PED_INJURED(iLocal_258[1]))
			{
				func_169(&uLocal_53, "REGETAU", "REAWA_ATTP", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_258[0]))
			{
				func_169(&uLocal_53, "REGETAU", "REAWA_ATTB", 4, 0, 0, 0);
			}
			if (!bLocal_249)
			{
				if (!PED::IS_PED_INJURED(iLocal_257))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_257, false);
					BRAIN::TASK_PLAY_ANIM(iLocal_257, "random@getawaydriver", "base", 4f, -4f, 4294967295, 1, 0, 0, 0, 0);
				}
			}
			iVar16 = 0;
			while (iVar16 < iLocal_259)
			{
				if (!PED::IS_PED_INJURED(iLocal_259[iVar16]))
				{
					BRAIN::TASK_SMART_FLEE_PED(iLocal_259[iVar16], AUDIO::_0x0626A247D2405330(), 150f, 4294967295, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_259[iVar16], true);
				}
				iVar16++;
			}
			*iParam0 = 19;
			break;
		
		case 19:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_266, 1862763509);
			iVar16 = 0;
			while (iVar16 < iLocal_258)
			{
				if (PED::IS_PED_INJURED(iLocal_258[iVar16]))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_255[iVar16]))
					{
						HUD::REMOVE_BLIP(&(uLocal_255[iVar16]));
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_258[iVar16]))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_255[iVar16]))
					{
						uLocal_255[iVar16] = func_62(iLocal_258[iVar16], 1, 145);
					}
					if (PED::IS_PED_IN_GROUP(iLocal_258[iVar16]))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_258[iVar16]);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_258[iVar16], 0))
					{
						BRAIN::TASK_LEAVE_ANY_VEHICLE(iLocal_258[iVar16], 0, 0);
						BRAIN::TASK_COMBAT_PED(iLocal_258[iVar16], AUDIO::_0x0626A247D2405330(), 0, 16);
						PED::SET_PED_KEEP_TASK(iLocal_258[iVar16], true);
					}
					else
					{
						BRAIN::TASK_COMBAT_PED(iLocal_258[iVar16], AUDIO::_0x0626A247D2405330(), 0, 16);
						PED::SET_PED_KEEP_TASK(iLocal_258[iVar16], true);
					}
				}
				iVar16++;
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_51))
			{
				HUD::REMOVE_BLIP(&iLocal_51);
			}
			break;
		
		case 20:
			if (!func_178())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_2(int iParam0)//Position - 0x367F
{
	if (iParam0 == 94 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_19E56.f_2361.f_14A[iParam0 /*6*/];
}

void func_3(int iParam0, bool bParam1)//Position - 0x36AB
{
	int iVar0;
	char* sVar1;
	
	MISC::SET_BIT(&(Global_19E56.f_1.f_74), iParam0);
	switch (iParam0)
	{
		case 10:
			MISC::SET_BIT(&(Global_19E56.f_1.f_77), 14);
			break;
		
		case 13:
			MISC::SET_BIT(&(Global_19E56.f_1.f_77), 16);
			break;
		
		case 12:
			MISC::SET_BIT(&(Global_19E56.f_1.f_77), 15);
			break;
		
		case 11:
			MISC::SET_BIT(&(Global_19E56.f_1.f_77), 17);
			break;
	}
	if (!bParam1)
	{
		iVar0 = 0;
		switch (func_16(iParam0))
		{
			case 1:
				iVar0 = 6;
				break;
			
			case 3:
				iVar0 = 4;
				break;
			
			case 2:
				iVar0 = 5;
				break;
		}
		sVar1 = func_14(iParam0);
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("FEED_CREW_U");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_14(iParam0));
		HUD::_SET_NOTIFICATION_MESSAGE(sVar1, sVar1, 0, iVar0, "", 0);
		if (!func_13(45))
		{
			func_4("AM_H_CREWU", 2, 0, 20000, 10000, func_7(), 0, 131, 0);
		}
	}
}

void func_4(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x37A9
{
	func_5(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_5(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x37CB
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != 4294967295)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != 4294967295)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_4F9E.f_91)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_19E56.f_4F9E[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_19E56.f_4F9E.f_91 < 9)
	{
		StringCopy(&(Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_4), sParam1, 16);
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_9 = iParam5;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_B = iParam6;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_C = uParam2;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_D = iParam7;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_E = iParam8;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != 4294967295)
		{
			Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_A = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_A = 4294967295;
		}
		Global_19E56.f_4F9E.f_91++;
		func_6();
	}
}

void func_6()//Position - 0x399F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_19E56.f_4F9E.f_92[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_4F9E.f_91)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E[iVar0 /*16*/].f_B, 0))
		{
			if (Global_19E56.f_4F9E[iVar0 /*16*/].f_C > Global_19E56.f_4F9E.f_92[0])
			{
				Global_19E56.f_4F9E.f_92[0] = Global_19E56.f_4F9E[iVar0 /*16*/].f_C;
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E[iVar0 /*16*/].f_B, 1))
		{
			if (Global_19E56.f_4F9E[iVar0 /*16*/].f_C > Global_19E56.f_4F9E.f_92[1])
			{
				Global_19E56.f_4F9E.f_92[1] = Global_19E56.f_4F9E[iVar0 /*16*/].f_C;
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E[iVar0 /*16*/].f_B, 2))
		{
			if (Global_19E56.f_4F9E[iVar0 /*16*/].f_C > Global_19E56.f_4F9E.f_92[2])
			{
				Global_19E56.f_4F9E.f_92[2] = Global_19E56.f_4F9E[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

int func_7()//Position - 0x3ABF
{
	func_8();
	switch (Global_19E56.f_933.f_21B.f_10CD)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_8()//Position - 0x3B05
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_12(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_11(AUDIO::_0x0626A247D2405330());
			if (func_10(iVar0) && (!func_9(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_10(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_9(int iParam0)//Position - 0x3C02
{
	return Global_8D15 == iParam0;
}

bool func_10(int iParam0)//Position - 0x3C10
{
	return iParam0 < 3;
}

int func_11(int iParam0)//Position - 0x3C1C
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)//Position - 0x3C59
{
	if (func_10(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_13(int iParam0)//Position - 0x3C83
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E.f_96[iVar1], iVar0);
	}
	return 0;
}

var func_14(int iParam0)//Position - 0x3CC6
{
	return func_15(iParam0);
}

char* func_15(int iParam0)//Position - 0x3CD4
{
	switch (iParam0)
	{
		case 1:
			return "HC_N_GUS";
			break;
		
		case 2:
			return "HC_N_KAR";
			break;
		
		case 10:
			return "HC_N_PAC";
			break;
		
		case 11:
			return "HC_N_CHE";
			break;
		
		case 3:
			return "HC_N_HUG";
			break;
		
		case 4:
			return "HC_N_NOR";
			break;
		
		case 5:
			return "HC_N_DAR";
			break;
		
		case 6:
			return "HC_N_PAI";
			break;
		
		case 7:
			return "HC_N_CHR";
			break;
		
		case 12:
			return "HC_N_RIC";
			break;
		
		case 8:
			return "HC_N_EDD";
			break;
		
		case 13:
			return "HC_N_TAL";
			break;
		
		case 9:
			return "HC_N_KRM";
			break;
	}
	return "ERROR!";
}

int func_16(int iParam0)//Position - 0x3DB7
{
	return Global_15C72[iParam0 /*5*/];
}

void func_17(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x3DC7
{
	int iVar0;
	int iVar1;
	
	if (Global_19E56.f_6D76[iParam0 /*29*/].f_11 == 3)
	{
		return;
	}
	if (Global_19E56.f_6D76[iParam0 /*29*/].f_11 == 4)
	{
		return;
	}
	func_18(Global_19E56.f_6D76[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, 4294967295);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_18(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3EAE
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_48();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_47(99, 1);
					func_46(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_46(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_46(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_31(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_27(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_27(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_27(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_26(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_47(95, iParam3);
					break;
				
				case 1:
					func_47(97, iParam3);
					break;
				
				case 2:
					func_47(96, iParam3);
					break;
			}
			func_47(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_21(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_21(iVar1);
	}
	iVar5 = (Global_D06B[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_D06B[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_D06B[iVar2] = 2147483647;
				}
				else
				{
					Global_D06B[iVar2] = (Global_D06B[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_46(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_46(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_46(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_D06B[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_D06B[iVar2];
			Global_D06B[iVar2] = (Global_D06B[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_2[Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_2[Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_2[Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_19E56.f_5038.f_E9[iVar2 /*69*/]++;
		Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1++;
		if (Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1 > 10)
		{
			Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_20(iParam0);
	if (Global_8D15 == 15)
	{
		func_19(0);
	}
	return 1;
}

void func_19(bool bParam0)//Position - 0x44AF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_D073[iVar0 /*3*/][0] = Global_19E56.f_5038[iVar0];
		Global_D073.f_1F[iVar0 /*3*/][0] = Global_19E56.f_5038.f_B[iVar0];
		Global_D073.f_3E[iVar0 /*3*/][0] = Global_19E56.f_5038.f_16[iVar0];
		Global_D073.f_5D[iVar0 /*3*/][0] = Global_19E56.f_5038.f_21[iVar0];
		Global_D073.f_7C[iVar0 /*3*/][0] = Global_19E56.f_5038.f_2C[iVar0];
		Global_D073.f_9B[iVar0 /*3*/][0] = Global_19E56.f_5038.f_37[iVar0];
		Global_D073.f_BA[iVar0 /*3*/][0] = Global_19E56.f_5038.f_42[iVar0];
		Global_D073.f_D9[iVar0 /*3*/][0] = Global_19E56.f_5038.f_4D[iVar0];
		Global_D073.f_F8[iVar0 /*3*/][0] = Global_19E56.f_5038.f_58[iVar0];
		if (!bParam0)
		{
			Global_D073[iVar0 /*3*/][1] = Global_19E56.f_5038[iVar0];
			Global_D073.f_1F[iVar0 /*3*/][1] = Global_19E56.f_5038.f_B[iVar0];
			Global_D073.f_3E[iVar0 /*3*/][1] = Global_19E56.f_5038.f_16[iVar0];
			Global_D073.f_5D[iVar0 /*3*/][1] = Global_19E56.f_5038.f_21[iVar0];
			Global_D073.f_7C[iVar0 /*3*/][1] = Global_19E56.f_5038.f_2C[iVar0];
			Global_D073.f_9B[iVar0 /*3*/][1] = Global_19E56.f_5038.f_37[iVar0];
			Global_D073.f_BA[iVar0 /*3*/][1] = Global_19E56.f_5038.f_42[iVar0];
			Global_D073.f_D9[iVar0 /*3*/][1] = Global_19E56.f_5038.f_4D[iVar0];
			Global_D073.f_F8[iVar0 /*3*/][1] = Global_19E56.f_5038.f_58[iVar0];
		}
		iVar0++;
	}
}

void func_20(int iParam0)//Position - 0x4731
{
	int iVar0;
	
	iVar0 = Global_D06B[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_21(int iParam0)//Position - 0x478B
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_24(129, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_24(135, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_24(136, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_24(137, 0, 4294967295, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_5038.f_1D7, iParam0))
		{
			bVar0 = true;
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_5038.f_1D7), iParam0);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_5038.f_1D7, iParam0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_200000[func_23() /*12745*/].f_1FF2.f_A, iParam0))
	{
		bVar0 = true;
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_5038.f_1D7), iParam0);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_200000[func_23() /*12745*/].f_1FF2.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_22(iParam0));
		HUD::_SET_NOTIFICATION_MESSAGE(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_22(int iParam0)//Position - 0x489E
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		default:
	}
	return "";
}

int func_23()//Position - 0x494D
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_24(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x495A
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
		iParam2 = func_25();
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

int func_25()//Position - 0x4EC2
{
	return Global_1407E0;
}

void func_26(int iParam0)//Position - 0x4ECE
{
	func_47(93, iParam0);
	func_47(29, iParam0);
	func_47(30, iParam0);
}

bool func_27(int iParam0)//Position - 0x4EEE
{
	if (iParam0 == 8)
	{
		return func_28(129, 4294967295, 4294967295);
	}
	if (iParam0 == 9)
	{
		return func_28(135, 4294967295, 4294967295);
	}
	if (iParam0 == 10)
	{
		return func_28(136, 4294967295, 4294967295);
	}
	if (iParam0 == 11)
	{
		return func_28(137, 4294967295, 4294967295);
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_5038.f_1D7, iParam0);
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_200000[func_23() /*12745*/].f_1FF2.f_A, iParam0);
}

int func_28(int iParam0, int iParam1, int iParam2)//Position - 0x4F72
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_25();
	}
	iVar1 = func_30(iParam0, iParam1);
	uVar2 = func_29(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_29(int iParam0)//Position - 0x4FAF
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

int func_30(int iParam0, int iParam1)//Position - 0x52C7
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_25();
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

int func_31(bool bParam0)//Position - 0x55BF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, 4294967295))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, 4294967295))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, 4294967295))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, 4294967295);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_45(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_32(27, 1);
	return 1;
}

int func_32(int iParam0, int iParam1)//Position - 0x5676
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_33(iParam0, iParam1);
}

int func_33(int iParam0, int iParam1)//Position - 0x5691
{
	if (func_9(14) && !func_44(iParam0))
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
	if (func_43(&Global_412216))
	{
		if (func_41(&Global_412216, iParam0))
		{
			return 0;
		}
		if (func_34(&Global_412216, iParam0))
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

int func_34(var uParam0, int iParam1)//Position - 0x572E
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_9(14) && !func_44(iParam1))
	{
		return 0;
	}
	if (func_41(uParam0, iParam1))
	{
		return 0;
	}
	if (func_40(uParam0) < 0f)
	{
		func_39(uParam0, 0);
	}
	func_37(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_35(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_35(var uParam0, int iParam1)//Position - 0x57DF
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_9(14) && !func_44(iParam1))
	{
		return 0;
	}
	if (func_41(uParam0, iParam1))
	{
		return 0;
	}
	if (func_40(uParam0) < 0f)
	{
		func_39(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_36(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_36(var uParam0, int iParam1)//Position - 0x585A
{
	return (*uParam0)[iParam1] == 78;
}

void func_37(var uParam0)//Position - 0x586B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_38(uParam0, iVar0);
		iVar0++;
	}
	func_39(uParam0, (Global_412215 - 0.5f));
}

void func_38(var uParam0, int iParam1)//Position - 0x589F
{
	(*uParam0)[iParam1] = 78;
}

void func_39(var uParam0, float fParam1)//Position - 0x58AF
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

float func_40(var uParam0)//Position - 0x58CC
{
	return uParam0->f_50;
}

bool func_41(var uParam0, int iParam1)//Position - 0x58D8
{
	return func_42(uParam0, iParam1) != 4294967295;
}

int func_42(var uParam0, int iParam1)//Position - 0x58EA
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

bool func_43(var uParam0)//Position - 0x5917
{
	return uParam0->f_4F == 1;
}

int func_44(int iParam0)//Position - 0x5925
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

int func_45(int iParam0, int iParam1)//Position - 0x5975
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

void func_46(int iParam0, int iParam1)//Position - 0x59C6
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, 4294967295);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_47(int iParam0, int iParam1)//Position - 0x59E9
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_CAD3[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_CAD3[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_CAD3[iParam0 /*7*/].f_1, &iVar0, 4294967295);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_CAD3[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_48()//Position - 0x5A46
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, 4294967295);
		if (!Global_D06B[0] == iVar0)
		{
			Global_D06B[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, 4294967295);
		if (!Global_D06B[1] == iVar0)
		{
			Global_D06B[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, 4294967295);
		if (!Global_D06B[2] == iVar0)
		{
			Global_D06B[2] = iVar0;
		}
	}
}

int func_49()//Position - 0x5ABB
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_50()//Position - 0x5ADC
{
	if (func_114() == 2)
	{
		if (func_51())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				if (!Global_6463)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_6463 = 1;
					if (!Global_6462)
					{
						Global_6462 = 1;
						return 1;
					}
				}
			}
			else if (Global_6463)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_6463 = 0;
			}
		}
	}
	return 0;
}

bool func_51()//Position - 0x5B57
{
	return Global_645E;
}

int func_52(vector3 vParam0)//Position - 0x5B62
{
	if (func_114() == 2)
	{
		if (func_51() && !Global_6461)
		{
			if (fLocal_50 == -1f)
			{
				fLocal_50 = SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), vParam0);
			}
			if (SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), vParam0) > (fLocal_50 + 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				Global_6461 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_53(var uParam0)//Position - 0x5BEF
{
	if (!PED::IS_PED_INJURED((*uParam0)[0]) && !PED::IS_PED_INJURED((*uParam0)[1]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY((*uParam0)[0], (*uParam0)[1], 15f, 15f, 15f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY((*uParam0)[0], AUDIO::_0x0626A247D2405330(), 15f, 15f, 15f, 0, 1, 0))
		{
			switch (iLocal_225)
			{
				case 0:
					iLocal_224 = MISC::GET_GAME_TIMER();
					iLocal_225++;
					break;
				
				case 1:
					if (func_125(iLocal_224, 2000))
					{
						if (!func_178())
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_PITCH", 4, 0, 0, 0);
							iLocal_225++;
						}
					}
					break;
				
				case 2:
					if (!func_178())
					{
						if (func_114() == 0)
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_SUREM", 4, 0, 0, 0);
						}
						if (func_114() == 1)
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_SUREF", 4, 0, 0, 0);
						}
						if (func_114() == 2)
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_SURET", 4, 0, 0, 0);
						}
						iLocal_225++;
					}
					break;
				}
			}
	}
}

void func_54()//Position - 0x5D10
{
	if (func_114() == 2)
	{
		if (!Global_6460)
		{
			func_55("CULT_BLIP_HELP", 4294967295);
			Global_6460 = 1;
		}
	}
}

void func_55(char* sParam0, int iParam1)//Position - 0x5D34
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_56()//Position - 0x5D4B
{
	if (Global_19E56.f_6187.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

int func_57(vector3 vParam0, bool bParam1)//Position - 0x5D67
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_58(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

float func_58(bool bParam0, float fParam1, float fParam2)//Position - 0x5D93
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_59(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x5DAA
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_60()//Position - 0x5DF1
{
	if (func_61())
	{
		if (((((((ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_236, 50f, 50f, 50f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_237, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_238, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_239, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_240, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_241, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_242, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_243, 50f, 50f, 50f, false, true, 0))
		{
			if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)) < 0.2f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61()//Position - 0x5F3C
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_258[0]) && !PED::IS_PED_INJURED(iLocal_258[1]))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_258[0], iVar0, 0) && PED::IS_PED_IN_VEHICLE(iLocal_258[1], iVar0, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_62(int iParam0, bool bParam1, int iParam2)//Position - 0x5FAA
{
	int iVar0;
	
	iVar0 = func_63(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_19E56.f_6D76[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_19E56.f_6D76[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_63(int iParam0, bool bParam1, bool bParam2)//Position - 0x5FFC
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_58(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_58(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_58(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_64(var uParam0)//Position - 0x60A0
{
	if (!PED::IS_PED_INJURED((*uParam0)[0]) && !PED::IS_PED_INJURED((*uParam0)[1]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY((*uParam0)[0], (*uParam0)[1], 15f, 15f, 15f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY((*uParam0)[0], AUDIO::_0x0626A247D2405330(), 15f, 15f, 15f, 0, 1, 0))
		{
			switch (iLocal_223)
			{
				case 0:
					iLocal_224 = MISC::GET_GAME_TIMER();
					iLocal_223++;
					break;
				
				case 1:
					if (func_125(iLocal_224, 2000))
					{
						if (!func_178())
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_HOM2", 4, 0, 0, 0);
							iLocal_223++;
						}
					}
					break;
				
				case 2:
					if (!func_178())
					{
						if (func_114() == 0)
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_HOM4M", 4, 0, 0, 0);
						}
						if (func_114() == 1)
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_HOM4F", 4, 0, 0, 0);
						}
						if (func_114() == 2)
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_HOM4T", 4, 0, 0, 0);
						}
						iLocal_223++;
					}
					break;
				}
			}
	}
}

void func_65(int iParam0)//Position - 0x61C1
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		HUD::REMOVE_BLIP(&iParam0);
	}
}

void func_66()//Position - 0x61D8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < iLocal_258)
	{
		if (!PED::IS_PED_INJURED(iLocal_258[iVar0]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
			{
				if (!func_126())
				{
					ENTITY::SET_ENTITY_HEALTH(iLocal_258[iVar0], true);
					if (PED::IS_PED_IN_GROUP(iLocal_258[iVar0]))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_258[iVar0]);
					}
					if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_258[iVar0], 1227113341) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_258[iVar0], 1227113341) != 0)
					{
						BRAIN::TASK_GO_TO_ENTITY(iLocal_258[iVar0], AUDIO::_0x0626A247D2405330(), 4294967295, 6f, 2f, 1073741824, 0);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_258[iVar0], 0))
					{
						BRAIN::TASK_LEAVE_ANY_VEHICLE(iLocal_258[iVar0], 0, 0);
					}
					if (!iLocal_251)
					{
						if (!func_178())
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
							iLocal_251 = 1;
						}
					}
				}
				else
				{
					iLocal_251 = 0;
					ENTITY::SET_ENTITY_HEALTH(iLocal_258[iVar0], false);
					if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_258[iVar0], 1227113341) == 1 && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_258[iVar0], 1227113341) == 0)
					{
						NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_258[iVar0]);
					}
					if (!PED::IS_PED_INJURED(iLocal_258[0]) && !PED::IS_PED_INJURED(iLocal_258[1]))
					{
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_258[0], 1);
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_258[1], 0);
						if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330())) == joaat("BUS"))
						{
							if (!VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330()), 1, 0))
							{
								iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330()), 1, 0);
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, 0);
									PED::DELETE_PED(&iVar1);
								}
							}
							if (!VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330()), 0, 0))
							{
								iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330()), 0, 0);
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, 0);
									PED::DELETE_PED(&iVar2);
								}
							}
						}
					}
				}
			}
			else if (!PED::IS_PED_IN_GROUP(iLocal_258[iVar0]))
			{
				NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_258[iVar0]);
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_258[iVar0], func_70());
				PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_258[iVar0], 1);
				if (!PED::IS_PED_INJURED(iLocal_258[0]) && !PED::IS_PED_INJURED(iLocal_258[1]))
				{
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_258[0], 1);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_258[1], 0);
				}
			}
		}
		iVar0++;
	}
}

void func_67()//Position - 0x6437
{
	if (!func_56())
	{
		if (func_114() == 2)
		{
			Global_645E = 1;
		}
	}
}

int func_68(var uParam0, int iParam1, float fParam2)//Position - 0x6453
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if (!PED::IS_PED_IN_VEHICLE((*uParam0)[iVar0], iParam1, 0))
			{
				if (fParam2 > 0f)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY((*uParam0)[iVar0], AUDIO::_0x0626A247D2405330(), fParam2, fParam2, fParam2, 0, 1, 0))
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
		iVar0++;
	}
	return 1;
}

void func_69(var uParam0, float fParam1)//Position - 0x64BD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_255[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_255[iVar0]));
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 0))
				{
					if (PED::IS_PED_IN_VEHICLE((*uParam0)[iVar0], PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 0) && PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 0))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_255[iVar0]))
						{
							HUD::REMOVE_BLIP(&(uLocal_255[iVar0]));
						}
					}
					else if (!HUD::DOES_BLIP_EXIST(uLocal_255[iVar0]))
					{
						uLocal_255[iVar0] = func_62((*uParam0)[iVar0], 0, 145);
					}
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uLocal_255[iVar0]))
			{
				uLocal_255[iVar0] = func_62((*uParam0)[iVar0], 0, 145);
			}
			if (!ENTITY::IS_ENTITY_AT_ENTITY((*uParam0)[iVar0], AUDIO::_0x0626A247D2405330(), fParam1, fParam1, fParam1, 0, 1, 0))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_255[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_255[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

int func_70()//Position - 0x65E8
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_71()//Position - 0x65F8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_258)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_258[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_258[iVar0]))
			{
				if (!PED::IS_PED_IN_GROUP(iLocal_258[iVar0]))
				{
					if (WEAPON::IS_PED_ARMED(AUDIO::_0x0626A247D2405330(), 6))
					{
						if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_258[iVar0], AUDIO::_0x0626A247D2405330()))
						{
							if (!PED::IS_PED_INJURED(iLocal_258[0]) && !PED::IS_PED_INJURED(iLocal_258[1]))
							{
								if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(CAM::_0xDC9DA9E8789F5246(), iLocal_258[0]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(CAM::_0xDC9DA9E8789F5246(), iLocal_258[0])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(CAM::_0xDC9DA9E8789F5246(), iLocal_258[1])) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(CAM::_0xDC9DA9E8789F5246(), iLocal_258[1]))
								{
									if (iLocal_227 == 4294967295)
									{
										iLocal_227 = MISC::GET_GAME_TIMER();
									}
								}
								else
								{
									iLocal_227 = 4294967295;
								}
							}
						}
					}
					if (!iLocal_254)
					{
						if (iLocal_227 != 4294967295 && MISC::GET_GAME_TIMER() > iLocal_227 + 1000)
						{
							func_167();
							SYSTEM::WAIT(0);
							func_169(&uLocal_53, "REGETAU", "REAWA_AIM", 4, 0, 0, 0);
							iLocal_254 = 1;
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_258[iVar0], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
						{
							return 1;
						}
					}
					if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_258[iVar0], AUDIO::_0x0626A247D2405330(), 1) && ENTITY::GET_ENTITY_HEALTH(iLocal_258[iVar0]) < 190) || (iLocal_227 != 4294967295 && MISC::GET_GAME_TIMER() > iLocal_227 + 5000))
					{
						return 1;
					}
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_258[iVar0], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
					{
						return 1;
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_258[iVar0], AUDIO::_0x0626A247D2405330(), 1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_72(var uParam0, int iParam1)//Position - 0x67BD
{
	int iVar0;
	
	if (!iLocal_219)
	{
		iVar0 = 0;
		while (iVar0 <= (*uParam0 - 1))
		{
			if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), 121.8366f, -1503.006f, 28.0999f, 0.1367f, -1649.705f, 48.1608f, 125.8125f, 0, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED((*uParam0)[iVar0])) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), 75.3661f, -1542.811f, 28.4601f, 43.7035f, -1580.28f, 33.4259f, 26f, 0, true, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_255[iVar0]))
					{
						if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
						{
							if (!func_200())
							{
								func_101(1);
								func_100(1);
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_264, 0))
								{
									if (!PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_264, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_264, 50f, 50f, 50f, 0, 1, 0))
									{
										func_75(iLocal_264, 0, 145);
									}
								}
							}
							uLocal_255[iVar0] = func_62((*uParam0)[iVar0], 0, 145);
							HUD::_0x75A16C3DA34F1245(uLocal_255[iVar0], false);
							func_65(iLocal_52);
						}
					}
					if (!func_178())
					{
						if (iLocal_230 < MISC::GET_GAME_TIMER())
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_SHOUT", 4, 0, 0, 0);
							iLocal_230 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 4000));
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), 75.3661f, -1542.811f, 28.4601f, 43.7035f, -1580.28f, 33.4259f, 26f, 0, true, 0))
					{
						func_73();
						if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
						{
							if (!func_178())
							{
								if (func_126() && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
								{
									func_169(&uLocal_53, "REGETAU", "REAWA_START", 4, 0, 0, 0);
									iLocal_219 = 1;
								}
								else
								{
									func_169(&uLocal_53, "REGETAU", "REAWA_START2", 4, 0, 0, 0);
									iLocal_219 = 1;
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_255[0]))
								{
									HUD::_0x75A16C3DA34F1245(uLocal_255[0], true);
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_255[1]))
								{
									HUD::_0x75A16C3DA34F1245(uLocal_255[1], true);
								}
								if (!PED::IS_PED_INJURED((*uParam0)[1]) && !PED::IS_PED_INJURED(iLocal_257))
								{
									PED::SET_PED_RESET_FLAG((*uParam0)[1], 156, true);
									BRAIN::OPEN_SEQUENCE_TASK(&iLocal_265);
									BRAIN::TASK_PLAY_ANIM(0, "misslamar1ig_20", "stretch_call_hurry_a", 2f, -2f, 4294967295, 0, 0, 0, 0, 0);
									BRAIN::TASK_PLAY_ANIM(0, "combat@gestures@pistol@halt", "180", 2f, -2f, 4294967295, 0, 0, 0, 0, 0);
									BRAIN::TASK_AIM_GUN_AT_ENTITY(0, iLocal_257, 4294967295, 0);
									BRAIN::TASK_LOOK_AT_ENTITY(0, AUDIO::_0x0626A247D2405330(), 4294967295, 2096, 4);
									CUTSCENE::_0x8D9DF6ECA8768583(iLocal_265);
									BRAIN::TASK_PERFORM_SEQUENCE((*uParam0)[1], iLocal_265);
									BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_265);
								}
								BRAIN::TASK_LOOK_AT_ENTITY((*uParam0)[iVar0], AUDIO::_0x0626A247D2405330(), 4294967295, 2096, 4);
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_73()//Position - 0x6A9D
{
	Global_3960 = 0;
	func_74();
}

void func_74()//Position - 0x6AAD
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

int func_75(int iParam0, int iParam1, int iParam2)//Position - 0x6B04
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (MISC::GET_HASH_KEY(sVar1) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_76(iParam0, iParam2);
	return 1;
}

void func_76(int iParam0, int iParam1)//Position - 0x6B44
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_82(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 4294967295, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, 4294967295);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_19E56.f_933.f_21B.f_10CD;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_19E56.f_7F5D.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_19E56.f_7F5D.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_19E56.f_7F5D.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_19E56.f_7F5D.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42 = 0;
						Global_19E56.f_7F5D.f_15D8[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_19E56.f_7F5D.f_15E0[iVar1 /*78*/].f_42)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_19E56.f_7F5D.f_15E0[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_19E56.f_7F5D.f_15E0[iVar1 /*78*/].f_1)))
				{
					Global_19E56.f_7F5D.f_15E0[iVar1 /*78*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_19E56.f_7F5D.f_15D6 = iParam1;
	Global_11511 = iParam0;
	Global_19E56.f_7F5D.f_15D4 = 1;
	func_77(iParam0, &(Global_19E56.f_7F5D.f_1586));
}

void func_77(int iParam0, var uParam1)//Position - 0x6D46
{
	int iVar0;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		func_81(uParam1);
		uParam1->f_42 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_3E), &(uParam1->f_3F), &(uParam1->f_40));
		uParam1->f_41 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_43 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_45 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_46 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_4A), &(uParam1->f_4B), &(uParam1->f_4C));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 31);
		}
		if (uParam1->f_41 == 4294967295 && !func_80(uParam1->f_42))
		{
			uParam1->f_41 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_44 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_42))
		{
			if (VEHICLE::_VEHICLE_HAS_LANDING_GEAR(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 23);
						MISC::SET_BIT(&(uParam1->f_4D), 22);
						break;
					
					case 4:
					case 1:
						GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 23);
						GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_4D), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_4D), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 12);
		}
		func_79(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_4D), func_78(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::_DOES_VEHICLE_HAVE_DECAL(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 11);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 27);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 27);
		}
	}
}

int func_78(int iParam0)//Position - 0x6FF1
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_79(int iParam0, var uParam1, var uParam2)//Position - 0x70A1
{
	int iVar0;
	int iVar1;
	
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (unk_0x3DFF319A831E0CDB(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_80(int iParam0)//Position - 0x7294
{
	switch (iParam0)
	{
		case joaat("GRANGER"):
		case joaat("VISIONE"):
			return 1;
		
		default:
	}
	return 0;
}

void func_81(var uParam0)//Position - 0x72B4
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_4D = 0;
	uParam0->f_41 = 0;
	uParam0->f_3E = 0;
	uParam0->f_3F = 0;
	uParam0->f_40 = 0;
	uParam0->f_4A = 0;
	uParam0->f_4B = 0;
	uParam0->f_4C = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_3B[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

int func_82(int iParam0)//Position - 0x7365
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0)) || func_98(iParam0, 0, 0)) || func_98(iParam0, 1, 0)) || func_98(iParam0, 2, 0)) || func_97(iParam0) != 145) || func_96(iParam0)) || func_95(iParam0)) || func_94(iParam0)) || func_93(iParam0)) || !func_83(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_95(iParam0))
		{
		}
		if (func_95(iParam0))
		{
		}
		if (func_98(iParam0, 0, 0))
		{
		}
		if (func_98(iParam0, 1, 0))
		{
		}
		if (func_98(iParam0, 2, 0))
		{
		}
		if (func_97(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_83(int iParam0)//Position - 0x7442
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_84(iParam0, 0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("BUS"):
		case joaat("STRETCH"):
		case joaat("BARRACKS"):
		case joaat("ARMYTANKER"):
		case joaat("RHINO"):
		case joaat("ARMYTRAILER"):
		case joaat("BARRACKS2"):
		case joaat("FLATBED"):
		case joaat("RIPLEY"):
		case joaat("TOWTRUCK"):
		case joaat("TOWTRUCK2"):
		case joaat("AIRBUS"):
		case joaat("COACH"):
		case joaat("RENTALBUS"):
		case joaat("TOURBUS"):
		case joaat("FIRETRUK"):
		case joaat("PBUS"):
		case joaat("TRASH"):
		case joaat("BENSON"):
		case joaat("BOATTRAILER"):
		case joaat("BIFF"):
		case joaat("HAULER"):
		case joaat("DOCKTRAILER"):
		case joaat("PHANTOM"):
		case joaat("POUNDER"):
		case joaat("TRACTOR2"):
		case joaat("BULLDOZER"):
		case joaat("HANDLER"):
		case joaat("TIPTRUCK"):
		case joaat("CUTTER"):
		case joaat("DUMP"):
		case joaat("MIXER"):
		case joaat("MIXER2"):
		case joaat("RUBBLE"):
		case joaat("SCRAP"):
		case joaat("TIPTRUCK2"):
		case joaat("CAMPER"):
		case joaat("TACO"):
		case joaat("BOXVILLE"):
		case joaat("BOXVILLE2"):
		case joaat("BOXVILLE3"):
		case joaat("JOURNEY"):
		case joaat("MULE"):
		case joaat("MULE2"):
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLICEB"):
		case joaat("POLICEOLD1"):
		case joaat("POLICEOLD2"):
		case joaat("POLICET"):
		case joaat("TAXI"):
		case joaat("SUBMERSIBLE"):
		case joaat("SUBMERSIBLE2"):
		case joaat("MONSTER"):
			return 0;
			break;
	}
	return 1;
}

int func_84(int iParam0, bool bParam1)//Position - 0x75F3
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
		if (!func_92())
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
		if ((((!func_91() && !func_90()) && !func_89()) && !func_88()) && !func_92())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("HOTKNIFE") || iParam0 == joaat("CARBONRS")) || iParam0 == joaat("KHAMELION"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_89())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_87(iParam0))
		{
			return 0;
		}
	}
	if (!func_85(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_85(int iParam0)//Position - 0x7773
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_86())
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

int func_86()//Position - 0x783F
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

int func_87(int iParam0)//Position - 0x7856
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

int func_88()//Position - 0x9552
{
	return 0;
}

int func_89()//Position - 0x955B
{
	return 1;
}

int func_90()//Position - 0x9564
{
	return 1;
}

int func_91()//Position - 0x956D
{
	if (DLC::IS_DLC_PRESENT(3068027362))
	{
		return 1;
	}
	return 0;
}

int func_92()//Position - 0x9586
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

int func_93(int iParam0)//Position - 0x9641
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("SPEEDO") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_84(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_94(int iParam0)//Position - 0x9687
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_16240[iVar0]))
		{
			if (Global_16240[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_95(int iParam0)//Position - 0x96C2
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_16222[iVar0]) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_16222[iVar0], 0))
			{
				if (Global_16222[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_16222[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_96(int iParam0)//Position - 0x973E
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[24]))
	{
		if (iParam0 == Global_11188.f_1E4[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_11188.f_1E4[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_97(int iParam0)//Position - 0x9826
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_16222[iVar0]))
		{
			if (Global_16222[iVar0] == iParam0)
			{
				return Global_1622C[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_98(int iParam0, int iParam1, bool bParam2)//Position - 0x9889
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_99(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[iVar2], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_99(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x98FA
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_100(bool bParam0)//Position - 0x99D3
{
	if (bParam0)
	{
		StringCopy(&Global_19AA6, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_19AA0 = 1;
	}
	else
	{
		StringCopy(&Global_19AA6, "NULL", 24);
		Global_19AA0 = 0;
	}
}

int func_101(int iParam0)//Position - 0x99FF
{
	if (func_105())
	{
		Global_19E4C = 1;
		Global_19E49 = MISC::GET_GAME_TIMER();
		if (func_104(Global_19E4B))
		{
			func_102(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_104(Global_19E4B))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_102(int iParam0)//Position - 0x9A52
{
	switch (iParam0)
	{
		case 0:
			if (Global_19E56.f_6187.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_55(func_103(iParam0), 4294967295);
					Global_19E56.f_6187.f_2++;
					MISC::SET_BIT(&Global_19E52, 0);
				}
			}
			break;
		
		case 1:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E52, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_55(func_103(iParam0), 4294967295);
					Global_19E56.f_6187.f_3++;
					MISC::SET_BIT(&Global_19E52, 1);
				}
			}
			break;
		
		case 2:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E52, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_55(func_103(iParam0), 4294967295);
					Global_19E56.f_6187.f_4++;
					MISC::SET_BIT(&Global_19E52, 2);
				}
			}
			break;
	}
}

char* func_103(int iParam0)//Position - 0x9B33
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_104(int iParam0)//Position - 0x9B77
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

int func_105()//Position - 0x9BA6
{
	switch (func_106(&Global_63AE, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_106(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x9BDC
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_162B5.f_2C == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_110(0))
		{
			return 0;
		}
		Global_8CF1++;
		*uParam0 = Global_8CF1;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_434C.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_8D15 = iParam2;
		Global_8CEF = *uParam0;
		Global_8CF0 = iParam4;
		Global_8CEE = 0;
		return 1;
	}
	if (*uParam0 != 4294967295)
	{
		if (Global_8CEE > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_8CEE)
			{
				if (Global_8CF4[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_8CEF == *uParam0)
		{
			return 1;
		}
		*uParam0 = 4294967295;
	}
	if (*uParam0 == 4294967295)
	{
		if (!func_108(iParam2))
		{
			return 0;
		}
		if (Global_8CEE == 8)
		{
			return 0;
		}
		Global_8CF1++;
		*uParam0 = Global_8CF1;
		Global_8CF4[Global_8CEE /*4*/] = Global_8CF1;
		Global_8CF4[Global_8CEE /*4*/].f_1 = iParam1;
		Global_8CF4[Global_8CEE /*4*/].f_2 = iParam2;
		Global_8CF4[Global_8CEE /*4*/].f_3 = 0;
		Global_8CEE++;
		if (iParam4 != 0)
		{
			func_107(uParam0, iParam4);
		}
	}
	return 2;
}

void func_107(var uParam0, int iParam1)//Position - 0x9D13
{
	int iVar0;
	
	if (Global_8CEE == 0)
	{
		return;
	}
	if (*uParam0 == 4294967295)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_8CEE)
	{
		if (Global_8CF4[iVar0 /*4*/] == *uParam0)
		{
			Global_8CF4[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = 4294967295;
}

bool func_108(int iParam0)//Position - 0x9D62
{
	return func_109(iParam0, Global_8D15);
}

int func_109(int iParam0, int iParam1)//Position - 0x9D73
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_110(int iParam0)//Position - 0x9F54
{
	if (Global_8D15 == 15)
	{
		return 0;
	}
	if (func_108(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_111(int iParam0, char* sParam1, int iParam2)//Position - 0x9F76
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_112(iParam2), 1);
}

int func_112(int iParam0)//Position - 0x9F8D
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_113(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xA182
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

int func_114()//Position - 0xA21D
{
	func_8();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_115(int iParam0, bool bParam1)//Position - 0xA236
{
	if (bParam1)
	{
		if (!func_123(iParam0, 2, 1))
		{
			func_122(iParam0, 2, 1);
		}
	}
	else if (func_123(iParam0, 2, 1))
	{
		func_116(iParam0, 2, 1);
	}
}

void func_116(int iParam0, int iParam1, bool bParam2)//Position - 0xA26D
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (bParam2)
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_16C64.f_538[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_121() == 0)
		{
			iVar0 = func_119(func_120(iParam0), 4294967295, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, iParam1);
			func_117(func_120(iParam0), iVar0, 4294967295, 1, 0);
		}
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_29C[iParam0]), iParam1);
	}
}

void func_117(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xA2DF
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_118(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_118(var uParam0)//Position - 0xA30F
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_25();
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

int func_119(int iParam0, int iParam1, int iParam2)//Position - 0xA343
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_118(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_120(int iParam0)//Position - 0xA375
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 8488;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		default:
			break;
	}
	return 9954;
}

int func_121()//Position - 0xA678
{
	return Global_6373;
}

void func_122(int iParam0, int iParam1, bool bParam2)//Position - 0xA683
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_16C64.f_538[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_121() == 0)
		{
			iVar0 = func_119(func_120(iParam0), 4294967295, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_117(func_120(iParam0), iVar0, 4294967295, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_19E56.f_29C[iParam0]), iParam1);
	}
}

int func_123(int iParam0, int iParam1, bool bParam2)//Position - 0xA6F5
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	if (bParam2)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_16C64.f_538[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_121() == 0)
		{
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(func_119(func_120(iParam0), 4294967295, 0), iParam1);
		}
	}
	else
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_124(vector3 vParam0, float fParam1, int iParam2)//Position - 0xA75F
{
	if (ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vParam0, fParam1, fParam1, fParam1, false, true, 0))
	{
		if (iParam2 == 0)
		{
			if (CAM::IS_SPHERE_VISIBLE(vParam0, 5f))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_125(int iParam0, int iParam1)//Position - 0xA79D
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_126()//Position - 0xA7BE
{
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 0))
		{
			if (((((!PED::IS_PED_ON_ANY_BIKE(AUDIO::_0x0626A247D2405330()) && !PED::IS_PED_IN_FLYING_VEHICLE(AUDIO::_0x0626A247D2405330())) && !PED::IS_PED_IN_ANY_BOAT(AUDIO::_0x0626A247D2405330())) && !PED::IS_PED_IN_ANY_SUB(AUDIO::_0x0626A247D2405330())) && !PED::IS_PED_IN_ANY_TRAIN(AUDIO::_0x0626A247D2405330())) && !PED::IS_PED_IN_MODEL(AUDIO::_0x0626A247D2405330(), joaat("RHINO")))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)) >= 2)
				{
					return 1;
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(AUDIO::_0x0626A247D2405330()), 0))
		{
			if (((((!VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(AUDIO::_0x0626A247D2405330()))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(AUDIO::_0x0626A247D2405330())))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(AUDIO::_0x0626A247D2405330())))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(AUDIO::_0x0626A247D2405330())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(AUDIO::_0x0626A247D2405330())))) && ENTITY::GET_ENTITY_MODEL(PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(AUDIO::_0x0626A247D2405330())) != joaat("RHINO"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_127(bool bParam0)//Position - 0xA8F6
{
	if (bParam0)
	{
	}
}

int func_128(int iParam0)//Position - 0xA903
{
	if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		if (func_129(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_129(int iParam0)//Position - 0xA920
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_9(6) || func_9(7))
			{
				return 1;
			}
			else
			{
				return func_129(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_108(5))
			{
				if (func_130(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_130(int iParam0)//Position - 0xA992
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				iVar0 = func_114();
				if (!func_10(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_139()) || Global_19A9D) || Global_6375) || func_138()) || func_137(8, 4294967295)) || func_136()) || func_135()) || func_134()) || func_133()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1) || func_139()) || Global_6375) || func_138()) || func_137(8, 4294967295)) || func_134()) || func_136()) || func_135()) || func_133()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_139()) || Global_19A9D) || Global_6375) || func_138()) || func_137(8, 4294967295)) || func_134()) || func_136()) || func_135()) || func_133()) || Global_19E56.f_1DEC.f_397[iVar0] == 5) || Global_8F38 != 4294967295)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_139()) || Global_19A9D) || Global_6375) || func_138()) || func_137(8, 4294967295)) || func_136()) || func_135()) || func_133()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_139() || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || func_137(8, 4294967295)) || func_133()) || func_132()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_137(8, 4294967295) || func_136()) || func_135()) || func_132()) || func_131())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || func_139()) || Global_6375) || func_138()) || func_137(8, 4294967295)) || func_135()) || func_134()) || func_133()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || func_139()) || func_135()) || Global_19A9D) || Global_6375) || func_138()) || Global_9197) || func_137(8, 4294967295)) || func_134()) || func_132()) || func_133()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0)) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1)) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_SWIMMING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || func_139()) || Global_19A9D) || Global_6375) || func_138()) || func_137(8, 4294967295)) || func_134()) || func_132()) || func_136()) || func_135()) || func_133())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_131()//Position - 0xB0AF
{
	return Global_16C57.f_1;
}

int func_132()//Position - 0xB0BD
{
	if (Global_16089 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14893[Global_16089 /*34*/].f_F, 13);
	}
	return 0;
}

int func_133()//Position - 0xB0E3
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_134()//Position - 0xB0FD
{
	if (Global_11729)
	{
		return 1;
	}
	else if (Global_DB6F && !Global_DB75)
	{
		return 1;
	}
	return 0;
}

bool func_135()//Position - 0xB127
{
	return Global_16C64.f_148 > 0;
}

bool func_136()//Position - 0xB138
{
	return Global_16C64.f_147 > 0;
}

bool func_137(int iParam0, int iParam1)//Position - 0xB149
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

var func_138()//Position - 0xB184
{
	return Global_140859;
}

int func_139()//Position - 0xB190
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_162B5.f_2C == 1;
	}
	return 0;
}

int func_140(int iParam0, struct<7> Param1, var uParam2, var uParam3)//Position - 0xB1AC
{
	if (iParam0 == 1)
	{
		func_150(&uLocal_270, Param1);
		func_150(&uLocal_270, Param1.f_1);
		func_150(&uLocal_270, Param1.f_2);
		func_150(&uLocal_270, Param1.f_3);
		func_150(&uLocal_270, Param1.f_4);
		func_150(&uLocal_270, Param1.f_5);
		func_150(&uLocal_270, Param1.f_6);
		if (func_147(&uLocal_270))
		{
			return 1;
		}
	}
	else
	{
		func_141(&uLocal_270, 0);
	}
	return 0;
}

void func_141(var uParam0, bool bParam1)//Position - 0xB21F
{
	int iVar0;
	
	if (!bParam1)
	{
		func_143(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_142(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 4294967295;
}

void func_142(var uParam0)//Position - 0xB25A
{
	*uParam0 = 0;
	uParam0->f_1 = 4294967295;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_143(var uParam0)//Position - 0xB273
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM((*uParam0)[iVar0 /*18*/], 30))
		{
			func_144(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_91 = 1;
}

void func_144(var uParam0)//Position - 0xB2AC
{
	func_145(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_145(int iParam0, char* sParam1, int iParam2)//Position - 0xB2C3
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 30))
	{
		switch (func_146(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				BRAIN::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

int func_146(int iParam0)//Position - 0xB383
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_147(var uParam0)//Position - 0xB3AF
{
	int iVar0;
	
	if (!uParam0->f_91)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_148(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_91 = 0;
	return 1;
}

bool func_148(var uParam0)//Position - 0xB411
{
	return func_149(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_149(int iParam0, char* sParam1, int iParam2)//Position - 0xB428
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 30))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 29))
		{
			switch (func_146(iParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(iParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return BRAIN::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 27), 4294967295);
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_150(var uParam0, int iParam1)//Position - 0xB51C
{
	func_151(uParam0, 0, iParam1, "NULL", 0);
}

void func_151(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xB530
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM((*uParam0)[iVar0 /*18*/], 30))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != 4294967295)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
					{
						if (MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_91)
	{
		uParam0->f_91 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			MISC::SET_BIT(uParam0[iVar0 /*18*/], iParam1);
			MISC::SET_BIT(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_152()//Position - 0xB618
{
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), vLocal_49) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(AUDIO::_0x0626A247D2405330())) > 1369f && !func_163())
		{
			return 0;
		}
	}
	if (func_159())
	{
		return 1;
	}
	if (func_153(100f, 1) != 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_153(float fParam0, bool bParam1)//Position - 0xB69E
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = 4294967295;
	fVar3 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_10(func_114()))
		{
			iVar5 = func_7();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4872[iVar1 /*6*/], 2) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4872[iVar1 /*6*/], 3))
				{
					func_154(iVar1, &Var0);
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_1A)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_154(int iParam0, var uParam1)//Position - 0xB755
{
	switch (iParam0)
	{
		case 0:
			func_155(uParam1, "Abigail1", func_157(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 1:
			func_155(uParam1, "Abigail2", func_157(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, 4294967295, 4, 1, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 2:
			func_155(uParam1, "Barry1", func_157(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, 4294967295, 4, 1, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 3:
			func_155(uParam1, "Barry2", func_157(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 4, 0, 2359, func_156(iParam0), 1, 1);
			break;
		
		case 4:
			func_155(uParam1, "Barry3", func_157(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", 4294967295, 0, "", 164, 1, 4294967295, 0, 2, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 5:
			func_155(uParam1, "Barry3A", func_157(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 6:
			func_155(uParam1, "Barry3C", func_157(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 7:
			func_155(uParam1, "Barry4", func_157(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, 4294967295, 4, 2, 800, 2000, func_156(iParam0), 0, 0);
			break;
		
		case 8:
			func_155(uParam1, "Dreyfuss1", func_157(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 9:
			func_155(uParam1, "Epsilon1", func_157(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 10:
			func_155(uParam1, "Epsilon2", func_157(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 11:
			func_155(uParam1, "Epsilon3", func_157(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 12:
			func_155(uParam1, "Epsilon4", func_157(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 13:
			func_155(uParam1, "Epsilon5", func_157(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 14:
			func_155(uParam1, "Epsilon6", func_157(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 15:
			func_155(uParam1, "Epsilon7", func_157(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", 4294967295, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 16:
			func_155(uParam1, "Epsilon8", func_157(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, 4294967295, 4, 1, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 17:
			func_155(uParam1, "Extreme1", func_157(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", 4294967295, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 18:
			func_155(uParam1, "Extreme2", func_157(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 19:
			func_155(uParam1, "Extreme3", func_157(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 20:
			func_155(uParam1, "Extreme4", func_157(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 21:
			func_155(uParam1, "Fanatic1", func_157(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, 4294967295, 4, 1, 700, 2000, func_156(iParam0), 1, 0);
			break;
		
		case 22:
			func_155(uParam1, "Fanatic2", func_157(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 4, 700, 2000, func_156(iParam0), 1, 0);
			break;
		
		case 23:
			func_155(uParam1, "Fanatic3", func_157(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 2, 700, 2000, func_156(iParam0), 0, 1);
			break;
		
		case 24:
			func_155(uParam1, "Hao1", func_157(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", 4294967295, 0, "controller_Races", 13, 1, 4294967295, 4, 2, 2000, 500, func_156(iParam0), 0, 1);
			break;
		
		case 25:
			func_155(uParam1, "Hunting1", func_157(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", 4294967295, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 26:
			func_155(uParam1, "Hunting2", func_157(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, 4294967295, 4, 4, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 27:
			func_155(uParam1, "Josh1", func_157(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", 4294967295, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 28:
			func_155(uParam1, "Josh2", func_157(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_156(iParam0), 1, 1);
			break;
		
		case 29:
			func_155(uParam1, "Josh3", func_157(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 4294967295, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_156(iParam0), 1, 1);
			break;
		
		case 30:
			func_155(uParam1, "Josh4", func_157(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", 4294967295, 36, "", 0, 0, 4294967295, 4, 4, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 31:
			func_155(uParam1, "Maude1", func_157(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", 4294967295, 0, "BailBond_Launcher", 0, 1, 4294967295, 4, 4, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 32:
			func_155(uParam1, "Minute1", func_157(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", 4294967295, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 33:
			func_155(uParam1, "Minute2", func_157(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", 4294967295, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 34:
			func_155(uParam1, "Minute3", func_157(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", 4294967295, 10, "", 0, 0, 4294967295, 4, 4, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 35:
			func_155(uParam1, "MrsPhilips1", func_157(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", 4294967295, 0, "ambient_MrsPhilips", 0, 1, 4294967295, 4, 4, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 36:
			func_155(uParam1, "MrsPhilips2", func_157(iParam0), 0, 11, 4, 0f, 0f, 0f, 4294967295, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 4, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 37:
			func_155(uParam1, "Nigel1", func_157(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", 4294967295, 0, "", 177, 1, 4294967295, 1, 4, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 38:
			func_155(uParam1, "Nigel1A", func_157(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_156(iParam0), 1, 1);
			break;
		
		case 39:
			func_155(uParam1, "Nigel1B", func_157(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_156(iParam0), 1, 1);
			break;
		
		case 40:
			func_155(uParam1, "Nigel1C", func_157(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_156(iParam0), 1, 1);
			break;
		
		case 41:
			func_155(uParam1, "Nigel1D", func_157(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_156(iParam0), 1, 1);
			break;
		
		case 42:
			func_155(uParam1, "Nigel2", func_157(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", 4294967295, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_156(iParam0), 1, 1);
			break;
		
		case 43:
			func_155(uParam1, "Nigel3", func_157(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", 4294967295, 16, "postRC_Nigel3", 0, 0, 4294967295, 4, 4, 0, 2359, func_156(iParam0), 1, 1);
			break;
		
		case 44:
			func_155(uParam1, "Omega1", func_157(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", 4294967295, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 45:
			func_155(uParam1, "Omega2", func_157(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 46:
			func_155(uParam1, "Paparazzo1", func_157(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", 4294967295, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 47:
			func_155(uParam1, "Paparazzo2", func_157(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", 4294967295, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 48:
			func_155(uParam1, "Paparazzo3", func_157(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", 4294967295, 8, "", 183, 1, 4294967295, 2, 2, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 49:
			func_155(uParam1, "Paparazzo3A", func_157(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 50:
			func_155(uParam1, "Paparazzo3B", func_157(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 51:
			func_155(uParam1, "Paparazzo4", func_157(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", 4294967295, 8, "", 0, 1, 4294967295, 4, 2, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 52:
			func_155(uParam1, "Rampage1", func_157(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", 4294967295, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 54:
			func_155(uParam1, "Rampage3", func_157(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", 4294967295, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 55:
			func_155(uParam1, "Rampage4", func_157(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", 4294967295, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 56:
			func_155(uParam1, "Rampage5", func_157(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", 4294967295, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 53:
			func_155(uParam1, "Rampage2", func_157(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", 4294967295, 0, "rampage_controller", 0, 0, 4294967295, 4, 4, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 57:
			func_155(uParam1, "TheLastOne", func_157(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, 4294967295, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 58:
			func_155(uParam1, "Tonya1", func_157(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", 4294967295, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 59:
			func_155(uParam1, "Tonya2", func_157(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", 4294967295, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 60:
			func_155(uParam1, "Tonya3", func_157(iParam0), 0, 17, 4, 0f, 0f, 0f, 4294967295, "", 4294967295, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 61:
			func_155(uParam1, "Tonya4", func_157(iParam0), 0, 17, 4, 0f, 0f, 0f, 4294967295, "", 4294967295, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 62:
			func_155(uParam1, "Tonya5", func_157(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", 4294967295, 48, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_155(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0xC99D
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_A), sParam8, 16);
	uParam0->f_E = iParam9;
	uParam0->f_F = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 24);
	uParam0->f_16 = iParam12;
	uParam0->f_17 = iParam13;
	uParam0->f_18 = iParam14;
	uParam0->f_19 = iParam15;
	uParam0->f_1A = iParam16;
	uParam0->f_1B = iParam17;
	uParam0->f_1C = iParam18;
	uParam0->f_1D = uParam19;
	uParam0->f_1E = iParam20;
	uParam0->f_1F = iParam21;
}

int func_156(int iParam0)//Position - 0xCA2E
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_157(int iParam0)//Position - 0xCD74
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_158(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_158(int iParam0)//Position - 0xCDAC
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_159()//Position - 0xD1F9
{
	if (func_162() && !func_163())
	{
		return 1;
	}
	if (func_161() && func_160())
	{
		return 1;
	}
	return 0;
}

bool func_160()//Position - 0xD22B
{
	return Global_19D3C > 0;
}

int func_161()//Position - 0xD239
{
	if (Global_16089 != 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_162()//Position - 0xD24E
{
	if (Global_16089 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14893[Global_16089 /*34*/].f_F, 20);
	}
	return 0;
}

int func_163()//Position - 0xD274
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_164(int iParam0)//Position - 0xD291
{
	Global_19E48 = iParam0;
}

void func_165()//Position - 0xD29F
{
	if (!bLocal_248)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(func_179(CAM::_0xDC9DA9E8789F5246()) - Vector(0f, 10f, 0f), MISC::GET_RANDOM_INT_IN_RANGE(5, 15), &vLocal_235, 1, 3f, 0f);
		if (!CAM::IS_SPHERE_VISIBLE(vLocal_235, 10f))
		{
			vLocal_233 = { vLocal_235 };
			bLocal_247 = true;
		}
		else
		{
			PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(func_179(CAM::_0xDC9DA9E8789F5246()) + Vector(0f, 10f, 0f), MISC::GET_RANDOM_INT_IN_RANGE(5, 15), &vLocal_235, 1, 3f, 0f);
			if (!CAM::IS_SPHERE_VISIBLE(vLocal_235, 10f))
			{
				vLocal_233 = { vLocal_235 };
				bLocal_247 = true;
			}
			if (bLocal_247)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_260[0]))
				{
					iLocal_260[0] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), vLocal_233 + Vector(0f, 5f, 0f), 0f, 1, true);
					if (func_60())
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_260[0], joaat("weapon_pistol"), 4294967295, true, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_260[0], iLocal_268);
						ENTITY::SET_ENTITY_HEALTH(iLocal_260[0], true);
						BRAIN::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_260[0], 50f, 0);
						PED::SET_PED_KEEP_TASK(iLocal_260[0], true);
					}
					else
					{
						ENTITY::SET_ENTITY_HEALTH(iLocal_260[0], true);
						BRAIN::OPEN_SEQUENCE_TASK(&iLocal_265);
						BRAIN::TASK_GO_TO_ENTITY(0, AUDIO::_0x0626A247D2405330(), 4294967295, 6f, 3f, 1073741824, 0);
						BRAIN::TASK_PLAY_ANIM(0, "random@getawaydriver", "gesture_nod_yes_hard", 8f, -8f, 4294967295, 48, 0, 0, 0, 0);
						BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, AUDIO::_0x0626A247D2405330(), 0);
						BRAIN::TASK_STAND_STILL(0, 3000);
						CUTSCENE::_0x8D9DF6ECA8768583(iLocal_265);
						BRAIN::TASK_PERFORM_SEQUENCE(iLocal_260[0], iLocal_265);
						BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_265);
						PED::SET_PED_KEEP_TASK(iLocal_260[0], true);
						func_113(&uLocal_53, 4, iLocal_260[0], "REGETCop", 0, 1);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_260[1]))
				{
					iLocal_260[1] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), vLocal_233 - Vector(0f, 5f, 0f), 0f, 1, true);
					if (func_60())
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_260[0], joaat("weapon_pistol"), 4294967295, false, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_260[1], iLocal_268);
						ENTITY::SET_ENTITY_HEALTH(iLocal_260[1], true);
						BRAIN::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_260[1], 50f, 0);
						PED::SET_PED_KEEP_TASK(iLocal_260[1], true);
					}
					else
					{
						ENTITY::SET_ENTITY_HEALTH(iLocal_260[1], true);
						BRAIN::TASK_GO_TO_COORD_ANY_MEANS(iLocal_260[1], 68.7217f, -1569.83f, 28.6027f, 3f, 0, 0, 786603, 3212836864);
						PED::SET_PED_KEEP_TASK(iLocal_260[1], true);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_262))
				{
					iLocal_262 = VEHICLE::CREATE_VEHICLE(joaat("POLICE3"), vLocal_233, 0f, true, true, false);
					vLocal_234 = { func_179(CAM::_0xDC9DA9E8789F5246()) - unk_0x8000C77B5F336760(iLocal_262, true) };
					ENTITY::SET_ENTITY_HEADING(iLocal_262, MISC::GET_HEADING_FROM_VECTOR_2D(vLocal_234.x, vLocal_234.y));
					VEHICLE::SET_VEHICLE_SIREN(iLocal_262, 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_260[2]))
				{
					iLocal_260[2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_262, 6, joaat("s_m_y_cop_01"), 4294967295, 1, true);
					if (func_60())
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_260[2], joaat("weapon_pistol"), 4294967295, true, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_260[2], iLocal_268);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_260[2], 1, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_260[2], 3, false);
						ENTITY::SET_ENTITY_HEALTH(iLocal_260[2], true);
						BRAIN::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_260[2], iLocal_262, iLocal_258[1], 6, 15f, 2, -1f, -1f, 1);
						PED::SET_PED_KEEP_TASK(iLocal_260[2], true);
					}
					else
					{
						ENTITY::SET_ENTITY_HEALTH(iLocal_260[2], true);
						BRAIN::OPEN_SEQUENCE_TASK(&iLocal_265);
						BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_262, 40.2328f, -1555.753f, 28.2128f, 10f, 0, joaat("POLICE"), 786469, 1f, -1f);
						BRAIN::TASK_STAND_STILL(0, 5000);
						CUTSCENE::_0x8D9DF6ECA8768583(iLocal_265);
						BRAIN::TASK_PERFORM_SEQUENCE(iLocal_260[2], iLocal_265);
						BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_265);
						PED::SET_PED_KEEP_TASK(iLocal_260[2], true);
					}
				}
				bLocal_248 = true;
			}
		}
	}
}

int func_166(var uParam0, int iParam1, float fParam2)//Position - 0xD643
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam1, 0))
				{
					if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
					{
						if (PED::IS_PED_IN_VEHICLE((*uParam0)[iVar0], iParam1, 0))
						{
							return 0;
						}
						if (fParam2 > 0f)
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY((*uParam0)[iVar0], AUDIO::_0x0626A247D2405330(), fParam2, fParam2, fParam2, 0, 1, 0))
							{
								return 0;
							}
						}
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
		else
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_167()//Position - 0xD6DE
{
	Global_3960 = 0;
	func_168();
}

void func_168()//Position - 0xD6EE
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_41C1 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_3DCE = 6;
	}
}

int func_169(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD70F
{
	func_177(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_280001 = 0;
	return func_170(sParam2, iParam3, 0);
}

int func_170(char* sParam0, int iParam1, bool bParam2)//Position - 0xD75D
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
					func_74();
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
		if (func_137(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_176();
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
				func_175();
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
				if (func_174())
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
			if (func_173())
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
			func_172();
			Global_3DD8 = bParam2;
		}
		Global_3DD0 = iParam1;
		StringCopy(&Global_3C51, sParam0, 24);
		Global_3960 = 0;
		func_171();
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
		func_74();
	}
	return 0;
}

void func_171()//Position - 0xDA29
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

void func_172()//Position - 0xDA5B
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

int func_173()//Position - 0xDAF0
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_174()//Position - 0xDB17
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

void func_175()//Position - 0xDBB0
{
	if (func_9(14))
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
		Global_38B1 = func_114();
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

void func_176()//Position - 0xDC52
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

void func_177(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0xDCAA
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

int func_178()//Position - 0xDD00
{
	if (Global_3DCE != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

Vector3 func_179(int iParam0)//Position - 0xDD22
{
	return unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_180()//Position - 0xDD35
{
	func_181();
}

int func_181()//Position - 0xDD42
{
	if (func_182(0))
	{
		return 0;
	}
	if (Global_16C57.f_8)
	{
		if (Global_16C57.f_A > 0)
		{
			return 0;
		}
	}
	else if (Global_16C57.f_A > 1)
	{
		return 0;
	}
	Global_16C57.f_A++;
	return 1;
}

bool func_182(bool bParam0)//Position - 0xDD8D
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

void func_183(int iParam0, int iParam1)//Position - 0xDDB8
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_190();
	}
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (iParam1 <= func_189(iParam0))
	{
		func_188(iParam0, iParam1);
		if (!func_13(51))
		{
			func_4("RE_REWARD", 1, 0, 4000, 10000, func_7(), 0, 138, 0);
			func_187(51);
		}
		if (func_104(iParam0))
		{
			Global_19E56.f_6187.f_2 = 3;
		}
		if (func_186(iParam0, iParam1) != 322)
		{
			func_184(func_186(iParam0, iParam1), vLocal_49.x, vLocal_49.y);
		}
		Global_19E4A = iParam1;
		if (Global_19E48 == 0)
		{
			if (((Global_19E4B == 1 || Global_19E4B == 5) || Global_19E4B == 11) || Global_19E4B == 25)
			{
				func_164(2);
			}
			else if ((Global_19E4B == 26 || Global_19E4B == 8) || Global_19E4B == 17)
			{
				func_164(7);
			}
			else
			{
				func_164(1);
			}
		}
	}
}

void func_184(int iParam0, var uParam1, var uParam2)//Position - 0xDEBC
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_24((891 + iParam0), 1, 4294967295, 1);
	}
	bVar0 = true;
	if (Global_19E56.f_27B6[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_19E56.f_27B6[iParam0 /*12*/].f_6 == 11 || Global_19E56.f_27B6[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_19E56.f_27B6[iParam0 /*12*/].f_5 = 1;
		Global_19E56.f_27B6[iParam0 /*12*/].f_A = uParam1;
		Global_19E56.f_27B6[iParam0 /*12*/].f_B = uParam2;
		if (iParam0 == 287)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_185();
	}
}

void func_185()//Position - 0xDFA4
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_19D4E = 0;
	Global_19D4F = 0;
	Global_19D50 = 0;
	Global_19D51 = 0;
	Global_19D52 = 0;
	Global_19D53 = 0;
	Global_19D54 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_19E56.f_27B6.f_F0D;
	Global_19E56.f_27B6.f_F0D = 0f;
	while (iVar0 < 321)
	{
		if (Global_19E56.f_27B6[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_19E56.f_27B6[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_19D4E++;
					fVar1 = (fVar1 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_19D4F++;
					fVar2 = (fVar2 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_19D50++;
					fVar3 = (fVar3 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_19D51++;
					fVar4 = (fVar4 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_19D52++;
					fVar5 = (fVar5 + (Global_19E56.f_27B6[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_19D53++;
					fVar6 = (fVar6 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_19D54++;
					fVar7 = (fVar7 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_19D3D > 0)
	{
		if (Global_19D4E == Global_19D3D)
		{
			fVar1 = 55f;
		}
	}
	if (Global_19D3E > 0)
	{
		if (Global_19D4F == Global_19D3E)
		{
			fVar2 = 10f;
		}
	}
	if (Global_19D3F > 0)
	{
		if (Global_19D50 == Global_19D3F)
		{
			fVar3 = 0f;
		}
	}
	if (Global_19D40 > 0)
	{
		if (Global_19D51 == Global_19D40)
		{
			fVar4 = 10f;
		}
	}
	if (Global_19D41 > 0)
	{
		if (((Global_19D52 == Global_19D41 || (Global_19D41 * 10 / Global_19D52) < 41) || Global_19D52 > Global_19D44) || Global_19D52 == Global_19D44)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_27B6.f_F10, 14))
			{
				if (Global_19D52 == Global_19D41)
				{
					STATS::_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_19D41, 0);
					MISC::SET_BIT(&(Global_19E56.f_27B6.f_F10), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_19D42 > 0)
	{
		if (Global_19D53 == Global_19D42)
		{
			fVar6 = 15f;
		}
	}
	if (Global_19D43 > 0)
	{
		if (Global_19D54 == Global_19D43)
		{
			fVar7 = 5f;
		}
	}
	Global_19E56.f_27B6.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_19D52 > Global_19D44 || Global_19D52 == Global_19D44)
	{
		iVar9 = Global_19D44;
	}
	else
	{
		iVar9 = Global_19D52;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_19D4E, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_19D3D, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_19D4F, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_19D3E, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_19D50, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_19D3F, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_19D51, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_19D40, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_19D44, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_19D54 + Global_19D53), 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_19D43 + Global_19D42), 1);
	Global_19D55 = (Global_19D4E * 100 / Global_19D3D);
	Global_19D57 = ((Global_19D50 + Global_19D4F) * 100 / (Global_19D3F + Global_19D3E));
	Global_19D56 = ((Global_19D51 + iVar9) * 100 / (Global_19D40 + Global_19D44));
	Global_19D58 = ((Global_19D53 + Global_19D54) * 100 / (Global_19D42 + Global_19D43));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_19E56.f_27B6.f_F0D, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_19D55, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_19D56, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_19D57, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_19E56.f_27B6.f_F0D))
	{
		func_45(13, SYSTEM::FLOOR(Global_19E56.f_27B6.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_11625)
		{
			if (func_121() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_19D4C = 0;
				}
				if (!Global_DB75)
				{
					func_181();
				}
			}
		}
	}
}

int func_186(int iParam0, int iParam1)//Position - 0xE465
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

void func_187(int iParam0)//Position - 0xE7D9
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_19E56.f_4F9E.f_96[iVar1]), iVar0);
	}
}

void func_188(int iParam0, int iParam1)//Position - 0xE81B
{
	MISC::SET_BIT(&(Global_19E56.f_6187.f_8[iParam0]), iParam1);
}

int func_189(int iParam0)//Position - 0xE836
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_190()//Position - 0xE8E7
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = func_191(Var0);
	return uVar1;
}

int func_191(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0xE904
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return 4294967295;
}

void func_192(int iParam0, bool bParam1)//Position - 0xEADE
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_195(iParam0))
		{
			MISC::SET_BIT(&(Global_19E56.f_6726.f_1), iVar0);
			if (!bParam1)
			{
				func_193(func_194(iParam0));
			}
		}
	}
}

void func_193(char* sParam0)//Position - 0xEB27
{
	HUD::_SET_NOTIFICATION_TEXT_ENTRY("");
	HUD::_SET_NOTIFICATION_MESSAGE_3("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

char* func_194(int iParam0)//Position - 0xEB4C
{
	switch (iParam0)
	{
		case 0:
			return "CM_HSTCHE";
			break;
		
		case 1:
			return "CM_HSTCHR";
			break;
		
		case 2:
			return "CM_HSTDAR";
			break;
		
		case 3:
			return "CM_HSTEDD";
			break;
		
		case 4:
			return "CM_HSTGUS";
			break;
		
		case 5:
			return "CM_HSTHUG";
			break;
		
		case 6:
			return "CM_HSTKRM";
			break;
		
		case 7:
			return "CM_HSTKAR";
			break;
		
		case 8:
			return "CM_HSTNOR";
			break;
		
		case 9:
			return "CM_HSTPAC";
			break;
		
		case 10:
			return "CM_HSTPAI";
			break;
		
		case 11:
			return "CM_HSTRIC";
			break;
		
		case 12:
			return "CM_HSTTAL";
			break;
	}
	return "ERROR!";
}

int func_195(int iParam0)//Position - 0xEC2F
{
	if (iParam0 != 4294967295 && iParam0 != 13)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6726.f_1, iParam0);
	}
	return 0;
}

int func_196()//Position - 0xEC5E
{
	return 1;
}

int func_197()//Position - 0xEC67
{
	if (Global_645F)
	{
		func_164(4);
		return 1;
	}
	return 0;
}

int func_198(int iParam0)//Position - 0xEC7F
{
	return func_123(iParam0, 5, 1);
}

int func_199()//Position - 0xEC8F
{
	if (!func_108(5))
	{
		return 1;
	}
	if (func_159())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(AUDIO::_0x0626A247D2405330())) > 1369f && !func_163())
		{
			return 0;
		}
	}
	if (func_153(100f, 1) != 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_200()//Position - 0xECF1
{
	if ((Global_19E4B == func_190() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_19E4C)
	{
		return 1;
	}
	return 0;
}

void func_201(var uParam0)//Position - 0xED1C
{
	int iVar0;
	
	if (uParam0->f_91)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_92 + uParam0->f_93) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_16C30.f_14, 2)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_16C30.f_14, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM((*uParam0)[iVar0 /*18*/], 29))
					{
						func_202(uParam0[iVar0 /*18*/]);
						uParam0->f_92 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_202(int iParam0)//Position - 0xEDA6
{
	func_203(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_203(int iParam0, char* sParam1, int iParam2)//Position - 0xEDBC
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 30))
	{
		switch (func_146(*iParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(iParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
			
			case 3:
				unk_0xE2BBD32891C18569(sParam1, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				BRAIN::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 27), 4294967295);
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		MISC::SET_BIT(iParam0, 29);
	}
}

void func_204(int iParam0)//Position - 0xEE96
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_190();
	}
	if (iParam0 == 4294967295)
	{
		return;
	}
	func_206(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_19E48 = 0;
	func_205();
}

void func_205()//Position - 0xEECC
{
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)), true);
		}
		PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 32, false);
	}
}

void func_206(int iParam0)//Position - 0xEF09
{
	Global_19E4B = iParam0;
}

int func_207(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xEF17
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (!Global_2347E)
	{
		return 0;
	}
	if (iParam1 == 4294967295)
	{
		iParam1 = func_190();
	}
	if (iParam1 == 4294967295)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_92())
		{
			return 0;
		}
	}
	vLocal_49 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(AUDIO::_0x0626A247D2405330())) > 1369f && !func_163())
			{
				return 0;
			}
		}
		if (!Global_19E56.f_2361)
		{
			return 0;
		}
		if (func_182(0))
		{
			return 0;
		}
		if (func_159())
		{
			return 0;
		}
		if (func_237())
		{
			return 0;
		}
		if (Global_19E4B != 4294967295)
		{
			return 0;
		}
		if (func_10(func_114()))
		{
			if (func_153(100f, 1) != 4294967295)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) && !bParam4)
		{
			if ((vVar1.z - vLocal_49.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_236(iParam1))
		{
			return 0;
		}
		if (func_10(func_114()))
		{
			if (func_235(func_114()) == 4 || func_235(func_114()) == 5)
			{
				return 0;
			}
		}
		if (func_10(func_114()))
		{
			if (!func_234(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_233(Global_19E56.f_6187.f_2B[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_19E4D) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_232())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_130(4))
		{
			return 0;
		}
		if (!func_108(5))
		{
			return 0;
		}
		if (func_231(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_231(0, 0))
		{
			return 0;
		}
		if (Global_6405)
		{
			return 0;
		}
		if (func_236(30) && !func_231(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_10(func_114()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_19E56.f_933.f_21B.f_8E8[iVar2 /*3*/] };
				iVar4 = Global_19E56.f_933.f_21B.f_8E4[iVar2];
				if (func_230(iVar4))
				{
					if (func_208(iVar2))
					{
						if (!func_59(vVar3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), vVar3) < (210f * 210f))
							{
								if (func_114() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_208(int iParam0)//Position - 0xF2B1
{
	int iVar0;
	
	iVar0 = Global_19E56.f_933.f_21B.f_8E4[iParam0];
	return func_209(iVar0);
}

int func_209(int iParam0)//Position - 0xF2D2
{
	return func_210(iParam0, 1);
}

int func_210(int iParam0, int iParam1)//Position - 0xF2E1
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_230(iParam0))
	{
		return 0;
	}
	func_211(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_211(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xF334
{
	func_212(func_223(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_212(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xF352
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_222(iParam0, iParam1))
	{
		iVar0 = func_221(iParam1);
		iVar1 = func_219(iParam0);
		iVar2 = (func_219(iParam0) - func_219(iParam1));
		iVar3 = (func_221(iParam0) - func_221(iParam1));
		iVar4 = (func_218(iParam0) - func_218(iParam1));
		iVar5 = (func_217(iParam0) - func_217(iParam1));
		iVar6 = (func_216(iParam0) - func_216(iParam1));
		iVar7 = (func_215(iParam0) - func_215(iParam1));
	}
	else
	{
		iVar0 = func_221(iParam0);
		iVar1 = func_219(iParam1);
		iVar2 = (func_219(iParam1) - func_219(iParam0));
		iVar3 = (func_221(iParam1) - func_221(iParam0));
		iVar4 = (func_218(iParam1) - func_218(iParam0));
		iVar5 = (func_217(iParam1) - func_217(iParam0));
		iVar6 = (func_216(iParam1) - func_216(iParam0));
		iVar7 = (func_215(iParam1) - func_215(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_214(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_213(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_213(float fParam0, float fParam1, float fParam2)//Position - 0xF553
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_214(int iParam0, int iParam1)//Position - 0xF595
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_215(int iParam0)//Position - 0xF637
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_216(int iParam0)//Position - 0xF64A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_217(int iParam0)//Position - 0xF65D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_218(int iParam0)//Position - 0xF670
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_219(int iParam0)//Position - 0xF682
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_220(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 31), 4294967295, 1)) + 2011;
}

int func_220(bool bParam0, int iParam1, int iParam2)//Position - 0xF6A7
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_221(int iParam0)//Position - 0xF6BE
{
	return iParam0 & 15;
}

int func_222(int iParam0, int iParam1)//Position - 0xF6CB
{
	int iVar0;
	int iVar1;
	
	if (!func_230(iParam1) || !func_230(iParam0))
	{
		return 1;
	}
	iVar0 = func_219(iParam0);
	iVar1 = func_219(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_221(iParam0);
	iVar1 = func_221(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_218(iParam0);
	iVar1 = func_218(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_217(iParam0);
	iVar1 = func_217(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_216(iParam0);
	iVar1 = func_216(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_215(iParam0);
	iVar1 = func_215(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_223()//Position - 0xF7D7
{
	var uVar0;
	
	func_229(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_228(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_227(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_226(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_225(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_224(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_224(var uParam0, int iParam1)//Position - 0xF81D
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 = (*uParam0 || 2147483648);
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - (*uParam0 && 2147483648));
	}
}

void func_225(var uParam0, int iParam1)//Position - 0xF8A3
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_226(var uParam0, int iParam1)//Position - 0xF8D6
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_221(*uParam0);
	iVar1 = func_219(*uParam0);
	if (iParam1 < 1 || iParam1 > func_214(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_227(var uParam0, int iParam1)//Position - 0xF927
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_228(var uParam0, int iParam1)//Position - 0xF961
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_229(var uParam0, int iParam1)//Position - 0xF99C
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_230(int iParam0)//Position - 0xF9D8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == 4294967281)
	{
		return 0;
	}
	iVar0 = func_215(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_216(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_217(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_219(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_221(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_218(iParam0);
	if (iVar5 < 1 || iVar5 > func_214(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_231(int iParam0, int iParam1)//Position - 0xFAB4
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6187.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_232()//Position - 0xFAD7
{
	func_175();
	if (Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_233(int iParam0)//Position - 0xFAFF
{
	return func_222(func_223(), iParam0);
}

int func_234(int iParam0, int iParam1, int iParam2)//Position - 0xFB11
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_114();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
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
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_235(int iParam0)//Position - 0xFBF5
{
	if (!func_10(iParam0))
	{
		return 7;
	}
	return Global_19E56.f_1DEC.f_397[iParam0];
}

bool func_236(int iParam0)//Position - 0xFC19
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_92())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6187, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6187.f_1, iVar0);
	}
	return bVar1;
}

int func_237()//Position - 0xFC77
{
	int iVar0;
	
	if (Global_6409)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_238(var uParam0, int iParam1)//Position - 0xFCBB
{
	if (iParam1 > 0)
	{
		uParam0->f_93 = iParam1;
	}
}

void func_239(struct<9> Param0, int iParam1, bool bParam2)//Position - 0xFCD2
{
	int iVar0;
	
	if (iLocal_269)
	{
		func_252(0);
		if (Global_6462)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		func_251();
		func_100(0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), true, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), 0);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), true);
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(CAM::_0xDC9DA9E8789F5246());
		GRAPHICS::_0x54E22EA2C1956A8D(1f);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_264, 0))
		{
			func_75(iLocal_264, 0, 145);
		}
		if (!PED::IS_PED_INJURED(iLocal_257))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_257, "random@getawaydriver", "idle_a", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_257, "random@getawaydriver", "idle_2_hands_up", 3))
			{
				BRAIN::OPEN_SEQUENCE_TASK(&iLocal_265);
				BRAIN::TASK_PLAY_ANIM(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, 4294967295, 0, 0, 0, 0, 0);
				if (!PED::IS_PED_INJURED((*iParam1)[0]))
				{
					BRAIN::TASK_SMART_FLEE_PED(0, (*iParam1)[0], 150f, 4294967295, 0, 0);
				}
				else if (!PED::IS_PED_INJURED((*iParam1)[1]))
				{
					BRAIN::TASK_SMART_FLEE_PED(0, (*iParam1)[1], 150f, 4294967295, 0, 0);
				}
				CUTSCENE::_0x8D9DF6ECA8768583(iLocal_265);
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_257, iLocal_265);
				BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_265);
				PED::SET_PED_KEEP_TASK(iLocal_257, true);
			}
			BRAIN::CLEAR_PED_SECONDARY_TASK(iLocal_257);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_257, 17, true);
			ENTITY::SET_ENTITY_HEALTH(iLocal_257, false);
		}
		if (!PED::IS_PED_INJURED((*iParam1)[0]))
		{
			PED::SET_PED_CONFIG_FLAG((*iParam1)[0], 317, true);
			PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[0], 17, true);
			PED::REMOVE_PED_FROM_GROUP((*iParam1)[0]);
			PED::SET_PED_CAN_BE_TARGETTED((*iParam1)[0], true);
			ENTITY::SET_ENTITY_HEALTH((*iParam1)[0], false);
		}
		if (!PED::IS_PED_INJURED((*iParam1)[1]))
		{
			PED::SET_PED_CONFIG_FLAG((*iParam1)[1], 317, true);
			PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[1], 17, true);
			PED::REMOVE_PED_FROM_GROUP((*iParam1)[1]);
			PED::SET_PED_CAN_BE_TARGETTED((*iParam1)[1], true);
			ENTITY::SET_ENTITY_HEALTH((*iParam1)[1], false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_259)
		{
			if (!PED::IS_PED_INJURED(iLocal_259[iVar0]))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_259[iVar0], false);
			}
			iVar0++;
		}
		if (!PED::IS_PED_INJURED(iLocal_260[0]))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_260[0], joaat("weapon_pistol"), 4294967295, false, true);
			ENTITY::SET_ENTITY_HEALTH(iLocal_260[0], false);
		}
		if (!PED::IS_PED_INJURED(iLocal_260[1]))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_260[1], joaat("weapon_pistol"), 4294967295, false, true);
			ENTITY::SET_ENTITY_HEALTH(iLocal_260[1], false);
		}
		if (!PED::IS_PED_INJURED(iLocal_260[2]))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_260[2], joaat("weapon_pistol"), 4294967295, false, true);
			ENTITY::SET_ENTITY_HEALTH(iLocal_260[2], false);
		}
		if (!bParam2)
		{
			if (!PED::IS_PED_INJURED((*iParam1)[0]))
			{
				BRAIN::TASK_SMART_FLEE_COORD((*iParam1)[0], func_179(CAM::_0xDC9DA9E8789F5246()), 200f, 4294967295, 0, 0);
			}
			if (!PED::IS_PED_INJURED((*iParam1)[1]))
			{
				BRAIN::TASK_SMART_FLEE_COORD((*iParam1)[1], func_179(CAM::_0xDC9DA9E8789F5246()), 200f, 4294967295, 0, 0);
			}
		}
		if (!iLocal_218)
		{
			PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
			iLocal_218 = 1;
		}
		func_65(iLocal_51);
		if (HUD::DOES_BLIP_EXIST(iLocal_256))
		{
			HUD::REMOVE_BLIP(&iLocal_256);
		}
		func_65(iLocal_52);
		func_127(0);
		func_140(0, Param0);
	}
	func_240(4294967295);
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_240(int iParam0)//Position - 0x10046
{
	char cVar0[64];
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_190();
	}
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (func_200())
	{
		func_244(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_19E4D = MISC::GET_GAME_TIMER();
		func_243(30000);
		StringCopy(&cVar0, func_242(Global_19E4B, 1), 64);
		if (func_189(Global_19E4B) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_19E4A, 64);
		}
		STATS::_0x71862B1D855F32E1(&cVar0, Global_19E48, (MISC::GET_GAME_TIMER() - Global_19E49), 0);
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E52, 0) && Global_19E56.f_6187.f_2 < 3)
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_19E52, 0);
	}
	func_241(&Global_63AE);
	Global_19E4C = 0;
	func_206(4294967295);
}

void func_241(var uParam0)//Position - 0x100FB
{
	if (*uParam0 == 4294967295)
	{
		return;
	}
	if (!*uParam0 == Global_8CEF)
	{
		*uParam0 = 4294967295;
		return;
	}
	*uParam0 = 4294967295;
	Global_8CEE = 0;
	Global_8CF0 = 0;
	Global_8D15 = 15;
	Global_DB72 = 0;
	Global_DB73 = 0;
}

char* func_242(int iParam0, bool bParam1)//Position - 0x10138
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case 4294967295:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_243(int iParam0)//Position - 0x10381
{
	Global_8F3C = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_244(int iParam0)//Position - 0x10393
{
	func_245(iParam0, 0, func_250(iParam0));
}

void func_245(int iParam0, int iParam1, int iParam2)//Position - 0x103A8
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_223();
	func_248(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_247(iParam0, &uVar0);
	Var1 = { func_246(&uVar0) };
}

struct<16> func_246(var uParam0)//Position - 0x103D7
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_217(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_216(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_215(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_218(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_221(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_219(*uParam0), 64);
	return Var0;
}

void func_247(int iParam0, var uParam1)//Position - 0x104A8
{
	Global_19E56.f_6187.f_2B[iParam0] = *uParam1;
}

void func_248(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x104C0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_219(*uParam0);
	iVar1 = func_221(*uParam0);
	iVar2 = func_218(*uParam0);
	iVar3 = func_217(*uParam0);
	iVar4 = func_216(*uParam0);
	iVar5 = func_215(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_214(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_214(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_249(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_249(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x10642
{
	func_229(uParam0, iParam1);
	func_228(uParam0, iParam2);
	func_227(uParam0, iParam3);
	func_225(uParam0, iParam5);
	func_226(uParam0, iParam4);
	func_224(uParam0, iParam6);
}

int func_250(int iParam0)//Position - 0x1067A
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_251()//Position - 0x1081D
{
	Global_645E = 0;
	Global_645F = 0;
	Global_6461 = 0;
	Global_6462 = 0;
	Global_6463 = 0;
}

void func_252(bool bParam0)//Position - 0x10839
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		func_115(iVar0, bParam0);
		iVar0++;
	}
}

