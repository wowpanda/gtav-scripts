#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	struct<4> Local_49[10];
	bool bLocal_90 = 0;
	vector3 vLocal_91 = { 0f, 0f, 0f };
	int iLocal_94 = 0;
	vector3 vLocal_95 = { 0f, 0f, 0f };
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	var uLocal_117 = 0;
	vector3 vLocal_118 = { 0f, 0f, 0f };
	vector3 vLocal_121 = { 0f, 0f, 0f };
	float fLocal_124 = 0f;
	float fLocal_125 = 0f;
	vector3 vLocal_126 = { 0f, 0f, 0f };
	vector3 vLocal_129 = { 0f, 0f, 0f };
	bool bLocal_132 = 0;
	int iLocal_133 = 0;
	float fLocal_134 = 0f;
	float fLocal_135 = 0f;
	var uLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	var uLocal_141 = 0;
	bool bLocal_142 = 0;
	int iLocal_143 = 0;
	char[] cLocal_144[8] = 0;
	char[] cLocal_145[8] = 0;
	char* sLocal_146 = NULL;
	bool bLocal_147 = 0;
	bool bLocal_148 = 0;
	var uLocal_149 = 0;
	int iLocal_150 = 0;
	bool bLocal_151 = 0;
	bool bLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	struct<10> Local_159[16];
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	char* sLocal_324 = NULL;
	char* sLocal_325 = NULL;
	char* sLocal_326 = NULL;
	char* sLocal_327 = NULL;
	char* sLocal_328 = NULL;
	char* sLocal_329 = NULL;
	char* sLocal_330 = NULL;
	char* sLocal_331 = NULL;
	char[] cLocal_332[8] = 0;
	char* sLocal_333 = NULL;
	char* sLocal_334 = NULL;
	char[] cLocal_335[8] = 0;
	char* sLocal_336 = NULL;
	char* sLocal_337 = NULL;
	int iLocal_338 = 0;
	bool bLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	bool bLocal_342 = 0;
	int iLocal_343 = 0;
	float fLocal_344 = 0f;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	vector3 vLocal_348 = { 0f, 0f, 0f };
	vector3 vLocal_351 = { 0f, 0f, 0f };
	vector3 vLocal_354 = { 0f, 0f, 0f };
	float fLocal_357 = 0f;
	vector3 vLocal_358 = { 0f, 0f, 0f };
	float fLocal_361 = 0f;
	char[] cLocal_362[8] = 0;
	char* sLocal_363 = NULL;
	char* sLocal_364 = NULL;
	char* sLocal_365 = NULL;
	char* sLocal_366 = NULL;
	char* sLocal_367 = NULL;
	char[] cLocal_368[8] = 0;
	char* sLocal_369 = NULL;
	char* sLocal_370 = NULL;
	char* sLocal_371 = NULL;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = -1;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 1000;
	var uLocal_382 = 1000;
	var uLocal_383 = 0;
	struct<147> Local_384 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_531 = 1;
	struct<18> ScriptParam_0 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	uLocal_46 = _0x4A9923385BDB9DAD();
	uLocal_47 = _GET_BLIP_INFO_ID_ITERATOR();
	iLocal_109 = 3;
	bLocal_132 = true;
	cLocal_144 = "RANDOM@ATMROBBERYGEN";
	cLocal_145 = "RANDOM@ATMROBBERYGEN";
	iLocal_153 = joaat("prop_ld_wallet_01_s");
	iLocal_154 = joaat("prop_ld_wallet_01_s");
	iLocal_345 = 500;
	iLocal_346 = -1;
	iLocal_347 = -1;
	fLocal_357 = 0f;
	fLocal_361 = 0f;
	vLocal_95 = { ScriptParam_0.f_1[0 /*3*/] };
	uLocal_98 = ScriptParam_0.f_17[0];
	if (HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (bLocal_147)
		{
			bLocal_148 = true;
			func_289(0);
		}
		else
		{
			func_271();
		}
	}
	if (VDIST(vLocal_95, -203.758f, -861.738f, 29.2684f) < 5f)
	{
		iLocal_109 = 1;
	}
	else if (VDIST(vLocal_95, -2957.61f, 488.29f, 14.47f) < 5f)
	{
		iLocal_109 = 1;
	}
	else if (VDIST(vLocal_95, 288.973f, -1256.79f, 28.4407f) < 5f)
	{
		iLocal_109 = 2;
	}
	else if (VDIST(vLocal_95, -3043.93f, 594.84f, 6.6115f) < 5f)
	{
		iLocal_109 = 3;
	}
	else if (VDIST(vLocal_95, 174.715f, 6637.77f, 30.5733f) < 5f)
	{
		iLocal_109 = 4;
	}
	else
	{
		iLocal_109 = 5;
	}
	if (func_229(vLocal_95, 1, iLocal_109, 1, 0))
	{
		func_226(-1);
	}
	else
	{
		TERMINATE_THIS_THREAD();
	}
	SETTIMERA(0);
	func_225();
	while (true)
	{
		WAIT(0);
		func_224();
		func_223(uLocal_102, &uLocal_108);
		func_220(&Local_384);
		if (IS_PLAYER_PLAYING(PLAYER_ID()))
		{
			SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER_ID());
		}
		if (!func_217())
		{
			if (func_216())
			{
				func_271();
			}
			if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_94)
				{
					case 0:
						if (func_190())
						{
							iLocal_94 = 1;
						}
						break;
					
					case 1:
						func_189();
						if (iLocal_113 == 0)
						{
							iLocal_113 = ADD_SHOCKING_EVENT_AT_POSITION(99, vLocal_95, 30000f);
						}
						if (DOES_ENTITY_EXIST(iLocal_99))
						{
						}
						if (DOES_ENTITY_EXIST(iLocal_100))
						{
						}
						if (!IS_PED_INJURED(iLocal_99))
						{
							if (IS_PED_INJURED(iLocal_100))
							{
								TASK_SMART_FLEE_COORD(iLocal_99, vLocal_95, 200f, -1, 0, 0);
								SET_PED_KEEP_TASK(iLocal_99, 1);
								WAIT(0);
								func_271();
							}
							if (!IS_PED_INJURED(iLocal_100))
							{
								if (IS_SPHERE_VISIBLE(vLocal_95, 2.5f))
								{
									if (iLocal_109 == 2)
									{
										if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_100, 120f, 120f, 8f, 0, 1, 0) || func_188())
										{
											func_179();
										}
									}
									else if (iLocal_109 == 1)
									{
										if (VDIST(vLocal_95, -203.758f, -861.738f, 29.2684f) < 5f)
										{
											if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_100, 100f, 100f, 8f, 0, 1, 0) || func_188())
											{
												func_179();
											}
										}
										else if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_100, 170f, 170f, 8f, 0, 1, 0) || func_188())
										{
											func_179();
										}
									}
									else if (VDIST(vLocal_95, -3044.06f, 594.93f, 6.74f) < 5f)
									{
										if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_100, 65f, 65f, 5f, 0, 1, 0) || func_188())
										{
											func_179();
										}
									}
									else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -712.9f, -819.32f, 22.73f, 1) < 5f)
									{
										if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_100, 50f, 50f, 5f, 0, 1, 0) || func_188())
										{
											func_179();
										}
									}
									else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, 24.13f, -946.84f, 28.36f, 1) < 5f)
									{
										if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_100, 60f, 60f, 5f, 0, 1, 0) || func_188())
										{
											func_179();
										}
									}
									else if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_100, 30f, 30f, 8f, 0, 1, 0) || func_188())
									{
										func_179();
									}
								}
							}
						}
						else
						{
							if (Local_159[2 /*10*/].f_7)
							{
								func_178(&Local_159, 2);
							}
							if (!IS_PED_INJURED(iLocal_100))
							{
								TASK_SMART_FLEE_COORD(iLocal_100, vLocal_95, 200f, -1, 0, 0);
								SET_PED_KEEP_TASK(iLocal_100, 1);
								WAIT(0);
							}
							func_271();
						}
						break;
				}
			}
			else
			{
				func_176("IF NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()\n");
				func_271();
			}
		}
		else
		{
			if (DOES_ENTITY_EXIST(iLocal_99))
			{
				if (!IS_PED_INJURED(iLocal_99))
				{
					if (func_175(iLocal_99, -251125078))
					{
						if (func_174(iLocal_99, vLocal_95, 1) >= 190f)
						{
							CLEAR_PED_TASKS(iLocal_99);
							TASK_SMART_FLEE_PED(iLocal_99, PLAYER_PED_ID(), 300f, -1, 0, 0);
						}
					}
					else if (func_175(iLocal_99, -982327190))
					{
						CLEAR_PED_TASKS(iLocal_99);
						TASK_SMART_FLEE_PED(iLocal_99, PLAYER_PED_ID(), 300f, -1, 0, 0);
					}
				}
			}
			if (DOES_ENTITY_EXIST(iLocal_100))
			{
			}
			if (GET_GAME_TIMER() > iLocal_110 + 3000)
			{
				func_144();
			}
			if (!IS_PED_INJURED(PLAYER_PED_ID()))
			{
				if (!func_124() && !func_121())
				{
					_0x36F1B38855F2A8DF(PLAYER_ID());
					if (!iLocal_137 && !bLocal_142)
					{
						if (DOES_ENTITY_EXIST(iLocal_100))
						{
							if (VDIST(GET_ENTITY_COORDS(iLocal_100, 0), -2956.26f, 487.97f, 15.46f) < 5f)
							{
								if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_100, 100f, 100f, 15f, 0, 1, 0))
								{
									if (func_119(&Local_159, cLocal_335, sLocal_327, 3, 0, 0, 0))
									{
										iLocal_137 = 1;
									}
								}
							}
							else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -203.72f, -861.8f, 29.27f, 1) < 5f)
							{
								if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_100, 40f, 40f, 15f, 0, 1, 0))
								{
									if (func_119(&Local_159, cLocal_335, sLocal_327, 3, 0, 0, 0))
									{
										iLocal_137 = 1;
									}
								}
							}
							else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, 288.46f, -1256.71f, 28.44f, 1) < 5f)
							{
								if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_100, 50f, 50f, 15f, 0, 1, 0))
								{
									if (func_119(&Local_159, cLocal_335, sLocal_327, 3, 0, 0, 0))
									{
										iLocal_137 = 1;
									}
								}
							}
							else if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_100, 50f, 50f, 15f, 0, 1, 0))
							{
								if (func_119(&Local_159, cLocal_335, sLocal_327, 3, 0, 0, 0))
								{
									iLocal_137 = 1;
								}
							}
						}
					}
					if (DOES_BLIP_EXIST(uLocal_103))
					{
						if (!IS_PED_INJURED(iLocal_99))
						{
							if (iLocal_338)
							{
								if (IS_ENTITY_AT_ENTITY(iLocal_99, PLAYER_PED_ID(), fLocal_344, fLocal_344, fLocal_344, 0, 1, 0))
								{
									if (!IS_PED_IN_ANY_VEHICLE(iLocal_99, 0))
									{
										if (TIMERA() > 1000)
										{
											if (IS_PLAYER_TARGETTING_ENTITY(PLAYER_ID(), iLocal_99))
											{
												fLocal_344 = VDIST(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), GET_ENTITY_COORDS(iLocal_99, 1));
												fLocal_344 = (fLocal_344 * 1.5f);
												SETTIMERA(0);
											}
											SET_PED_COMBAT_ATTRIBUTES(iLocal_99, 17, 0);
										}
									}
								}
								else if (!iLocal_340)
								{
									if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_99, 25f, 25f, 25f, 0, 1, 0))
									{
										if (!IS_PED_IN_ANY_VEHICLE(iLocal_99, 0))
										{
											SET_PED_COMBAT_ATTRIBUTES(iLocal_99, 17, 1);
											SET_PED_COMBAT_ATTRIBUTES(iLocal_99, 13, 0);
											func_118();
											iLocal_340 = 1;
										}
									}
								}
							}
							else if (!iLocal_139)
							{
								if ((IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER_ID(), iLocal_99) || IS_PLAYER_TARGETTING_ENTITY(PLAYER_ID(), iLocal_99)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_99, PLAYER_PED_ID(), 0))
								{
									func_119(&Local_159, cLocal_335, sLocal_325, 4, 0, 0, 0);
									SETTIMERA(0);
									fLocal_344 = VDIST(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), GET_ENTITY_COORDS(iLocal_99, 1));
									fLocal_344 = (fLocal_344 * 1.5f);
									iLocal_338 = 1;
									iLocal_139 = 1;
								}
								if (IS_VEHICLE_DRIVEABLE(uLocal_117, 0))
								{
									if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_117, PLAYER_PED_ID(), 1))
									{
										SET_PED_COMBAT_ATTRIBUTES(iLocal_99, 17, 0);
										if (IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_99))
										{
											TASK_VEHICLE_MISSION_PED_TARGET(iLocal_99, uLocal_117, PLAYER_PED_ID(), 8, 35f, 4, 10f, 10f, 1);
										}
										else
										{
											TASK_SMART_FLEE_PED(iLocal_99, PLAYER_PED_ID(), 300f, -1, 0, 0);
										}
										func_119(&Local_159, cLocal_335, sLocal_325, 4, 0, 0, 0);
										SETTIMERA(0);
										fLocal_344 = VDIST(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), GET_ENTITY_COORDS(iLocal_99, 1));
										fLocal_344 = (fLocal_344 * 1.5f);
										iLocal_338 = 1;
										iLocal_139 = 1;
									}
								}
							}
							if ((iLocal_340 || iLocal_338) || bLocal_342)
							{
								if (DOES_BLIP_EXIST(uLocal_103))
								{
									if (GET_BLIP_COLOUR(uLocal_103) == 1)
									{
									}
									else
									{
										SET_BLIP_AS_FRIENDLY(uLocal_103, 0);
										SET_BLIP_COLOUR(uLocal_103, 1);
									}
								}
								if (!iLocal_340)
								{
									func_118();
									iLocal_340 = 1;
								}
							}
							else
							{
								if (IS_PED_IN_COMBAT(iLocal_99, PLAYER_PED_ID()))
								{
									bLocal_342 = true;
								}
								func_116(uLocal_103, &uLocal_114);
							}
							if (DOES_ENTITY_EXIST(iLocal_100))
							{
								if (!iLocal_139)
								{
									if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_100, 15f, 15f, 10f, 0, 1, 0))
									{
										if (func_119(&Local_159, cLocal_335, sLocal_328, 4, 0, 0, 0))
										{
											OPEN_SEQUENCE_TASK(&uLocal_105);
											TASK_PLAY_ANIM(0, cLocal_368, sLocal_369, 8f, -4f, -1, 0, 0, 0, 0, 0);
											TASK_PLAY_ANIM(0, cLocal_368, sLocal_370, 8f, -4f, -1, 0, 0, 0, 0, 0);
											TASK_PLAY_ANIM(0, cLocal_368, sLocal_371, 8f, -4f, -1, 0, 0, 0, 0, 0);
											TASK_PLAY_ANIM(0, cLocal_368, sLocal_369, 8f, -4f, -1, 0, 0, 0, 0, 0);
											TASK_PLAY_ANIM(0, cLocal_368, sLocal_370, 8f, -4f, -1, 0, 0, 0, 0, 0);
											TASK_PLAY_ANIM(0, cLocal_368, sLocal_371, 8f, -4f, -1, 1, 0, 0, 0, 0);
											CLOSE_SEQUENCE_TASK(uLocal_105);
											TASK_PERFORM_SEQUENCE(iLocal_100, uLocal_105);
											CLEAR_SEQUENCE_TASK(&uLocal_105);
											SETTIMERA(0);
											iLocal_139 = 1;
										}
									}
								}
								else if (!iLocal_140)
								{
									if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_100, 15f, 15f, 10f, 0, 1, 0))
									{
										if (((!IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER_ID(), iLocal_99) && !IS_PLAYER_TARGETTING_ENTITY(PLAYER_ID(), iLocal_99)) && !IS_PED_SHOOTING(PLAYER_PED_ID())) && func_115(iLocal_100, iLocal_99, 1) > 30f)
										{
											if (func_119(&Local_159, cLocal_335, sLocal_329, 4, 0, 0, 0))
											{
												SETTIMERA(0);
												iLocal_140 = 1;
											}
										}
									}
								}
								else if (!IS_ANY_SPEECH_PLAYING(iLocal_100))
								{
									func_113(iLocal_100, "GENERIC_CURSE_MED", 24);
								}
							}
							if (func_111())
							{
								func_110();
								if (DOES_ENTITY_EXIST(iLocal_100))
								{
									vVar0 = { GET_ENTITY_COORDS(iLocal_100, 1) };
								}
								if (!IS_ENTITY_AT_COORD(iLocal_99, vVar0, 25f, 25f, 25f, 0, 1, 0) && IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_99, 12f, 12f, 12f, 0, 1, 0))
								{
									if (TIMERA() > 20000)
									{
										if (func_109(iLocal_99) && !IS_PED_RAGDOLL(iLocal_99))
										{
											if (func_119(&Local_159, cLocal_335, sLocal_330, 4, 0, 0, 0))
											{
												bLocal_342 = true;
												SETTIMERA(0);
											}
										}
									}
								}
							}
							else if (func_109(iLocal_100))
							{
								if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_100, Global_19, 0, 1, 0))
								{
									if (func_119(&Local_159, cLocal_335, sLocal_333, 4, 0, 0, 0))
									{
										OPEN_SEQUENCE_TASK(&uLocal_105);
										TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER_PED_ID(), 3000);
										TASK_WANDER_STANDARD(0, 1193033728, 0);
										CLOSE_SEQUENCE_TASK(uLocal_105);
										TASK_PERFORM_SEQUENCE(iLocal_100, uLocal_105);
										CLEAR_SEQUENCE_TASK(&uLocal_105);
										bLocal_339 = true;
										func_271();
									}
								}
								else if (bLocal_342)
								{
									if (func_119(&Local_159, cLocal_335, sLocal_334, 4, 0, 0, 0))
									{
										TASK_WANDER_STANDARD(iLocal_100, 1193033728, 0);
										FORCE_PED_MOTION_STATE(iLocal_100, -668482597, 0, 0, 0);
										bLocal_339 = true;
										func_271();
									}
								}
								else
								{
									TASK_WANDER_STANDARD(iLocal_100, 1193033728, 0);
									FORCE_PED_MOTION_STATE(iLocal_100, -668482597, 0, 0, 0);
									bLocal_339 = true;
									func_271();
								}
							}
							else
							{
								bLocal_339 = true;
								func_271();
							}
						}
						else if (func_111())
						{
							if ((IS_PED_INJURED(iLocal_99) || IS_PED_DEAD_OR_DYING(iLocal_99, 1)) || func_175(iLocal_99, -1899872703))
							{
								func_119(&Local_159, cLocal_335, sLocal_337, 4, 0, 0, 0);
								func_106();
								func_178(&Local_159, 2);
								REMOVE_BLIP(&uLocal_103);
							}
						}
					}
					else if (!DOES_BLIP_EXIST(uLocal_102))
					{
						if (bLocal_147)
						{
							if (DOES_BLIP_EXIST(iLocal_104))
							{
								REMOVE_BLIP(&iLocal_104);
							}
							iLocal_104 = 0;
							SET_PLAYER_CONTROL(PLAYER_ID(), 1, 0);
							uLocal_102 = func_102(iLocal_100, 0, 0);
							func_101(&uLocal_108);
							if (DOES_ENTITY_EXIST(iLocal_100))
							{
								fLocal_134 = VDIST(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), GET_ENTITY_COORDS(iLocal_100, 0));
								CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_100);
							}
							if (fLocal_134 > 750f)
							{
								func_289(0);
							}
						}
						else
						{
							func_98();
						}
					}
					else
					{
						if (GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) > 0)
						{
							if (bLocal_147)
							{
								func_289(0);
							}
							else
							{
								func_271();
							}
						}
						if (bLocal_152)
						{
						}
						else
						{
							func_2();
						}
						if (!bLocal_152)
						{
							if (!IS_PED_INJURED(iLocal_100))
							{
								if (VDIST(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), GET_ENTITY_COORDS(iLocal_100, 0)) > (fLocal_134 + 100f))
								{
									if (bLocal_147)
									{
										func_289(0);
									}
									else
									{
										TASK_SMART_FLEE_PED(iLocal_100, PLAYER_PED_ID(), 100f, -1, 0, 0);
										func_271();
									}
								}
								else if (VDIST(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), GET_ENTITY_COORDS(iLocal_100, 0)) < fLocal_134)
								{
									fLocal_134 = VDIST(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), GET_ENTITY_COORDS(iLocal_100, 0));
								}
								if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_100, PLAYER_PED_ID(), 1))
								{
									if (bLocal_147)
									{
										func_289(0);
									}
								}
							}
						}
					}
				}
				else
				{
					func_1();
				}
			}
			else
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	if (!IS_PED_INJURED(iLocal_100))
	{
		TASK_SMART_FLEE_PED(iLocal_100, PLAYER_PED_ID(), 100f, -1, 0, 0);
		func_113(iLocal_100, "GENERIC_FRIGHTENED_HIGH", 24);
		SET_PED_KEEP_TASK(iLocal_100, 1);
		SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_100, 0);
		SET_PED_CAN_BE_TARGETTED(iLocal_100, 1);
		SET_PED_AS_NO_LONGER_NEEDED(&iLocal_100);
	}
	func_98();
	if (bLocal_142)
	{
		if (DOES_BLIP_EXIST(iLocal_104))
		{
			if (DOES_PICKUP_EXIST(uLocal_141))
			{
				if (VDIST(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), GET_PICKUP_COORDS(uLocal_141)) > 100f)
				{
					func_271();
				}
			}
		}
		else if (bLocal_147)
		{
			func_289(0);
		}
		else if (IS_PED_INJURED(iLocal_99))
		{
			func_271();
		}
	}
	if (DOES_BLIP_EXIST(uLocal_103))
	{
		if (IS_PED_INJURED(iLocal_99))
		{
			REMOVE_BLIP(&uLocal_103);
		}
		else if (!func_111())
		{
			func_271();
		}
	}
}

void func_2()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	vector3 vVar19;
	bool bVar22;
	float fVar23;
	var uVar24;
	char cVar25[16];
	char cVar29[16];
	var uVar33;
	int iVar34;
	
	if (!IS_PED_INJURED(iLocal_100))
	{
		if (!bLocal_151)
		{
			if (iLocal_341)
			{
				if (!iLocal_343)
				{
					if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_100, 15f, 15f, 20f, 0, 1, 0))
					{
						func_113(iLocal_100, "GENERIC_HI", 5);
						iLocal_343 = 1;
					}
				}
				if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, 296.13f, -894.01f, 28.23f, 1) < 5f)
				{
					if (fLocal_135 == 6f)
					{
						fLocal_135 = 5f;
					}
				}
				else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -2072.88f, -317.19f, 12.32f, 1) < 5f)
				{
					if (fLocal_135 == 6f)
					{
						fLocal_135 = 4f;
					}
				}
				if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_100, fLocal_135, fLocal_135, fLocal_135, 0, 1, 0) && !func_97())
				{
					if (func_94(2))
					{
						CLEAR_HELP(1);
					}
					if (!func_121())
					{
						if (IS_PLAYER_CONTROL_ON(PLAYER_ID()))
						{
							if (func_93(1, 0, 1))
							{
								if (!IS_BIT_SET(Global_2423, 11) || func_92())
								{
									if (!IS_PED_RAGDOLL(PLAYER_PED_ID()))
									{
										CLEAR_HELP(1);
										if (func_91())
										{
											func_90();
										}
										if (iLocal_153 == joaat("prop_ld_wallet_pickup"))
										{
											uLocal_101 = CREATE_OBJECT(iLocal_154, GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), 1, 1, 0);
										}
										else
										{
											uLocal_101 = CREATE_OBJECT(iLocal_153, GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), 1, 1, 0);
										}
										if (!IS_PED_INJURED(PLAYER_PED_ID()))
										{
											ATTACH_ENTITY_TO_ENTITY(uLocal_101, PLAYER_PED_ID(), GET_PED_BONE_INDEX(PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
										}
										SET_ENTITY_VISIBLE(uLocal_101, 0, 0);
										func_82(1, 1, 1, 0, 0, 0);
										if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
										{
											if (DOES_ENTITY_EXIST(uLocal_101))
											{
												while ((!func_80(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0), uLocal_136, 1, 1056964608, 0, 1, 0) || func_91()) || !DOES_ENTITY_HAVE_DRAWABLE(uLocal_101))
												{
													if (!func_80(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0), uLocal_136, 1, 1056964608, 0, 1, 0))
													{
													}
													if (func_91())
													{
													}
													if (!DOES_ENTITY_HAVE_DRAWABLE(uLocal_101))
													{
													}
													WAIT(0);
												}
												if (!IS_PED_INJURED(PLAYER_PED_ID()))
												{
													TASK_LEAVE_ANY_VEHICLE(PLAYER_PED_ID(), 0, 0);
												}
											}
										}
										else if (DOES_ENTITY_EXIST(uLocal_101))
										{
											while (func_91() || !DOES_ENTITY_HAVE_DRAWABLE(uLocal_101))
											{
												WAIT(0);
											}
										}
										SET_PLAYER_CONTROL(PLAYER_ID(), 0, 0);
										if (!IS_PED_INJURED(iLocal_100))
										{
											SET_PED_CAN_RAGDOLL(iLocal_100, 0);
										}
										REMOVE_ALL_SHOCKING_EVENTS(0);
										REMOVE_SHOCKING_EVENT(iLocal_113);
										SET_PED_STEALTH_MOVEMENT(PLAYER_PED_ID(), 0, 0);
										func_78();
										func_73(0);
										WAIT(0);
										if (func_109(iLocal_100))
										{
											if (IS_PED_MALE(iLocal_100))
											{
												sLocal_146 = "move_m@hurry@b";
											}
											else
											{
												sLocal_146 = "move_f@hurry@a";
											}
										}
										REQUEST_CLIP_SET(sLocal_146);
										bLocal_151 = true;
										SETTIMERA(0);
									}
								}
							}
						}
					}
				}
				else
				{
					func_71(GET_ENTITY_COORDS(iLocal_100, 1), &fLocal_135, &uLocal_136);
					if (!func_97())
					{
						if (!func_175(iLocal_100, 1227113341) && !IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1))
						{
							CLEAR_PED_TASKS(iLocal_100);
							TASK_GO_TO_ENTITY(iLocal_100, PLAYER_PED_ID(), 20000, 1056964608, 1f, 1073741824, 0);
						}
					}
					else if (func_175(iLocal_100, 1227113341))
					{
						CLEAR_PED_TASKS(iLocal_100);
						CLEAR_SEQUENCE_TASK(&uLocal_105);
						OPEN_SEQUENCE_TASK(&uLocal_105);
						TASK_LOOK_AT_ENTITY(0, PLAYER_PED_ID(), -1, 2048, 2);
						TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER_PED_ID(), 0);
						TASK_PLAY_ANIM(0, cLocal_368, sLocal_369, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						TASK_PLAY_ANIM(0, cLocal_368, sLocal_371, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						TASK_PLAY_ANIM(0, cLocal_368, sLocal_370, 1090519040, -1056964608, -1, 1, 0, 0, 0, 0);
						CLOSE_SEQUENCE_TASK(uLocal_105);
						TASK_PERFORM_SEQUENCE(iLocal_100, uLocal_105);
						CLEAR_SEQUENCE_TASK(&uLocal_105);
						_0x2208438012482A1A(iLocal_100, 0, 0);
					}
				}
			}
			else if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_100, 25f, 25f, 20f, 0, 1, 1) || IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_100, 30f, 30f, 20f, 0, 1, 2))
			{
				if (!func_97())
				{
					if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1))
					{
						CLEAR_PED_TASKS(iLocal_100);
						CLEAR_SEQUENCE_TASK(&uLocal_105);
						OPEN_SEQUENCE_TASK(&uLocal_105);
						TASK_LOOK_AT_ENTITY(0, PLAYER_PED_ID(), -1, 2048, 2);
						TASK_GO_TO_ENTITY(0, PLAYER_PED_ID(), 20000, 1056964608, 1f, 1073741824, 0);
						CLOSE_SEQUENCE_TASK(uLocal_105);
						TASK_PERFORM_SEQUENCE(iLocal_100, uLocal_105);
						CLEAR_SEQUENCE_TASK(&uLocal_105);
					}
					iLocal_341 = 1;
				}
			}
		}
		if (bLocal_151)
		{
			switch (iLocal_150)
			{
				case 0:
					if (((!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1) && !IS_PED_RAGDOLL(PLAYER_PED_ID())) && !IS_PED_PRONE(PLAYER_PED_ID())) && !IS_PED_GETTING_UP(PLAYER_PED_ID()))
					{
						if (bLocal_132)
						{
							if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -712.9f, -819.32f, 22.73f, 1) < 5f && IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -709.9229f, -824.0863f, 22.0751f, -715.2137f, -824.2247f, 25.01217f, 3.25f, 0, 1, 0))
							{
								vLocal_126 = { -710.1279f, -821.3084f, 22.6169f };
								vLocal_129 = { 0f, 0f, 266.962f };
							}
							else if (!IS_PED_INJURED(iLocal_100))
							{
								vVar19 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 0) };
								func_68(iLocal_100, &vLocal_126, &vLocal_129, cLocal_362, sLocal_364);
								if ((vLocal_126.z - vVar19.z) > 20f)
								{
									vLocal_126 = { vVar19 };
								}
								vLocal_126.z = (vLocal_126.z + 2f);
								GET_GROUND_Z_FOR_3D_COORD(vLocal_126, &(vLocal_126.f_2), 0, 0);
								if (vLocal_126.z == 0f)
								{
									vLocal_126 = { vLocal_354 };
									vLocal_129.z = fLocal_357;
								}
								if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -203.72f, -861.8f, 29.27f, 1) < 5f)
								{
									if (IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -202.4218f, -864.449f, 27.88059f, -211.4486f, -861.5274f, 31.75401f, 9.5f, 0, 1, 0))
									{
										if (vLocal_129.z > 315f && vLocal_129.z < 360f)
										{
											vLocal_129.z = 251.4238f;
										}
										else if (vLocal_129.z > 120f && vLocal_129.z < 212f)
										{
											vLocal_129.z = 67.2304f;
										}
										vLocal_126 = { -205.81f, -865.2f, 28.5f };
									}
								}
								else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -821.33f, -1082.43f, 10.14f, 1) < 5f && IS_POINT_IN_ANGLED_AREA(vLocal_126, -826.1744f, -1083.943f, 9.137519f, -811.6559f, -1075.567f, 13.88779f, 6f, 0, 1))
								{
									vLocal_126 = { -814.0593f, -1082.483f, 10.0671f };
									vLocal_129.z = 275.5752f;
								}
								else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -387.12f, 6045.79f, 30.5f, 1) < 5f && IS_POINT_IN_ANGLED_AREA(vLocal_126, -377.5788f, 6033.821f, 29.29119f, -373.0138f, 6029.14f, 33.75382f, 4.75f, 0, 1))
								{
									vLocal_126 = { -375.0627f, 6030.533f, 30.5313f };
									vLocal_129.z = 222.9049f;
								}
								else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -387.12f, 6045.79f, 30.5f, 1) < 5f && IS_POINT_IN_ANGLED_AREA(vLocal_126, -381.4607f, 6031.481f, 29.24971f, -376.6766f, 6026.68f, 33.76656f, 3f, 0, 1))
								{
									vLocal_126 = { -379.7835f, 6029.472f, 30.5014f };
									vLocal_129.z = 213.2611f;
								}
								else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, 89.39f, 2f, 67.34f, 1) < 5f)
								{
									if (IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), 73.30347f, 4.781172f, 66.79439f, 107.6572f, -8.330787f, 69.16833f, 9.75f, 0, 1, 0))
									{
										if (vLocal_129.z > 128f && vLocal_129.z < 195f)
										{
											if (vLocal_129.z > 162f)
											{
												vLocal_129.z = 220f;
											}
											else
											{
												vLocal_129.z = 107f;
											}
										}
									}
								}
								else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, 174.53f, 6637.64f, 30.57f, 1) < 5f)
								{
									if (IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), 176.3895f, 6635.983f, 29.87799f, 181.7585f, 6641.302f, 33.556f, 7.75f, 0, 1, 0))
									{
										if (vLocal_129.z > 244.444f && vLocal_129.z < 326.2103f)
										{
											vLocal_129.z = 343.1367f;
										}
									}
								}
								else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -3044.11f, 594.34f, 6.73f, 1) < 5f)
								{
									if (IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -3042.549f, 597.1118f, 6.612578f, -3046.965f, 595.6973f, 9.065809f, 5f, 0, 1, 0))
									{
										vLocal_126 = { -3045.4f, 598.65f, 6.51f };
									}
								}
								vVar10 = { GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_362, sLocal_364, vLocal_126, vLocal_129, 0f, 2) };
								vVar13 = { vVar10 - vLocal_126 };
								vVar13.z = 0f;
								uVar24 = VMAG(vVar13);
								GET_GROUND_Z_FOR_3D_COORD(vVar10, &(vVar10.f_2), 0, 0);
								fVar23 = (vLocal_126.z - vVar10.z);
								vLocal_129.x = ATAN2(fVar23, uVar24);
								if (vLocal_129.x > 20f || vLocal_129.x < -330f)
								{
									vLocal_126 = { vLocal_354 };
									vLocal_129.x = 0f;
									vLocal_129.z = fLocal_357;
									vVar10 = { GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_362, sLocal_364, vLocal_126, vLocal_129, 0f, 2) };
									vVar13 = { vVar10 - vLocal_126 };
									vVar13.z = 0f;
									uVar24 = VMAG(vVar13);
									GET_GROUND_Z_FOR_3D_COORD(vVar10, &(vVar10.f_2), 0, 0);
									fVar23 = (vLocal_126.z - vVar10.z);
								}
							}
							if (func_67(vLocal_95, -526.58f, -1222.79f, 17.46f, 10f, 0))
							{
								if (IS_POINT_IN_ANGLED_AREA(vLocal_126, -538.4412f, -1214.903f, 16.79794f, -520.3268f, -1223.249f, 20.556f, 6.5f, 0, 1))
								{
									if (vLocal_129.z < 35f || vLocal_129.z > 275f)
									{
										if (vLocal_129.z < 335f)
										{
											vLocal_129.z = 260f;
										}
										else
										{
											vLocal_129.z = 55f;
										}
									}
									else if (vLocal_129.z > 107.2072f && vLocal_129.z < 210f)
									{
										if (vLocal_129.z > 154.6742f)
										{
											vLocal_129.z = 233f;
										}
										else
										{
											vLocal_129.z = 73f;
										}
									}
								}
							}
						}
						else if (iLocal_109 == 4)
						{
							if (VDIST(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 183.6065f, 6636.653f, 30.6299f) < VDIST(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 172.2291f, 6631.007f, 30.7398f))
							{
								vLocal_126 = { 183.6065f, 6636.653f, 30.6299f };
								vLocal_129 = { 0f, 0f, 265f };
							}
							else
							{
								vLocal_126 = { 172.2291f, 6631.007f, 30.7398f };
								vLocal_129 = { 0f, 0f, 132f };
							}
						}
						else
						{
							vVar1 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) };
							if (!IS_PED_INJURED(iLocal_100))
							{
								vVar4 = { GET_ENTITY_COORDS(iLocal_100, 1) };
							}
							vVar7 = { vVar1 - vVar4 };
							vLocal_126 = { vVar1 };
							vLocal_126 = { vLocal_126.x, vLocal_126.y, (vLocal_126.z - 1f) };
							vLocal_129 = { 0f, 0f, GET_HEADING_FROM_VECTOR_2D(vVar7.x, vVar7.y) };
						}
						if (GET_DISTANCE_BETWEEN_COORDS(vLocal_126, -535.795f, -1222.23f, 17.4567f, 1) < 5f)
						{
							vLocal_126 = { -521.475f, -1210.47f, 17.1848f };
							vLocal_129 = { 0f, 0f, 308.502f };
						}
						if (IS_VEHICLE_DRIVEABLE(uLocal_117, 0))
						{
							SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_117);
						}
						if (IS_VEHICLE_DRIVEABLE(GET_PLAYERS_LAST_VEHICLE(), 0))
						{
							if (!IS_VEHICLE_DRIVEABLE(iVar0, 0))
							{
								iVar0 = GET_PLAYERS_LAST_VEHICLE();
								GET_MODEL_DIMENSIONS(GET_ENTITY_MODEL(iVar0), &vLocal_348, &vLocal_351);
								if (IS_ENTITY_AT_COORD(iVar0, vLocal_126, (vLocal_351.y + 1f), (vLocal_351.y + 1f), 3f, 0, 1, 0) || IS_ENTITY_AT_COORD(iVar0, GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_362, sLocal_364, vLocal_126, vLocal_129, 0, 2), (vLocal_351.y + 1f), (vLocal_351.y + 1f), 3f, 0, 1, 0))
								{
									if (func_67(vLocal_95, -526.58f, -1222.79f, 17.46f, 10f, 0) && (IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0) || IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -529.7477f, -1218.399f, 16.78482f, -520.9798f, -1222.305f, 20.55204f, 7.5f, 0, 1, 0)))
									{
										if (IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0))
										{
											vVar16 = { 2.9f, 12f, 8f };
											vLocal_121 = { -543.34f, -1216.8f, 17.96f };
											fLocal_125 = 337.5f;
											bVar22 = true;
										}
										else
										{
											vVar16 = { 2.9f, 12f, 8f };
											vLocal_121 = { -522.4418f, -1214.57f, 17.1848f };
											fLocal_125 = 246.7714f;
											bVar22 = true;
										}
										if ((vLocal_351.x - vLocal_348.x) > vVar16.x)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.y - vLocal_348.y) > vVar16.y)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.z - vLocal_348.z) > vVar16.z)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_66(iVar0))
											{
												SET_ENTITY_COORDS(iVar0, vLocal_121, 1, 0, 0, 1);
												SET_ENTITY_HEADING(iVar0, fLocal_125);
												SET_VEHICLE_DOOR_LATCHED(iVar0, 0, 1, 1, 1);
												SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
											}
										}
										else if (DOES_ENTITY_EXIST(iVar0))
										{
											if (!IS_PED_IN_VEHICLE(PLAYER_PED_ID(), iVar0, 0))
											{
												DELETE_VEHICLE(&iVar0);
											}
										}
									}
									else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -203.72f, -861.8f, 29.27f, 1) < 5f && IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -197.7616f, -865.9772f, 27.31116f, -191.161f, -849.0546f, 32.89275f, 10.25f, 0, 1, 0))
									{
										vVar16 = { 2.9f, 12f, 8f };
										vLocal_121 = { -187f, -855.51f, 29.02f };
										fLocal_125 = 158.28f;
										bVar22 = true;
										if ((vLocal_351.x - vLocal_348.x) > vVar16.x)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.y - vLocal_348.y) > vVar16.y)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.z - vLocal_348.z) > vVar16.z)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_66(iVar0))
											{
												SET_ENTITY_COORDS(iVar0, vLocal_121, 1, 0, 0, 1);
												SET_ENTITY_HEADING(iVar0, fLocal_125);
												SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
											}
										}
										else if (DOES_ENTITY_EXIST(iVar0))
										{
											if (!IS_PED_IN_VEHICLE(PLAYER_PED_ID(), iVar0, 0))
											{
												DELETE_VEHICLE(&iVar0);
											}
										}
									}
									else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -387.12f, 6045.79f, 30.5f, 1) < 5f && IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -390.4536f, 6044.05f, 29.99868f, -380.4771f, 6032.985f, 33.24879f, 6f, 0, 1, 0))
									{
										vVar16 = { 2.9f, 12f, 8f };
										vLocal_121 = { -395.84f, 6051.16f, 31.19f };
										fLocal_125 = 139.92f;
										bVar22 = true;
										if ((vLocal_351.x - vLocal_348.x) > vVar16.x)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.y - vLocal_348.y) > vVar16.y)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.z - vLocal_348.z) > vVar16.z)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_66(iVar0))
											{
												SET_ENTITY_COORDS(iVar0, vLocal_121, 1, 0, 0, 1);
												SET_ENTITY_HEADING(iVar0, fLocal_125);
												SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
											}
										}
										else if (DOES_ENTITY_EXIST(iVar0))
										{
											if (!IS_PED_IN_VEHICLE(PLAYER_PED_ID(), iVar0, 0))
											{
												DELETE_VEHICLE(&iVar0);
											}
										}
									}
									else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -2956.78f, 488.19f, 14.47f, 1) < 5f && IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -2955.234f, 492.4626f, 13.80307f, -2967.116f, 493.0511f, 17.05663f, 9.75f, 0, 1, 0))
									{
										vVar16 = { 2.9f, 12f, 8f };
										vLocal_121 = { -2972.31f, 490.07f, 15.03f };
										fLocal_125 = 357.64f;
										bVar22 = true;
										if ((vLocal_351.x - vLocal_348.x) > vVar16.x)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.y - vLocal_348.y) > vVar16.y)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.z - vLocal_348.z) > vVar16.z)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_66(iVar0))
											{
												SET_ENTITY_COORDS(iVar0, vLocal_121, 1, 0, 0, 1);
												SET_ENTITY_HEADING(iVar0, fLocal_125);
												SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
											}
										}
										else if (DOES_ENTITY_EXIST(iVar0))
										{
											if (!IS_PED_IN_VEHICLE(PLAYER_PED_ID(), iVar0, 0))
											{
												DELETE_VEHICLE(&iVar0);
											}
										}
									}
									else if ((GET_DISTANCE_BETWEEN_COORDS(vLocal_95, 174.53f, 6637.64f, 30.57f, 1) < 5f && IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), 178.246f, 6638.824f, 30.5274f, 173.4713f, 6634.083f, 33.6823f, 6f, 0, 1, 0)) && IS_ENTITY_IN_ANGLED_AREA(iVar0, 180.1225f, 6640.33f, 30.78129f, 171.623f, 6631.794f, 33.69934f, 8f, 0, 1, 0))
									{
										vVar16 = { 2.9f, 12f, 8f };
										vLocal_121 = { 184.05f, 6628.75f, 31.27f };
										fLocal_125 = 89.37f;
										bVar22 = true;
										if ((vLocal_351.x - vLocal_348.x) > vVar16.x)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.y - vLocal_348.y) > vVar16.y)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.z - vLocal_348.z) > vVar16.z)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_66(iVar0))
											{
												SET_ENTITY_COORDS(iVar0, vLocal_121, 1, 0, 0, 1);
												SET_ENTITY_HEADING(iVar0, fLocal_125);
												SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
											}
										}
										else if (DOES_ENTITY_EXIST(iVar0))
										{
											if (!IS_PED_IN_VEHICLE(PLAYER_PED_ID(), iVar0, 0))
											{
												DELETE_VEHICLE(&iVar0);
											}
										}
									}
									else
									{
										vVar16 = { 2.9f, 12f, 8f };
										fLocal_125 = GET_ENTITY_HEADING(iVar0);
										vLocal_121 = { func_64(vLocal_126, GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_362, sLocal_364, vLocal_126, vLocal_129, 0, 2)) };
										if (func_63(0f, 0f, 0f, vLocal_121, 0))
										{
											vLocal_121 = { GET_ENTITY_COORDS(iVar0, 1) };
										}
										if (IS_THIS_MODEL_A_HELI(GET_ENTITY_MODEL(iVar0)))
										{
											vLocal_351.x = (vLocal_351.x + 3f);
											vLocal_351.y = (vLocal_351.y + 3f);
										}
										bVar22 = true;
										if ((vLocal_351.x - vLocal_348.x) > vVar16.x)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.y - vLocal_348.y) > vVar16.y)
										{
											bVar22 = false;
										}
										else if ((vLocal_351.z - vLocal_348.z) > vVar16.z)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (func_66(iVar0))
											{
												SET_ENTITY_COORDS(iVar0, vLocal_121, 1, 0, 0, 1);
												SET_ENTITY_HEADING(iVar0, fLocal_125);
												SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
											}
										}
										else if (DOES_ENTITY_EXIST(iVar0))
										{
											if (!IS_PED_IN_VEHICLE(PLAYER_PED_ID(), iVar0, 0))
											{
												DELETE_VEHICLE(&iVar0);
											}
										}
									}
								}
							}
						}
						if (func_66(iVar0))
						{
							GET_MODEL_DIMENSIONS(GET_ENTITY_MODEL(iVar0), &vLocal_348, &vLocal_351);
							if (IS_ENTITY_AT_COORD(iVar0, vLocal_126, (vLocal_351.y + 1f), (vLocal_351.y + 1f), 1f, 0, 1, 0) || IS_ENTITY_AT_COORD(iVar0, GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_362, sLocal_364, vLocal_126, vLocal_129, 0, 2), (vLocal_351.y + 1f), (vLocal_351.y + 1f), 1f, 0, 1, 0))
							{
								SET_ENTITY_COORDS(iVar0, vLocal_358, 1, 0, 0, 1);
								SET_ENTITY_HEADING(iVar0, fLocal_361);
								SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
							}
						}
						if (DOES_ENTITY_EXIST(uLocal_101))
						{
							SET_ENTITY_VISIBLE(uLocal_101, 1, 0);
						}
						REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(vLocal_126 - Vector(10f, 10f, 10f), vLocal_126 + Vector(10f, 10f, 10f), 0);
						CLEAR_AREA_OF_PROJECTILES(vLocal_126, 20f, 0);
						CLEAR_AREA_OF_PEDS(vLocal_126, 10f, 0);
						CLEAR_AREA(vLocal_126, (vLocal_351.y + 1f), 1, 0, 0, 0);
						STOP_FIRE_IN_RANGE(vLocal_126, 25f);
						HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER_PED_ID(), 1);
						SET_PLAYER_WANTED_LEVEL(PLAYER_ID(), 0, 0);
						uLocal_112 = CREATE_SYNCHRONIZED_SCENE(vLocal_126, vLocal_129, 2);
						_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_112, 0);
						uLocal_149 = CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
						SET_CAM_FOV(uLocal_149, 15f);
						PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_149, uLocal_112, sLocal_365, cLocal_362);
						CLEAR_PED_TASKS_IMMEDIATELY(PLAYER_PED_ID());
						TASK_CLEAR_LOOK_AT(PLAYER_PED_ID());
						TASK_SYNCHRONIZED_SCENE(PLAYER_PED_ID(), uLocal_112, cLocal_362, sLocal_363, 1000f, -1000f, 1024, 0, 1148846080, 0);
						_0x2208438012482A1A(PLAYER_PED_ID(), 0, 0);
						if (!IS_PED_INJURED(iLocal_100))
						{
							CLEAR_PED_TASKS_IMMEDIATELY(iLocal_100);
							TASK_SYNCHRONIZED_SCENE(iLocal_100, uLocal_112, cLocal_362, sLocal_364, 1000f, -4f, 0, 0, 1148846080, 0);
						}
						SET_CAM_ACTIVE(uLocal_149, 1);
						RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						StringCopy(&cVar25, sLocal_336, 16);
						StringConCat(&cVar25, "_1", 16);
						StringCopy(&cVar29, cLocal_332, 16);
						StringConCat(&cVar29, "_1", 16);
						func_51(&Local_159, cLocal_335, sLocal_336, &cVar25, cLocal_332, &cVar29, 7, 0, 0);
						SETTIMERA(0);
						REMOVE_ALL_SHOCKING_EVENTS(0);
						func_50(joaat("rc_wallets_returned"), 1);
						STAT_GET_INT(joaat("rc_wallets_returned"), &uVar33, -1);
						iLocal_150++;
					}
					else
					{
						if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1))
						{
						}
						if (IS_PED_RAGDOLL(PLAYER_PED_ID()))
						{
						}
						if (IS_PED_PRONE(PLAYER_PED_ID()))
						{
						}
						if (IS_PED_GETTING_UP(PLAYER_PED_ID()))
						{
						}
					}
					HIDE_HUD_AND_RADAR_THIS_FRAME();
					break;
				
				case 1:
					if ((IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_112) && GET_SYNCHRONIZED_SCENE_PHASE(uLocal_112) == 1f) || func_47())
					{
						CLEAR_PLAYER_WANTED_LEVEL(PLAYER_ID());
						SPECIAL_ABILITY_FILL_METER(PLAYER_ID(), 0);
						if (!IS_PED_INJURED(iLocal_100))
						{
							SET_PED_MONEY(iLocal_100, (iLocal_345 - (iLocal_345 / 10)));
							SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_100, 0);
							SET_PED_MOVEMENT_CLIPSET(iLocal_100, sLocal_146, 1048576000);
						}
						if (IS_SCREEN_FADED_OUT())
						{
							CLEAR_PED_TASKS_IMMEDIATELY(iLocal_100);
							vVar10 = { GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_362, sLocal_364, vLocal_126, vLocal_129, 1f, 2) };
							GET_GROUND_Z_FOR_3D_COORD(vVar10, &(vVar10.f_2), 0, 0);
							SET_ENTITY_COORDS(iLocal_100, vVar10, 1, 0, 0, 1);
							vVar10 = { GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_362, sLocal_364, vLocal_126, vLocal_129, 1f, 2) };
							SET_ENTITY_HEADING(iLocal_100, vVar10.z);
						}
						vVar10 = { GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_362, sLocal_364, vLocal_126, vLocal_129, 1f, 2) };
						if (func_67(vLocal_95, -526.58f, -1222.79f, 17.46f, 10f, 0))
						{
							if (func_46(PLAYER_PED_ID(), 215.68f, 60f))
							{
								OPEN_SEQUENCE_TASK(&uLocal_105);
								TASK_FOLLOW_NAV_MESH_TO_COORD(0, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								TASK_FOLLOW_NAV_MESH_TO_COORD(0, -503.46f, -1199.39f, 19.02f, 1f, 20000, 1048576000, 5, 1193033728);
								TASK_WANDER_STANDARD(0, GET_ENTITY_HEADING(iLocal_100), 1);
								CLOSE_SEQUENCE_TASK(uLocal_105);
								TASK_PERFORM_SEQUENCE(iLocal_100, uLocal_105);
								CLEAR_SEQUENCE_TASK(&uLocal_105);
							}
							else if (func_46(PLAYER_PED_ID(), 122.0371f, 60f))
							{
								OPEN_SEQUENCE_TASK(&uLocal_105);
								TASK_FOLLOW_NAV_MESH_TO_COORD(0, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								TASK_FOLLOW_NAV_MESH_TO_COORD(0, -543.35f, -1208.09f, 16.73f, 1f, 20000, 1048576000, 5, 1193033728);
								TASK_WANDER_STANDARD(0, GET_ENTITY_HEADING(iLocal_100), 1);
								CLOSE_SEQUENCE_TASK(uLocal_105);
								TASK_PERFORM_SEQUENCE(iLocal_100, uLocal_105);
								CLEAR_SEQUENCE_TASK(&uLocal_105);
							}
							else
							{
								OPEN_SEQUENCE_TASK(&uLocal_105);
								TASK_FOLLOW_NAV_MESH_TO_COORD(0, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								TASK_WANDER_STANDARD(0, GET_ENTITY_HEADING(iLocal_100), 1);
								CLOSE_SEQUENCE_TASK(uLocal_105);
								TASK_PERFORM_SEQUENCE(iLocal_100, uLocal_105);
								CLEAR_SEQUENCE_TASK(&uLocal_105);
							}
						}
						else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, 288.46f, -1256.71f, 28.44f, 1) < 5f)
						{
							if (func_46(PLAYER_PED_ID(), 200.8887f, 60f))
							{
								OPEN_SEQUENCE_TASK(&uLocal_105);
								TASK_FOLLOW_NAV_MESH_TO_COORD(0, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								TASK_FOLLOW_NAV_MESH_TO_COORD(0, 289.08f, -1286.56f, 28.68f, 1f, 20000, 1048576000, 5, 1193033728);
								TASK_WANDER_STANDARD(0, GET_ENTITY_HEADING(iLocal_100), 1);
								CLOSE_SEQUENCE_TASK(uLocal_105);
								TASK_PERFORM_SEQUENCE(iLocal_100, uLocal_105);
								CLEAR_SEQUENCE_TASK(&uLocal_105);
							}
							else if (func_46(PLAYER_PED_ID(), 347.8599f, 60f))
							{
								OPEN_SEQUENCE_TASK(&uLocal_105);
								TASK_FOLLOW_NAV_MESH_TO_COORD(0, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								TASK_FOLLOW_NAV_MESH_TO_COORD(0, 241.22f, -1236.76f, 28.26f, 1f, 20000, 1048576000, 5, 1193033728);
								TASK_WANDER_STANDARD(0, GET_ENTITY_HEADING(iLocal_100), 1);
								CLOSE_SEQUENCE_TASK(uLocal_105);
								TASK_PERFORM_SEQUENCE(iLocal_100, uLocal_105);
								CLEAR_SEQUENCE_TASK(&uLocal_105);
							}
							else
							{
								OPEN_SEQUENCE_TASK(&uLocal_105);
								TASK_FOLLOW_NAV_MESH_TO_COORD(0, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_100, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								TASK_WANDER_STANDARD(0, GET_ENTITY_HEADING(iLocal_100), 1);
								CLOSE_SEQUENCE_TASK(uLocal_105);
								TASK_PERFORM_SEQUENCE(iLocal_100, uLocal_105);
								CLEAR_SEQUENCE_TASK(&uLocal_105);
							}
						}
						else
						{
							OPEN_SEQUENCE_TASK(&uLocal_105);
							TASK_FOLLOW_NAV_MESH_TO_COORD(0, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_100, 0f, 2.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
							TASK_WANDER_STANDARD(0, GET_ENTITY_HEADING(iLocal_100), 1);
							CLOSE_SEQUENCE_TASK(uLocal_105);
							TASK_PERFORM_SEQUENCE(iLocal_100, uLocal_105);
							CLEAR_SEQUENCE_TASK(&uLocal_105);
						}
						FORCE_PED_MOTION_STATE(iLocal_100, -668482597, 1, 0, 0);
						SET_PED_CAN_RAGDOLL(iLocal_100, 1);
						SET_PED_KEEP_TASK(iLocal_100, 1);
						func_45(&uLocal_117);
						SETTIMERB(0);
						STOP_GAMEPLAY_HINT(0);
						if (!IS_PED_INJURED(PLAYER_PED_ID()))
						{
							CLEAR_PED_TASKS_IMMEDIATELY(PLAYER_PED_ID());
							if (!func_44())
							{
								_0x2208438012482A1A(PLAYER_PED_ID(), 0, 0);
							}
						}
						if (DOES_ENTITY_EXIST(uLocal_101))
						{
							DELETE_OBJECT(&uLocal_101);
						}
						if (!IS_PED_INJURED(iLocal_100))
						{
							SET_PED_MONEY(iLocal_100, (iLocal_345 - (iLocal_345 / 10)));
						}
						HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER_PED_ID(), 0);
						SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						SET_CAM_ACTIVE(uLocal_149, 0);
						func_43();
						DESTROY_CAM(uLocal_149, 0);
						SET_PLAYER_CONTROL(PLAYER_ID(), 1, 0);
						if (IS_SCREEN_FADED_OUT())
						{
							DO_SCREEN_FADE_IN(500);
							while (IS_SCREEN_FADING_IN())
							{
								WAIT(0);
							}
						}
						iVar34 = (iLocal_345 / 100);
						iVar34 *= 90;
						WAIT(0);
						_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
						func_82(0, 1, 1, 0, 0, 0);
						func_3(func_38(), 1, iVar34);
						func_289(1);
					}
					else
					{
						HIDE_HUD_AND_RADAR_THIS_FRAME();
						if (HAS_ANIM_EVENT_FIRED(PLAYER_PED_ID(), -3856156))
						{
							if (!IS_PED_INJURED(iLocal_100) && !IS_PED_INJURED(PLAYER_PED_ID()))
							{
								if (IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_101, PLAYER_PED_ID()))
								{
									DETACH_ENTITY(uLocal_101, 0, 1);
									if (IS_PED_MALE(iLocal_100))
									{
										ATTACH_ENTITY_TO_ENTITY(uLocal_101, iLocal_100, GET_PED_BONE_INDEX(iLocal_100, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
									else
									{
										ATTACH_ENTITY_TO_ENTITY(uLocal_101, iLocal_100, GET_PED_BONE_INDEX(iLocal_100, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
								}
							}
						}
					}
					break;
				}
			}
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_4(Global_106565.f_28044[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_37();
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
					func_36(99, 1);
					func_50(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_50(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_50(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_20(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_15(5))
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
							func_50(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_15(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_50(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_50(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_50(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_property"), iParam3);
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
									func_50(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_15(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_14(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_36(95, iParam3);
					break;
				
				case 1:
					func_36(97, iParam3);
					break;
				
				case 2:
					func_36(96, iParam3);
					break;
			}
			func_36(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = FLOOR((fVar0 * TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_7(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_7(iVar1);
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
					func_50(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_50(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_50(joaat("sp2_total_cash_earned"), iParam3);
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
	func_6(iParam0);
	if (Global_36425 == 15)
	{
		func_5(0);
	}
	return 1;
}

void func_5(bool bParam0)
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

void func_6(int iParam0)
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

void func_7(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_13(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_13(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_13(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_13(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_10(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_10(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_10(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_10(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_10(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_10(8274, 0, -1, 1, 0);
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
	else if (IS_BIT_SET(Global_106565.f_20558.f_471, iParam0) || IS_BIT_SET(Global_2097152[func_9() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar0 = true;
		CLEAR_BIT(&(Global_106565.f_20558.f_471), iParam0);
		CLEAR_BIT(&(Global_2097152[func_9() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_8(iParam0));
		_SET_NOTIFICATION_MESSAGE(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_8(int iParam0)
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

int func_9()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_11(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_11(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1312745;
}

int func_13(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_12();
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

void func_14(int iParam0)
{
	func_36(93, iParam0);
	func_36(29, iParam0);
	func_36(30, iParam0);
}

int func_15(int iParam0)
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
		return func_17(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_17(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_17(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_17(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = GET_CLOUD_TIME_AS_INT();
		iVar1 = func_16(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = GET_CLOUD_TIME_AS_INT();
		iVar3 = func_16(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = GET_CLOUD_TIME_AS_INT();
		iVar5 = func_16(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = GET_CLOUD_TIME_AS_INT();
		iVar7 = func_16(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = GET_CLOUD_TIME_AS_INT();
		iVar9 = func_16(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = GET_CLOUD_TIME_AS_INT();
		iVar11 = func_16(8274, -1, 0);
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
	return IS_BIT_SET(Global_2097152[func_9() /*10778*/].f_6165.f_10, iParam0);
}

int func_16(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2539502[iParam0 /*3*/][func_11(iParam1)];
	if (STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_12();
	}
	iVar1 = func_19(iParam0, iParam1);
	uVar2 = func_18(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_18(int iParam0)
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

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_12();
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

int func_20(bool bParam0)
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
		func_35(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_21(27, 1);
	return 1;
}

int func_21(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_22(iParam0, iParam1);
}

int func_22(int iParam0, int iParam1)
{
	if (func_34(14) && !func_33(iParam0))
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
	if (func_32(&Global_4269608))
	{
		if (func_30(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_23(&Global_4269608, iParam0))
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

int func_23(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_34(14) && !func_33(iParam1))
	{
		return 0;
	}
	if (func_30(uParam0, iParam1))
	{
		return 0;
	}
	if (func_29(uParam0) < 0f)
	{
		func_28(uParam0, 0);
	}
	func_26(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_24(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_24(var uParam0, int iParam1)
{
	int iVar0;
	
	if (HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_34(14) && !func_33(iParam1))
	{
		return 0;
	}
	if (func_30(uParam0, iParam1))
	{
		return 0;
	}
	if (func_29(uParam0) < 0f)
	{
		func_28(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_25(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_25(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_26(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_27(uParam0, iVar0);
		iVar0++;
	}
	func_28(uParam0, (Global_4269607 - 0.5f));
}

void func_27(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_28(var uParam0, float fParam1)
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

float func_29(var uParam0)
{
	return uParam0->f_80;
}

bool func_30(var uParam0, int iParam1)
{
	return func_31(uParam0, iParam1) != -1;
}

int func_31(var uParam0, int iParam1)
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

bool func_32(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_33(int iParam0)
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

bool func_34(int iParam0)
{
	return Global_36425 == iParam0;
}

int func_35(int iParam0, int iParam1)
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

void func_36(int iParam0, int iParam1)
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

void func_37()
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

int func_38()
{
	func_39();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_39()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		if (func_42(Global_106565.f_2357.f_539.f_4321) != GET_ENTITY_MODEL(PLAYER_PED_ID()))
		{
			iVar0 = func_41(PLAYER_PED_ID());
			if (func_40(iVar0) && (!func_34(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_40(Global_106565.f_2357.f_539.f_4321))
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

bool func_40(int iParam0)
{
	return iParam0 < 3;
}

int func_41(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_42(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_42(int iParam0)
{
	if (func_40(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_43()
{
	var uVar0;
	
	uVar0 = CREATE_CAMERA_WITH_PARAMS(26379945, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER_PED_ID(), 0.5f, -1f, 0.5f), 0f, 0f, GET_ENTITY_HEADING(PLAYER_PED_ID()), 1115815936, 1, 2);
	SET_CAM_ACTIVE(uVar0, 1);
}

int func_44()
{
	if (_0xEE778F8C7E1142E2(_0x19CAFA3C87F7C2FF()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_45(var uParam0)
{
	if (DOES_ENTITY_EXIST(*uParam0))
	{
		IS_ENTITY_DEAD(*uParam0, 0);
		if (IS_ENTITY_A_MISSION_ENTITY(*uParam0) && DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1))
		{
			SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
}

int func_46(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (fParam1 + (fParam2 / 2f));
	if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	fVar1 = (fParam1 - (fParam2 / 2f));
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	if (!IS_PED_INJURED(uParam0))
	{
		if (fVar0 > fVar1)
		{
			if (GET_ENTITY_HEADING(uParam0) < fVar0 && GET_ENTITY_HEADING(uParam0) > fVar1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (GET_ENTITY_HEADING(uParam0) < fVar0 || GET_ENTITY_HEADING(uParam0) > fVar1)
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

int func_47()
{
	if (func_48(1000))
	{
		DO_SCREEN_FADE_OUT(500);
		while (IS_SCREEN_FADING_OUT())
		{
			HIDE_HUD_AND_RADAR_THIS_FRAME();
			WAIT(0);
		}
		return 1;
	}
	return 0;
}

int func_48(int iParam0)
{
	if (IS_SCREEN_FADED_IN())
	{
		if ((GET_GAME_TIMER() - Global_28) > iParam0)
		{
			Global_27 = GET_GAME_TIMER();
		}
		Global_28 = GET_GAME_TIMER();
		if ((GET_GAME_TIMER() - Global_27) > iParam0)
		{
			if (func_49())
			{
				Global_27 = GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_49()
{
	if (IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (IS_CONTROL_JUST_PRESSED(0, 18) || IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STAT_SET_INT(iParam0, iVar0, 1);
}

int func_51(var uParam0, char* sParam1, char* sParam2, char[4] cParam3, char* sParam4, char[4] cParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar11;
	
	func_62(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar11 = 10;
	func_61(2, &uVar0, &uVar11, sParam2, cParam3, sParam4, cParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_52(&uVar0, &uVar11, iParam6, 0);
}

int func_52(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_15867 = 0;
	if (Global_15866 == 0 || Global_15868 == 2)
	{
		if (Global_15866 != 0)
		{
			if (iParam2 > Global_15868)
			{
				if (bParam3 == 0)
				{
					STOP_SCRIPTED_CONVERSATION(0);
					Global_14553.f_1 = 3;
					Global_15866 = 0;
					Global_15867 = 1;
					Global_15919 = 0;
					Global_15862 = 0;
					Global_15863 = 0;
				}
				else
				{
					func_60();
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
		if (func_59(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_58();
		Global_15155 = { Global_15320 };
		Global_15872 = Global_15873;
		Global_15879 = Global_15880;
		Global_2621442 = Global_2621441;
		Global_15881 = { Global_15897 };
		Global_15874 = Global_15875;
		Global_16856 = Global_16857;
		Global_16864 = { Global_16870 };
		Global_16862 = Global_16863;
		Global_16858 = Global_16859;
		Global_16860 = Global_16861;
		Global_15485.f_368 = Global_16853;
		Global_15485.f_369 = Global_16854;
		Global_15485.f_370 = Global_16855;
		Global_15862 = Global_15863;
		Global_15864 = Global_15865;
		if (Global_16124 == 0)
		{
			Global_16020[0 /*6*/] = { Global_16046[0 /*6*/] };
			Global_16020[1 /*6*/] = { Global_16046[1 /*6*/] };
			Global_16072[0 /*6*/] = { Global_16098[0 /*6*/] };
			Global_16072[1 /*6*/] = { Global_16098[1 /*6*/] };
			Global_16033[0 /*6*/] = { Global_16059[0 /*6*/] };
			Global_16033[1 /*6*/] = { Global_16059[1 /*6*/] };
			Global_16085[0 /*6*/] = { Global_16111[0 /*6*/] };
			Global_16085[1 /*6*/] = { Global_16111[1 /*6*/] };
		}
		if (Global_15872)
		{
			CLEAR_BIT(&Global_2423, 20);
			CLEAR_BIT(&Global_2424, 17);
			CLEAR_BIT(&Global_2425, 0);
			if (bParam3)
			{
				func_57();
				if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_56())
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
					if (Global_16124 == 0)
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
			}
			if (func_55())
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
			}
			func_54();
			Global_15876 = bParam3;
		}
		Global_15868 = iParam2;
		if (Global_15862 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15862)
			{
				StringCopy(&(Global_15485.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15485.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14732 = 0;
		func_53();
		return 1;
	}
	if (Global_15866 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15868 || iParam2 == Global_15868)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_60();
	}
	return 0;
}

void func_53()
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

void func_54()
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

int func_55()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_56()
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

void func_57()
{
	if (func_34(14))
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
		Global_14553 = func_38();
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

void func_58()
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

bool func_59(int iParam0, int iParam1)
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

void func_60()
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

void func_61(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	Global_15863 = iParam0;
	Global_15873 = 0;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16863 = 0;
	Global_2621441 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_62(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = iParam5;
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

bool func_63(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_64(vector3 vParam0, vector3 vParam3)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	var uVar19;
	vector3 vVar22;
	vector3 vVar25;
	var uVar28;
	var uVar29;
	
	iVar13 = 0;
	iVar14 = 1;
	uVar0 = GET_PLAYERS_LAST_VEHICLE();
	if (!IS_ENTITY_A_MISSION_ENTITY(uVar0))
	{
		SET_ENTITY_AS_MISSION_ENTITY(uVar0, 1, 0);
	}
	GET_MODEL_DIMENSIONS(GET_ENTITY_MODEL(uVar0), &vVar7, &vVar10);
	GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, 3, &vVar4, 1, 1077936128, 0);
	if (VDIST(vParam0, -3039.655f, 602.4346f, 6.5719f) <= 25f)
	{
		vVar1 = { -3045.49f, 604.46f, 7.02f };
		iVar13 = 8;
	}
	else if (VDIST(vParam0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		vVar1 = { 278.97f, -1255.06f, 28.88f };
		iVar13 = 8;
	}
	while (iVar13 < 8)
	{
		switch (iVar13)
		{
			case 0:
				if (VDIST(vVar4, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uVar0, 0f, (vVar10.y + IntToFloat(iVar14)), 0f)) < VDIST(vVar4, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uVar0, 0f, -(vVar10.y + IntToFloat(iVar14)), 0f)))
				{
					vVar1 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uVar0, 0f, (vVar10.y + IntToFloat(iVar14)), 0f) };
				}
				else
				{
					vVar1 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uVar0, 0f, -(vVar10.y + IntToFloat(iVar14)), 0f) };
				}
				if (DOES_ENTITY_EXIST(uVar0))
				{
					if (!IS_ENTITY_DEAD(uVar0, 0))
					{
						vVar22 = { func_65(vVar1, 0f, vVar10) };
						vVar25 = { func_65(vVar1, 0f, vVar7) };
						uVar29 = START_SHAPE_TEST_LOS_PROBE(vVar22, vVar25, 511, uVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 1:
				if (GET_SHAPE_TEST_RESULT(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 2;
						}
						else
						{
							iVar14++;
							iVar13 = 0;
						}
					}
					else if (GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam0, 1) <= 5f || GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 2;
						}
						else
						{
							iVar14++;
							iVar13 = 0;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 2:
				if (VDIST(vVar4, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uVar0, 0f, (vVar10.y - IntToFloat(iVar14)), 0f)) < VDIST(vVar4, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uVar0, 0f, -(vVar10.y - IntToFloat(iVar14)), 0f)))
				{
					vVar1 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uVar0, 0f, (vVar10.y - IntToFloat(iVar14)), 0f) };
				}
				else
				{
					vVar1 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uVar0, 0f, -(vVar10.y - IntToFloat(iVar14)), 0f) };
				}
				if (DOES_ENTITY_EXIST(uVar0))
				{
					if (!IS_ENTITY_DEAD(uVar0, 0))
					{
						vVar22 = { func_65(vVar1, 0f, vVar10) };
						vVar25 = { func_65(vVar1, 0f, vVar7) };
						uVar29 = START_SHAPE_TEST_LOS_PROBE(vVar22, vVar25, 511, uVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 3:
				if (GET_SHAPE_TEST_RESULT(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 4;
						}
						else
						{
							iVar14++;
							iVar13 = 2;
						}
					}
					else if (GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam0, 1) <= 5f || GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 4;
						}
						else
						{
							iVar14++;
							iVar13 = 2;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 4:
				if (VDIST(vVar4, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uVar0, (vVar10.x + IntToFloat(iVar14)), 0f, 0f)) < VDIST(vVar4, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uVar0, -(vVar10.x + IntToFloat(iVar14)), 0f, 0f)))
				{
					vVar1 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uVar0, (vVar10.x + IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					vVar1 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uVar0, -(vVar10.x + IntToFloat(iVar14)), 0f, 0f) };
				}
				if (DOES_ENTITY_EXIST(uVar0))
				{
					if (!IS_ENTITY_DEAD(uVar0, 0))
					{
						vVar22 = { func_65(vVar1, 0f, vVar10) };
						vVar25 = { func_65(vVar1, 0f, vVar7) };
						uVar29 = START_SHAPE_TEST_LOS_PROBE(vVar22, vVar25, 511, uVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 5:
				if (GET_SHAPE_TEST_RESULT(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 6;
						}
						else
						{
							iVar14++;
							iVar13 = 4;
						}
					}
					else if (GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam0, 1) <= 5f || GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 6;
						}
						else
						{
							iVar14++;
							iVar13 = 4;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 6:
				if (VDIST(vVar4, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uVar0, (vVar10.x - IntToFloat(iVar14)), 0f, 0f)) < VDIST(vVar4, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uVar0, -(vVar10.x - IntToFloat(iVar14)), 0f, 0f)))
				{
					vVar1 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uVar0, (vVar10.x - IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					vVar1 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uVar0, -(vVar10.x - IntToFloat(iVar14)), 0f, 0f) };
				}
				if (DOES_ENTITY_EXIST(uVar0))
				{
					if (!IS_ENTITY_DEAD(uVar0, 0))
					{
						vVar22 = { func_65(vVar1, 0f, vVar10) };
						vVar25 = { func_65(vVar1, 0f, vVar7) };
						uVar29 = START_SHAPE_TEST_LOS_PROBE(vVar22, vVar25, 511, uVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 7:
				if (GET_SHAPE_TEST_RESULT(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 8;
						}
						else
						{
							iVar14++;
							iVar13 = 6;
						}
					}
					else if (GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam0, 1) <= 5f || GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 8;
						}
						else
						{
							iVar14++;
							iVar13 = 6;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 8:
				break;
		}
		WAIT(0);
	}
	return vVar1;
}

Vector3 func_65(vector3 vParam0, float fParam3, struct<2> Param4, var uParam6)
{
	vector3 vVar0;
	var uVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	
	uVar3 = fParam3;
	fVar4 = COS(uVar3);
	fVar5 = SIN(uVar3);
	vVar0.x = ((Param4 * fVar4) + (Param4.f_1 * fVar5));
	vVar0.y = ((Param4.f_1 * fVar4) - (Param4 * fVar5));
	vVar6 = { vParam0 + vVar0 };
	return vVar6;
}

int func_66(int iParam0)
{
	if (func_109(iParam0))
	{
		if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_67(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (ABSF((vParam0.x - vParam3.x)) <= fParam6)
		{
			if (ABSF((vParam0.y - vParam3.y)) <= fParam6)
			{
				if (ABSF((vParam0.z - vParam3.z)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_68(int iParam0, var uParam1, var uParam2, char[4] cParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	var uVar19;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 0) };
	uParam2->f_2 = func_70(iParam0, PLAYER_PED_ID(), 1);
	fVar3 = func_70(iParam0, PLAYER_PED_ID(), 1);
	fVar4 = func_70(iParam0, PLAYER_PED_ID(), 1);
	vVar16 = { GET_ENTITY_COORDS(iParam0, 0) - GET_ENTITY_COORDS(PLAYER_PED_ID(), 0) };
	if (HAS_ANIM_DICT_LOADED(cParam3))
	{
		vVar13 = { GET_ANIM_INITIAL_OFFSET_POSITION(cParam3, sParam4, *uParam1, *uParam2, 0, 2) };
	}
	else
	{
		vVar13 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					uParam2->f_2 = func_69(GET_ENTITY_COORDS(iParam0, 0), *uParam1, 1);
					*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(GET_ENTITY_COORDS(iParam0, 0), uParam2->f_2, vVar16) };
					iVar0 = 2;
				}
				else
				{
					uVar5 = START_SHAPE_TEST_CAPSULE(*uParam1, vVar13 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (GET_SHAPE_TEST_RESULT(uVar5, &iVar6, &vVar10, &uVar7, &uVar19) == 2)
				{
					if (iVar6 != 0)
					{
						if (vVar10.z > (uParam1->f_2 + 8.5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								fVar4 = (fVar4 + 7.5f);
							}
							else
							{
								fVar4 = (fVar3 - (7.5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), fVar4, vVar16) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = func_69(vVar13 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			
			case 2:
				break;
		}
		WAIT(0);
	}
}

float func_69(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

float func_70(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { GET_ENTITY_COORDS(uParam0, 0) };
	vVar3 = { GET_ENTITY_COORDS(uParam1, 0) };
	return func_69(vVar0, vVar3, iParam2);
}

void func_71(vector3 vParam0, float fParam3, var uParam4)
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;
	
	bVar0 = false;
	if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		vVar1 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) - vParam0 };
		fVar4 = GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
		if (func_72(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
		vVar1 = { vParam0 - GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) };
		fVar4 = GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
		if (func_72(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (GET_ENTITY_SPEED(PLAYER_PED_ID()) > 30f)
		{
			*fParam3 = (6f * 4f);
		}
		else if (GET_ENTITY_SPEED(PLAYER_PED_ID()) > 20f)
		{
			*fParam3 = (6f * 3f);
		}
		else if (GET_ENTITY_SPEED(PLAYER_PED_ID()) > 10f)
		{
			*fParam3 = (6f * 2f);
		}
		else
		{
			*fParam3 = 6f;
		}
		*uParam4 = ((*fParam3 / 1.33f) - 1f);
	}
	else
	{
		*fParam3 = 6f;
		*uParam4 = ((*fParam3 / 1.33f) - 1f);
	}
}

int func_72(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		fVar0 = GET_ENTITY_HEADING(uParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_73(int iParam0)
{
	if (func_77())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_76(0))
		{
			func_74(iParam0);
		}
		SET_BIT(&Global_2424, 2);
	}
}

void func_74(int iParam0)
{
	if (func_77())
	{
		return;
	}
	if (Global_14725)
	{
		func_75(0, 0);
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
	if (!func_55())
	{
		Global_14553.f_1 = 3;
	}
}

void func_75(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_76(0))
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

int func_76(int iParam0)
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

bool func_77()
{
	return IS_BIT_SET(Global_1681628, 19);
}

void func_78()
{
	Global_14732 = 0;
	func_79();
}

void func_79()
{
	RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(0);
		Global_15866 = 6;
	}
}

int func_80(var uParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	DISABLE_CONTROL_ACTION(0, 71, 1);
	DISABLE_CONTROL_ACTION(0, 72, 1);
	DISABLE_CONTROL_ACTION(0, 76, 1);
	DISABLE_CONTROL_ACTION(0, 73, 1);
	DISABLE_CONTROL_ACTION(0, 59, 1);
	DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!bParam6)
	{
		DISABLE_CONTROL_ACTION(0, 69, 1);
		DISABLE_CONTROL_ACTION(0, 70, 1);
		DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	DISABLE_CONTROL_ACTION(0, 74, 1);
	DISABLE_CONTROL_ACTION(0, 86, 1);
	DISABLE_CONTROL_ACTION(0, 81, 1);
	DISABLE_CONTROL_ACTION(0, 82, 1);
	DISABLE_CONTROL_ACTION(0, 138, 1);
	DISABLE_CONTROL_ACTION(0, 136, 1);
	DISABLE_CONTROL_ACTION(0, 114, 1);
	DISABLE_CONTROL_ACTION(0, 107, 1);
	DISABLE_CONTROL_ACTION(0, 110, 1);
	DISABLE_CONTROL_ACTION(0, 89, 1);
	DISABLE_CONTROL_ACTION(0, 89, 1);
	DISABLE_CONTROL_ACTION(0, 87, 1);
	DISABLE_CONTROL_ACTION(0, 88, 1);
	DISABLE_CONTROL_ACTION(0, 113, 1);
	DISABLE_CONTROL_ACTION(0, 115, 1);
	DISABLE_CONTROL_ACTION(0, 116, 1);
	DISABLE_CONTROL_ACTION(0, 117, 1);
	DISABLE_CONTROL_ACTION(0, 118, 1);
	DISABLE_CONTROL_ACTION(0, 119, 1);
	DISABLE_CONTROL_ACTION(0, 131, 1);
	DISABLE_CONTROL_ACTION(0, 132, 1);
	DISABLE_CONTROL_ACTION(0, 123, 1);
	DISABLE_CONTROL_ACTION(0, 126, 1);
	DISABLE_CONTROL_ACTION(0, 129, 1);
	DISABLE_CONTROL_ACTION(0, 130, 1);
	DISABLE_CONTROL_ACTION(0, 133, 1);
	DISABLE_CONTROL_ACTION(0, 134, 1);
	_0x17FCA7199A530203();
	func_81(uParam0);
	if ((GET_GAME_TIMER() - Global_29) > 500)
	{
		_SET_VEHICLE_HALT(uParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = GET_GAME_TIMER();
	if (!IS_ENTITY_DEAD(uParam0, 0))
	{
		if (ABSF(GET_ENTITY_SPEED(uParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_81(var uParam0)
{
	if (!IS_ENTITY_DEAD(uParam0, 0))
	{
		if (_HAS_VEHICLE_ROCKET_BOOST(uParam0))
		{
			if (_IS_VEHICLE_ROCKET_BOOST_ACTIVE(uParam0))
			{
				_SET_VEHICLE_ROCKET_BOOST_ACTIVE(uParam0, 0);
			}
		}
	}
}

void func_82(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER_ID());
		SET_ALL_RANDOM_PEDS_FLEE(PLAYER_ID(), 1);
		SET_POLICE_IGNORE_PLAYER(PLAYER_ID(), 1);
		func_89(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14553.f_1 > 3)
		{
			if (IS_MOBILE_PHONE_CALL_ONGOING())
			{
				STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_55())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_88(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_89(0);
		_0xE1CD1E48E025E661();
		Global_56500 = 0;
		if (bParam1)
		{
			_0x03FC694AE06C5A20();
		}
		SET_ALL_RANDOM_PEDS_FLEE(PLAYER_ID(), 0);
		SET_POLICE_IGNORE_PLAYER(PLAYER_ID(), 0);
		func_88(0, iParam3, iParam2, 0);
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!IS_PED_INJURED(PLAYER_PED_ID()) && !func_86(PLAYER_ID())) && !func_84(PLAYER_ID(), 0)) && !func_83()) && !bParam4) && !bParam5)
			{
				SET_ENTITY_INVINCIBLE(PLAYER_PED_ID(), 0);
			}
		}
		else if (((!IS_PED_INJURED(PLAYER_PED_ID()) && !func_86(PLAYER_ID())) && !bParam4) && !bParam5)
		{
			SET_ENTITY_INVINCIBLE(PLAYER_PED_ID(), 0);
		}
		Global_71588 = 0;
	}
}

bool func_83()
{
	return IS_BIT_SET(Global_1589819[PLAYER_ID() /*818*/].f_39.f_18, 14);
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
		iVar1 = func_12();
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

int func_86(int iParam0)
{
	if (func_84(iParam0, 0))
	{
		return 1;
	}
	if (func_87())
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

bool func_87()
{
	return IS_BIT_SET(Global_2359302, 3);
}

int func_88(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_89(int iParam0)
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

void func_90()
{
	Global_14732 = 0;
	func_60();
}

int func_91()
{
	if (Global_15866 != 0 || IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_92()
{
	if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		if (func_91())
		{
			return 1;
		}
	}
	return 0;
}

int func_93(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		if (!IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
		if (bParam0)
		{
			if (IS_ENTITY_DEAD(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!IS_ENTITY_DEAD(iVar0, 0))
			{
				if (GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!IS_ENTITY_DEAD(iVar0, 0))
		{
			if (GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!IS_PLAYER_READY_FOR_CUTSCENE(PLAYER_ID()))
	{
		return 0;
	}
	if (!CAN_PLAYER_START_MISSION(PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

bool func_94(int iParam0)
{
	return func_95(func_96(iParam0));
}

bool func_95(char* sParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_96(int iParam0)
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

int func_97()
{
	switch (iLocal_116)
	{
		case 1:
			if (!IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -190.8152f, -801.3224f, 25.45401f, -214.8212f, -866.6472f, 35.0318f, 40f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (!IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), 270.5801f, -1290.954f, 24.16572f, 270.499f, -1238.311f, 34.52738f, 58.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (!IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -3038.987f, 606.4774f, 2.589385f, -3057.039f, 599.7103f, 12.70948f, 19.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (!IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), 170.8581f, 6619.894f, 30.31941f, 183.9522f, 6632.882f, 34.06088f, 22.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (!IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -9.663248f, -938.2167f, 24.29024f, 48.12534f, -959.4428f, 34.60982f, 7.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if (!IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), 283.0487f, -923.3091f, 24.13956f, 301.367f, -871.6924f, 34.4707f, 6.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 11:
			if (!IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), 1053.799f, -772.7601f, 53.31232f, 1112.018f, -772.2864f, 60.16156f, 14.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 16:
			if (!IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -2097.21f, -292.7766f, 8.141721f, -2101.908f, -345.41f, 18.23235f, 54.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 17:
			if (!IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -799.6841f, -1117.781f, 5.659806f, -820.5555f, -1080.585f, 16.38764f, 29.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 18:
			if (!IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -731.1746f, -820.053f, 18.06713f, -670.6583f, -821.2724f, 29.66125f, 8f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 19:
			if (!IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -379.9555f, 6033.261f, 29.74875f, -394.2914f, 6047.678f, 33.9986f, 7f, 0, 1, 0) && !IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -393.6422f, 6056.547f, 29.75011f, -402.4834f, 6047.817f, 33.99312f, 17.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 22:
			if (!IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -294.338f, -833.5905f, 26.65178f, -330.661f, -827.2508f, 38.64983f, 16.5f, 0, 1, 0) && !IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -294.1309f, -836.8602f, 26.72095f, -284.6938f, -814.233f, 37.38612f, 11f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 23:
			if ((!IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -253.9362f, -689.096f, 28.56934f, -278.4698f, -682.0773f, 38.52502f, 9.5f, 0, 1, 0) && !IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -253.3138f, -687.6628f, 28.5611f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, 1, 0)) && !IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -255.6709f, -726.2742f, 28.5187f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 25:
			if (!IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), 114.2641f, -9.324284f, 62.78819f, 75.47891f, 4.897117f, 73.96004f, 7f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 30:
			if (!IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -544.5211f, -1200.006f, 12.87966f, -509.3911f, -1216.772f, 23.72543f, 41f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 31:
			if (!IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -2945.132f, 491.4792f, 13.2899f, -2971.825f, 492.9101f, 18.0671f, 10f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	if (GET_INTERIOR_FROM_ENTITY(PLAYER_PED_ID()) != 0)
	{
		return 1;
	}
	return 0;
}

void func_98()
{
	var uVar0;
	
	if (!bLocal_147)
	{
		if (iLocal_338)
		{
			func_106();
		}
		else
		{
			if (!IS_PED_INJURED(iLocal_99))
			{
				if (IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER_ID(), iLocal_99) || IS_PLAYER_TARGETTING_ENTITY(PLAYER_ID(), iLocal_99))
				{
					if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_99, 25f, 25f, 25f, 0, 1, 0))
					{
						iLocal_338 = 1;
					}
				}
			}
			else
			{
				iLocal_338 = 1;
			}
			func_116(uLocal_103, &uLocal_114);
		}
		if (!bLocal_339)
		{
			if (bLocal_142)
			{
				if (HAS_PICKUP_BEEN_COLLECTED(uLocal_141))
				{
					func_50(joaat("rc_wallets_recovered"), 1);
					STAT_GET_INT(joaat("rc_wallets_recovered"), &uVar0, -1);
					SET_PAD_SHAKE(0, 200, 250);
					func_99(2);
					bLocal_147 = true;
				}
				else if (DOES_BLIP_EXIST(iLocal_104))
				{
					if (VDIST(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), GET_PICKUP_COORDS(uLocal_141)) > 150f)
					{
						if (IS_PED_INJURED(iLocal_100))
						{
							func_271();
						}
						else if (VDIST(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), GET_ENTITY_COORDS(iLocal_100, 1)) > 100f)
						{
							func_271();
						}
					}
				}
			}
		}
	}
}

void func_99(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_106565.f_24989.f_2 < 3)
			{
				if (!IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_100(func_96(iParam0), -1);
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
					func_100(func_96(iParam0), -1);
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
					func_100(func_96(iParam0), -1);
					Global_106565.f_24989.f_4++;
					SET_BIT(&Global_106561, 2);
				}
			}
			break;
	}
}

void func_100(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_101(var uParam0)
{
	*uParam0 = -99;
}

var func_102(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_103(iParam0, bParam1, 145);
}

var func_103(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_104(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && DOES_BLIP_EXIST(uVar0)) && DOES_TEXT_LABEL_EXIST(&(Global_106565.f_28044[iParam2 /*29*/].f_3)))
	{
		SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_106565.f_28044[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_104(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = ADD_BLIP_FOR_ENTITY(uParam0);
	if (IS_ENTITY_A_VEHICLE(uParam0))
	{
		SET_BLIP_SCALE(uVar0, func_105(NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		SET_BLIP_SCALE(uVar0, func_105(NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (IS_ENTITY_AN_OBJECT(uParam0))
	{
		SET_BLIP_SCALE(uVar0, func_105(NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_105(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_106()
{
	int iVar0;
	var uVar1;
	
	iVar0 = joaat("pickup_money_purse");
	if (!bLocal_142)
	{
		SET_BIT(&uVar1, 3);
		SET_BIT(&uVar1, 4);
		SET_BIT(&uVar1, 1);
		uLocal_141 = CREATE_PICKUP(iVar0, GET_DEAD_PED_PICKUP_COORDS(iLocal_99, 1067030938, 1069547520), uVar1, iLocal_345, 1, iLocal_153);
		bLocal_142 = true;
		iLocal_104 = func_107(uLocal_141);
		func_119(&Local_159, cLocal_335, sLocal_331, 4, 0, 0, 0);
		if (DOES_BLIP_EXIST(uLocal_103))
		{
			REMOVE_BLIP(&uLocal_103);
		}
		if (func_109(iLocal_100))
		{
			CLEAR_PED_TASKS(iLocal_100);
		}
	}
	else
	{
		if (!iLocal_143)
		{
			if (!func_175(iLocal_100, 242628503) && !IS_PED_INJURED(iLocal_100))
			{
				OPEN_SEQUENCE_TASK(&uLocal_105);
				if (!IS_ENTITY_AT_COORD(iLocal_100, vLocal_354, 0.5f, 0.5f, 0.5f, 0, 1, 0))
				{
					TASK_GO_STRAIGHT_TO_COORD(0, vLocal_354, 1f, 20000, 1193033728, 1056964608);
				}
				TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER_PED_ID(), 0);
				TASK_PLAY_ANIM(0, cLocal_368, sLocal_369, 1090519040, -2f, -1, 0, 0, 0, 0, 0);
				TASK_PLAY_ANIM(0, cLocal_368, sLocal_371, 1090519040, -2f, -1, 0, 0, 0, 0, 0);
				TASK_PLAY_ANIM(0, cLocal_368, sLocal_370, 1090519040, -2f, -1, 1, 0, 0, 0, 0);
				CLOSE_SEQUENCE_TASK(uLocal_105);
				TASK_PERFORM_SEQUENCE(iLocal_100, uLocal_105);
				CLEAR_SEQUENCE_TASK(&uLocal_105);
			}
		}
		if (iLocal_143)
		{
			if (!bLocal_147)
			{
				if (!IS_PED_INJURED(iLocal_100))
				{
					if (IS_ENTITY_PLAYING_ANIM(iLocal_100, cLocal_145, "pickup_low", 3))
					{
						if (GET_ENTITY_ANIM_CURRENT_TIME(iLocal_100, cLocal_145, "pickup_low") > 0.35f)
						{
							if (DOES_PICKUP_EXIST(uLocal_141))
							{
								func_119(&Local_159, cLocal_335, cLocal_332, 4, 0, 0, 0);
								REMOVE_PICKUP(uLocal_141);
								SET_PED_MONEY(iLocal_100, iLocal_345);
								SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_100, 0);
								SET_PED_AS_NO_LONGER_NEEDED(&iLocal_100);
								func_289(1);
							}
						}
					}
					else if (GET_SCRIPT_TASK_STATUS(iLocal_100, 242628503) == 7)
					{
						CLEAR_PED_TASKS(iLocal_100);
						OPEN_SEQUENCE_TASK(&uLocal_105);
						TASK_PLAY_ANIM(0, cLocal_145, "pickup_low", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						TASK_LOOK_AT_ENTITY(0, PLAYER_PED_ID(), 3000, 2048, 2);
						TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER_PED_ID(), 3000);
						TASK_WANDER_STANDARD(0, 1193033728, 0);
						CLOSE_SEQUENCE_TASK(uLocal_105);
						TASK_PERFORM_SEQUENCE(iLocal_100, uLocal_105);
						CLEAR_SEQUENCE_TASK(&uLocal_105);
						SET_PED_KEEP_TASK(iLocal_100, 1);
					}
				}
			}
		}
		else if (!IS_PED_INJURED(iLocal_100))
		{
			if (DOES_PICKUP_EXIST(uLocal_141))
			{
				if (IS_ENTITY_AT_COORD(iLocal_100, GET_PICKUP_COORDS(uLocal_141), 10f, 10f, 7f, 0, 1, 0))
				{
					CLEAR_PED_TASKS(iLocal_100);
					OPEN_SEQUENCE_TASK(&uLocal_105);
					TASK_FOLLOW_NAV_MESH_TO_COORD(0, GET_PICKUP_COORDS(uLocal_141), 1f, 20000, 1f, 512, 1193033728);
					TASK_TURN_PED_TO_FACE_COORD(0, GET_PICKUP_COORDS(uLocal_141), 0);
					TASK_PLAY_ANIM(0, cLocal_145, "pickup_low", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK_LOOK_AT_ENTITY(0, PLAYER_PED_ID(), 3000, 2048, 2);
					TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER_PED_ID(), 3000);
					TASK_WANDER_STANDARD(0, 1193033728, 0);
					CLOSE_SEQUENCE_TASK(uLocal_105);
					TASK_PERFORM_SEQUENCE(iLocal_100, uLocal_105);
					CLEAR_SEQUENCE_TASK(&uLocal_105);
					SET_PED_KEEP_TASK(iLocal_100, 1);
					iLocal_143 = 1;
				}
			}
		}
	}
}

int func_107(var uParam0)
{
	return func_108(uParam0);
}

int func_108(var uParam0)
{
	var uVar0;
	
	if (!DOES_PICKUP_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = ADD_BLIP_FOR_PICKUP(uParam0);
	SET_BLIP_SCALE(uVar0, func_105(NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return uVar0;
}

int func_109(int iParam0)
{
	if (DOES_ENTITY_EXIST(iParam0))
	{
		if (!IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_110()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	switch (iLocal_109)
	{
		case 1:
		case 2:
			if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_99, PLAYER_PED_ID(), 1))
			{
				CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_99);
				bVar0 = true;
			}
			if (IS_VEHICLE_DRIVEABLE(uLocal_117, 0) && IS_PED_IN_VEHICLE(iLocal_99, uLocal_117, 0))
			{
				if (DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(uLocal_117))
				{
					if (IS_VEHICLE_STUCK_ON_ROOF(uLocal_117))
					{
						bVar0 = true;
					}
				}
			}
			else if (!IS_VEHICLE_DRIVEABLE(uLocal_117, 0) || !func_175(iLocal_99, -1273030092))
			{
				bVar0 = true;
			}
			if (!IS_PED_FLEEING(iLocal_99))
			{
				if (GET_SCRIPT_TASK_STATUS(iLocal_99, -1273030092) == 7)
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				if (!iLocal_138)
				{
					if (IS_PED_IN_VEHICLE(iLocal_99, uLocal_117, 0))
					{
						if (GET_SCRIPT_TASK_STATUS(iLocal_99, 242628503) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_99, 242628503) != 0)
						{
							OPEN_SEQUENCE_TASK(&uLocal_106);
							TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK_SMART_FLEE_PED(0, PLAYER_PED_ID(), 300f, -1, 0, 0);
							CLOSE_SEQUENCE_TASK(uLocal_106);
							TASK_PERFORM_SEQUENCE(iLocal_99, uLocal_106);
							CLEAR_SEQUENCE_TASK(&uLocal_106);
						}
					}
					else if (GET_SCRIPT_TASK_STATUS(iLocal_99, 242628503) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_99, 242628503) != 0)
					{
						OPEN_SEQUENCE_TASK(&uLocal_106);
						TASK_SMART_FLEE_PED(0, PLAYER_PED_ID(), 300f, -1, 0, 0);
						CLOSE_SEQUENCE_TASK(uLocal_106);
						TASK_PERFORM_SEQUENCE(iLocal_99, uLocal_106);
						CLEAR_SEQUENCE_TASK(&uLocal_106);
					}
					iVar1 = GET_NAVMESH_ROUTE_RESULT(iLocal_99);
					if (iVar1 == 2)
					{
						CLEAR_PED_TASKS(iLocal_99);
						if (func_109(PLAYER_PED_ID()))
						{
							TASK_COMBAT_PED(iLocal_99, PLAYER_PED_ID(), 0, 16);
						}
						iLocal_138 = 1;
					}
				}
			}
			break;
	}
}

int func_111()
{
	if (!IS_PED_INJURED(iLocal_99))
	{
		if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_99, 180f, 180f, 50f, 0, 1, 0) || !IS_ENTITY_OCCLUDED(iLocal_99))
		{
			func_112(uLocal_103, iLocal_99, 180f, 1061158912, 0);
			return 1;
		}
		else
		{
			if (Local_159[2 /*10*/].f_7)
			{
				func_178(&Local_159, 2);
			}
			DELETE_PED(&iLocal_99);
			if (IS_VEHICLE_DRIVEABLE(uLocal_117, 0))
			{
				if (IS_ENTITY_OCCLUDED(uLocal_117))
				{
					DELETE_VEHICLE(&uLocal_117);
				}
			}
		}
	}
	else if (VDIST(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), GET_ENTITY_COORDS(iLocal_99, 0)) < 300f)
	{
		return 1;
	}
	return 0;
}

void func_112(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (DOES_BLIP_EXIST(uParam0))
	{
		if ((DOES_ENTITY_EXIST(iParam1) && DOES_ENTITY_EXIST(PLAYER_PED_ID())) && !IS_PED_INJURED(PLAYER_PED_ID()))
		{
			if (IS_ENTITY_A_VEHICLE(iParam1))
			{
				if (IS_VEHICLE_DRIVEABLE(GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
				{
					fVar1 = GET_DISTANCE_BETWEEN_COORDS(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), GET_ENTITY_COORDS(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						SET_BLIP_FLASHES(uParam0, 1);
						SET_BLIP_ALPHA(uParam0, (255 - iVar0));
					}
					else
					{
						SET_BLIP_FLASHES(uParam0, 0);
						SET_BLIP_ALPHA(uParam0, 255);
					}
				}
			}
			else if (IS_ENTITY_A_PED(iParam1))
			{
				if (!IS_PED_INJURED(GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
				{
					fVar1 = GET_DISTANCE_BETWEEN_COORDS(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), GET_ENTITY_COORDS(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						SET_BLIP_FLASHES(uParam0, 1);
						SET_BLIP_ALPHA(uParam0, (255 - iVar0));
					}
					else
					{
						SET_BLIP_FLASHES(uParam0, 0);
						SET_BLIP_ALPHA(uParam0, 255);
					}
				}
			}
		}
	}
}

void func_113(int iParam0, char* sParam1, int iParam2)
{
	_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_114(iParam2), 1);
}

int func_114(int iParam0)
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

float func_115(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		vVar0 = { GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar3 = { GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		vVar3 = { GET_ENTITY_COORDS(iParam1, 0) };
	}
	return GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, iParam2);
}

void func_116(var uParam0, var uParam1)
{
	if (DOES_BLIP_EXIST(uParam0))
	{
		if (GET_GAME_TIMER() > *uParam1 + 500)
		{
			if (GET_BLIP_COLOUR(uParam0) == 1)
			{
				SET_BLIP_AS_FRIENDLY(uParam0, 1);
			}
			else
			{
				SET_BLIP_AS_FRIENDLY(uParam0, 0);
				SET_BLIP_COLOUR(uParam0, 1);
			}
			*uParam1 = GET_GAME_TIMER();
		}
		if (!IS_HELP_MESSAGE_BEING_DISPLAYED() && func_117(0))
		{
			func_99(1);
		}
	}
}

var func_117(int iParam0)
{
	return IS_BIT_SET(Global_106561, iParam0);
}

void func_118()
{
	switch (iLocal_109)
	{
		case 1:
		case 2:
			if (IS_VEHICLE_DRIVEABLE(uLocal_117, 0))
			{
				if (iLocal_338)
				{
					if (IS_PED_SITTING_IN_VEHICLE(iLocal_99, uLocal_117) || GET_SCRIPT_TASK_STATUS(iLocal_99, -1273030092) == 1)
					{
						TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_99, uLocal_117, vLocal_95, 8, 35f, 786469, 10f, 10f, 1);
					}
					else
					{
						TASK_SMART_FLEE_PED(iLocal_99, PLAYER_PED_ID(), 300f, -1, 0, 0);
					}
				}
				else
				{
					if (!DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(uLocal_117))
					{
						ADD_VEHICLE_STUCK_CHECK_WITH_WARP(uLocal_117, 0.1f, 1000, 0, 0, 0, -1);
					}
					TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_99, uLocal_117, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 8, 35f, 786469, 10f, 10f, 1);
				}
			}
			else
			{
				TASK_SMART_FLEE_PED(iLocal_99, PLAYER_PED_ID(), 300f, -1, 0, 0);
			}
			break;
		
		case 4:
			if (!iLocal_338)
			{
				OPEN_SEQUENCE_TASK(&uLocal_105);
				TASK_FOLLOW_NAV_MESH_TO_COORD(0, 182.61f, 6637.91f, 30.54f, 3f, 20000, 0.25f, 1, 1193033728);
				TASK_FOLLOW_NAV_MESH_TO_COORD(0, 240.53f, 6694.1f, 28.62f, 3f, 20000, 0.25f, 1, 1193033728);
				TASK_SMART_FLEE_PED(0, PLAYER_PED_ID(), 300f, -1, 0, 0);
				CLOSE_SEQUENCE_TASK(uLocal_105);
				TASK_PERFORM_SEQUENCE(iLocal_99, uLocal_105);
				CLEAR_SEQUENCE_TASK(&uLocal_105);
			}
			else
			{
				TASK_SMART_FLEE_PED(iLocal_99, PLAYER_PED_ID(), 300f, -1, 0, 0);
			}
			break;
		
		default:
			if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -3044.11f, 594.34f, 6.73f, 1) < 5f)
			{
				TASK_SMART_FLEE_COORD(iLocal_99, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
				CLEAR_SEQUENCE_TASK(&uLocal_105);
			}
			else if (iLocal_338)
			{
				TASK_SMART_FLEE_PED(iLocal_99, PLAYER_PED_ID(), 300f, -1, 0, 0);
			}
			else
			{
				TASK_SMART_FLEE_COORD(iLocal_99, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
			}
			break;
	}
	if (!IS_PED_INJURED(iLocal_99))
	{
		SET_PED_KEEP_TASK(iLocal_99, 1);
	}
}

bool func_119(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	Global_2621441 = 0;
	return func_120(sParam2, iParam3, 0);
}

int func_120(char* sParam0, int iParam1, bool bParam2)
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
					func_60();
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
		if (func_59(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_58();
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
				func_57();
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
				if (func_56())
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
			if (func_55())
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
			func_54();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_53();
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
		func_60();
	}
	return 0;
}

bool func_121()
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	vVar1 = { 6f, 6f, 6f };
	vVar4 = { -6f, -6f, -6f };
	if (!IS_PED_INJURED(iLocal_100))
	{
		if (IS_PLAYER_PLAYING(PLAYER_ID()))
		{
			if (IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER_ID(), iLocal_100))
			{
				iLocal_111++;
				if (iLocal_111 > 60)
				{
					bVar0 = true;
				}
			}
			else
			{
				iLocal_111 = 0;
			}
		}
		if (IS_BULLET_IN_AREA(GET_PED_BONE_COORDS(iLocal_100, 31086, 0f, 0f, 0f), 2f, 1))
		{
			bVar0 = true;
		}
		vVar1 = { vVar1 + GET_PED_BONE_COORDS(iLocal_100, 31086, 0f, 0f, 0f) };
		vVar4 = { vVar4 + GET_PED_BONE_COORDS(iLocal_100, 31086, 0f, 0f, 0f) };
		if ((IS_PROJECTILE_TYPE_IN_AREA(vVar4, vVar1, joaat("weapon_smokegrenade"), 1) || IS_PROJECTILE_TYPE_IN_AREA(vVar4, vVar1, joaat("weapon_grenade"), 1)) || IS_PROJECTILE_TYPE_IN_AREA(vVar4, vVar1, joaat("weapon_stickybomb"), 1))
		{
			bVar0 = true;
		}
		if (_0x2F09F7976C512404(GET_PED_BONE_COORDS(iLocal_100, 31086, 0f, 0f, 0f), 12f))
		{
			bVar0 = true;
		}
		if (IS_EXPLOSION_IN_SPHERE(-1, GET_PED_BONE_COORDS(iLocal_100, 31086, 0f, 0f, 0f), 50f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!func_123())
		{
		}
		else
		{
			bVar0 = false;
			if (GET_SCRIPT_TASK_STATUS(iLocal_100, 474215631) != 1)
			{
				if (func_122(iLocal_100))
				{
					TASK_COWER(iLocal_100, 2000);
				}
			}
		}
	}
	return bVar0;
}

int func_122(int iParam0)
{
	if (func_109(iParam0))
	{
		if (!IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_123()
{
	if (func_109(iLocal_99))
	{
		if (func_115(iLocal_100, iLocal_99, 1) < 22f)
		{
			return 1;
		}
	}
	return 0;
}

bool func_124()
{
	bool bVar0;
	
	bVar0 = false;
	if (DOES_ENTITY_EXIST(iLocal_100))
	{
		if (IS_PED_INJURED(iLocal_100))
		{
			bVar0 = true;
		}
		else
		{
			if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_100, PLAYER_PED_ID(), 1) && IS_PED_RAGDOLL(iLocal_100))
			{
				bVar0 = true;
				CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_100);
			}
			if (IS_BULLET_IN_AREA(GET_ENTITY_COORDS(iLocal_100, 1), 1f, 1))
			{
				bVar0 = true;
			}
			if (func_125(iLocal_100, 0, 1116471296, 1126825984, 0, 1, 0, 0))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		if (func_123())
		{
			bVar0 = false;
			if (GET_SCRIPT_TASK_STATUS(iLocal_100, 474215631) != 1)
			{
				if (func_122(iLocal_100))
				{
					TASK_COWER(iLocal_100, 2000);
				}
			}
		}
		else if (!IS_PED_INJURED(iLocal_99))
		{
			if (GET_SCRIPT_TASK_STATUS(iLocal_99, 1805844857) == 7)
			{
				SET_PED_COMBAT_ATTRIBUTES(iLocal_99, 17, 1);
				SET_PED_COMBAT_ATTRIBUTES(iLocal_99, 13, 0);
				TASK_SMART_FLEE_PED(iLocal_99, PLAYER_PED_ID(), 300f, -1, 0, 0);
			}
		}
	}
	return bVar0;
}

int func_125(int iParam0, bool bParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	vector3 vVar0;
	
	if (func_109(PLAYER_PED_ID()) && func_109(iParam0))
	{
		if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (func_139(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!IS_PED_ARMED(PLAYER_PED_ID(), 6))
		{
			if (IS_PED_IN_MELEE_COMBAT(PLAYER_PED_ID()))
			{
				vVar0 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) - GET_ENTITY_COORDS(iParam0, 1) };
				if ((((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) + (vVar0.z * vVar0.z)) <= 5f)
				{
					return func_138(PLAYER_PED_ID(), iParam0, iParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_126(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_126(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_109(PLAYER_PED_ID()) && func_109(iParam0))
	{
		if (func_137(iParam0) || IS_PLAYER_TARGETTING_ENTITY(PLAYER_ID(), iParam0))
		{
			if (IS_PED_ARMED(PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_127(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_127(int iParam0, float fParam1)
{
	return func_128(iParam0, PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_128(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	int iVar4;
	
	iVar4 = func_136(iParam0, iParam1);
	if (!func_109(iParam0) || !func_109(iParam1))
	{
		if (iVar4 != -1)
		{
			func_135(&(Local_49[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_132(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_131();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_49[iVar4 /*4*/].f_1 = iParam0;
		Local_49[iVar4 /*4*/].f_2 = iParam1;
	}
	vVar1 = { GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_129(&(Local_49[iVar4 /*4*/]), vVar1, iParam1, &(Local_49[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (GET_GAME_TIMER() - Local_49[iVar4 /*4*/].f_3) < iParam4);
}

int func_129(var uParam0, vector3 vParam1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	vector3 vVar1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_109(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_130(iParam4, iParam7) };
		*uParam0 = START_SHAPE_TEST_LOS_PROBE(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &vVar1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (IS_ENTITY_A_PED(iVar7))
	{
		func_109(iVar7);
		if (GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7) == iParam4)
		{
			if (bLocal_90)
			{
				DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, GET_ENTITY_COORDS(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = GET_GAME_TIMER();
			return 1;
		}
		return 0;
	}
	if (IS_ENTITY_A_VEHICLE(iVar7))
	{
		func_109(iVar7);
		if (IS_PED_IN_ANY_VEHICLE(iParam4, 0))
		{
			if (GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7) == GET_VEHICLE_PED_IS_IN(iParam4, 0))
			{
				if (bLocal_90)
				{
					DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, GET_ENTITY_COORDS(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = GET_GAME_TIMER();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_130(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return GET_ENTITY_COORDS(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return GET_PED_BONE_COORDS(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return GET_PED_BONE_COORDS(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return GET_PED_BONE_COORDS(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return GET_PED_BONE_COORDS(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return GET_PED_BONE_COORDS(iParam0, 36864, 0f, 0f, 0f);
	}
	return GET_ENTITY_COORDS(iParam0, 1);
}

int func_131()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49)
	{
		if ((Local_49[iVar0 /*4*/] == 0 && Local_49[iVar0 /*4*/].f_1 == 0) && Local_49[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_132(int iParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	vVar0 = { func_134(GET_ENTITY_COORDS(iParam1, 1) - GET_ENTITY_COORDS(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar3 = { GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		vVar3 = { func_134(GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_133(vVar3, vVar0);
	if (fVar6 <= COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_133(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_134(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

void func_135(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_136(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49)
	{
		if (Local_49[iVar0 /*4*/].f_1 == iParam0 && Local_49[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_137(var uParam0)
{
	if (IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER_ID(), uParam0) && IS_PED_ARMED(PLAYER_PED_ID(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_138(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { GET_ENTITY_FORWARD_VECTOR(uParam0) };
	vVar3 = { GET_ENTITY_COORDS(uParam1, 1) - GET_ENTITY_COORDS(uParam0, 1) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / VDIST(vVar3, 0f, 0f, 0f)) > COS(uParam2);
}

int func_139(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_109(PLAYER_PED_ID()) && func_109(uParam0))
	{
		GET_CURRENT_PED_WEAPON(PLAYER_PED_ID(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_143(uParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_140(uParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (IS_PED_CURRENT_WEAPON_SILENCED(PLAYER_PED_ID()))
			{
				if (IS_PED_SHOOTING(PLAYER_PED_ID()))
				{
					if (IS_BULLET_IN_AREA(GET_ENTITY_COORDS(uParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_143(uParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_140(uParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_140(var uParam0, float fParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { GET_ENTITY_COORDS(uParam0, 1) };
	vVar3 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar3.x = (vVar3.x + fParam1);
	vVar3.y = (vVar3.y + fParam1);
	vVar3.z = (vVar3.z + fParam1);
	if (bParam2)
	{
		if (((_IS_PROJECTILE_TYPE_IN_RADIUS(GET_ENTITY_COORDS(uParam0, 1), joaat("weapon_grenade"), fParam1, 1) || _IS_PROJECTILE_TYPE_IN_RADIUS(GET_ENTITY_COORDS(uParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || _IS_PROJECTILE_TYPE_IN_RADIUS(GET_ENTITY_COORDS(uParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || _IS_PROJECTILE_TYPE_IN_RADIUS(GET_ENTITY_COORDS(uParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_141(uParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_141(uParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (IS_PROJECTILE_IN_AREA(vVar0, vVar3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_141(var uParam0, float fParam1)
{
	var uVar0;
	vector3 vVar1;
	
	if ((((_GET_PROJECTILE_NEAR_PED(uParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || _GET_PROJECTILE_NEAR_PED(uParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || _GET_PROJECTILE_NEAR_PED(uParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || _GET_PROJECTILE_NEAR_PED(uParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || _GET_PROJECTILE_NEAR_PED(uParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_142(uParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_142(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	vVar0 = { func_134(vParam1 - GET_ENTITY_COORDS(uParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		vVar3 = { GET_ENTITY_FORWARD_VECTOR(uParam0) };
	}
	else
	{
		vVar3 = { func_134(GET_PED_BONE_COORDS(uParam0, 31086, 0f, 5f, 0f) - GET_PED_BONE_COORDS(uParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_133(vVar3, vVar0);
	if (fVar6 <= COS((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_143(var uParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (IS_PED_SHOOTING(PLAYER_PED_ID()))
		{
			if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), uParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (IS_BULLET_IN_AREA(GET_ENTITY_COORDS(uParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

void func_144()
{
	if (bLocal_142 || IS_ENTITY_DEAD(iLocal_99, 0))
	{
		func_173(&uLocal_372, 0, 0);
	}
	else
	{
		func_145(&uLocal_372, iLocal_99, "ATM_CHASEHINT", 0, 1, 1, 1);
	}
}

void func_145(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_146(uParam0, uParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_146(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_147(uParam0, uParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_147(var uParam0, var uParam1, vector3 vParam2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1))
	{
		func_173(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_148(uParam0, uParam1, vParam2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_148(var uParam0, var uParam1, vector3 vParam2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (IS_STRING_NULL(iVar0))
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_95(iVar0))
	{
		func_172();
	}
	if (func_171(uParam1) && IS_ENTITY_VISIBLE(uParam1))
	{
		iVar1 = 0;
		if (IS_ENTITY_A_PED(uParam1))
		{
			_0x7D7A2E43E74E2EB8(GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1));
			GET_PED_FLOOD_INVINCIBILITY(GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1), 1);
			if (IS_TRACKED_PED_VISIBLE(GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (IS_ENTITY_A_VEHICLE(uParam1))
		{
			TRACK_VEHICLE_VISIBILITY(GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1));
			if (IS_VEHICLE_VISIBLE(GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (IS_ENTITY_AN_OBJECT(uParam1))
		{
			TRACK_OBJECT_VISIBILITY(GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam1));
			if (IS_OBJECT_VISIBLE(GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_166(uParam0, bParam7, bParam9, 0))
			{
				func_163(uParam0, uParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_152(iVar0))
				{
					if ((IS_STRING_NULL(uParam0->f_3) && !IS_STRING_NULL(iVar0)) && IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!func_95(iVar0))
							{
								func_100(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_151(1);
								}
							}
						}
					}
				}
			}
			else if (func_152(iVar0))
			{
				if (IS_STRING_NULL(uParam0->f_3) && !IS_STRING_NULL(iVar0))
				{
					if (((IS_ENTITY_ON_SCREEN(uParam1) && iVar1) && !IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!func_95(iVar0))
						{
							func_100(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_151(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!IS_STRING_NULL(sParam5))
			{
				if (func_95(sParam5))
				{
					CLEAR_HELP(1);
				}
			}
			if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1))
			{
				if (IS_PED_IN_ANY_BOAT(PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(3) == 3 || _0xEE778F8C7E1142E2(3) == 4)
					{
						func_173(uParam0, iVar0, 1);
					}
				}
				else if (IS_PED_IN_ANY_HELI(PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
					{
						func_173(uParam0, iVar0, 1);
					}
				}
				else if (IS_PED_IN_ANY_PLANE(PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
					{
						func_173(uParam0, iVar0, 1);
					}
				}
				else if (IS_PED_IN_ANY_SUB(PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
					{
						func_173(uParam0, iVar0, 1);
					}
				}
				else if (IS_PED_ON_ANY_BIKE(PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
					{
						func_173(uParam0, iVar0, 1);
					}
				}
				else if (GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_173(uParam0, iVar0, 1);
				}
			}
			if (!func_166(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_150(uParam0))
				{
					func_149(uParam0);
				}
			}
		}
	}
	else
	{
		func_173(uParam0, iVar0, 0);
	}
}

void func_149(var uParam0)
{
	if (func_171(PLAYER_PED_ID()))
	{
		TASK_CLEAR_LOOK_AT(PLAYER_PED_ID());
	}
	if (IS_GAMEPLAY_HINT_ACTIVE())
	{
		SET_CINEMATIC_BUTTON_ACTIVE(1);
		STOP_GAMEPLAY_HINT(0);
		STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		_STOP_SCREEN_EFFECT("FocusIn");
		if (uParam0->f_11)
		{
			_START_SCREEN_EFFECT("FocusOut", 0, 0);
			PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_150(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_151(bool bParam0)
{
	switch (Global_36425)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_106565.f_10043.f_100++;
			}
			return Global_106565.f_10043.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_106565.f_10043.f_101++;
			}
			return Global_106565.f_10043.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_106565.f_10043.f_102++;
			}
			return Global_106565.f_10043.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_152(char* sParam0)
{
	if (!func_153(1, 1, 0))
	{
		if ((!IS_STRING_NULL_OR_EMPTY(sParam0) && func_95(sParam0)) || func_95("CMN_HINT"))
		{
			CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_36425)
	{
		case 0:
		case 3:
			if (func_151(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_151(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_151(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_153(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!IS_PLAYER_CONTROL_ON(PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_76(0))
	{
		return 0;
	}
	if (func_162())
	{
		return 0;
	}
	if (_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_68807)
	{
		return 0;
	}
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53675)
	{
		return 0;
	}
	if (bParam1)
	{
		if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1))
		{
			if (IS_PED_IN_ANY_BOAT(PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(3) == 3 || _0xEE778F8C7E1142E2(3) == 4)
				{
					return 0;
				}
			}
			else if (IS_PED_IN_ANY_HELI(PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
				{
					return 0;
				}
			}
			else if (IS_PED_IN_ANY_PLANE(PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
				{
					return 0;
				}
			}
			else if (IS_PED_IN_ANY_SUB(PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
				{
					return 0;
				}
			}
			else if (IS_PED_ON_ANY_BIKE(PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
				{
					return 0;
				}
			}
			else if (GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	if ((func_161() || func_160(Global_4456448.f_161209)) || func_159())
	{
		if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
		{
			uVar0 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
			iVar1 = func_158(PLAYER_PED_ID(), 0);
			if (((_0xE33FFA906CE74880(uVar0, iVar1) || (GET_ENTITY_MODEL(uVar0) == joaat("apc") && iVar1 != -1)) || (GET_ENTITY_MODEL(uVar0) == joaat("akula") && iVar1 != -1)) || (((GET_ENTITY_MODEL(uVar0) == joaat("riot2") && iVar1 == 0) && func_157(uVar0, 10)) && GET_VEHICLE_MOD(uVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1680665)
	{
		return 0;
	}
	if (func_154(PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_154(int iParam0)
{
	if (iParam0 != func_156())
	{
		if (func_155(iParam0, 1, 1))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
		else if ((Global_1312867 && iParam0 == PLAYER_ID()) && func_155(iParam0, 1, 0))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
	}
	return 0;
}

int func_155(int iParam0, bool bParam1, bool bParam2)
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

int func_156()
{
	return -1;
}

int func_157(var uParam0, int iParam1)
{
	if (IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		if (GET_NUM_MOD_KITS(uParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (GET_NUM_VEHICLE_MODS(uParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_158(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!IS_PED_INJURED(iParam0))
	{
		if (IS_PED_IN_ANY_VEHICLE(iParam0, iParam1))
		{
			uVar0 = GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
			if (DOES_ENTITY_EXIST(uVar0))
			{
				iVar1 = GET_VEHICLE_MODEL_NUMBER_OF_SEATS(GET_ENTITY_MODEL(uVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!IS_VEHICLE_SEAT_FREE(uVar0, iVar3, 0))
					{
						if (GET_PED_IN_VEHICLE_SEAT(uVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_159()
{
	return Global_2448756.f_16;
}

bool func_160(int iParam0)
{
	return iParam0 == 51;
}

var func_161()
{
	return Global_2448756.f_15;
}

bool func_162()
{
	return GET_GAME_TIMER() <= Global_17411.f_5878 + 100;
}

void func_163(var uParam0, var uParam1, vector3 vParam2, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1319096 == 1)
	{
		return;
	}
	if (IS_ENTITY_DEAD(uParam1, 0))
	{
		func_173(uParam0, 0, 0);
	}
	if (func_63(vParam2, 0f, 0f, 0f, 0))
	{
		if (IS_ENTITY_A_PED(uParam1))
		{
			uVar0 = GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1);
			if (!IS_PED_IN_ANY_VEHICLE(uVar0, 0))
			{
				if (IS_PED_A_PLAYER(uVar0))
				{
					if (!func_164())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (IS_PED_MALE(uVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	SET_CINEMATIC_BUTTON_ACTIVE(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	SET_GAMEPLAY_ENTITY_HINT(uParam1, vParam2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	TASK_LOOK_AT_ENTITY(PLAYER_PED_ID(), uParam1, -1, iVar3, iVar4);
	_START_SCREEN_EFFECT("FocusIn", 0, 0);
	START_AUDIO_SCENE("HINT_CAM_SCENE");
	PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_164()
{
	return func_165(PLAYER_ID());
}

int func_165(var uParam0)
{
	if (GET_ENTITY_MODEL(GET_PLAYER_PED(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_166(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1))
				{
					if (func_170(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_169(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_169(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_170(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_150(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1))
					{
						if (!func_170(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_169(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_169(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_170(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1))
				{
					if (!func_170(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_169(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_169(bParam1, bParam2, bParam3) || IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1) || GET_IS_TASK_ACTIVE(PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_170(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1))
					{
						if (func_168(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_167(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1) || func_167(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1) || GET_IS_TASK_ACTIVE(PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_168(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_150(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_153(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_172();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_167(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		if (!IS_PLAYER_TARGETTING_ANYTHING(PLAYER_ID()))
		{
			DISABLE_CONTROL_ACTION(0, 140, 1);
			DISABLE_CONTROL_ACTION(0, 80, 1);
			if (IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_168(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		DISABLE_CONTROL_ACTION(0, 80, 1);
		if (IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_169(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		if (!IS_PLAYER_TARGETTING_ANYTHING(PLAYER_ID()))
		{
			DISABLE_CONTROL_ACTION(0, 140, 1);
			DISABLE_CONTROL_ACTION(0, 80, 1);
			if (IS_DISABLED_CONTROL_PRESSED(0, 80) && GET_GAME_TIMER() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_170(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		DISABLE_CONTROL_ACTION(0, 80, 1);
		if (IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (IS_DISABLED_CONTROL_PRESSED(0, 80) && GET_GAME_TIMER() > Global_116)
			{
				SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_171(var uParam0)
{
	if (DOES_ENTITY_EXIST(uParam0))
	{
		if (IS_ENTITY_A_VEHICLE(uParam0))
		{
			if (IS_VEHICLE_DRIVEABLE(GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0), 0))
			{
				return 1;
			}
		}
		else if (IS_ENTITY_A_PED(uParam0))
		{
			if (!IS_PED_INJURED(GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0)))
			{
				return 1;
			}
		}
		else if (IS_ENTITY_AN_OBJECT(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_172()
{
	SET_BIT(&Global_2424, 4);
}

void func_173(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_2528542.f_4582, 26))
		{
			return;
		}
	}
	if (IS_GAMEPLAY_HINT_ACTIVE())
	{
		STOP_GAMEPLAY_HINT(iParam2);
		_STOP_SCREEN_EFFECT("FocusIn");
		STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			_START_SCREEN_EFFECT("FocusOut", 0, 0);
			PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	SET_CINEMATIC_BUTTON_ACTIVE(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (IS_STRING_NULL(sVar0))
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!IS_STRING_NULL(uParam0->f_3))
	{
		if (func_95(uParam0->f_3))
		{
			CLEAR_HELP(1);
		}
	}
	if (!IS_STRING_NULL(sVar0))
	{
		if (func_95(sVar0))
		{
			CLEAR_HELP(1);
		}
	}
}

float func_174(var uParam0, vector3 vParam1, int iParam4)
{
	vector3 vVar0;
	
	if (!IS_ENTITY_DEAD(uParam0, 0))
	{
		vVar0 = { GET_ENTITY_COORDS(uParam0, 1) };
	}
	else
	{
		vVar0 = { GET_ENTITY_COORDS(uParam0, 0) };
	}
	return GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, iParam4);
}

int func_175(int iParam0, int iParam1)
{
	if (func_122(iParam0))
	{
		if (GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_176(char* sParam0)
{
	func_177(sParam0);
}

void func_177(var uParam0)
{
	if (ARE_STRINGS_EQUAL(uParam0, uParam0))
	{
	}
}

void func_178(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_179()
{
	OPEN_SEQUENCE_TASK(&uLocal_105);
	TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_99, 750);
	TASK_PLAY_ANIM(0, cLocal_368, sLocal_369, 8f, -8f, -1, 0, 0, 0, 0, 0);
	TASK_PLAY_ANIM(0, cLocal_368, sLocal_370, 8f, -2f, -1, 0, 0, 0, 0, 0);
	TASK_PLAY_ANIM(0, cLocal_368, sLocal_371, 8f, -2f, -1, 0, 0, 0, 0, 0);
	TASK_PLAY_ANIM(0, cLocal_368, sLocal_369, 8f, -2f, -1, 0, 0, 0, 0, 0);
	TASK_PLAY_ANIM(0, cLocal_368, sLocal_370, 8f, -2f, -1, 0, 0, 0, 0, 0);
	TASK_PLAY_ANIM(0, cLocal_368, sLocal_371, 8f, -2f, -1, 1, 0, 0, 0, 0);
	CLOSE_SEQUENCE_TASK(uLocal_105);
	TASK_PERFORM_SEQUENCE(iLocal_100, uLocal_105);
	CLEAR_SEQUENCE_TASK(&uLocal_105);
	if (DOES_BLIP_EXIST(uLocal_102))
	{
		REMOVE_BLIP(&uLocal_102);
	}
	if (!DOES_BLIP_EXIST(uLocal_103))
	{
		uLocal_103 = func_102(iLocal_99, 1, 0);
	}
	_0x75A16C3DA34F1245(uLocal_103, 1);
	SET_CREATE_RANDOM_COPS(0);
	SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	func_118();
	if ((VDIST(GET_ENTITY_COORDS(iLocal_100, 0), -2956.26f, 487.97f, 15.46f) > 5f && GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -203.72f, -861.8f, 29.27f, 1) > 5f) && GET_DISTANCE_BETWEEN_COORDS(vLocal_95, 288.46f, -1256.71f, 28.44f, 1) > 5f)
	{
		if (func_115(PLAYER_PED_ID(), iLocal_100, 1) < 50f)
		{
			func_119(&Local_159, cLocal_335, sLocal_327, 3, 0, 0, 0);
			iLocal_137 = 1;
		}
	}
	iLocal_110 = GET_GAME_TIMER();
	SETTIMERA(0);
	if (func_109(PLAYER_PED_ID()))
	{
		STOP_PED_SPEAKING(PLAYER_PED_ID(), 1);
	}
	func_180(1);
}

int func_180(int iParam0)
{
	if (func_182())
	{
		Global_106555 = 1;
		Global_106552 = GET_GAME_TIMER();
		if (func_181(Global_106554))
		{
			func_99(0);
		}
		SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_181(Global_106554))
		{
			FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

int func_181(int iParam0)
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

int func_182()
{
	switch (func_183(&Global_25824, 0, 5, 0, GET_ID_OF_THIS_THREAD()))
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

int func_183(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_187(0))
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
		if (!func_185(iParam2))
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
			func_184(uParam0, iParam4);
		}
	}
	return 2;
}

void func_184(var uParam0, int iParam1)
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

bool func_185(int iParam0)
{
	return func_186(iParam0, Global_36425);
}

int func_186(int iParam0, int iParam1)
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

int func_187(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_185(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_188()
{
	if (iLocal_346 == -1)
	{
		if (IS_FIRST_PERSON_AIM_CAM_ACTIVE())
		{
			if (IS_ENTITY_ON_SCREEN(iLocal_99))
			{
				iLocal_346 = GET_GAME_TIMER();
			}
		}
	}
	else if (GET_GAME_TIMER() > iLocal_346 + 1000)
	{
		return 1;
	}
	if (IS_EXPLOSION_IN_SPHERE(-1, vLocal_95, 50f))
	{
		return 1;
	}
	if ((GET_GAME_TIMER() - iLocal_347) > 30000)
	{
		if (!IS_ENTITY_OCCLUDED(iLocal_99))
		{
			return 1;
		}
		else
		{
			func_271();
		}
	}
	if (DOES_BLIP_EXIST(uLocal_103))
	{
		if ((GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -3044.11f, 594.34f, 6.73f, 1) > 5f && GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -712.9f, -819.32f, 22.73f, 1) > 5f) && GET_DISTANCE_BETWEEN_COORDS(vLocal_95, 24.13f, -946.84f, 28.36f, 1) > 5f)
		{
			if (IS_SPHERE_VISIBLE(GET_ENTITY_COORDS(iLocal_99, 0), 2.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_189()
{
	if (VDIST(vLocal_95, -3044.06f, 594.93f, 6.74f) < 5f)
	{
		if (!DOES_BLIP_EXIST(uLocal_103))
		{
			if (func_109(iLocal_100) && func_109(PLAYER_PED_ID()))
			{
				if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_100, 60f, 90f, 12f, 0, 1, 0))
				{
					uLocal_103 = func_102(iLocal_99, 1, 0);
					_0x75A16C3DA34F1245(uLocal_103, 0);
				}
			}
		}
		else
		{
			func_116(uLocal_103, &uLocal_114);
		}
	}
	else if (!DOES_BLIP_EXIST(uLocal_103))
	{
		if (func_109(iLocal_100) && func_109(PLAYER_PED_ID()))
		{
			if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_100, 90f, 90f, 8f, 0, 1, 0))
			{
				uLocal_103 = func_102(iLocal_99, 1, 0);
				_0x75A16C3DA34F1245(uLocal_103, 0);
			}
		}
	}
	else
	{
		func_116(uLocal_103, &uLocal_114);
	}
	if (iLocal_347 == -1)
	{
		iLocal_347 = GET_GAME_TIMER();
	}
}

int func_190()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	
	vVar0 = { vLocal_95 };
	vVar3 = { 0f, 0f, uLocal_98 };
	vVar6 = { 10f, 10f, 5f };
	if (iLocal_109 == 1)
	{
		func_214();
		if (VDIST(vLocal_95, -203.758f, -861.738f, 29.2684f) < 5f)
		{
			vLocal_118 = { -197.9643f, -868.5554f, 28.2738f };
			fLocal_124 = 196f;
			vLocal_121 = { -187.5415f, -858.1728f, 28.1863f };
			fLocal_125 = 160.391f;
			vLocal_348 = { -259.0351f, -865.7119f, 28f };
			vLocal_351 = { -130.3981f, -908.8096f, 40f };
			ASSISTED_MOVEMENT_REQUEST_ROUTE("ATM_1");
			REQUEST_MODEL(iLocal_158);
			while (!HAS_MODEL_LOADED(iLocal_158))
			{
				if (func_201())
				{
					func_271();
				}
				WAIT(0);
			}
			SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_158, 1);
		}
		else
		{
			vLocal_118 = { -2968.5f, 494.48f, 14.82f };
			fLocal_124 = 55.24f;
			vLocal_121 = { -2973.03f, 496.38f, 14.96f };
			fLocal_125 = 3.18f;
			vLocal_348 = { -259.0351f, -865.7119f, 28f };
			vLocal_351 = { -130.3981f, -908.8096f, 40f };
			REQUEST_MODEL(iLocal_158);
			while (!HAS_MODEL_LOADED(iLocal_158))
			{
				if (func_201())
				{
					func_271();
				}
				WAIT(0);
			}
			SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_158, 1);
		}
	}
	else if (iLocal_109 == 2)
	{
		func_214();
		vLocal_118 = { 283.31f, -1249.51f, 28.95f };
		fLocal_124 = 78.25f;
		vLocal_121 = { 288.9906f, -1248.443f, 28.2847f };
		fLocal_125 = 75.9756f;
		vLocal_348 = { 266.3643f, -1313.829f, 28.59103f };
		vLocal_351 = { 265.1489f, -1215.932f, 36.20192f };
		REQUEST_MODEL(iLocal_158);
		while (!HAS_MODEL_LOADED(iLocal_158))
		{
			if (func_201())
			{
				func_271();
			}
			WAIT(0);
		}
		SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_158, 1);
	}
	else if (iLocal_109 == 3)
	{
		func_214();
		vLocal_121 = { -1587.15f, -539.9152f, 34.3644f };
		fLocal_125 = 327f;
		vLocal_348 = { -1596.203f, -474.8844f, 32f };
		vLocal_351 = { -1595.572f, -565.8368f, 48f };
	}
	else if (iLocal_109 == 4)
	{
		func_214();
		vLocal_118 = { 181.2355f, 6632.627f, 30.5732f };
		fLocal_124 = 182f;
		vLocal_121 = { 200.0727f, 6630.587f, 30.517f };
		fLocal_125 = 165f;
		vLocal_348 = { 178.1817f, 6660.375f, 31f };
		vLocal_351 = { 179.1249f, 6530.043f, 38f };
		_0xD79185689F8FD5DF(0);
		SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 0, 1);
		REQUEST_MODEL(iLocal_158);
		while (!HAS_MODEL_LOADED(iLocal_158))
		{
			if (func_201())
			{
				func_271();
			}
			WAIT(0);
		}
		SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_158, 1);
	}
	else if (iLocal_109 == 5)
	{
		func_214();
	}
	if (func_192())
	{
		CLEAR_AREA(vLocal_95, vVar6.x, 0, 0, 0, 0);
		uLocal_107 = ADD_SCENARIO_BLOCKING_AREA(vLocal_95 - vVar6, vLocal_95 + vVar6, 0, 1, 1, 1);
		iLocal_100 = CREATE_PED(5, iLocal_157, vLocal_95, uLocal_98, 1, 1);
		SET_PED_COMBAT_ATTRIBUTES(iLocal_100, 13, 0);
		SET_PED_COMBAT_ATTRIBUTES(iLocal_100, 11, 1);
		SET_PED_COMBAT_ATTRIBUTES(iLocal_100, 17, 0);
		SET_PED_COMPONENT_VARIATION(iLocal_100, 6, 1, 0, 0);
		SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_100, 1, 1);
		SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_100, 1);
		SET_PED_CAN_BE_TARGETTED(iLocal_100, 0);
		SET_AMBIENT_VOICE_NAME(iLocal_100, sLocal_367);
		SET_PED_MONEY(iLocal_100, 0);
		if (iLocal_115 == 1)
		{
			SET_PED_COMPONENT_VARIATION(iLocal_100, 0, 0, 0, 0);
			SET_PED_COMPONENT_VARIATION(iLocal_100, 2, 0, 1, 0);
			SET_PED_COMPONENT_VARIATION(iLocal_100, 3, 0, 1, 0);
			SET_PED_COMPONENT_VARIATION(iLocal_100, 4, 0, 2, 0);
		}
		iLocal_99 = CREATE_PED(22, iLocal_156, vLocal_95, 0, 1, 1);
		SET_PED_COMBAT_ATTRIBUTES(iLocal_99, 17, 1);
		SET_PED_COMBAT_ATTRIBUTES(iLocal_99, 13, 0);
		SET_PED_COMBAT_ATTRIBUTES(iLocal_99, 6, 1);
		SET_PED_FLEE_ATTRIBUTES(iLocal_99, 128, 1);
		SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_99, 1, 1);
		SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_99, 1);
		SET_PED_CONFIG_FLAG(iLocal_99, 42, 1);
		SET_PED_CONFIG_FLAG(iLocal_99, 281, 1);
		SET_PED_CONFIG_FLAG(iLocal_99, 172, 0);
		SET_PED_CONFIG_FLAG(iLocal_99, 137, 1);
		_0x733C87D4CE22BEA2(iLocal_99);
		SET_AMBIENT_VOICE_NAME(iLocal_99, sLocal_366);
		SET_PED_TARGET_LOSS_RESPONSE(iLocal_99, 1);
		SET_ENTITY_COORDS_NO_OFFSET(iLocal_99, GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_144, "b_atm_mugging", vVar0, vVar3, 0, 2), 0, 0, 1);
		vVar9 = { GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_144, "b_atm_mugging", vVar0, vVar3, 0, 2) };
		SET_ENTITY_HEADING(iLocal_99, vVar9.z);
		if (func_109(iLocal_100))
		{
			if (IS_PED_MALE(iLocal_100))
			{
				SET_ENTITY_COORDS_NO_OFFSET(iLocal_100, GET_ANIM_INITIAL_OFFSET_POSITION("random@atmrobberygen@male", "idle_a", vVar0, vVar3, 0, 2), 0, 0, 1);
				vVar9 = { GET_ANIM_INITIAL_OFFSET_ROTATION("random@atmrobberygen@male", "idle_a", vVar0, vVar3, 0, 2) };
			}
			else
			{
				SET_ENTITY_COORDS_NO_OFFSET(iLocal_100, GET_ANIM_INITIAL_OFFSET_POSITION("random@atmrobberygen@female", "idle_a", vVar0, vVar3, 0, 2), 0, 0, 1);
				vVar9 = { GET_ANIM_INITIAL_OFFSET_ROTATION("random@atmrobberygen@female", "idle_a", vVar0, vVar3, 0, 2) };
			}
			SET_ENTITY_HEADING(iLocal_100, vVar9.z);
		}
		TASK_PLAY_ANIM(iLocal_99, cLocal_144, "b_atm_mugging", 1000f, -4f, -1, 1, 0, 0, 0, 0);
		if (IS_PED_MALE(iLocal_100))
		{
			TASK_PLAY_ANIM(iLocal_100, "random@atmrobberygen@male", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			REMOVE_ANIM_DICT("random@atmrobberygen@female");
		}
		else
		{
			TASK_PLAY_ANIM(iLocal_100, "random@atmrobberygen@female", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			REMOVE_ANIM_DICT("random@atmrobberygen@male");
		}
		SET_PED_AS_ENEMY(iLocal_99, 1);
		SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_100, 1);
		GIVE_WEAPON_TO_PED(iLocal_99, joaat("weapon_pistol"), -1, 1, 1);
		SET_PED_AMMO(iLocal_99, joaat("weapon_pistol"), 34, 0);
		SET_CURRENT_PED_WEAPON(iLocal_99, joaat("weapon_pistol"), 0);
		SET_ENTITY_IS_TARGET_PRIORITY(iLocal_99, 1, 0);
		switch (func_38())
		{
			case 0:
				sLocal_324 = "MICHAEL";
				break;
			
			case 1:
				sLocal_324 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_324 = "TREVOR";
				break;
		}
		func_191(&Local_159, 0, PLAYER_PED_ID(), sLocal_324, 0, 1);
		func_191(&Local_159, 1, iLocal_100, sLocal_326, 0, 1);
		func_191(&Local_159, 2, iLocal_99, "ATMRobber", 0, 1);
		if (iLocal_109 == 1 || iLocal_109 == 2)
		{
			uLocal_117 = CREATE_VEHICLE(iLocal_158, vLocal_118, fLocal_124, 1, 1, 0);
			SET_VEHICLE_ENGINE_ON(uLocal_117, 1, 1, 0);
			ADD_VEHICLE_UPSIDEDOWN_CHECK(uLocal_117);
			_0x25367DE49D64CF16(uLocal_117, 1);
			if (iLocal_109 == 2)
			{
				SET_VEHICLE_DOOR_OPEN(uLocal_117, 0, 0, 0);
			}
			else if (iLocal_109 == 1)
			{
				SET_PED_HELMET(iLocal_99, 0);
				SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_99, 3);
			}
			else if (iLocal_109 == 4)
			{
				SET_VEHICLE_DOORS_LOCKED(uLocal_117, 3);
			}
		}
		SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 32, 0);
		return 1;
	}
	else if (func_201())
	{
		func_271();
	}
	return 0;
}

void func_191(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
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

int func_192()
{
	REQUEST_ANIM_DICT("random@atmrobberygen@male");
	REQUEST_ANIM_DICT("random@atmrobberygen@female");
	if (!iLocal_133)
	{
		func_200(&Local_384, 3);
		Local_384.f_146 = GET_FRAME_COUNT();
		func_199(&Local_384, iLocal_156);
		func_199(&Local_384, iLocal_157);
		func_199(&Local_384, iLocal_153);
		func_199(&Local_384, iLocal_154);
		func_197(&Local_384, cLocal_144);
		func_197(&Local_384, cLocal_368);
		func_197(&Local_384, cLocal_362);
		func_197(&Local_384, cLocal_145);
		iLocal_133 = 1;
	}
	if ((HAS_ANIM_DICT_LOADED("random@atmrobberygen@male") && HAS_ANIM_DICT_LOADED("random@atmrobberygen@female")) && func_193(&Local_384))
	{
		return 1;
	}
	return 0;
}

int func_193(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_194(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_194(var uParam0)
{
	return func_195(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_195(var uParam0, var uParam1, var uParam2)
{
	if (IS_BIT_SET(uParam0, 30))
	{
		if (IS_BIT_SET(uParam0, 29))
		{
			switch (func_196(uParam0))
			{
				case 0:
					return HAS_MODEL_LOADED(uParam2);
					break;
				
				case 1:
					return HAS_ANIM_DICT_LOADED(uParam1);
					break;
				
				case 2:
					return HAS_CLIP_SET_LOADED(uParam1);
					break;
				
				case 3:
					return HAS_STREAMED_TEXTURE_DICT_LOADED(uParam1);
					break;
				
				case 4:
					return HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam2, uParam1);
					break;
				
				case 5:
					return GET_IS_WAYPOINT_RECORDING_LOADED(uParam1);
					break;
				
				case 6:
					return REQUEST_SCRIPT_AUDIO_BANK(uParam1, IS_BIT_SET(uParam0, 27), -1);
					break;
				
				case 7:
					return HAS_SCRIPT_WITH_NAME_HASH_LOADED(uParam2);
					break;
				
				case 8:
					return HAS_ADDITIONAL_TEXT_LOADED(uParam2);
					break;
				
				case 9:
					return HAS_PTFX_ASSET_LOADED();
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

int func_196(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (IS_BIT_SET(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_197(var uParam0, char* sParam1)
{
	func_198(uParam0, 1, -1, sParam1, 0);
}

void func_198(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			if (IS_BIT_SET((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!ARE_STRINGS_EQUAL(sParam3, "NULL"))
					{
						if (ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			SET_BIT(uParam0[iVar0 /*18*/], iParam1);
			SET_BIT(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_199(var uParam0, int iParam1)
{
	func_198(uParam0, 0, iParam1, "NULL", 0);
}

void func_200(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

int func_201()
{
	if (IS_PLAYER_PLAYING(PLAYER_ID()) && !IS_PED_INJURED(PLAYER_PED_ID()))
	{
		if (VDIST2(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), vLocal_91) < (75f * 75f))
		{
			return 1;
		}
		if (VMAG2(GET_ENTITY_VELOCITY(PLAYER_PED_ID())) > 1369f && !func_213())
		{
			return 0;
		}
	}
	if (func_209())
	{
		return 1;
	}
	if (func_202(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_202(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (IS_PLAYER_PLAYING(PLAYER_ID()))
	{
		if (func_40(func_38()))
		{
			iVar36 = func_208();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (IS_BIT_SET(Global_106565.f_18568[iVar32 /*6*/], 2) && !IS_BIT_SET(Global_106565.f_18568[iVar32 /*6*/], 3))
				{
					func_203(iVar32, &Var0);
					fVar35 = GET_DISTANCE_BETWEEN_COORDS(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_203(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_204(uParam1, "Abigail1", func_206(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 1:
			func_204(uParam1, "Abigail2", func_206(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 2:
			func_204(uParam1, "Barry1", func_206(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 3:
			func_204(uParam1, "Barry2", func_206(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 4:
			func_204(uParam1, "Barry3", func_206(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 5:
			func_204(uParam1, "Barry3A", func_206(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 6:
			func_204(uParam1, "Barry3C", func_206(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 7:
			func_204(uParam1, "Barry4", func_206(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_205(iParam0), 0, 0);
			break;
		
		case 8:
			func_204(uParam1, "Dreyfuss1", func_206(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 9:
			func_204(uParam1, "Epsilon1", func_206(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 10:
			func_204(uParam1, "Epsilon2", func_206(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 11:
			func_204(uParam1, "Epsilon3", func_206(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 12:
			func_204(uParam1, "Epsilon4", func_206(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 13:
			func_204(uParam1, "Epsilon5", func_206(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 14:
			func_204(uParam1, "Epsilon6", func_206(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 15:
			func_204(uParam1, "Epsilon7", func_206(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 16:
			func_204(uParam1, "Epsilon8", func_206(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 17:
			func_204(uParam1, "Extreme1", func_206(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 18:
			func_204(uParam1, "Extreme2", func_206(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 19:
			func_204(uParam1, "Extreme3", func_206(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 20:
			func_204(uParam1, "Extreme4", func_206(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 21:
			func_204(uParam1, "Fanatic1", func_206(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_205(iParam0), 1, 0);
			break;
		
		case 22:
			func_204(uParam1, "Fanatic2", func_206(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_205(iParam0), 1, 0);
			break;
		
		case 23:
			func_204(uParam1, "Fanatic3", func_206(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_205(iParam0), 0, 1);
			break;
		
		case 24:
			func_204(uParam1, "Hao1", func_206(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_205(iParam0), 0, 1);
			break;
		
		case 25:
			func_204(uParam1, "Hunting1", func_206(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 26:
			func_204(uParam1, "Hunting2", func_206(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 27:
			func_204(uParam1, "Josh1", func_206(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 28:
			func_204(uParam1, "Josh2", func_206(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 29:
			func_204(uParam1, "Josh3", func_206(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 30:
			func_204(uParam1, "Josh4", func_206(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 31:
			func_204(uParam1, "Maude1", func_206(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 32:
			func_204(uParam1, "Minute1", func_206(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 33:
			func_204(uParam1, "Minute2", func_206(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 34:
			func_204(uParam1, "Minute3", func_206(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 35:
			func_204(uParam1, "MrsPhilips1", func_206(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 36:
			func_204(uParam1, "MrsPhilips2", func_206(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 37:
			func_204(uParam1, "Nigel1", func_206(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 38:
			func_204(uParam1, "Nigel1A", func_206(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 39:
			func_204(uParam1, "Nigel1B", func_206(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_205(iParam0), 1, 1);
			break;
		
		case 40:
			func_204(uParam1, "Nigel1C", func_206(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_205(iParam0), 1, 1);
			break;
		
		case 41:
			func_204(uParam1, "Nigel1D", func_206(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_205(iParam0), 1, 1);
			break;
		
		case 42:
			func_204(uParam1, "Nigel2", func_206(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 43:
			func_204(uParam1, "Nigel3", func_206(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 44:
			func_204(uParam1, "Omega1", func_206(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 45:
			func_204(uParam1, "Omega2", func_206(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 46:
			func_204(uParam1, "Paparazzo1", func_206(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 47:
			func_204(uParam1, "Paparazzo2", func_206(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 48:
			func_204(uParam1, "Paparazzo3", func_206(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 49:
			func_204(uParam1, "Paparazzo3A", func_206(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 50:
			func_204(uParam1, "Paparazzo3B", func_206(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 51:
			func_204(uParam1, "Paparazzo4", func_206(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 52:
			func_204(uParam1, "Rampage1", func_206(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 54:
			func_204(uParam1, "Rampage3", func_206(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 55:
			func_204(uParam1, "Rampage4", func_206(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 56:
			func_204(uParam1, "Rampage5", func_206(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 53:
			func_204(uParam1, "Rampage2", func_206(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 57:
			func_204(uParam1, "TheLastOne", func_206(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 58:
			func_204(uParam1, "Tonya1", func_206(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 59:
			func_204(uParam1, "Tonya2", func_206(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 60:
			func_204(uParam1, "Tonya3", func_206(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 61:
			func_204(uParam1, "Tonya4", func_206(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 62:
			func_204(uParam1, "Tonya5", func_206(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_204(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { vParam7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_205(int iParam0)
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

struct<2> func_206(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_207(iParam0) };
	if (IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_207(int iParam0)
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

int func_208()
{
	func_39();
	switch (Global_106565.f_2357.f_539.f_4321)
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

int func_209()
{
	if (func_212() && !func_213())
	{
		return 1;
	}
	if (func_211() && func_210())
	{
		return 1;
	}
	return 0;
}

bool func_210()
{
	return Global_106283 > 0;
}

int func_211()
{
	if (Global_90634 != -1)
	{
		return 1;
	}
	return 0;
}

int func_212()
{
	if (Global_90634 != -1)
	{
		return IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

int func_213()
{
	if (IS_PC_VERSION())
	{
		if (_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_214()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (iLocal_115 == 0 && iLocal_109 == 5)
	{
		iLocal_115 = GET_RANDOM_INT_IN_RANGE(1, 5);
	}
	else if (iLocal_109 != 5)
	{
		iLocal_115 = iLocal_109;
	}
	switch (iLocal_115)
	{
		case 1:
			iLocal_156 = joaat("g_m_y_armgoon_02");
			sLocal_366 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_01";
			iLocal_157 = joaat("a_f_m_tourist_01");
			sLocal_367 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
			iLocal_158 = joaat("sanchez");
			sLocal_327 = "REAR1_ATTR";
			sLocal_328 = "REAR1_HELP";
			sLocal_329 = "REAR1_PROMPT";
			sLocal_330 = "REAR1_CHASE";
			sLocal_331 = "REAR1_FLEE";
			cLocal_332 = "REAR1_THX";
			sLocal_333 = "REAR1_DAMN";
			switch (func_38())
			{
				case 0:
					sLocal_336 = "REAR1_REM";
					sLocal_334 = "REAR1_FKM";
					sLocal_325 = "REAR1_WM";
					sLocal_337 = "REAR1_GYM";
					break;
				
				case 1:
					sLocal_336 = "REAR1_REF";
					sLocal_334 = "REAR1_FKF";
					sLocal_325 = "REAR1_WF";
					sLocal_337 = "REAR1_GYF";
					break;
				
				case 2:
					sLocal_336 = "REAR1_RET";
					sLocal_334 = "REAR1_FKT";
					sLocal_325 = "REAR1_WT";
					sLocal_337 = "REAR1_GYT";
					break;
			}
			sLocal_326 = "ATMRobVictim1";
			cLocal_335 = "REAR1AU";
			if (iLocal_155 == 0)
			{
				iVar0 = GET_RANDOM_INT_IN_RANGE(0, 3);
				if (iVar0 == 0)
				{
					iLocal_153 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_153 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar1 = func_215();
					if (bVar1)
					{
						iLocal_153 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_153 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_155 = 1;
			}
			cLocal_362 = "RANDOM@ATMROBBERY1";
			sLocal_363 = "Return_Wallet_Positive_A_Player";
			sLocal_364 = "Return_Wallet_Positive_A_Female";
			sLocal_365 = "Return_Wallet_Positive_A_Cam";
			cLocal_368 = "random@car_thief@waiting_ig_4";
			sLocal_369 = "waiting";
			sLocal_370 = "waiting";
			sLocal_371 = "waiting";
			break;
		
		case 2:
			iLocal_156 = joaat("g_m_y_famfor_01");
			sLocal_366 = "G_M_Y_FamFor_01_BLACK_MINI_01";
			iLocal_157 = joaat("a_m_y_hipster_02");
			sLocal_367 = "A_M_Y_Hipster_02_White_Full_01";
			iLocal_158 = joaat("ruiner");
			sLocal_327 = "REAR2_ATTR";
			sLocal_328 = "REAR2_HELP";
			sLocal_329 = "REAR2_PROMPT";
			sLocal_330 = "REAR2_CHASE";
			sLocal_331 = "REAR2_FLEE";
			cLocal_332 = "REAR2_THX";
			sLocal_333 = "REAR2_DAMN";
			switch (func_38())
			{
				case 0:
					sLocal_336 = "REAR2_REM";
					sLocal_334 = "REAR2_FKM";
					sLocal_325 = "REAR2_WM";
					sLocal_337 = "REAR2_GYM";
					break;
				
				case 1:
					sLocal_336 = "REAR2_REF";
					sLocal_334 = "REAR2_FKF";
					sLocal_325 = "REAR2_WF";
					sLocal_337 = "REAR2_GYF";
					break;
				
				case 2:
					sLocal_336 = "REAR2_RET";
					sLocal_334 = "REAR2_FKT";
					sLocal_325 = "REAR2_WT";
					sLocal_337 = "REAR2_GYT";
					break;
			}
			sLocal_326 = "ATMRobVictim2";
			cLocal_335 = "REAR2AU";
			iLocal_153 = joaat("prop_ld_wallet_pickup");
			cLocal_362 = "RANDOM@ATMROBBERY2";
			sLocal_363 = "Return_Wallet_Positive_A_Player";
			sLocal_364 = "Return_Wallet_Positive_A_Male";
			sLocal_365 = "Return_Wallet_Positive_A_Cam";
			cLocal_368 = "RANDOM@BICYCLE_THIEF@IDLE_A";
			sLocal_369 = "IDLE_A";
			sLocal_370 = "IDLE_B";
			sLocal_371 = "IDLE_C";
			break;
		
		case 3:
			iLocal_157 = joaat("a_f_m_tourist_01");
			sLocal_367 = "A_F_Y_Tourist_01_White_Mini_01";
			iLocal_156 = joaat("g_m_y_salvagoon_02");
			sLocal_366 = "G_M_Y_SalvaGoon_02_SALVADORIAN_MINI_03";
			sLocal_327 = "REAR5_ATTR";
			sLocal_328 = "REAR5_HELP";
			sLocal_329 = "REAR5_PROMPT";
			sLocal_330 = "REAR5_CHASE";
			sLocal_331 = "REAR5_FLEE";
			cLocal_332 = "REAR5_THX";
			sLocal_333 = "REAR5_DAMN";
			switch (func_38())
			{
				case 0:
					sLocal_336 = "REAR5_REM";
					sLocal_334 = "REAR5_FKM";
					sLocal_325 = "REAR5_WM";
					sLocal_337 = "REAR5_GYM";
					break;
				
				case 1:
					sLocal_336 = "REAR5_REF";
					sLocal_334 = "REAR5_FKF";
					sLocal_325 = "REAR5_WF";
					sLocal_337 = "REAR5_GYF";
					break;
				
				case 2:
					sLocal_336 = "REAR5_RET";
					sLocal_334 = "REAR5_FKT";
					sLocal_325 = "REAR5_WT";
					sLocal_337 = "REAR5_GYT";
					break;
			}
			sLocal_326 = "ATMRobVictim5";
			cLocal_335 = "REAR5AU";
			if (iLocal_155 == 0)
			{
				iVar0 = GET_RANDOM_INT_IN_RANGE(0, 3);
				if (iVar0 == 0)
				{
					iLocal_153 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_153 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar2 = func_215();
					if (bVar2)
					{
						iLocal_153 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_153 = joaat("prop_ld_wallet_01");
					}
				}
				iLocal_155 = 1;
			}
			cLocal_362 = "RANDOM@ATMROBBERY3";
			sLocal_363 = "Return_Wallet_Positive_B_Player";
			sLocal_364 = "Return_Wallet_Positive_B_Female";
			sLocal_365 = "Return_Wallet_Positive_B_Cam";
			cLocal_368 = "random@car_thief@waiting_ig_4";
			sLocal_369 = "waiting";
			sLocal_370 = "waiting";
			sLocal_371 = "waiting";
			break;
		
		case 4:
			iLocal_157 = joaat("a_f_m_tourist_01");
			sLocal_367 = "A_F_M_BevHills_02_WHITE_FULL_01";
			iLocal_158 = joaat("ruiner");
			iLocal_156 = joaat("g_m_y_azteca_01");
			sLocal_366 = "G_M_Y_Latino01_Latino_MINI_01";
			sLocal_327 = "REAR3_ATTR";
			sLocal_328 = "REAR3_HELP";
			sLocal_329 = "REAR3_PROMPT";
			sLocal_330 = "REAR3_CHASE";
			sLocal_331 = "REAR3_FLEE";
			cLocal_332 = "REAR3_THX";
			sLocal_333 = "REAR3_DAMN";
			switch (func_38())
			{
				case 0:
					sLocal_336 = "REAR3_REM";
					sLocal_334 = "REAR3_FKM";
					sLocal_325 = "REAR3_WM";
					sLocal_337 = "REAR3_GYM";
					break;
				
				case 1:
					sLocal_336 = "REAR3_REF";
					sLocal_334 = "REAR3_FKF";
					sLocal_325 = "REAR3_WF";
					sLocal_337 = "REAR3_GYF";
					break;
				
				case 2:
					sLocal_336 = "REAR3_RET";
					sLocal_334 = "REAR3_FKT";
					sLocal_325 = "REAR3_WT";
					sLocal_337 = "REAR3_GYT";
					break;
			}
			sLocal_326 = "ATMRobVictim3";
			cLocal_335 = "REAR3AU";
			if (iLocal_155 == 0)
			{
				iVar0 = GET_RANDOM_INT_IN_RANGE(0, 3);
				if (iVar0 == 0)
				{
					iLocal_153 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_153 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar3 = func_215();
					if (bVar3)
					{
						iLocal_153 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_153 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_155 = 1;
			}
			cLocal_362 = "RANDOM@ATMROBBERY4";
			sLocal_363 = "Return_Wallet_Positive_C_Player";
			sLocal_364 = "Return_Wallet_Positive_C_Female";
			sLocal_365 = "Return_Wallet_Positive_C_Cam";
			cLocal_368 = "random@car_thief@waiting_ig_4";
			sLocal_369 = "waiting";
			sLocal_370 = "waiting";
			sLocal_371 = "waiting";
			break;
	}
	if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -203.72f, -861.8f, 29.27f, 1) < 5f)
	{
		vLocal_354 = { -197.64f, -863.25f, 28.33f };
		fLocal_357 = 334.5007f;
		vLocal_358 = { -187.24f, -856.77f, 28.97f };
		fLocal_361 = 162.69f;
		iLocal_116 = 1;
	}
	else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, 288.46f, -1256.71f, 28.44f, 1) < 5f)
	{
		vLocal_354 = { 286.5f, -1256.73f, 28.29f };
		fLocal_357 = 167.3216f;
		vLocal_358 = { 250.55f, -1239.27f, 28.84f };
		fLocal_361 = 265.51f;
		iLocal_116 = 2;
	}
	else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -3044.11f, 594.34f, 6.73f, 1) < 5f)
	{
		vLocal_354 = { -3044.66f, 595.7f, 6.59f };
		fLocal_357 = 296.7338f;
		vLocal_358 = { -3037.55f, 608.53f, 7.34f };
		fLocal_361 = 202.3f;
		iLocal_116 = 3;
	}
	else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, 174.53f, 6637.64f, 30.57f, 1) < 5f)
	{
		vLocal_354 = { 175.57f, 6636.58f, 30.57f };
		fLocal_357 = 260.4868f;
		vLocal_358 = { 188.97f, 6616.2f, 31.48f };
		fLocal_361 = 93.97f;
		iLocal_116 = 4;
	}
	else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, 24.13f, -946.84f, 28.36f, 1) < 5f)
	{
		vLocal_354 = { 23.65f, -948.26f, 28.36f };
		fLocal_357 = 258.8732f;
		vLocal_358 = { 22.19f, -955.82f, 28.94f };
		fLocal_361 = 70.66f;
		iLocal_116 = 6;
	}
	else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, 296.13f, -894.01f, 28.23f, 1) < 5f)
	{
		vLocal_354 = { 294.64f, -893.6f, 28.18f };
		fLocal_357 = 156.7222f;
		vLocal_358 = { 286.4f, -897.28f, 28.57f };
		fLocal_361 = 341.97f;
		iLocal_116 = 8;
	}
	else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, 1077.69f, -775.73f, 57.21f, 1) < 5f)
	{
		vLocal_354 = { 1077.64f, -773.86f, 57.09f };
		fLocal_357 = 275.6593f;
		vLocal_358 = { 1081.93f, -764.08f, 57.35f };
		fLocal_361 = 268.57f;
		iLocal_116 = 11;
	}
	else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -2072.88f, -317.19f, 12.32f, 1) < 5f)
	{
		vLocal_354 = { -2074.93f, -316.75f, 12.16f };
		fLocal_357 = 157.3363f;
		vLocal_358 = { -2101.2f, -293.74f, 12.74f };
		fLocal_361 = 263.12f;
		iLocal_116 = 16;
	}
	else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -821.33f, -1082.43f, 10.14f, 1) < 5f)
	{
		vLocal_354 = { -819.39f, -1084.12f, 10.03f };
		fLocal_357 = 236.6294f;
		vLocal_358 = { -803.18f, -1075.91f, 11.13f };
		fLocal_361 = 209.53f;
		iLocal_116 = 17;
	}
	else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -712.9f, -819.32f, 22.73f, 1) < 5f)
	{
		vLocal_354 = { -712.88f, -820.47f, 22.61f };
		fLocal_357 = 268.2568f;
		vLocal_358 = { -721.63f, -826.84f, 22.82f };
		fLocal_361 = 93.14f;
		iLocal_116 = 18;
	}
	else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -387.12f, 6045.79f, 30.5f, 1) < 5f)
	{
		vLocal_354 = { -389.5633f, 6042.153f, 30.4989f };
		fLocal_357 = 223.2838f;
		vLocal_358 = { -406.23f, 6045.69f, 31.06f };
		fLocal_361 = 229.52f;
		iLocal_116 = 19;
	}
	else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -301.84f, -830.39f, 31.38f, 1) < 5f)
	{
		vLocal_354 = { -304.1459f, -837.4778f, 30.6799f };
		fLocal_357 = 286.139f;
		vLocal_358 = { -304.56f, -840.76f, 31.26f };
		fLocal_361 = 77.59f;
		iLocal_116 = 22;
	}
	else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -254.3f, -691.96f, 32.61f, 1) < 5f)
	{
		vLocal_354 = { -253.51f, -689.26f, 32.57f };
		fLocal_357 = 209.9227f;
		vLocal_358 = { -250.91f, -684.01f, 33f };
		fLocal_361 = 230.65f;
		iLocal_116 = 23;
	}
	else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, 89.39f, 2f, 67.34f, 1) < 5f)
	{
		vLocal_354 = { 88.7f, 0.01f, 67.38f };
		fLocal_357 = 71.0114f;
		vLocal_358 = { 91.35f, -7.07f, 67.82f };
		fLocal_361 = 70.28f;
		iLocal_116 = 25;
	}
	else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -526.42f, -1222.51f, 17.46f, 1) < 5f)
	{
		vLocal_354 = { -530.11f, -1217.33f, 17.26f };
		fLocal_357 = 53.768f;
		vLocal_358 = { -522.45f, -1196.35f, 18.45f };
		fLocal_361 = 297.22f;
		iLocal_116 = 30;
	}
	else if (GET_DISTANCE_BETWEEN_COORDS(vLocal_95, -2956.78f, 488.19f, 14.47f, 1) < 5f)
	{
		vLocal_354 = { -2956.78f, 488.19f, 14.47f };
		fLocal_357 = 80.0912f;
		vLocal_358 = { -2974.34f, 491.96f, 15f };
		fLocal_361 = 1.95f;
		iLocal_116 = 31;
	}
	else
	{
		vLocal_354 = { vLocal_95 };
	}
}

int func_215()
{
	if (IS_BIT_SET(GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_216()
{
	if (!func_185(5))
	{
		return 1;
	}
	if (func_209())
	{
		return 1;
	}
	if (!IS_PED_INJURED(PLAYER_PED_ID()))
	{
		if (VMAG2(GET_ENTITY_VELOCITY(PLAYER_PED_ID())) > 1369f && !func_213())
		{
			return 0;
		}
	}
	if (func_202(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_217()
{
	if ((Global_106554 == func_218() && GET_RANDOM_EVENT_FLAG()) && Global_106555)
	{
		return 1;
	}
	return 0;
}

int func_218()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_219(Var0);
	return uVar16;
}

int func_219(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_220(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((GET_FRAME_COUNT() >= (uParam0->f_146 + uParam0->f_147) || IS_BIT_SET(Global_93682.f_20, 2)) || IS_BIT_SET(Global_93682.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29))
					{
						func_221(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_221(var uParam0)
{
	func_222(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_222(var uParam0, var uParam1, var uParam2)
{
	if (IS_BIT_SET(*uParam0, 30))
	{
		switch (func_196(*uParam0))
		{
			case 0:
				REQUEST_MODEL(uParam2);
				break;
			
			case 1:
				REQUEST_ANIM_DICT(uParam1);
				break;
			
			case 2:
				REQUEST_CLIP_SET(uParam1);
				break;
			
			case 3:
				REQUEST_STREAMED_TEXTURE_DICT(uParam1, IS_BIT_SET(*uParam0, 28));
				break;
			
			case 4:
				REQUEST_VEHICLE_RECORDING(uParam2, uParam1);
				break;
			
			case 5:
				REQUEST_WAYPOINT_RECORDING(uParam1);
				break;
			
			case 6:
				REQUEST_SCRIPT_AUDIO_BANK(uParam1, IS_BIT_SET(*uParam0, 27), -1);
				break;
			
			case 7:
				REQUEST_SCRIPT_WITH_NAME_HASH(uParam2);
				break;
			
			case 8:
				REQUEST_ADDITIONAL_TEXT(uParam1, uParam2);
				break;
			
			case 9:
				REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		SET_BIT(uParam0, 29);
	}
}

void func_223(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = GET_GAME_TIMER();
	}
	if (DOES_BLIP_EXIST(uParam0))
	{
		iVar0 = (GET_GAME_TIMER() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = CEIL((TO_FLOAT(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (GET_BLIP_ALPHA(uParam0) != 255)
				{
					SET_BLIP_ALPHA(uParam0, 255);
				}
			}
			else if (GET_BLIP_ALPHA(uParam0) != 0)
			{
				SET_BLIP_ALPHA(uParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (GET_BLIP_ALPHA(uParam0) != 255)
			{
				SET_BLIP_ALPHA(uParam0, 255);
			}
		}
	}
}

void func_224()
{
}

void func_225()
{
}

void func_226(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_218();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_228(iParam0);
	_0x65D2EBB47E1CEC21(0);
	SET_RANDOM_EVENT_FLAG(1);
	Global_106551 = 0;
	func_227();
}

void func_227()
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

void func_228(int iParam0)
{
	Global_106554 = iParam0;
}

int func_229(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	
	if (!Global_145143)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_218();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_270())
		{
			return 0;
		}
	}
	vLocal_91 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (IS_PLAYER_PLAYING(PLAYER_ID()) && !IS_PED_INJURED(PLAYER_PED_ID()))
		{
			vVar1 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) };
			if (VMAG2(GET_ENTITY_VELOCITY(PLAYER_PED_ID())) > 1369f && !func_213())
			{
				return 0;
			}
		}
		if (!Global_106565.f_9079)
		{
			return 0;
		}
		if (func_269(0))
		{
			return 0;
		}
		if (func_209())
		{
			return 0;
		}
		if (func_268())
		{
			return 0;
		}
		if (Global_106554 != -1)
		{
			return 0;
		}
		if (func_40(func_38()))
		{
			if (func_202(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (IS_PLAYER_PLAYING(PLAYER_ID()) && !bParam6)
		{
			if ((vVar1.z - vLocal_91.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_267(iParam3))
		{
			return 0;
		}
		if (func_40(func_38()))
		{
			if (func_266(func_38()) == 4 || func_266(func_38()) == 5)
			{
				return 0;
			}
		}
		if (func_40(func_38()))
		{
			if (!func_265(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_264(Global_106565.f_24989.f_43[iParam3]))
		{
			return 0;
		}
		if ((GET_GAME_TIMER() - Global_106556) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_263())
		{
			return 0;
		}
		if (GET_MISSION_FLAG())
		{
			return 0;
		}
		if (GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_254(4))
		{
			return 0;
		}
		if (!func_185(5))
		{
			return 0;
		}
		if (func_253(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (IS_VALID_INTERIOR(GET_INTERIOR_FROM_ENTITY(PLAYER_PED_ID())))
		{
			if ((GET_INTERIOR_FROM_ENTITY(PLAYER_PED_ID()) == GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || GET_INTERIOR_FROM_ENTITY(PLAYER_PED_ID()) == GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || GET_INTERIOR_FROM_ENTITY(PLAYER_PED_ID()) == GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_253(0, 0))
		{
			return 0;
		}
		if (Global_25911)
		{
			return 0;
		}
		if (func_267(30) && !func_253(30, 0))
		{
			if (iParam3 != 30)
			{
				if (VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_40(func_38()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_106565.f_2357.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_106565.f_2357.f_539.f_2296[iVar4];
				if (func_252(iVar8))
				{
					if (func_230(iVar4))
					{
						if (!func_63(vVar5, 0f, 0f, 0f, 0))
						{
							if (VDIST2(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), vVar5) < (210f * 210f))
							{
								if (func_38() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_230(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_106565.f_2357.f_539.f_2296[iParam0];
	return func_231(iVar0);
}

int func_231(int iParam0)
{
	return func_232(iParam0, 1);
}

int func_232(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_252(iParam0))
	{
		return 0;
	}
	func_233(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_233(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_234(func_245(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_234(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_244(iParam0, iParam1))
	{
		iVar0 = func_243(iParam1);
		iVar1 = func_241(iParam0);
		iVar2 = (func_241(iParam0) - func_241(iParam1));
		iVar3 = (func_243(iParam0) - func_243(iParam1));
		iVar4 = (func_240(iParam0) - func_240(iParam1));
		iVar5 = (func_239(iParam0) - func_239(iParam1));
		iVar6 = (func_238(iParam0) - func_238(iParam1));
		iVar7 = (func_237(iParam0) - func_237(iParam1));
	}
	else
	{
		iVar0 = func_243(iParam0);
		iVar1 = func_241(iParam1);
		iVar2 = (func_241(iParam1) - func_241(iParam0));
		iVar3 = (func_243(iParam1) - func_243(iParam0));
		iVar4 = (func_240(iParam1) - func_240(iParam0));
		iVar5 = (func_239(iParam1) - func_239(iParam0));
		iVar6 = (func_238(iParam1) - func_238(iParam0));
		iVar7 = (func_237(iParam1) - func_237(iParam0));
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
		iVar4 = (iVar4 + func_236(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = ROUND(func_235(TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_235(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_236(int iParam0, int iParam1)
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

int func_237(int iParam0)
{
	return SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_238(int iParam0)
{
	return SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_239(int iParam0)
{
	return SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_240(int iParam0)
{
	return SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_241(int iParam0)
{
	return (SHIFT_RIGHT(iParam0, 26) & 31 * func_242(IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_242(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_243(int iParam0)
{
	return iParam0 & 15;
}

int func_244(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_252(iParam1) || !func_252(iParam0))
	{
		return 1;
	}
	iVar0 = func_241(iParam0);
	iVar1 = func_241(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_243(iParam0);
	iVar1 = func_243(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_240(iParam0);
	iVar1 = func_240(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_239(iParam0);
	iVar1 = func_239(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_238(iParam0);
	iVar1 = func_238(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_237(iParam0);
	iVar1 = func_237(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_245()
{
	var uVar0;
	
	func_251(&uVar0, GET_CLOCK_SECONDS());
	func_250(&uVar0, GET_CLOCK_MINUTES());
	func_249(&uVar0, GET_CLOCK_HOURS());
	func_248(&uVar0, GET_CLOCK_DAY_OF_MONTH());
	func_247(&uVar0, GET_CLOCK_MONTH());
	func_246(&uVar0, GET_CLOCK_YEAR());
	return uVar0;
}

void func_246(var uParam0, int iParam1)
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

void func_247(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_248(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_243(*uParam0);
	iVar1 = func_241(*uParam0);
	if (iParam1 < 1 || iParam1 > func_236(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 4));
}

void func_249(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 9));
}

void func_250(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 14));
}

void func_251(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 20));
}

int func_252(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_237(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_238(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_239(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_241(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_243(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_240(iParam0);
	if (iVar5 < 1 || iVar5 > func_236(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_253(int iParam0, int iParam1)
{
	if (IS_BIT_SET(Global_106565.f_24989.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_254(int iParam0)
{
	int iVar0;
	
	if (IS_PLAYER_PLAYING(PLAYER_ID()))
	{
		if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
		{
			if (!IS_PED_INJURED(PLAYER_PED_ID()))
			{
				iVar0 = func_38();
				if (!func_40(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!IS_PLAYER_READY_FOR_CUTSCENE(PLAYER_ID()) || IS_ENTITY_IN_AIR(PLAYER_PED_ID())) || IS_PED_GETTING_INTO_A_VEHICLE(PLAYER_PED_ID())) || IS_PED_RAGDOLL(PLAYER_PED_ID())) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || IS_PLAYER_CLIMBING(PLAYER_ID())) || IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0)) || func_262()) || Global_105612) || Global_25767) || func_261()) || func_59(8, -1)) || func_260()) || func_259()) || func_258()) || func_257()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1) || func_262()) || Global_25767) || func_261()) || func_59(8, -1)) || func_258()) || func_260()) || func_259()) || func_257()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!IS_PLAYER_READY_FOR_CUTSCENE(PLAYER_ID()) || IS_ENTITY_IN_AIR(PLAYER_PED_ID())) || IS_PED_GETTING_INTO_A_VEHICLE(PLAYER_PED_ID())) || IS_PED_RAGDOLL(PLAYER_PED_ID())) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || IS_PLAYER_CLIMBING(PLAYER_ID())) || IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0)) || func_262()) || Global_105612) || Global_25767) || func_261()) || func_59(8, -1)) || func_258()) || func_260()) || func_259()) || func_257()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((IS_PED_RAGDOLL(PLAYER_PED_ID()) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0)) || func_262()) || Global_105612) || Global_25767) || func_261()) || func_59(8, -1)) || func_260()) || func_259()) || func_257()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_262() || GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) > 0) || func_59(8, -1)) || func_257()) || func_256()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_59(8, -1) || func_260()) || func_259()) || func_256()) || func_255())
						{
							return 0;
						}
						if ((IS_PLAYER_SWITCH_IN_PROGRESS() && GET_PLAYER_SWITCH_TYPE() != 3) && GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
						{
							if ((((((((((((((IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0) || GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) > 0) || IS_ENTITY_IN_AIR(PLAYER_PED_ID())) || IS_PED_RAGDOLL(PLAYER_PED_ID())) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || IS_PLAYER_CLIMBING(PLAYER_ID())) || func_262()) || Global_25767) || func_261()) || func_59(8, -1)) || func_259()) || func_258()) || func_257()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0) || !IS_PLAYER_CONTROL_ON(PLAYER_ID())) || !IS_PLAYER_READY_FOR_CUTSCENE(PLAYER_ID())) || !IS_SCREEN_FADED_IN()) || IS_ENTITY_IN_AIR(PLAYER_PED_ID())) || IS_PED_RAGDOLL(PLAYER_PED_ID())) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || func_262()) || func_259()) || Global_105612) || Global_25767) || func_261()) || Global_37584) || func_59(8, -1)) || func_258()) || func_256()) || func_257()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0) || !IS_PLAYER_CONTROL_ON(PLAYER_ID())) || !IS_PLAYER_READY_FOR_CUTSCENE(PLAYER_ID())) || !IS_SCREEN_FADED_IN()) || IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER_ID(), 0)) || IS_ENTITY_IN_AIR(PLAYER_PED_ID())) || IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1)) || IS_PED_RAGDOLL(PLAYER_PED_ID())) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PED_SWIMMING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || IS_PLAYER_CLIMBING(PLAYER_ID())) || func_262()) || Global_105612) || Global_25767) || func_261()) || func_59(8, -1)) || func_258()) || func_256()) || func_260()) || func_259()) || func_257())
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

var func_255()
{
	return Global_93721.f_1;
}

int func_256()
{
	if (Global_90634 != -1)
	{
		return IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_257()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_258()
{
	if (Global_71850)
	{
		return 1;
	}
	else if (Global_56488 && !Global_56494)
	{
		return 1;
	}
	return 0;
}

bool func_259()
{
	return Global_93734.f_340 > 0;
}

bool func_260()
{
	return Global_93734.f_339 > 0;
}

var func_261()
{
	return Global_1312867;
}

int func_262()
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

int func_263()
{
	func_57();
	if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_264(int iParam0)
{
	return func_244(func_245(), iParam0);
}

int func_265(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_38();
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

int func_266(int iParam0)
{
	if (!func_40(iParam0))
	{
		return 7;
	}
	return Global_106565.f_7682.f_919[iParam0];
}

int func_267(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_270())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		uVar1 = IS_BIT_SET(Global_106565.f_24989, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		uVar1 = IS_BIT_SET(Global_106565.f_24989.f_1, iVar0);
	}
	return uVar1;
}

int func_268()
{
	var uVar0;
	
	if (Global_25915)
	{
		if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
		{
			uVar0 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
			if (IS_VEHICLE_DRIVEABLE(uVar0, 0))
			{
				if (!IS_PED_INJURED(GET_PED_IN_VEHICLE_SEAT(uVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_269(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_71838, 0);
}

int func_270()
{
	var uVar0;
	
	if (NETWORK_IS_SIGNED_IN())
	{
		if (_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (_0x91B87C55093DE351())
			{
				STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				SET_BIT(&uVar0, 2);
				SET_BIT(&uVar0, 4);
				SET_BIT(&uVar0, 6);
				SET_BIT(&Global_25, 2);
				SET_BIT(&Global_25, 4);
				SET_BIT(&Global_25, 6);
				STAT_SET_INT(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					uVar0 = GET_PROFILE_SETTING(866);
					SET_BIT(&uVar0, 0);
					_0xDAC073C7901F9E15(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_145398 == 2)
	{
		return 1;
	}
	else if (Global_145398 == 3)
	{
		return 0;
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		if (IS_BIT_SET(GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_271()
{
	if (bLocal_339)
	{
		if (IS_VEHICLE_DRIVEABLE(uLocal_117, 0))
		{
			if (DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(uLocal_117))
			{
				REMOVE_VEHICLE_STUCK_CHECK(uLocal_117);
			}
		}
	}
	if (DOES_ENTITY_EXIST(iLocal_99))
	{
		SET_PED_AS_NO_LONGER_NEEDED(&iLocal_99);
	}
	REMOVE_ALL_SHOCKING_EVENTS(0);
	if (iLocal_113 != 0)
	{
		REMOVE_SHOCKING_EVENT(iLocal_113);
	}
	REMOVE_ALL_SHOCKING_EVENTS(0);
	if (!IS_PED_INJURED(iLocal_100))
	{
		SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_100, 0);
		SET_PED_CAN_BE_TARGETTED(iLocal_100, 1);
		SET_PED_AS_NO_LONGER_NEEDED(&iLocal_100);
	}
	if (iLocal_109 == 4)
	{
		SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 1, 1);
	}
	func_173(&uLocal_372, 0, 0);
	if (func_217())
	{
		SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	if (!IS_PED_INJURED(PLAYER_PED_ID()))
	{
		STOP_PED_SPEAKING(PLAYER_PED_ID(), 0);
	}
	func_284(&Local_384, 0);
	func_272(-1);
	_0xD79185689F8FD5DF(1);
	REMOVE_SCENARIO_BLOCKING_AREA(uLocal_107, 0);
	TERMINATE_THIS_THREAD();
}

void func_272(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_218();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_217())
	{
		func_277(iParam0);
		SET_MISSION_NAME(0, 0);
		Global_106556 = GET_GAME_TIMER();
		func_276(30000);
		StringCopy(&cVar0, func_275(Global_106554, 1), 64);
		if (func_274(Global_106554) > 0)
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
	func_273(&Global_25824);
	Global_106555 = 0;
	func_228(-1);
}

void func_273(var uParam0)
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

int func_274(int iParam0)
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

char* func_275(int iParam0, bool bParam1)
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

void func_276(int iParam0)
{
	Global_36976 = (GET_GAME_TIMER() + iParam0);
}

void func_277(int iParam0)
{
	func_278(iParam0, 0, func_283(iParam0));
}

void func_278(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_245();
	func_281(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_280(iParam0, &uVar0);
	Var1 = { func_279(&uVar0) };
}

struct<16> func_279(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_239(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_238(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_237(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_240(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_243(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_241(*uParam0), 64);
	return Var0;
}

void func_280(int iParam0, var uParam1)
{
	Global_106565.f_24989.f_43[iParam0] = *uParam1;
}

void func_281(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_241(*uParam0);
	iVar1 = func_243(*uParam0);
	iVar2 = func_240(*uParam0);
	iVar3 = func_239(*uParam0);
	iVar4 = func_238(*uParam0);
	iVar5 = func_237(*uParam0);
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
	iVar6 = func_236(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_236(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_282(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_282(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_251(uParam0, iParam1);
	func_250(uParam0, iParam2);
	func_249(uParam0, iParam3);
	func_247(uParam0, iParam5);
	func_248(uParam0, iParam4);
	func_246(uParam0, iParam6);
}

int func_283(int iParam0)
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

void func_284(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_286(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_285(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_285(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_286(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			func_287(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_287(var uParam0)
{
	func_288(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_288(var uParam0, var uParam1, var uParam2)
{
	if (IS_BIT_SET(uParam0, 30))
	{
		switch (func_196(uParam0))
		{
			case 0:
				SET_MODEL_AS_NO_LONGER_NEEDED(uParam2);
				break;
			
			case 1:
				REMOVE_ANIM_DICT(uParam1);
				break;
			
			case 2:
				REMOVE_CLIP_SET(uParam1);
				break;
			
			case 3:
				SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(uParam1);
				break;
			
			case 4:
				REMOVE_VEHICLE_RECORDING(uParam2, uParam1);
				break;
			
			case 5:
				REMOVE_WAYPOINT_RECORDING(uParam1);
				break;
			
			case 6:
				RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(uParam2);
				break;
			
			case 8:
				CLEAR_ADDITIONAL_TEXT(uParam2, IS_BIT_SET(uParam0, 26));
				break;
			
			case 9:
				REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

void func_289(bool bParam0)
{
	Global_106557 = { vLocal_95 };
	if (bParam0)
	{
		func_304(3);
	}
	func_293(1, 0);
	if (!bLocal_148)
	{
		func_292();
	}
	func_290();
	func_271();
}

void func_290()
{
	func_291();
}

int func_291()
{
	if (func_269(0))
	{
		return 0;
	}
	if (Global_93721.f_8)
	{
		if (Global_93721.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93721.f_10 > 1)
	{
		return 0;
	}
	Global_93721.f_10++;
	return 1;
}

int func_292()
{
	return 1;
}

void func_293(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_218();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_274(iParam0))
	{
		func_303(iParam0, iParam1);
		if (!func_302(51))
		{
			func_299("RE_REWARD", 1, 0, 4000, 10000, func_208(), 0, 138, 0);
			func_298(51);
		}
		if (func_181(iParam0))
		{
			Global_106565.f_24989.f_2 = 3;
		}
		if (func_297(iParam0, iParam1) != 322)
		{
			func_294(func_297(iParam0, iParam1), vLocal_91.x, vLocal_91.y);
		}
		Global_106553 = iParam1;
		if (Global_106551 == 0)
		{
			if (((Global_106554 == 1 || Global_106554 == 5) || Global_106554 == 11) || Global_106554 == 25)
			{
				func_304(2);
			}
			else if ((Global_106554 == 26 || Global_106554 == 8) || Global_106554 == 17)
			{
				func_304(7);
			}
			else
			{
				func_304(1);
			}
		}
	}
}

void func_294(int iParam0, var uParam1, var uParam2)
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
		func_13((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_106565.f_10188[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_106565.f_10188[iParam0 /*12*/].f_6 == 11 || Global_106565.f_10188[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_106565.f_10188[iParam0 /*12*/].f_5 = 1;
		Global_106565.f_10188[iParam0 /*12*/].f_10 = uParam1;
		Global_106565.f_10188[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_295();
	}
}

void func_295()
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
	Global_106301 = 0;
	Global_106302 = 0;
	Global_106303 = 0;
	Global_106304 = 0;
	Global_106305 = 0;
	Global_106306 = 0;
	Global_106307 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_106565.f_10188.f_3853;
	Global_106565.f_10188.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_106565.f_10188[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_106565.f_10188[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_106301++;
					fVar1 = (fVar1 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_106302++;
					fVar2 = (fVar2 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_106303++;
					fVar3 = (fVar3 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_106304++;
					fVar4 = (fVar4 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_106305++;
					fVar5 = (fVar5 + (Global_106565.f_10188[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_106306++;
					fVar6 = (fVar6 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_106307++;
					fVar7 = (fVar7 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_106284 > 0)
	{
		if (Global_106301 == Global_106284)
		{
			fVar1 = 55f;
		}
	}
	if (Global_106285 > 0)
	{
		if (Global_106302 == Global_106285)
		{
			fVar2 = 10f;
		}
	}
	if (Global_106286 > 0)
	{
		if (Global_106303 == Global_106286)
		{
			fVar3 = 0f;
		}
	}
	if (Global_106287 > 0)
	{
		if (Global_106304 == Global_106287)
		{
			fVar4 = 10f;
		}
	}
	if (Global_106288 > 0)
	{
		if (((Global_106305 == Global_106288 || (Global_106288 * 10 / Global_106305) < 41) || Global_106305 > Global_106291) || Global_106305 == Global_106291)
		{
			if (!IS_BIT_SET(Global_106565.f_10188.f_3856, 14))
			{
				if (Global_106305 == Global_106288)
				{
					_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_106288, 0);
					SET_BIT(&(Global_106565.f_10188.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_106289 > 0)
	{
		if (Global_106306 == Global_106289)
		{
			fVar6 = 15f;
		}
	}
	if (Global_106290 > 0)
	{
		if (Global_106307 == Global_106290)
		{
			fVar7 = 5f;
		}
	}
	Global_106565.f_10188.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_106305 > Global_106291 || Global_106305 == Global_106291)
	{
		iVar9 = Global_106291;
	}
	else
	{
		iVar9 = Global_106305;
	}
	STAT_SET_INT(joaat("num_missions_completed"), Global_106301, 1);
	STAT_SET_INT(joaat("num_missions_available"), Global_106284, 1);
	STAT_SET_INT(joaat("num_minigames_completed"), Global_106302, 1);
	STAT_SET_INT(joaat("num_minigames_available"), Global_106285, 1);
	STAT_SET_INT(joaat("num_oddjobs_completed"), Global_106303, 1);
	STAT_SET_INT(joaat("num_oddjobs_available"), Global_106286, 1);
	STAT_SET_INT(joaat("num_rndpeople_completed"), Global_106304, 1);
	STAT_SET_INT(joaat("num_rndpeople_available"), Global_106287, 1);
	STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STAT_SET_INT(joaat("num_rndevents_available"), Global_106291, 1);
	STAT_SET_INT(joaat("num_misc_completed"), (Global_106307 + Global_106306), 1);
	STAT_SET_INT(joaat("num_misc_available"), (Global_106290 + Global_106289), 1);
	Global_106308 = (Global_106301 * 100 / Global_106284);
	Global_106310 = ((Global_106303 + Global_106302) * 100 / (Global_106286 + Global_106285));
	Global_106309 = ((Global_106304 + iVar9) * 100 / (Global_106287 + Global_106291));
	Global_106311 = ((Global_106306 + Global_106307) * 100 / (Global_106289 + Global_106290));
	STAT_SET_FLOAT(joaat("total_progress_made"), Global_106565.f_10188.f_3853, 1);
	STAT_SET_INT(joaat("percent_story_missions"), Global_106308, 1);
	STAT_SET_INT(joaat("percent_ambient_missions"), Global_106309, 1);
	STAT_SET_INT(joaat("percent_oddjobs"), Global_106310, 1);
	if (fVar8 > 0f && FLOOR(fVar8) < FLOOR(Global_106565.f_10188.f_3853))
	{
		func_35(13, FLOOR(Global_106565.f_10188.f_3853));
	}
	if (!DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_71590)
		{
			if (func_296() == 2 == 0 && !NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_291();
				}
			}
		}
	}
}

int func_296()
{
	return Global_25765;
}

int func_297(int iParam0, int iParam1)
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

void func_298(int iParam0)
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
		SET_BIT(&(Global_106565.f_20404.f_150[iVar1]), iVar0);
	}
}

void func_299(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_300(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_300(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
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
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (ARE_STRINGS_EQUAL(&(Global_106565.f_20404[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_106565.f_20404.f_145 < 9)
	{
		StringCopy(&(Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_4), sParam1, 16);
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_8 = (GET_GAME_TIMER() + iParam3);
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_9 = iParam5;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_11 = iParam6;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_12 = uParam2;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_13 = iParam7;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_14 = iParam8;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_10 = ((GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_10 = -1;
		}
		Global_106565.f_20404.f_145++;
		func_301();
	}
}

void func_301()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_106565.f_20404.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (IS_BIT_SET(Global_106565.f_20404[iVar0 /*16*/].f_11, 0))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[0])
			{
				Global_106565.f_20404.f_146[0] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		if (IS_BIT_SET(Global_106565.f_20404[iVar0 /*16*/].f_11, 1))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[1])
			{
				Global_106565.f_20404.f_146[1] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		if (IS_BIT_SET(Global_106565.f_20404[iVar0 /*16*/].f_11, 2))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[2])
			{
				Global_106565.f_20404.f_146[2] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_302(int iParam0)
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
		return IS_BIT_SET(Global_106565.f_20404.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_303(int iParam0, int iParam1)
{
	SET_BIT(&(Global_106565.f_24989.f_8[iParam0]), iParam1);
}

void func_304(int iParam0)
{
	Global_106551 = iParam0;
}

