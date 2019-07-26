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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	vector3 vLocal_51[16] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_100[16] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_117 = { 0f, 0f, 0f };
	vector3 vLocal_120 = { 0f, 0f, 0f };
	vector3 vLocal_123 = { 0f, 0f, 0f };
	vector3 vLocal_126 = { 0f, 0f, 0f };
	float fLocal_129 = 0f;
	vector3 vLocal_130 = { 0f, 0f, 0f };
	vector3 vLocal_133 = { 0f, 0f, 0f };
	float fLocal_136 = 0f;
	vector3 vLocal_137 = { 0f, 0f, 0f };
	vector3 vLocal_140 = { 0f, 0f, 0f };
	float fLocal_143 = 0f;
	vector3 vLocal_144 = { 0f, 0f, 0f };
	vector3 vLocal_147 = { 0f, 0f, 0f };
	float fLocal_150 = 0f;
	vector3 vLocal_151 = { 0f, 0f, 0f };
	vector3 vLocal_154 = { 0f, 0f, 0f };
	float fLocal_157 = 0f;
	vector3 vLocal_158 = { 0f, 0f, 0f };
	vector3 vLocal_161 = { 0f, 0f, 0f };
	float fLocal_164 = 0f;
	vector3 vLocal_165 = { 0f, 0f, 0f };
	vector3 vLocal_168 = { 0f, 0f, 0f };
	float fLocal_171 = 0f;
	bool bLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	bool bLocal_175 = 0;
	int iLocal_176 = 0;
	bool bLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	bool bLocal_180 = 0;
	int iLocal_181 = 0;
	float fLocal_182 = 0f;
	float fLocal_183 = 0f;
	float fLocal_184 = 0f;
	float fLocal_185 = 0f;
	var uLocal_186 = 0;
	int iLocal_187 = 0;
	var uLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	var uLocal_193[2] = { 0, 0 };
	int iLocal_196[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216[4] = { 0, 0, 0, 0 };
	int iLocal_221[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_228 = 0;
	var uLocal_229[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_272 = 8;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 4;
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
	var uLocal_291 = 4;
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
	var uLocal_306 = 4;
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
	var uLocal_321 = 4;
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
	var uLocal_336 = 4;
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
	var uLocal_351 = 4;
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
	var uLocal_366 = 4;
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
	var uLocal_381 = 4;
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
	int iLocal_400 = 0;
	char[] cLocal_401[8] = 0;
	char* sLocal_402 = NULL;
	char* sLocal_403 = NULL;
	char* sLocal_404 = NULL;
	char* sLocal_405 = NULL;
	char* sLocal_406 = NULL;
	char* sLocal_407 = NULL;
	char* sLocal_408 = NULL;
	char* sLocal_409 = NULL;
	var uLocal_410 = 0;
	var uLocal_411 = 16;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
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
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = -1f;
	vLocal_117 = { -1109.213f, 4914.744f, 216.101f };
	vLocal_120 = { -1034.6f, 4918.6f, 205.9f };
	vLocal_123 = { -1066.963f, 4873.13f, 207.3281f };
	vLocal_126 = { -1112.946f, 4986.957f, 241.133f };
	fLocal_129 = 72.3125f;
	vLocal_130 = { -1138.386f, 4872.04f, 207.5488f };
	vLocal_133 = { -1091.959f, 4983.27f, 241.1698f };
	fLocal_136 = 57.8125f;
	vLocal_137 = { -1171.648f, 4888.658f, 211.0756f };
	vLocal_140 = { -1137.907f, 4926.572f, 240.999f };
	fLocal_143 = 17.9375f;
	vLocal_144 = { -1177.981f, 4903.231f, 212.477f };
	vLocal_147 = { -1153.398f, 4902.631f, 241.155f };
	fLocal_150 = 17.9375f;
	vLocal_151 = { -1175.693f, 4904.839f, 207.5207f };
	vLocal_154 = { -1142.08f, 4985.32f, 241.2887f };
	fLocal_157 = 36.375f;
	vLocal_158 = { -1106.212f, 4860.086f, 206.1207f };
	vLocal_161 = { -1105.016f, 4873.854f, 241.1453f };
	fLocal_164 = 11.5625f;
	vLocal_165 = { -1044.268f, 4916.587f, 209.8365f };
	vLocal_168 = { -1063.605f, 4972.88f, 241.1299f };
	fLocal_171 = 12.875f;
	iLocal_192 = 4;
	cLocal_401 = "REPLAY_TMG";
	sLocal_402 = "CMN_TDIED";
	if (HAS_FORCE_CLEANUP_OCCURRED(26))
	{
		func_188();
	}
	if (_0x9689123E3F213AA5())
	{
		TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		WAIT(0);
		if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_173)
		{
			SET_WANTED_LEVEL_MULTIPLIER(0f);
			switch (iLocal_50)
			{
				case 0:
					if (!IS_PED_INJURED(PLAYER_PED_ID()))
					{
						if (Global_106565.f_24989.f_5 >= iLocal_192 && !func_187())
						{
							iLocal_50 = 2;
						}
						func_184();
						func_181();
					}
					break;
				
				case 1:
					SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER_ID());
					if (!IS_PED_INJURED(PLAYER_PED_ID()))
					{
						if (TIMERA() > 2000)
						{
							if (iLocal_187 == 1)
							{
								func_180();
							}
							else if (iLocal_187 == 2)
							{
								func_152();
							}
						}
						if (TIMERA() > 1300)
						{
							if (iLocal_189 < 3)
							{
								func_151();
							}
							else
							{
								func_150();
							}
						}
						if (iLocal_174)
						{
							func_137(26, 1);
							iLocal_174 = 0;
							iLocal_50 = 0;
						}
					}
					break;
				
				case 2:
					SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER_ID());
					if (!IS_PED_INJURED(PLAYER_PED_ID()))
					{
						func_109();
					}
					_SET_DOOR_ACCELERATION_LIMIT(Global_35548[9 /*31*/], 0, 0, 1);
					_SET_DOOR_ACCELERATION_LIMIT(Global_35548[10 /*31*/], 0, 0, 1);
					break;
				
				case 4:
					if (!IS_PLAYER_PLAYING(PLAYER_ID()))
					{
						iLocal_50 = 3;
						break;
					}
					bLocal_175 = false;
					SET_WANTED_LEVEL_MULTIPLIER(0f);
					iVar0 = 0;
					while (iVar0 < iLocal_196)
					{
						if (IS_PED_INJURED(iLocal_196[iVar0]))
						{
							if (DOES_BLIP_EXIST(uLocal_229[iVar0]))
							{
								REMOVE_BLIP(&(uLocal_229[iVar0]));
							}
						}
						else
						{
							if (IS_PED_IN_WRITHE(iLocal_196[iVar0]))
							{
								if (DOES_BLIP_EXIST(uLocal_229[iVar0]))
								{
									REMOVE_BLIP(&(uLocal_229[iVar0]));
								}
							}
							else if (IS_ENTITY_AT_ENTITY(iLocal_196[iVar0], PLAYER_PED_ID(), 30f, 30f, 30f, 0, 1, 0))
							{
								if (!func_108())
								{
									if (iLocal_191 < GET_GAME_TIMER())
									{
										iVar1 = GET_RANDOM_INT_IN_RANGE(0, 3);
										if (iVar1 == 0)
										{
											func_98(&uLocal_411, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
										}
										else if (iVar1 == 1)
										{
											func_97(&uLocal_411, 1, iLocal_196[iVar0], "ACULTMember1", 0, 1);
											func_98(&uLocal_411, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
										}
										else if (iVar1 == 2)
										{
											func_97(&uLocal_411, 2, iLocal_196[iVar0], "ACULTMember2", 0, 1);
											func_98(&uLocal_411, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
										}
										iLocal_191 = (GET_GAME_TIMER() + GET_RANDOM_INT_IN_RANGE(4500, 6000));
									}
								}
							}
							bLocal_175 = true;
						}
						iVar0++;
					}
					if (!bLocal_175)
					{
						func_61();
					}
					break;
				
				case 3:
					if (!iLocal_173)
					{
						uLocal_249 = func_60();
						if (!HAS_SCALEFORM_MOVIE_LOADED(uLocal_249))
						{
							break;
						}
						func_59(&uLocal_254, 0);
						iLocal_173 = 1;
					}
					if (func_30(&uLocal_254, &uLocal_260, &uLocal_249, cLocal_401, sLocal_402, &bLocal_172, 78))
					{
						iLocal_190 = 0;
						REMOVE_RELATIONSHIP_GROUP(uLocal_410);
						REMOVE_COVER_POINT(uLocal_248);
						iVar0 = 0;
						while (iVar0 < iLocal_196)
						{
							if (DOES_ENTITY_EXIST(iLocal_196[iVar0]))
							{
								DELETE_PED(&(iLocal_196[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < iLocal_221)
						{
							if (DOES_ENTITY_EXIST(iLocal_221[iVar0]))
							{
								DELETE_OBJECT(&(iLocal_221[iVar0]));
							}
							iVar0++;
						}
						if (DOES_CAM_EXIST(uLocal_246))
						{
							SET_CAM_ACTIVE(uLocal_246, 0);
						}
						if (DOES_ENTITY_EXIST(uLocal_215))
						{
							DELETE_OBJECT(&uLocal_215);
						}
						if (DOES_ENTITY_EXIST(uLocal_215))
						{
							DELETE_OBJECT(&uLocal_215);
						}
						if (bLocal_172)
						{
							func_10();
							func_3(0);
							func_1(1);
							iLocal_173 = 0;
							iLocal_50 = 2;
						}
						else
						{
							iLocal_173 = 0;
							func_188();
						}
					}
					break;
			}
		}
		else if (bLocal_177)
		{
		}
		else
		{
			func_188();
		}
	}
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		SET_FADE_IN_AFTER_DEATH_ARREST(0);
		_DISABLE_AUTOMATIC_RESPAWN(1);
		SET_FADE_OUT_AFTER_DEATH(0);
		func_2(1);
		Global_88970 = 1;
	}
	else
	{
		SET_FADE_IN_AFTER_DEATH_ARREST(1);
		_DISABLE_AUTOMATIC_RESPAWN(0);
		SET_FADE_OUT_AFTER_DEATH(1);
		func_2(0);
		Global_88970 = 0;
	}
}

void func_2(bool bParam0)
{
	if ((Global_36425 == 9 || Global_36425 == 10) || Global_36425 == 5)
	{
		Global_105214 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_105214 = 0;
	}
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_9();
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			SET_BIT(&Global_2424, 16);
		}
		Global_14553.f_1 = 1;
		if (func_8(0))
		{
			func_4(0);
		}
	}
	else if (Global_14553.f_1 == 1)
	{
		if (!Global_14553.f_1 == 0)
		{
			Global_14553.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (func_7())
	{
		return;
	}
	if (Global_14725)
	{
		func_6(0, 0);
	}
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		SET_BIT(&Global_2424, 16);
	}
	if (IS_MOBILE_PHONE_CALL_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_15866 = 5;
	if (iParam0 == 1)
	{
		SET_BIT(&Global_2423, 30);
	}
	else
	{
		CLEAR_BIT(&Global_2423, 30);
	}
	if (!func_5())
	{
		Global_14553.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_8(0))
		{
			Global_14725 = 1;
			if (bParam1)
			{
				GET_MOBILE_PHONE_POSITION(&Global_14490);
			}
			Global_14481 = { Global_14499[Global_14498 /*3*/] };
			SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
	else if (Global_14725 == 1)
	{
		Global_14725 = 0;
		Global_14481 = { Global_14506[Global_14498 /*3*/] };
		if (bParam1)
		{
			SET_MOBILE_PHONE_POSITION(Global_14490);
		}
		else
		{
			SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
}

bool func_7()
{
	return IS_BIT_SET(Global_1681628, 19);
}

int func_8(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14553.f_1 > 3)
		{
			if (IS_BIT_SET(Global_2423, 14))
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
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_9()
{
	if (Global_14553.f_1 == 9 || Global_14553.f_1 == 10)
	{
		Global_15919 = 0;
		Global_15915 = 1;
	}
}

void func_10()
{
	func_20();
	func_13(0, 1);
	func_11(0, 1);
}

void func_11(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_13(0, 0);
		_START_SCREEN_EFFECT("DeathFailOut", 0, 0);
		SET_BIT(&iLocal_48, 1);
		func_12(1, 2, 0);
		_SET_CAM_EFFECT(2);
	}
	else
	{
		if (IS_BIT_SET(iLocal_48, 1) || iParam1)
		{
			_STOP_SCREEN_EFFECT("DeathFailOut");
			func_12(0, 2, 1);
			_SET_CAM_EFFECT(0);
		}
		CLEAR_BIT(&iLocal_48, 1);
	}
}

void func_12(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		SET_BIT(&iLocal_48, 2);
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iParam1 == 1)
			{
				SET_TIME_SCALE(0.2f);
			}
			else
			{
				SET_TIME_SCALE(0.075f);
			}
		}
	}
	else
	{
		if (IS_BIT_SET(iLocal_48, 2) || iParam2)
		{
			if (!NETWORK_IS_GAME_IN_PROGRESS())
			{
				SET_TIME_SCALE(1f);
			}
		}
		CLEAR_BIT(&iLocal_48, 2);
	}
}

void func_13(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_14())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!IS_BIT_SET(iLocal_48, 0) || iParam1)
		{
			_START_SCREEN_EFFECT(sVar0, 0, 0);
			SET_BIT(&iLocal_48, 0);
			func_12(1, 1, 0);
			_SET_CAM_EFFECT(1);
		}
	}
	else
	{
		if (IS_BIT_SET(iLocal_48, 0) || iParam1)
		{
			_STOP_SCREEN_EFFECT(sVar0);
			func_12(0, 1, 1);
			_SET_CAM_EFFECT(0);
		}
		CLEAR_BIT(&iLocal_48, 0);
	}
}

int func_14()
{
	func_15();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_15()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		if (func_19(Global_106565.f_2357.f_539.f_4321) != GET_ENTITY_MODEL(PLAYER_PED_ID()))
		{
			iVar0 = func_18(PLAYER_PED_ID());
			if (func_17(iVar0) && (!func_16(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_17(Global_106565.f_2357.f_539.f_4321))
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

bool func_16(int iParam0)
{
	return Global_36425 == iParam0;
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)
{
	if (func_17(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_20()
{
	iLocal_48 = 0;
	iLocal_49 = 0;
	func_21(0, 1, 1, 0, 0, 0);
	func_3(1);
}

void func_21(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER_ID());
		SET_ALL_RANDOM_PEDS_FLEE(PLAYER_ID(), 1);
		SET_POLICE_IGNORE_PLAYER(PLAYER_ID(), 1);
		func_29(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14553.f_1 > 3)
		{
			if (IS_MOBILE_PHONE_CALL_ONGOING())
			{
				STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_5())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_28(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_29(0);
		_0xE1CD1E48E025E661();
		Global_56500 = 0;
		if (bParam1)
		{
			_0x03FC694AE06C5A20();
		}
		SET_ALL_RANDOM_PEDS_FLEE(PLAYER_ID(), 0);
		SET_POLICE_IGNORE_PLAYER(PLAYER_ID(), 0);
		func_28(0, iParam3, iParam2, 0);
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!IS_PED_INJURED(PLAYER_PED_ID()) && !func_26(PLAYER_ID())) && !func_23(PLAYER_ID(), 0)) && !func_22()) && !bParam4) && !bParam5)
			{
				SET_ENTITY_INVINCIBLE(PLAYER_PED_ID(), 0);
			}
		}
		else if (((!IS_PED_INJURED(PLAYER_PED_ID()) && !func_26(PLAYER_ID())) && !bParam4) && !bParam5)
		{
			SET_ENTITY_INVINCIBLE(PLAYER_PED_ID(), 0);
		}
		Global_71588 = 0;
	}
}

bool func_22()
{
	return IS_BIT_SET(Global_1589819[PLAYER_ID() /*818*/].f_39.f_18, 14);
}

bool func_23(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_24(-1, 0) == 8;
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

int func_24(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_25();
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

int func_25()
{
	return Global_1312745;
}

int func_26(int iParam0)
{
	if (func_23(iParam0, 0))
	{
		return 1;
	}
	if (func_27())
	{
		if (iParam0 == PLAYER_ID())
		{
			return 1;
		}
	}
	if (IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_27()
{
	return IS_BIT_SET(Global_2359302, 3);
}

int func_28(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_PC_VERSION())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			_0x20746F7B1032A3C7(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_29(int iParam0)
{
	if (iParam0 == 1)
	{
		SET_BIT(&Global_2423, 13);
	}
	else
	{
		CLEAR_BIT(&Global_2423, 13);
	}
}

int func_30(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			START_AUDIO_SCENE("DEATH_SCENE");
			PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "WastedSounds", 1);
			func_58(&(uParam0->f_1));
			func_20();
			func_57(uParam1, (0.15f * 0.075f), 0.5f);
			SET_NO_LOADING_SCREEN(1);
			break;
		
		case 1:
			if (func_55() || IS_SCREEN_FADED_OUT())
			{
				*uParam0 = 2;
			}
			if (!func_54(uParam0->f_4, 4))
			{
				if (REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", 0, -1))
				{
					PLAY_SOUND_FRONTEND(-1, "Bed", "WastedSounds", 1);
					func_52(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(TIMERA()) > (1500f * 0.2f))
			{
				if (!func_54(uParam0->f_4, 2))
				{
					PLAY_SOUND_FRONTEND(-1, "TextHit", "WastedSounds", 1);
					func_52(&(uParam0->f_4), 2);
				}
				func_31(uParam2, uParam1, sParam3, sParam4, iParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_31(uParam2, uParam1, sParam3, sParam4, iParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_13(0, 1);
				func_11(0, 1);
				func_20();
				if (*iParam5)
				{
					IGNORE_NEXT_RESTART(1);
				}
				else if (!uParam0->f_5)
				{
					func_2(0);
				}
				SET_NO_LOADING_SCREEN(0);
				_DISABLE_AUTOMATIC_RESPAWN(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (IS_PLAYER_PLAYING(PLAYER_ID()))
			{
				SET_FADE_IN_AFTER_DEATH_ARREST(1);
				func_13(0, 1);
				func_11(0, 1);
				STOP_AUDIO_SCENE("DEATH_SCENE");
				SET_NO_LOADING_SCREEN(0);
				return 1;
			}
			break;
		
		case 4:
			SET_NO_LOADING_SCREEN(0);
			return 1;
			break;
	}
	return 0;
}

int func_31(var uParam0, var uParam1, var uParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!IS_SCREEN_FADED_OUT() || IS_SCREEN_FADING_OUT())
			{
				DO_SCREEN_FADE_OUT(2500);
				_STOP_RECORDING_THIS_FRAME();
			}
			if (bParam9)
			{
				SET_NO_LOADING_SCREEN(1);
			}
			SET_TIME_SCALE(0.2f);
			if (func_51(iParam5, 4))
			{
				if (REQUEST_SCRIPT_AUDIO_BANK("generic_failed", 0, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			_SET_NOTIFICATION_COLOR_NEXT(6);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam2);
			END_TEXT_COMMAND_SCALEFORM_STRING();
			func_50(sParam3);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			_END_SCALEFORM_MOVIE_METHOD_RETURN();
			if (func_51(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_134);
					END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_136 = 1;
				}
			}
			if (!func_51(iParam5, 1))
			{
				DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			func_49(&(uParam1->f_10), 0, 1, 1, 1);
			func_48(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_48(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_51(iParam5, 4))
			{
				PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_51(iParam5, 8))
			{
				switch (func_14())
				{
					case 0:
						_START_SCREEN_EFFECT("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						_START_SCREEN_EFFECT("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						_START_SCREEN_EFFECT("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_47(&(uParam1->f_1)))
			{
				func_46(&(uParam1->f_1));
			}
			if (func_51(iParam5, 2))
			{
				if (!func_47(&(uParam1->f_4)))
				{
					func_46(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			HIDE_LOADING_ON_FADE_THIS_FRAME();
			if (func_51(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_134);
					END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_136 = 1;
				}
			}
			SET_SCRIPT_GFX_DRAW_ORDER(iParam6);
			func_44(uParam0, 0, 0);
			if (!func_51(iParam5, 16) && (func_42(&(uParam1->f_1)) >= uParam1->f_135 || IS_SCREEN_FADED_OUT()))
			{
				func_36(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				_SHOW_CURSOR_THIS_FRAME();
				if (IS_CONTROL_JUST_RELEASED(2, 201))
				{
					uParam1->f_138 = 1;
					PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_51(iParam5, 1))
					{
						ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_35(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (IS_CONTROL_JUST_RELEASED(2, 202))
				{
					uParam1->f_138 = 0;
					PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_51(iParam5, 1))
					{
						ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_35(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_51(iParam5, 2))
			{
				if (func_42(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_51(iParam5, 1))
					{
						ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_35(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_44(uParam0, 0, 0);
			SET_TIME_SCALE(1f);
			if (uParam1->f_138 || !((ARE_STRINGS_EQUAL("stunt_plane_races", GET_THIS_SCRIPT_NAME()) || ARE_STRINGS_EQUAL("pilot_school", GET_THIS_SCRIPT_NAME())) || (ARE_STRINGS_EQUAL("bj", GET_THIS_SCRIPT_NAME()) && IS_PED_INJURED(PLAYER_PED_ID()))))
			{
				DO_SCREEN_FADE_IN(2500);
			}
			if (func_51(iParam5, 64) && uParam1->f_138)
			{
				DO_SCREEN_FADE_OUT(500);
			}
			func_32(&(uParam1->f_4));
			if (bParam9)
			{
				SET_NO_LOADING_SCREEN(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_42(&(uParam1->f_4)) <= 0.1f)
			{
				func_44(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_32(var uParam0)
{
	func_33(uParam0, 0f);
}

void func_33(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_34(IS_BIT_SET(*uParam0, 4)) - fParam1);
	SET_BIT(uParam0, 1);
	CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_34(bool bParam0)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = TO_FLOAT(GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar2 = GET_NETWORK_TIME();
		fVar3 = TO_FLOAT(uVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (TO_FLOAT(GET_GAME_TIMER()) / 1000f);
}

void func_35(var uParam0)
{
	if (*uParam0 != 0)
	{
		SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
}

void func_36(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, int iParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((IS_SCREEN_FADING_OUT() || IS_SCREEN_FADING_IN()) || IS_SCREEN_FADED_OUT()) || IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_41(uParam0))
	{
		return;
	}
	HIDE_LOADING_ON_FADE_THIS_FRAME();
	SET_SCRIPT_GFX_DRAW_ORDER(uParam2);
	if (!func_51(uParam0->f_1, 256) || (func_51(uParam0->f_1, 8192) && _0x6CD79468A1E595C6(2)))
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam1);
		END_SCALEFORM_MOVIE_METHOD();
		BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam5);
		END_SCALEFORM_MOVIE_METHOD();
		BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		END_SCALEFORM_MOVIE_METHOD();
		if (IS_PC_VERSION())
		{
			BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_51(uParam0->f_1, 4096));
			END_SCALEFORM_MOVIE_METHOD();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = _IS_INPUT_DISABLED(2);
					break;
				
				case 2:
					bVar4 = !_IS_INPUT_DISABLED(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT"))
				{
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						uVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						uVar2 = IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							uVar3 = GET_CONTROL_INSTRUCTIONAL_BUTTON(uVar0, uVar1, uVar2);
						}
						else
						{
							uVar3 = _0x80C2FD58D720C801(uVar0, uVar1, uVar2);
						}
						if (!IS_STRING_NULL_OR_EMPTY(uVar3))
						{
							func_40(uVar3);
						}
						iVar7++;
					}
					if (!IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/]))
					{
						func_50(uParam0->f_2[iVar6 /*15*/]);
					}
					if (IS_PC_VERSION())
					{
						if (func_51(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
							}
						}
					}
					END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar6++;
		}
		fVar8 = func_39(bParam4, func_39(func_51(uParam0->f_1, 32), 1f, 0f), -1f);
		BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
		END_SCALEFORM_MOVIE_METHOD();
		BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
		END_SCALEFORM_MOVIE_METHOD();
		func_38(&(uParam0->f_1), 256);
		func_37(&(uParam0->f_1), 128);
	}
	DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

void func_37(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_38(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_39(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_40(var uParam0)
{
	_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(uParam0);
}

int func_41(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_38(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

float func_42(var uParam0)
{
	if (func_47(uParam0))
	{
		if (func_43(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_34(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_43(var uParam0)
{
	return IS_BIT_SET(*uParam0, 2);
}

int func_44(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_47(&(uParam0->f_2)))
	{
		func_32(&(uParam0->f_2));
	}
	HIDE_HUD_COMPONENT_THIS_FRAME(14);
	if (!bParam2)
	{
		DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (IS_CONTROL_PRESSED(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_42(&(uParam0->f_2)) * 1000f) > TO_FLOAT(uParam0->f_1)
	{
		func_45(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_45(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_46(var uParam0)
{
	if (!func_47(uParam0))
	{
		func_32(uParam0);
	}
}

bool func_47(var uParam0)
{
	return IS_BIT_SET(*uParam0, 1);
}

int func_48(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			SET_BIT(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_49(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_38(&(uParam0->f_1), 32);
	}
	if (HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_38(&(uParam0->f_1), 1);
		if (bParam2)
		{
			SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
		}
	}
	if (IS_PC_VERSION())
	{
		if (bParam3)
		{
			func_38(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_38(&(uParam0->f_1), 8192);
	}
}

void func_50(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_51(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_52(var uParam0, int iParam1)
{
	func_53(uParam0, iParam1);
}

void func_53(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_54(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_55()
{
	if (!IS_BIT_SET(iLocal_48, 0) && !IS_BIT_SET(iLocal_48, 1))
	{
		SETTIMERA(0);
		func_13(1, 0);
	}
	if (!IS_CUTSCENE_PLAYING())
	{
		CLEAR_PRINTS();
	}
	DISABLE_CONTROL_ACTION(2, 199, 1);
	DISABLE_CONTROL_ACTION(0, 59, 1);
	DISABLE_CONTROL_ACTION(0, 60, 1);
	DISABLE_CONTROL_ACTION(0, 37, 1);
	DISABLE_CONTROL_ACTION(0, 25, 1);
	_0x5A7F62FDA59759BD();
	if (IntToFloat(TIMERA()) > (1500f * 0.2f))
	{
		if (!IS_BIT_SET(iLocal_48, 1))
		{
			func_11(1, 0);
			SETTIMERB(0);
		}
		else if (IntToFloat(TIMERB()) > (1500f * 0.075f) || IS_SCREEN_FADED_OUT())
		{
			if (!IS_SCREEN_FADED_OUT())
			{
				if (!IS_SCREEN_FADING_OUT())
				{
					DO_SCREEN_FADE_OUT(1500);
				}
			}
			else if (iLocal_49 == 0)
			{
				iLocal_49 = GET_GAME_TIMER() + 1000;
				if (IS_PLAYER_PLAYING(PLAYER_ID()))
				{
					SET_PLAYER_CONTROL(PLAYER_ID(), 0, 0);
				}
				func_12(0, 2, 1);
				func_21(1, 1, 1, 0, 0, 0);
				func_3(1);
				SET_FRONTEND_ACTIVE(0);
				SET_PAUSE_MENU_ACTIVE(0);
				CLEAR_HELP(1);
				CLEAR_PRINTS();
				if (IS_PLAYER_PLAYING(PLAYER_ID()))
				{
					SET_PLAYER_CONTROL(PLAYER_ID(), 0, 0);
				}
				func_13(0, 0);
				func_56(0);
			}
			else if (GET_GAME_TIMER() < iLocal_49)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_56(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!IS_BIT_SET(iLocal_48, 3))
			{
				SET_GAME_PAUSED(1);
				SET_BIT(&iLocal_48, 3);
			}
		}
		else if (IS_BIT_SET(iLocal_48, 3))
		{
			SET_GAME_PAUSED(0);
			CLEAR_BIT(&iLocal_48, 3);
		}
	}
}

void func_57(var uParam0, float fParam1, float fParam2)
{
	if (func_47(&(uParam0->f_1)))
	{
		func_45(&(uParam0->f_1));
	}
	if (func_47(&(uParam0->f_4)))
	{
		func_45(&(uParam0->f_4));
	}
	func_35(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_58(var uParam0)
{
	if (!func_47(uParam0))
	{
		func_46(uParam0);
	}
	else
	{
		func_32(uParam0);
	}
}

void func_59(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", 0, -1);
}

var func_60()
{
	return REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
}

void func_61()
{
	if (!iLocal_176)
	{
		SET_STATIC_EMITTER_ENABLED("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		Global_106565.f_24989.f_5 = 1000;
		UNLOCK_MISSION_NEWS_STORY(64);
		Global_106565.f_20558.f_472 = 54;
		uLocal_399 = REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
		func_96(1);
		while (!HAS_SCALEFORM_MOVIE_LOADED(uLocal_399))
		{
			WAIT(0);
		}
		BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_399, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_50("CULT_PASS");
		_END_SCALEFORM_MOVIE_METHOD_RETURN();
		while (!func_95())
		{
			WAIT(0);
		}
		func_94();
		SETTIMERA(0);
		PLAY_SOUND_FRONTEND(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", 1);
		iLocal_176 = 1;
	}
	DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_399, 255, 255, 255, 255, 0);
	if (!iLocal_178)
	{
		if (TIMERA() > 9500)
		{
			BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_399, "SHARD_ANIM_OUT");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
			END_SCALEFORM_MOVIE_METHOD();
			iLocal_178 = 1;
		}
	}
	if (TIMERA() > 10000)
	{
		if (HAS_SCALEFORM_MOVIE_LOADED(uLocal_399))
		{
			SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_399);
			func_96(0);
		}
		while (GET_DISTANCE_BETWEEN_COORDS(func_93(PLAYER_ID()), vLocal_117, 1) < 209f && !IS_PED_INJURED(PLAYER_PED_ID()))
		{
			WAIT(0);
		}
		func_62(18);
		func_188();
	}
}

void func_62(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_91();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_90())
	{
		func_68(iParam0);
		SET_MISSION_NAME(0, 0);
		Global_106556 = GET_GAME_TIMER();
		func_67(30000);
		StringCopy(&cVar0, func_66(Global_106554, 1), 64);
		if (func_65(Global_106554) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_106553, 64);
		}
		_0x71862B1D855F32E1(&cVar0, Global_106551, (GET_GAME_TIMER() - Global_106552), 0);
	}
	else if (IS_BIT_SET(Global_106561, 0) && Global_106565.f_24989.f_2 < 3)
	{
		CLEAR_BIT(&Global_106561, 0);
	}
	func_64(&Global_25824);
	Global_106555 = 0;
	func_63(-1);
}

void func_63(int iParam0)
{
	Global_106554 = iParam0;
}

void func_64(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_36387)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_36386 = 0;
	Global_36388 = 0;
	Global_36425 = 15;
	Global_56491 = 0;
	Global_56492 = 0;
}

int func_65(int iParam0)
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

char* func_66(int iParam0, bool bParam1)
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
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_67(int iParam0)
{
	Global_36976 = (GET_GAME_TIMER() + iParam0);
}

void func_68(int iParam0)
{
	func_69(iParam0, 0, func_89(iParam0));
}

void func_69(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_88();
	func_79(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_78(iParam0, &uVar0);
	Var1 = { func_70(&uVar0) };
}

struct<16> func_70(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_77(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_76(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_75(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_74(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_73(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_71(*uParam0), 64);
	return Var0;
}

int func_71(var uParam0)
{
	return (SHIFT_RIGHT(uParam0, 26) & 31 * func_72(IS_BIT_SET(uParam0, 31), -1, 1)) + 2011;
}

int func_72(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_73(var uParam0)
{
	return uParam0 & 15;
}

int func_74(var uParam0)
{
	return SHIFT_RIGHT(uParam0, 4) & 31;
}

int func_75(var uParam0)
{
	return SHIFT_RIGHT(uParam0, 20) & 63;
}

int func_76(var uParam0)
{
	return SHIFT_RIGHT(uParam0, 14) & 63;
}

int func_77(var uParam0)
{
	return SHIFT_RIGHT(uParam0, 9) & 31;
}

void func_78(int iParam0, var uParam1)
{
	Global_106565.f_24989.f_43[iParam0] = *uParam1;
}

void func_79(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_71(*uParam0);
	iVar1 = func_73(*uParam0);
	iVar2 = func_74(*uParam0);
	iVar3 = func_77(*uParam0);
	iVar4 = func_76(*uParam0);
	iVar5 = func_75(*uParam0);
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
	iVar6 = func_87(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_87(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_80(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_80(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_86(uParam0, iParam1);
	func_85(uParam0, iParam2);
	func_84(uParam0, iParam3);
	func_83(uParam0, iParam5);
	func_82(uParam0, iParam4);
	func_81(uParam0, iParam6);
}

void func_81(var uParam0, int iParam1)
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
		*uParam0 = (*uParam0 || SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_82(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_73(*uParam0);
	iVar1 = func_71(*uParam0);
	if (iParam1 < 1 || iParam1 > func_87(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 4));
}

void func_83(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_84(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 9));
}

void func_85(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 14));
}

void func_86(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 20));
}

int func_87(int iParam0, int iParam1)
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

var func_88()
{
	var uVar0;
	
	func_86(&uVar0, GET_CLOCK_SECONDS());
	func_85(&uVar0, GET_CLOCK_MINUTES());
	func_84(&uVar0, GET_CLOCK_HOURS());
	func_82(&uVar0, GET_CLOCK_DAY_OF_MONTH());
	func_83(&uVar0, GET_CLOCK_MONTH());
	func_81(&uVar0, GET_CLOCK_YEAR());
	return uVar0;
}

int func_89(int iParam0)
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

int func_90()
{
	if ((Global_106554 == func_91() && GET_RANDOM_EVENT_FLAG()) && Global_106555)
	{
		return 1;
	}
	return 0;
}

int func_91()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_92(Var0);
	return uVar16;
}

int func_92(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (GET_HASH_KEY(&cParam0))
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
	return -1;
}

Vector3 func_93(var uParam0)
{
	return GET_ENTITY_COORDS(GET_PLAYER_PED(uParam0), 0);
}

void func_94()
{
	Global_26000 = 0;
	Global_26001 = 0;
	Global_26003 = 0;
	Global_26004 = 0;
	Global_26005 = 0;
}

int func_95()
{
	return 1;
}

void func_96(int iParam0)
{
	Global_71850 = iParam0;
	Global_71851 = iParam0;
}

void func_97(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71590)
	{
		if (!IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

int func_98(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_107(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 0;
	return func_99(sParam2, iParam3, 0);
}

int func_99(char* sParam0, int iParam1, bool bParam2)
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
					func_106();
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
		if (func_105(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_104();
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
				func_103();
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
				if (func_102())
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
			if (func_5())
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
			func_101();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_100();
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
		func_106();
	}
	return 0;
}

void func_100()
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

void func_101()
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

int func_102()
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

void func_103()
{
	if (func_16(14))
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
		Global_14553 = func_14();
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

void func_104()
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

bool func_105(int iParam0, int iParam1)
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

void func_106()
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

void func_107(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_108()
{
	if (Global_15866 != 0 || IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_109()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iLocal_190)
	{
		case 0:
			_SET_WEATHER_TYPE_OVER_TIME("THUNDER", 20f);
			if (!IS_CUTSCENE_ACTIVE())
			{
				REQUEST_CUTSCENE("ac_ig_3_p3_b", 8);
			}
			REQUEST_MODEL(joaat("a_m_o_acult_02"));
			REQUEST_MODEL(joaat("a_m_y_acult_02"));
			REQUEST_MODEL(-2022916910);
			REQUEST_MODEL(-1322183878);
			REQUEST_MODEL(joaat("prop_box_wood05a"));
			REQUEST_MODEL(joaat("prop_security_case_01"));
			while ((((((!func_136() || !HAS_MODEL_LOADED(joaat("a_m_o_acult_02"))) || !HAS_MODEL_LOADED(joaat("a_m_y_acult_02"))) || !HAS_MODEL_LOADED(-2022916910)) || !HAS_MODEL_LOADED(-1322183878)) || !HAS_MODEL_LOADED(joaat("prop_box_wood05a"))) || !HAS_MODEL_LOADED(joaat("prop_security_case_01")))
			{
				WAIT(0);
			}
			uLocal_576 = func_129(PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0, 0, 0);
			if (DOES_ENTITY_EXIST(uLocal_576))
			{
				REGISTER_ENTITY_FOR_CUTSCENE(uLocal_576, "Trevors_weapon", 0, 0, 0);
			}
			REGISTER_ENTITY_FOR_CUTSCENE(0, "Rifle_Mag1^1", 3, GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_assaultrifle_clip_01")), 0);
			if (func_136() && !IS_PED_INJURED(PLAYER_PED_ID()))
			{
				REGISTER_ENTITY_FOR_CUTSCENE(PLAYER_PED_ID(), "TREVOR", 0, 0, 0);
				REGISTER_ENTITY_FOR_CUTSCENE(iLocal_196[11], "Cult_Master", 2, joaat("a_m_o_acult_02"), 0);
				REGISTER_ENTITY_FOR_CUTSCENE(iLocal_196[12], "Rear_Cult", 2, joaat("a_m_o_acult_02"), 0);
				REGISTER_ENTITY_FOR_CUTSCENE(iLocal_196[13], "Left_Old_Cult", 2, joaat("a_m_o_acult_02"), 0);
				REGISTER_ENTITY_FOR_CUTSCENE(iLocal_196[14], "Carbine_Cult", 2, joaat("a_m_y_acult_02"), 0);
				REGISTER_ENTITY_FOR_CUTSCENE(iLocal_196[15], "Shotgun_Cult", 2, joaat("a_m_y_acult_02"), 0);
				START_CUTSCENE(0);
			}
			WAIT(0);
			if (!bLocal_172 && Global_106565.f_24989.f_5 != 1000)
			{
				func_128();
			}
			if (DOES_ENTITY_EXIST(iLocal_196[0]))
			{
				DELETE_PED(&(iLocal_196[0]));
			}
			if (DOES_ENTITY_EXIST(iLocal_196[1]))
			{
				DELETE_PED(&(iLocal_196[1]));
			}
			if (DOES_CAM_EXIST(uLocal_246))
			{
				SET_CAM_ACTIVE(uLocal_246, 0);
			}
			if (DOES_ENTITY_EXIST(uLocal_215))
			{
				DELETE_OBJECT(&uLocal_215);
			}
			if (DOES_ENTITY_EXIST(uLocal_215))
			{
				DELETE_OBJECT(&uLocal_215);
			}
			RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			if (DOES_BLIP_EXIST(uLocal_228))
			{
				REMOVE_BLIP(&uLocal_228);
			}
			func_21(1, 1, 1, 0, 0, 0);
			SET_PLAYER_CONTROL(PLAYER_ID(), 0, 0);
			CLEAR_HELP(1);
			DISPLAY_HUD(0);
			DISPLAY_RADAR(0);
			if (!IS_PED_INJURED(PLAYER_PED_ID()))
			{
				HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER_PED_ID(), 1);
			}
			CLEAR_AREA(vLocal_117, 100f, 1, 0, 0, 0);
			ADD_SCENARIO_BLOCKING_AREA(vLocal_117 - Vector(100f, 60f, 80f), vLocal_117 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
			SET_WANTED_LEVEL_MULTIPLIER(0f);
			ENABLE_DISPATCH_SERVICE(3, 0);
			ENABLE_DISPATCH_SERVICE(5, 0);
			uLocal_248 = ADD_COVER_POINT(-1173.509f, 4924.365f, 222.21f, 277.2293f, 2, 0, 2, 1);
			REQUEST_MODEL(joaat("a_m_o_acult_01"));
			while (!HAS_MODEL_LOADED(joaat("a_m_o_acult_01")))
			{
				WAIT(0);
			}
			iLocal_190 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 6:
			if (CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				if (CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CULT_MASTER", 0))
				{
					if (!DOES_ENTITY_EXIST(iLocal_196[11]))
					{
						iLocal_196[11] = GET_PED_INDEX_FROM_ENTITY_INDEX(GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CULT_MASTER", 0));
					}
				}
				if (CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("REAR_CULT", 0))
				{
					if (!DOES_ENTITY_EXIST(iLocal_196[12]))
					{
						iLocal_196[12] = GET_PED_INDEX_FROM_ENTITY_INDEX(GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("REAR_CULT", 0));
					}
				}
				if (CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LEFT_OLD_CULT", 0))
				{
					if (!DOES_ENTITY_EXIST(iLocal_196[13]))
					{
						iLocal_196[13] = GET_PED_INDEX_FROM_ENTITY_INDEX(GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("LEFT_OLD_CULT", 0));
					}
				}
				if (CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CARBINE_CULT", 0))
				{
					if (!DOES_ENTITY_EXIST(iLocal_196[14]))
					{
						iLocal_196[14] = GET_PED_INDEX_FROM_ENTITY_INDEX(GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CARBINE_CULT", 0));
					}
				}
				if (CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("SHOTGUN_CULT", 0))
				{
					if (!DOES_ENTITY_EXIST(iLocal_196[15]))
					{
						iLocal_196[15] = GET_PED_INDEX_FROM_ENTITY_INDEX(GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("SHOTGUN_CULT", 0));
					}
				}
				if (CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("TREVOR", 0))
				{
					HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER_PED_ID(), 0);
					SET_ENTITY_COORDS(PLAYER_PED_ID(), -1173.531f, 4924.357f, 222.2101f, 1, 0, 0, 1);
					SET_ENTITY_HEADING(PLAYER_PED_ID(), 188.9369f);
					TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER_PED_ID(), -1173.509f, 4924.365f, 222.21f, -1, 0, 0f, 1, 0, uLocal_248, 0);
					_0x2208438012482A1A(PLAYER_PED_ID(), 1, 0);
				}
				if (CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_weapon", 0))
				{
					GIVE_WEAPON_OBJECT_TO_PED(uLocal_576, PLAYER_PED_ID());
				}
				SET_GAMEPLAY_CAM_RELATIVE_HEADING(91.3878f);
				SET_GAMEPLAY_CAM_RELATIVE_PITCH(4.4337f, 1065353216);
				func_21(0, 1, 1, 0, 0, 0);
				SET_PLAYER_CONTROL(PLAYER_ID(), 1, 0);
				DISPLAY_HUD(1);
				DISPLAY_RADAR(1);
				vLocal_51[0 /*3*/] = { -1044.632f, 4918.149f, 211.3315f };
				fLocal_100[0] = 254.8275f;
				vLocal_51[1 /*3*/] = { -1054.92f, 4915.155f, 210.8241f };
				fLocal_100[1] = 270.2025f;
				vLocal_51[2 /*3*/] = { -1051.859f, 4903.902f, 209.6199f };
				fLocal_100[2] = 299.8404f;
				vLocal_51[3 /*3*/] = { -1068.246f, 4899.532f, 213.2755f };
				fLocal_100[3] = 298.4257f;
				vLocal_51[4 /*3*/] = { -1083.322f, 4899.532f, 213.2755f };
				fLocal_100[4] = 283.5311f;
				vLocal_51[5 /*3*/] = { -1084.058f, 4933.805f, 228.2246f };
				fLocal_100[5] = 87.5233f;
				vLocal_51[6 /*3*/] = { -1081.976f, 4937.339f, 232.3275f };
				fLocal_100[6] = 109.6546f;
				vLocal_51[7 /*3*/] = { -1092.075f, 4939.958f, 217.3385f };
				fLocal_100[7] = 210.2433f;
				vLocal_51[8 /*3*/] = { -1101.798f, 4930.33f, 217.3544f };
				fLocal_100[8] = 203.732f;
				vLocal_51[9 /*3*/] = { -1070.675f, 4869.301f, 220.2917f };
				fLocal_100[9] = 39.1109f;
				vLocal_51[10 /*3*/] = { -1115.703f, 4878.439f, 225.8085f };
				fLocal_100[10] = 25.8472f;
				ADD_RELATIONSHIP_GROUP("rghCult", &uLocal_410);
				iVar1 = 0;
				while (iVar1 < iLocal_196)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_196[iVar1] = CREATE_PED(26, joaat("a_m_o_acult_01"), vLocal_51[iVar1 /*3*/], fLocal_100[iVar1], 1, 1);
						SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_196[iVar1], 0);
						GIVE_WEAPON_TO_PED(iLocal_196[iVar1], joaat("weapon_assaultrifle"), -1, 1, 1);
						SET_PED_COMBAT_MOVEMENT(iLocal_196[iVar1], 0);
						SET_PED_COMBAT_ABILITY(iLocal_196[iVar1], 2);
						SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_196[iVar1], 50f, 20);
						SET_PED_ACCURACY(iLocal_196[iVar1], 5);
						SET_PED_HEARING_RANGE(iLocal_196[iVar1], 100f);
						SET_PED_SEEING_RANGE(iLocal_196[iVar1], 100f);
						SET_ENTITY_HEALTH(iLocal_196[iVar1], 150, 0);
						SET_PED_SHOOT_RATE(iLocal_196[iVar1], GET_RANDOM_INT_IN_RANGE(40, 60));
						TASK_COMBAT_PED(iLocal_196[iVar1], PLAYER_PED_ID(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_196[iVar1] = CREATE_PED(26, joaat("a_m_o_acult_02"), vLocal_51[iVar1 /*3*/], fLocal_100[iVar1], 1, 1);
						SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_196[iVar1], 0);
						GIVE_WEAPON_TO_PED(iLocal_196[iVar1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
						SET_PED_COMBAT_ATTRIBUTES(iLocal_196[iVar1], 50, 1);
						SET_PED_COMBAT_MOVEMENT(iLocal_196[iVar1], 2);
						SET_PED_COMBAT_ABILITY(iLocal_196[iVar1], 1);
						SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_196[iVar1], 50f, 20);
						SET_PED_ACCURACY(iLocal_196[iVar1], 5);
						SET_PED_HEARING_RANGE(iLocal_196[iVar1], 100f);
						SET_PED_SEEING_RANGE(iLocal_196[iVar1], 100f);
						SET_PED_SHOOT_RATE(iLocal_196[iVar1], GET_RANDOM_INT_IN_RANGE(40, 60));
						TASK_COMBAT_PED(iLocal_196[iVar1], PLAYER_PED_ID(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!IS_PED_INJURED(iLocal_196[iVar1]) && !IS_PED_INJURED(iLocal_196[11])) && !IS_PED_INJURED(iLocal_196[12])) && !IS_PED_INJURED(iLocal_196[13])) && !IS_PED_INJURED(iLocal_196[14])) && !IS_PED_INJURED(iLocal_196[15]))
						{
							GIVE_WEAPON_TO_PED(iLocal_196[11], joaat("weapon_pistol"), -1, 1, 1);
							GIVE_WEAPON_TO_PED(iLocal_196[12], joaat("weapon_assaultrifle"), -1, 1, 1);
							GIVE_WEAPON_TO_PED(iLocal_196[13], joaat("weapon_assaultrifle"), -1, 1, 1);
							GIVE_WEAPON_TO_PED(iLocal_196[14], joaat("weapon_carbinerifle"), -1, 1, 1);
							GIVE_WEAPON_TO_PED(iLocal_196[15], joaat("weapon_pumpshotgun"), -1, 1, 1);
							SET_PED_COMBAT_ATTRIBUTES(iLocal_196[iVar1], 0, 1);
							SET_PED_COMBAT_MOVEMENT(iLocal_196[iVar1], 3);
							SET_PED_COMBAT_ABILITY(iLocal_196[iVar1], 0);
							SET_PED_ACCURACY(iLocal_196[iVar1], 0);
							SET_PED_CHANCE_OF_FIRING_BLANKS(iLocal_196[iVar1], 1f, 1f);
							OPEN_SEQUENCE_TASK(&uLocal_247);
							TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1159.33f, 4924.412f, 221.6576f, PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							TASK_AIM_GUN_AT_ENTITY(0, PLAYER_PED_ID(), 6000, 0);
							TASK_AIM_GUN_AT_ENTITY(0, PLAYER_PED_ID(), 4500, 0);
							TASK_COMBAT_PED(0, PLAYER_PED_ID(), 0, 16);
							CLOSE_SEQUENCE_TASK(uLocal_247);
							TASK_PERFORM_SEQUENCE(iLocal_196[15], uLocal_247);
							CLEAR_SEQUENCE_TASK(&uLocal_247);
							OPEN_SEQUENCE_TASK(&uLocal_247);
							TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1163.279f, 4932.933f, 222.541f, PLAYER_PED_ID(), 1f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							TASK_SEEK_COVER_FROM_PED(0, PLAYER_PED_ID(), 5000, 0);
							TASK_AIM_GUN_AT_ENTITY(0, PLAYER_PED_ID(), 7500, 0);
							TASK_AIM_GUN_AT_ENTITY(0, PLAYER_PED_ID(), 4500, 0);
							TASK_COMBAT_PED(0, PLAYER_PED_ID(), 0, 16);
							CLOSE_SEQUENCE_TASK(uLocal_247);
							TASK_PERFORM_SEQUENCE(iLocal_196[14], uLocal_247);
							CLEAR_SEQUENCE_TASK(&uLocal_247);
							OPEN_SEQUENCE_TASK(&uLocal_247);
							TASK_AIM_GUN_AT_ENTITY(0, PLAYER_PED_ID(), 2500, 0);
							TASK_SEEK_COVER_FROM_PED(0, PLAYER_PED_ID(), 5000, 0);
							TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1156.175f, 4926.073f, 221.3447f, PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							TASK_AIM_GUN_AT_ENTITY(0, PLAYER_PED_ID(), 6500, 0);
							TASK_AIM_GUN_AT_ENTITY(0, PLAYER_PED_ID(), 4500, 0);
							TASK_COMBAT_PED(0, PLAYER_PED_ID(), 0, 16);
							CLOSE_SEQUENCE_TASK(uLocal_247);
							TASK_PERFORM_SEQUENCE(iLocal_196[13], uLocal_247);
							CLEAR_SEQUENCE_TASK(&uLocal_247);
							OPEN_SEQUENCE_TASK(&uLocal_247);
							TASK_AIM_GUN_AT_ENTITY(0, PLAYER_PED_ID(), 3000, 0);
							TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1157.962f, 4922.196f, 221.309f, PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							TASK_AIM_GUN_AT_ENTITY(0, PLAYER_PED_ID(), 5500, 0);
							TASK_AIM_GUN_AT_ENTITY(0, PLAYER_PED_ID(), 4500, 0);
							TASK_COMBAT_PED(0, PLAYER_PED_ID(), 0, 16);
							CLOSE_SEQUENCE_TASK(uLocal_247);
							TASK_PERFORM_SEQUENCE(iLocal_196[12], uLocal_247);
							CLEAR_SEQUENCE_TASK(&uLocal_247);
							OPEN_SEQUENCE_TASK(&uLocal_247);
							TASK_AIM_GUN_AT_ENTITY(0, PLAYER_PED_ID(), 4500, 0);
							TASK_SEEK_COVER_FROM_PED(0, PLAYER_PED_ID(), 10000, 0);
							TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1161.475f, 4916.061f, 220.5658f, PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							TASK_AIM_GUN_AT_ENTITY(0, PLAYER_PED_ID(), 4500, 0);
							TASK_AIM_GUN_AT_ENTITY(0, PLAYER_PED_ID(), 4500, 0);
							TASK_COMBAT_PED(0, PLAYER_PED_ID(), 0, 16);
							CLOSE_SEQUENCE_TASK(uLocal_247);
							TASK_PERFORM_SEQUENCE(iLocal_196[11], uLocal_247);
							CLEAR_SEQUENCE_TASK(&uLocal_247);
							SET_PED_KEEP_TASK(iLocal_196[iVar1], 1);
							SET_PED_RESET_FLAG(iLocal_196[iVar1], 156, 1);
						}
					}
					else
					{
						iLocal_196[iVar1] = CREATE_PED(26, joaat("a_m_o_acult_02"), vLocal_51[iVar1 /*3*/], fLocal_100[iVar1], 1, 1);
						SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_196[iVar1], 0);
						GIVE_WEAPON_TO_PED(iLocal_196[iVar1], joaat("weapon_pistol"), -1, 1, 1);
						SET_PED_COMBAT_ATTRIBUTES(iLocal_196[iVar1], 50, 1);
						SET_PED_COMBAT_MOVEMENT(iLocal_196[iVar1], 2);
						SET_PED_COMBAT_ABILITY(iLocal_196[iVar1], 0);
						SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_196[iVar1], 50f, 20);
						SET_PED_COMBAT_RANGE(iLocal_196[iVar1], 1);
						SET_PED_ACCURACY(iLocal_196[iVar1], 5);
						SET_PED_HEARING_RANGE(iLocal_196[iVar1], 100f);
						SET_PED_SEEING_RANGE(iLocal_196[iVar1], 100f);
						SET_PED_SHOOT_RATE(iLocal_196[iVar1], GET_RANDOM_INT_IN_RANGE(40, 60));
						TASK_COMBAT_PED(iLocal_196[iVar1], PLAYER_PED_ID(), 0, 16);
					}
					SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_196[iVar1], uLocal_410);
					SET_ENTITY_HEADING(iLocal_196[iVar1], func_127(GET_ENTITY_COORDS(iLocal_196[iVar1], 1), func_93(PLAYER_ID())));
					SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_196[iVar1], 1);
					SET_PED_CONFIG_FLAG(iLocal_196[iVar1], 42, 1);
					uLocal_229[iVar1] = func_125(iLocal_196[iVar1], 1, 145);
					iVar1++;
				}
				func_97(&uLocal_411, 0, PLAYER_PED_ID(), "TREVOR", 0, 1);
				func_97(&uLocal_411, 3, iLocal_196[11], "ACULTMaster", 0, 1);
				func_97(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
				SET_BIT(&iVar0, 1);
				SET_BIT(&iVar0, 3);
				SET_BIT(&iVar0, 4);
				if (!bLocal_172)
				{
					uLocal_216[0] = CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), -1074.165f, 4897.468f, 213.2754f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_216[1] = CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), -1094.671f, 4892.789f, 215.0707f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_216[2] = CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), -1113.95f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_216[3] = CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), -1145.273f, 4907.894f, 219.9734f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
				}
				uLocal_216[0] = uLocal_216[0];
				uLocal_216[1] = uLocal_216[1];
				uLocal_216[2] = uLocal_216[2];
				uLocal_216[3] = uLocal_216[3];
				iLocal_221[0] = CREATE_OBJECT(-1322183878, -1158.69f, 4915.709f, 220.2644f, 1, 1, 0);
				iLocal_221[1] = CREATE_OBJECT(-2022916910, -1156.246f, 4918.6f, 220.5432f, 1, 1, 0);
				iLocal_221[2] = CREATE_OBJECT(-1322183878, -1145.802f, 4931.816f, 219.9683f, 1, 1, 0);
				iLocal_221[3] = CREATE_OBJECT(-1322183878, -1133.369f, 4919.067f, 218.8385f, 1, 1, 0);
				iLocal_221[4] = CREATE_OBJECT(joaat("prop_box_wood05a"), -1132.025f, 4921.483f, 218.8244f, 1, 1, 0);
				iLocal_221[5] = CREATE_OBJECT(-2022916910, -1112.66f, 4929.268f, 217.1752f, 1, 1, 0);
				SET_ENTITY_ROTATION(iLocal_221[0], 12.24288f, -0.014582f, 27.06056f, 2, 1);
				SET_ENTITY_ROTATION(iLocal_221[1], 7.733739f, 9.432779f, -2.865618f, 2, 1);
				SET_ENTITY_ROTATION(iLocal_221[2], 3.735082f, 4.551246f, 86.30917f, 2, 1);
				SET_ENTITY_ROTATION(iLocal_221[3], 0.240341f, 1.095195f, 36.59031f, 2, 1);
				SET_ENTITY_ROTATION(iLocal_221[4], 7.6772f, 1.232743f, 93.27483f, 2, 1);
				SET_ENTITY_ROTATION(iLocal_221[5], 3.367802f, -5.14387f, 97.30567f, 2, 1);
				if (func_124() < 50)
				{
					SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER_ID(), 0.5f, 1);
				}
				if (func_123() != 18)
				{
					func_121(18);
				}
				if (!func_90())
				{
					func_110(0);
				}
				func_1(1);
				bLocal_172 = false;
				iLocal_50 = 4;
			}
			break;
	}
}

int func_110(int iParam0)
{
	if (func_115())
	{
		Global_106555 = 1;
		Global_106552 = GET_GAME_TIMER();
		if (func_114(Global_106554))
		{
			func_111(0);
		}
		SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_114(Global_106554))
		{
			FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_106565.f_24989.f_2 < 3)
			{
				if (!IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_112(func_113(iParam0), -1);
					Global_106565.f_24989.f_2++;
					SET_BIT(&Global_106561, 0);
				}
			}
			break;
		
		case 1:
			if (!IS_BIT_SET(Global_106561, 1))
			{
				if (!IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_112(func_113(iParam0), -1);
					Global_106565.f_24989.f_3++;
					SET_BIT(&Global_106561, 1);
				}
			}
			break;
		
		case 2:
			if (!IS_BIT_SET(Global_106561, 2))
			{
				if (!IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_112(func_113(iParam0), -1);
					Global_106565.f_24989.f_4++;
					SET_BIT(&Global_106561, 2);
				}
			}
			break;
	}
}

void func_112(var uParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

char* func_113(int iParam0)
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

int func_114(int iParam0)
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

int func_115()
{
	switch (func_116(&Global_25824, 0, 5, 0, GET_ID_OF_THIS_THREAD()))
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

int func_116(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_91190.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_120(0))
		{
			return 0;
		}
		Global_36389++;
		*uParam0 = Global_36389;
		SET_PLAYER_INVINCIBLE(GET_PLAYER_INDEX(), 0);
		Global_17272.f_5 = 0;
		if (iParam2 != 5)
		{
			FORCE_CLEANUP(8);
		}
		Global_36425 = iParam2;
		Global_36387 = *uParam0;
		Global_36388 = iParam4;
		Global_36386 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_36386 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_36386)
			{
				if (Global_36392[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_36387 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_118(iParam2))
		{
			return 0;
		}
		if (Global_36386 == 8)
		{
			return 0;
		}
		Global_36389++;
		*uParam0 = Global_36389;
		Global_36392[Global_36386 /*4*/] = Global_36389;
		Global_36392[Global_36386 /*4*/].f_1 = iParam1;
		Global_36392[Global_36386 /*4*/].f_2 = iParam2;
		Global_36392[Global_36386 /*4*/].f_3 = 0;
		Global_36386++;
		if (iParam4 != 0)
		{
			func_117(uParam0, iParam4);
		}
	}
	return 2;
}

void func_117(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_36386 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_36386)
	{
		if (Global_36392[iVar0 /*4*/] == *uParam0)
		{
			Global_36392[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_118(int iParam0)
{
	return func_119(iParam0, Global_36425);
}

int func_119(int iParam0, int iParam1)
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

int func_120(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_118(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_121(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_91();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_63(iParam0);
	_0x65D2EBB47E1CEC21(0);
	SET_RANDOM_EVENT_FLAG(1);
	Global_106551 = 0;
	func_122();
}

void func_122()
{
	if (!IS_PED_INJURED(PLAYER_PED_ID()))
	{
		if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
		{
			SET_VEHICLE_MODEL_IS_SUPPRESSED(GET_ENTITY_MODEL(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0)), 1);
		}
		SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 32, 0);
	}
}

int func_123()
{
	return Global_106554;
}

int func_124()
{
	var uVar0;
	
	switch (func_14())
	{
		case 0:
			STAT_GET_INT(joaat("sp0_special_ability"), &uVar0, -1);
			break;
		
		case 1:
			STAT_GET_INT(joaat("sp1_special_ability"), &uVar0, -1);
			break;
		
		case 2:
			STAT_GET_INT(joaat("sp2_special_ability"), &uVar0, -1);
			break;
	}
	return uVar0;
}

var func_125(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_126(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && DOES_BLIP_EXIST(uVar0)) && DOES_TEXT_LABEL_EXIST(&(Global_106565.f_28044[iParam2 /*29*/].f_3)))
	{
		SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_106565.f_28044[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_126(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = ADD_BLIP_FOR_ENTITY(uParam0);
	if (IS_ENTITY_A_VEHICLE(uParam0))
	{
		SET_BLIP_SCALE(uVar0, func_39(NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (IS_ENTITY_A_PED(uParam0))
	{
		SET_BLIP_SCALE(uVar0, func_39(NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (IS_ENTITY_AN_OBJECT(uParam0))
	{
		SET_BLIP_SCALE(uVar0, func_39(NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_127(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_128()
{
	Global_26001 = 1;
}

int func_129(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	var uVar9;
	
	iVar0 = 0;
	iVar2 = iParam1;
	if (!HAS_PED_GOT_WEAPON(uParam0, iParam1, 0))
	{
		iVar0 = 1;
	}
	if (iVar2 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	iVar3 = 0;
	if (iParam2 == 1)
	{
		if (!IS_ENTITY_DEAD(uParam0, 0))
		{
			iVar3 = GET_AMMO_IN_PED_WEAPON(uParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = GET_WEAPON_CLIP_SIZE(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				GET_MAX_AMMO(uParam0, iVar2, &iVar3);
			}
		}
	}
	vVar5 = { GET_ENTITY_COORDS(uParam0, 0) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		vVar5 = { iParam4, iParam5, iParam6 };
	}
	while (func_133(iVar2, iVar8) != 0)
	{
		if (!IS_ENTITY_DEAD(uParam0, 0))
		{
			if (HAS_PED_GOT_WEAPON_COMPONENT(uParam0, iVar2, func_133(iVar2, iVar8)))
			{
				if (func_132(func_133(iVar2, iVar8)))
				{
					uVar9 = GET_WEAPON_COMPONENT_TYPE_MODEL(func_133(iVar2, iVar8));
				}
			}
		}
		iVar8++;
	}
	uVar1 = CREATE_WEAPON_OBJECT(iVar2, iVar3, vVar5, iVar0, 1065353216, uVar9, iParam7, iParam8);
	while (func_133(iVar2, iVar8) != 0)
	{
		if (!IS_ENTITY_DEAD(uParam0, 0))
		{
			if (HAS_PED_GOT_WEAPON_COMPONENT(uParam0, iVar2, func_133(iVar2, iVar8)))
			{
				GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(uVar1, func_133(iVar2, iVar8));
				func_130(uVar1, func_133(iVar2, iVar8));
			}
		}
		iVar8++;
	}
	if (!IS_ENTITY_DEAD(uParam0, 0))
	{
		if (HAS_PED_GOT_WEAPON(uParam0, iVar2, 0))
		{
			SET_WEAPON_OBJECT_TINT_INDEX(uVar1, GET_PED_WEAPON_TINT_INDEX(uParam0, iVar2));
		}
	}
	return uVar1;
}

void func_130(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_131(iParam1);
	if (iVar0 != 0)
	{
		GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(uParam0, iVar0);
	}
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_pistol_mk2_camo"):
			return joaat("component_pistol_mk2_camo_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_02"):
			return joaat("component_pistol_mk2_camo_02_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_03"):
			return joaat("component_pistol_mk2_camo_03_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_04"):
			return joaat("component_pistol_mk2_camo_04_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_05"):
			return joaat("component_pistol_mk2_camo_05_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_06"):
			return joaat("component_pistol_mk2_camo_06_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_07"):
			return joaat("component_pistol_mk2_camo_07_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_08"):
			return joaat("component_pistol_mk2_camo_08_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_09"):
			return joaat("component_pistol_mk2_camo_09_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_10"):
			return joaat("component_pistol_mk2_camo_10_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_ind_01"):
			return joaat("component_pistol_mk2_camo_ind_01_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo"):
			return joaat("component_snspistol_mk2_camo_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_02"):
			return joaat("component_snspistol_mk2_camo_02_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_03"):
			return joaat("component_snspistol_mk2_camo_03_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_04"):
			return joaat("component_snspistol_mk2_camo_04_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_05"):
			return joaat("component_snspistol_mk2_camo_05_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_06"):
			return joaat("component_snspistol_mk2_camo_06_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_07"):
			return joaat("component_snspistol_mk2_camo_07_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_08"):
			return joaat("component_snspistol_mk2_camo_08_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_09"):
			return joaat("component_snspistol_mk2_camo_09_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_10"):
			return joaat("component_snspistol_mk2_camo_10_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_ind_01"):
			return joaat("component_snspistol_mk2_camo_ind_01_slide");
			break;
	}
	return 0;
}

int func_132(int iParam0)
{
	if ((((((((((((((((((((((((((((((((iParam0 == joaat("component_pistol_varmod_luxe") || iParam0 == joaat("component_combatpistol_varmod_lowrider")) || iParam0 == joaat("component_appistol_varmod_luxe")) || iParam0 == joaat("component_microsmg_varmod_luxe")) || iParam0 == joaat("component_smg_varmod_luxe")) || iParam0 == joaat("component_assaultrifle_varmod_luxe")) || iParam0 == joaat("component_carbinerifle_varmod_luxe")) || iParam0 == joaat("component_advancedrifle_varmod_luxe")) || iParam0 == joaat("component_mg_varmod_lowrider")) || iParam0 == joaat("component_combatmg_varmod_lowrider")) || iParam0 == joaat("component_pumpshotgun_varmod_lowrider")) || iParam0 == joaat("component_sniperrifle_varmod_luxe")) || iParam0 == joaat("component_assaultsmg_varmod_lowrider")) || iParam0 == joaat("component_pistol50_varmod_luxe")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_bullpuprifle_varmod_low")) || iParam0 == joaat("component_snspistol_varmod_lowrider")) || iParam0 == joaat("component_specialcarbine_varmod_lowrider")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_knuckle_varmod_pimp")) || iParam0 == joaat("component_knuckle_varmod_ballas")) || iParam0 == joaat("component_knuckle_varmod_dollar")) || iParam0 == joaat("component_knuckle_varmod_diamond")) || iParam0 == joaat("component_knuckle_varmod_hate")) || iParam0 == joaat("component_knuckle_varmod_love")) || iParam0 == joaat("component_knuckle_varmod_player")) || iParam0 == joaat("component_knuckle_varmod_king")) || iParam0 == joaat("component_knuckle_varmod_vagos")) || iParam0 == joaat("component_switchblade_varmod_var1")) || iParam0 == joaat("component_switchblade_varmod_var2")) || iParam0 == joaat("component_revolver_varmod_boss")) || iParam0 == joaat("component_revolver_varmod_goon")) || iParam0 == joaat("component_gunrun_mk2_upgrade"))
	{
		return 1;
	}
	return 0;
}

int func_133(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_135(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var43))
						{
							if (!func_134(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_pistol_mk2_camo_slide"):
		case joaat("component_pistol_mk2_camo_02_slide"):
		case joaat("component_pistol_mk2_camo_03_slide"):
		case joaat("component_pistol_mk2_camo_04_slide"):
		case joaat("component_pistol_mk2_camo_05_slide"):
		case joaat("component_pistol_mk2_camo_06_slide"):
		case joaat("component_pistol_mk2_camo_07_slide"):
		case joaat("component_pistol_mk2_camo_08_slide"):
		case joaat("component_pistol_mk2_camo_09_slide"):
		case joaat("component_pistol_mk2_camo_10_slide"):
		case joaat("component_pistol_mk2_camo_ind_01_slide"):
		case joaat("component_snspistol_mk2_camo_slide"):
		case joaat("component_snspistol_mk2_camo_02_slide"):
		case joaat("component_snspistol_mk2_camo_03_slide"):
		case joaat("component_snspistol_mk2_camo_04_slide"):
		case joaat("component_snspistol_mk2_camo_05_slide"):
		case joaat("component_snspistol_mk2_camo_06_slide"):
		case joaat("component_snspistol_mk2_camo_07_slide"):
		case joaat("component_snspistol_mk2_camo_08_slide"):
		case joaat("component_snspistol_mk2_camo_09_slide"):
		case joaat("component_snspistol_mk2_camo_10_slide"):
		case joaat("component_snspistol_mk2_camo_ind_01_slide"):
			return 1;
			break;
	}
	return 0;
}

int func_135(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_136()
{
	bool bVar0;
	
	bVar0 = HAS_CUTSCENE_LOADED();
	if (!Global_71589)
	{
		if (!bVar0)
		{
			Global_71589 = 1;
		}
	}
	return bVar0;
}

int func_137(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_138(iParam0, iParam1);
}

int func_138(int iParam0, int iParam1)
{
	if (func_16(14) && !func_149(iParam0))
	{
		return 0;
	}
	if (HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_26012 != 0 && !Global_71590)
	{
		return 0;
	}
	if (func_148(&Global_4269608))
	{
		if (func_146(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_139(&Global_4269608, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_139(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_16(14) && !func_149(iParam1))
	{
		return 0;
	}
	if (func_146(uParam0, iParam1))
	{
		return 0;
	}
	if (func_145(uParam0) < 0f)
	{
		func_144(uParam0, 0);
	}
	func_142(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_140(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_140(var uParam0, int iParam1)
{
	int iVar0;
	
	if (HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_16(14) && !func_149(iParam1))
	{
		return 0;
	}
	if (func_146(uParam0, iParam1))
	{
		return 0;
	}
	if (func_145(uParam0) < 0f)
	{
		func_144(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_141(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_141(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_142(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_143(uParam0, iVar0);
		iVar0++;
	}
	func_144(uParam0, (Global_4269607 - 0.5f));
}

void func_143(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_144(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_145(var uParam0)
{
	return uParam0->f_80;
}

bool func_146(var uParam0, int iParam1)
{
	return func_147(uParam0, iParam1) != -1;
}

int func_147(var uParam0, int iParam1)
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
	return -1;
}

bool func_148(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_149(int iParam0)
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

void func_150()
{
	if (fLocal_183 > 0f)
	{
		fLocal_183 = (fLocal_183 - (0.6f / (1f / GET_FRAME_TIME())));
	}
	else
	{
		fLocal_183 = 0f;
	}
	if (fLocal_183 >= 0f)
	{
		_SET_DOOR_AJAR_ANGLE(Global_35548[10 /*31*/], fLocal_183, 0, 1);
		_SET_DOOR_ACCELERATION_LIMIT(Global_35548[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_182 < 0f)
	{
		fLocal_182 = (fLocal_182 + (0.6f / (1f / GET_FRAME_TIME())));
	}
	else
	{
		fLocal_182 = 0f;
	}
	if (fLocal_182 <= 0f)
	{
		_SET_DOOR_AJAR_ANGLE(Global_35548[9 /*31*/], fLocal_182, 0, 1);
		_SET_DOOR_ACCELERATION_LIMIT(Global_35548[9 /*31*/], 4, 0, 1);
	}
}

void func_151()
{
	if (fLocal_183 < 1f)
	{
		fLocal_183 = (fLocal_183 + (0.6f / (1f / GET_FRAME_TIME())));
	}
	else
	{
		fLocal_183 = 1f;
	}
	if (fLocal_183 <= 1f)
	{
		_SET_DOOR_AJAR_ANGLE(Global_35548[10 /*31*/], fLocal_183, 0, 1);
		_SET_DOOR_ACCELERATION_LIMIT(Global_35548[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_182 > -1f)
	{
		fLocal_182 = (fLocal_182 - (0.6f / (1f / GET_FRAME_TIME())));
	}
	else
	{
		fLocal_182 = -1f;
	}
	if (fLocal_182 >= -1f)
	{
		_SET_DOOR_AJAR_ANGLE(Global_35548[9 /*31*/], fLocal_182, 0, 1);
		_SET_DOOR_ACCELERATION_LIMIT(Global_35548[9 /*31*/], 4, 0, 1);
	}
}

void func_152()
{
	switch (iLocal_189)
	{
		case 0:
			REQUEST_MODEL(joaat("a_m_o_acult_02"));
			REQUEST_MODEL(joaat("prop_anim_cash_pile_02"));
			REQUEST_ANIM_DICT("random@altruist_cult");
			PREPARE_MUSIC_EVENT("AC_DELIVERED");
			REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
			if ((((HAS_MODEL_LOADED(joaat("a_m_o_acult_02")) && HAS_MODEL_LOADED(joaat("prop_anim_cash_pile_02"))) && HAS_ANIM_DICT_LOADED("random@altruist_cult")) && PREPARE_MUSIC_EVENT("AC_DELIVERED")) && HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle")))
			{
				if (Global_106565.f_24989.f_5 < 2)
				{
					if (Global_106565.f_24989.f_5 == 0)
					{
						sLocal_409 = "ACULT_HI";
					}
					else
					{
						sLocal_409 = "ACULT_LEAVE5";
					}
					sLocal_403 = "cult_p5_guard";
					sLocal_405 = "cult_p5_trv";
					sLocal_406 = "cult_p5_victim_01";
					sLocal_407 = "cult_p5_victim_02";
					sLocal_408 = "cult_p5_cam";
					fLocal_185 = 0.75f;
					fLocal_184 = 0.999f;
				}
				else if (Global_106565.f_24989.f_5 >= 2)
				{
					sLocal_409 = "ACULT_CAPT";
					sLocal_403 = "cult_p7_guard_01";
					sLocal_404 = "cult_p7_guard_02";
					sLocal_405 = "cult_p7_trv";
					sLocal_406 = "cult_p7_victim_01";
					sLocal_407 = "cult_p7_victim_02";
					sLocal_408 = "cult_p7_cam";
					fLocal_185 = 0.98f;
					fLocal_184 = 0.98f;
					REQUEST_MODEL(-2022916910);
					REQUEST_MODEL(-1322183878);
					REQUEST_MODEL(joaat("prop_box_wood05a"));
					REQUEST_MODEL(joaat("prop_security_case_01"));
					if (!IS_CUTSCENE_ACTIVE())
					{
						REQUEST_CUTSCENE("ac_ig_3_p3_b", 8);
					}
				}
				if (DOES_BLIP_EXIST(uLocal_228))
				{
					REMOVE_BLIP(&uLocal_228);
				}
				func_21(1, 1, 1, 0, 0, 0);
				SET_PLAYER_CONTROL(PLAYER_ID(), 0, 0);
				CLEAR_HELP(1);
				DISPLAY_HUD(0);
				DISPLAY_RADAR(0);
				HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER_PED_ID(), 1);
				SET_CURRENT_PED_WEAPON(PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				TRIGGER_MUSIC_EVENT("AC_DELIVERED");
				if (func_179())
				{
					func_178(0);
				}
				func_176();
				WAIT(0);
				if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
				{
					uLocal_213 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
					if (IS_VEHICLE_DRIVEABLE(uLocal_213, 0))
					{
						if (IS_VEHICLE_STOPPED(uLocal_213))
						{
							iLocal_189++;
						}
					}
				}
				else
				{
					uLocal_213 = GET_PLAYERS_LAST_VEHICLE();
					if (!IS_PED_INJURED(uLocal_193[0]) && !IS_PED_INJURED(uLocal_193[1]))
					{
						CLEAR_PED_TASKS(uLocal_193[0]);
						REMOVE_PED_FROM_GROUP(uLocal_193[0]);
						CLEAR_PED_TASKS(uLocal_193[1]);
						REMOVE_PED_FROM_GROUP(uLocal_193[1]);
					}
					iLocal_189++;
				}
			}
			break;
		
		case 1:
			if (DOES_ENTITY_EXIST(uLocal_213))
			{
				if (!IS_ENTITY_A_MISSION_ENTITY(uLocal_213))
				{
					SET_ENTITY_AS_MISSION_ENTITY(uLocal_213, 1, 0);
				}
				if (IS_ENTITY_AT_COORD(uLocal_213, vLocal_120, 13f, 13f, 13f, 0, 1, 0))
				{
					SET_ENTITY_COORDS(uLocal_213, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!IS_ENTITY_DEAD(uLocal_213, 0))
					{
						SET_ENTITY_HEADING(uLocal_213, 149.8882f);
						SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_213, 1084227584);
					}
				}
			}
			CLEAR_AREA(vLocal_120, 12f, 1, 0, 0, 0);
			SET_ENTITY_COORDS(PLAYER_PED_ID(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			SET_ENTITY_HEADING(PLAYER_PED_ID(), 128.2065f);
			if (!IS_PED_INJURED(uLocal_193[0]) && !IS_PED_INJURED(uLocal_193[1]))
			{
				SET_ENTITY_COORDS(uLocal_193[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				SET_ENTITY_HEADING(uLocal_193[0], 128.2065f);
				SET_ENTITY_COORDS(uLocal_193[1], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 1f, 0f), 1, 0, 0, 1);
				SET_ENTITY_HEADING(uLocal_193[1], 128.2065f);
			}
			iLocal_196[0] = CREATE_PED(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_97(&uLocal_411, 1, iLocal_196[0], "ACULTMember1", 0, 1);
			if (Global_106565.f_24989.f_5 >= 2)
			{
				iLocal_196[1] = CREATE_PED(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_97(&uLocal_411, 2, iLocal_196[1], "ACULTMember2", 0, 1);
			}
			func_97(&uLocal_411, 0, PLAYER_PED_ID(), "TREVOR", 0, 1);
			func_97(&uLocal_411, 3, 0, "ACULTMaster", 0, 1);
			func_97(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
			func_98(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_196[0], 1);
			uLocal_215 = CREATE_WEAPON_OBJECT(joaat("weapon_assaultrifle"), -1, GET_ENTITY_COORDS(iLocal_196[0], 1), 1, 1065353216, 0, 0, 1);
			ATTACH_ENTITY_TO_ENTITY(uLocal_215, iLocal_196[0], GET_PED_BONE_INDEX(iLocal_196[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_106565.f_24989.f_5 < 2)
			{
				uLocal_214 = CREATE_OBJECT(joaat("prop_anim_cash_pile_02"), vLocal_117, 1, 1, 0);
				ATTACH_ENTITY_TO_ENTITY(uLocal_214, PLAYER_PED_ID(), GET_PED_BONE_INDEX(PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			else if (Global_106565.f_24989.f_5 >= 2)
			{
				GIVE_WEAPON_TO_PED(iLocal_196[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_246 = CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
			uLocal_188 = CREATE_SYNCHRONIZED_SCENE(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			TASK_SYNCHRONIZED_SCENE(PLAYER_PED_ID(), uLocal_188, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1148846080, 0);
			TASK_SYNCHRONIZED_SCENE(iLocal_196[0], uLocal_188, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_106565.f_24989.f_5 >= 2)
			{
				TASK_SYNCHRONIZED_SCENE(iLocal_196[1], uLocal_188, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_246, uLocal_188, sLocal_408, "random@altruist_cult");
			RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			if (!IS_PED_INJURED(uLocal_193[0]) && !IS_PED_INJURED(uLocal_193[1]))
			{
				TASK_SYNCHRONIZED_SCENE(uLocal_193[0], uLocal_188, "random@altruist_cult", sLocal_406, 1000f, -2f, 4, 0, 1148846080, 0);
				TASK_SYNCHRONIZED_SCENE(uLocal_193[1], uLocal_188, "random@altruist_cult", sLocal_407, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_189++;
			break;
		
		case 2:
			if (!IS_PED_INJURED(uLocal_193[0]))
			{
				if (IS_PED_MALE(uLocal_193[0]))
				{
					func_174(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_174(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!IS_PED_INJURED(uLocal_193[1]))
			{
				if (IS_PED_MALE(uLocal_193[1]))
				{
					func_174(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_174(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (GET_SYNCHRONIZED_SCENE_PHASE(uLocal_188) > fLocal_185)
			{
				iLocal_189++;
			}
			break;
		
		case 3:
			if (!IS_PED_INJURED(uLocal_193[0]))
			{
				if (IS_PED_MALE(uLocal_193[0]))
				{
					func_174(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_174(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!IS_PED_INJURED(uLocal_193[1]))
			{
				if (IS_PED_MALE(uLocal_193[1]))
				{
					func_174(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_174(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (GET_SYNCHRONIZED_SCENE_PHASE(uLocal_188) > fLocal_184)
			{
				iLocal_189++;
			}
			break;
		
		case 4:
			if (Global_106565.f_24989.f_5 < 2)
			{
				func_128();
				if (DOES_ENTITY_EXIST(iLocal_196[0]))
				{
					DELETE_PED(&(iLocal_196[0]));
				}
				if (DOES_ENTITY_EXIST(iLocal_196[1]))
				{
					DELETE_PED(&(iLocal_196[1]));
				}
				if (DOES_ENTITY_EXIST(uLocal_214))
				{
					DELETE_OBJECT(&uLocal_214);
				}
				if (DOES_ENTITY_EXIST(uLocal_215))
				{
					DELETE_OBJECT(&uLocal_215);
				}
				CLEAR_PED_TASKS(PLAYER_PED_ID());
				_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
				SET_CAM_ACTIVE(uLocal_246, 0);
				func_21(0, 1, 1, 0, 0, 0);
				SET_PLAYER_CONTROL(PLAYER_ID(), 1, 0);
				DISPLAY_HUD(1);
				DISPLAY_RADAR(1);
				HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER_PED_ID(), 0);
				SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				func_153(func_14(), 1, 2000, 0, 0);
			}
			TRIGGER_MUSIC_EVENT("AC_DONE");
			Global_106565.f_24989.f_5 += 2;
			iLocal_174 = 1;
			break;
	}
}

void func_153(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_154(Global_106565.f_28044[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_154(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_173();
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
					func_172(99, 1);
					func_171(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_171(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_171(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_169(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_164(5))
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
							func_171(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_171(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_171(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_164(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_171(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_171(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_171(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_171(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_171(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_171(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_171(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_171(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_171(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_171(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_171(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_171(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_171(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_171(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_171(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_164(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_171(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_171(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_171(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_171(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_171(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_171(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_163(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_172(95, iParam3);
					break;
				
				case 1:
					func_172(97, iParam3);
					break;
				
				case 2:
					func_172(96, iParam3);
					break;
			}
			func_172(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = FLOOR((fVar0 * TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_157(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_157(iVar1);
	}
	iVar5 = (Global_53668[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53668[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53668[iVar2] = 2147483647;
				}
				else
				{
					Global_53668[iVar2] = (Global_53668[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_171(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_171(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_171(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53668[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53668[iVar2];
			Global_53668[iVar2] = (Global_53668[iVar2] - iParam3);
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
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_106565.f_20558.f_233[iVar2 /*69*/]++;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_1++;
		if (Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_156(iParam0);
	if (Global_36425 == 15)
	{
		func_155(0);
	}
	return 1;
}

void func_155(bool bParam0)
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
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53676[iVar0 /*3*/][0] = Global_106565.f_20558[iVar0];
		Global_53676.f_31[iVar0 /*3*/][0] = Global_106565.f_20558.f_11[iVar0];
		Global_53676.f_62[iVar0 /*3*/][0] = Global_106565.f_20558.f_22[iVar0];
		Global_53676.f_93[iVar0 /*3*/][0] = Global_106565.f_20558.f_33[iVar0];
		Global_53676.f_124[iVar0 /*3*/][0] = Global_106565.f_20558.f_44[iVar0];
		Global_53676.f_155[iVar0 /*3*/][0] = Global_106565.f_20558.f_55[iVar0];
		Global_53676.f_186[iVar0 /*3*/][0] = Global_106565.f_20558.f_66[iVar0];
		Global_53676.f_217[iVar0 /*3*/][0] = Global_106565.f_20558.f_77[iVar0];
		Global_53676.f_248[iVar0 /*3*/][0] = Global_106565.f_20558.f_88[iVar0];
		if (!bParam0)
		{
			Global_53676[iVar0 /*3*/][1] = Global_106565.f_20558[iVar0];
			Global_53676.f_31[iVar0 /*3*/][1] = Global_106565.f_20558.f_11[iVar0];
			Global_53676.f_62[iVar0 /*3*/][1] = Global_106565.f_20558.f_22[iVar0];
			Global_53676.f_93[iVar0 /*3*/][1] = Global_106565.f_20558.f_33[iVar0];
			Global_53676.f_124[iVar0 /*3*/][1] = Global_106565.f_20558.f_44[iVar0];
			Global_53676.f_155[iVar0 /*3*/][1] = Global_106565.f_20558.f_55[iVar0];
			Global_53676.f_186[iVar0 /*3*/][1] = Global_106565.f_20558.f_66[iVar0];
			Global_53676.f_217[iVar0 /*3*/][1] = Global_106565.f_20558.f_77[iVar0];
			Global_53676.f_248[iVar0 /*3*/][1] = Global_106565.f_20558.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_156(int iParam0)
{
	var uVar0;
	
	uVar0 = Global_53668[iParam0];
	switch (iParam0)
	{
		case 0:
			STAT_SET_INT(joaat("sp0_total_cash"), uVar0, 1);
			break;
		
		case 1:
			STAT_SET_INT(joaat("sp1_total_cash"), uVar0, 1);
			break;
		
		case 2:
			STAT_SET_INT(joaat("sp2_total_cash"), uVar0, 1);
			break;
	}
}

void func_157(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_162(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_162(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_162(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_162(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_160(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_160(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_160(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_160(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_160(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_160(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_106565.f_20558.f_471, iParam0))
		{
			bVar0 = true;
			CLEAR_BIT(&(Global_106565.f_20558.f_471), iParam0);
		}
	}
	else if (IS_BIT_SET(Global_106565.f_20558.f_471, iParam0) || IS_BIT_SET(Global_2097152[func_159() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar0 = true;
		CLEAR_BIT(&(Global_106565.f_20558.f_471), iParam0);
		CLEAR_BIT(&(Global_2097152[func_159() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_158(iParam0));
		_SET_NOTIFICATION_MESSAGE(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_158(int iParam0)
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
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_159()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_161(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_161(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_25();
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

int func_162(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	
	if (iParam2 == -1)
	{
		iParam2 = func_25();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = _GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - _0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = _GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - _0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = _GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - _0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = _GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - _0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = _GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - _0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = _GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - _0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = _GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - _0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = _GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - _0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = _GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - _0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = _GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - _0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = _GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - _0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = _GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - _0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - _0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - _0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - _0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = _GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - _0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = _GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - _0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = _GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - _0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = _GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - _0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar20, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_163(int iParam0)
{
	func_172(93, iParam0);
	func_172(29, iParam0);
	func_172(30, iParam0);
}

int func_164(int iParam0)
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
	
	if (iParam0 == 8)
	{
		return func_166(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_166(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_166(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_166(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = GET_CLOUD_TIME_AS_INT();
		iVar1 = func_165(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = GET_CLOUD_TIME_AS_INT();
		iVar3 = func_165(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = GET_CLOUD_TIME_AS_INT();
		iVar5 = func_165(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = GET_CLOUD_TIME_AS_INT();
		iVar7 = func_165(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = GET_CLOUD_TIME_AS_INT();
		iVar9 = func_165(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = GET_CLOUD_TIME_AS_INT();
		iVar11 = func_165(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		return IS_BIT_SET(Global_106565.f_20558.f_471, iParam0);
	}
	return IS_BIT_SET(Global_2097152[func_159() /*10778*/].f_6165.f_10, iParam0);
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2539502[iParam0 /*3*/][func_161(iParam1)];
	if (STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_166(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_25();
	}
	iVar1 = func_168(iParam0, iParam1);
	uVar2 = func_167(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_167(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - _0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - _0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - _0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - _0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - _0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - _0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - _0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - _0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - _0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - _0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - _0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - _0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - _0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - _0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - _0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - _0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - _0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - _0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - _0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
	}
	return iVar0;
}

int func_168(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_25();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = _GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = _GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = _GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = _GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = _GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = _GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	return iVar0;
}

int func_169(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_170(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_137(27, 1);
	return 1;
}

int func_170(int iParam0, int iParam1)
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
	iVar0 = _GET_ACHIEVEMENT_PROGRESSION(iParam0);
	if (iParam1 > iVar0)
	{
		return _SET_ACHIEVEMENT_PROGRESSION(iParam0, iParam1);
	}
	return 0;
}

void func_171(int iParam0, int iParam1)
{
	int iVar0;
	
	STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STAT_SET_INT(iParam0, iVar0, 1);
}

void func_172(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/])
	{
		STAT_GET_INT(Global_52236[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STAT_SET_INT(Global_52236[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_173()
{
	int iVar0;
	
	if (NETWORK_IS_SIGNED_IN())
	{
		STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53668[0] == iVar0)
		{
			Global_53668[0] = iVar0;
		}
		STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53668[1] == iVar0)
		{
			Global_53668[1] = iVar0;
		}
		STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53668[2] == iVar0)
		{
			Global_53668[2] = iVar0;
		}
	}
}

void func_174(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	_PLAY_AMBIENT_SPEECH_WITH_VOICE(uParam0, sParam1, sParam2, func_175(iParam3), 0);
}

int func_175(int iParam0)
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

void func_176()
{
	Global_14732 = 0;
	func_177();
}

void func_177()
{
	RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(0);
		Global_15866 = 6;
	}
}

void func_178(int iParam0)
{
	Global_16877 = iParam0;
}

int func_179()
{
	if (Global_16877 == 1)
	{
		return 1;
	}
	return 0;
}

void func_180()
{
	switch (iLocal_189)
	{
		case 0:
			REQUEST_MODEL(joaat("a_m_o_acult_02"));
			REQUEST_MODEL(joaat("prop_anim_cash_pile_02"));
			REQUEST_ANIM_DICT("random@altruist_cult");
			PREPARE_MUSIC_EVENT("AC_DELIVERED");
			REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
			if ((((HAS_MODEL_LOADED(joaat("a_m_o_acult_02")) && HAS_MODEL_LOADED(joaat("prop_anim_cash_pile_02"))) && HAS_ANIM_DICT_LOADED("random@altruist_cult")) && PREPARE_MUSIC_EVENT("AC_DELIVERED")) && HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle")))
			{
				if (Global_106565.f_24989.f_5 == 0)
				{
					sLocal_409 = "ACULT_HI";
					sLocal_403 = "cult_p2_guard";
					sLocal_405 = "cult_p2_trv";
					sLocal_406 = "cult_p2_victim";
					sLocal_408 = "cult_p2_cam";
					fLocal_185 = 0.8f;
					fLocal_184 = 0.968f;
				}
				else if (Global_106565.f_24989.f_5 == 1)
				{
					sLocal_409 = "ACULT_LEAVE3";
					sLocal_403 = "cult_p4_guard";
					sLocal_405 = "cult_p4_trv";
					sLocal_406 = "cult_p4_victim";
					sLocal_408 = "cult_p4_cam";
					fLocal_185 = 0.77f;
					fLocal_184 = 0.999f;
				}
				else if (Global_106565.f_24989.f_5 == 2)
				{
					sLocal_409 = "ACULT_LEAVE3";
					sLocal_403 = "cult_p4_guard";
					sLocal_405 = "cult_p4_trv";
					sLocal_406 = "cult_p4_victim";
					sLocal_408 = "cult_p4_cam";
					fLocal_185 = 0.77f;
					fLocal_184 = 0.999f;
				}
				else if (Global_106565.f_24989.f_5 >= 3)
				{
					sLocal_409 = "ACULT_CAPT";
					sLocal_403 = "cult_p7_guard_01";
					sLocal_404 = "cult_p7_guard_02";
					sLocal_405 = "cult_p7_trv";
					sLocal_406 = "cult_p7_victim_01";
					sLocal_408 = "cult_p7_cam";
					fLocal_185 = 0.98f;
					fLocal_184 = 0.98f;
					REQUEST_MODEL(-2022916910);
					REQUEST_MODEL(-1322183878);
					REQUEST_MODEL(joaat("prop_box_wood05a"));
					REQUEST_MODEL(joaat("prop_security_case_01"));
					if (!IS_CUTSCENE_ACTIVE())
					{
						REQUEST_CUTSCENE("ac_ig_3_p3_b", 8);
					}
				}
				if (DOES_BLIP_EXIST(uLocal_228))
				{
					REMOVE_BLIP(&uLocal_228);
				}
				func_21(1, 1, 1, 0, 0, 0);
				SET_PLAYER_CONTROL(PLAYER_ID(), 0, 0);
				CLEAR_HELP(1);
				DISPLAY_HUD(0);
				DISPLAY_RADAR(0);
				HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER_PED_ID(), 1);
				SET_CURRENT_PED_WEAPON(PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				TRIGGER_MUSIC_EVENT("AC_DELIVERED");
				if (func_179())
				{
					func_178(0);
				}
				func_176();
				WAIT(0);
				if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
				{
					uLocal_213 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
					if (IS_VEHICLE_DRIVEABLE(uLocal_213, 0))
					{
						if (IS_VEHICLE_STOPPED(uLocal_213))
						{
							iLocal_189++;
						}
					}
				}
				else
				{
					uLocal_213 = GET_PLAYERS_LAST_VEHICLE();
					if (!IS_PED_INJURED(uLocal_193[0]))
					{
						CLEAR_PED_TASKS(uLocal_193[0]);
						REMOVE_PED_FROM_GROUP(uLocal_193[0]);
					}
					iLocal_189++;
				}
			}
			break;
		
		case 1:
			if (DOES_ENTITY_EXIST(uLocal_213))
			{
				if (!IS_ENTITY_A_MISSION_ENTITY(uLocal_213))
				{
					SET_ENTITY_AS_MISSION_ENTITY(uLocal_213, 1, 0);
				}
				if (IS_ENTITY_AT_COORD(uLocal_213, vLocal_120, 13f, 13f, 13f, 0, 1, 0))
				{
					SET_ENTITY_COORDS(uLocal_213, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!IS_ENTITY_DEAD(uLocal_213, 0))
					{
						SET_ENTITY_HEADING(uLocal_213, 149.8882f);
						SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_213, 1084227584);
					}
				}
			}
			CLEAR_AREA(vLocal_120, 12f, 1, 0, 0, 0);
			SET_ENTITY_COORDS(PLAYER_PED_ID(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			SET_ENTITY_HEADING(PLAYER_PED_ID(), 128.2065f);
			if (!IS_PED_INJURED(uLocal_193[0]))
			{
				SET_ENTITY_COORDS(uLocal_193[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				SET_ENTITY_HEADING(uLocal_193[0], 128.2065f);
			}
			iLocal_196[0] = CREATE_PED(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_97(&uLocal_411, 1, iLocal_196[0], "ACULTMember1", 0, 1);
			if (Global_106565.f_24989.f_5 >= 3)
			{
				iLocal_196[1] = CREATE_PED(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_97(&uLocal_411, 2, iLocal_196[1], "ACULTMember2", 0, 1);
			}
			func_97(&uLocal_411, 0, PLAYER_PED_ID(), "TREVOR", 0, 1);
			func_97(&uLocal_411, 3, 0, "ACULTMaster", 0, 1);
			func_97(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
			if (Global_106565.f_24989.f_5 != 1 && Global_106565.f_24989.f_5 != 2)
			{
				func_98(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
			}
			SETTIMERB(0);
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_196[0], 1);
			uLocal_214 = CREATE_OBJECT(joaat("prop_anim_cash_pile_02"), vLocal_117, 1, 1, 0);
			uLocal_215 = CREATE_WEAPON_OBJECT(joaat("weapon_assaultrifle"), -1, GET_ENTITY_COORDS(iLocal_196[0], 1), 1, 1065353216, 0, 0, 1);
			ATTACH_ENTITY_TO_ENTITY(uLocal_215, iLocal_196[0], GET_PED_BONE_INDEX(iLocal_196[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_106565.f_24989.f_5 < 3)
			{
				if (Global_106565.f_24989.f_5 == 0)
				{
					ATTACH_ENTITY_TO_ENTITY(uLocal_214, PLAYER_PED_ID(), GET_PED_BONE_INDEX(PLAYER_PED_ID(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					ATTACH_ENTITY_TO_ENTITY(uLocal_214, PLAYER_PED_ID(), GET_PED_BONE_INDEX(PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			else if (Global_106565.f_24989.f_5 >= 3)
			{
				GIVE_WEAPON_TO_PED(iLocal_196[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_246 = CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
			uLocal_188 = CREATE_SYNCHRONIZED_SCENE(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			TASK_SYNCHRONIZED_SCENE(PLAYER_PED_ID(), uLocal_188, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1148846080, 0);
			TASK_SYNCHRONIZED_SCENE(iLocal_196[0], uLocal_188, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_106565.f_24989.f_5 >= 3)
			{
				TASK_SYNCHRONIZED_SCENE(iLocal_196[1], uLocal_188, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_246, uLocal_188, sLocal_408, "random@altruist_cult");
			RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			if (!IS_PED_INJURED(uLocal_193[0]))
			{
				TASK_SYNCHRONIZED_SCENE(uLocal_193[0], uLocal_188, "random@altruist_cult", sLocal_406, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_189++;
			break;
		
		case 2:
			if (!IS_PED_INJURED(uLocal_193[0]))
			{
				if (IS_PED_MALE(uLocal_193[0]))
				{
					func_174(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_174(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (TIMERB() > 2000 && TIMERB() < 2100)
			{
				if (Global_106565.f_24989.f_5 == 1 || Global_106565.f_24989.f_5 == 2)
				{
					if (!func_108())
					{
						func_98(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
					}
				}
			}
			if (GET_SYNCHRONIZED_SCENE_PHASE(uLocal_188) > fLocal_185)
			{
				iLocal_189++;
			}
			break;
		
		case 3:
			if (!IS_PED_INJURED(uLocal_193[0]))
			{
				if (IS_PED_MALE(uLocal_193[0]))
				{
					func_174(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_174(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (Global_106565.f_24989.f_5 == 1 || Global_106565.f_24989.f_5 == 2)
			{
				if ((GET_SYNCHRONIZED_SCENE_PHASE(uLocal_188) > 0.9742857f && !iLocal_181) && GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					_START_SCREEN_EFFECT("CamPushInNeutral", 0, 0);
					PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_181 = 1;
				}
			}
			if (GET_SYNCHRONIZED_SCENE_PHASE(uLocal_188) > fLocal_184)
			{
				iLocal_189++;
			}
			break;
		
		case 4:
			if (Global_106565.f_24989.f_5 < 3)
			{
				if (Global_106565.f_24989.f_5 != 1 && Global_106565.f_24989.f_5 != 2)
				{
					func_128();
					if (DOES_ENTITY_EXIST(iLocal_196[0]))
					{
						DELETE_PED(&(iLocal_196[0]));
					}
					if (DOES_ENTITY_EXIST(iLocal_196[1]))
					{
						DELETE_PED(&(iLocal_196[1]));
					}
				}
				else
				{
					SETTIMERB(0);
					if (DOES_ENTITY_EXIST(iLocal_196[0]))
					{
						SET_ENTITY_VISIBLE(iLocal_196[0], 0, 0);
					}
					if (DOES_ENTITY_EXIST(iLocal_196[1]))
					{
						SET_ENTITY_VISIBLE(iLocal_196[1], 0, 0);
					}
					if (DOES_ENTITY_EXIST(uLocal_193[0]))
					{
						SET_ENTITY_VISIBLE(uLocal_193[0], 0, 0);
					}
					iLocal_189++;
				}
				if (DOES_ENTITY_EXIST(uLocal_214))
				{
					DELETE_OBJECT(&uLocal_214);
				}
				if (DOES_ENTITY_EXIST(uLocal_215))
				{
					DELETE_OBJECT(&uLocal_215);
				}
				CLEAR_PED_TASKS(PLAYER_PED_ID());
				if (Global_106565.f_24989.f_5 == 0)
				{
					FORCE_PED_MOTION_STATE(PLAYER_PED_ID(), -668482597, 0, 0, 0);
					SIMULATE_PLAYER_INPUT_GAIT(PLAYER_ID(), 1f, 750, 0, 1, 0);
				}
				if (ARE_STRINGS_EQUAL(sLocal_408, "cult_p4_cam"))
				{
					RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
				else
				{
					_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
				}
				SET_CAM_ACTIVE(uLocal_246, 0);
				func_21(0, 1, 1, 0, 0, 0);
				SET_PLAYER_CONTROL(PLAYER_ID(), 1, 0);
				DISPLAY_HUD(1);
				DISPLAY_RADAR(1);
				HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER_PED_ID(), 0);
				SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				func_153(func_14(), 1, 1000, 0, 0);
			}
			if (Global_106565.f_24989.f_5 != 1 && Global_106565.f_24989.f_5 != 2)
			{
				TRIGGER_MUSIC_EVENT("AC_DONE");
				Global_106565.f_24989.f_5++;
				iLocal_174 = 1;
			}
			break;
		
		case 5:
			if (!func_108() || TIMERB() > 7000)
			{
				func_128();
				if (DOES_ENTITY_EXIST(iLocal_196[0]))
				{
					DELETE_PED(&(iLocal_196[0]));
				}
				if (DOES_ENTITY_EXIST(iLocal_196[1]))
				{
					DELETE_PED(&(iLocal_196[1]));
				}
				TRIGGER_MUSIC_EVENT("AC_DONE");
				Global_106565.f_24989.f_5++;
				iLocal_174 = 1;
			}
			break;
	}
}

void func_181()
{
	if (func_183())
	{
		if (func_14() == 2)
		{
			if (DOES_GROUP_EXIST(func_182()))
			{
				GET_GROUP_SIZE(func_182(), &uLocal_186, &iLocal_187);
				if (iLocal_187 == 1)
				{
					uLocal_193[0] = GET_PED_AS_GROUP_MEMBER(func_182(), 0);
					if (IS_ENTITY_AT_COORD(uLocal_193[0], vLocal_120, 5f, 5f, 5f, 0, 1, 0))
					{
						if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
						{
							if (!IS_ENTITY_DEAD(GET_PLAYERS_LAST_VEHICLE(), 0))
							{
								_SET_VEHICLE_HALT(GET_PLAYERS_LAST_VEHICLE(), 10.5f, 5, 0);
							}
						}
						SETTIMERA(0);
						iLocal_50 = 1;
					}
				}
				else if (iLocal_187 == 2)
				{
					uLocal_193[0] = GET_PED_AS_GROUP_MEMBER(func_182(), 0);
					uLocal_193[1] = GET_PED_AS_GROUP_MEMBER(func_182(), 1);
					if (IS_ENTITY_AT_COORD(uLocal_193[0], vLocal_120, 5f, 5f, 5f, 0, 1, 0) && IS_ENTITY_AT_COORD(uLocal_193[1], vLocal_120, 5f, 5f, 5f, 0, 1, 0))
					{
						if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
						{
							if (!IS_ENTITY_DEAD(GET_PLAYERS_LAST_VEHICLE(), 0))
							{
								_SET_VEHICLE_HALT(GET_PLAYERS_LAST_VEHICLE(), 10.5f, 5, 0);
							}
						}
						SETTIMERA(0);
						iLocal_50 = 1;
					}
				}
			}
		}
	}
}

var func_182()
{
	return GET_PLAYER_GROUP(GET_PLAYER_INDEX());
}

bool func_183()
{
	return Global_26000;
}

void func_184()
{
	if (func_187())
	{
		if (iLocal_400 == 0)
		{
			iLocal_400 = ADD_SCENARIO_BLOCKING_AREA(vLocal_117 - Vector(100f, 60f, 80f), vLocal_117 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
		}
		while (GET_DISTANCE_BETWEEN_COORDS(func_93(PLAYER_ID()), vLocal_117, 1) < 209f)
		{
			WAIT(0);
		}
	}
	if (func_14() == 0 || func_14() == 1)
	{
		if (GET_RELATIONSHIP_BETWEEN_GROUPS(2017343592, 1862763509) != 5)
		{
			if (func_186())
			{
				SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, 1862763509);
			}
			else if (func_185())
			{
				SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, 1862763509);
			}
		}
	}
	else if (func_14() == 2)
	{
		if (GET_RELATIONSHIP_BETWEEN_GROUPS(2017343592, 1862763509) != 5)
		{
			if (func_186())
			{
				if (IS_PED_SHOOTING(PLAYER_PED_ID()) || (IS_PED_IN_MELEE_COMBAT(PLAYER_PED_ID()) && IS_PLAYER_TARGETTING_ANYTHING(PLAYER_ID())))
				{
					SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, 1862763509);
				}
			}
			else if (func_185())
			{
				SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, 1862763509);
			}
			else if (GET_RELATIONSHIP_BETWEEN_GROUPS(2017343592, 1862763509) != 1)
			{
				SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, 1862763509);
			}
		}
	}
	if (func_186())
	{
		if (iLocal_179)
		{
			if (!IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER_ID(), 3))
			{
				TRIGGER_MUSIC_EVENT("AC_START");
			}
			SET_WANTED_LEVEL_MULTIPLIER(0f);
			SET_STATIC_EMITTER_ENABLED("COUNTRYSIDE_ALTRUIST_CULT_01", 1);
			if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Global_35548[9 /*31*/].f_2, 6f, Global_35548[9 /*31*/].f_5, 0))
			{
				SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Global_35548[9 /*31*/].f_5, Global_35548[9 /*31*/].f_2, 0, 0f, 0);
			}
			if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Global_35548[10 /*31*/].f_2, 6f, Global_35548[10 /*31*/].f_5, 0))
			{
				SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Global_35548[10 /*31*/].f_5, Global_35548[10 /*31*/].f_2, 0, 0f, 0);
			}
			bLocal_180 = true;
			iLocal_179 = 0;
		}
	}
	else if (!iLocal_179)
	{
		if (AUDIO_IS_SCRIPTED_MUSIC_PLAYING())
		{
			TRIGGER_MUSIC_EVENT("AC_END");
		}
		SET_WANTED_LEVEL_MULTIPLIER(1f);
		SET_STATIC_EMITTER_ENABLED("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		if (!bLocal_180)
		{
			func_150();
		}
		iLocal_179 = 1;
	}
}

int func_185()
{
	if ((((((IS_BULLET_IN_ANGLED_AREA(vLocal_123, vLocal_126, fLocal_129, 1) || IS_BULLET_IN_ANGLED_AREA(vLocal_130, vLocal_133, fLocal_136, 1)) || IS_BULLET_IN_ANGLED_AREA(vLocal_137, vLocal_140, fLocal_143, 1)) || IS_BULLET_IN_ANGLED_AREA(vLocal_144, vLocal_147, fLocal_150, 1)) || IS_BULLET_IN_ANGLED_AREA(vLocal_151, vLocal_154, fLocal_157, 1)) || IS_BULLET_IN_ANGLED_AREA(vLocal_158, vLocal_161, fLocal_164, 1)) || IS_BULLET_IN_ANGLED_AREA(vLocal_165, vLocal_168, fLocal_171, 1))
	{
		return 1;
	}
	return 0;
}

int func_186()
{
	if ((((((IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), vLocal_123, vLocal_126, fLocal_129, 0, 1, 0) || IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), vLocal_130, vLocal_133, fLocal_136, 0, 1, 0)) || IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), vLocal_137, vLocal_140, fLocal_143, 0, 1, 0)) || IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), vLocal_144, vLocal_147, fLocal_150, 0, 1, 0)) || IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), vLocal_151, vLocal_154, fLocal_157, 0, 1, 0)) || IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), vLocal_158, vLocal_161, fLocal_164, 0, 1, 0)) || IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), vLocal_165, vLocal_168, fLocal_171, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_187()
{
	if (Global_106565.f_24989.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_188()
{
	SET_RELATIONSHIP_BETWEEN_GROUPS(255, 2017343592, 1862763509);
	if (Global_106565.f_24989.f_5 >= iLocal_192 && Global_106565.f_24989.f_5 != 1000)
	{
		if (bLocal_172)
		{
			func_1(1);
			func_10();
			func_3(0);
			iLocal_50 = 3;
		}
		else
		{
			func_189(&uLocal_249);
			Global_88969 = 0;
			Global_88970 = 0;
			Global_88971 = 0;
			func_13(0, 1);
			func_11(0, 1);
			func_2(0);
			SET_FADE_OUT_AFTER_DEATH(1);
			_DISABLE_AUTOMATIC_RESPAWN(0);
			IGNORE_NEXT_RESTART(0);
			func_3(0);
			SET_WANTED_LEVEL_MULTIPLIER(1f);
			ENABLE_DISPATCH_SERVICE(3, 1);
			ENABLE_DISPATCH_SERVICE(5, 1);
			CLEAR_WEATHER_TYPE_PERSIST();
			iLocal_179 = 0;
			func_94();
			Global_106565.f_24989.f_5 = (iLocal_192 - 1);
			TERMINATE_THIS_THREAD();
		}
	}
	else
	{
		REMOVE_SCENARIO_BLOCKING_AREAS();
		func_189(&uLocal_249);
		Global_88969 = 0;
		Global_88970 = 0;
		Global_88971 = 0;
		func_13(0, 1);
		func_11(0, 1);
		func_2(0);
		SET_FADE_OUT_AFTER_DEATH(1);
		_DISABLE_AUTOMATIC_RESPAWN(0);
		IGNORE_NEXT_RESTART(0);
		func_3(0);
		if (HAS_SCALEFORM_MOVIE_LOADED(uLocal_399))
		{
			SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_399);
			func_96(0);
		}
		SET_WANTED_LEVEL_MULTIPLIER(1f);
		ENABLE_DISPATCH_SERVICE(3, 1);
		ENABLE_DISPATCH_SERVICE(5, 1);
		CLEAR_WEATHER_TYPE_PERSIST();
		iLocal_179 = 0;
		TERMINATE_THIS_THREAD();
	}
}

void func_189(var uParam0)
{
	if (HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		*uParam0 = 0;
	}
}

