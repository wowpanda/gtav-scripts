#region Local Var
	var uLocal_0 = 0;
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
	int iLocal_29 = 0;
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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = 0;
	int iLocal_58 = 0;
	vector3 vLocal_59 = { 0f, 0f, 0f };
	int iLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	vector3 vLocal_66 = { 0f, 0f, 0f };
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	vector3 vLocal_76 = { 0f, 0f, 0f };
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82[2] = { 0, 0 };
	var uLocal_85 = 0;
	vector3 vLocal_86 = { 0f, 0f, 0f };
	float fLocal_89 = 0f;
	int iLocal_90 = 0;
	vector3 vLocal_91 = { 0f, 0f, 0f };
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	float fLocal_109 = 0f;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	vector3 vLocal_114 = { 0f, 0f, 0f };
	vector3 vLocal_117 = { 0f, 0f, 0f };
	vector3 vLocal_120 = { 0f, 0f, 0f };
	vector3 vLocal_123 = { 0f, 0f, 0f };
	vector3 vLocal_126 = { 0f, 0f, 0f };
	vector3 vLocal_129 = { 0f, 0f, 0f };
	vector3 vLocal_132 = { 0f, 0f, 0f };
	vector3 vLocal_135 = { 0f, 0f, 0f };
	vector3 vLocal_138 = { 0f, 0f, 0f };
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	var uLocal_148 = 16;
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
	struct<2> ScriptParam_0 = { 0, 5 } ;
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
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	uLocal_47 = _0x4A9923385BDB9DAD();
	uLocal_48 = _GET_BLIP_INFO_ID_ITERATOR();
	vLocal_63 = { 1492.31f, 2136.53f, 89.15f };
	vLocal_66 = { 1408.24f, 2522.803f, 41.0419f };
	vLocal_114 = { 370.2576f, -1597.488f, 35.94954f };
	vLocal_117 = { 824.992f, -1289.267f, 27.24564f };
	vLocal_120 = { 450.1889f, -981.6754f, 42.69174f };
	vLocal_123 = { -1088.37f, -842.2911f, 30.27554f };
	vLocal_126 = { 608.9076f, 0.806411f, 100.2497f };
	vLocal_129 = { -562.0159f, -130.8113f, 37.4369f };
	vLocal_132 = { 1855.237f, 3683.236f, 33.29165f };
	vLocal_135 = { -443.5063f, 6016.231f, 30.71787f };
	vLocal_138 = { 1693.518f, 2579.21f, 44.95713f };
	vLocal_59 = { ScriptParam_0.f_1[0 /*3*/] };
	func_185();
	if (HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!IS_PED_INJURED(uLocal_72))
		{
			if (IS_PED_IN_GROUP(uLocal_72))
			{
				REMOVE_PED_FROM_GROUP(uLocal_72);
			}
		}
		func_170();
	}
	if (IS_PLAYER_PLAYING(PLAYER_ID()))
	{
		if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
		{
			TERMINATE_THIS_THREAD();
		}
	}
	if (func_128(vLocal_59, 22, iLocal_69, 0, 0))
	{
		func_125(22);
	}
	else
	{
		TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		WAIT(0);
		if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_96)
		{
			if (!func_124())
			{
				if (func_123())
				{
					func_170();
				}
			}
			_0x208784099002BC30("RE_PL", 0);
			switch (iLocal_53)
			{
				case 0:
					if (func_111())
					{
						func_170();
					}
					if (!iLocal_58)
					{
						func_110();
					}
					else
					{
						func_109();
					}
					if (bLocal_57)
					{
						iLocal_141 = 1;
						iLocal_53 = 1;
					}
					break;
				
				case 1:
					if (IS_PLAYER_PLAYING(PLAYER_ID()))
					{
						switch (iLocal_54)
						{
							case 0:
								switch (iLocal_55)
								{
									case 0:
										func_102();
										break;
									
									case 1:
										if (iLocal_56 == 0)
										{
											if (!IS_PED_INJURED(uLocal_72))
											{
												if ((IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), uLocal_72, 100f, 100f, 100f, 0, 1, 0) && !IS_ENTITY_OCCLUDED(uLocal_72)) || IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), uLocal_72, 20f, 20f, 8f, 0, 1, 0))
												{
													func_101();
													if (!func_124())
													{
														func_91(1);
														func_90(1);
													}
												}
												if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), uLocal_72, 20f, 20f, 8f, 0, 1, 0))
												{
													if (DOES_BLIP_EXIST(uLocal_105))
													{
														_0x75A16C3DA34F1245(uLocal_105, 1);
													}
													func_89();
													if (!func_88())
													{
														if (IS_ENTITY_PLAYING_ANIM(uLocal_72, "random@prisoner_lift", "arms_waving", 3) || IS_ENTITY_PLAYING_ANIM(uLocal_72, "random@prisoner_lift", "loop2_idlelook2", 3))
														{
															CLEAR_PED_TASKS(uLocal_72);
														}
														func_87(&uLocal_107);
													}
												}
											}
											else
											{
												func_86();
											}
											func_85();
											func_84();
										}
										else if (iLocal_56 == 1)
										{
											if (!IS_PED_INJURED(uLocal_72))
											{
												if ((IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), uLocal_72, 105f, 105f, 105f, 0, 1, 0) && !IS_ENTITY_OCCLUDED(uLocal_72)) || IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), uLocal_72, 20f, 20f, 8f, 0, 1, 0))
												{
													func_101();
													if (!func_124())
													{
														func_91(1);
														func_90(1);
													}
												}
												if (!IS_ENTITY_DEAD(uLocal_72, 0))
												{
													if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), uLocal_72, 20f, 20f, 8f, 0, 1, 0))
													{
														if (DOES_BLIP_EXIST(uLocal_105))
														{
															_0x75A16C3DA34F1245(uLocal_105, 1);
														}
														func_89();
													}
												}
												if (bLocal_99)
												{
													if (TIMERA() > 2000 && TIMERA() < 2100)
													{
														CLEAR_PED_SECONDARY_TASK(uLocal_72);
													}
													if (TIMERA() > 3000)
													{
														if (!iLocal_102)
														{
															if (!func_83())
															{
																func_72(&uLocal_148, "PRI2AU", "PRI2_ASK", 4, 0, 0, 0);
																iLocal_102 = 1;
															}
														}
													}
												}
												if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
												{
													if (IS_VEHICLE_DRIVEABLE(GET_PLAYERS_LAST_VEHICLE(), 0))
													{
														if (!func_71(GET_PLAYERS_LAST_VEHICLE()))
														{
															if (IS_ENTITY_AT_ENTITY(GET_PLAYERS_LAST_VEHICLE(), uLocal_72, 40f, 40f, 20f, 0, 1, 0) && HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uLocal_72, GET_PLAYERS_LAST_VEHICLE(), 17))
															{
																CLEAR_PED_TASKS(uLocal_72);
																if (!IS_ENTITY_A_MISSION_ENTITY(GET_PLAYERS_LAST_VEHICLE()))
																{
																	SET_ENTITY_AS_MISSION_ENTITY(GET_PLAYERS_LAST_VEHICLE(), 1, 0);
																}
																TASK_VEHICLE_MISSION_PED_TARGET(uLocal_72, GET_PLAYERS_LAST_VEHICLE(), PLAYER_PED_ID(), 8, 22f, 786469, 1f, 1f, 1);
																SET_PED_KEEP_TASK(uLocal_72, 1);
																iLocal_55 = 13;
															}
															else if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), uLocal_72, 20f, 20f, 8f, 0, 1, 0) && HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uLocal_72, PLAYER_PED_ID(), 17))
															{
																func_72(&uLocal_148, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
																func_86();
															}
														}
														else
														{
															func_72(&uLocal_148, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
															func_86();
														}
													}
													else
													{
														func_72(&uLocal_148, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
														func_86();
													}
												}
												if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
												{
													if (IS_VEHICLE_DRIVEABLE(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0), 0))
													{
														if (((IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER_PED_ID()) || IS_PED_IN_MODEL(PLAYER_PED_ID(), joaat("rhino"))) || IS_PED_IN_ANY_HELI(PLAYER_PED_ID())) || IS_PED_IN_ANY_PLANE(PLAYER_PED_ID()))
														{
															func_72(&uLocal_148, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
															func_86();
														}
													}
												}
											}
											if (func_70())
											{
												if (!IS_ENTITY_DEAD(uLocal_72, 0))
												{
													if (!IS_PED_IN_MODEL(PLAYER_PED_ID(), joaat("bus")))
													{
														if (func_69(PLAYER_PED_ID(), uLocal_72) < 2.5f)
														{
															if (GET_ENTITY_SPEED(uLocal_75) < 1f)
															{
																func_68();
															}
														}
													}
													else if (func_69(PLAYER_PED_ID(), uLocal_72) < 10f)
													{
														if (GET_ENTITY_SPEED(uLocal_75) < 1f)
														{
															func_68();
														}
													}
												}
											}
										}
										if (func_64())
										{
											if (!IS_PED_INJURED(uLocal_72))
											{
												CLEAR_PED_TASKS(uLocal_72);
												if (IS_PED_IN_GROUP(uLocal_72))
												{
													REMOVE_PED_FROM_GROUP(uLocal_72);
												}
											}
											func_86();
										}
										if (!IS_PED_INJURED(uLocal_72))
										{
											SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uLocal_72, 0);
										}
										break;
									
									case 2:
										func_63();
										func_84();
										if (!IS_PED_INJURED(uLocal_72))
										{
											SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uLocal_72, 0);
										}
										break;
									
									case 3:
										if (func_62())
										{
											iLocal_55 = 9;
										}
										func_54();
										func_84();
										if (!IS_PED_INJURED(uLocal_72))
										{
											SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uLocal_72, 0);
										}
										break;
									
									case 5:
										func_53();
										break;
									
									case 6:
										if (!iLocal_104 && !IS_PED_INJURED(uLocal_72))
										{
											OPEN_SEQUENCE_TASK(&uLocal_74);
											TASK_LOOK_AT_ENTITY(0, PLAYER_PED_ID(), 5000, 2048, 2);
											TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER_PED_ID(), 0);
											TASK_PAUSE(0, 1500);
											TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_91, 1f, -1, 0.25f, 0, 333.9002f);
											TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
											CLOSE_SEQUENCE_TASK(uLocal_74);
											TASK_PERFORM_SEQUENCE(uLocal_72, uLocal_74);
											CLEAR_SEQUENCE_TASK(&uLocal_74);
											SET_PED_KEEP_TASK(uLocal_72, 1);
											func_72(&uLocal_148, "PRI1AU", "PRI1_THK", 4, 0, 0, 0);
											REMOVE_PED_FROM_GROUP(uLocal_72);
											iLocal_104 = 1;
										}
										if (func_64())
										{
											if (!IS_PED_INJURED(uLocal_72))
											{
												CLEAR_PED_TASKS(uLocal_72);
												if (IS_PED_IN_GROUP(uLocal_72))
												{
													REMOVE_PED_FROM_GROUP(uLocal_72);
												}
												func_51();
												WAIT(0);
												func_72(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
												TASK_SMART_FLEE_COORD(uLocal_72, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
												SET_PED_KEEP_TASK(uLocal_72, 1);
												WAIT(0);
											}
											func_86();
										}
										if (!func_83())
										{
											func_16();
										}
										break;
									
									case 7:
										func_15();
										break;
									
									case 9:
										func_13();
										break;
									
									case 10:
										func_10();
										func_8();
										if (!IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER_ID(), 0))
										{
											if (!DOES_BLIP_EXIST(uLocal_70))
											{
												uLocal_70 = func_6(vLocal_86, 1);
											}
											if (func_72(&uLocal_148, "PRI1AU", "PRI1_LOS", 4, 0, 0, 0))
											{
												iLocal_55 = 3;
											}
										}
										if (bLocal_100)
										{
											if (DOES_ENTITY_EXIST(uLocal_85))
											{
												if (!IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER_ID(), 0) || func_5(PLAYER_PED_ID(), uLocal_85, 1) > 200f)
												{
													SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_82[0]));
													SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_82[1]));
													SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_85);
												}
											}
										}
										if (func_64())
										{
											if (!IS_PED_INJURED(uLocal_72))
											{
												CLEAR_PED_TASKS(uLocal_72);
												if (IS_PED_IN_GROUP(uLocal_72))
												{
													REMOVE_PED_FROM_GROUP(uLocal_72);
												}
												TASK_SMART_FLEE_COORD(uLocal_72, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
												SET_PED_KEEP_TASK(uLocal_72, 1);
												func_51();
												WAIT(0);
												func_72(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
											}
											func_86();
										}
										break;
									
									case 11:
										SET_WANTED_LEVEL_MULTIPLIER(0.1f);
										if (IS_VEHICLE_DRIVEABLE(uLocal_75, 0))
										{
											if (!func_71(uLocal_75))
											{
												if (!iLocal_101)
												{
													if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0) && !IS_PED_IN_ANY_VEHICLE(uLocal_72, 0))
													{
														if (!IS_PED_INJURED(uLocal_72))
														{
															if (!iLocal_103)
															{
																func_72(&uLocal_148, "PRI2AU", "PRI2_STEAL", 4, 0, 0, 0);
																iLocal_103 = 1;
															}
															TASK_ENTER_VEHICLE(uLocal_72, uLocal_75, -1, -1, 1073741824, 1, 0);
															SET_PED_KEEP_TASK(uLocal_72, 1);
															iLocal_55 = 12;
														}
													}
													if (!IS_PED_INJURED(uLocal_72))
													{
														if (((HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_72, PLAYER_PED_ID(), 1) || (IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER_ID(), uLocal_72) && IS_PED_ARMED(PLAYER_PED_ID(), 6))) || (IS_PLAYER_TARGETTING_ENTITY(PLAYER_ID(), uLocal_72) && IS_PED_ARMED(PLAYER_PED_ID(), 6))) || (GET_ENTITY_SPEED(uLocal_75) > 2.5f && IS_PED_IN_VEHICLE(PLAYER_PED_ID(), uLocal_75, 0)))
														{
															TASK_COMBAT_PED(uLocal_72, PLAYER_PED_ID(), 0, 16);
															func_51();
															iLocal_101 = 1;
														}
													}
												}
											}
											else
											{
												if (DOES_BLIP_EXIST(uLocal_105))
												{
													REMOVE_BLIP(&uLocal_105);
												}
												if (!IS_PED_INJURED(uLocal_72))
												{
													OPEN_SEQUENCE_TASK(&uLocal_74);
													TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
													TASK_SMART_FLEE_COORD(0, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
													CLOSE_SEQUENCE_TASK(uLocal_74);
													TASK_PERFORM_SEQUENCE(uLocal_72, uLocal_74);
													CLEAR_SEQUENCE_TASK(&uLocal_74);
													SET_PED_KEEP_TASK(uLocal_72, 1);
													iLocal_55 = 13;
												}
											}
										}
										if (!IS_PED_INJURED(uLocal_72))
										{
											if (!IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), uLocal_72, 150f, 150f, 150f, 0, 1, 0))
											{
												OPEN_SEQUENCE_TASK(&uLocal_74);
												TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
												TASK_SMART_FLEE_COORD(0, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
												CLOSE_SEQUENCE_TASK(uLocal_74);
												TASK_PERFORM_SEQUENCE(uLocal_72, uLocal_74);
												CLEAR_SEQUENCE_TASK(&uLocal_74);
												SET_PED_KEEP_TASK(uLocal_72, 1);
												iLocal_55 = 13;
											}
										}
										else
										{
											iLocal_55 = 13;
										}
										break;
									
									case 12:
										SET_WANTED_LEVEL_MULTIPLIER(0.1f);
										if (!IS_PED_INJURED(uLocal_72))
										{
											if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_72, PLAYER_PED_ID(), 1))
											{
												if (DOES_BLIP_EXIST(uLocal_105))
												{
													SET_BLIP_AS_FRIENDLY(uLocal_105, 0);
													CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uLocal_72);
												}
											}
											if (IS_VEHICLE_DRIVEABLE(uLocal_75, 0))
											{
												if (!func_71(uLocal_75))
												{
													if (IS_PED_IN_VEHICLE(uLocal_72, uLocal_75, 0))
													{
														if (!IS_ENTITY_A_MISSION_ENTITY(uLocal_75))
														{
															SET_ENTITY_AS_MISSION_ENTITY(uLocal_75, 1, 0);
														}
														TASK_VEHICLE_MISSION_PED_TARGET(uLocal_72, uLocal_75, PLAYER_PED_ID(), 8, 22f, 786469, 1f, 1f, 1);
														SET_PED_KEEP_TASK(uLocal_72, 1);
														iLocal_55 = 13;
													}
													else if (IS_PED_IN_VEHICLE(PLAYER_PED_ID(), uLocal_75, 0))
													{
														if (bLocal_110)
														{
															TASK_COMBAT_PED(uLocal_72, PLAYER_PED_ID(), 0, 16);
															func_51();
															iLocal_101 = 1;
															iLocal_55 = 11;
														}
														else
														{
															func_68();
														}
													}
													else if (GET_SCRIPT_TASK_STATUS(uLocal_72, -1794415470) != 1 && GET_SCRIPT_TASK_STATUS(uLocal_72, -1794415470) != 0)
													{
														if (GET_SCRIPT_TASK_STATUS(uLocal_72, 780511057) != 1 && GET_SCRIPT_TASK_STATUS(uLocal_72, 780511057) != 0)
														{
														}
														else
														{
															iLocal_55 = 11;
														}
													}
												}
												else
												{
													if (DOES_BLIP_EXIST(uLocal_105))
													{
														REMOVE_BLIP(&uLocal_105);
													}
													OPEN_SEQUENCE_TASK(&uLocal_74);
													TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
													TASK_SMART_FLEE_COORD(0, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
													CLOSE_SEQUENCE_TASK(uLocal_74);
													TASK_PERFORM_SEQUENCE(uLocal_72, uLocal_74);
													CLEAR_SEQUENCE_TASK(&uLocal_74);
													SET_PED_KEEP_TASK(uLocal_72, 1);
													iLocal_55 = 13;
												}
											}
											else
											{
												OPEN_SEQUENCE_TASK(&uLocal_74);
												TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
												TASK_SMART_FLEE_COORD(0, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
												CLOSE_SEQUENCE_TASK(uLocal_74);
												TASK_PERFORM_SEQUENCE(uLocal_72, uLocal_74);
												CLEAR_SEQUENCE_TASK(&uLocal_74);
												SET_PED_KEEP_TASK(uLocal_72, 1);
												iLocal_55 = 13;
											}
											if (!iLocal_101)
											{
												if (((HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_72, PLAYER_PED_ID(), 1) || (IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER_ID(), uLocal_72) && IS_PED_ARMED(PLAYER_PED_ID(), 6))) || (IS_PLAYER_TARGETTING_ENTITY(PLAYER_ID(), uLocal_72) && IS_PED_ARMED(PLAYER_PED_ID(), 6))) || (GET_ENTITY_SPEED(uLocal_75) > 2.5f && IS_PED_IN_VEHICLE(PLAYER_PED_ID(), uLocal_75, 0)))
												{
													TASK_COMBAT_PED(uLocal_72, PLAYER_PED_ID(), 0, 16);
													func_51();
													iLocal_101 = 1;
												}
											}
										}
										else
										{
											iLocal_55 = 13;
										}
										break;
									
									case 13:
										iLocal_96 = 1;
										if (!IS_PED_INJURED(uLocal_72))
										{
											if (IS_PED_BEING_JACKED(uLocal_72))
											{
												func_51();
											}
											if (IS_PED_IN_ANY_VEHICLE(uLocal_72, 0))
											{
												if (DOES_BLIP_EXIST(uLocal_105))
												{
													SET_BLIP_AS_FRIENDLY(uLocal_105, 0);
												}
												if (IS_VEHICLE_MODEL(GET_VEHICLE_PED_IS_IN(uLocal_72, 0), joaat("towtruck")) || IS_VEHICLE_MODEL(GET_VEHICLE_PED_IS_IN(uLocal_72, 0), joaat("towtruck2")))
												{
													uLocal_81 = GET_ENTITY_ATTACHED_TO_TOW_TRUCK(GET_VEHICLE_PED_IS_IN(uLocal_72, 0));
													if (DOES_ENTITY_EXIST(uLocal_81))
													{
														uLocal_80 = GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uLocal_81);
														if (!IS_ENTITY_DEAD(GET_VEHICLE_PED_IS_IN(uLocal_72, 0), 0) && !IS_ENTITY_DEAD(uLocal_80, 0))
														{
															if (IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(GET_VEHICLE_PED_IS_IN(uLocal_72, 0), uLocal_80))
															{
																DETACH_VEHICLE_FROM_TOW_TRUCK(GET_VEHICLE_PED_IS_IN(uLocal_72, 0), uLocal_80);
															}
														}
													}
												}
												if (IS_PED_ON_SPECIFIC_VEHICLE(PLAYER_PED_ID(), GET_VEHICLE_PED_IS_IN(uLocal_72, 0)))
												{
													OPEN_SEQUENCE_TASK(&uLocal_74);
													TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
													TASK_COMBAT_PED(0, PLAYER_PED_ID(), 0, 16);
													CLOSE_SEQUENCE_TASK(uLocal_74);
													TASK_PERFORM_SEQUENCE(uLocal_72, uLocal_74);
													CLEAR_SEQUENCE_TASK(&uLocal_74);
													SET_PED_KEEP_TASK(uLocal_72, 1);
												}
												if (!iLocal_113)
												{
													if ((func_1(GET_VEHICLE_PED_IS_IN(uLocal_72, 0)) || !IS_VEHICLE_DRIVEABLE(GET_VEHICLE_PED_IS_IN(uLocal_72, 0), 0)) || func_71(GET_VEHICLE_PED_IS_IN(uLocal_72, 0)))
													{
														if (DOES_BLIP_EXIST(uLocal_105))
														{
															SET_BLIP_AS_FRIENDLY(uLocal_105, 0);
														}
														OPEN_SEQUENCE_TASK(&uLocal_74);
														TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
														TASK_SMART_FLEE_COORD(0, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
														CLOSE_SEQUENCE_TASK(uLocal_74);
														TASK_PERFORM_SEQUENCE(uLocal_72, uLocal_74);
														CLEAR_SEQUENCE_TASK(&uLocal_74);
														SET_PED_KEEP_TASK(uLocal_72, 1);
														iLocal_113 = 1;
													}
												}
												if (!IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), uLocal_72, 245f, 245f, 245f, 0, 1, 0))
												{
													func_86();
												}
											}
											else if (GET_SCRIPT_TASK_STATUS(uLocal_72, 242628503) != 1 && GET_SCRIPT_TASK_STATUS(uLocal_72, 242628503) != 0)
											{
												iLocal_55 = 11;
											}
											else if (!IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), uLocal_72, 200f, 200f, 200f, 0, 1, 0))
											{
												func_16();
											}
										}
										else
										{
											func_16();
										}
										break;
								}
								break;
							
							case 1:
								switch (iLocal_95)
								{
									case 1:
										if (!IS_PED_INJURED(uLocal_72))
										{
											CLEAR_PED_TASKS(uLocal_72);
											if (IS_PED_IN_GROUP(uLocal_72))
											{
												REMOVE_PED_FROM_GROUP(uLocal_72);
											}
											TASK_SMART_FLEE_COORD(uLocal_72, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
											SET_PED_KEEP_TASK(uLocal_72, 1);
											WAIT(0);
											func_86();
										}
										break;
									
									case 2:
										if (!IS_PED_INJURED(uLocal_72))
										{
											CLEAR_PED_TASKS(uLocal_72);
											if (IS_PED_IN_GROUP(uLocal_72))
											{
												REMOVE_PED_FROM_GROUP(uLocal_72);
											}
											TASK_SMART_FLEE_COORD(uLocal_72, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
											SET_PED_KEEP_TASK(uLocal_72, 1);
											WAIT(0);
											func_86();
										}
										break;
									
									case 3:
										if (!IS_PED_INJURED(uLocal_72))
										{
											CLEAR_PED_TASKS(uLocal_72);
											if (IS_PED_IN_GROUP(uLocal_72))
											{
												REMOVE_PED_FROM_GROUP(uLocal_72);
											}
											TASK_SMART_FLEE_COORD(uLocal_72, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
											SET_PED_KEEP_TASK(uLocal_72, 1);
											WAIT(0);
											func_86();
										}
										break;
									
									case 4:
										if (!IS_PED_INJURED(uLocal_72))
										{
											CLEAR_PED_TASKS(uLocal_72);
											if (IS_PED_IN_GROUP(uLocal_72))
											{
												REMOVE_PED_FROM_GROUP(uLocal_72);
											}
											TASK_SMART_FLEE_COORD(uLocal_72, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
											SET_PED_KEEP_TASK(uLocal_72, 1);
											WAIT(0);
											func_86();
										}
										break;
								}
								break;
							}
					}
					break;
			}
		}
		else
		{
			func_170();
		}
	}
}

int func_1(var uParam0)
{
	var uVar0;
	int iVar1;
	
	if ((func_4(PLAYER_PED_ID()) && IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0)) && func_2(uParam0))
	{
		uVar0 = GET_PLAYERS_LAST_VEHICLE();
		if (func_2(uVar0))
		{
			iVar1 = GET_ENTITY_MODEL(uVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(uVar0, uParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_2(var uParam0)
{
	if (func_3(uParam0))
	{
		if (IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
			if (!IS_ENTITY_ON_FIRE(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(var uParam0)
{
	if (DOES_ENTITY_EXIST(uParam0))
	{
		if (!IS_ENTITY_DEAD(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_4(var uParam0)
{
	if (func_3(uParam0))
	{
		if (!IS_PED_INJURED(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

float func_5(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ENTITY_DEAD(uParam0, 0))
	{
		vVar0 = { GET_ENTITY_COORDS(uParam0, 1) };
	}
	else
	{
		vVar0 = { GET_ENTITY_COORDS(uParam0, 0) };
	}
	if (!IS_ENTITY_DEAD(uParam1, 0))
	{
		vVar3 = { GET_ENTITY_COORDS(uParam1, 1) };
	}
	else
	{
		vVar3 = { GET_ENTITY_COORDS(uParam1, 0) };
	}
	return GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, iParam2);
}

var func_6(vector3 vParam0, int iParam3)
{
	var uVar0;
	
	uVar0 = ADD_BLIP_FOR_COORD(vParam0);
	SET_BLIP_SCALE(uVar0, func_7(NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	SET_BLIP_ROUTE(uVar0, iParam3);
	return uVar0;
}

float func_7(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_8()
{
	if (!IS_PED_INJURED(uLocal_72))
	{
		if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
		{
			if (!func_88())
			{
				if (GET_SCRIPT_TASK_STATUS(uLocal_72, 1227113341) != 1 && GET_SCRIPT_TASK_STATUS(uLocal_72, 1227113341) != 0)
				{
					TASK_GO_TO_ENTITY(uLocal_72, PLAYER_PED_ID(), -1, 6f, 1073741824, 1073741824, 0);
				}
				if (IS_PED_IN_ANY_VEHICLE(uLocal_72, 0))
				{
					TASK_LEAVE_ANY_VEHICLE(uLocal_72, 0, 0);
				}
				if (!iLocal_111)
				{
					if (!func_83())
					{
						if (func_9())
						{
							func_72(&uLocal_148, "PRI1AU", "PRI1_UVH2", 4, 0, 0, 0);
						}
						else
						{
							func_72(&uLocal_148, "PRI1AU", "PRI1_UVH", 4, 0, 0, 0);
						}
						iLocal_111 = 1;
					}
				}
			}
			else
			{
				iLocal_111 = 0;
				if (GET_SCRIPT_TASK_STATUS(uLocal_72, 1227113341) == 1 && GET_SCRIPT_TASK_STATUS(uLocal_72, 1227113341) == 0)
				{
					CLEAR_PED_TASKS(uLocal_72);
				}
			}
		}
	}
}

int func_9()
{
	if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1))
	{
		if (IS_VEHICLE_DRIVEABLE(GET_VEHICLE_PED_IS_USING(PLAYER_PED_ID()), 1))
		{
			if ((IS_THIS_MODEL_A_BICYCLE(GET_ENTITY_MODEL(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 1))) || IS_THIS_MODEL_A_BIKE(GET_ENTITY_MODEL(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 1)))) || IS_THIS_MODEL_A_QUADBIKE(GET_ENTITY_MODEL(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_10()
{
	if (!IS_PED_INJURED(uLocal_72))
	{
		if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), uLocal_72, 8f, 8f, 8f, 0, 1, 0))
		{
			if (!IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER_ID(), 0))
			{
				if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
				{
					if (IS_PED_IN_VEHICLE(uLocal_72, GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0), 0))
					{
						if (DOES_BLIP_EXIST(uLocal_105))
						{
							REMOVE_BLIP(&uLocal_105);
						}
						if (iLocal_55 != 10)
						{
							if (!DOES_BLIP_EXIST(uLocal_70))
							{
								uLocal_70 = func_6(vLocal_86, 1);
							}
						}
					}
				}
				else
				{
					if (DOES_BLIP_EXIST(uLocal_105))
					{
						REMOVE_BLIP(&uLocal_105);
					}
					if (iLocal_55 != 10)
					{
						if (!DOES_BLIP_EXIST(uLocal_70))
						{
							uLocal_70 = func_6(vLocal_86, 1);
						}
					}
				}
			}
			else if (DOES_BLIP_EXIST(uLocal_70))
			{
				REMOVE_BLIP(&uLocal_70);
			}
		}
		else
		{
			if (!DOES_BLIP_EXIST(uLocal_105))
			{
				uLocal_105 = func_11(uLocal_72, 0, 145);
			}
			if (DOES_BLIP_EXIST(uLocal_70))
			{
				REMOVE_BLIP(&uLocal_70);
			}
		}
	}
}

var func_11(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_12(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && DOES_BLIP_EXIST(uVar0)) && DOES_TEXT_LABEL_EXIST(&(Global_106565.f_28044[iParam2 /*29*/].f_3)))
	{
		SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_106565.f_28044[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_12(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = ADD_BLIP_FOR_ENTITY(uParam0);
	if (IS_ENTITY_A_VEHICLE(uParam0))
	{
		SET_BLIP_SCALE(uVar0, func_7(NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		SET_BLIP_SCALE(uVar0, func_7(NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (IS_ENTITY_AN_OBJECT(uParam0))
	{
		SET_BLIP_SCALE(uVar0, func_7(NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_13()
{
	switch (iLocal_106)
	{
		case 0:
			if (func_14())
			{
				if (IS_PED_IN_GROUP(uLocal_72))
				{
					REMOVE_PED_FROM_GROUP(uLocal_72);
				}
				func_51();
				WAIT(0);
				func_72(&uLocal_148, "PRI1AU", "PRI1_STA", 4, 0, 0, 0);
				SETTIMERA(0);
				iLocal_106++;
			}
			break;
		
		case 1:
			if (func_14())
			{
				if (TIMERA() > 500)
				{
					if (IS_VEHICLE_DRIVEABLE(uLocal_75, 0))
					{
						SET_VEHICLE_STEER_BIAS(uLocal_75, -1f);
						if (DOES_BLIP_EXIST(uLocal_70))
						{
							REMOVE_BLIP(&uLocal_70);
						}
						iLocal_106++;
					}
				}
			}
			break;
		
		case 2:
			if (func_14())
			{
				if (TIMERA() > 2000)
				{
					if (IS_VEHICLE_DRIVEABLE(uLocal_75, 0))
					{
						SET_PLAYER_CONTROL(PLAYER_ID(), 0, 0);
						TASK_VEHICLE_TEMP_ACTION(PLAYER_PED_ID(), uLocal_75, 24, 2000);
						iLocal_106++;
					}
				}
			}
			break;
		
		case 3:
			if (func_14())
			{
				if (TIMERA() > 4000)
				{
					SET_PLAYER_CONTROL(PLAYER_ID(), 1, 0);
					if (IS_VEHICLE_DRIVEABLE(uLocal_75, 0))
					{
						if (!IS_PED_INJURED(uLocal_72))
						{
							REMOVE_PED_FROM_GROUP(uLocal_72);
							SET_VEHICLE_STEER_BIAS(uLocal_75, 0f);
							TASK_LEAVE_VEHICLE(uLocal_72, uLocal_75, 320);
							if (!DOES_BLIP_EXIST(uLocal_105))
							{
								uLocal_105 = func_11(uLocal_72, 1, 145);
							}
							iLocal_106++;
						}
					}
				}
			}
			break;
		
		case 4:
			if (IS_VEHICLE_DRIVEABLE(uLocal_75, 0))
			{
				if (!IS_PED_INJURED(uLocal_72) && !IS_PED_IN_VEHICLE(uLocal_72, uLocal_75, 0))
				{
					TASK_SMART_FLEE_COORD(uLocal_72, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
					SET_PED_KEEP_TASK(uLocal_72, 1);
					func_51();
					WAIT(0);
					func_72(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
					iLocal_106++;
				}
			}
			break;
		
		case 5:
			WAIT(0);
			func_86();
			break;
	}
}

int func_14()
{
	if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		uLocal_75 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
		if (IS_VEHICLE_DRIVEABLE(uLocal_75, 0))
		{
			if (!IS_PED_INJURED(uLocal_72))
			{
				if (IS_PED_SITTING_IN_VEHICLE(uLocal_72, uLocal_75))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_15()
{
	if ((!iLocal_104 && !IS_PED_INJURED(uLocal_72)) && IS_VEHICLE_DRIVEABLE(uLocal_75, 0))
	{
		REMOVE_PED_FROM_GROUP(uLocal_72);
		OPEN_SEQUENCE_TASK(&uLocal_74);
		TASK_LOOK_AT_ENTITY(0, PLAYER_PED_ID(), 5000, 2048, 2);
		TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER_PED_ID(), 0);
		TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_91, 1f, -1, 0.25f, 0, 333.9002f);
		TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
		CLOSE_SEQUENCE_TASK(uLocal_74);
		TASK_PERFORM_SEQUENCE(uLocal_72, uLocal_74);
		CLEAR_SEQUENCE_TASK(&uLocal_74);
		SET_PED_KEEP_TASK(uLocal_72, 1);
		SET_PLAYER_CONTROL(PLAYER_ID(), 1, 0);
		iLocal_104 = 1;
	}
	if (func_64())
	{
		if (!IS_PED_INJURED(uLocal_72))
		{
			CLEAR_PED_TASKS(uLocal_72);
			if (IS_PED_IN_GROUP(uLocal_72))
			{
				REMOVE_PED_FROM_GROUP(uLocal_72);
			}
			TASK_SMART_FLEE_COORD(uLocal_72, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
			SET_PED_KEEP_TASK(uLocal_72, 1);
			func_51();
			WAIT(0);
			func_72(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
		}
		func_86();
	}
	if (!func_83())
	{
		func_16();
	}
}

void func_16()
{
	if (!IS_PED_INJURED(uLocal_72))
	{
		SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_72, 0);
	}
	while (!func_50())
	{
		WAIT(0);
	}
	if (iLocal_56 == 0)
	{
		func_45(func_49(), 4, 3);
	}
	func_20(22, iLocal_69);
	func_17();
	func_170();
}

void func_17()
{
	func_18();
}

int func_18()
{
	if (func_19(0))
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

int func_19(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_71838, 0);
}

void func_20(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_43();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_42(iParam0))
	{
		func_41(iParam0, iParam1);
		if (!func_40(51))
		{
			func_31("RE_REWARD", 1, 0, 4000, 10000, func_34(), 0, 138, 0);
			func_30(51);
		}
		if (func_29(iParam0))
		{
			Global_106565.f_24989.f_2 = 3;
		}
		if (func_28(iParam0, iParam1) != 322)
		{
			func_22(func_28(iParam0, iParam1), vLocal_50.x, vLocal_50.y);
		}
		Global_106553 = iParam1;
		if (Global_106551 == 0)
		{
			if (((Global_106554 == 1 || Global_106554 == 5) || Global_106554 == 11) || Global_106554 == 25)
			{
				func_21(2);
			}
			else if ((Global_106554 == 26 || Global_106554 == 8) || Global_106554 == 17)
			{
				func_21(7);
			}
			else
			{
				func_21(1);
			}
		}
	}
}

void func_21(int iParam0)
{
	Global_106551 = iParam0;
}

void func_22(int iParam0, var uParam1, var uParam2)
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
		func_26((891 + iParam0), 1, -1, 1);
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
		func_23();
	}
}

void func_23()
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
		func_25(13, FLOOR(Global_106565.f_10188.f_3853));
	}
	if (!DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_71590)
		{
			if (func_24() == 2 == 0 && !NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_18();
				}
			}
		}
	}
}

int func_24()
{
	return Global_25765;
}

int func_25(int iParam0, int iParam1)
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

int func_26(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_27();
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

int func_27()
{
	return Global_1312745;
}

int func_28(int iParam0, int iParam1)
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

int func_29(int iParam0)
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

void func_30(int iParam0)
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

void func_31(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_32(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_32(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_33();
	}
}

void func_33()
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

int func_34()
{
	func_35();
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

void func_35()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		if (func_39(Global_106565.f_2357.f_539.f_4321) != GET_ENTITY_MODEL(PLAYER_PED_ID()))
		{
			iVar0 = func_38(PLAYER_PED_ID());
			if (func_37(iVar0) && (!func_36(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_37(Global_106565.f_2357.f_539.f_4321))
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

bool func_36(int iParam0)
{
	return Global_36425 == iParam0;
}

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)
{
	if (func_37(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_40(int iParam0)
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

void func_41(int iParam0, int iParam1)
{
	SET_BIT(&(Global_106565.f_24989.f_8[iParam0]), iParam1);
}

int func_42(int iParam0)
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

int func_43()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_44(Var0);
	return uVar16;
}

int func_44(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_45(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_106565.f_2357.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_106565.f_2357.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 10383;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 10383)
			{
				iVar0 = func_48(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_46(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_46(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_47(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_47(var uParam0)
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

int func_48(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2539502[iParam0 /*3*/][func_47(iParam1)];
	if (STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_49()
{
	func_35();
	return Global_106565.f_2357.f_539.f_4321;
}

int func_50()
{
	return 1;
}

void func_51()
{
	Global_14732 = 0;
	func_52();
}

void func_52()
{
	RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(0);
		Global_15866 = 6;
	}
}

void func_53()
{
	if (DOES_BLIP_EXIST(uLocal_70))
	{
		SET_BLIP_ROUTE(uLocal_70, 0);
		REMOVE_BLIP(&uLocal_70);
		if (!IS_PED_INJURED(uLocal_72))
		{
			CLEAR_PRINTS();
			func_51();
			WAIT(0);
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_THK", 4, 0, 0, 0))
			{
			}
		}
	}
	if (TIMERA() > 1000)
	{
		iLocal_55 = 7;
	}
}

void func_54()
{
	vector3 vVar0[4];
	
	func_10();
	func_61();
	func_60();
	func_8();
	if (!iLocal_97 && !iLocal_98)
	{
		if (func_49() == 0)
		{
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_CHAT1", 4, 0, 0, 0))
			{
				iLocal_97 = 1;
			}
		}
		else if (func_49() == 1)
		{
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_CHAT2", 4, 0, 0, 0))
			{
				iLocal_97 = 1;
			}
		}
	}
	if (iLocal_97 && !iLocal_98)
	{
		if (func_49() == 0)
		{
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_CHAT1b", 4, 0, 0, 0))
			{
				iLocal_98 = 1;
			}
		}
		else if (func_49() == 1)
		{
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_CHAT2b", 4, 0, 0, 0))
			{
				iLocal_98 = 1;
			}
		}
	}
	if (iLocal_97 && iLocal_98)
	{
		if (func_49() == 0)
		{
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_CHAT1c", 4, 0, 0, 0))
			{
				iLocal_97 = 0;
			}
		}
		else if (func_49() == 1)
		{
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_CHAT2c", 4, 0, 0, 0))
			{
				iLocal_97 = 0;
			}
		}
	}
	if (func_64())
	{
		if (!IS_PED_INJURED(uLocal_72))
		{
			CLEAR_PED_TASKS(uLocal_72);
			if (IS_PED_IN_GROUP(uLocal_72))
			{
				REMOVE_PED_FROM_GROUP(uLocal_72);
			}
			TASK_SMART_FLEE_COORD(uLocal_72, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
			SET_PED_KEEP_TASK(uLocal_72, 1);
			func_51();
			WAIT(0);
			func_72(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
		}
		func_86();
	}
	if (func_59(PLAYER_PED_ID(), vLocal_59, 1) > 200f)
	{
		if (!bLocal_100)
		{
			vVar0[0 /*3*/] = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) - Vector(0f, 9f, 0f) };
			GET_SAFE_COORD_FOR_PED(vVar0[0 /*3*/], 0, &(vVar0[0 /*3*/]), 0);
			vVar0[1 /*3*/] = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) + Vector(0f, 9f, 0f) };
			GET_SAFE_COORD_FOR_PED(vVar0[1 /*3*/], 0, &(vVar0[1 /*3*/]), 0);
			vVar0[2 /*3*/] = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) - Vector(0f, 0f, 9f) };
			GET_SAFE_COORD_FOR_PED(vVar0[2 /*3*/], 0, &(vVar0[2 /*3*/]), 0);
			vVar0[3 /*3*/] = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) + Vector(0f, 0f, 9f) };
			GET_SAFE_COORD_FOR_PED(vVar0[3 /*3*/], 0, &(vVar0[3 /*3*/]), 0);
			if (!IS_SPHERE_VISIBLE(vVar0[0 /*3*/], 3f))
			{
				uLocal_85 = CREATE_VEHICLE(joaat("sheriff"), vVar0[0 /*3*/], func_57(vVar0[0 /*3*/], func_58(PLAYER_ID())), 1, 1, 0);
				uLocal_82[0] = CREATE_PED_INSIDE_VEHICLE(uLocal_85, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				uLocal_82[1] = CREATE_PED_INSIDE_VEHICLE(uLocal_85, 6, joaat("s_m_y_ranger_01"), 0, 1, 1);
				GIVE_WEAPON_TO_PED(uLocal_82[0], joaat("weapon_pistol"), -1, 0, 1);
				GIVE_WEAPON_TO_PED(uLocal_82[1], joaat("weapon_pistol"), -1, 0, 1);
				SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER_ID(), 1, 0);
				SET_PLAYER_WANTED_LEVEL_NOW(PLAYER_ID(), 0);
				bLocal_100 = true;
			}
			else if (!IS_SPHERE_VISIBLE(vVar0[1 /*3*/], 3f))
			{
				uLocal_85 = CREATE_VEHICLE(joaat("sheriff"), vVar0[1 /*3*/], func_57(vVar0[1 /*3*/], func_58(PLAYER_ID())), 1, 1, 0);
				uLocal_82[0] = CREATE_PED_INSIDE_VEHICLE(uLocal_85, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				uLocal_82[1] = CREATE_PED_INSIDE_VEHICLE(uLocal_85, 6, joaat("s_m_y_ranger_01"), 0, 1, 1);
				GIVE_WEAPON_TO_PED(uLocal_82[0], joaat("weapon_pistol"), -1, 0, 1);
				GIVE_WEAPON_TO_PED(uLocal_82[1], joaat("weapon_pistol"), -1, 0, 1);
				SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER_ID(), 1, 0);
				SET_PLAYER_WANTED_LEVEL_NOW(PLAYER_ID(), 0);
				bLocal_100 = true;
			}
			else if (!IS_SPHERE_VISIBLE(vVar0[2 /*3*/], 3f))
			{
				uLocal_85 = CREATE_VEHICLE(joaat("sheriff"), vVar0[2 /*3*/], func_57(vVar0[2 /*3*/], func_58(PLAYER_ID())), 1, 1, 0);
				uLocal_82[0] = CREATE_PED_INSIDE_VEHICLE(uLocal_85, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				uLocal_82[1] = CREATE_PED_INSIDE_VEHICLE(uLocal_85, 6, joaat("s_m_y_ranger_01"), 0, 1, 1);
				GIVE_WEAPON_TO_PED(uLocal_82[0], joaat("weapon_pistol"), -1, 0, 1);
				GIVE_WEAPON_TO_PED(uLocal_82[1], joaat("weapon_pistol"), -1, 0, 1);
				SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER_ID(), 1, 0);
				SET_PLAYER_WANTED_LEVEL_NOW(PLAYER_ID(), 0);
				bLocal_100 = true;
			}
			else if (!IS_SPHERE_VISIBLE(vVar0[3 /*3*/], 3f))
			{
				uLocal_85 = CREATE_VEHICLE(joaat("sheriff"), vVar0[3 /*3*/], func_57(vVar0[3 /*3*/], func_58(PLAYER_ID())), 1, 1, 0);
				uLocal_82[0] = CREATE_PED_INSIDE_VEHICLE(uLocal_85, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				uLocal_82[1] = CREATE_PED_INSIDE_VEHICLE(uLocal_85, 6, joaat("s_m_y_ranger_01"), 0, 1, 1);
				GIVE_WEAPON_TO_PED(uLocal_82[0], joaat("weapon_pistol"), -1, 0, 1);
				GIVE_WEAPON_TO_PED(uLocal_82[1], joaat("weapon_pistol"), -1, 0, 1);
				SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER_ID(), 1, 0);
				SET_PLAYER_WANTED_LEVEL_NOW(PLAYER_ID(), 0);
				bLocal_100 = true;
			}
		}
	}
	if (!IS_ENTITY_AT_COORD(PLAYER_PED_ID(), GET_ENTITY_COORDS(uLocal_79, 0), 10f, 10f, 10f, 0, 0, 0) || IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER_ID(), 0))
	{
		func_56();
	}
	if (!IS_PED_INJURED(uLocal_72))
	{
		if (((!IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER_ID(), 0) && IS_ENTITY_IN_ANGLED_AREA(uLocal_72, 990.7705f, -105.594f, 73.3055f, 954.8849f, -145.3864f, 79.1073f, 8.8125f, 0, 1, 0)) && IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), 990.7705f, -105.594f, 73.3055f, 954.8849f, -145.3864f, 79.1073f, 8.8125f, 0, 1, 0)) || (IS_ENTITY_AT_COORD(uLocal_72, vLocal_86, Global_19, 1, 1, 0) && func_55(1, 0, 1)))
		{
			SETTIMERA(0);
			if (func_14())
			{
				if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
				{
					_SET_VEHICLE_HALT(GET_PLAYERS_LAST_VEHICLE(), 10.5f, 2, 0);
				}
				CLEAR_PRINTS();
				iLocal_55 = 5;
			}
			else
			{
				iLocal_55 = 6;
			}
		}
	}
}

int func_55(bool bParam0, bool bParam1, bool bParam2)
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

void func_56()
{
	vector3 vVar0;
	
	vVar0 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) };
	if (IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER_ID(), 0))
	{
		if (func_14())
		{
			func_51();
			WAIT(0);
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_POL", 4, 0, 0, 0))
			{
				iLocal_55 = 10;
			}
		}
		else if (IS_COP_VEHICLE_IN_AREA_3D((vVar0.x - 50f), (vVar0.y - 50f), (vVar0.z - 50f), (vVar0.x + 50f), (vVar0.y + 50f), (vVar0.z + 50f)))
		{
			if (!IS_PED_INJURED(uLocal_72))
			{
				CLEAR_PED_TASKS(uLocal_72);
				if (IS_PED_IN_GROUP(uLocal_72))
				{
					REMOVE_PED_FROM_GROUP(uLocal_72);
				}
				TASK_SMART_FLEE_COORD(uLocal_72, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
				SET_PED_KEEP_TASK(uLocal_72, 1);
				WAIT(0);
			}
			func_86();
		}
	}
	else if (func_14())
	{
		if (IS_COP_VEHICLE_IN_AREA_3D((vVar0.x - 10f), (vVar0.y - 10f), (vVar0.z - 10f), (vVar0.x + 10f), (vVar0.y + 10f), (vVar0.z + 10f)))
		{
			func_51();
			WAIT(0);
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_POL", 4, 0, 0, 0))
			{
				SET_PLAYER_WANTED_LEVEL(PLAYER_ID(), 3, 0);
				SET_PLAYER_WANTED_LEVEL_NOW(PLAYER_ID(), 0);
				SET_WANTED_LEVEL_DIFFICULTY(PLAYER_ID(), 0f);
				if (DOES_BLIP_EXIST(uLocal_70))
				{
					REMOVE_BLIP(&uLocal_70);
				}
				iLocal_55 = 10;
			}
		}
	}
	else if (IS_COP_VEHICLE_IN_AREA_3D((vVar0.x - 10f), (vVar0.y - 10f), (vVar0.z - 10f), (vVar0.x + 10f), (vVar0.y + 10f), (vVar0.z + 10f)))
	{
		if (!IS_PED_INJURED(uLocal_72))
		{
			CLEAR_PED_TASKS(uLocal_72);
			if (IS_PED_IN_GROUP(uLocal_72))
			{
				REMOVE_PED_FROM_GROUP(uLocal_72);
			}
			TASK_SMART_FLEE_COORD(uLocal_72, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
			SET_PED_KEEP_TASK(uLocal_72, 1);
			WAIT(0);
		}
		func_86();
	}
}

var func_57(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_58(var uParam0)
{
	return GET_ENTITY_COORDS(GET_PLAYER_PED(uParam0), 0);
}

float func_59(var uParam0, vector3 vParam1, int iParam4)
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

void func_60()
{
	if (!IS_PED_INJURED(uLocal_72))
	{
		if (IS_PED_ON_FOOT(uLocal_72))
		{
			if (!iLocal_142)
			{
				iLocal_143 = GET_GAME_TIMER();
				iLocal_142 = 1;
			}
			else
			{
				iLocal_144 = GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_142 = 0;
		}
	}
	if ((iLocal_144 - iLocal_143) > 120000)
	{
		if (!IS_PED_INJURED(uLocal_72))
		{
			if (IS_PED_IN_GROUP(uLocal_72))
			{
				if (func_72(&uLocal_148, "PRI1AU", "PRI1_WLK", 4, 0, 0, 0))
				{
					REMOVE_PED_FROM_GROUP(uLocal_72);
					func_86();
				}
			}
		}
	}
}

void func_61()
{
	if (IS_PED_STOPPED(PLAYER_PED_ID()))
	{
		if (!iLocal_145)
		{
			iLocal_146 = GET_GAME_TIMER();
			iLocal_145 = 1;
		}
		else
		{
			iLocal_147 = GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_145 = 0;
	}
	if ((iLocal_147 - iLocal_146) > 60000)
	{
		if (!IS_PED_INJURED(uLocal_72))
		{
			if (IS_PED_IN_GROUP(uLocal_72))
			{
				if (func_72(&uLocal_148, "PRI1AU", "PRI1_SLO", 4, 0, 0, 0))
				{
					REMOVE_PED_FROM_GROUP(uLocal_72);
					func_86();
				}
			}
		}
	}
}

int func_62()
{
	if (!IS_PED_INJURED(uLocal_72))
	{
		if (IS_PED_IN_GROUP(uLocal_72))
		{
			if ((((((((IS_ENTITY_AT_COORD(PLAYER_PED_ID(), vLocal_114, 50f, 50f, 50f, 0, 1, 0) || IS_ENTITY_AT_COORD(PLAYER_PED_ID(), vLocal_117, 50f, 50f, 50f, 0, 1, 0)) || IS_ENTITY_AT_COORD(PLAYER_PED_ID(), vLocal_120, 50f, 50f, 50f, 0, 1, 0)) || IS_ENTITY_AT_COORD(PLAYER_PED_ID(), vLocal_123, 50f, 50f, 50f, 0, 1, 0)) || IS_ENTITY_AT_COORD(PLAYER_PED_ID(), vLocal_126, 50f, 50f, 50f, 0, 1, 0)) || IS_ENTITY_AT_COORD(PLAYER_PED_ID(), vLocal_129, 50f, 50f, 50f, 0, 1, 0)) || IS_ENTITY_AT_COORD(PLAYER_PED_ID(), vLocal_132, 50f, 50f, 50f, 0, 1, 0)) || IS_ENTITY_AT_COORD(PLAYER_PED_ID(), vLocal_135, 50f, 50f, 50f, 0, 1, 0)) || func_59(PLAYER_PED_ID(), vLocal_138, 1) < 205f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_63()
{
	if (!IS_PED_INJURED(uLocal_72) && func_88())
	{
		if (IS_VEHICLE_DRIVEABLE(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0), 0))
		{
			if (IS_PED_SITTING_IN_VEHICLE(PLAYER_PED_ID(), GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0)) && IS_PED_SITTING_IN_VEHICLE(uLocal_72, GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0)))
			{
				SETTIMERA(0);
				if (!IS_PED_IN_GROUP(uLocal_72))
				{
					SET_PED_AS_GROUP_MEMBER(uLocal_72, GET_PLAYER_GROUP(PLAYER_ID()));
					SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_72, 0);
					SET_PED_NEVER_LEAVES_GROUP(uLocal_72, 1);
				}
				if (iLocal_56 == 0)
				{
					if (!func_83())
					{
						if (func_72(&uLocal_148, "PRI1AU", "PRI1_CH", 4, 0, 0, 0))
						{
							if (!DOES_BLIP_EXIST(uLocal_70))
							{
								uLocal_70 = func_6(vLocal_86, 1);
							}
							CLEAR_BIT(&uLocal_94, 3);
							iLocal_96 = 1;
							iLocal_55 = 3;
						}
					}
				}
				else if (iLocal_56 == 1)
				{
					if (func_49() == 0)
					{
						func_72(&uLocal_148, "PRI2AU", "PRI2_WHTM", 4, 0, 0, 0);
					}
					else if (func_49() == 1)
					{
						func_72(&uLocal_148, "PRI2AU", "PRI2_WHTF", 4, 0, 0, 0);
					}
					else if (func_49() == 2)
					{
						func_72(&uLocal_148, "PRI2AU", "PRI2_WHTT", 4, 0, 0, 0);
					}
					SET_PED_FLEE_ATTRIBUTES(uLocal_72, 2, 1);
					iLocal_55 = 3;
				}
			}
		}
	}
}

int func_64()
{
	int iVar0;
	
	if (!IS_PED_INJURED(uLocal_72))
	{
		if (IS_VEHICLE_DRIVEABLE(GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_72, GET_PLAYERS_LAST_VEHICLE(), 1))
			{
				func_51();
				return 1;
			}
		}
		if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_72, PLAYER_PED_ID(), 1))
		{
			func_51();
			return 1;
		}
		if (!IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), uLocal_72, 250f, 250f, 250f, 0, 1, 0))
		{
			return 1;
		}
		if (iLocal_56 == 0)
		{
			iVar0 = 0;
			if (func_67())
			{
				iVar0 = 0;
				while (iVar0 < func_66())
				{
					if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_65(iVar0), PLAYER_PED_ID(), 0))
					{
						if (GET_PED_RELATIONSHIP_GROUP_HASH(GET_PED_INDEX_FROM_ENTITY_INDEX(func_65(iVar0))) == -1865950624)
						{
							return 1;
						}
					}
					iVar0++;
				}
			}
		}
		if (iLocal_55 < 2)
		{
			if (HAS_PED_RECEIVED_EVENT(uLocal_72, 126))
			{
				return 1;
			}
			if (iLocal_56 == 0)
			{
				if (DOES_ENTITY_EXIST(uLocal_79))
				{
					if (((IS_COP_PED_IN_AREA_3D(GET_ENTITY_COORDS(uLocal_79, 0) + Vector(0f, 0f, 45f) - Vector(40f, 40f, 40f), GET_ENTITY_COORDS(uLocal_79, 0) + Vector(0f, 0f, 45f) + Vector(40f, 40f, 40f)) || IS_COP_PED_IN_AREA_3D(GET_ENTITY_COORDS(uLocal_79, 0) - Vector(0f, 0f, 45f) - Vector(40f, 40f, 40f), GET_ENTITY_COORDS(uLocal_79, 0) - Vector(0f, 0f, 45f) + Vector(40f, 40f, 40f))) || IS_COP_PED_IN_AREA_3D(GET_ENTITY_COORDS(uLocal_79, 0) + Vector(0f, 45f, 0f) - Vector(40f, 40f, 40f), GET_ENTITY_COORDS(uLocal_79, 0) + Vector(0f, 45f, 0f) + Vector(40f, 40f, 40f))) || IS_COP_PED_IN_AREA_3D(GET_ENTITY_COORDS(uLocal_79, 0) - Vector(0f, 45f, 0f) - Vector(40f, 40f, 40f), GET_ENTITY_COORDS(uLocal_79, 0) - Vector(0f, 45f, 0f) + Vector(40f, 40f, 40f)))
					{
						TASK_SMART_FLEE_PED(uLocal_72, PLAYER_PED_ID(), 1000f, -1, 0, 0);
						SET_PED_KEEP_TASK(uLocal_72, 1);
						return 1;
					}
				}
			}
			else if (iLocal_56 == 1)
			{
				if (IS_COP_PED_IN_AREA_3D(GET_ENTITY_COORDS(uLocal_72, 0) - Vector(70f, 70f, 70f), GET_ENTITY_COORDS(uLocal_72, 0) + Vector(70f, 70f, 70f)))
				{
					return 1;
				}
			}
			if (IS_BULLET_IN_AREA(GET_ENTITY_COORDS(uLocal_72, 1), 20f, 1))
			{
				return 1;
			}
			if ((IS_PROJECTILE_TYPE_IN_AREA(GET_ENTITY_COORDS(uLocal_72, 1) - Vector(15f, 15f, 15f), GET_ENTITY_COORDS(uLocal_72, 1) + Vector(15f, 15f, 15f), joaat("weapon_smokegrenade"), 1) || IS_PROJECTILE_TYPE_IN_AREA(GET_ENTITY_COORDS(uLocal_72, 1) - Vector(15f, 15f, 15f), GET_ENTITY_COORDS(uLocal_72, 1) + Vector(15f, 15f, 15f), joaat("weapon_grenade"), 1)) || IS_PROJECTILE_TYPE_IN_AREA(GET_ENTITY_COORDS(uLocal_72, 1) - Vector(15f, 15f, 15f), GET_ENTITY_COORDS(uLocal_72, 1) + Vector(15f, 15f, 15f), joaat("weapon_grenadelauncher"), 1))
			{
				return 1;
			}
			if (_0x2F09F7976C512404(GET_ENTITY_COORDS(uLocal_72, 1), 3f))
			{
				return 1;
			}
			if (IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER_ID(), 0))
			{
				return 1;
			}
			if ((IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), uLocal_72, 20f, 20f, 8f, 0, 1, 0) && HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_72, PLAYER_PED_ID())) && IS_PED_ARMED(PLAYER_PED_ID(), 6))
			{
				if (IS_PLAYER_TARGETTING_ENTITY(PLAYER_ID(), uLocal_72) || IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER_ID(), uLocal_72))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		func_51();
		return 1;
	}
	return 0;
}

var func_65(int iParam0)
{
	return Global_48745.f_25[iParam0];
}

int func_66()
{
	return Global_48745.f_24;
}

bool func_67()
{
	return Global_48745.f_24 > 0;
}

void func_68()
{
	if (IS_VEHICLE_DRIVEABLE(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0), 0))
	{
		if (!IS_PED_INJURED(uLocal_72))
		{
			if (!func_83())
			{
				if (func_9())
				{
					func_72(&uLocal_148, "PRI2AU", "PRI2_THREAT", 4, 0, 0, 0);
				}
				else
				{
					func_72(&uLocal_148, "PRI2AU", "PRI2_HIJ", 4, 0, 0, 0);
				}
				if (DOES_BLIP_EXIST(uLocal_105))
				{
					SET_BLIP_AS_FRIENDLY(uLocal_105, 0);
				}
				CLEAR_PED_TASKS(uLocal_72);
				OPEN_SEQUENCE_TASK(&uLocal_74);
				TASK_AIM_GUN_AT_ENTITY(0, PLAYER_PED_ID(), 500, 1);
				TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER_PED_ID(), PLAYER_PED_ID(), 1f, 0, 1f, 0.5f, 1, 0, -957453492);
				TASK_ENTER_VEHICLE(0, GET_PLAYERS_LAST_VEHICLE(), -1, -1, 2f, 9, 0);
				CLOSE_SEQUENCE_TASK(uLocal_74);
				TASK_PERFORM_SEQUENCE(uLocal_72, uLocal_74);
				CLEAR_SEQUENCE_TASK(&uLocal_74);
				SETTIMERA(0);
				bLocal_110 = true;
				iLocal_55 = 11;
			}
		}
	}
}

float func_69(var uParam0, var uParam1)
{
	return func_5(uParam0, uParam1, 1);
}

int func_70()
{
	if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		uLocal_75 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
		if (IS_VEHICLE_DRIVEABLE(uLocal_75, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_71(var uParam0)
{
	if ((((IS_VEHICLE_STUCK_TIMER_UP(uParam0, 0, 3000) || IS_ENTITY_ON_FIRE(uParam0)) || GET_NUMBER_OF_FIRES_IN_RANGE(GET_ENTITY_COORDS(uParam0, 0), 5f) > 0) || HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uParam0, joaat("weapon_molotov"), 0)) || IS_PROJECTILE_TYPE_IN_AREA(GET_ENTITY_COORDS(uParam0, 0) - Vector(5f, 5f, 5f), GET_ENTITY_COORDS(uParam0, 0) + Vector(5f, 5f, 5f), joaat("weapon_molotov"), 0))
	{
		return 1;
	}
	return 0;
}

bool func_72(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_82(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_73(sParam2, iParam3, 0);
}

int func_73(char* sParam0, int iParam1, bool bParam2)
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
					func_81();
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
		if (func_80(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_79();
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
				func_78();
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
				if (func_77())
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
			if (func_76())
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
			func_75();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_74();
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
		func_81();
	}
	return 0;
}

void func_74()
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

void func_75()
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

int func_76()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_77()
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

void func_78()
{
	if (func_36(14))
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
		Global_14553 = func_49();
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

void func_79()
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

bool func_80(int iParam0, int iParam1)
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

void func_81()
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

void func_82(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_83()
{
	if (Global_15866 != 0 || IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_84()
{
	if (!IS_ENTITY_DEAD(uLocal_79, 0))
	{
		if (!IS_PED_IN_VEHICLE(PLAYER_PED_ID(), uLocal_79, 0) && !IS_VEHICLE_SEAT_FREE(uLocal_79, -1, 0))
		{
			_0x9D3AF56E94C9AE98(uLocal_79, 60000f);
			_SOUND_VEHICLE_HORN_THIS_FRAME(uLocal_79);
		}
	}
}

void func_85()
{
	switch (iLocal_108)
	{
		case 0:
			if (!IS_PED_INJURED(uLocal_72))
			{
				if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), uLocal_72, 20f, 20f, 8f, 0, 1, 0))
				{
					if (GET_ENTITY_SPEED(PLAYER_PED_ID()) < 2.5f || !(IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0) && IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), uLocal_72, 15f, 15f, 8f, 0, 1, 0)))
					{
						OPEN_SEQUENCE_TASK(&uLocal_74);
						TASK_LOOK_AT_ENTITY(0, PLAYER_PED_ID(), 30000, 2050, 2);
						TASK_GO_TO_ENTITY(0, PLAYER_PED_ID(), -1, 2f, 1f, 1073741824, 0);
						CLOSE_SEQUENCE_TASK(uLocal_74);
						TASK_PERFORM_SEQUENCE(uLocal_72, uLocal_74);
						CLEAR_SEQUENCE_TASK(&uLocal_74);
						if (func_72(&uLocal_148, "PRI1AU", "PRI1_ASK", 4, 0, 0, 0))
						{
							bLocal_99 = true;
							iLocal_108++;
						}
					}
				}
			}
			break;
		
		case 1:
			func_87(&uLocal_107);
			if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1))
			{
				if (func_88())
				{
					uLocal_75 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
					if (GET_ENTITY_SPEED(uLocal_75) < 9f)
					{
						if (!IS_PED_INJURED(uLocal_72))
						{
							if (IS_ENTITY_AT_ENTITY(uLocal_72, uLocal_75, 20f, 20f, 5f, 0, 1, 0))
							{
								iLocal_108++;
							}
						}
					}
				}
				else if (!bLocal_110)
				{
					fLocal_109 = func_5(uLocal_72, PLAYER_PED_ID(), 1);
					OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK_LOOK_AT_ENTITY(0, PLAYER_PED_ID(), 7000, 2048, 2);
					TASK_GO_TO_ENTITY(0, PLAYER_PED_ID(), -1, (fLocal_109 - 3f), 1f, 1073741824, 0);
					CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK_PERFORM_SEQUENCE(uLocal_72, uLocal_74);
					CLEAR_SEQUENCE_TASK(&uLocal_74);
					if (!func_83())
					{
						if (func_9())
						{
							func_72(&uLocal_148, "PRI1AU", "PRI1_UVH2", 4, 0, 0, 0);
						}
						else
						{
							func_72(&uLocal_148, "PRI1AU", "PRI1_UVH", 4, 0, 0, 0);
						}
						bLocal_110 = true;
						bLocal_99 = true;
					}
				}
			}
			break;
		
		case 2:
			func_87(&uLocal_107);
			if (!iLocal_112)
			{
				if (GET_ENTITY_SPEED(PLAYER_PED_ID()) < 2.5f)
				{
					if (!IS_PED_INJURED(uLocal_72))
					{
						CLEAR_PED_TASKS(uLocal_72);
						TASK_OPEN_VEHICLE_DOOR(uLocal_72, uLocal_75, -1, 0, 1f);
						iLocal_112 = 1;
					}
				}
				if (!func_83())
				{
					if (!IS_PED_INJURED(uLocal_72))
					{
						CLEAR_PED_TASKS(uLocal_72);
						TASK_OPEN_VEHICLE_DOOR(uLocal_72, uLocal_75, -1, 0, 1f);
						iLocal_112 = 1;
					}
				}
			}
			if (func_88())
			{
				uLocal_75 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
				if (GET_ENTITY_SPEED(uLocal_75) < 2.5f)
				{
					if (IS_ENTITY_AT_COORD(uLocal_75, GET_ENTITY_COORDS(uLocal_72, 1), 20f, 20f, 5f, 0, 1, 0))
					{
						if (iLocal_56 == 0)
						{
							if (!func_83())
							{
								if (func_49() == 0)
								{
									if (func_9())
									{
										func_72(&uLocal_148, "PRI1AU", "PRI1_GETONM", 4, 0, 0, 0);
									}
									else
									{
										func_72(&uLocal_148, "PRI1AU", "PRI1_JIM", 4, 0, 0, 0);
									}
								}
								else if (func_49() == 1)
								{
									if (func_9())
									{
										func_72(&uLocal_148, "PRI1AU", "PRI1_GETONF", 4, 0, 0, 0);
									}
									else
									{
										func_72(&uLocal_148, "PRI1AU", "PRI1_JIF", 4, 0, 0, 0);
									}
								}
								else if (func_49() == 2)
								{
									func_72(&uLocal_148, "PRI1AU", "PRI1_JIT", 4, 0, 0, 0);
								}
								iLocal_108++;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (func_88())
			{
				uLocal_75 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
				if (GET_ENTITY_SPEED(uLocal_75) < 0.5f)
				{
					if (!IS_PED_INJURED(uLocal_72))
					{
						CLEAR_PED_TASKS(uLocal_72);
						if (!IS_PED_IN_GROUP(uLocal_72))
						{
							SET_PED_AS_GROUP_MEMBER(uLocal_72, GET_PLAYER_GROUP(PLAYER_ID()));
							SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_72, 0);
							SET_PED_NEVER_LEAVES_GROUP(uLocal_72, 1);
						}
						iLocal_108++;
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_56 == 0)
			{
				if (!func_83())
				{
					if (func_72(&uLocal_148, "PRI1AU", "PRI1_SH", 4, 0, 0, 0))
					{
						iLocal_108++;
					}
				}
			}
			else
			{
				iLocal_108++;
			}
			break;
		
		case 5:
			if (func_88())
			{
				if (IS_VEHICLE_DRIVEABLE(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0), 0))
				{
					if (!IS_PED_INJURED(uLocal_72))
					{
						if (IS_PED_SITTING_IN_VEHICLE(uLocal_72, GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0)))
						{
							if (DOES_BLIP_EXIST(uLocal_105))
							{
								REMOVE_BLIP(&uLocal_105);
							}
							iLocal_55 = 2;
						}
					}
				}
			}
			else
			{
				func_8();
			}
			break;
	}
}

void func_86()
{
	func_170();
}

void func_87(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (!IS_PED_INJURED(uLocal_72))
			{
				if (!IS_PED_FACING_PED(uLocal_72, PLAYER_PED_ID(), 90f))
				{
					TASK_TURN_PED_TO_FACE_ENTITY(uLocal_72, PLAYER_PED_ID(), 0);
					*uParam0++;
				}
			}
			break;
		
		case 1:
			if (!IS_PED_INJURED(uLocal_72))
			{
				if (IS_PED_FACING_PED(uLocal_72, PLAYER_PED_ID(), 90f))
				{
					*uParam0++;
				}
			}
			break;
		
		case 2:
			if (!IS_PED_INJURED(uLocal_72))
			{
				if (!IS_PED_FACING_PED(uLocal_72, PLAYER_PED_ID(), 90f))
				{
					*uParam0 = 0;
				}
			}
			break;
	}
}

int func_88()
{
	if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		if (DOES_ENTITY_EXIST(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0)))
		{
			if ((((((!IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER_PED_ID()) && !IS_PED_IN_ANY_BOAT(PLAYER_PED_ID())) && !IS_PED_IN_ANY_HELI(PLAYER_PED_ID())) && !IS_PED_IN_ANY_PLANE(PLAYER_PED_ID())) && !IS_PED_IN_ANY_SUB(PLAYER_PED_ID())) && !IS_PED_IN_ANY_TRAIN(PLAYER_PED_ID())) && !IS_BIG_VEHICLE(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0)))
			{
				if (GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_89()
{
	if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		uLocal_75 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
		if ((IS_VEHICLE_DRIVEABLE(uLocal_75, 0) && !IS_PED_INJURED(uLocal_72)) && !bLocal_99)
		{
			fLocal_109 = func_5(uLocal_72, PLAYER_PED_ID(), 1);
			if (fLocal_109 > 5f)
			{
				fLocal_109 = (fLocal_109 - 2.5f);
			}
			else
			{
				fLocal_109 = (fLocal_109 - 1f);
			}
			CLEAR_PED_TASKS(uLocal_72);
			OPEN_SEQUENCE_TASK(&uLocal_74);
			if (iLocal_56 == 0)
			{
				TASK_LOOK_AT_ENTITY(0, uLocal_75, 10000, 2048, 2);
				TASK_PLAY_ANIM(0, "random@prisoner_lift", "arms_waving", 2f, -2f, -1, 49, 0, 0, 0, 0);
				TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER_PED_ID(), PLAYER_PED_ID(), 1f, 0, fLocal_109, 1f, 1, 0, -957453492);
			}
			else if (iLocal_56 == 1)
			{
				TASK_LOOK_AT_ENTITY(0, uLocal_75, 10000, 2052, 2);
				TASK_PLAY_ANIM(0, "random@prisoner_lift", "arms_waving", 2f, -2f, -1, 49, 0, 0, 0, 0);
				TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, PLAYER_PED_ID(), -1f, 0f, 0f, 1f, -1, 0.5f, 1);
			}
			CLOSE_SEQUENCE_TASK(uLocal_74);
			TASK_PERFORM_SEQUENCE(uLocal_72, uLocal_74);
			CLEAR_SEQUENCE_TASK(&uLocal_74);
			if (iLocal_56 == 0)
			{
				func_72(&uLocal_148, "PRI1AU", "PRI1_STO", 4, 0, 0, 0);
				SETTIMERA(0);
				bLocal_99 = true;
			}
			else if (iLocal_56 == 1)
			{
				if (func_72(&uLocal_148, "PRI2AU", "PRI2_STO", 4, 0, 0, 0))
				{
					SETTIMERA(0);
					bLocal_99 = true;
				}
			}
		}
	}
}

void func_90(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_105621, GET_THIS_SCRIPT_NAME(), 24);
		Global_105615 = 1;
	}
	else
	{
		StringCopy(&Global_105621, "NULL", 24);
		Global_105615 = 0;
	}
}

int func_91(int iParam0)
{
	if (func_95())
	{
		Global_106555 = 1;
		Global_106552 = GET_GAME_TIMER();
		if (func_29(Global_106554))
		{
			func_92(0);
		}
		SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_29(Global_106554))
		{
			FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_106565.f_24989.f_2 < 3)
			{
				if (!IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_93(func_94(iParam0), -1);
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
					func_93(func_94(iParam0), -1);
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
					func_93(func_94(iParam0), -1);
					Global_106565.f_24989.f_4++;
					SET_BIT(&Global_106561, 2);
				}
			}
			break;
	}
}

void func_93(var uParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

char* func_94(int iParam0)
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

int func_95()
{
	switch (func_96(&Global_25824, 0, 5, 0, GET_ID_OF_THIS_THREAD()))
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

int func_96(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_100(0))
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
		if (!func_98(iParam2))
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
			func_97(uParam0, iParam4);
		}
	}
	return 2;
}

void func_97(var uParam0, int iParam1)
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

bool func_98(int iParam0)
{
	return func_99(iParam0, Global_36425);
}

int func_99(int iParam0, int iParam1)
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

int func_100(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_98(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_101()
{
	if (DOES_BLIP_EXIST(uLocal_71))
	{
		REMOVE_BLIP(&uLocal_71);
	}
	if (!DOES_BLIP_EXIST(uLocal_105))
	{
		uLocal_105 = func_11(uLocal_72, 0, 145);
		_0x75A16C3DA34F1245(uLocal_105, 0);
	}
}

void func_102()
{
	var uVar0;
	var uVar1[2];
	
	func_104(39, 1);
	func_104(40, 1);
	func_104(41, 1);
	func_104(42, 1);
	func_104(43, 1);
	func_104(44, 1);
	ENABLE_DISPATCH_SERVICE(3, 0);
	ENABLE_DISPATCH_SERVICE(5, 0);
	ENABLE_DISPATCH_SERVICE(11, 0);
	uLocal_72 = CREATE_PED(26, iLocal_90, vLocal_76, fLocal_89, 1, 1);
	SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_72, 1);
	SET_PED_CONFIG_FLAG(uLocal_72, 134, 1);
	SET_PED_CONFIG_FLAG(uLocal_72, 137, 1);
	ADD_RELATIONSHIP_GROUP("PedPrisoner", &uLocal_73);
	SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_72, uLocal_73);
	SET_RELATIONSHIP_BETWEEN_GROUPS(5, -1533126372, uLocal_73);
	SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_73, -1533126372);
	TASK_PLAY_ANIM(uLocal_72, "random@prisoner_lift", "loop2_idlelook2", 2f, -2f, -1, 1, 0, 0, 0, 0);
	SET_PED_MONEY(uLocal_72, 0);
	SET_PED_COMBAT_ATTRIBUTES(uLocal_72, 8, 0);
	SET_PED_FLEE_ATTRIBUTES(uLocal_72, 128, 1);
	SET_PED_FLEE_ATTRIBUTES(uLocal_72, 2, 1);
	SET_PED_FLEE_ATTRIBUTES(uLocal_72, 1, 0);
	SET_BIT(&uLocal_94, 3);
	SET_BIT(&uLocal_94, 5);
	SET_BIT(&uLocal_94, 0);
	if (iLocal_56 == 0)
	{
		SET_AMBIENT_VOICE_NAME(uLocal_72, "REPRI1Lost");
		func_103(&uLocal_148, 3, uLocal_72, "REPRI1Lost", 0, 1);
		CLEAR_AREA_OF_PEDS(vLocal_76, 50f, 0);
		CLEAR_AREA(vLocal_76, 10f, 0, 0, 0, 0);
		ADD_SCENARIO_BLOCKING_AREA(vLocal_76 - Vector(50f, 50f, 50f), vLocal_76 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
		ADD_SCENARIO_BLOCKING_AREA(vLocal_86 - Vector(10f, 10f, 10f), vLocal_86 + Vector(10f, 10f, 10f), 0, 1, 1, 1);
		SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_76 - Vector(10f, 10f, 10f), vLocal_76 + Vector(10f, 10f, 10f), 0, 1);
		SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_73, -1865950624);
		SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1865950624, uLocal_73);
		SET_PED_COMBAT_ATTRIBUTES(uLocal_72, 17, 1);
		uLocal_79 = CREATE_VEHICLE(joaat("sheriff"), 1524.332f, 2173.347f, 79.0619f, 201.6806f, 1, 1, 0);
		SET_VEHICLE_ENGINE_HEALTH(uLocal_79, 0f);
		SET_VEHICLE_DOOR_OPEN(uLocal_79, 4, 0, 0);
		SET_VEHICLE_TYRE_BURST(uLocal_79, 0, 0, 1148846080);
		_0x0AD9E8F87FF7C16F(uLocal_79, 0);
		SHOOT_SINGLE_BULLET_BETWEEN_COORDS(1525.566f, 2172.512f, 80.1985f, 1524.423f, 2173.894f, 80.1342f, 100, 1, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
		uVar0 = CREATE_PED_INSIDE_VEHICLE(uLocal_79, 26, joaat("s_m_y_ranger_01"), -1, 1, 1);
		SET_PED_CONFIG_FLAG(uVar0, 326, 1);
		SET_ENTITY_HEALTH(uVar0, 99, 0);
		SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(uVar0, 1);
		uVar1[0] = CREATE_VEHICLE(joaat("ratloader"), 1527.4f, 2240.33f, 73.8459f, 216.8133f, 1, 1, 0);
		uVar1[1] = CREATE_VEHICLE(joaat("bfinjection"), 1594.093f, 2198.657f, 77.8709f, 85.3536f, 1, 1, 0);
		SET_VEHICLE_ON_GROUND_PROPERLY(uVar1[0], 1084227584);
		SET_VEHICLE_ON_GROUND_PROPERLY(uVar1[1], 1084227584);
	}
	else if (iLocal_56 == 1)
	{
		SET_ROADS_IN_ANGLED_AREA(1449.851f, 2452.661f, 81.56557f, 1203.85f, 2579.351f, 35.1549f, 224.125f, 0, 0, 1);
		SET_AMBIENT_VOICE_NAME(uLocal_72, "G_M_Y_STREETPUNK02_BLACK_MINI_04");
		func_103(&uLocal_148, 3, uLocal_72, "REPRI2Prisoner", 0, 1);
		GIVE_WEAPON_TO_PED(uLocal_72, joaat("weapon_pistol"), -1, 0, 1);
	}
	if (func_49() == 0)
	{
		func_103(&uLocal_148, 0, PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_49() == 1)
	{
		func_103(&uLocal_148, 1, PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (func_49() == 2)
	{
		func_103(&uLocal_148, 2, PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	iLocal_55 = 1;
}

void func_103(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
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

void func_104(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_108(iParam0, 2, 1))
		{
			func_107(iParam0, 2, 1);
		}
	}
	else if (func_108(iParam0, 2, 1))
	{
		func_105(iParam0, 2, 1);
	}
}

void func_105(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		CLEAR_BIT(&(Global_93734.f_1350[iParam0]), iParam1);
	}
	else if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_24() == 0)
		{
			uVar0 = func_48(func_106(iParam0), -1, 0);
			CLEAR_BIT(&uVar0, iParam1);
			func_46(func_106(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		CLEAR_BIT(&(Global_106565.f_668[iParam0]), iParam1);
	}
}

int func_106(int iParam0)
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
			return 8917;
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
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 10383;
}

void func_107(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		SET_BIT(&(Global_93734.f_1350[iParam0]), iParam1);
	}
	else if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_24() == 0)
		{
			uVar0 = func_48(func_106(iParam0), -1, 0);
			SET_BIT(&uVar0, iParam1);
			func_46(func_106(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		SET_BIT(&(Global_106565.f_668[iParam0]), iParam1);
	}
}

int func_108(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return IS_BIT_SET(Global_93734.f_1350[iParam0], iParam1);
	}
	else if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_24() == 0)
		{
			return IS_BIT_SET(func_48(func_106(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return IS_BIT_SET(Global_106565.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_109()
{
	REQUEST_MODEL(iLocal_90);
	REQUEST_ANIM_DICT("random@prisoner_lift");
	if (iLocal_56 == 0)
	{
		REQUEST_MODEL(joaat("s_m_y_ranger_01"));
		REQUEST_MODEL(joaat("sheriff"));
		REQUEST_MODEL(joaat("ratloader"));
		REQUEST_MODEL(joaat("bfinjection"));
	}
	if (HAS_MODEL_LOADED(iLocal_90) && HAS_ANIM_DICT_LOADED("random@prisoner_lift"))
	{
		if (iLocal_56 == 0)
		{
			if (((HAS_MODEL_LOADED(joaat("s_m_y_ranger_01")) && HAS_MODEL_LOADED(joaat("sheriff"))) && HAS_MODEL_LOADED(joaat("ratloader"))) && HAS_MODEL_LOADED(joaat("bfinjection")))
			{
				bLocal_57 = true;
			}
		}
		else
		{
			bLocal_57 = true;
		}
	}
	else
	{
		REQUEST_MODEL(iLocal_90);
		REQUEST_ANIM_DICT("random@prisoner_lift");
		if (iLocal_56 == 0)
		{
			REQUEST_MODEL(joaat("s_m_y_ranger_01"));
			REQUEST_MODEL(joaat("sheriff"));
			REQUEST_MODEL(joaat("ratloader"));
			REQUEST_MODEL(joaat("bfinjection"));
		}
	}
}

void func_110()
{
	if (iLocal_62 == 1)
	{
		iLocal_90 = joaat("g_m_y_lost_02");
		vLocal_76 = { 1538.09f, 2172.344f, 77.826f };
		fLocal_89 = 142.0201f;
		vLocal_91 = { 984.3975f, -106.9935f, 73.3531f };
		vLocal_86 = { 960.1481f, -139.4141f, 73.476f };
	}
	if (iLocal_62 == 2)
	{
		iLocal_90 = joaat("s_m_y_prisoner_01");
		vLocal_76 = { 1401.692f, 2528.085f, 40.3762f };
		fLocal_89 = 301.2458f;
		vLocal_91 = { 938.5384f, -2167.42f, 29.5153f };
		vLocal_86 = { 928.9882f, -2173.248f, 29.2873f };
	}
	iLocal_58 = 1;
}

int func_111()
{
	if (IS_PLAYER_PLAYING(PLAYER_ID()) && !IS_PED_INJURED(PLAYER_PED_ID()))
	{
		if (VDIST2(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), vLocal_50) < (75f * 75f))
		{
			return 1;
		}
		if (VMAG2(GET_ENTITY_VELOCITY(PLAYER_PED_ID())) > 1369f && !func_122())
		{
			return 0;
		}
	}
	if (func_118())
	{
		return 1;
	}
	if (func_112(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_112(float fParam0, bool bParam1)
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
		if (func_37(func_49()))
		{
			iVar36 = func_34();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (IS_BIT_SET(Global_106565.f_18568[iVar32 /*6*/], 2) && !IS_BIT_SET(Global_106565.f_18568[iVar32 /*6*/], 3))
				{
					func_113(iVar32, &Var0);
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

void func_113(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_114(uParam1, "Abigail1", func_116(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 1:
			func_114(uParam1, "Abigail2", func_116(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 2:
			func_114(uParam1, "Barry1", func_116(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 3:
			func_114(uParam1, "Barry2", func_116(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 4:
			func_114(uParam1, "Barry3", func_116(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 5:
			func_114(uParam1, "Barry3A", func_116(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 6:
			func_114(uParam1, "Barry3C", func_116(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 7:
			func_114(uParam1, "Barry4", func_116(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_115(iParam0), 0, 0);
			break;
		
		case 8:
			func_114(uParam1, "Dreyfuss1", func_116(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 9:
			func_114(uParam1, "Epsilon1", func_116(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 10:
			func_114(uParam1, "Epsilon2", func_116(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 11:
			func_114(uParam1, "Epsilon3", func_116(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 12:
			func_114(uParam1, "Epsilon4", func_116(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 13:
			func_114(uParam1, "Epsilon5", func_116(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 14:
			func_114(uParam1, "Epsilon6", func_116(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 15:
			func_114(uParam1, "Epsilon7", func_116(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 16:
			func_114(uParam1, "Epsilon8", func_116(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 17:
			func_114(uParam1, "Extreme1", func_116(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 18:
			func_114(uParam1, "Extreme2", func_116(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 19:
			func_114(uParam1, "Extreme3", func_116(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 20:
			func_114(uParam1, "Extreme4", func_116(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 21:
			func_114(uParam1, "Fanatic1", func_116(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_115(iParam0), 1, 0);
			break;
		
		case 22:
			func_114(uParam1, "Fanatic2", func_116(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_115(iParam0), 1, 0);
			break;
		
		case 23:
			func_114(uParam1, "Fanatic3", func_116(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_115(iParam0), 0, 1);
			break;
		
		case 24:
			func_114(uParam1, "Hao1", func_116(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_115(iParam0), 0, 1);
			break;
		
		case 25:
			func_114(uParam1, "Hunting1", func_116(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 26:
			func_114(uParam1, "Hunting2", func_116(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 27:
			func_114(uParam1, "Josh1", func_116(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 28:
			func_114(uParam1, "Josh2", func_116(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 29:
			func_114(uParam1, "Josh3", func_116(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 30:
			func_114(uParam1, "Josh4", func_116(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 31:
			func_114(uParam1, "Maude1", func_116(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 32:
			func_114(uParam1, "Minute1", func_116(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 33:
			func_114(uParam1, "Minute2", func_116(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 34:
			func_114(uParam1, "Minute3", func_116(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 35:
			func_114(uParam1, "MrsPhilips1", func_116(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 36:
			func_114(uParam1, "MrsPhilips2", func_116(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 37:
			func_114(uParam1, "Nigel1", func_116(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 38:
			func_114(uParam1, "Nigel1A", func_116(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 39:
			func_114(uParam1, "Nigel1B", func_116(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 40:
			func_114(uParam1, "Nigel1C", func_116(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 41:
			func_114(uParam1, "Nigel1D", func_116(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 42:
			func_114(uParam1, "Nigel2", func_116(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 43:
			func_114(uParam1, "Nigel3", func_116(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 44:
			func_114(uParam1, "Omega1", func_116(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 45:
			func_114(uParam1, "Omega2", func_116(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 46:
			func_114(uParam1, "Paparazzo1", func_116(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 47:
			func_114(uParam1, "Paparazzo2", func_116(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 48:
			func_114(uParam1, "Paparazzo3", func_116(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 49:
			func_114(uParam1, "Paparazzo3A", func_116(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 50:
			func_114(uParam1, "Paparazzo3B", func_116(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 51:
			func_114(uParam1, "Paparazzo4", func_116(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 52:
			func_114(uParam1, "Rampage1", func_116(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 54:
			func_114(uParam1, "Rampage3", func_116(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 55:
			func_114(uParam1, "Rampage4", func_116(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 56:
			func_114(uParam1, "Rampage5", func_116(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 53:
			func_114(uParam1, "Rampage2", func_116(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 57:
			func_114(uParam1, "TheLastOne", func_116(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 58:
			func_114(uParam1, "Tonya1", func_116(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 59:
			func_114(uParam1, "Tonya2", func_116(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 60:
			func_114(uParam1, "Tonya3", func_116(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 61:
			func_114(uParam1, "Tonya4", func_116(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 62:
			func_114(uParam1, "Tonya5", func_116(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_114(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_115(int iParam0)
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

struct<2> func_116(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_117(iParam0) };
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

struct<2> func_117(int iParam0)
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

int func_118()
{
	if (func_121() && !func_122())
	{
		return 1;
	}
	if (func_120() && func_119())
	{
		return 1;
	}
	return 0;
}

bool func_119()
{
	return Global_106283 > 0;
}

int func_120()
{
	if (Global_90634 != -1)
	{
		return 1;
	}
	return 0;
}

int func_121()
{
	if (Global_90634 != -1)
	{
		return IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

int func_122()
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

int func_123()
{
	if (!func_98(5))
	{
		return 1;
	}
	if (func_118())
	{
		return 1;
	}
	if (!IS_PED_INJURED(PLAYER_PED_ID()))
	{
		if (VMAG2(GET_ENTITY_VELOCITY(PLAYER_PED_ID())) > 1369f && !func_122())
		{
			return 0;
		}
	}
	if (func_112(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_124()
{
	if ((Global_106554 == func_43() && GET_RANDOM_EVENT_FLAG()) && Global_106555)
	{
		return 1;
	}
	return 0;
}

void func_125(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_43();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_127(iParam0);
	_0x65D2EBB47E1CEC21(0);
	SET_RANDOM_EVENT_FLAG(1);
	Global_106551 = 0;
	func_126();
}

void func_126()
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

void func_127(int iParam0)
{
	Global_106554 = iParam0;
}

int func_128(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_43();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_169())
		{
			return 0;
		}
	}
	vLocal_50 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (IS_PLAYER_PLAYING(PLAYER_ID()) && !IS_PED_INJURED(PLAYER_PED_ID()))
		{
			vVar1 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) };
			if (VMAG2(GET_ENTITY_VELOCITY(PLAYER_PED_ID())) > 1369f && !func_122())
			{
				return 0;
			}
		}
		if (!Global_106565.f_9079)
		{
			return 0;
		}
		if (func_19(0))
		{
			return 0;
		}
		if (func_118())
		{
			return 0;
		}
		if (func_168())
		{
			return 0;
		}
		if (Global_106554 != -1)
		{
			return 0;
		}
		if (func_37(func_49()))
		{
			if (func_112(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (IS_PLAYER_PLAYING(PLAYER_ID()) && !bParam6)
		{
			if ((vVar1.z - vLocal_50.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_167(iParam3))
		{
			return 0;
		}
		if (func_37(func_49()))
		{
			if (func_166(func_49()) == 4 || func_166(func_49()) == 5)
			{
				return 0;
			}
		}
		if (func_37(func_49()))
		{
			if (!func_165(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_164(Global_106565.f_24989.f_43[iParam3]))
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
		if (func_163())
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
		if (!func_154(4))
		{
			return 0;
		}
		if (!func_98(5))
		{
			return 0;
		}
		if (func_153(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_153(0, 0))
		{
			return 0;
		}
		if (Global_25911)
		{
			return 0;
		}
		if (func_167(30) && !func_153(30, 0))
		{
			if (iParam3 != 30)
			{
				if (VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_37(func_49()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_106565.f_2357.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_106565.f_2357.f_539.f_2296[iVar4];
				if (func_152(iVar8))
				{
					if (func_130(iVar4))
					{
						if (!func_129(vVar5, 0f, 0f, 0f, 0))
						{
							if (VDIST2(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), vVar5) < (210f * 210f))
							{
								if (func_49() != iVar4)
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

bool func_129(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_106565.f_2357.f_539.f_2296[iParam0];
	return func_131(iVar0);
}

int func_131(int iParam0)
{
	return func_132(iParam0, 1);
}

int func_132(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_152(iParam0))
	{
		return 0;
	}
	func_133(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_133(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_134(func_145(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_134(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_144(iParam0, iParam1))
	{
		iVar0 = func_143(iParam1);
		iVar1 = func_141(iParam0);
		iVar2 = (func_141(iParam0) - func_141(iParam1));
		iVar3 = (func_143(iParam0) - func_143(iParam1));
		iVar4 = (func_140(iParam0) - func_140(iParam1));
		iVar5 = (func_139(iParam0) - func_139(iParam1));
		iVar6 = (func_138(iParam0) - func_138(iParam1));
		iVar7 = (func_137(iParam0) - func_137(iParam1));
	}
	else
	{
		iVar0 = func_143(iParam0);
		iVar1 = func_141(iParam1);
		iVar2 = (func_141(iParam1) - func_141(iParam0));
		iVar3 = (func_143(iParam1) - func_143(iParam0));
		iVar4 = (func_140(iParam1) - func_140(iParam0));
		iVar5 = (func_139(iParam1) - func_139(iParam0));
		iVar6 = (func_138(iParam1) - func_138(iParam0));
		iVar7 = (func_137(iParam1) - func_137(iParam0));
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
		iVar4 = (iVar4 + func_136(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = ROUND(func_135(TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_135(float fParam0, float fParam1, float fParam2)
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

int func_136(int iParam0, int iParam1)
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

int func_137(int iParam0)
{
	return SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_138(int iParam0)
{
	return SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_139(int iParam0)
{
	return SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_140(int iParam0)
{
	return SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_141(int iParam0)
{
	return (SHIFT_RIGHT(iParam0, 26) & 31 * func_142(IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_142(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_143(int iParam0)
{
	return iParam0 & 15;
}

int func_144(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_152(iParam1) || !func_152(iParam0))
	{
		return 1;
	}
	iVar0 = func_141(iParam0);
	iVar1 = func_141(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_143(iParam0);
	iVar1 = func_143(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_140(iParam0);
	iVar1 = func_140(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_139(iParam0);
	iVar1 = func_139(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_138(iParam0);
	iVar1 = func_138(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_137(iParam0);
	iVar1 = func_137(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_145()
{
	var uVar0;
	
	func_151(&uVar0, GET_CLOCK_SECONDS());
	func_150(&uVar0, GET_CLOCK_MINUTES());
	func_149(&uVar0, GET_CLOCK_HOURS());
	func_148(&uVar0, GET_CLOCK_DAY_OF_MONTH());
	func_147(&uVar0, GET_CLOCK_MONTH());
	func_146(&uVar0, GET_CLOCK_YEAR());
	return uVar0;
}

void func_146(var uParam0, int iParam1)
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

void func_147(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_148(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_143(*uParam0);
	iVar1 = func_141(*uParam0);
	if (iParam1 < 1 || iParam1 > func_136(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 4));
}

void func_149(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 9));
}

void func_150(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 14));
}

void func_151(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 20));
}

int func_152(int iParam0)
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
	iVar0 = func_137(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_138(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_139(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_141(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_143(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_140(iParam0);
	if (iVar5 < 1 || iVar5 > func_136(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_153(int iParam0, int iParam1)
{
	if (IS_BIT_SET(Global_106565.f_24989.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0)
{
	int iVar0;
	
	if (IS_PLAYER_PLAYING(PLAYER_ID()))
	{
		if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
		{
			if (!IS_PED_INJURED(PLAYER_PED_ID()))
			{
				iVar0 = func_49();
				if (!func_37(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!IS_PLAYER_READY_FOR_CUTSCENE(PLAYER_ID()) || IS_ENTITY_IN_AIR(PLAYER_PED_ID())) || IS_PED_GETTING_INTO_A_VEHICLE(PLAYER_PED_ID())) || IS_PED_RAGDOLL(PLAYER_PED_ID())) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || IS_PLAYER_CLIMBING(PLAYER_ID())) || IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0)) || func_162()) || Global_105612) || Global_25767) || func_161()) || func_80(8, -1)) || func_160()) || func_159()) || func_158()) || func_157()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1) || func_162()) || Global_25767) || func_161()) || func_80(8, -1)) || func_158()) || func_160()) || func_159()) || func_157()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!IS_PLAYER_READY_FOR_CUTSCENE(PLAYER_ID()) || IS_ENTITY_IN_AIR(PLAYER_PED_ID())) || IS_PED_GETTING_INTO_A_VEHICLE(PLAYER_PED_ID())) || IS_PED_RAGDOLL(PLAYER_PED_ID())) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || IS_PLAYER_CLIMBING(PLAYER_ID())) || IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0)) || func_162()) || Global_105612) || Global_25767) || func_161()) || func_80(8, -1)) || func_158()) || func_160()) || func_159()) || func_157()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((IS_PED_RAGDOLL(PLAYER_PED_ID()) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0)) || func_162()) || Global_105612) || Global_25767) || func_161()) || func_80(8, -1)) || func_160()) || func_159()) || func_157()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_162() || GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) > 0) || func_80(8, -1)) || func_157()) || func_156()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_80(8, -1) || func_160()) || func_159()) || func_156()) || func_155())
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
							if ((((((((((((((IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0) || GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) > 0) || IS_ENTITY_IN_AIR(PLAYER_PED_ID())) || IS_PED_RAGDOLL(PLAYER_PED_ID())) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || IS_PLAYER_CLIMBING(PLAYER_ID())) || func_162()) || Global_25767) || func_161()) || func_80(8, -1)) || func_159()) || func_158()) || func_157()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0) || !IS_PLAYER_CONTROL_ON(PLAYER_ID())) || !IS_PLAYER_READY_FOR_CUTSCENE(PLAYER_ID())) || !IS_SCREEN_FADED_IN()) || IS_ENTITY_IN_AIR(PLAYER_PED_ID())) || IS_PED_RAGDOLL(PLAYER_PED_ID())) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || func_162()) || func_159()) || Global_105612) || Global_25767) || func_161()) || Global_37584) || func_80(8, -1)) || func_158()) || func_156()) || func_157()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0) || !IS_PLAYER_CONTROL_ON(PLAYER_ID())) || !IS_PLAYER_READY_FOR_CUTSCENE(PLAYER_ID())) || !IS_SCREEN_FADED_IN()) || IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER_ID(), 0)) || IS_ENTITY_IN_AIR(PLAYER_PED_ID())) || IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1)) || IS_PED_RAGDOLL(PLAYER_PED_ID())) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PED_SWIMMING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || IS_PLAYER_CLIMBING(PLAYER_ID())) || func_162()) || Global_105612) || Global_25767) || func_161()) || func_80(8, -1)) || func_158()) || func_156()) || func_160()) || func_159()) || func_157())
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

var func_155()
{
	return Global_93721.f_1;
}

int func_156()
{
	if (Global_90634 != -1)
	{
		return IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_157()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_158()
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

bool func_159()
{
	return Global_93734.f_340 > 0;
}

bool func_160()
{
	return Global_93734.f_339 > 0;
}

var func_161()
{
	return Global_1312867;
}

int func_162()
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

int func_163()
{
	func_78();
	if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_164(int iParam0)
{
	return func_144(func_145(), iParam0);
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_49();
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

int func_166(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 7;
	}
	return Global_106565.f_7682.f_919[iParam0];
}

int func_167(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_169())
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

int func_168()
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

int func_169()
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

void func_170()
{
	if (iLocal_141)
	{
		func_184(0);
		func_182();
		func_90(0);
		SET_WANTED_LEVEL_MULTIPLIER(1f);
		SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_76 - Vector(10f, 10f, 10f), vLocal_76 + Vector(10f, 10f, 10f), 1, 1);
		RESET_WANTED_LEVEL_DIFFICULTY(PLAYER_ID());
		SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(1449.851f, 2452.661f, 81.56557f, 1203.85f, 2579.351f, 35.1549f, 224.125f, 1);
		if (IS_PLAYER_PLAYING(PLAYER_ID()))
		{
			if (!IS_PLAYER_CONTROL_ON(PLAYER_ID()))
			{
				SET_PLAYER_CONTROL(PLAYER_ID(), 1, 0);
			}
		}
		if (!IS_PED_INJURED(uLocal_72))
		{
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_72, 0);
			if (iLocal_56 == 0)
			{
				SET_PED_CONFIG_FLAG(uLocal_72, 317, 1);
				if (IS_PED_INJURED(PLAYER_PED_ID()))
				{
					OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					TASK_SMART_FLEE_COORD(0, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
					CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK_PERFORM_SEQUENCE(uLocal_72, uLocal_74);
					CLEAR_SEQUENCE_TASK(&uLocal_74);
					SET_PED_KEEP_TASK(uLocal_72, 1);
				}
			}
			else if (iLocal_56 == 1)
			{
				if (!IS_PED_INJURED(PLAYER_PED_ID()))
				{
					OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					TASK_SMART_FLEE_COORD(0, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
					CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK_PERFORM_SEQUENCE(uLocal_72, uLocal_74);
					CLEAR_SEQUENCE_TASK(&uLocal_74);
					SET_PED_KEEP_TASK(uLocal_72, 1);
				}
				else if (IS_VEHICLE_DRIVEABLE(uLocal_75, 0))
				{
					OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK_ENTER_VEHICLE(0, uLocal_75, -1, -1, 2f, 9, 0);
					TASK_SMART_FLEE_COORD(0, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
					CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK_PERFORM_SEQUENCE(uLocal_72, uLocal_74);
					CLEAR_SEQUENCE_TASK(&uLocal_74);
					SET_PED_KEEP_TASK(uLocal_72, 1);
				}
				else
				{
					OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					TASK_SMART_FLEE_COORD(0, GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
					CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK_PERFORM_SEQUENCE(uLocal_72, uLocal_74);
					CLEAR_SEQUENCE_TASK(&uLocal_74);
					SET_PED_KEEP_TASK(uLocal_72, 1);
				}
			}
		}
		ENABLE_DISPATCH_SERVICE(3, 1);
		ENABLE_DISPATCH_SERVICE(5, 1);
		ENABLE_DISPATCH_SERVICE(11, 1);
		REMOVE_SCENARIO_BLOCKING_AREAS();
	}
	func_171(-1);
	TERMINATE_THIS_THREAD();
}

void func_171(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_43();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_124())
	{
		func_175(iParam0);
		SET_MISSION_NAME(0, 0);
		Global_106556 = GET_GAME_TIMER();
		func_174(30000);
		StringCopy(&cVar0, func_173(Global_106554, 1), 64);
		if (func_42(Global_106554) > 0)
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
	func_172(&Global_25824);
	Global_106555 = 0;
	func_127(-1);
}

void func_172(var uParam0)
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

char* func_173(int iParam0, bool bParam1)
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

void func_174(int iParam0)
{
	Global_36976 = (GET_GAME_TIMER() + iParam0);
}

void func_175(int iParam0)
{
	func_176(iParam0, 0, func_181(iParam0));
}

void func_176(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_145();
	func_179(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_178(iParam0, &uVar0);
	Var1 = { func_177(&uVar0) };
}

struct<16> func_177(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_139(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_138(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_137(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_140(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_143(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_141(*uParam0), 64);
	return Var0;
}

void func_178(int iParam0, var uParam1)
{
	Global_106565.f_24989.f_43[iParam0] = *uParam1;
}

void func_179(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_141(*uParam0);
	iVar1 = func_143(*uParam0);
	iVar2 = func_140(*uParam0);
	iVar3 = func_139(*uParam0);
	iVar4 = func_138(*uParam0);
	iVar5 = func_137(*uParam0);
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
	iVar6 = func_136(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_136(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_180(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_180(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_151(uParam0, iParam1);
	func_150(uParam0, iParam2);
	func_149(uParam0, iParam3);
	func_147(uParam0, iParam5);
	func_148(uParam0, iParam4);
	func_146(uParam0, iParam6);
}

int func_181(int iParam0)
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

void func_182()
{
	Global_14732 = 0;
	func_183();
}

void func_183()
{
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		RESTART_SCRIPTED_CONVERSATION();
		Global_16877 = 0;
		STOP_SCRIPTED_CONVERSATION(1);
		Global_15866 = 6;
		return;
	}
}

void func_184(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		func_104(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_185()
{
	float fVar0;
	
	if (IS_PLAYER_PLAYING(PLAYER_ID()))
	{
		fVar0 = GET_DISTANCE_BETWEEN_COORDS(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), vLocal_63, 1);
		iLocal_62 = 1;
		if (GET_DISTANCE_BETWEEN_COORDS(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), vLocal_66, 1) < fVar0)
		{
			fVar0 = GET_DISTANCE_BETWEEN_COORDS(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), vLocal_66, 1);
			iLocal_62 = 2;
		}
		if (iLocal_62 == 1)
		{
			iLocal_69 = 1;
			iLocal_56 = 0;
			return vLocal_63;
		}
		if (iLocal_62 == 2)
		{
			iLocal_69 = 2;
			iLocal_56 = 1;
			return vLocal_66;
		}
	}
	return 0f, 0f, 0f;
}

