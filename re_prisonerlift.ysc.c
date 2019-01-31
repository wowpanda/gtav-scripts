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
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	vector3 vLocal_57 = { 0f, 0f, 0f };
	int iLocal_58 = 0;
	vector3 vLocal_59 = { 0f, 0f, 0f };
	vector3 vLocal_60 = { 0f, 0f, 0f };
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	vector3 vLocal_68 = { 0f, 0f, 0f };
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72[2] = { 0, 0 };
	int iLocal_73 = 0;
	vector3 vLocal_74 = { 0f, 0f, 0f };
	float fLocal_75 = 0f;
	int iLocal_76 = 0;
	vector3 vLocal_77 = { 0f, 0f, 0f };
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	float fLocal_93 = 0f;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	vector3 vLocal_98 = { 0f, 0f, 0f };
	vector3 vLocal_99 = { 0f, 0f, 0f };
	vector3 vLocal_100 = { 0f, 0f, 0f };
	vector3 vLocal_101 = { 0f, 0f, 0f };
	vector3 vLocal_102 = { 0f, 0f, 0f };
	vector3 vLocal_103 = { 0f, 0f, 0f };
	vector3 vLocal_104 = { 0f, 0f, 0f };
	vector3 vLocal_105 = { 0f, 0f, 0f };
	vector3 vLocal_106 = { 0f, 0f, 0f };
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 16;
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
	struct<2> Local_279 = { 0, 5 } ;
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
	var uLocal_295 = 5;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
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
	iLocal_18 = 4294967295;
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
	iLocal_47 = HUD::_0x4A9923385BDB9DAD();
	iLocal_48 = HUD::_GET_BLIP_INFO_ID_ITERATOR();
	vLocal_59 = { 1492.31f, 2136.53f, 89.15f };
	vLocal_60 = { 1408.24f, 2522.803f, 41.0419f };
	vLocal_98 = { 370.2576f, -1597.488f, 35.94954f };
	vLocal_99 = { 824.992f, -1289.267f, 27.24564f };
	vLocal_100 = { 450.1889f, -981.6754f, 42.69174f };
	vLocal_101 = { -1088.37f, -842.2911f, 30.27554f };
	vLocal_102 = { 608.9076f, 0.806411f, 100.2497f };
	vLocal_103 = { -562.0159f, -130.8113f, 37.4369f };
	vLocal_104 = { 1855.237f, 3683.236f, 33.29165f };
	vLocal_105 = { -443.5063f, 6016.231f, 30.71787f };
	vLocal_106 = { 1693.518f, 2579.21f, 44.95713f };
	vLocal_57 = { ScriptParam_279.f_1[0 /*3*/] };
	func_185();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_64))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_64))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_64);
			}
		}
		func_170();
	}
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
		}
	}
	if (func_128(vLocal_57, 22, iLocal_61, 0, 0))
	{
		func_125(22);
	}
	else
	{
		HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_80)
		{
			if (!func_124())
			{
				if (func_123())
				{
					func_170();
				}
			}
			RECORDING::_0x208784099002BC30("RE_PL", 0);
			switch (iLocal_51)
			{
				case 0:
					if (func_111())
					{
						func_170();
					}
					if (!iLocal_56)
					{
						func_110();
					}
					else
					{
						func_109();
					}
					if (bLocal_55)
					{
						iLocal_107 = 1;
						iLocal_51 = 1;
					}
					break;
				
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
					{
						switch (iLocal_52)
						{
							case 0:
								switch (iLocal_53)
								{
									case 0:
										func_102();
										break;
									
									case 1:
										if (iLocal_54 == 0)
										{
											if (!PED::IS_PED_INJURED(iLocal_64))
											{
												if ((ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_64, 100f, 100f, 100f, 0, 1, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_64)) || ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_64, 20f, 20f, 8f, 0, 1, 0))
												{
													func_101();
													if (!func_124())
													{
														func_91(1);
														func_90(1);
													}
												}
												if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_64, 20f, 20f, 8f, 0, 1, 0))
												{
													if (HUD::DOES_BLIP_EXIST(iLocal_89))
													{
														HUD::_0x75A16C3DA34F1245(iLocal_89, true);
													}
													func_89();
													if (!func_88())
													{
														if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_64, "random@prisoner_lift", "arms_waving", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_64, "random@prisoner_lift", "loop2_idlelook2", 3))
														{
															NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_64);
														}
														func_87(&uLocal_91);
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
										else if (iLocal_54 == 1)
										{
											if (!PED::IS_PED_INJURED(iLocal_64))
											{
												if ((ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_64, 105f, 105f, 105f, 0, 1, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_64)) || ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_64, 20f, 20f, 8f, 0, 1, 0))
												{
													func_101();
													if (!func_124())
													{
														func_91(1);
														func_90(1);
													}
												}
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_64, 0))
												{
													if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_64, 20f, 20f, 8f, 0, 1, 0))
													{
														if (HUD::DOES_BLIP_EXIST(iLocal_89))
														{
															HUD::_0x75A16C3DA34F1245(iLocal_89, true);
														}
														func_89();
													}
												}
												if (bLocal_83)
												{
													if (SYSTEM::TIMERA() > 2000 && SYSTEM::TIMERA() < 2100)
													{
														BRAIN::CLEAR_PED_SECONDARY_TASK(iLocal_64);
													}
													if (SYSTEM::TIMERA() > 3000)
													{
														if (!iLocal_86)
														{
															if (!func_83())
															{
																func_72(&uLocal_114, "PRI2AU", "PRI2_ASK", 4, 0, 0, 0);
																iLocal_86 = 1;
															}
														}
													}
												}
												if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
												{
													if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
													{
														if (!func_71(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
														{
															if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_64, 40f, 40f, 20f, 0, 1, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_64, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 17))
															{
																NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_64);
																if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
																{
																	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true, 0);
																}
																BRAIN::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_64, PLAYER::GET_PLAYERS_LAST_VEHICLE(), AUDIO::_0x0626A247D2405330(), 8, 22f, 786469, 1f, 1f, 1);
																PED::SET_PED_KEEP_TASK(iLocal_64, true);
																iLocal_53 = 13;
															}
															else if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_64, 20f, 20f, 8f, 0, 1, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_64, AUDIO::_0x0626A247D2405330(), 17))
															{
																func_72(&uLocal_114, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
																func_86();
															}
														}
														else
														{
															func_72(&uLocal_114, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
															func_86();
														}
													}
													else
													{
														func_72(&uLocal_114, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
														func_86();
													}
												}
												if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
												{
													if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 0))
													{
														if (((PED::IS_PED_IN_ANY_POLICE_VEHICLE(AUDIO::_0x0626A247D2405330()) || PED::IS_PED_IN_MODEL(AUDIO::_0x0626A247D2405330(), joaat("RHINO"))) || PED::IS_PED_IN_ANY_HELI(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_PLANE(AUDIO::_0x0626A247D2405330()))
														{
															func_72(&uLocal_114, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
															func_86();
														}
													}
												}
											}
											if (func_70())
											{
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_64, 0))
												{
													if (!PED::IS_PED_IN_MODEL(AUDIO::_0x0626A247D2405330(), joaat("BUS")))
													{
														if (func_69(AUDIO::_0x0626A247D2405330(), iLocal_64) < 2.5f)
														{
															if (ENTITY::GET_ENTITY_SPEED(iLocal_67) < 1f)
															{
																func_68();
															}
														}
													}
													else if (func_69(AUDIO::_0x0626A247D2405330(), iLocal_64) < 10f)
													{
														if (ENTITY::GET_ENTITY_SPEED(iLocal_67) < 1f)
														{
															func_68();
														}
													}
												}
											}
										}
										if (func_64())
										{
											if (!PED::IS_PED_INJURED(iLocal_64))
											{
												NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_64);
												if (PED::IS_PED_IN_GROUP(iLocal_64))
												{
													PED::REMOVE_PED_FROM_GROUP(iLocal_64);
												}
											}
											func_86();
										}
										if (!PED::IS_PED_INJURED(iLocal_64))
										{
											PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_64, 0);
										}
										break;
									
									case 2:
										func_63();
										func_84();
										if (!PED::IS_PED_INJURED(iLocal_64))
										{
											PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_64, 0);
										}
										break;
									
									case 3:
										if (func_62())
										{
											iLocal_53 = 9;
										}
										func_54();
										func_84();
										if (!PED::IS_PED_INJURED(iLocal_64))
										{
											PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_64, 0);
										}
										break;
									
									case 5:
										func_53();
										break;
									
									case 6:
										if (!iLocal_88 && !PED::IS_PED_INJURED(iLocal_64))
										{
											BRAIN::OPEN_SEQUENCE_TASK(&iLocal_66);
											BRAIN::TASK_LOOK_AT_ENTITY(0, AUDIO::_0x0626A247D2405330(), 5000, 2048, 2);
											BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, AUDIO::_0x0626A247D2405330(), 0);
											BRAIN::TASK_PAUSE(0, 1500);
											BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_77, 1f, 4294967295, 0.25f, 0, 333.9002f);
											BRAIN::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
											CUTSCENE::_0x8D9DF6ECA8768583(iLocal_66);
											BRAIN::TASK_PERFORM_SEQUENCE(iLocal_64, iLocal_66);
											BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_66);
											PED::SET_PED_KEEP_TASK(iLocal_64, true);
											func_72(&uLocal_114, "PRI1AU", "PRI1_THK", 4, 0, 0, 0);
											PED::REMOVE_PED_FROM_GROUP(iLocal_64);
											iLocal_88 = 1;
										}
										if (func_64())
										{
											if (!PED::IS_PED_INJURED(iLocal_64))
											{
												NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_64);
												if (PED::IS_PED_IN_GROUP(iLocal_64))
												{
													PED::REMOVE_PED_FROM_GROUP(iLocal_64);
												}
												func_51();
												SYSTEM::WAIT(0);
												func_72(&uLocal_114, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
												BRAIN::TASK_SMART_FLEE_COORD(iLocal_64, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 300f, 4294967295, 0, 0);
												PED::SET_PED_KEEP_TASK(iLocal_64, true);
												SYSTEM::WAIT(0);
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
										if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
										{
											if (!HUD::DOES_BLIP_EXIST(iLocal_62))
											{
												iLocal_62 = func_6(vLocal_74, 1);
											}
											if (func_72(&uLocal_114, "PRI1AU", "PRI1_LOS", 4, 0, 0, 0))
											{
												iLocal_53 = 3;
											}
										}
										if (bLocal_84)
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_73))
											{
												if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0) || func_5(AUDIO::_0x0626A247D2405330(), iLocal_73, 1) > 200f)
												{
													ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_72[0]));
													ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_72[1]));
													ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_73);
												}
											}
										}
										if (func_64())
										{
											if (!PED::IS_PED_INJURED(iLocal_64))
											{
												NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_64);
												if (PED::IS_PED_IN_GROUP(iLocal_64))
												{
													PED::REMOVE_PED_FROM_GROUP(iLocal_64);
												}
												BRAIN::TASK_SMART_FLEE_COORD(iLocal_64, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 300f, 4294967295, 0, 0);
												PED::SET_PED_KEEP_TASK(iLocal_64, true);
												func_51();
												SYSTEM::WAIT(0);
												func_72(&uLocal_114, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
											}
											func_86();
										}
										break;
									
									case 11:
										GRAPHICS::_0x54E22EA2C1956A8D(0.1f);
										if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_67, 0))
										{
											if (!func_71(iLocal_67))
											{
												if (!iLocal_85)
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_64, 0))
													{
														if (!PED::IS_PED_INJURED(iLocal_64))
														{
															if (!iLocal_87)
															{
																func_72(&uLocal_114, "PRI2AU", "PRI2_STEAL", 4, 0, 0, 0);
																iLocal_87 = 1;
															}
															BRAIN::TASK_ENTER_VEHICLE(iLocal_64, iLocal_67, 4294967295, 4294967295, 2f, 1, 0);
															PED::SET_PED_KEEP_TASK(iLocal_64, true);
															iLocal_53 = 12;
														}
													}
													if (!PED::IS_PED_INJURED(iLocal_64))
													{
														if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_64, AUDIO::_0x0626A247D2405330(), 1) || (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(CAM::_0xDC9DA9E8789F5246(), iLocal_64) && WEAPON::IS_PED_ARMED(AUDIO::_0x0626A247D2405330(), 6))) || (PLAYER::IS_PLAYER_TARGETTING_ENTITY(CAM::_0xDC9DA9E8789F5246(), iLocal_64) && WEAPON::IS_PED_ARMED(AUDIO::_0x0626A247D2405330(), 6))) || (ENTITY::GET_ENTITY_SPEED(iLocal_67) > 2.5f && PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_67, 0)))
														{
															BRAIN::TASK_COMBAT_PED(iLocal_64, AUDIO::_0x0626A247D2405330(), 0, 16);
															func_51();
															iLocal_85 = 1;
														}
													}
												}
											}
											else
											{
												if (HUD::DOES_BLIP_EXIST(iLocal_89))
												{
													HUD::REMOVE_BLIP(&iLocal_89);
												}
												if (!PED::IS_PED_INJURED(iLocal_64))
												{
													BRAIN::OPEN_SEQUENCE_TASK(&iLocal_66);
													BRAIN::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, 4294967295, 0, 0);
													BRAIN::TASK_SMART_FLEE_COORD(0, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 300f, 4294967295, 0, 0);
													CUTSCENE::_0x8D9DF6ECA8768583(iLocal_66);
													BRAIN::TASK_PERFORM_SEQUENCE(iLocal_64, iLocal_66);
													BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_66);
													PED::SET_PED_KEEP_TASK(iLocal_64, true);
													iLocal_53 = 13;
												}
											}
										}
										if (!PED::IS_PED_INJURED(iLocal_64))
										{
											if (!ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_64, 150f, 150f, 150f, 0, 1, 0))
											{
												BRAIN::OPEN_SEQUENCE_TASK(&iLocal_66);
												BRAIN::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, 4294967295, 0, 0);
												BRAIN::TASK_SMART_FLEE_COORD(0, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 300f, 4294967295, 0, 0);
												CUTSCENE::_0x8D9DF6ECA8768583(iLocal_66);
												BRAIN::TASK_PERFORM_SEQUENCE(iLocal_64, iLocal_66);
												BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_66);
												PED::SET_PED_KEEP_TASK(iLocal_64, true);
												iLocal_53 = 13;
											}
										}
										else
										{
											iLocal_53 = 13;
										}
										break;
									
									case 12:
										GRAPHICS::_0x54E22EA2C1956A8D(0.1f);
										if (!PED::IS_PED_INJURED(iLocal_64))
										{
											if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_64, AUDIO::_0x0626A247D2405330(), 1))
											{
												if (HUD::DOES_BLIP_EXIST(iLocal_89))
												{
													HUD::SET_BLIP_AS_FRIENDLY(iLocal_89, false);
													ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_64);
												}
											}
											if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_67, 0))
											{
												if (!func_71(iLocal_67))
												{
													if (PED::IS_PED_IN_VEHICLE(iLocal_64, iLocal_67, 0))
													{
														if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_67))
														{
															ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_67, true, 0);
														}
														BRAIN::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_64, iLocal_67, AUDIO::_0x0626A247D2405330(), 8, 22f, 786469, 1f, 1f, 1);
														PED::SET_PED_KEEP_TASK(iLocal_64, true);
														iLocal_53 = 13;
													}
													else if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_67, 0))
													{
														if (bLocal_94)
														{
															BRAIN::TASK_COMBAT_PED(iLocal_64, AUDIO::_0x0626A247D2405330(), 0, 16);
															func_51();
															iLocal_85 = 1;
															iLocal_53 = 11;
														}
														else
														{
															func_68();
														}
													}
													else if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_64, 2500551826) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_64, 2500551826) != 0)
													{
														if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_64, 780511057) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_64, 780511057) != 0)
														{
														}
														else
														{
															iLocal_53 = 11;
														}
													}
												}
												else
												{
													if (HUD::DOES_BLIP_EXIST(iLocal_89))
													{
														HUD::REMOVE_BLIP(&iLocal_89);
													}
													BRAIN::OPEN_SEQUENCE_TASK(&iLocal_66);
													BRAIN::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, 4294967295, 0, 0);
													BRAIN::TASK_SMART_FLEE_COORD(0, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 300f, 4294967295, 0, 0);
													CUTSCENE::_0x8D9DF6ECA8768583(iLocal_66);
													BRAIN::TASK_PERFORM_SEQUENCE(iLocal_64, iLocal_66);
													BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_66);
													PED::SET_PED_KEEP_TASK(iLocal_64, true);
													iLocal_53 = 13;
												}
											}
											else
											{
												BRAIN::OPEN_SEQUENCE_TASK(&iLocal_66);
												BRAIN::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, 4294967295, 0, 0);
												BRAIN::TASK_SMART_FLEE_COORD(0, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 300f, 4294967295, 0, 0);
												CUTSCENE::_0x8D9DF6ECA8768583(iLocal_66);
												BRAIN::TASK_PERFORM_SEQUENCE(iLocal_64, iLocal_66);
												BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_66);
												PED::SET_PED_KEEP_TASK(iLocal_64, true);
												iLocal_53 = 13;
											}
											if (!iLocal_85)
											{
												if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_64, AUDIO::_0x0626A247D2405330(), 1) || (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(CAM::_0xDC9DA9E8789F5246(), iLocal_64) && WEAPON::IS_PED_ARMED(AUDIO::_0x0626A247D2405330(), 6))) || (PLAYER::IS_PLAYER_TARGETTING_ENTITY(CAM::_0xDC9DA9E8789F5246(), iLocal_64) && WEAPON::IS_PED_ARMED(AUDIO::_0x0626A247D2405330(), 6))) || (ENTITY::GET_ENTITY_SPEED(iLocal_67) > 2.5f && PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_67, 0)))
												{
													BRAIN::TASK_COMBAT_PED(iLocal_64, AUDIO::_0x0626A247D2405330(), 0, 16);
													func_51();
													iLocal_85 = 1;
												}
											}
										}
										else
										{
											iLocal_53 = 13;
										}
										break;
									
									case 13:
										iLocal_80 = 1;
										if (!PED::IS_PED_INJURED(iLocal_64))
										{
											if (PED::IS_PED_BEING_JACKED(iLocal_64))
											{
												func_51();
											}
											if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_64, 0))
											{
												if (HUD::DOES_BLIP_EXIST(iLocal_89))
												{
													HUD::SET_BLIP_AS_FRIENDLY(iLocal_89, false);
												}
												if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(iLocal_64, 0), joaat("TOWTRUCK")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(iLocal_64, 0), joaat("TOWTRUCK2")))
												{
													iLocal_71 = VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(iLocal_64, 0));
													if (ENTITY::DOES_ENTITY_EXIST(iLocal_71))
													{
														iLocal_70 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iLocal_71);
														if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(iLocal_64, 0), 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_70, 0))
														{
															if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(iLocal_64, 0), iLocal_70))
															{
																VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(iLocal_64, 0), iLocal_70);
															}
														}
													}
												}
												if (PED::IS_PED_ON_SPECIFIC_VEHICLE(AUDIO::_0x0626A247D2405330(), PED::GET_VEHICLE_PED_IS_IN(iLocal_64, 0)))
												{
													BRAIN::OPEN_SEQUENCE_TASK(&iLocal_66);
													BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
													BRAIN::TASK_COMBAT_PED(0, AUDIO::_0x0626A247D2405330(), 0, 16);
													CUTSCENE::_0x8D9DF6ECA8768583(iLocal_66);
													BRAIN::TASK_PERFORM_SEQUENCE(iLocal_64, iLocal_66);
													BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_66);
													PED::SET_PED_KEEP_TASK(iLocal_64, true);
												}
												if (!iLocal_97)
												{
													if ((func_1(PED::GET_VEHICLE_PED_IS_IN(iLocal_64, 0)) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(PED::GET_VEHICLE_PED_IS_IN(iLocal_64, 0), 0)) || func_71(PED::GET_VEHICLE_PED_IS_IN(iLocal_64, 0)))
													{
														if (HUD::DOES_BLIP_EXIST(iLocal_89))
														{
															HUD::SET_BLIP_AS_FRIENDLY(iLocal_89, false);
														}
														BRAIN::OPEN_SEQUENCE_TASK(&iLocal_66);
														BRAIN::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, 4294967295, 0, 0);
														BRAIN::TASK_SMART_FLEE_COORD(0, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 300f, 4294967295, 0, 0);
														CUTSCENE::_0x8D9DF6ECA8768583(iLocal_66);
														BRAIN::TASK_PERFORM_SEQUENCE(iLocal_64, iLocal_66);
														BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_66);
														PED::SET_PED_KEEP_TASK(iLocal_64, true);
														iLocal_97 = 1;
													}
												}
												if (!ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_64, 245f, 245f, 245f, 0, 1, 0))
												{
													func_86();
												}
											}
											else if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_64, 242628503) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_64, 242628503) != 0)
											{
												iLocal_53 = 11;
											}
											else if (!ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_64, 200f, 200f, 200f, 0, 1, 0))
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
								switch (iLocal_79)
								{
									case 1:
										if (!PED::IS_PED_INJURED(iLocal_64))
										{
											NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_64);
											if (PED::IS_PED_IN_GROUP(iLocal_64))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_64);
											}
											BRAIN::TASK_SMART_FLEE_COORD(iLocal_64, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 300f, 4294967295, 0, 0);
											PED::SET_PED_KEEP_TASK(iLocal_64, true);
											SYSTEM::WAIT(0);
											func_86();
										}
										break;
									
									case 2:
										if (!PED::IS_PED_INJURED(iLocal_64))
										{
											NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_64);
											if (PED::IS_PED_IN_GROUP(iLocal_64))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_64);
											}
											BRAIN::TASK_SMART_FLEE_COORD(iLocal_64, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 300f, 4294967295, 0, 0);
											PED::SET_PED_KEEP_TASK(iLocal_64, true);
											SYSTEM::WAIT(0);
											func_86();
										}
										break;
									
									case 3:
										if (!PED::IS_PED_INJURED(iLocal_64))
										{
											NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_64);
											if (PED::IS_PED_IN_GROUP(iLocal_64))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_64);
											}
											BRAIN::TASK_SMART_FLEE_COORD(iLocal_64, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 300f, 4294967295, 0, 0);
											PED::SET_PED_KEEP_TASK(iLocal_64, true);
											SYSTEM::WAIT(0);
											func_86();
										}
										break;
									
									case 4:
										if (!PED::IS_PED_INJURED(iLocal_64))
										{
											NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_64);
											if (PED::IS_PED_IN_GROUP(iLocal_64))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_64);
											}
											BRAIN::TASK_SMART_FLEE_COORD(iLocal_64, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 300f, 4294967295, 0, 0);
											PED::SET_PED_KEEP_TASK(iLocal_64, true);
											SYSTEM::WAIT(0);
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

int func_1(int iParam0)//Position - 0x10DD
{
	int iVar0;
	int iVar1;
	
	if ((func_4(AUDIO::_0x0626A247D2405330()) && PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0)) && func_2(iParam0))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (func_2(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("TOWTRUCK") || iVar1 == joaat("TOWTRUCK2"))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_2(int iParam0)//Position - 0x1149
{
	if (func_3(iParam0))
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(int iParam0)//Position - 0x1173
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_4(int iParam0)//Position - 0x1194
{
	if (func_3(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

float func_5(int iParam0, int iParam1, bool bParam2)//Position - 0x11B4
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar1 = { unk_0x8000C77B5F336760(iParam1, true) };
	}
	else
	{
		vVar1 = { unk_0x8000C77B5F336760(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, bParam2);
}

int func_6(vector3 vParam0, bool bParam1)//Position - 0x1212
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_7(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

float func_7(bool bParam0, float fParam1, float fParam2)//Position - 0x123E
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_8()//Position - 0x1255
{
	if (!PED::IS_PED_INJURED(iLocal_64))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (!func_88())
			{
				if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_64, 1227113341) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_64, 1227113341) != 0)
				{
					BRAIN::TASK_GO_TO_ENTITY(iLocal_64, AUDIO::_0x0626A247D2405330(), 4294967295, 6f, 2f, 1073741824, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_64, 0))
				{
					BRAIN::TASK_LEAVE_ANY_VEHICLE(iLocal_64, 0, 0);
				}
				if (!iLocal_95)
				{
					if (!func_83())
					{
						if (func_9())
						{
							func_72(&uLocal_114, "PRI1AU", "PRI1_UVH2", 4, 0, 0, 0);
						}
						else
						{
							func_72(&uLocal_114, "PRI1AU", "PRI1_UVH", 4, 0, 0, 0);
						}
						iLocal_95 = 1;
					}
				}
			}
			else
			{
				iLocal_95 = 0;
				if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_64, 1227113341) == 1 && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_64, 1227113341) == 0)
				{
					NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_64);
				}
			}
		}
	}
}

int func_9()//Position - 0x1331
{
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330()), 1))
		{
			if ((VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 1))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 1)))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_10()//Position - 0x139C
{
	if (!PED::IS_PED_INJURED(iLocal_64))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_64, 8f, 8f, 8f, 0, 1, 0))
		{
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_64, PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 0))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_89))
						{
							HUD::REMOVE_BLIP(&iLocal_89);
						}
						if (iLocal_53 != 10)
						{
							if (!HUD::DOES_BLIP_EXIST(iLocal_62))
							{
								iLocal_62 = func_6(vLocal_74, 1);
							}
						}
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_89))
					{
						HUD::REMOVE_BLIP(&iLocal_89);
					}
					if (iLocal_53 != 10)
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_62))
						{
							iLocal_62 = func_6(vLocal_74, 1);
						}
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_62))
			{
				HUD::REMOVE_BLIP(&iLocal_62);
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_89))
			{
				iLocal_89 = func_11(iLocal_64, 0, 145);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_62))
			{
				HUD::REMOVE_BLIP(&iLocal_62);
			}
		}
	}
}

int func_11(int iParam0, bool bParam1, int iParam2)//Position - 0x148B
{
	int iVar0;
	
	iVar0 = func_12(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_19E56.f_6D76[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_19E56.f_6D76[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)//Position - 0x14DD
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_7(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_7(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_7(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_13()//Position - 0x1581
{
	switch (iLocal_90)
	{
		case 0:
			if (func_14())
			{
				if (PED::IS_PED_IN_GROUP(iLocal_64))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_64);
				}
				func_51();
				SYSTEM::WAIT(0);
				func_72(&uLocal_114, "PRI1AU", "PRI1_STA", 4, 0, 0, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_90++;
			}
			break;
		
		case 1:
			if (func_14())
			{
				if (SYSTEM::TIMERA() > 500)
				{
					if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_67, 0))
					{
						VEHICLE::SET_VEHICLE_STEER_BIAS(iLocal_67, -1f);
						if (HUD::DOES_BLIP_EXIST(iLocal_62))
						{
							HUD::REMOVE_BLIP(&iLocal_62);
						}
						iLocal_90++;
					}
				}
			}
			break;
		
		case 2:
			if (func_14())
			{
				if (SYSTEM::TIMERA() > 2000)
				{
					if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_67, 0))
					{
						PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
						BRAIN::TASK_VEHICLE_TEMP_ACTION(AUDIO::_0x0626A247D2405330(), iLocal_67, 24, 2000);
						iLocal_90++;
					}
				}
			}
			break;
		
		case 3:
			if (func_14())
			{
				if (SYSTEM::TIMERA() > 4000)
				{
					PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
					if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_67, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_64))
						{
							PED::REMOVE_PED_FROM_GROUP(iLocal_64);
							VEHICLE::SET_VEHICLE_STEER_BIAS(iLocal_67, 0f);
							BRAIN::TASK_LEAVE_VEHICLE(iLocal_64, iLocal_67, 320);
							if (!HUD::DOES_BLIP_EXIST(iLocal_89))
							{
								iLocal_89 = func_11(iLocal_64, 1, 145);
							}
							iLocal_90++;
						}
					}
				}
			}
			break;
		
		case 4:
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_67, 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_64) && !PED::IS_PED_IN_VEHICLE(iLocal_64, iLocal_67, 0))
				{
					BRAIN::TASK_SMART_FLEE_COORD(iLocal_64, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 300f, 4294967295, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_64, true);
					func_51();
					SYSTEM::WAIT(0);
					func_72(&uLocal_114, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
					iLocal_90++;
				}
			}
			break;
		
		case 5:
			SYSTEM::WAIT(0);
			func_86();
			break;
	}
}

int func_14()//Position - 0x173E
{
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iLocal_67 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_67, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_64))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_64, iLocal_67))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_15()//Position - 0x1781
{
	if ((!iLocal_88 && !PED::IS_PED_INJURED(iLocal_64)) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_67, 0))
	{
		PED::REMOVE_PED_FROM_GROUP(iLocal_64);
		BRAIN::OPEN_SEQUENCE_TASK(&iLocal_66);
		BRAIN::TASK_LOOK_AT_ENTITY(0, AUDIO::_0x0626A247D2405330(), 5000, 2048, 2);
		BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, AUDIO::_0x0626A247D2405330(), 0);
		BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_77, 1f, 4294967295, 0.25f, 0, 333.9002f);
		BRAIN::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
		CUTSCENE::_0x8D9DF6ECA8768583(iLocal_66);
		BRAIN::TASK_PERFORM_SEQUENCE(iLocal_64, iLocal_66);
		BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_66);
		PED::SET_PED_KEEP_TASK(iLocal_64, true);
		PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
		iLocal_88 = 1;
	}
	if (func_64())
	{
		if (!PED::IS_PED_INJURED(iLocal_64))
		{
			NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_64);
			if (PED::IS_PED_IN_GROUP(iLocal_64))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_64);
			}
			BRAIN::TASK_SMART_FLEE_COORD(iLocal_64, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 300f, 4294967295, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_64, true);
			func_51();
			SYSTEM::WAIT(0);
			func_72(&uLocal_114, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
		}
		func_86();
	}
	if (!func_83())
	{
		func_16();
	}
}

void func_16()//Position - 0x188A
{
	if (!PED::IS_PED_INJURED(iLocal_64))
	{
		ENTITY::SET_ENTITY_HEALTH(iLocal_64, false);
	}
	while (!func_50())
	{
		SYSTEM::WAIT(0);
	}
	if (iLocal_54 == 0)
	{
		func_45(func_49(), 4, 3);
	}
	func_20(22, iLocal_61);
	func_17();
	func_170();
}

void func_17()//Position - 0x18D3
{
	func_18();
}

int func_18()//Position - 0x18E0
{
	if (func_19(0))
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

bool func_19(bool bParam0)//Position - 0x192B
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

void func_20(int iParam0, int iParam1)//Position - 0x1956
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_43();
	}
	if (iParam0 == 4294967295)
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
			Global_19E56.f_6187.f_2 = 3;
		}
		if (func_28(iParam0, iParam1) != 322)
		{
			func_22(func_28(iParam0, iParam1), vLocal_50.x, vLocal_50.y);
		}
		Global_19E4A = iParam1;
		if (Global_19E48 == 0)
		{
			if (((Global_19E4B == 1 || Global_19E4B == 5) || Global_19E4B == 11) || Global_19E4B == 25)
			{
				func_21(2);
			}
			else if ((Global_19E4B == 26 || Global_19E4B == 8) || Global_19E4B == 17)
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

void func_21(int iParam0)//Position - 0x1A59
{
	Global_19E48 = iParam0;
}

void func_22(int iParam0, var uParam1, var uParam2)//Position - 0x1A67
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
		func_26((891 + iParam0), 1, 4294967295, 1);
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
		func_23();
	}
}

void func_23()//Position - 0x1B4F
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
		func_25(13, SYSTEM::FLOOR(Global_19E56.f_27B6.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_11625)
		{
			if (func_24() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_19D4C = 0;
				}
				if (!Global_DB75)
				{
					func_18();
				}
			}
		}
	}
}

int func_24()//Position - 0x2010
{
	return Global_6373;
}

int func_25(int iParam0, int iParam1)//Position - 0x201B
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

int func_26(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x206C
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
		iParam2 = func_27();
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

int func_27()//Position - 0x25CE
{
	return Global_1407E0;
}

int func_28(int iParam0, int iParam1)//Position - 0x25DA
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

int func_29(int iParam0)//Position - 0x294E
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

void func_30(int iParam0)//Position - 0x297D
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

void func_31(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x29BF
{
	func_32(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_32(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x29E1
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
		func_33();
	}
}

void func_33()//Position - 0x2BB5
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

int func_34()//Position - 0x2CD5
{
	func_35();
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

void func_35()//Position - 0x2D1B
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_39(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_38(AUDIO::_0x0626A247D2405330());
			if (func_37(iVar0) && (!func_36(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_37(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_36(int iParam0)//Position - 0x2E18
{
	return Global_8D15 == iParam0;
}

bool func_37(int iParam0)//Position - 0x2E26
{
	return iParam0 < 3;
}

int func_38(int iParam0)//Position - 0x2E32
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
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

int func_39(int iParam0)//Position - 0x2E6F
{
	if (func_37(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_40(int iParam0)//Position - 0x2E99
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

void func_41(int iParam0, int iParam1)//Position - 0x2EDC
{
	MISC::SET_BIT(&(Global_19E56.f_6187.f_8[iParam0]), iParam1);
}

int func_42(int iParam0)//Position - 0x2EF7
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

int func_43()//Position - 0x2FA8
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = func_44(Var0);
	return uVar1;
}

int func_44(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x2FC5
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

void func_45(int iParam0, int iParam1, int iParam2)//Position - 0x319F
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_19E56.f_933.f_21B.f_8B3[iParam1 /*4*/][iParam0] = (Global_19E56.f_933.f_21B.f_8B3[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 9954;
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
			if (iVar1 != 9954)
			{
				iVar0 = func_48(iVar1, 4294967295, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_46(iVar1, iVar0, 4294967295, 1, 0);
			}
			break;
	}
}

void func_46(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x328F
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_47(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_47(var uParam0)//Position - 0x32BF
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_27();
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

int func_48(int iParam0, int iParam1, int iParam2)//Position - 0x32F3
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_47(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_49()//Position - 0x3325
{
	func_35();
	return Global_19E56.f_933.f_21B.f_10CD;
}

int func_50()//Position - 0x333E
{
	return 1;
}

void func_51()//Position - 0x3347
{
	Global_3960 = 0;
	func_52();
}

void func_52()//Position - 0x3357
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_41C1 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_3DCE = 6;
	}
}

void func_53()//Position - 0x3378
{
	if (HUD::DOES_BLIP_EXIST(iLocal_62))
	{
		HUD::SET_BLIP_ROUTE(iLocal_62, false);
		HUD::REMOVE_BLIP(&iLocal_62);
		if (!PED::IS_PED_INJURED(iLocal_64))
		{
			HUD::CLEAR_PRINTS();
			func_51();
			SYSTEM::WAIT(0);
			if (func_72(&uLocal_114, "PRI1AU", "PRI1_THK", 4, 0, 0, 0))
			{
			}
		}
	}
	if (SYSTEM::TIMERA() > 1000)
	{
		iLocal_53 = 7;
	}
}

void func_54()//Position - 0x33CD
{
	vector3 vVar0[4];
	
	func_10();
	func_61();
	func_60();
	func_8();
	if (!iLocal_81 && !iLocal_82)
	{
		if (func_49() == 0)
		{
			if (func_72(&uLocal_114, "PRI1AU", "PRI1_CHAT1", 4, 0, 0, 0))
			{
				iLocal_81 = 1;
			}
		}
		else if (func_49() == 1)
		{
			if (func_72(&uLocal_114, "PRI1AU", "PRI1_CHAT2", 4, 0, 0, 0))
			{
				iLocal_81 = 1;
			}
		}
	}
	if (iLocal_81 && !iLocal_82)
	{
		if (func_49() == 0)
		{
			if (func_72(&uLocal_114, "PRI1AU", "PRI1_CHAT1b", 4, 0, 0, 0))
			{
				iLocal_82 = 1;
			}
		}
		else if (func_49() == 1)
		{
			if (func_72(&uLocal_114, "PRI1AU", "PRI1_CHAT2b", 4, 0, 0, 0))
			{
				iLocal_82 = 1;
			}
		}
	}
	if (iLocal_81 && iLocal_82)
	{
		if (func_49() == 0)
		{
			if (func_72(&uLocal_114, "PRI1AU", "PRI1_CHAT1c", 4, 0, 0, 0))
			{
				iLocal_81 = 0;
			}
		}
		else if (func_49() == 1)
		{
			if (func_72(&uLocal_114, "PRI1AU", "PRI1_CHAT2c", 4, 0, 0, 0))
			{
				iLocal_81 = 0;
			}
		}
	}
	if (func_64())
	{
		if (!PED::IS_PED_INJURED(iLocal_64))
		{
			NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_64);
			if (PED::IS_PED_IN_GROUP(iLocal_64))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_64);
			}
			BRAIN::TASK_SMART_FLEE_COORD(iLocal_64, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 300f, 4294967295, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_64, true);
			func_51();
			SYSTEM::WAIT(0);
			func_72(&uLocal_114, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
		}
		func_86();
	}
	if (func_59(AUDIO::_0x0626A247D2405330(), vLocal_57, 1) > 200f)
	{
		if (!bLocal_84)
		{
			vVar0[0 /*3*/] = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) - Vector(0f, 9f, 0f) };
			PATHFIND::GET_SAFE_COORD_FOR_PED(vVar0[0 /*3*/], 0, &(vVar0[0 /*3*/]), 0);
			vVar0[1 /*3*/] = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) + Vector(0f, 9f, 0f) };
			PATHFIND::GET_SAFE_COORD_FOR_PED(vVar0[1 /*3*/], 0, &(vVar0[1 /*3*/]), 0);
			vVar0[2 /*3*/] = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) - Vector(0f, 0f, 9f) };
			PATHFIND::GET_SAFE_COORD_FOR_PED(vVar0[2 /*3*/], 0, &(vVar0[2 /*3*/]), 0);
			vVar0[3 /*3*/] = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) + Vector(0f, 0f, 9f) };
			PATHFIND::GET_SAFE_COORD_FOR_PED(vVar0[3 /*3*/], 0, &(vVar0[3 /*3*/]), 0);
			if (!CAM::IS_SPHERE_VISIBLE(vVar0[0 /*3*/], 3f))
			{
				iLocal_73 = VEHICLE::CREATE_VEHICLE(joaat("SHERIFF"), vVar0[0 /*3*/], func_57(vVar0[0 /*3*/], func_58(CAM::_0xDC9DA9E8789F5246())), true, true, false);
				iLocal_72[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_73, 6, joaat("s_m_y_ranger_01"), 4294967295, 1, true);
				iLocal_72[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_73, 6, joaat("s_m_y_ranger_01"), 0, 1, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_72[0], joaat("weapon_pistol"), 4294967295, false, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_72[1], joaat("weapon_pistol"), 4294967295, false, true);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(CAM::_0xDC9DA9E8789F5246(), 1, 0);
				HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
				bLocal_84 = true;
			}
			else if (!CAM::IS_SPHERE_VISIBLE(vVar0[1 /*3*/], 3f))
			{
				iLocal_73 = VEHICLE::CREATE_VEHICLE(joaat("SHERIFF"), vVar0[1 /*3*/], func_57(vVar0[1 /*3*/], func_58(CAM::_0xDC9DA9E8789F5246())), true, true, false);
				iLocal_72[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_73, 6, joaat("s_m_y_ranger_01"), 4294967295, 1, true);
				iLocal_72[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_73, 6, joaat("s_m_y_ranger_01"), 0, 1, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_72[0], joaat("weapon_pistol"), 4294967295, false, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_72[1], joaat("weapon_pistol"), 4294967295, false, true);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(CAM::_0xDC9DA9E8789F5246(), 1, 0);
				HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
				bLocal_84 = true;
			}
			else if (!CAM::IS_SPHERE_VISIBLE(vVar0[2 /*3*/], 3f))
			{
				iLocal_73 = VEHICLE::CREATE_VEHICLE(joaat("SHERIFF"), vVar0[2 /*3*/], func_57(vVar0[2 /*3*/], func_58(CAM::_0xDC9DA9E8789F5246())), true, true, false);
				iLocal_72[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_73, 6, joaat("s_m_y_ranger_01"), 4294967295, 1, true);
				iLocal_72[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_73, 6, joaat("s_m_y_ranger_01"), 0, 1, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_72[0], joaat("weapon_pistol"), 4294967295, false, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_72[1], joaat("weapon_pistol"), 4294967295, false, true);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(CAM::_0xDC9DA9E8789F5246(), 1, 0);
				HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
				bLocal_84 = true;
			}
			else if (!CAM::IS_SPHERE_VISIBLE(vVar0[3 /*3*/], 3f))
			{
				iLocal_73 = VEHICLE::CREATE_VEHICLE(joaat("SHERIFF"), vVar0[3 /*3*/], func_57(vVar0[3 /*3*/], func_58(CAM::_0xDC9DA9E8789F5246())), true, true, false);
				iLocal_72[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_73, 6, joaat("s_m_y_ranger_01"), 4294967295, 1, true);
				iLocal_72[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_73, 6, joaat("s_m_y_ranger_01"), 0, 1, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_72[0], joaat("weapon_pistol"), 4294967295, false, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_72[1], joaat("weapon_pistol"), 4294967295, false, true);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(CAM::_0xDC9DA9E8789F5246(), 1, 0);
				HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
				bLocal_84 = true;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), unk_0x8000C77B5F336760(iLocal_69, false), 10f, 10f, 10f, false, false, 0) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		func_56();
	}
	if (!PED::IS_PED_INJURED(iLocal_64))
	{
		if (((!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_64, 990.7705f, -105.594f, 73.3055f, 954.8849f, -145.3864f, 79.1073f, 8.8125f, 0, true, 0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), 990.7705f, -105.594f, 73.3055f, 954.8849f, -145.3864f, 79.1073f, 8.8125f, 0, true, 0)) || (ENTITY::IS_ENTITY_AT_COORD(iLocal_64, vLocal_74, Global_13, true, true, 0) && func_55(1, 0, 1)))
		{
			SYSTEM::SETTIMERA(0);
			if (func_14())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					VEHICLE::_SET_VEHICLE_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 2, 0);
				}
				HUD::CLEAR_PRINTS();
				iLocal_53 = 5;
			}
			else
			{
				iLocal_53 = 6;
			}
		}
	}
}

int func_55(bool bParam0, bool bParam1, bool bParam2)//Position - 0x3972
{
	int iVar0;
	
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 4294967295, 0) != AUDIO::_0x0626A247D2405330())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	return 1;
}

void func_56()//Position - 0x3A57
{
	vector3 vVar0;
	
	vVar0 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if (func_14())
		{
			func_51();
			SYSTEM::WAIT(0);
			if (func_72(&uLocal_114, "PRI1AU", "PRI1_POL", 4, 0, 0, 0))
			{
				iLocal_53 = 10;
			}
		}
		else if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D((vVar0.x - 50f), (vVar0.y - 50f), (vVar0.z - 50f), (vVar0.x + 50f), (vVar0.y + 50f), (vVar0.z + 50f)))
		{
			if (!PED::IS_PED_INJURED(iLocal_64))
			{
				NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_64);
				if (PED::IS_PED_IN_GROUP(iLocal_64))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_64);
				}
				BRAIN::TASK_SMART_FLEE_COORD(iLocal_64, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 300f, 4294967295, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_64, true);
				SYSTEM::WAIT(0);
			}
			func_86();
		}
	}
	else if (func_14())
	{
		if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D((vVar0.x - 10f), (vVar0.y - 10f), (vVar0.z - 10f), (vVar0.x + 10f), (vVar0.y + 10f), (vVar0.z + 10f)))
		{
			func_51();
			SYSTEM::WAIT(0);
			if (func_72(&uLocal_114, "PRI1AU", "PRI1_POL", 4, 0, 0, 0))
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), 3, 0);
				HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
				PLAYER::SET_WANTED_LEVEL_DIFFICULTY(CAM::_0xDC9DA9E8789F5246(), 0f);
				if (HUD::DOES_BLIP_EXIST(iLocal_62))
				{
					HUD::REMOVE_BLIP(&iLocal_62);
				}
				iLocal_53 = 10;
			}
		}
	}
	else if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D((vVar0.x - 10f), (vVar0.y - 10f), (vVar0.z - 10f), (vVar0.x + 10f), (vVar0.y + 10f), (vVar0.z + 10f)))
	{
		if (!PED::IS_PED_INJURED(iLocal_64))
		{
			NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_64);
			if (PED::IS_PED_IN_GROUP(iLocal_64))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_64);
			}
			BRAIN::TASK_SMART_FLEE_COORD(iLocal_64, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 300f, 4294967295, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_64, true);
			SYSTEM::WAIT(0);
		}
		func_86();
	}
}

float func_57(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x3C45
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

Vector3 func_58(int iParam0)//Position - 0x3C5F
{
	return unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iParam0), false);
}

float func_59(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x3C72
{
	vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, bParam2);
}

void func_60()//Position - 0x3CAC
{
	if (!PED::IS_PED_INJURED(iLocal_64))
	{
		if (PED::IS_PED_ON_FOOT(iLocal_64))
		{
			if (!iLocal_108)
			{
				iLocal_109 = MISC::GET_GAME_TIMER();
				iLocal_108 = 1;
			}
			else
			{
				iLocal_110 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_108 = 0;
		}
	}
	if ((iLocal_110 - iLocal_109) > 120000)
	{
		if (!PED::IS_PED_INJURED(iLocal_64))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_64))
			{
				if (func_72(&uLocal_114, "PRI1AU", "PRI1_WLK", 4, 0, 0, 0))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_64);
					func_86();
				}
			}
		}
	}
}

void func_61()//Position - 0x3D22
{
	if (PED::IS_PED_STOPPED(AUDIO::_0x0626A247D2405330()))
	{
		if (!iLocal_111)
		{
			iLocal_112 = MISC::GET_GAME_TIMER();
			iLocal_111 = 1;
		}
		else
		{
			iLocal_113 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_111 = 0;
	}
	if ((iLocal_113 - iLocal_112) > 60000)
	{
		if (!PED::IS_PED_INJURED(iLocal_64))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_64))
			{
				if (func_72(&uLocal_114, "PRI1AU", "PRI1_SLO", 4, 0, 0, 0))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_64);
					func_86();
				}
			}
		}
	}
}

int func_62()//Position - 0x3D90
{
	if (!PED::IS_PED_INJURED(iLocal_64))
	{
		if (PED::IS_PED_IN_GROUP(iLocal_64))
		{
			if ((((((((ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_98, 50f, 50f, 50f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_99, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_100, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_101, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_102, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_103, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_104, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_105, 50f, 50f, 50f, false, true, 0)) || func_59(AUDIO::_0x0626A247D2405330(), vLocal_106, 1) < 205f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_63()//Position - 0x3EE6
{
	if (!PED::IS_PED_INJURED(iLocal_64) && func_88())
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_64, PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)))
			{
				SYSTEM::SETTIMERA(0);
				if (!PED::IS_PED_IN_GROUP(iLocal_64))
				{
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_64, PLAYER::GET_PLAYER_GROUP(CAM::_0xDC9DA9E8789F5246()));
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_64, 0);
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_64, 1);
				}
				if (iLocal_54 == 0)
				{
					if (!func_83())
					{
						if (func_72(&uLocal_114, "PRI1AU", "PRI1_CH", 4, 0, 0, 0))
						{
							if (!HUD::DOES_BLIP_EXIST(iLocal_62))
							{
								iLocal_62 = func_6(vLocal_74, 1);
							}
							GRAPHICS::_0x35FB78DC42B7BD21(&uLocal_78, 3);
							iLocal_80 = 1;
							iLocal_53 = 3;
						}
					}
				}
				else if (iLocal_54 == 1)
				{
					if (func_49() == 0)
					{
						func_72(&uLocal_114, "PRI2AU", "PRI2_WHTM", 4, 0, 0, 0);
					}
					else if (func_49() == 1)
					{
						func_72(&uLocal_114, "PRI2AU", "PRI2_WHTF", 4, 0, 0, 0);
					}
					else if (func_49() == 2)
					{
						func_72(&uLocal_114, "PRI2AU", "PRI2_WHTT", 4, 0, 0, 0);
					}
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_64, 2, true);
					iLocal_53 = 3;
				}
			}
		}
	}
}

int func_64()//Position - 0x4013
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_64))
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_64, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
			{
				func_51();
				return 1;
			}
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_64, AUDIO::_0x0626A247D2405330(), 1))
		{
			func_51();
			return 1;
		}
		if (!ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_64, 250f, 250f, 250f, 0, 1, 0))
		{
			return 1;
		}
		if (iLocal_54 == 0)
		{
			iVar0 = 0;
			if (func_67())
			{
				iVar0 = 0;
				while (iVar0 < func_66())
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_65(iVar0), AUDIO::_0x0626A247D2405330(), 0))
					{
						if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_65(iVar0))) == 2429016672)
						{
							return 1;
						}
					}
					iVar0++;
				}
			}
		}
		if (iLocal_53 < 2)
		{
			if (PED::HAS_PED_RECEIVED_EVENT(iLocal_64, 126))
			{
				return 1;
			}
			if (iLocal_54 == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
				{
					if (((PED::IS_COP_PED_IN_AREA_3D(unk_0x8000C77B5F336760(iLocal_69, false) + Vector(0f, 0f, 45f) - Vector(40f, 40f, 40f), unk_0x8000C77B5F336760(iLocal_69, false) + Vector(0f, 0f, 45f) + Vector(40f, 40f, 40f)) || PED::IS_COP_PED_IN_AREA_3D(unk_0x8000C77B5F336760(iLocal_69, false) - Vector(0f, 0f, 45f) - Vector(40f, 40f, 40f), unk_0x8000C77B5F336760(iLocal_69, false) - Vector(0f, 0f, 45f) + Vector(40f, 40f, 40f))) || PED::IS_COP_PED_IN_AREA_3D(unk_0x8000C77B5F336760(iLocal_69, false) + Vector(0f, 45f, 0f) - Vector(40f, 40f, 40f), unk_0x8000C77B5F336760(iLocal_69, false) + Vector(0f, 45f, 0f) + Vector(40f, 40f, 40f))) || PED::IS_COP_PED_IN_AREA_3D(unk_0x8000C77B5F336760(iLocal_69, false) - Vector(0f, 45f, 0f) - Vector(40f, 40f, 40f), unk_0x8000C77B5F336760(iLocal_69, false) - Vector(0f, 45f, 0f) + Vector(40f, 40f, 40f)))
					{
						BRAIN::TASK_SMART_FLEE_PED(iLocal_64, AUDIO::_0x0626A247D2405330(), 1000f, 4294967295, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_64, true);
						return 1;
					}
				}
			}
			else if (iLocal_54 == 1)
			{
				if (PED::IS_COP_PED_IN_AREA_3D(unk_0x8000C77B5F336760(iLocal_64, false) - Vector(70f, 70f, 70f), unk_0x8000C77B5F336760(iLocal_64, false) + Vector(70f, 70f, 70f)))
				{
					return 1;
				}
			}
			if (MISC::IS_BULLET_IN_AREA(unk_0x8000C77B5F336760(iLocal_64, true), 20f, 1))
			{
				return 1;
			}
			if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(unk_0x8000C77B5F336760(iLocal_64, true) - Vector(15f, 15f, 15f), unk_0x8000C77B5F336760(iLocal_64, true) + Vector(15f, 15f, 15f), joaat("weapon_smokegrenade"), 1) || MISC::IS_PROJECTILE_TYPE_IN_AREA(unk_0x8000C77B5F336760(iLocal_64, true) - Vector(15f, 15f, 15f), unk_0x8000C77B5F336760(iLocal_64, true) + Vector(15f, 15f, 15f), joaat("weapon_grenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(unk_0x8000C77B5F336760(iLocal_64, true) - Vector(15f, 15f, 15f), unk_0x8000C77B5F336760(iLocal_64, true) + Vector(15f, 15f, 15f), joaat("weapon_grenadelauncher"), 1))
			{
				return 1;
			}
			if (GRAPHICS::_0x2F09F7976C512404(unk_0x8000C77B5F336760(iLocal_64, true), 3f))
			{
				return 1;
			}
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
			{
				return 1;
			}
			if ((ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_64, 20f, 20f, 8f, 0, 1, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_64, AUDIO::_0x0626A247D2405330())) && WEAPON::IS_PED_ARMED(AUDIO::_0x0626A247D2405330(), 6))
			{
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(CAM::_0xDC9DA9E8789F5246(), iLocal_64) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(CAM::_0xDC9DA9E8789F5246(), iLocal_64))
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

var func_65(int iParam0)//Position - 0x43D1
{
	return Global_BD30.f_19[iParam0];
}

int func_66()//Position - 0x43E2
{
	return Global_BD30.f_18;
}

bool func_67()//Position - 0x43EF
{
	return Global_BD30.f_18 > 0;
}

void func_68()//Position - 0x43FE
{
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_64))
		{
			if (!func_83())
			{
				if (func_9())
				{
					func_72(&uLocal_114, "PRI2AU", "PRI2_THREAT", 4, 0, 0, 0);
				}
				else
				{
					func_72(&uLocal_114, "PRI2AU", "PRI2_HIJ", 4, 0, 0, 0);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_89))
				{
					HUD::SET_BLIP_AS_FRIENDLY(iLocal_89, false);
				}
				NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_64);
				BRAIN::OPEN_SEQUENCE_TASK(&iLocal_66);
				BRAIN::TASK_AIM_GUN_AT_ENTITY(0, AUDIO::_0x0626A247D2405330(), 500, 1);
				BRAIN::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, AUDIO::_0x0626A247D2405330(), AUDIO::_0x0626A247D2405330(), 1f, 0, 1f, 0.5f, 1, 0, 3337513804);
				BRAIN::TASK_ENTER_VEHICLE(0, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 4294967295, 4294967295, 2f, 9, 0);
				CUTSCENE::_0x8D9DF6ECA8768583(iLocal_66);
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_64, iLocal_66);
				BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_66);
				SYSTEM::SETTIMERA(0);
				bLocal_94 = true;
				iLocal_53 = 11;
			}
		}
	}
}

float func_69(int iParam0, int iParam1)//Position - 0x44CB
{
	return func_5(iParam0, iParam1, 1);
}

int func_70()//Position - 0x44DC
{
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iLocal_67 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_67, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0)//Position - 0x450A
{
	if ((((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 3000) || FIRE::IS_ENTITY_ON_FIRE(iParam0)) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(unk_0x8000C77B5F336760(iParam0, false), 5f) > 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("weapon_molotov"), 0)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(unk_0x8000C77B5F336760(iParam0, false) - Vector(5f, 5f, 5f), unk_0x8000C77B5F336760(iParam0, false) + Vector(5f, 5f, 5f), joaat("weapon_molotov"), 0))
	{
		return 1;
	}
	return 0;
}

bool func_72(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x457C
{
	func_82(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_73(sParam2, iParam3, 0);
}

int func_73(char* sParam0, int iParam1, bool bParam2)//Position - 0x45CA
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
					func_81();
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
		if (func_80(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_79();
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
				func_78();
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
				if (func_77())
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
			if (func_76())
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
			func_75();
			Global_3DD8 = bParam2;
		}
		Global_3DD0 = iParam1;
		StringCopy(&Global_3C51, sParam0, 24);
		Global_3960 = 0;
		func_74();
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
		func_81();
	}
	return 0;
}

void func_74()//Position - 0x4896
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

void func_75()//Position - 0x48C8
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

int func_76()//Position - 0x495D
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_77()//Position - 0x4984
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

void func_78()//Position - 0x4A1D
{
	if (func_36(14))
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
		Global_38B1 = func_49();
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

void func_79()//Position - 0x4ABF
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

bool func_80(int iParam0, int iParam1)//Position - 0x4B17
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

void func_81()//Position - 0x4B52
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

void func_82(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x4BA9
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

int func_83()//Position - 0x4BFF
{
	if (Global_3DCE != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_84()//Position - 0x4C21
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_69, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_69, 0) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_69, 4294967295, 0))
		{
			AUDIO::_0x9D3AF56E94C9AE98(iLocal_69, 60000f);
			AUDIO::_SOUND_VEHICLE_HORN_THIS_FRAME(iLocal_69);
		}
	}
}

void func_85()//Position - 0x4C62
{
	switch (iLocal_92)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_64))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_64, 20f, 20f, 8f, 0, 1, 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(AUDIO::_0x0626A247D2405330()) < 2.5f || !(PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) && ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_64, 15f, 15f, 8f, 0, 1, 0)))
					{
						BRAIN::OPEN_SEQUENCE_TASK(&iLocal_66);
						BRAIN::TASK_LOOK_AT_ENTITY(0, AUDIO::_0x0626A247D2405330(), 30000, 2050, 2);
						BRAIN::TASK_GO_TO_ENTITY(0, AUDIO::_0x0626A247D2405330(), 4294967295, 2f, 1f, 1073741824, 0);
						CUTSCENE::_0x8D9DF6ECA8768583(iLocal_66);
						BRAIN::TASK_PERFORM_SEQUENCE(iLocal_64, iLocal_66);
						BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_66);
						if (func_72(&uLocal_114, "PRI1AU", "PRI1_ASK", 4, 0, 0, 0))
						{
							bLocal_83 = true;
							iLocal_92++;
						}
					}
				}
			}
			break;
		
		case 1:
			func_87(&uLocal_91);
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
			{
				if (func_88())
				{
					iLocal_67 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
					if (ENTITY::GET_ENTITY_SPEED(iLocal_67) < 9f)
					{
						if (!PED::IS_PED_INJURED(iLocal_64))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_64, iLocal_67, 20f, 20f, 5f, 0, 1, 0))
							{
								iLocal_92++;
							}
						}
					}
				}
				else if (!bLocal_94)
				{
					fLocal_93 = func_5(iLocal_64, AUDIO::_0x0626A247D2405330(), 1);
					BRAIN::OPEN_SEQUENCE_TASK(&iLocal_66);
					BRAIN::TASK_LOOK_AT_ENTITY(0, AUDIO::_0x0626A247D2405330(), 7000, 2048, 2);
					BRAIN::TASK_GO_TO_ENTITY(0, AUDIO::_0x0626A247D2405330(), 4294967295, (fLocal_93 - 3f), 1f, 1073741824, 0);
					CUTSCENE::_0x8D9DF6ECA8768583(iLocal_66);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_64, iLocal_66);
					BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_66);
					if (!func_83())
					{
						if (func_9())
						{
							func_72(&uLocal_114, "PRI1AU", "PRI1_UVH2", 4, 0, 0, 0);
						}
						else
						{
							func_72(&uLocal_114, "PRI1AU", "PRI1_UVH", 4, 0, 0, 0);
						}
						bLocal_94 = true;
						bLocal_83 = true;
					}
				}
			}
			break;
		
		case 2:
			func_87(&uLocal_91);
			if (!iLocal_96)
			{
				if (ENTITY::GET_ENTITY_SPEED(AUDIO::_0x0626A247D2405330()) < 2.5f)
				{
					if (!PED::IS_PED_INJURED(iLocal_64))
					{
						NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_64);
						BRAIN::TASK_OPEN_VEHICLE_DOOR(iLocal_64, iLocal_67, 4294967295, 0, 1f);
						iLocal_96 = 1;
					}
				}
				if (!func_83())
				{
					if (!PED::IS_PED_INJURED(iLocal_64))
					{
						NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_64);
						BRAIN::TASK_OPEN_VEHICLE_DOOR(iLocal_64, iLocal_67, 4294967295, 0, 1f);
						iLocal_96 = 1;
					}
				}
			}
			if (func_88())
			{
				iLocal_67 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
				if (ENTITY::GET_ENTITY_SPEED(iLocal_67) < 2.5f)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_67, unk_0x8000C77B5F336760(iLocal_64, true), 20f, 20f, 5f, false, true, 0))
					{
						if (iLocal_54 == 0)
						{
							if (!func_83())
							{
								if (func_49() == 0)
								{
									if (func_9())
									{
										func_72(&uLocal_114, "PRI1AU", "PRI1_GETONM", 4, 0, 0, 0);
									}
									else
									{
										func_72(&uLocal_114, "PRI1AU", "PRI1_JIM", 4, 0, 0, 0);
									}
								}
								else if (func_49() == 1)
								{
									if (func_9())
									{
										func_72(&uLocal_114, "PRI1AU", "PRI1_GETONF", 4, 0, 0, 0);
									}
									else
									{
										func_72(&uLocal_114, "PRI1AU", "PRI1_JIF", 4, 0, 0, 0);
									}
								}
								else if (func_49() == 2)
								{
									func_72(&uLocal_114, "PRI1AU", "PRI1_JIT", 4, 0, 0, 0);
								}
								iLocal_92++;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (func_88())
			{
				iLocal_67 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
				if (ENTITY::GET_ENTITY_SPEED(iLocal_67) < 0.5f)
				{
					if (!PED::IS_PED_INJURED(iLocal_64))
					{
						NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_64);
						if (!PED::IS_PED_IN_GROUP(iLocal_64))
						{
							PED::SET_PED_AS_GROUP_MEMBER(iLocal_64, PLAYER::GET_PLAYER_GROUP(CAM::_0xDC9DA9E8789F5246()));
							PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_64, 0);
							PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_64, 1);
						}
						iLocal_92++;
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_54 == 0)
			{
				if (!func_83())
				{
					if (func_72(&uLocal_114, "PRI1AU", "PRI1_SH", 4, 0, 0, 0))
					{
						iLocal_92++;
					}
				}
			}
			else
			{
				iLocal_92++;
			}
			break;
		
		case 5:
			if (func_88())
			{
				if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_64))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_64, PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_89))
							{
								HUD::REMOVE_BLIP(&iLocal_89);
							}
							iLocal_53 = 2;
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

void func_86()//Position - 0x5071
{
	func_170();
}

void func_87(var uParam0)//Position - 0x507D
{
	switch (*uParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_64))
			{
				if (!PED::IS_PED_FACING_PED(iLocal_64, AUDIO::_0x0626A247D2405330(), 90f))
				{
					BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_64, AUDIO::_0x0626A247D2405330(), 0);
					*uParam0++;
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_64))
			{
				if (PED::IS_PED_FACING_PED(iLocal_64, AUDIO::_0x0626A247D2405330(), 90f))
				{
					*uParam0++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_64))
			{
				if (!PED::IS_PED_FACING_PED(iLocal_64, AUDIO::_0x0626A247D2405330(), 90f))
				{
					*uParam0 = 0;
				}
			}
			break;
	}
}

int func_88()//Position - 0x511D
{
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)))
		{
			if ((((((!PED::IS_PED_IN_ANY_POLICE_VEHICLE(AUDIO::_0x0626A247D2405330()) && !PED::IS_PED_IN_ANY_BOAT(AUDIO::_0x0626A247D2405330())) && !PED::IS_PED_IN_ANY_HELI(AUDIO::_0x0626A247D2405330())) && !PED::IS_PED_IN_ANY_PLANE(AUDIO::_0x0626A247D2405330())) && !PED::IS_PED_IN_ANY_SUB(AUDIO::_0x0626A247D2405330())) && !PED::IS_PED_IN_ANY_TRAIN(AUDIO::_0x0626A247D2405330())) && !VEHICLE::IS_BIG_VEHICLE(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_89()//Position - 0x51BC
{
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iLocal_67 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if ((OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_67, 0) && !PED::IS_PED_INJURED(iLocal_64)) && !bLocal_83)
		{
			fLocal_93 = func_5(iLocal_64, AUDIO::_0x0626A247D2405330(), 1);
			if (fLocal_93 > 5f)
			{
				fLocal_93 = (fLocal_93 - 2.5f);
			}
			else
			{
				fLocal_93 = (fLocal_93 - 1f);
			}
			NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_64);
			BRAIN::OPEN_SEQUENCE_TASK(&iLocal_66);
			if (iLocal_54 == 0)
			{
				BRAIN::TASK_LOOK_AT_ENTITY(0, iLocal_67, 10000, 2048, 2);
				BRAIN::TASK_PLAY_ANIM(0, "random@prisoner_lift", "arms_waving", 2f, -2f, 4294967295, 49, 0, 0, 0, 0);
				BRAIN::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, AUDIO::_0x0626A247D2405330(), AUDIO::_0x0626A247D2405330(), 1f, 0, fLocal_93, 1f, 1, 0, 3337513804);
			}
			else if (iLocal_54 == 1)
			{
				BRAIN::TASK_LOOK_AT_ENTITY(0, iLocal_67, 10000, 2052, 2);
				BRAIN::TASK_PLAY_ANIM(0, "random@prisoner_lift", "arms_waving", 2f, -2f, 4294967295, 49, 0, 0, 0, 0);
				BRAIN::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, AUDIO::_0x0626A247D2405330(), -1f, 0f, 0f, 1f, 4294967295, 0.5f, 1);
			}
			CUTSCENE::_0x8D9DF6ECA8768583(iLocal_66);
			BRAIN::TASK_PERFORM_SEQUENCE(iLocal_64, iLocal_66);
			BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_66);
			if (iLocal_54 == 0)
			{
				func_72(&uLocal_114, "PRI1AU", "PRI1_STO", 4, 0, 0, 0);
				SYSTEM::SETTIMERA(0);
				bLocal_83 = true;
			}
			else if (iLocal_54 == 1)
			{
				if (func_72(&uLocal_114, "PRI2AU", "PRI2_STO", 4, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					bLocal_83 = true;
				}
			}
		}
	}
}

void func_90(bool bParam0)//Position - 0x530D
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

int func_91(int iParam0)//Position - 0x5339
{
	if (func_95())
	{
		Global_19E4C = 1;
		Global_19E49 = MISC::GET_GAME_TIMER();
		if (func_29(Global_19E4B))
		{
			func_92(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_29(Global_19E4B))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_92(int iParam0)//Position - 0x538C
{
	switch (iParam0)
	{
		case 0:
			if (Global_19E56.f_6187.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_93(func_94(iParam0), 4294967295);
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
					func_93(func_94(iParam0), 4294967295);
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
					func_93(func_94(iParam0), 4294967295);
					Global_19E56.f_6187.f_4++;
					MISC::SET_BIT(&Global_19E52, 2);
				}
			}
			break;
	}
}

void func_93(char* sParam0, int iParam1)//Position - 0x546D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

char* func_94(int iParam0)//Position - 0x5484
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

int func_95()//Position - 0x54C8
{
	switch (func_96(&Global_63AE, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_96(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x54FE
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
		if (func_100(0))
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
		if (!func_98(iParam2))
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
			func_97(uParam0, iParam4);
		}
	}
	return 2;
}

void func_97(var uParam0, int iParam1)//Position - 0x5635
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

bool func_98(int iParam0)//Position - 0x5684
{
	return func_99(iParam0, Global_8D15);
}

int func_99(int iParam0, int iParam1)//Position - 0x5695
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

int func_100(int iParam0)//Position - 0x5876
{
	if (Global_8D15 == 15)
	{
		return 0;
	}
	if (func_98(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_101()//Position - 0x5898
{
	if (HUD::DOES_BLIP_EXIST(iLocal_63))
	{
		HUD::REMOVE_BLIP(&iLocal_63);
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_89))
	{
		iLocal_89 = func_11(iLocal_64, 0, 145);
		HUD::_0x75A16C3DA34F1245(iLocal_89, false);
	}
}

void func_102()//Position - 0x58CB
{
	int iVar0;
	int iVar1[2];
	
	func_104(39, 1);
	func_104(40, 1);
	func_104(41, 1);
	func_104(42, 1);
	func_104(43, 1);
	func_104(44, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	MISC::ENABLE_DISPATCH_SERVICE(11, false);
	iLocal_64 = PED::CREATE_PED(26, iLocal_76, vLocal_68, fLocal_75, 1, true);
	ENTITY::SET_ENTITY_HEALTH(iLocal_64, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_64, 134, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_64, 137, true);
	PED::ADD_RELATIONSHIP_GROUP("PedPrisoner", &iLocal_65);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_64, iLocal_65);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2761840924, iLocal_65);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_65, 2761840924);
	BRAIN::TASK_PLAY_ANIM(iLocal_64, "random@prisoner_lift", "loop2_idlelook2", 2f, -2f, 4294967295, 1, 0, 0, 0, 0);
	PED::SET_PED_MONEY(iLocal_64, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_64, 8, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_64, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_64, 2, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_64, 1, false);
	MISC::SET_BIT(&uLocal_78, 3);
	MISC::SET_BIT(&uLocal_78, 5);
	MISC::SET_BIT(&uLocal_78, 0);
	if (iLocal_54 == 0)
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_64, "REPRI1Lost");
		func_103(&uLocal_114, 3, iLocal_64, "REPRI1Lost", 0, 1);
		MISC::CLEAR_AREA_OF_PEDS(vLocal_68, 50f, 0);
		MISC::CLEAR_AREA(vLocal_68, 10f, 0, 0, 0, false);
		PED::ADD_SCENARIO_BLOCKING_AREA(vLocal_68 - Vector(50f, 50f, 50f), vLocal_68 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
		PED::ADD_SCENARIO_BLOCKING_AREA(vLocal_74 - Vector(10f, 10f, 10f), vLocal_74 + Vector(10f, 10f, 10f), 0, 1, 1, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_68 - Vector(10f, 10f, 10f), vLocal_68 + Vector(10f, 10f, 10f), false, 1);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_65, 2429016672);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2429016672, iLocal_65);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_64, 17, true);
		iLocal_69 = VEHICLE::CREATE_VEHICLE(joaat("SHERIFF"), 1524.332f, 2173.347f, 79.0619f, 201.6806f, true, true, false);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_69, 0f);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_69, 4, 0, 0);
		VEHICLE::SET_VEHICLE_TYRE_BURST(iLocal_69, 0, 0, 1148846080);
		VEHICLE::_0x0AD9E8F87FF7C16F(iLocal_69, 0);
		MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(1525.566f, 2172.512f, 80.1985f, 1524.423f, 2173.894f, 80.1342f, 100, 1, joaat("weapon_assaultrifle"), 0, 1, 1, 3212836864);
		iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_69, 26, joaat("s_m_y_ranger_01"), 4294967295, 1, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 326, true);
		unk_0x65E471E4A2D56226(iVar0, 99, 0);
		PED::SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(iVar0, 1);
		iVar1[0] = VEHICLE::CREATE_VEHICLE(joaat("RATLOADER"), 1527.4f, 2240.33f, 73.8459f, 216.8133f, true, true, false);
		iVar1[1] = VEHICLE::CREATE_VEHICLE(joaat("BFINJECTION"), 1594.093f, 2198.657f, 77.8709f, 85.3536f, true, true, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar1[0], 1084227584);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar1[1], 1084227584);
	}
	else if (iLocal_54 == 1)
	{
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(1449.851f, 2452.661f, 81.56557f, 1203.85f, 2579.351f, 35.1549f, 224.125f, 0, false, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_64, "G_M_Y_STREETPUNK02_BLACK_MINI_04");
		func_103(&uLocal_114, 3, iLocal_64, "REPRI2Prisoner", 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_64, joaat("weapon_pistol"), 4294967295, false, true);
	}
	if (func_49() == 0)
	{
		func_103(&uLocal_114, 0, AUDIO::_0x0626A247D2405330(), "MICHAEL", 0, 1);
	}
	else if (func_49() == 1)
	{
		func_103(&uLocal_114, 1, AUDIO::_0x0626A247D2405330(), "FRANKLIN", 0, 1);
	}
	else if (func_49() == 2)
	{
		func_103(&uLocal_114, 2, AUDIO::_0x0626A247D2405330(), "TREVOR", 0, 1);
	}
	iLocal_53 = 1;
}

void func_103(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x5C6A
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

void func_104(int iParam0, bool bParam1)//Position - 0x5D05
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

void func_105(int iParam0, int iParam1, bool bParam2)//Position - 0x5D3C
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
		if (func_24() == 0)
		{
			iVar0 = func_48(func_106(iParam0), 4294967295, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, iParam1);
			func_46(func_106(iParam0), iVar0, 4294967295, 1, 0);
		}
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_29C[iParam0]), iParam1);
	}
}

int func_106(int iParam0)//Position - 0x5DAE
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

void func_107(int iParam0, int iParam1, bool bParam2)//Position - 0x60B1
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
		if (func_24() == 0)
		{
			iVar0 = func_48(func_106(iParam0), 4294967295, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_46(func_106(iParam0), iVar0, 4294967295, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_19E56.f_29C[iParam0]), iParam1);
	}
}

int func_108(int iParam0, int iParam1, bool bParam2)//Position - 0x6123
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
		if (func_24() == 0)
		{
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(func_48(func_106(iParam0), 4294967295, 0), iParam1);
		}
	}
	else
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_29C[iParam0], iParam1);
	}
	return 0;
}

void func_109()//Position - 0x618D
{
	STREAMING::REQUEST_MODEL(iLocal_76);
	STREAMING::REQUEST_ANIM_DICT("random@prisoner_lift");
	if (iLocal_54 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("s_m_y_ranger_01"));
		STREAMING::REQUEST_MODEL(joaat("SHERIFF"));
		STREAMING::REQUEST_MODEL(joaat("RATLOADER"));
		STREAMING::REQUEST_MODEL(joaat("BFINJECTION"));
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_76) && STREAMING::HAS_ANIM_DICT_LOADED("random@prisoner_lift"))
	{
		if (iLocal_54 == 0)
		{
			if (((STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_ranger_01")) && STREAMING::HAS_MODEL_LOADED(joaat("SHERIFF"))) && STREAMING::HAS_MODEL_LOADED(joaat("RATLOADER"))) && STREAMING::HAS_MODEL_LOADED(joaat("BFINJECTION")))
			{
				bLocal_55 = true;
			}
		}
		else
		{
			bLocal_55 = true;
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_76);
		STREAMING::REQUEST_ANIM_DICT("random@prisoner_lift");
		if (iLocal_54 == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_y_ranger_01"));
			STREAMING::REQUEST_MODEL(joaat("SHERIFF"));
			STREAMING::REQUEST_MODEL(joaat("RATLOADER"));
			STREAMING::REQUEST_MODEL(joaat("BFINJECTION"));
		}
	}
}

void func_110()//Position - 0x6260
{
	if (iLocal_58 == 1)
	{
		iLocal_76 = joaat("g_m_y_lost_02");
		vLocal_68 = { 1538.09f, 2172.344f, 77.826f };
		fLocal_75 = 142.0201f;
		vLocal_77 = { 984.3975f, -106.9935f, 73.3531f };
		vLocal_74 = { 960.1481f, -139.4141f, 73.476f };
	}
	if (iLocal_58 == 2)
	{
		iLocal_76 = joaat("s_m_y_prisoner_01");
		vLocal_68 = { 1401.692f, 2528.085f, 40.3762f };
		fLocal_75 = 301.2458f;
		vLocal_77 = { 938.5384f, -2167.42f, 29.5153f };
		vLocal_74 = { 928.9882f, -2173.248f, 29.2873f };
	}
	iLocal_56 = 1;
}

int func_111()//Position - 0x6305
{
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), vLocal_50) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(AUDIO::_0x0626A247D2405330())) > 1369f && !func_122())
		{
			return 0;
		}
	}
	if (func_118())
	{
		return 1;
	}
	if (func_112(100f, 1) != 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_112(float fParam0, bool bParam1)//Position - 0x638B
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
		if (func_37(func_49()))
		{
			iVar5 = func_34();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4872[iVar1 /*6*/], 2) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4872[iVar1 /*6*/], 3))
				{
					func_113(iVar1, &Var0);
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

void func_113(int iParam0, var uParam1)//Position - 0x6442
{
	switch (iParam0)
	{
		case 0:
			func_114(uParam1, "Abigail1", func_116(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 1:
			func_114(uParam1, "Abigail2", func_116(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, 4294967295, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 2:
			func_114(uParam1, "Barry1", func_116(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, 4294967295, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 3:
			func_114(uParam1, "Barry2", func_116(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 4:
			func_114(uParam1, "Barry3", func_116(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", 4294967295, 0, "", 164, 1, 4294967295, 0, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 5:
			func_114(uParam1, "Barry3A", func_116(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 6:
			func_114(uParam1, "Barry3C", func_116(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 7:
			func_114(uParam1, "Barry4", func_116(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, 4294967295, 4, 2, 800, 2000, func_115(iParam0), 0, 0);
			break;
		
		case 8:
			func_114(uParam1, "Dreyfuss1", func_116(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
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
			func_114(uParam1, "Epsilon7", func_116(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", 4294967295, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 16:
			func_114(uParam1, "Epsilon8", func_116(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, 4294967295, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 17:
			func_114(uParam1, "Extreme1", func_116(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", 4294967295, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 18:
			func_114(uParam1, "Extreme2", func_116(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 19:
			func_114(uParam1, "Extreme3", func_116(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 20:
			func_114(uParam1, "Extreme4", func_116(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 21:
			func_114(uParam1, "Fanatic1", func_116(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, 4294967295, 4, 1, 700, 2000, func_115(iParam0), 1, 0);
			break;
		
		case 22:
			func_114(uParam1, "Fanatic2", func_116(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 4, 700, 2000, func_115(iParam0), 1, 0);
			break;
		
		case 23:
			func_114(uParam1, "Fanatic3", func_116(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 2, 700, 2000, func_115(iParam0), 0, 1);
			break;
		
		case 24:
			func_114(uParam1, "Hao1", func_116(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", 4294967295, 0, "controller_Races", 13, 1, 4294967295, 4, 2, 2000, 500, func_115(iParam0), 0, 1);
			break;
		
		case 25:
			func_114(uParam1, "Hunting1", func_116(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", 4294967295, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 26:
			func_114(uParam1, "Hunting2", func_116(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, 4294967295, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 27:
			func_114(uParam1, "Josh1", func_116(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", 4294967295, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 28:
			func_114(uParam1, "Josh2", func_116(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 29:
			func_114(uParam1, "Josh3", func_116(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 4294967295, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 30:
			func_114(uParam1, "Josh4", func_116(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", 4294967295, 36, "", 0, 0, 4294967295, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 31:
			func_114(uParam1, "Maude1", func_116(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", 4294967295, 0, "BailBond_Launcher", 0, 1, 4294967295, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 32:
			func_114(uParam1, "Minute1", func_116(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", 4294967295, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 33:
			func_114(uParam1, "Minute2", func_116(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", 4294967295, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 34:
			func_114(uParam1, "Minute3", func_116(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", 4294967295, 10, "", 0, 0, 4294967295, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 35:
			func_114(uParam1, "MrsPhilips1", func_116(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", 4294967295, 0, "ambient_MrsPhilips", 0, 1, 4294967295, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 36:
			func_114(uParam1, "MrsPhilips2", func_116(iParam0), 0, 11, 4, 0f, 0f, 0f, 4294967295, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 37:
			func_114(uParam1, "Nigel1", func_116(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", 4294967295, 0, "", 177, 1, 4294967295, 1, 4, 0, 2359, func_115(iParam0), 1, 0);
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
			func_114(uParam1, "Nigel2", func_116(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", 4294967295, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 43:
			func_114(uParam1, "Nigel3", func_116(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", 4294967295, 16, "postRC_Nigel3", 0, 0, 4294967295, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 44:
			func_114(uParam1, "Omega1", func_116(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", 4294967295, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 45:
			func_114(uParam1, "Omega2", func_116(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 46:
			func_114(uParam1, "Paparazzo1", func_116(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", 4294967295, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 47:
			func_114(uParam1, "Paparazzo2", func_116(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", 4294967295, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 48:
			func_114(uParam1, "Paparazzo3", func_116(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", 4294967295, 8, "", 183, 1, 4294967295, 2, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 49:
			func_114(uParam1, "Paparazzo3A", func_116(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 50:
			func_114(uParam1, "Paparazzo3B", func_116(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 51:
			func_114(uParam1, "Paparazzo4", func_116(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", 4294967295, 8, "", 0, 1, 4294967295, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 52:
			func_114(uParam1, "Rampage1", func_116(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", 4294967295, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 54:
			func_114(uParam1, "Rampage3", func_116(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", 4294967295, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 55:
			func_114(uParam1, "Rampage4", func_116(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", 4294967295, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 56:
			func_114(uParam1, "Rampage5", func_116(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", 4294967295, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 53:
			func_114(uParam1, "Rampage2", func_116(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", 4294967295, 0, "rampage_controller", 0, 0, 4294967295, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 57:
			func_114(uParam1, "TheLastOne", func_116(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, 4294967295, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 58:
			func_114(uParam1, "Tonya1", func_116(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", 4294967295, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 59:
			func_114(uParam1, "Tonya2", func_116(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", 4294967295, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 60:
			func_114(uParam1, "Tonya3", func_116(iParam0), 0, 17, 4, 0f, 0f, 0f, 4294967295, "", 4294967295, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 61:
			func_114(uParam1, "Tonya4", func_116(iParam0), 0, 17, 4, 0f, 0f, 0f, 4294967295, "", 4294967295, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 62:
			func_114(uParam1, "Tonya5", func_116(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", 4294967295, 48, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_114(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x7689
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

int func_115(int iParam0)//Position - 0x771A
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

struct<2> func_116(int iParam0)//Position - 0x7A60
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_117(iParam0) };
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

struct<2> func_117(int iParam0)//Position - 0x7A98
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

int func_118()//Position - 0x7EE5
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

bool func_119()//Position - 0x7F17
{
	return Global_19D3C > 0;
}

int func_120()//Position - 0x7F25
{
	if (Global_16089 != 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_121()//Position - 0x7F3A
{
	if (Global_16089 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14893[Global_16089 /*34*/].f_F, 20);
	}
	return 0;
}

int func_122()//Position - 0x7F60
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

int func_123()//Position - 0x7F7D
{
	if (!func_98(5))
	{
		return 1;
	}
	if (func_118())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(AUDIO::_0x0626A247D2405330())) > 1369f && !func_122())
		{
			return 0;
		}
	}
	if (func_112(100f, 1) != 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_124()//Position - 0x7FDF
{
	if ((Global_19E4B == func_43() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_19E4C)
	{
		return 1;
	}
	return 0;
}

void func_125(int iParam0)//Position - 0x800B
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_43();
	}
	if (iParam0 == 4294967295)
	{
		return;
	}
	func_127(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_19E48 = 0;
	func_126();
}

void func_126()//Position - 0x8041
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

void func_127(int iParam0)//Position - 0x807E
{
	Global_19E4B = iParam0;
}

int func_128(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x808C
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
		iParam1 = func_43();
	}
	if (iParam1 == 4294967295)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
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
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(AUDIO::_0x0626A247D2405330())) > 1369f && !func_122())
			{
				return 0;
			}
		}
		if (!Global_19E56.f_2361)
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
		if (Global_19E4B != 4294967295)
		{
			return 0;
		}
		if (func_37(func_49()))
		{
			if (func_112(100f, 1) != 4294967295)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) && !bParam4)
		{
			if ((vVar1.z - vLocal_50.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_167(iParam1))
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
			if (!func_165(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_164(Global_19E56.f_6187.f_2B[iParam1]))
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
		if (func_163())
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
		if (!func_154(4))
		{
			return 0;
		}
		if (!func_98(5))
		{
			return 0;
		}
		if (func_153(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_153(0, 0))
		{
			return 0;
		}
		if (Global_6405)
		{
			return 0;
		}
		if (func_167(30) && !func_153(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_37(func_49()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_19E56.f_933.f_21B.f_8E8[iVar2 /*3*/] };
				iVar4 = Global_19E56.f_933.f_21B.f_8E4[iVar2];
				if (func_152(iVar4))
				{
					if (func_130(iVar2))
					{
						if (!func_129(vVar3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), vVar3) < (210f * 210f))
							{
								if (func_49() != iVar2)
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

bool func_129(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x8426
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_130(int iParam0)//Position - 0x846D
{
	int iVar0;
	
	iVar0 = Global_19E56.f_933.f_21B.f_8E4[iParam0];
	return func_131(iVar0);
}

int func_131(int iParam0)//Position - 0x848E
{
	return func_132(iParam0, 1);
}

int func_132(int iParam0, int iParam1)//Position - 0x849D
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

void func_133(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x84F0
{
	func_134(func_145(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_134(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x850E
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
		iVar0 = SYSTEM::ROUND(func_135(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_135(float fParam0, float fParam1, float fParam2)//Position - 0x870F
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

int func_136(int iParam0, int iParam1)//Position - 0x8751
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

int func_137(int iParam0)//Position - 0x87F3
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_138(int iParam0)//Position - 0x8806
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_139(int iParam0)//Position - 0x8819
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_140(int iParam0)//Position - 0x882C
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_141(int iParam0)//Position - 0x883E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_142(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 31), 4294967295, 1)) + 2011;
}

int func_142(bool bParam0, int iParam1, int iParam2)//Position - 0x8863
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_143(int iParam0)//Position - 0x887A
{
	return iParam0 & 15;
}

int func_144(int iParam0, int iParam1)//Position - 0x8887
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

int func_145()//Position - 0x8993
{
	var uVar0;
	
	func_151(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_150(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_149(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_148(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_147(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_146(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_146(var uParam0, int iParam1)//Position - 0x89D9
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

void func_147(var uParam0, int iParam1)//Position - 0x8A5F
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_148(var uParam0, int iParam1)//Position - 0x8A92
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
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_149(var uParam0, int iParam1)//Position - 0x8AE3
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_150(var uParam0, int iParam1)//Position - 0x8B1D
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_151(var uParam0, int iParam1)//Position - 0x8B58
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_152(int iParam0)//Position - 0x8B94
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

int func_153(int iParam0, int iParam1)//Position - 0x8C70
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6187.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0)//Position - 0x8C93
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
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
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_162()) || Global_19A9D) || Global_6375) || func_161()) || func_80(8, 4294967295)) || func_160()) || func_159()) || func_158()) || func_157()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1) || func_162()) || Global_6375) || func_161()) || func_80(8, 4294967295)) || func_158()) || func_160()) || func_159()) || func_157()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_162()) || Global_19A9D) || Global_6375) || func_161()) || func_80(8, 4294967295)) || func_158()) || func_160()) || func_159()) || func_157()) || Global_19E56.f_1DEC.f_397[iVar0] == 5) || Global_8F38 != 4294967295)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_162()) || Global_19A9D) || Global_6375) || func_161()) || func_80(8, 4294967295)) || func_160()) || func_159()) || func_157()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_162() || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || func_80(8, 4294967295)) || func_157()) || func_156()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_80(8, 4294967295) || func_160()) || func_159()) || func_156()) || func_155())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || func_162()) || Global_6375) || func_161()) || func_80(8, 4294967295)) || func_159()) || func_158()) || func_157()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || func_162()) || func_159()) || Global_19A9D) || Global_6375) || func_161()) || Global_9197) || func_80(8, 4294967295)) || func_158()) || func_156()) || func_157()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0)) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1)) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_SWIMMING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || func_162()) || Global_19A9D) || Global_6375) || func_161()) || func_80(8, 4294967295)) || func_158()) || func_156()) || func_160()) || func_159()) || func_157())
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

var func_155()//Position - 0x93B0
{
	return Global_16C57.f_1;
}

int func_156()//Position - 0x93BE
{
	if (Global_16089 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14893[Global_16089 /*34*/].f_F, 13);
	}
	return 0;
}

int func_157()//Position - 0x93E4
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_158()//Position - 0x93FE
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

bool func_159()//Position - 0x9428
{
	return Global_16C64.f_148 > 0;
}

bool func_160()//Position - 0x9439
{
	return Global_16C64.f_147 > 0;
}

var func_161()//Position - 0x944A
{
	return Global_140859;
}

int func_162()//Position - 0x9456
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_162B5.f_2C == 1;
	}
	return 0;
}

int func_163()//Position - 0x9472
{
	func_78();
	if (Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_164(int iParam0)//Position - 0x949A
{
	return func_144(func_145(), iParam0);
}

int func_165(int iParam0, int iParam1, int iParam2)//Position - 0x94AC
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

int func_166(int iParam0)//Position - 0x9590
{
	if (!func_37(iParam0))
	{
		return 7;
	}
	return Global_19E56.f_1DEC.f_397[iParam0];
}

bool func_167(int iParam0)//Position - 0x95B4
{
	int iVar0;
	bool bVar1;
	
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
		bVar1 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6187, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6187.f_1, iVar0);
	}
	return bVar1;
}

int func_168()//Position - 0x9612
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

int func_169()//Position - 0x9656
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

void func_170()//Position - 0x9711
{
	if (iLocal_107)
	{
		func_184(0);
		func_182();
		func_90(0);
		GRAPHICS::_0x54E22EA2C1956A8D(1f);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_68 - Vector(10f, 10f, 10f), vLocal_68 + Vector(10f, 10f, 10f), true, 1);
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(CAM::_0xDC9DA9E8789F5246());
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(1449.851f, 2452.661f, 81.56557f, 1203.85f, 2579.351f, 35.1549f, 224.125f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
			{
				PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_64))
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_64, false);
			if (iLocal_54 == 0)
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_64, 317, true);
				if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					BRAIN::OPEN_SEQUENCE_TASK(&iLocal_66);
					BRAIN::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, 4294967295, 0, 0);
					BRAIN::TASK_SMART_FLEE_COORD(0, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 300f, 4294967295, 0, 0);
					CUTSCENE::_0x8D9DF6ECA8768583(iLocal_66);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_64, iLocal_66);
					BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_66);
					PED::SET_PED_KEEP_TASK(iLocal_64, true);
				}
			}
			else if (iLocal_54 == 1)
			{
				if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					BRAIN::OPEN_SEQUENCE_TASK(&iLocal_66);
					BRAIN::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, 4294967295, 0, 0);
					BRAIN::TASK_SMART_FLEE_COORD(0, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 300f, 4294967295, 0, 0);
					CUTSCENE::_0x8D9DF6ECA8768583(iLocal_66);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_64, iLocal_66);
					BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_66);
					PED::SET_PED_KEEP_TASK(iLocal_64, true);
				}
				else if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_67, 0))
				{
					BRAIN::OPEN_SEQUENCE_TASK(&iLocal_66);
					BRAIN::TASK_ENTER_VEHICLE(0, iLocal_67, 4294967295, 4294967295, 2f, 9, 0);
					BRAIN::TASK_SMART_FLEE_COORD(0, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 300f, 4294967295, 0, 0);
					CUTSCENE::_0x8D9DF6ECA8768583(iLocal_66);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_64, iLocal_66);
					BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_66);
					PED::SET_PED_KEEP_TASK(iLocal_64, true);
				}
				else
				{
					BRAIN::OPEN_SEQUENCE_TASK(&iLocal_66);
					BRAIN::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, 4294967295, 0, 0);
					BRAIN::TASK_SMART_FLEE_COORD(0, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 300f, 4294967295, 0, 0);
					CUTSCENE::_0x8D9DF6ECA8768583(iLocal_66);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_64, iLocal_66);
					BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_66);
					PED::SET_PED_KEEP_TASK(iLocal_64, true);
				}
			}
		}
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::ENABLE_DISPATCH_SERVICE(11, true);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	}
	func_171(4294967295);
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_171(int iParam0)//Position - 0x995E
{
	char cVar0[64];
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_43();
	}
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (func_124())
	{
		func_175(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_19E4D = MISC::GET_GAME_TIMER();
		func_174(30000);
		StringCopy(&cVar0, func_173(Global_19E4B, 1), 64);
		if (func_42(Global_19E4B) > 0)
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
	func_172(&Global_63AE);
	Global_19E4C = 0;
	func_127(4294967295);
}

void func_172(var uParam0)//Position - 0x9A13
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

char* func_173(int iParam0, bool bParam1)//Position - 0x9A50
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

void func_174(int iParam0)//Position - 0x9C99
{
	Global_8F3C = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_175(int iParam0)//Position - 0x9CAB
{
	func_176(iParam0, 0, func_181(iParam0));
}

void func_176(int iParam0, int iParam1, int iParam2)//Position - 0x9CC0
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_145();
	func_179(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_178(iParam0, &uVar0);
	Var1 = { func_177(&uVar0) };
}

struct<16> func_177(var uParam0)//Position - 0x9CEF
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_139(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_138(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_137(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_140(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_143(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_141(*uParam0), 64);
	return Var0;
}

void func_178(int iParam0, var uParam1)//Position - 0x9DC0
{
	Global_19E56.f_6187.f_2B[iParam0] = *uParam1;
}

void func_179(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9DD8
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

void func_180(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9F5A
{
	func_151(uParam0, iParam1);
	func_150(uParam0, iParam2);
	func_149(uParam0, iParam3);
	func_147(uParam0, iParam5);
	func_148(uParam0, iParam4);
	func_146(uParam0, iParam6);
}

int func_181(int iParam0)//Position - 0x9F92
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

void func_182()//Position - 0xA135
{
	Global_3960 = 0;
	func_183();
}

void func_183()//Position - 0xA145
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_41C1 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_3DCE = 6;
		return;
	}
}

void func_184(bool bParam0)//Position - 0xA169
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		func_104(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_185()//Position - 0xA18C
{
	float fVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), vLocal_59, true);
		iLocal_58 = 1;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), vLocal_60, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), vLocal_60, true);
			iLocal_58 = 2;
		}
		if (iLocal_58 == 1)
		{
			iLocal_61 = 1;
			iLocal_54 = 0;
			return vLocal_59;
		}
		if (iLocal_58 == 2)
		{
			iLocal_61 = 2;
			iLocal_54 = 1;
			return vLocal_60;
		}
	}
	return 0f, 0f, 0f;
}

