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
	int iLocal_18 = 0;
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
	vector3 vLocal_44 = { 0f, 0f, 0f };
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	var uLocal_53 = 0;
	int iLocal_54[2] = { 0, 0 };
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61[2] = { 0, 0 };
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 0;
	vector3 vLocal_78 = { 0f, 0f, 0f };
	vector3 vLocal_81[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_88 = { 0f, 0f, 0f };
	vector3 vLocal_91 = { 0f, 0f, 0f };
	vector3 vLocal_94 = { 0f, 0f, 0f };
	float fLocal_97 = 0f;
	float fLocal_98[2] = { 0f, 0f };
	float fLocal_101 = 0f;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	vector3 vLocal_107 = { 0f, 0f, 0f };
	int iLocal_110 = 0;
	var uLocal_111[2] = { 0, 0 };
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	bool bLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	bool bLocal_122 = 0;
	int iLocal_123 = 0;
	bool bLocal_124 = 0;
	int iLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	vector3 vLocal_139 = { 0f, 0f, 0f };
	vector3 vLocal_142 = { 0f, 0f, 0f };
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	bool bLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	struct<6> Local_150 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_156 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_162 = 0;
	var uLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	bool bLocal_167 = 0;
	int iLocal_168 = 0;
	var uLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 16;
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
	int iVar0;
	
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
	iLocal_18 = 3;
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
	fLocal_47 = -1f;
	vLocal_107 = { 154.92f, 6841.12f, 19.14f };
	iLocal_125 = 200;
	vLocal_139 = { -1161.199f, 934.5912f, 196.7591f };
	vLocal_142 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_150, "", 24);
	if (HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!IS_PED_INJURED(uLocal_53))
		{
			if (IS_PED_IN_GROUP(uLocal_53))
			{
				REMOVE_PED_FROM_GROUP(uLocal_53);
			}
		}
		func_206();
	}
	if (func_164(ScriptParam_0.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_161(-1);
	}
	else
	{
		TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		WAIT(0);
		if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_131)
		{
			if (!func_160())
			{
				if (func_159())
				{
					func_206();
				}
			}
			_0x208784099002BC30("RE_BU", 0);
			switch (iLocal_48)
			{
				case 0:
					if (func_147())
					{
						func_206();
					}
					if (!iLocal_66)
					{
						func_146();
					}
					else
					{
						func_145();
					}
					if (bLocal_52)
					{
						iLocal_162 = 1;
						iLocal_48 = 1;
					}
					break;
				
				case 1:
					if (IS_PLAYER_PLAYING(PLAYER_ID()))
					{
						func_144();
						switch (iLocal_49)
						{
							case 0:
								func_134();
								iLocal_49 = 1;
								break;
							
							case 1:
								if ((!func_127(iLocal_54[0], &iLocal_128, &uLocal_127, uLocal_126, iLocal_129, 7f, 0) && !func_127(iLocal_54[1], &iLocal_128, &uLocal_127, uLocal_126, iLocal_129, 7f, 0)) && !func_126())
								{
									switch (iLocal_50)
									{
										case 0:
											func_125();
											if (IS_ENTITY_AT_COORD(PLAYER_PED_ID(), vLocal_78, 50f, 35f, 50f, 0, 1, 0))
											{
												func_124();
											}
											if (IS_ENTITY_AT_COORD(PLAYER_PED_ID(), vLocal_78, 80f, 65f, 50f, 0, 1, 0))
											{
												func_123();
											}
											if (!IS_ENTITY_DEAD(uLocal_58, 0))
											{
												if (IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), 281.9148f, 6816.345f, 4.3197f, 48.3924f, 6885.921f, 43.0037f, 226.5f, 0, 1, 0) || IS_ENTITY_AT_COORD(PLAYER_PED_ID(), vLocal_88 - Vector(0f, 0f, 7f), 20f, 15f, 50f, 0, 1, 0))
												{
													func_122();
													if (DOES_BLIP_EXIST(uLocal_114))
													{
														_0x75A16C3DA34F1245(uLocal_114, 0);
													}
													iLocal_64 = 0;
													while (iLocal_64 <= 1)
													{
														if (DOES_BLIP_EXIST(uLocal_111[iLocal_64]))
														{
															_0x75A16C3DA34F1245(uLocal_111[iLocal_64], 0);
														}
														iLocal_64++;
													}
													if (!func_160())
													{
														func_113(1);
													}
												}
											}
											break;
									}
								}
								else
								{
									func_122();
									iLocal_49 = 2;
								}
								break;
							
							case 2:
								if ((func_127(iLocal_54[0], &iLocal_128, &uLocal_127, uLocal_126, iLocal_129, 7f, 0) || func_127(iLocal_54[1], &iLocal_128, &uLocal_127, uLocal_126, iLocal_129, 7f, 0)) || iLocal_129)
								{
									iLocal_129 = 1;
									if (!func_160())
									{
										func_113(1);
									}
									if (DOES_BLIP_EXIST(uLocal_114))
									{
										_0x75A16C3DA34F1245(uLocal_114, 1);
									}
									iLocal_64 = 0;
									while (iLocal_64 <= 1)
									{
										if (DOES_BLIP_EXIST(uLocal_111[iLocal_64]))
										{
											_0x75A16C3DA34F1245(uLocal_111[iLocal_64], 1);
										}
										iLocal_64++;
									}
									switch (iLocal_128)
									{
										case 0:
											func_112();
											break;
										
										case 1:
											func_112();
											break;
										
										case 2:
											func_112();
											break;
										
										case 3:
											func_112();
											break;
										
										case 4:
											func_112();
											break;
										
										case 5:
											func_112();
											break;
										}
								}
								if (func_126())
								{
									iLocal_75 = 1;
									if (DOES_BLIP_EXIST(uLocal_114))
									{
										_0x75A16C3DA34F1245(uLocal_114, 1);
									}
									iLocal_64 = 0;
									while (iLocal_64 <= 1)
									{
										if (DOES_BLIP_EXIST(uLocal_111[iLocal_64]))
										{
											_0x75A16C3DA34F1245(uLocal_111[iLocal_64], 1);
										}
										iLocal_64++;
									}
									if (!func_111())
									{
										switch (iLocal_51)
										{
											case 1:
												func_108();
												break;
											
											case 3:
												func_107();
												break;
											
											case 4:
												func_106();
												break;
											
											case 5:
												func_104();
												WAIT(0);
												if (!IS_PED_INJURED(iLocal_54[0]))
												{
													func_102(iLocal_54[0], "GENERIC_WAR_CRY", 24);
												}
												else if (!IS_PED_INJURED(iLocal_54[1]))
												{
													func_102(iLocal_54[1], "GENERIC_WAR_CRY", 24);
												}
												func_112();
												break;
											
											case 6:
												func_104();
												WAIT(0);
												if (!IS_PED_INJURED(iLocal_54[0]))
												{
													func_102(iLocal_54[0], "GENERIC_SHOCKED_HIGH", 24);
												}
												else if (!IS_PED_INJURED(iLocal_54[1]))
												{
													func_102(iLocal_54[1], "GENERIC_SHOCKED_HIGH", 24);
												}
												func_112();
												break;
										}
									}
									else
									{
										func_104();
										WAIT(0);
										iVar0 = 0;
										while (iVar0 < iLocal_54)
										{
											if (!IS_PED_INJURED(iLocal_54[iVar0]))
											{
												PLAY_PAIN(iLocal_54[iVar0], 5, 0, 0);
												TASK_SMART_FLEE_PED(iLocal_54[iVar0], PLAYER_PED_ID(), 1000f, -1, 0, 0);
												SET_PED_KEEP_TASK(iLocal_54[iVar0], 1);
												if (DOES_ENTITY_EXIST(uLocal_60))
												{
													if (IS_ENTITY_ATTACHED(uLocal_60))
													{
														DETACH_ENTITY(uLocal_60, 1, 1);
													}
												}
												if (DOES_BLIP_EXIST(uLocal_111[iVar0]))
												{
													REMOVE_BLIP(&(uLocal_111[iVar0]));
												}
											}
											iVar0++;
										}
										iLocal_49 = 3;
									}
								}
								break;
							
							case 3:
								if (!bLocal_130)
								{
									func_101();
								}
								if (IS_PLAYER_PLAYING(PLAYER_ID()))
								{
									func_86();
								}
								break;
							
							case 4:
								func_85();
								if (!IS_ENTITY_AT_COORD(PLAYER_PED_ID(), vLocal_107, 100f, 100f, 100f, 1, 1, 0))
								{
									SET_WANTED_LEVEL_MULTIPLIER(1f);
									if (DOES_ENTITY_EXIST(iLocal_54[0]) && DOES_ENTITY_EXIST(iLocal_54[1]))
									{
										SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_54[0]));
										SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_54[1]));
									}
								}
								if (!DOES_ENTITY_EXIST(uLocal_57))
								{
									if (IS_ENTITY_AT_COORD(PLAYER_PED_ID(), vLocal_139, 200f, 200f, 200f, 1, 1, 0))
									{
										REQUEST_MODEL(joaat("s_m_m_highsec_01"));
										REQUEST_MODEL(joaat("granger"));
										if (HAS_MODEL_LOADED(joaat("s_m_m_highsec_01")) && HAS_MODEL_LOADED(joaat("granger")))
										{
											uLocal_59 = CREATE_VEHICLE(joaat("granger"), -1155.043f, 942.9685f, 197.4921f, 161.1247f, 1, 1, 0);
											SET_ENTITY_LOD_DIST(uLocal_59, 200);
											SET_VEHICLE_LOD_MULTIPLIER(uLocal_59, 1.5f);
											uLocal_57 = CREATE_PED_INSIDE_VEHICLE(uLocal_59, 26, joaat("s_m_m_highsec_01"), -1, 1, 1);
											SET_PED_COMPONENT_VARIATION(uLocal_57, 0, 0, 2, 0);
											SET_PED_COMPONENT_VARIATION(uLocal_57, 3, 0, 0, 0);
											SET_PED_COMPONENT_VARIATION(uLocal_57, 4, 0, 0, 0);
											GIVE_WEAPON_TO_PED(uLocal_57, joaat("weapon_pistol"), -1, 1, 1);
											SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_57, uLocal_177);
										}
									}
								}
								if (!IS_PED_INJURED(uLocal_53))
								{
									if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
									{
										if (GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0)) < 1)
										{
											if (!iLocal_132)
											{
												func_81(0);
												func_104();
												WAIT(0);
												func_70(&uLocal_178, "REBU2AU", "REBU2_WV", 4, 0, 0, 0);
												iLocal_132 = 1;
											}
										}
									}
									else
									{
										iLocal_132 = 0;
									}
									if (IS_ENTITY_AT_COORD(PLAYER_PED_ID(), vLocal_139, Global_22, 1, 1, 0) && IS_ENTITY_AT_ENTITY(uLocal_53, PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0))
									{
										if (IS_PED_IN_GROUP(uLocal_53))
										{
											if (DOES_BLIP_EXIST(uLocal_137))
											{
												REMOVE_BLIP(&uLocal_137);
											}
											if (DOES_BLIP_EXIST(uLocal_138))
											{
												REMOVE_BLIP(&uLocal_138);
											}
											if (func_69())
											{
												iLocal_49 = 5;
											}
											else
											{
												iLocal_49 = 6;
											}
										}
									}
									else
									{
										func_64();
										func_63();
										func_62();
										func_58();
										func_57();
										func_51();
										if (func_50(vLocal_139))
										{
											func_81(0);
											func_104();
											WAIT(0);
											func_70(&uLocal_178, "REBU2AU", "REBU2_CULT", 4, 0, 0, 0);
										}
										if (func_49())
										{
											func_81(0);
											func_104();
											WAIT(0);
											func_70(&uLocal_178, "REBU2AU", "REBU2_NEAR", 4, 0, 0, 0);
										}
									}
								}
								break;
							
							case 5:
								func_85();
								if (func_48(1, 0, 1))
								{
									func_47();
								}
								if (bLocal_124)
								{
									iLocal_49 = 8;
								}
								break;
							
							case 6:
								func_85();
								if (func_48(1, 0, 1))
								{
									func_46();
								}
								if (bLocal_124)
								{
									iLocal_49 = 8;
								}
								break;
							
							case 8:
								func_13();
								break;
							
							case 7:
								func_11();
								if (DOES_ENTITY_EXIST(uLocal_60))
								{
									if (IS_ENTITY_ATTACHED(uLocal_60))
									{
										if (!IS_PED_INJURED(iLocal_54[0]))
										{
											if (IS_ENTITY_PLAYING_ANIM(iLocal_54[0], "random@burial", "a_burial_stop", 3))
											{
												if (GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
												{
													DETACH_ENTITY(uLocal_60, 1, 1);
												}
											}
											else
											{
												DETACH_ENTITY(uLocal_60, 1, 1);
											}
										}
									}
								}
								if (IS_PED_INJURED(iLocal_54[0]) || IS_PED_INJURED(iLocal_54[1]))
								{
									bLocal_147 = true;
								}
								if (bLocal_147)
								{
									if (IS_VEHICLE_DRIVEABLE(uLocal_58, 0))
									{
										if (!IS_PED_INJURED(iLocal_54[0]))
										{
											_0xF1C03A5352243A30(iLocal_54[0]);
											if (_0x639431E895B9AA57(iLocal_54[0], uLocal_58, -1, 0, 0) || _0x639431E895B9AA57(iLocal_54[0], uLocal_58, 0, 0, 0))
											{
												if (!iLocal_164)
												{
													CLEAR_PED_TASKS(iLocal_54[0]);
													if (DOES_ENTITY_EXIST(uLocal_60))
													{
														if (IS_ENTITY_ATTACHED(uLocal_60))
														{
															DETACH_ENTITY(uLocal_60, 1, 1);
														}
													}
													OPEN_SEQUENCE_TASK(&uLocal_65);
													TASK_CLEAR_LOOK_AT(0);
													TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_58, -0.5f, 0.5f, 0f), PLAYER_PED_ID(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
													TASK_ENTER_VEHICLE(0, uLocal_58, -1, -1, 3f, 9, 0);
													TASK_VEHICLE_MISSION_PED_TARGET(0, uLocal_58, PLAYER_PED_ID(), 8, 30f, 262144, -1f, 10f, 1);
													CLOSE_SEQUENCE_TASK(uLocal_65);
													TASK_PERFORM_SEQUENCE(iLocal_54[0], uLocal_65);
													CLEAR_SEQUENCE_TASK(&uLocal_65);
													SET_PED_KEEP_TASK(iLocal_54[0], 1);
													_0x25367DE49D64CF16(uLocal_58, 1);
													iLocal_164 = 1;
												}
												else if (GET_SCRIPT_TASK_STATUS(iLocal_54[0], 242628503) == 1)
												{
													if (GET_SEQUENCE_PROGRESS(iLocal_54[0]) == 3)
													{
														if (!IS_ENTITY_AT_ENTITY(iLocal_54[0], PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0) && !IS_ENTITY_AT_COORD(iLocal_54[0], vLocal_88, 10f, 10f, 10f, 0, 1, 0))
														{
															SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_54[0]));
														}
													}
												}
											}
											else
											{
												TASK_COMBAT_PED(iLocal_54[0], PLAYER_PED_ID(), 0, 16);
												SET_PED_KEEP_TASK(iLocal_54[0], 1);
											}
										}
										if (!IS_PED_INJURED(iLocal_54[1]))
										{
											_0xF1C03A5352243A30(iLocal_54[1]);
											if (_0x639431E895B9AA57(iLocal_54[1], uLocal_58, -1, 0, 0) || _0x639431E895B9AA57(iLocal_54[1], uLocal_58, 0, 0, 0))
											{
												if (!iLocal_164)
												{
													CLEAR_PED_TASKS(iLocal_54[1]);
													OPEN_SEQUENCE_TASK(&uLocal_65);
													TASK_CLEAR_LOOK_AT(0);
													TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_58, -0.5f, 0.5f, 0f), PLAYER_PED_ID(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
													TASK_ENTER_VEHICLE(0, uLocal_58, -1, -1, 3f, 9, 0);
													TASK_VEHICLE_MISSION_PED_TARGET(0, uLocal_58, PLAYER_PED_ID(), 8, 30f, 262144, -1f, 10f, 1);
													CLOSE_SEQUENCE_TASK(uLocal_65);
													TASK_PERFORM_SEQUENCE(iLocal_54[1], uLocal_65);
													CLEAR_SEQUENCE_TASK(&uLocal_65);
													SET_PED_KEEP_TASK(iLocal_54[1], 1);
													_0x25367DE49D64CF16(uLocal_58, 1);
													iLocal_164 = 1;
												}
												else if (GET_SCRIPT_TASK_STATUS(iLocal_54[1], 242628503) == 1)
												{
													if (GET_SEQUENCE_PROGRESS(iLocal_54[1]) == 3)
													{
														if (!IS_ENTITY_AT_ENTITY(iLocal_54[1], PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0) && !IS_ENTITY_AT_COORD(iLocal_54[1], vLocal_88, 10f, 10f, 10f, 0, 1, 0))
														{
															SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_54[1]));
														}
													}
												}
											}
											else
											{
												TASK_COMBAT_PED(iLocal_54[1], PLAYER_PED_ID(), 0, 16);
												SET_PED_KEEP_TASK(iLocal_54[1], 1);
											}
										}
									}
								}
								break;
							
							case 9:
								break;
						}
						if ((func_10() && !func_9()) && iLocal_49 != 9)
						{
							if (!IS_PED_INJURED(uLocal_53))
							{
								if (IS_ENTITY_AT_COORD(uLocal_53, vLocal_142, 5f, 5f, 5f, 0, 1, 0))
								{
									func_8(0);
									WAIT(0);
									func_104();
									iLocal_49 = 9;
								}
							}
						}
						if (func_6())
						{
							if (DOES_ENTITY_EXIST(uLocal_53))
							{
								DELETE_PED(&uLocal_53);
							}
							func_13();
						}
						if (func_5())
						{
							func_4();
						}
						func_2();
						if (iLocal_49 != 3)
						{
							if (func_1())
							{
								TRIGGER_MUSIC_EVENT("RE6_BOTH_DEAD");
								if (!iLocal_74)
								{
									SETTIMERA(0);
									iLocal_106 = GET_GAME_TIMER() + 8500;
									iLocal_74 = 1;
								}
								if (!IS_PED_INJURED(uLocal_53))
								{
									if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), uLocal_53, 20f, 20f, 20f, 0, 1, 1))
									{
										if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
										{
											iLocal_49 = 3;
										}
									}
								}
							}
						}
						if (((iLocal_49 == 1 || iLocal_49 == 2) || iLocal_49 == 3) || iLocal_49 == 7)
						{
							if (!IS_PED_INJURED(uLocal_53))
							{
								if (!bLocal_130)
								{
									if (GET_SCRIPT_TASK_STATUS(uLocal_53, 1785177548) != 1 && GET_SCRIPT_TASK_STATUS(uLocal_53, 1785177548) != 0)
									{
										CLEAR_PED_TASKS_IMMEDIATELY(uLocal_53);
										uLocal_343 = CREATE_SYNCHRONIZED_SCENE(vLocal_78, -2f, -4f, 18f, 2);
										TASK_SYNCHRONIZED_SCENE(uLocal_53, uLocal_343, "random@burial", "b_burial", 1000f, -4f, 1, 24592, 1148846080, 0);
										PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_61[0], uLocal_343, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
										PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_61[1], uLocal_343, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
										SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_343, 1);
										SET_PED_KEEP_TASK(uLocal_53, 1);
									}
									if (IS_ENTITY_ON_FIRE(uLocal_53))
									{
										SET_ENABLE_HANDCUFFS(uLocal_53, 1);
										SET_ENABLE_BOUND_ANKLES(uLocal_53, 1);
										SET_ENTITY_HEALTH(uLocal_53, 0, 0);
									}
								}
								if ((HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(uLocal_53) || HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uLocal_53)) || (iLocal_125 - GET_ENTITY_HEALTH(uLocal_53)) >= 50)
								{
									SET_ENABLE_HANDCUFFS(uLocal_53, 1);
									SET_ENABLE_BOUND_ANKLES(uLocal_53, 1);
									SET_ENTITY_HEALTH(uLocal_53, 0, 0);
								}
								if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0) && !IS_ENTITY_DEAD(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0), 0))
								{
									if (GET_ENTITY_SPEED(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0)) < 5f)
									{
									}
									else if (IS_ENTITY_TOUCHING_ENTITY(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0), uLocal_53))
									{
										SET_ENABLE_HANDCUFFS(uLocal_53, 1);
										SET_ENABLE_BOUND_ANKLES(uLocal_53, 1);
										SET_ENTITY_HEALTH(uLocal_53, 0, 0);
									}
								}
								if (!IS_ENTITY_DEAD(uLocal_58, 0))
								{
									if (IS_ENTITY_TOUCHING_ENTITY(uLocal_58, uLocal_53))
									{
										SET_ENABLE_HANDCUFFS(uLocal_53, 1);
										SET_ENABLE_BOUND_ANKLES(uLocal_53, 1);
										SET_ENTITY_HEALTH(uLocal_53, 0, 0);
									}
								}
							}
						}
					}
					break;
			}
		}
		else
		{
			func_206();
		}
	}
}

int func_1()
{
	if (!bLocal_130)
	{
		if (!DOES_ENTITY_EXIST(iLocal_54[0]) && !DOES_ENTITY_EXIST(iLocal_54[1]))
		{
			return 1;
		}
		if (DOES_ENTITY_EXIST(iLocal_54[0]) && DOES_ENTITY_EXIST(iLocal_54[1]))
		{
			if (IS_PED_INJURED(iLocal_54[0]) && IS_PED_INJURED(iLocal_54[1]))
			{
				return 1;
			}
			if (IS_PED_HURT(iLocal_54[0]) && IS_PED_HURT(iLocal_54[1]))
			{
				return 1;
			}
		}
		if (DOES_ENTITY_EXIST(iLocal_54[0]) && !DOES_ENTITY_EXIST(iLocal_54[1]))
		{
			if (IS_PED_INJURED(iLocal_54[0]))
			{
				return 1;
			}
		}
		if (DOES_ENTITY_EXIST(iLocal_54[1]) && !DOES_ENTITY_EXIST(iLocal_54[0]))
		{
			if (IS_PED_INJURED(iLocal_54[1]))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_2()
{
	if (IS_PED_INJURED(iLocal_54[0]))
	{
		if (DOES_BLIP_EXIST(uLocal_111[0]))
		{
			if (DOES_ENTITY_EXIST(uLocal_60))
			{
				if (IS_ENTITY_ATTACHED(uLocal_60))
				{
					DETACH_ENTITY(uLocal_60, 1, 1);
				}
			}
			func_3(&uLocal_178, 4);
			REMOVE_BLIP(&(uLocal_111[0]));
		}
	}
	if (IS_PED_INJURED(iLocal_54[1]))
	{
		if (DOES_BLIP_EXIST(uLocal_111[1]))
		{
			func_3(&uLocal_178, 3);
			REMOVE_BLIP(&(uLocal_111[1]));
		}
	}
	if (IS_PED_INJURED(uLocal_53))
	{
		if (!IS_ENTITY_DEAD(uLocal_53, 0))
		{
		}
		if (DOES_BLIP_EXIST(uLocal_114))
		{
			func_3(&uLocal_178, 5);
			REMOVE_BLIP(&uLocal_114);
		}
	}
}

void func_3(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_4()
{
	TRIGGER_MUSIC_EVENT("RE6_END");
	func_206();
}

int func_5()
{
	if (IS_PED_INJURED(uLocal_53))
	{
		return 1;
	}
	return 0;
}

int func_6()
{
	if (Global_26001)
	{
		func_7(4);
		return 1;
	}
	return 0;
}

void func_7(int iParam0)
{
	Global_106551 = iParam0;
}

void func_8(int iParam0)
{
	Global_16877 = iParam0;
}

int func_9()
{
	if (Global_106565.f_24989.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_10()
{
	return Global_26000;
}

void func_11()
{
	if (!IS_PED_INJURED(uLocal_53))
	{
		if (!IS_PED_INJURED(iLocal_54[0]) || !IS_PED_INJURED(iLocal_54[1]))
		{
			if (!func_12())
			{
				switch (iLocal_168)
				{
					case 0:
						if (iLocal_106 < GET_GAME_TIMER())
						{
							if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (GET_GAME_TIMER() + GET_RANDOM_INT_IN_RANGE(3500, 5000));
								iLocal_168++;
							}
						}
						break;
					
					case 1:
						if (iLocal_106 < GET_GAME_TIMER())
						{
							if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (GET_GAME_TIMER() + GET_RANDOM_INT_IN_RANGE(3500, 5000));
								iLocal_168++;
							}
						}
						break;
					
					case 2:
						if (iLocal_106 < GET_GAME_TIMER())
						{
							if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (GET_GAME_TIMER() + GET_RANDOM_INT_IN_RANGE(3500, 5000));
								iLocal_168++;
							}
						}
						break;
					
					case 3:
						if (iLocal_106 < GET_GAME_TIMER())
						{
							if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (GET_GAME_TIMER() + GET_RANDOM_INT_IN_RANGE(3500, 5000));
								iLocal_168 = 0;
							}
						}
						break;
					}
				}
			}
	}
}

int func_12()
{
	if (Global_15866 != 0 || IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_13()
{
	while (!func_45())
	{
		WAIT(0);
	}
	if (!func_6())
	{
		if (func_44() == 0)
		{
			func_41(-1199050901, 6, 1, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_44() == 1)
		{
			func_41(1082655975, 6, 2, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_44() == 2)
		{
			func_41(-2100435596, 6, 4, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
	}
	SPECIAL_ABILITY_FILL_METER(PLAYER_ID(), 1);
	func_17(-1, 0);
	func_14();
	func_206();
}

void func_14()
{
	func_15();
}

int func_15()
{
	if (func_16(0))
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

int func_16(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_71838, 0);
}

void func_17(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_38(iParam0))
	{
		func_37(iParam0, iParam1);
		if (!func_36(51))
		{
			func_27("RE_REWARD", 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
		if (func_25(iParam0))
		{
			Global_106565.f_24989.f_2 = 3;
		}
		if (func_24(iParam0, iParam1) != 322)
		{
			func_18(func_24(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_106553 = iParam1;
		if (Global_106551 == 0)
		{
			if (((Global_106554 == 1 || Global_106554 == 5) || Global_106554 == 11) || Global_106554 == 25)
			{
				func_7(2);
			}
			else if ((Global_106554 == 26 || Global_106554 == 8) || Global_106554 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_18(int iParam0, var uParam1, var uParam2)
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
		func_22((891 + iParam0), 1, -1, 1);
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
		func_19();
	}
}

void func_19()
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
		func_21(13, FLOOR(Global_106565.f_10188.f_3853));
	}
	if (!DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_71590)
		{
			if (func_20() == 2 == 0 && !NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_15();
				}
			}
		}
	}
}

int func_20()
{
	return Global_25765;
}

int func_21(int iParam0, int iParam1)
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

int func_22(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_23();
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

int func_23()
{
	return Global_1312745;
}

int func_24(int iParam0, int iParam1)
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

int func_25(int iParam0)
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

void func_26(int iParam0)
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

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_29();
	}
}

void func_29()
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

int func_30()
{
	func_31();
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

void func_31()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		if (func_35(Global_106565.f_2357.f_539.f_4321) != GET_ENTITY_MODEL(PLAYER_PED_ID()))
		{
			iVar0 = func_34(PLAYER_PED_ID());
			if (func_33(iVar0) && (!func_32(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_33(Global_106565.f_2357.f_539.f_4321))
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

bool func_32(int iParam0)
{
	return Global_36425 == iParam0;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_36(int iParam0)
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

void func_37(int iParam0, int iParam1)
{
	SET_BIT(&(Global_106565.f_24989.f_8[iParam0]), iParam1);
}

int func_38(int iParam0)
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

int func_39()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_40(Var0);
	return uVar16;
}

int func_40(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_16(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (IS_BIT_SET(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_106565.f_7682.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_106565.f_7682.f_911 == Var0)
		{
			Global_106565.f_7682.f_911 = -1;
		}
		Var0.f_3 = func_43(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (GET_GAME_TIMER() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		CLEAR_BIT(&(Var0.f_1), 1);
		CLEAR_BIT(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			SET_BIT(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			SET_BIT(&(Var0.f_1), 10);
		}
		Global_106565.f_7682[Global_106565.f_7682.f_136 /*15*/] = { Var0 };
		Global_106565.f_7682.f_136++;
		iVar15 = 0;
		while (iVar15 < 3)
		{
			if (IS_BIT_SET(iParam2, iVar15))
			{
				func_42(iVar15);
			}
			iVar15++;
		}
		return 1;
	}
	return 0;
}

void func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_33(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_7682.f_136)
	{
		if (IS_BIT_SET(Global_106565.f_7682[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_106565.f_7682[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_106565.f_7682[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_106565.f_7682.f_764)
	{
		if (IS_BIT_SET(Global_106565.f_7682.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_106565.f_7682.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_106565.f_7682.f_919[iParam0] = iVar1;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_44()
{
	func_31();
	return Global_106565.f_2357.f_539.f_4321;
}

int func_45()
{
	return 1;
}

void func_46()
{
	switch (iLocal_136)
	{
		case 0:
			if (!IS_PED_INJURED(uLocal_53) && IS_VEHICLE_DRIVEABLE(uLocal_59, 0))
			{
				if (IS_PED_IN_GROUP(uLocal_53))
				{
					REMOVE_PED_FROM_GROUP(uLocal_53);
				}
				SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_53, 0);
				SET_PED_CAN_BE_TARGETTED(uLocal_53, 1);
				OPEN_SEQUENCE_TASK(&uLocal_65);
				TASK_LOOK_AT_ENTITY(0, PLAYER_PED_ID(), 5000, 2048, 2);
				TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER_PED_ID(), 0);
				TASK_ENTER_VEHICLE(0, uLocal_59, -1, 0, 1f, 1, 0);
				CLOSE_SEQUENCE_TASK(uLocal_65);
				TASK_PERFORM_SEQUENCE(uLocal_53, uLocal_65);
				CLEAR_SEQUENCE_TASK(&uLocal_65);
				SET_PED_KEEP_TASK(uLocal_53, 1);
				func_104();
				WAIT(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
			}
			iLocal_136++;
			break;
		
		case 1:
			if (IS_VEHICLE_DRIVEABLE(uLocal_59, 0))
			{
				if (IS_PED_IN_VEHICLE(uLocal_53, uLocal_59, 0))
				{
					if (!IS_PED_INJURED(uLocal_57))
					{
						TASK_VEHICLE_DRIVE_WANDER(uLocal_57, uLocal_58, 10f, 786599);
						SET_PED_KEEP_TASK(uLocal_57, 1);
					}
					_0x25367DE49D64CF16(uLocal_59, 1);
					iLocal_136++;
				}
			}
			break;
		
		case 2:
			iLocal_136++;
			break;
		
		case 3:
			iLocal_136++;
			break;
		
		case 4:
			if (!func_12())
			{
				iLocal_136++;
			}
			break;
		
		case 5:
			SETTIMERA(0);
			func_13();
			break;
	}
}

void func_47()
{
	switch (iLocal_136)
	{
		case 0:
			SET_RELATIONSHIP_BETWEEN_GROUPS(255, uLocal_177, 1862763509);
			SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, uLocal_177);
			if (!IS_ENTITY_DEAD(GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				_SET_VEHICLE_HALT(GET_PLAYERS_LAST_VEHICLE(), 5f, 2, 0);
				if (!IS_PED_INJURED(uLocal_53) && IS_VEHICLE_DRIVEABLE(uLocal_59, 0))
				{
					if (IS_PED_IN_GROUP(uLocal_53))
					{
						REMOVE_PED_FROM_GROUP(uLocal_53);
					}
					SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_53, 0);
					SET_PED_CAN_BE_TARGETTED(uLocal_53, 1);
					OPEN_SEQUENCE_TASK(&uLocal_65);
					TASK_LOOK_AT_ENTITY(0, PLAYER_PED_ID(), 5000, 2048, 2);
					TASK_ENTER_VEHICLE(0, uLocal_59, -1, 0, 1f, 1, 0);
					CLOSE_SEQUENCE_TASK(uLocal_65);
					TASK_PERFORM_SEQUENCE(uLocal_53, uLocal_65);
					CLEAR_SEQUENCE_TASK(&uLocal_65);
					SET_PED_KEEP_TASK(uLocal_53, 1);
					func_104();
					WAIT(0);
					func_70(&uLocal_178, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
				}
			}
			WAIT(2700);
			SET_PLAYER_CONTROL(PLAYER_ID(), 1, 0);
			iLocal_136++;
			break;
		
		case 1:
			if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0) && !IS_PED_ON_ANY_BIKE(PLAYER_PED_ID()))
			{
				if (!IS_ENTITY_DEAD(GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					if (!IS_VEHICLE_DOOR_DAMAGED(GET_PLAYERS_LAST_VEHICLE(), 1))
					{
						if (GET_VEHICLE_DOOR_ANGLE_RATIO(GET_PLAYERS_LAST_VEHICLE(), 1) > 0.1f)
						{
							if (func_44() == 0)
							{
								func_70(&uLocal_178, "REBU2AU", "REBU2_DOOR0", 4, 0, 0, 0);
							}
							if (func_44() == 1)
							{
								func_70(&uLocal_178, "REBU2AU", "REBU2_DOOR1", 4, 0, 0, 0);
							}
							if (func_44() == 2)
							{
								func_70(&uLocal_178, "REBU2AU", "REBU2_DOOR2", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			iLocal_136++;
			break;
		
		case 2:
			if (IS_VEHICLE_DRIVEABLE(uLocal_59, 0))
			{
				if (IS_PED_IN_VEHICLE(uLocal_53, uLocal_59, 0))
				{
					if (!IS_PED_INJURED(uLocal_57))
					{
						TASK_VEHICLE_DRIVE_WANDER(uLocal_57, uLocal_59, 10f, 786599);
						SET_PED_KEEP_TASK(uLocal_57, 1);
					}
					_0x25367DE49D64CF16(uLocal_59, 1);
					iLocal_136++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				bLocal_124 = true;
			}
			break;
	}
}

int func_48(bool bParam0, bool bParam1, bool bParam2)
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

int func_49()
{
	if (func_44() == 2)
	{
		if (func_10())
		{
			if (GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, GET_ENTITY_COORDS(GET_PLAYER_PED(GET_PLAYER_INDEX()), 0), 1) < 400f)
			{
				if (!Global_26005)
				{
					TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_26005 = 1;
					if (!Global_26004)
					{
						Global_26004 = 1;
						return 1;
					}
				}
			}
			else if (Global_26005)
			{
				TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_26005 = 0;
			}
		}
	}
	return 0;
}

int func_50(vector3 vParam0)
{
	if (func_44() == 2)
	{
		if (func_10() && !Global_26003)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = VDIST(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), vParam0);
			}
			if (VDIST(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), vParam0) > (fLocal_47 + 200f) || GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, GET_ENTITY_COORDS(GET_PLAYER_PED(GET_PLAYER_INDEX()), 0), 1) < 400f)
			{
				Global_26003 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_51()
{
	if (!IS_PED_INJURED(uLocal_53))
	{
		if ((((((func_55("REBU2_LV2_2") || func_55("REBU2_LV2_3")) || func_55("REBU2_LV2_4")) || func_55("REBU2_LV2_5")) || func_55("REBU2_LV2_6")) || func_55("REBU2_LV2_7")) || func_55("REBU2_LV2_8"))
		{
			TASK_USE_MOBILE_PHONE(uLocal_53, 1, 1);
			TASK_CLEAR_LOOK_AT(uLocal_53);
		}
		if (func_55("REBU2_LV2_9") || iLocal_72 > 1)
		{
			TASK_USE_MOBILE_PHONE(uLocal_53, 0, 1);
		}
	}
	if (func_69() && !func_12())
	{
		if (!func_52())
		{
			func_81(1);
		}
		switch (iLocal_72)
		{
			case 0:
				func_70(&uLocal_178, "REBU2AU", "REBU2_LV2", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 1:
				iLocal_73 = GET_GAME_TIMER() + 1500;
				iLocal_72++;
				break;
			
			case 2:
				if (iLocal_73 < GET_GAME_TIMER())
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT0", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			
			case 3:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT0M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT0F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT0T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 4:
				iLocal_73 = GET_GAME_TIMER() + 500;
				iLocal_72++;
				break;
			
			case 5:
				if (iLocal_73 < GET_GAME_TIMER())
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT1", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			
			case 6:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT1M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT1F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT1T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 7:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT2", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 8:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT2M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT2F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT2T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 9:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT3", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 10:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT3M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT3F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT3T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 11:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT4", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 12:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT4M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT4F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT4T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 13:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT5", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 14:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT5M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT5F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT5T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 15:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT6", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 16:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT6M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT6F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT6T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 17:
				iLocal_73 = GET_GAME_TIMER() + 1000;
				iLocal_72++;
				break;
			
			case 18:
				if (iLocal_73 < GET_GAME_TIMER())
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT7", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			
			case 19:
				iLocal_73 = GET_GAME_TIMER() + 2500;
				iLocal_72++;
				break;
			
			case 20:
				if (iLocal_73 < GET_GAME_TIMER())
				{
					if (func_44() == 0)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_BANT7M", 4, 0, 0, 0);
					}
					else if (func_44() == 1)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_BANT7F", 4, 0, 0, 0);
					}
					else if (func_44() == 2)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_BANT7T", 4, 0, 0, 0);
					}
					iLocal_72++;
				}
				break;
			}
	}
}

int func_52()
{
	if (((((((((func_53("REBU2_WV") || func_53("REBU2_UNS1")) || func_53("REBU2_UNS2")) || func_53("REBU2_CULT")) || func_53("REBU2_NEAR")) || func_53("REBU2_WRONG")) || func_53("REBU2_STOP")) || func_53("REBU2_GETOUT")) || func_53("REBU2_JACK")) || func_53("REBU2_SHOOT"))
	{
		return 1;
	}
	return 0;
}

int func_53(char* sParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_54()}, 4);
		if (ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_54()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		return Global_15485;
	}
	return Var0;
}

int func_55(char* sParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_56()}, 4);
		if (ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_56()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		iVar6 = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_16876);
		if (iVar6 > -1)
		{
			return Global_14734[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_57()
{
	if (!IS_PED_INJURED(uLocal_53))
	{
		if (!iLocal_133)
		{
			if (!IS_ENTITY_DEAD(GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				if (!IS_PED_IN_VEHICLE(PLAYER_PED_ID(), GET_PLAYERS_LAST_VEHICLE(), 1) && IS_PED_IN_VEHICLE(uLocal_53, GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					if (!func_53("REBU2_LV2"))
					{
						func_81(0);
						func_104();
						WAIT(0);
						func_70(&uLocal_178, "REBU2AU", "REBU2_GETOUT", 4, 0, 0, 0);
						iLocal_133 = 1;
					}
				}
			}
		}
		else if (!IS_ENTITY_DEAD(GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (IS_PED_IN_VEHICLE(PLAYER_PED_ID(), GET_PLAYERS_LAST_VEHICLE(), 0) && IS_PED_IN_VEHICLE(uLocal_53, GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				iLocal_133 = 0;
			}
		}
		if (!iLocal_134)
		{
			if (IS_PED_JACKING(PLAYER_PED_ID()))
			{
				func_81(0);
				func_104();
				WAIT(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_JACK", 4, 0, 0, 0);
				iLocal_134 = 1;
			}
		}
		else if (!IS_PED_JACKING(PLAYER_PED_ID()))
		{
			iLocal_134 = 0;
		}
		if (!iLocal_135)
		{
			if (IS_PED_SHOOTING(PLAYER_PED_ID()))
			{
				func_81(0);
				func_104();
				WAIT(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_SHOOT", 4, 0, 0, 0);
				iLocal_135 = 1;
			}
		}
		else if (IS_PED_SHOOTING(PLAYER_PED_ID()))
		{
			iLocal_135 = 0;
		}
	}
}

void func_58()
{
	if (!IS_PED_INJURED(uLocal_53))
	{
		if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1))
		{
			if (!func_61())
			{
				if (IS_PED_IN_GROUP(uLocal_53))
				{
					REMOVE_PED_FROM_GROUP(uLocal_53);
				}
				if (GET_SCRIPT_TASK_STATUS(uLocal_53, 1227113341) != 1 && GET_SCRIPT_TASK_STATUS(uLocal_53, 1227113341) != 0)
				{
					TASK_GO_TO_ENTITY(uLocal_53, PLAYER_PED_ID(), -1, 6f, 1073741824, 1073741824, 0);
				}
				if (IS_PED_IN_ANY_VEHICLE(uLocal_53, 0))
				{
					TASK_LEAVE_ANY_VEHICLE(uLocal_53, 0, 4194304);
				}
				if (!iLocal_132)
				{
					func_81(0);
					func_104();
					WAIT(0);
					iLocal_132 = 1;
					if (!func_60())
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_UNS1", 4, 0, 0, 0);
					}
					else
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_UNS2", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				iLocal_132 = 0;
				if (((GET_SCRIPT_TASK_STATUS(uLocal_53, 1227113341) == 1 || GET_SCRIPT_TASK_STATUS(uLocal_53, 1227113341) == 0) || GET_SCRIPT_TASK_STATUS(uLocal_53, 242628503) == 1) || GET_SCRIPT_TASK_STATUS(uLocal_53, 242628503) == 0)
				{
					CLEAR_PED_TASKS(uLocal_53);
				}
			}
		}
		else if (((!IS_PED_IN_GROUP(uLocal_53) && !IS_PED_IN_ANY_VEHICLE(uLocal_53, 0)) && GET_SCRIPT_TASK_STATUS(uLocal_53, 242628503) != 1) && GET_SCRIPT_TASK_STATUS(uLocal_53, 242628503) != 0)
		{
			SET_PED_AS_GROUP_MEMBER(uLocal_53, func_59());
			SET_PED_NEVER_LEAVES_GROUP(uLocal_53, 1);
			SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_53, 0);
		}
	}
}

var func_59()
{
	return GET_PLAYER_GROUP(GET_PLAYER_INDEX());
}

int func_60()
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

int func_61()
{
	if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		if (IS_VEHICLE_DRIVEABLE(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0), 0))
		{
			if (((((!IS_PED_IN_ANY_HELI(PLAYER_PED_ID()) && !IS_PED_IN_ANY_PLANE(PLAYER_PED_ID())) && !IS_PED_IN_ANY_BOAT(PLAYER_PED_ID())) && !IS_PED_IN_ANY_SUB(PLAYER_PED_ID())) && !IS_PED_IN_ANY_TRAIN(PLAYER_PED_ID())) && !IS_PED_IN_MODEL(PLAYER_PED_ID(), joaat("rhino")))
			{
				if (GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1))
	{
		if (IS_VEHICLE_DRIVEABLE(SET_EXCLUSIVE_PHONE_RELATIONSHIPS(PLAYER_PED_ID()), 0))
		{
			if ((((!IS_THIS_MODEL_A_HELI(GET_ENTITY_MODEL(SET_EXCLUSIVE_PHONE_RELATIONSHIPS(PLAYER_PED_ID()))) && !IS_THIS_MODEL_A_PLANE(GET_ENTITY_MODEL(SET_EXCLUSIVE_PHONE_RELATIONSHIPS(PLAYER_PED_ID())))) && !IS_THIS_MODEL_A_BOAT(GET_ENTITY_MODEL(SET_EXCLUSIVE_PHONE_RELATIONSHIPS(PLAYER_PED_ID())))) && !IS_THIS_MODEL_A_TRAIN(GET_ENTITY_MODEL(SET_EXCLUSIVE_PHONE_RELATIONSHIPS(PLAYER_PED_ID())))) && GET_ENTITY_MODEL(SET_EXCLUSIVE_PHONE_RELATIONSHIPS(PLAYER_PED_ID())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_62()
{
	if (!IS_PED_INJURED(uLocal_53))
	{
		if (IS_PED_ON_FOOT(uLocal_53))
		{
			if (!iLocal_170)
			{
				iLocal_171 = GET_GAME_TIMER();
				iLocal_170 = 1;
			}
			else
			{
				iLocal_172 = GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_170 = 0;
		}
	}
	if ((iLocal_172 - iLocal_171) > 180000)
	{
		if (!IS_PED_INJURED(uLocal_53))
		{
			if (IS_PED_IN_GROUP(uLocal_53))
			{
				REMOVE_PED_FROM_GROUP(uLocal_53);
				if (IS_ENTITY_AT_COORD(uLocal_53, vLocal_139, 100f, 100f, 100f, 0, 1, 0))
				{
					TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_53, 1740.797f, 4648.756f, 42.6529f, 1f, -1, 1048576000, 0, 1193033728);
					SET_PED_KEEP_TASK(uLocal_53, 1);
				}
				func_104();
				WAIT(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_WK", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_63()
{
	if (IS_PED_STOPPED(PLAYER_PED_ID()))
	{
		if (!iLocal_173)
		{
			iLocal_174 = GET_GAME_TIMER();
			iLocal_173 = 1;
		}
		else
		{
			iLocal_175 = GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_173 = 0;
	}
	if ((iLocal_175 - iLocal_174) > 120000)
	{
		if (!IS_PED_INJURED(uLocal_53))
		{
			if (IS_PED_IN_GROUP(uLocal_53))
			{
				REMOVE_PED_FROM_GROUP(uLocal_53);
				if (IS_ENTITY_AT_COORD(uLocal_53, vLocal_139, 100f, 100f, 100f, 0, 1, 0))
				{
					TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_53, vLocal_139, 1f, -1, 1048576000, 0, 1193033728);
					SET_PED_KEEP_TASK(uLocal_53, 1);
				}
				else
				{
					TASK_LEAVE_ANY_VEHICLE(uLocal_53, 0, 4194304);
				}
				func_104();
				WAIT(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_QM", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_64()
{
	if (!IS_PED_INJURED(uLocal_53))
	{
		if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), uLocal_53, 8f, 8f, 8f, 0, 1, 0) || IS_PED_IN_ANY_TAXI(PLAYER_PED_ID()))
		{
			if ((IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0) && !IS_PED_IN_VEHICLE(uLocal_53, GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0), 0)) && !IS_PED_IN_ANY_TAXI(PLAYER_PED_ID()))
			{
				if (!DOES_BLIP_EXIST(uLocal_114))
				{
					uLocal_114 = func_67(uLocal_53, 0, 145);
				}
				if (DOES_BLIP_EXIST(uLocal_137))
				{
					REMOVE_BLIP(&uLocal_137);
				}
			}
			else
			{
				if (!IS_PED_ON_FOOT(PLAYER_PED_ID()))
				{
					if (DOES_BLIP_EXIST(uLocal_114))
					{
						REMOVE_BLIP(&uLocal_114);
					}
				}
				if (!DOES_BLIP_EXIST(uLocal_137))
				{
					uLocal_137 = func_65(vLocal_139, 1);
				}
			}
		}
		else if (!DOES_BLIP_EXIST(uLocal_114))
		{
			uLocal_114 = func_67(uLocal_53, 0, 145);
		}
		if (!IS_PED_IN_GROUP(uLocal_53))
		{
			if (!IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), uLocal_53, 8f, 8f, 8f, 0, 1, 0))
			{
				CLEAR_PED_TASKS(uLocal_53);
				SET_PED_AS_GROUP_MEMBER(uLocal_53, func_59());
				SET_PED_NEVER_LEAVES_GROUP(uLocal_53, 1);
				SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_53, 0);
			}
			if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1))
			{
				CLEAR_PED_TASKS(uLocal_53);
				SET_PED_AS_GROUP_MEMBER(uLocal_53, func_59());
				SET_PED_NEVER_LEAVES_GROUP(uLocal_53, 1);
				SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_53, 0);
			}
		}
		if (!IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), uLocal_53, 150f, 150f, 150f, 0, 1, 0))
		{
			func_4();
		}
	}
}

var func_65(vector3 vParam0, int iParam3)
{
	var uVar0;
	
	uVar0 = ADD_BLIP_FOR_COORD(vParam0);
	SET_BLIP_SCALE(uVar0, func_66(NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	SET_BLIP_ROUTE(uVar0, iParam3);
	return uVar0;
}

float func_66(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

var func_67(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_68(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && DOES_BLIP_EXIST(uVar0)) && DOES_TEXT_LABEL_EXIST(&(Global_106565.f_28044[iParam2 /*29*/].f_3)))
	{
		SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_106565.f_28044[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_68(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = ADD_BLIP_FOR_ENTITY(uParam0);
	if (IS_ENTITY_A_VEHICLE(uParam0))
	{
		SET_BLIP_SCALE(uVar0, func_66(NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		SET_BLIP_SCALE(uVar0, func_66(NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (IS_ENTITY_AN_OBJECT(uParam0))
	{
		SET_BLIP_SCALE(uVar0, func_66(NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_69()
{
	if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		uLocal_169 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
		if (IS_VEHICLE_DRIVEABLE(uLocal_169, 0))
		{
			if (!IS_PED_INJURED(uLocal_53))
			{
				if (IS_PED_SITTING_IN_VEHICLE(uLocal_53, uLocal_169))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_70(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_80(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_71(sParam2, iParam3, 0);
}

int func_71(char* sParam0, int iParam1, bool bParam2)
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
					func_79();
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
		if (func_78(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_77();
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
				func_76();
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
				if (func_75())
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
			if (func_74())
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
			func_73();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_72();
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
		func_79();
	}
	return 0;
}

void func_72()
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

void func_73()
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

int func_74()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_75()
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

void func_76()
{
	if (func_32(14))
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
		Global_14553 = func_44();
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

void func_77()
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

bool func_78(int iParam0, int iParam1)
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

void func_79()
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

void func_80(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_81(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_149)
		{
			if (!IS_STRING_NULL_OR_EMPTY(&Local_156))
			{
				if (func_84(&uLocal_178, "REBU2AU", &Local_156, &Local_150, 8, 0, 0))
				{
					iLocal_149 = 0;
				}
			}
			else
			{
				iLocal_149 = 0;
			}
		}
	}
	else if ((!iLocal_149 && func_12()) && !func_52())
	{
		Local_156 = { func_54() };
		Local_150 = { func_56() };
		func_82();
		iLocal_149 = 1;
	}
}

void func_82()
{
	Global_14732 = 0;
	func_83();
}

void func_83()
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

bool func_84(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_80(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15873 = 0;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 1;
	StringCopy(&Global_16870, sParam3, 24);
	Global_2621441 = 0;
	return func_71(sParam2, iParam4, 0);
}

void func_85()
{
	if (DOES_ENTITY_EXIST(uLocal_53))
	{
		if (!IS_PED_INJURED(uLocal_53))
		{
			SET_PED_RESET_FLAG(uLocal_53, 394, 1);
		}
		if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_53, PLAYER_PED_ID(), 1))
		{
			if (!IS_PED_INJURED(uLocal_53))
			{
				TASK_SMART_FLEE_PED(uLocal_53, PLAYER_PED_ID(), 150f, -1, 0, 0);
				SET_PED_KEEP_TASK(uLocal_53, 1);
			}
			if (!IS_PED_INJURED(uLocal_57))
			{
				SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_177, 1862763509);
				TASK_COMBAT_PED(uLocal_57, PLAYER_PED_ID(), 0, 16);
				SET_PED_KEEP_TASK(uLocal_57, 1);
			}
			func_104();
			WAIT(0);
			func_70(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_51 = 4;
		}
		if (DOES_ENTITY_EXIST(uLocal_57))
		{
			if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_57, PLAYER_PED_ID(), 1))
			{
				if (!IS_PED_INJURED(uLocal_53))
				{
					TASK_SMART_FLEE_PED(uLocal_53, PLAYER_PED_ID(), 150f, -1, 0, 0);
					SET_PED_KEEP_TASK(uLocal_53, 1);
				}
				if (!IS_PED_INJURED(uLocal_57))
				{
					SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_177, 1862763509);
					TASK_COMBAT_PED(uLocal_57, PLAYER_PED_ID(), 0, 16);
					SET_PED_KEEP_TASK(uLocal_57, 1);
				}
				func_104();
				WAIT(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
				func_4();
				iLocal_51 = 4;
			}
		}
	}
	if (!IS_PED_INJURED(uLocal_53))
	{
		if (GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) > 1)
		{
			TASK_SMART_FLEE_PED(uLocal_53, PLAYER_PED_ID(), 150f, -1, 0, 0);
			SET_PED_KEEP_TASK(uLocal_53, 1);
			func_104();
			WAIT(0);
			func_70(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_51 = 4;
		}
	}
}

void func_86()
{
	int iVar0;
	
	if (!IS_PED_INJURED(uLocal_53))
	{
		if ((IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), uLocal_53, 1.2f, 1.2f, 5f, 0, 1, 0) && IS_PED_ON_FOOT(PLAYER_PED_ID())) && !IS_PED_RAGDOLL(PLAYER_PED_ID()))
		{
			if (func_48(1, 0, 1))
			{
				bLocal_130 = true;
				if (!iLocal_115)
				{
					func_93(1, 1, 1, 0, 0, 0);
					SET_PLAYER_CONTROL(PLAYER_ID(), 0, 24);
					CLEAR_HELP(1);
					DISPLAY_HUD(0);
					DISPLAY_RADAR(0);
					HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER_PED_ID(), 1);
					if (DOES_ENTITY_EXIST(GET_PLAYERS_LAST_VEHICLE()))
					{
						SET_ENTITY_AS_MISSION_ENTITY(GET_PLAYERS_LAST_VEHICLE(), 1, 0);
						if (IS_ENTITY_ON_FIRE(GET_PLAYERS_LAST_VEHICLE()))
						{
							func_92(GET_PLAYERS_LAST_VEHICLE());
							SET_VEHICLE_ENGINE_HEALTH(GET_PLAYERS_LAST_VEHICLE(), 200f);
						}
						if (IS_ENTITY_AT_ENTITY(GET_PLAYERS_LAST_VEHICLE(), uLocal_53, 5f, 5f, 5f, 0, 1, 0) || IS_ENTITY_AT_COORD(GET_PLAYERS_LAST_VEHICLE(), vLocal_88, 5f, 5f, 5f, 0, 1, 0))
						{
							SET_ENTITY_COORDS(GET_PLAYERS_LAST_VEHICLE(), GET_ENTITY_COORDS(uLocal_53, 1) - Vector(0f, 3f, 5f), 0, 0, 0, 1);
							if (!IS_ENTITY_DEAD(GET_PLAYERS_LAST_VEHICLE(), 0))
							{
								SET_VEHICLE_ON_GROUND_PROPERLY(GET_PLAYERS_LAST_VEHICLE(), 1084227584);
							}
						}
					}
					if (DOES_ENTITY_EXIST(uLocal_58))
					{
						if (IS_ENTITY_ON_FIRE(uLocal_58))
						{
							func_92(uLocal_58);
							SET_VEHICLE_ENGINE_HEALTH(uLocal_58, 200f);
						}
						if (IS_ENTITY_AT_ENTITY(uLocal_58, uLocal_53, 8f, 8f, 8f, 0, 1, 0))
						{
							SET_ENTITY_COORDS(uLocal_58, vLocal_88, 0, 0, 0, 1);
							if (!IS_ENTITY_DEAD(uLocal_58, 0))
							{
								SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_58, 1084227584);
							}
						}
					}
					if (!IS_PED_INJURED(uLocal_53))
					{
						uLocal_169 = GET_CLOSEST_VEHICLE(GET_ENTITY_COORDS(uLocal_53, 1), 5f, 0, 2);
						if (!IS_ENTITY_DEAD(uLocal_169, 0))
						{
							if (IS_ENTITY_ON_FIRE(uLocal_169))
							{
								func_92(uLocal_169);
								SET_VEHICLE_ENGINE_HEALTH(uLocal_169, 200f);
							}
							SET_ENTITY_COORDS(uLocal_169, GET_ENTITY_COORDS(uLocal_53, 1) + Vector(0f, 5f, 5f), 1, 0, 0, 1);
						}
					}
					STOP_FIRE_IN_RANGE(vLocal_78, 10f);
					CLEAR_AREA_OF_PROJECTILES(vLocal_78, 10f, 0);
					CLEAR_AREA_OF_VEHICLES(vLocal_78, 4.5f, 0, 0, 0, 0, 0, 0);
					SET_ENTITY_COORDS(uLocal_53, vLocal_78, 1, 0, 0, 1);
					SET_ENTITY_COORDS(PLAYER_PED_ID(), vLocal_78, 1, 0, 0, 1);
					if (!IS_PED_INJURED(uLocal_53))
					{
					}
					iVar0 = 0;
					while (iVar0 < iLocal_54)
					{
						if (DOES_ENTITY_EXIST(iLocal_54[iVar0]))
						{
							if (IS_ENTITY_AT_COORD(iLocal_54[iVar0], GET_ENTITY_COORDS(uLocal_53, 0), 1.5f, 1.5f, 1.5f, 0, 1, 0))
							{
								DELETE_PED(&(iLocal_54[iVar0]));
							}
						}
						iVar0++;
					}
					if (!IS_PED_INJURED(uLocal_53))
					{
						uLocal_343 = CREATE_SYNCHRONIZED_SCENE(163.449f, 6839.993f, 18.88f, 0f, 0f, 0f, 2);
						uLocal_77 = CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
						PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_77, uLocal_343, "untie_cam", "random@burial");
						CLEAR_PED_TASKS_IMMEDIATELY(PLAYER_PED_ID());
						SET_ENTITY_COORDS(PLAYER_PED_ID(), 162.6699f, 6839.238f, 18.8314f, 0, 0, 0, 1);
						SET_ENTITY_HEADING(PLAYER_PED_ID(), 18.2311f);
						SET_ENTITY_HEALTH(uLocal_53, 200, 0);
						SET_ENABLE_HANDCUFFS(uLocal_53, 0);
						SET_ENABLE_BOUND_ANKLES(uLocal_53, 0);
						CLEAR_PED_TASKS_IMMEDIATELY(uLocal_53);
						TASK_SYNCHRONIZED_SCENE(uLocal_53, uLocal_343, "random@burial", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
						_0x2208438012482A1A(uLocal_53, 0, 0);
						TASK_SYNCHRONIZED_SCENE(PLAYER_PED_ID(), uLocal_343, "random@burial", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
						_0x2208438012482A1A(PLAYER_PED_ID(), 0, 0);
						PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_61[0], uLocal_343, "untie_legstie", "random@burial", 1000f, -1000f, 0, 1148846080);
						PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_61[1], uLocal_343, "untie_wristtie", "random@burial", 1000f, -1000f, 0, 1148846080);
						SET_CAM_ACTIVE(uLocal_77, 1);
						RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						iLocal_120 = GET_GAME_TIMER();
						iLocal_115 = 1;
					}
				}
			}
		}
	}
	if (iLocal_115 && !iLocal_117)
	{
		HIDE_HUD_AND_RADAR_THIS_FRAME();
		if (IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_343))
		{
			if ((GET_SYNCHRONIZED_SCENE_PHASE(uLocal_343) > 0.115f && GET_SYNCHRONIZED_SCENE_PHASE(uLocal_343) < 0.12f) || (GET_SYNCHRONIZED_SCENE_PHASE(uLocal_343) > 0.355f && GET_SYNCHRONIZED_SCENE_PHASE(uLocal_343) < 0.36f))
			{
				PLAY_SOUND_FRONTEND(-1, "ROPE_CUT", "ROPE_CUT_SOUNDSET", 1);
			}
			if (GET_SYNCHRONIZED_SCENE_PHASE(uLocal_343) > 0.6f)
			{
				if (!iLocal_116)
				{
					func_104();
					WAIT(0);
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_UNT", 4, 0, 0, 0))
					{
						iLocal_116 = 1;
					}
				}
			}
		}
		iLocal_119 = GET_GAME_TIMER();
		if (((iLocal_119 - iLocal_120) > 9700 && !iLocal_123) && GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
		{
			_START_SCREEN_EFFECT("CamPushInNeutral", 0, 0);
			PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			iLocal_123 = 1;
		}
		if ((iLocal_119 - iLocal_120) > 10000)
		{
			iLocal_117 = 1;
		}
		if (func_90(1000))
		{
			func_104();
			DO_SCREEN_FADE_OUT(800);
			while (IS_SCREEN_FADING_OUT())
			{
				WAIT(0);
			}
			iLocal_117 = 1;
			bLocal_118 = true;
		}
	}
	if (iLocal_117 && !bLocal_122)
	{
		DISPLAY_HUD(1);
		DISPLAY_RADAR(1);
		SET_SYNCHRONIZED_SCENE_PHASE(uLocal_343, 1f);
		CLEAR_PED_TASKS_IMMEDIATELY(PLAYER_PED_ID());
		_0x2208438012482A1A(PLAYER_PED_ID(), 0, 0);
		SET_ENTITY_COORDS(PLAYER_PED_ID(), 162.5284f, 6839.658f, 18.8198f, 1, 0, 0, 1);
		SET_ENTITY_HEADING(PLAYER_PED_ID(), 256.7693f);
		if (!IS_PED_INJURED(uLocal_53))
		{
			CLEAR_PED_TASKS_IMMEDIATELY(uLocal_53);
			_0x2208438012482A1A(uLocal_53, 0, 0);
			SET_PED_CAN_RAGDOLL(uLocal_53, 1);
			SET_ENTITY_COORDS(uLocal_53, 164.4963f, 6839.333f, 18.9657f, 1, 0, 0, 1);
			SET_ENTITY_HEADING(uLocal_53, 73.449f);
		}
		SET_GAMEPLAY_CAM_RELATIVE_HEADING(26.1578f);
		SET_GAMEPLAY_CAM_RELATIVE_PITCH(-8.1198f, 1065353216);
		SET_CAM_ACTIVE(uLocal_77, 0);
		RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		DESTROY_CAM(uLocal_77, 0);
		HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER_PED_ID(), 0);
		if (bLocal_118)
		{
			DO_SCREEN_FADE_IN(800);
			while (IS_SCREEN_FADING_IN())
			{
				WAIT(0);
			}
		}
		bLocal_122 = true;
	}
	if (!IS_PED_INJURED(uLocal_53))
	{
		if (bLocal_122)
		{
			if (!iLocal_121)
			{
				if (!func_12())
				{
					if (func_44() == 0)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_HM0", 4, 0, 0, 0);
					}
					if (func_44() == 1)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_HM1", 4, 0, 0, 0);
					}
					if (func_44() == 2)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_HM2", 4, 0, 0, 0);
					}
					SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_177, 1862763509);
					SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, uLocal_177);
					OPEN_SEQUENCE_TASK(&uLocal_65);
					TASK_LOOK_AT_ENTITY(0, PLAYER_PED_ID(), -1, 2048, 2);
					TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER_PED_ID(), 4000);
					if (IS_VEHICLE_DRIVEABLE(GET_PLAYERS_LAST_VEHICLE(), 0))
					{
						if (IS_ENTITY_AT_ENTITY(uLocal_53, GET_PLAYERS_LAST_VEHICLE(), 20f, 20f, 20f, 0, 1, 0) && GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(GET_PLAYERS_LAST_VEHICLE()) > 0)
						{
							TASK_ENTER_VEHICLE(0, GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
						}
						else if (!IS_PED_IN_GROUP(uLocal_53))
						{
							SET_PED_AS_GROUP_MEMBER(uLocal_53, func_59());
							SET_PED_NEVER_LEAVES_GROUP(uLocal_53, 1);
							SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_53, 0);
						}
					}
					else if (!IS_PED_IN_GROUP(uLocal_53))
					{
						SET_PED_AS_GROUP_MEMBER(uLocal_53, func_59());
						SET_PED_NEVER_LEAVES_GROUP(uLocal_53, 1);
						SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_53, 0);
					}
					CLOSE_SEQUENCE_TASK(uLocal_65);
					TASK_PERFORM_SEQUENCE(uLocal_53, uLocal_65);
					CLEAR_SEQUENCE_TASK(&uLocal_65);
					if (DOES_BLIP_EXIST(uLocal_114))
					{
						REMOVE_BLIP(&uLocal_114);
					}
					if (!DOES_BLIP_EXIST(uLocal_137))
					{
						uLocal_137 = func_65(vLocal_139, 1);
					}
					if (func_44() == 2 && !func_9())
					{
						if (!DOES_BLIP_EXIST(uLocal_138))
						{
							uLocal_138 = func_65(vLocal_142, 0);
							SET_BLIP_SPRITE(uLocal_138, 269);
							func_88();
						}
					}
					func_87();
					iLocal_131 = 1;
					iLocal_121 = 1;
					SETTIMERA(0);
					REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0);
					SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0, 1);
					func_93(0, 1, 1, 0, 0, 0);
					SET_PLAYER_CONTROL(PLAYER_ID(), 1, 4);
					CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER_PED_ID());
					iLocal_49 = 4;
				}
			}
		}
	}
}

void func_87()
{
	if (!func_9())
	{
		if (func_44() == 2)
		{
			Global_26000 = 1;
		}
	}
}

void func_88()
{
	if (func_44() == 2)
	{
		if (!Global_26002)
		{
			func_89("CULT_BLIP_HELP", -1);
			Global_26002 = 1;
		}
	}
}

void func_89(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_90(int iParam0)
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
			if (func_91())
			{
				Global_27 = GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_91()
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

void func_92(var uParam0)
{
	if (DOES_ENTITY_EXIST(uParam0))
	{
		if (!IS_ENTITY_DEAD(uParam0, 0))
		{
			if (IS_ENTITY_ON_FIRE(uParam0))
			{
				STOP_ENTITY_FIRE(uParam0);
				SET_ENTITY_HEALTH(uParam0, GET_ENTITY_HEALTH(uParam0) + 200, 0);
				SET_VEHICLE_ENGINE_HEALTH(uParam0, (GET_VEHICLE_ENGINE_HEALTH(uParam0) + 200f));
				SET_VEHICLE_PETROL_TANK_HEALTH(uParam0, (GET_VEHICLE_PETROL_TANK_HEALTH(uParam0) + 200f));
				STOP_FIRE_IN_RANGE(GET_ENTITY_COORDS(uParam0, 1), 5f);
				CLEAR_AREA(GET_ENTITY_COORDS(uParam0, 1), 2.5f, 1, 0, 0, 0);
			}
		}
	}
}

void func_93(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER_ID());
		SET_ALL_RANDOM_PEDS_FLEE(PLAYER_ID(), 1);
		SET_POLICE_IGNORE_PLAYER(PLAYER_ID(), 1);
		func_100(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14553.f_1 > 3)
		{
			if (IS_MOBILE_PHONE_CALL_ONGOING())
			{
				STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_74())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_99(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_100(0);
		_0xE1CD1E48E025E661();
		Global_56500 = 0;
		if (bParam1)
		{
			_0x03FC694AE06C5A20();
		}
		SET_ALL_RANDOM_PEDS_FLEE(PLAYER_ID(), 0);
		SET_POLICE_IGNORE_PLAYER(PLAYER_ID(), 0);
		func_99(0, iParam3, iParam2, 0);
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!IS_PED_INJURED(PLAYER_PED_ID()) && !func_97(PLAYER_ID())) && !func_95(PLAYER_ID(), 0)) && !func_94()) && !bParam4) && !bParam5)
			{
				SET_ENTITY_INVINCIBLE(PLAYER_PED_ID(), 0);
			}
		}
		else if (((!IS_PED_INJURED(PLAYER_PED_ID()) && !func_97(PLAYER_ID())) && !bParam4) && !bParam5)
		{
			SET_ENTITY_INVINCIBLE(PLAYER_PED_ID(), 0);
		}
		Global_71588 = 0;
	}
}

bool func_94()
{
	return IS_BIT_SET(Global_1589819[PLAYER_ID() /*818*/].f_39.f_18, 14);
}

bool func_95(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_96(-1, 0) == 8;
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

int func_96(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_23();
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

int func_97(int iParam0)
{
	if (func_95(iParam0, 0))
	{
		return 1;
	}
	if (func_98())
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

bool func_98()
{
	return IS_BIT_SET(Global_2359302, 3);
}

int func_99(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_100(int iParam0)
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

void func_101()
{
	if (!IS_ENTITY_DEAD(uLocal_53, 0))
	{
		switch (iLocal_168)
		{
			case 0:
				if (iLocal_106 < GET_GAME_TIMER())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (GET_GAME_TIMER() + GET_RANDOM_INT_IN_RANGE(4000, 5500));
						iLocal_168++;
					}
				}
				break;
			
			case 1:
				if (iLocal_106 < GET_GAME_TIMER())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (GET_GAME_TIMER() + GET_RANDOM_INT_IN_RANGE(4000, 5500));
						iLocal_168++;
					}
				}
				break;
			
			case 2:
				if (iLocal_106 < GET_GAME_TIMER())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (GET_GAME_TIMER() + GET_RANDOM_INT_IN_RANGE(4000, 5500));
						iLocal_168++;
					}
				}
				break;
			
			case 3:
				if (iLocal_106 < GET_GAME_TIMER())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (GET_GAME_TIMER() + GET_RANDOM_INT_IN_RANGE(4000, 5500));
						iLocal_168 = 0;
					}
				}
				break;
			}
	}
}

void func_102(var uParam0, char* sParam1, int iParam2)
{
	_PLAY_AMBIENT_SPEECH1(uParam0, sParam1, func_103(iParam2), 1);
}

int func_103(int iParam0)
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

void func_104()
{
	Global_14732 = 0;
	func_105();
}

void func_105()
{
	RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(0);
		Global_15866 = 6;
	}
}

void func_106()
{
	if (!iLocal_67 && IS_ENTITY_AT_COORD(PLAYER_PED_ID(), vLocal_107, 30f, 30f, 30f, 0, 1, 0))
	{
		if (!IS_PED_INJURED(iLocal_54[1]))
		{
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATVF", 4, 0, 0, 0))
			{
				iLocal_67 = 1;
			}
		}
	}
	if (IS_VEHICLE_DRIVEABLE(uLocal_58, 0))
	{
		if (!IS_PED_INJURED(iLocal_54[0]))
		{
			TASK_VEHICLE_MISSION_PED_TARGET(iLocal_54[0], uLocal_58, PLAYER_PED_ID(), 8, 30f, 262144, -1f, 10f, 1);
			SET_PED_KEEP_TASK(iLocal_54[0], 1);
		}
		if (!IS_PED_INJURED(iLocal_54[1]))
		{
			TASK_ENTER_VEHICLE(iLocal_54[1], uLocal_58, -1, 0, 3f, 1, 0);
			SET_PED_KEEP_TASK(iLocal_54[1], 1);
		}
	}
	else
	{
		iLocal_64 = 0;
		while (iLocal_64 <= 1)
		{
			if (!IS_PED_INJURED(iLocal_54[iLocal_64]))
			{
				TASK_SMART_FLEE_PED(iLocal_54[iLocal_64], PLAYER_PED_ID(), 250f, -1, 0, 0);
				SET_PED_KEEP_TASK(iLocal_54[iLocal_64], 1);
			}
			iLocal_64++;
		}
	}
	WAIT(0);
	func_4();
}

void func_107()
{
	if (!IS_PED_INJURED(iLocal_54[0]) && !IS_PED_INJURED(iLocal_54[1]))
	{
		if (!HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_54[0]) && !HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_54[1]))
		{
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_VH", 4, 0, 0, 0))
			{
				if (!IS_PED_SHOOTING(iLocal_54[1]))
				{
					CLEAR_PED_TASKS(iLocal_54[1]);
					TASK_SHOOT_AT_ENTITY(iLocal_54[1], PLAYER_PED_ID(), -1, -957453492);
				}
			}
		}
	}
	iLocal_49 = 7;
}

void func_108()
{
	float fVar0;
	
	if (!IS_PED_INJURED(iLocal_54[0]) && !IS_PED_INJURED(iLocal_54[1]))
	{
		if (!iLocal_69)
		{
			if (!iLocal_68)
			{
				OPEN_SEQUENCE_TASK(&uLocal_65);
				TASK_LOOK_AT_ENTITY(0, PLAYER_PED_ID(), -1, 2048, 2);
				TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER_PED_ID(), 0);
				CLOSE_SEQUENCE_TASK(uLocal_65);
				TASK_PERFORM_SEQUENCE(iLocal_54[1], uLocal_65);
				CLEAR_SEQUENCE_TASK(&uLocal_65);
				iLocal_68 = 1;
			}
			if (IS_PED_FACING_PED(iLocal_54[1], PLAYER_PED_ID(), 90f))
			{
				func_104();
				WAIT(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_GUY", 4, 0, 0, 0);
				if (!IS_PED_INJURED(iLocal_54[0]) && !IS_PED_INJURED(iLocal_54[1]))
				{
					fVar0 = func_110(iLocal_54[0], PLAYER_PED_ID(), 1);
					if (fVar0 > 5f)
					{
						fVar0 = (fVar0 - 2f);
					}
					else
					{
						fVar0 = (fVar0 - 0.5f);
					}
					DETACH_ENTITY(uLocal_60, 0, 1);
					ATTACH_ENTITY_TO_ENTITY(uLocal_60, iLocal_54[0], GET_PED_BONE_INDEX(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					CLEAR_PED_TASKS(iLocal_54[0]);
					OPEN_SEQUENCE_TASK(&uLocal_65);
					TASK_LOOK_AT_ENTITY(0, PLAYER_PED_ID(), -1, 2048, 2);
					TASK_PLAY_ANIM(0, "random@burial", "a_burial_stop", 8f, -4f, 2000, 0, 0, 0, 0, 0);
					TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER_PED_ID(), 0);
					CLOSE_SEQUENCE_TASK(uLocal_65);
					TASK_PERFORM_SEQUENCE(iLocal_54[0], uLocal_65);
					CLEAR_SEQUENCE_TASK(&uLocal_65);
					SET_CURRENT_PED_WEAPON(iLocal_54[1], joaat("weapon_sawnoffshotgun"), 1);
					CLEAR_PED_TASKS(iLocal_54[1]);
					OPEN_SEQUENCE_TASK(&uLocal_65);
					TASK_LOOK_AT_ENTITY(0, PLAYER_PED_ID(), -1, 2048, 2);
					TASK_GO_TO_ENTITY(0, PLAYER_PED_ID(), -1, fVar0, 1f, 1073741824, 0);
					TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER_PED_ID(), 0);
					CLOSE_SEQUENCE_TASK(uLocal_65);
					TASK_PERFORM_SEQUENCE(iLocal_54[1], uLocal_65);
					CLEAR_SEQUENCE_TASK(&uLocal_65);
					iLocal_69 = 1;
				}
			}
		}
		if (DOES_ENTITY_EXIST(uLocal_60))
		{
			if (IS_ENTITY_ATTACHED(uLocal_60))
			{
				if (IS_ENTITY_PLAYING_ANIM(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						DETACH_ENTITY(uLocal_60, 1, 1);
					}
				}
			}
		}
		if (iLocal_69 && !iLocal_165)
		{
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_WHO", 4, 0, 0, 0))
			{
				OPEN_SEQUENCE_TASK(&uLocal_65);
				TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER_PED_ID(), PLAYER_PED_ID(), 1f, 0, 3.5f, 1082130432, 1, 0, -957453492);
				TASK_AIM_GUN_AT_ENTITY(0, PLAYER_PED_ID(), -1, 0);
				CLOSE_SEQUENCE_TASK(uLocal_65);
				TASK_PERFORM_SEQUENCE(iLocal_54[1], uLocal_65);
				CLEAR_SEQUENCE_TASK(&uLocal_65);
				TRIGGER_MUSIC_EVENT("RE6_START");
				iLocal_165 = 1;
			}
		}
		if (iLocal_165 && !iLocal_166)
		{
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_WAR", 4, 0, 0, 0))
			{
				if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
				{
					TASK_AIM_GUN_AT_ENTITY(iLocal_54[0], PLAYER_PED_ID(), -1, 0);
				}
				iLocal_166 = 1;
				SETTIMERB(0);
			}
		}
		if (iLocal_166 && !bLocal_167)
		{
			if (TIMERB() > 15000 && !func_12())
			{
				if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
				{
					TASK_TURN_PED_TO_FACE_ENTITY(iLocal_54[0], PLAYER_PED_ID(), 0);
					TASK_TURN_PED_TO_FACE_ENTITY(iLocal_54[1], PLAYER_PED_ID(), 0);
					func_70(&uLocal_178, "REBU2AU", "REBU2_SHO", 4, 0, 0, 0);
					bLocal_167 = true;
				}
			}
		}
		if (((!iLocal_70 && iLocal_165) && !IS_PED_INJURED(iLocal_54[0])) && !IS_PED_INJURED(iLocal_54[1]))
		{
			if (IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
			{
				if (!func_12())
				{
					if (func_109())
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_FO", 4, 0, 0, 0);
					}
					else
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				OPEN_SEQUENCE_TASK(&uLocal_65);
				TASK_GO_TO_ENTITY(0, iLocal_54[1], -1, 2f, 1f, 1073741824, 0);
				TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_54[1], 0);
				TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				CLOSE_SEQUENCE_TASK(uLocal_65);
				TASK_PERFORM_SEQUENCE(iLocal_54[0], uLocal_65);
				CLEAR_SEQUENCE_TASK(&uLocal_65);
				OPEN_SEQUENCE_TASK(&uLocal_65);
				TASK_GO_TO_ENTITY(0, iLocal_54[0], -1, 2f, 1f, 1073741824, 0);
				TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_54[0], 0);
				TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				CLOSE_SEQUENCE_TASK(uLocal_65);
				TASK_PERFORM_SEQUENCE(iLocal_54[1], uLocal_65);
				CLEAR_SEQUENCE_TASK(&uLocal_65);
				SETTIMERB(15000);
				iLocal_145 = 0;
				iLocal_166 = 1;
				iLocal_70 = 1;
			}
		}
		if (bLocal_167)
		{
			func_11();
			func_112();
		}
		if (((_CAN_PED_SEE_PED(iLocal_54[0], PLAYER_PED_ID()) || _CAN_PED_SEE_PED(iLocal_54[1], PLAYER_PED_ID())) || CAN_PED_HEAR_PLAYER(PLAYER_ID(), iLocal_54[0])) || CAN_PED_HEAR_PLAYER(PLAYER_ID(), iLocal_54[1]))
		{
			if (IS_PED_ARMED(PLAYER_PED_ID(), 4) && !IS_PED_ARMED(PLAYER_PED_ID(), 3))
			{
				if (IS_PED_ON_FOOT(PLAYER_PED_ID()))
				{
					if (!iLocal_76)
					{
						func_104();
						WAIT(0);
						if (func_70(&uLocal_178, "REBU2AU", "REBU2_GUN", 4, 0, 0, 0))
						{
							iLocal_76 = 1;
							func_112();
						}
					}
				}
			}
			if (IS_PED_ARMED(PLAYER_PED_ID(), 3) && !IS_PED_ARMED(PLAYER_PED_ID(), 4))
			{
				if (IS_PED_ON_FOOT(PLAYER_PED_ID()))
				{
					if (!iLocal_76)
					{
						func_104();
						WAIT(0);
						if (func_70(&uLocal_178, "REBU2AU", "REBU2_WEP", 4, 0, 0, 0))
						{
							iLocal_76 = 1;
							func_112();
						}
					}
				}
			}
			if (IS_PLAYER_TARGETTING_ANYTHING(PLAYER_ID()) || IS_PED_SHOOTING(PLAYER_PED_ID()))
			{
				func_112();
			}
		}
	}
}

int func_109()
{
	if (IS_BIT_SET(GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

var func_110(var uParam0, var uParam1, int iParam2)
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

int func_111()
{
	if (!IS_PED_INJURED(PLAYER_PED_ID()))
	{
		if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
		{
			if (IS_VEHICLE_DRIVEABLE(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0), 0))
			{
				if ((((IS_PED_IN_MODEL(PLAYER_PED_ID(), joaat("rhino")) || IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER_PED_ID())) || IS_PED_IN_MODEL(PLAYER_PED_ID(), joaat("annihilator"))) || IS_PED_IN_MODEL(PLAYER_PED_ID(), joaat("buzzard"))) || IS_PED_IN_FLYING_VEHICLE(PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_112()
{
	func_11();
	TRIGGER_MUSIC_EVENT("RE6_START");
	if (!iLocal_145)
	{
		if (DOES_ENTITY_EXIST(iLocal_54[0]))
		{
			if (!IS_PED_INJURED(iLocal_54[0]))
			{
				SET_PED_RESET_FLAG(iLocal_54[0], 156, 1);
				if (DOES_ENTITY_EXIST(uLocal_60))
				{
					_0xF1C03A5352243A30(iLocal_54[0]);
					if (IS_ENTITY_ATTACHED(uLocal_60))
					{
						if (!iLocal_70)
						{
							DETACH_ENTITY(uLocal_60, 0, 1);
							ATTACH_ENTITY_TO_ENTITY(uLocal_60, iLocal_54[0], GET_PED_BONE_INDEX(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							CLEAR_PED_TASKS(iLocal_54[0]);
							OPEN_SEQUENCE_TASK(&uLocal_65);
							TASK_CLEAR_LOOK_AT(0);
							TASK_PLAY_ANIM(0, "random@burial", "a_burial_stop", 8f, -8f, 2000, 0, 0, 0, 0, 0);
							TASK_COMBAT_PED(0, PLAYER_PED_ID(), 0, 16);
							CLOSE_SEQUENCE_TASK(uLocal_65);
							TASK_PERFORM_SEQUENCE(iLocal_54[0], uLocal_65);
							CLEAR_SEQUENCE_TASK(&uLocal_65);
							SET_PED_KEEP_TASK(iLocal_54[0], 1);
							_0x2208438012482A1A(iLocal_54[0], 0, 0);
							iLocal_145 = 1;
						}
					}
					else
					{
						OPEN_SEQUENCE_TASK(&uLocal_65);
						TASK_CLEAR_LOOK_AT(0);
						TASK_COMBAT_PED(0, PLAYER_PED_ID(), 0, 16);
						CLOSE_SEQUENCE_TASK(uLocal_65);
						TASK_PERFORM_SEQUENCE(iLocal_54[0], uLocal_65);
						CLEAR_SEQUENCE_TASK(&uLocal_65);
						SET_PED_KEEP_TASK(iLocal_54[0], 1);
						iLocal_145 = 1;
					}
				}
			}
			else
			{
				iLocal_145 = 1;
			}
		}
		else
		{
			iLocal_145 = 1;
		}
	}
	if (DOES_ENTITY_EXIST(uLocal_60))
	{
		if (IS_ENTITY_ATTACHED(uLocal_60))
		{
			if (!IS_PED_INJURED(iLocal_54[0]))
			{
				if (IS_ENTITY_PLAYING_ANIM(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						DETACH_ENTITY(uLocal_60, 1, 1);
					}
				}
			}
		}
	}
	if (!iLocal_146)
	{
		if (DOES_ENTITY_EXIST(iLocal_54[1]))
		{
			if (!IS_PED_INJURED(iLocal_54[1]))
			{
				SET_PED_RESET_FLAG(iLocal_54[1], 156, 1);
				_0xF1C03A5352243A30(iLocal_54[1]);
				OPEN_SEQUENCE_TASK(&uLocal_65);
				TASK_CLEAR_LOOK_AT(0);
				TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER_PED_ID(), 500);
				TASK_COMBAT_PED(0, PLAYER_PED_ID(), 0, 16);
				CLOSE_SEQUENCE_TASK(uLocal_65);
				TASK_PERFORM_SEQUENCE(iLocal_54[1], uLocal_65);
				CLEAR_SEQUENCE_TASK(&uLocal_65);
				SET_PED_KEEP_TASK(iLocal_54[1], 1);
				iLocal_146 = 1;
			}
			else
			{
				iLocal_146 = 1;
			}
		}
		else
		{
			iLocal_146 = 1;
		}
	}
	if (iLocal_146 && iLocal_145)
	{
		iLocal_106 = GET_GAME_TIMER() + 8500;
		SETTIMERA(0);
		iLocal_49 = 7;
	}
}

int func_113(int iParam0)
{
	if (func_116())
	{
		Global_106555 = 1;
		Global_106552 = GET_GAME_TIMER();
		if (func_25(Global_106554))
		{
			func_114(0);
		}
		SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_25(Global_106554))
		{
			FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_106565.f_24989.f_2 < 3)
			{
				if (!IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_89(func_115(iParam0), -1);
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
					func_89(func_115(iParam0), -1);
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
					func_89(func_115(iParam0), -1);
					Global_106565.f_24989.f_4++;
					SET_BIT(&Global_106561, 2);
				}
			}
			break;
	}
}

char* func_115(int iParam0)
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

int func_116()
{
	switch (func_117(&Global_25824, 0, 5, 0, GET_ID_OF_THIS_THREAD()))
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

int func_117(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_121(0))
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
		if (!func_119(iParam2))
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
			func_118(uParam0, iParam4);
		}
	}
	return 2;
}

void func_118(var uParam0, int iParam1)
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

bool func_119(int iParam0)
{
	return func_120(iParam0, Global_36425);
}

int func_120(int iParam0, int iParam1)
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

int func_121(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_119(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_122()
{
	if (DOES_BLIP_EXIST(uLocal_163))
	{
		REMOVE_BLIP(&uLocal_163);
	}
	if (!DOES_BLIP_EXIST(uLocal_114))
	{
		if (!IS_ENTITY_DEAD(uLocal_53, 0))
		{
			uLocal_114 = func_67(uLocal_53, 0, 145);
		}
	}
	iLocal_64 = 0;
	while (iLocal_64 <= 1)
	{
		if (!DOES_BLIP_EXIST(uLocal_111[iLocal_64]))
		{
			if (!IS_ENTITY_DEAD(iLocal_54[iLocal_64], 0))
			{
				uLocal_111[iLocal_64] = func_67(iLocal_54[iLocal_64], 1, 145);
			}
		}
		iLocal_64++;
	}
}

void func_123()
{
	if (!IS_PED_INJURED(uLocal_53))
	{
		switch (iLocal_168)
		{
			case 0:
				if (iLocal_106 < GET_GAME_TIMER())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (GET_GAME_TIMER() + GET_RANDOM_INT_IN_RANGE(4500, 6500));
						iLocal_168++;
					}
				}
				break;
			
			case 1:
				if (iLocal_106 < GET_GAME_TIMER())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (GET_GAME_TIMER() + GET_RANDOM_INT_IN_RANGE(4500, 6500));
						iLocal_168++;
					}
				}
				break;
			
			case 2:
				if (iLocal_106 < GET_GAME_TIMER())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (GET_GAME_TIMER() + GET_RANDOM_INT_IN_RANGE(4500, 6500));
						iLocal_168++;
					}
				}
				break;
			
			case 3:
				if (iLocal_106 < GET_GAME_TIMER())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (GET_GAME_TIMER() + GET_RANDOM_INT_IN_RANGE(4500, 6500));
						iLocal_168 = 0;
					}
				}
				break;
			}
	}
}

void func_124()
{
	switch (iLocal_110)
	{
		case 0:
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_CH1", 4, 0, 0, 0))
			{
				iLocal_110++;
			}
			break;
		
		case 1:
			if (!func_12())
			{
				if (func_70(&uLocal_178, "REBU2AU", "REBU2_CH2", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		
		case 2:
			if (!func_12())
			{
				if (func_70(&uLocal_178, "REBU2AU", "REBU2_CH3", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				if (func_70(&uLocal_178, "REBU2AU", "REBU2_CH4", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		
		case 4:
			iLocal_106 = GET_GAME_TIMER() + 3000;
			iLocal_110++;
			break;
		
		case 5:
			break;
	}
}

void func_125()
{
	if (DOES_ENTITY_EXIST(uLocal_60))
	{
		if (IS_ENTITY_ATTACHED(uLocal_60))
		{
			if (!IS_PED_INJURED(iLocal_54[0]))
			{
				if (IS_ENTITY_PLAYING_ANIM(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial_stop") > 0.124f && GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial") < 0.127f)
					{
						START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_burial_dirt", uLocal_60, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
				if (IS_ENTITY_PLAYING_ANIM(iLocal_54[0], "random@burial", "a_burial", 3))
				{
					if (((((GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial") > 0.04f && GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial") < 0.043f) || (GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial") > 0.24f && GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial") < 0.243f)) || (GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial") > 0.44f && GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial") < 0.443f)) || (GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial") > 0.64f && GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial") < 0.643f)) || (GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial") > 0.84f && GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial") < 0.843f))
					{
						START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_burial_dirt", uLocal_60, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_126()
{
	if (!iLocal_129)
	{
		if (IS_BULLET_IN_AREA(vLocal_88, 100f, 1) || IS_BULLET_IN_AREA(vLocal_88, 100f, 1))
		{
			if (IS_PED_INJURED(iLocal_54[0]) || IS_PED_INJURED(iLocal_54[1]))
			{
				iLocal_51 = 1;
				return 1;
			}
			else if (!IS_BULLET_IN_AREA(vLocal_88, 100f, 1) || !IS_BULLET_IN_AREA(vLocal_88, 100f, 1))
			{
				iLocal_51 = 1;
				return 1;
			}
		}
		if (((((((((IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_smokegrenade"), 1) || IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenade"), 1)) || IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_stickybomb"), 1)) || IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher"), 1)) || IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher_smoke"), 1)) || IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_rpg"), 1)) || IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_molotov"), 1)) || IS_EXPLOSION_IN_AREA(2, vLocal_88 - Vector(100f, 100f, 100f), vLocal_88 + Vector(100f, 100f, 100f))) || IS_EXPLOSION_IN_AREA(4, vLocal_88 - Vector(100f, 100f, 100f), vLocal_88 + Vector(100f, 100f, 100f))) || IS_EXPLOSION_IN_AREA(0, vLocal_88 - Vector(100f, 100f, 100f), vLocal_88 + Vector(100f, 100f, 100f)))
		{
			iLocal_51 = 1;
			return 1;
		}
		if (DOES_ENTITY_EXIST(uLocal_58))
		{
			if (!IS_ENTITY_DEAD(uLocal_58, 0))
			{
				if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_58, PLAYER_PED_ID(), 1) || IS_PED_IN_VEHICLE(PLAYER_PED_ID(), uLocal_58, 0))
				{
					CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uLocal_58);
					func_112();
					iLocal_51 = 3;
					return 1;
				}
				if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
				{
					if (IS_PED_IN_MODEL(PLAYER_PED_ID(), joaat("towtruck")) || IS_PED_IN_MODEL(PLAYER_PED_ID(), joaat("towtruck2")))
					{
						if (IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0), uLocal_58))
						{
							func_112();
							iLocal_51 = 3;
							return 1;
						}
					}
				}
			}
		}
		if (!iLocal_75)
		{
			if (!IS_PED_INJURED(iLocal_54[0]) && !IS_PED_INJURED(iLocal_54[1]))
			{
				if ((((_CAN_PED_SEE_PED(iLocal_54[0], PLAYER_PED_ID()) || _CAN_PED_SEE_PED(iLocal_54[1], PLAYER_PED_ID())) || CAN_PED_HEAR_PLAYER(PLAYER_ID(), iLocal_54[0])) || CAN_PED_HEAR_PLAYER(PLAYER_ID(), iLocal_54[1])) || IS_ENTITY_AT_COORD(PLAYER_PED_ID(), vLocal_88 - Vector(0f, 0f, 7f), 20f, 15f, 35f, 0, 1, 0))
				{
					if (IS_ENTITY_AT_COORD(PLAYER_PED_ID(), vLocal_88 - Vector(0f, 0f, 7f), 28f, 18f, 35f, 0, 1, 0))
					{
						iLocal_51 = 1;
						return 1;
					}
				}
			}
		}
		if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
		{
			if (!IS_PED_INJURED(iLocal_54[0]) && !IS_PED_INJURED(iLocal_54[1]))
			{
				if (!IS_ENTITY_DEAD(GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					if (IS_ENTITY_TOUCHING_ENTITY(GET_PLAYERS_LAST_VEHICLE(), iLocal_54[0]) || IS_ENTITY_TOUCHING_ENTITY(GET_PLAYERS_LAST_VEHICLE(), iLocal_54[1]))
					{
						iLocal_51 = 5;
						return 1;
					}
				}
			}
		}
		if (!IS_PED_INJURED(uLocal_53))
		{
			if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_53, PLAYER_PED_ID(), 0) || HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uLocal_53, joaat("weapon_stungun"), 0))
			{
				iLocal_51 = 4;
				return 1;
			}
		}
		else
		{
			iLocal_51 = 4;
			return 1;
		}
		if (IS_ENTITY_DEAD(iLocal_54[0], 0) || IS_ENTITY_DEAD(iLocal_54[1], 0))
		{
			iLocal_51 = 6;
			return 1;
		}
		if (iLocal_75)
		{
			return 1;
		}
	}
	return 0;
}

int func_127(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	
	bVar2 = false;
	if (!IS_ENTITY_DEAD(uParam0, 0) && !bParam4)
	{
		if (IS_PED_ON_FOOT(uParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		if (!IS_ENTITY_DEAD(uParam0, 0) && !bParam4)
		{
			vVar3 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) };
			vVar6 = { GET_ENTITY_COORDS(uParam0, 1) };
			fVar9 = VDIST(vVar3, vVar6);
			if (!IS_BIT_SET(uParam3, 3))
			{
				if (func_133(uParam0, iParam6))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_131(uParam0);
					return 1;
				}
			}
			if (!IS_BIT_SET(uParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (IS_BULLET_IN_AREA(vVar6, fParam5, 1))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_131(uParam0);
					return 1;
				}
				if (IS_PROJECTILE_IN_AREA(vVar6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), vVar6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_131(uParam0);
					return 1;
				}
			}
			if (!IS_BIT_SET(uParam3, 2))
			{
				fVar0 = _GET_LOCKON_RANGE_OF_CURRENT_PED_WEAPON(PLAYER_PED_ID());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (IS_PED_ARMED(PLAYER_PED_ID(), 6))
				{
					if (IS_PLAYER_TARGETTING_ENTITY(PLAYER_ID(), uParam0) || IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER_ID(), uParam0))
					{
						if (fVar9 < fVar0)
						{
							if (HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uParam0, PLAYER_PED_ID(), 17))
							{
								func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_132("	aggro Ped knows player is pointing gun\n");
								func_128("		lockOnTimer = ", *uParam2);
								func_132("\n");
								func_128("		time since not LockedOn = ", (GET_GAME_TIMER() - iLocal_19));
								func_132("\n");
								bVar2 = true;
								if (GET_GAME_TIMER() > (iLocal_19 + *uParam2))
								{
									func_132("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_131(uParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!IS_BIT_SET(uParam3, 0))
			{
				if (IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER_ID(), 0))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_131(uParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_19 = GET_GAME_TIMER();
	}
	return 0;
}

void func_128(char* sParam0, int iParam1)
{
	func_130(sParam0);
	func_129(iParam1);
}

void func_129(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_130(var uParam0)
{
	if (ARE_STRINGS_EQUAL(uParam0, uParam0))
	{
	}
}

void func_131(var uParam0)
{
	STOP_CURRENT_PLAYING_AMBIENT_SPEECH(uParam0);
}

void func_132(char* sParam0)
{
	func_130(sParam0);
}

int func_133(var uParam0, int iParam1)
{
	if (IS_PED_ON_FOOT(PLAYER_PED_ID()))
	{
		if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0, PLAYER_PED_ID(), 1))
		{
			return 1;
		}
	}
	else if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0, PLAYER_PED_ID(), 1))
	{
		if ((GET_PED_MAX_HEALTH(uParam0) - GET_ENTITY_HEALTH(uParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_134()
{
	vector3 vVar0;
	vector3 vVar3;
	
	func_136(39, 1);
	func_136(40, 1);
	func_136(41, 1);
	func_136(42, 1);
	func_136(43, 1);
	func_136(44, 1);
	ADD_SCENARIO_BLOCKING_AREA(vLocal_139 - Vector(20f, 40f, 40f), vLocal_139 + Vector(20f, 40f, 40f), 0, 1, 1, 1);
	ADD_SCENARIO_BLOCKING_AREA(vLocal_78 - Vector(20f, 50f, 60f), vLocal_78 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_105, 1);
	ENABLE_DISPATCH_SERVICE(5, 0);
	ENABLE_DISPATCH_SERVICE(3, 0);
	SET_WANTED_LEVEL_MULTIPLIER(0f);
	uLocal_53 = CREATE_PED(26, iLocal_102, vLocal_78, fLocal_97, 1, 1);
	SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_53, 1);
	SET_PED_CAN_BE_TARGETTED(uLocal_53, 0);
	SET_PED_FLEE_ATTRIBUTES(uLocal_53, 2, 0);
	SET_PED_FLEE_ATTRIBUTES(uLocal_53, 128, 1);
	SET_PED_COMBAT_ATTRIBUTES(uLocal_53, 1, 0);
	SET_PED_COMBAT_ATTRIBUTES(uLocal_53, 6, 0);
	SET_PED_CONFIG_FLAG(uLocal_53, 206, 1);
	SET_PED_CONFIG_FLAG(uLocal_53, 318, 0);
	SET_PED_CONFIG_FLAG(uLocal_53, 118, 0);
	SET_PED_CONFIG_FLAG(uLocal_53, 208, 1);
	SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_102);
	SET_ENTITY_HEALTH(uLocal_53, iLocal_125, 0);
	SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(PLAYER_PED_ID(), 0);
	ADD_RELATIONSHIP_GROUP("rghKidnappers", &uLocal_176);
	ADD_RELATIONSHIP_GROUP("rghVictim", &uLocal_177);
	SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_53, uLocal_177);
	iLocal_64 = 0;
	while (iLocal_64 <= 1)
	{
		iLocal_54[iLocal_64] = CREATE_PED(26, iLocal_103, vLocal_81[iLocal_64 /*3*/], fLocal_98[iLocal_64], 1, 1);
		SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54[iLocal_64], 1);
		SET_PED_AS_ENEMY(iLocal_54[iLocal_64], 1);
		SET_PED_COMBAT_ATTRIBUTES(iLocal_54[iLocal_64], 0, 1);
		SET_PED_FLEE_ATTRIBUTES(iLocal_54[iLocal_64], 2, 0);
		SET_PED_FLEE_ATTRIBUTES(iLocal_54[iLocal_64], 128, 1);
		SET_PED_CONFIG_FLAG(iLocal_54[iLocal_64], 42, 1);
		SET_PED_COMBAT_MOVEMENT(iLocal_54[0], 2);
		SET_PED_COMBAT_ATTRIBUTES(iLocal_54[0], 50, 1);
		SET_PED_SHOOT_RATE(iLocal_54[iLocal_64], 50);
		SET_PED_ACCURACY(iLocal_54[iLocal_64], 13);
		SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_54[iLocal_64], 1, 1);
		SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_54[iLocal_64], uLocal_176);
		SET_PED_MONEY(iLocal_54[iLocal_64], GET_RANDOM_INT_IN_RANGE(800, 2000));
		iLocal_64++;
	}
	SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_104);
	SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_103);
	SET_PED_SHOOT_RATE(iLocal_54[1], 100);
	SET_PED_FIRING_PATTERN(iLocal_54[1], -687903391);
	SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_176, 1862763509);
	GIVE_WEAPON_TO_PED(iLocal_54[0], joaat("weapon_pistol"), -1, 0, 1);
	GIVE_WEAPON_TO_PED(iLocal_54[1], joaat("weapon_sawnoffshotgun"), -1, 0, 1);
	uLocal_58 = CREATE_VEHICLE(iLocal_105, vLocal_88, fLocal_101, 1, 1, 0);
	SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_58, 1084227584);
	SET_VEHICLE_LIGHTS(uLocal_58, 3);
	SET_VEHICLE_DOOR_OPEN(uLocal_58, 5, 0, 0);
	SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_105);
	uLocal_60 = CREATE_OBJECT(joaat("prop_ld_shovel"), vLocal_107, 1, 1, 0);
	SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_shovel"));
	uLocal_61[0] = CREATE_OBJECT(joaat("p_arm_bind_cut_s"), vLocal_107, 1, 1, 0);
	uLocal_61[1] = CREATE_OBJECT(joaat("p_arm_bind_cut_s"), vLocal_107 + Vector(1f, 1f, 1f), 1, 1, 0);
	REQUEST_MODEL(joaat("p_arm_bind_cut_s"));
	ATTACH_ENTITY_TO_ENTITY(uLocal_60, iLocal_54[0], GET_PED_BONE_INDEX(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	SET_PED_COMPONENT_VARIATION(iLocal_54[0], 0, 0, 0, 0);
	SET_PED_COMPONENT_VARIATION(iLocal_54[0], 3, 0, 1, 0);
	SET_PED_COMPONENT_VARIATION(iLocal_54[0], 4, 1, 0, 0);
	SET_PED_COMPONENT_VARIATION(iLocal_54[1], 0, 0, 2, 0);
	SET_PED_COMPONENT_VARIATION(iLocal_54[1], 3, 2, 1, 0);
	SET_PED_COMPONENT_VARIATION(iLocal_54[1], 4, 1, 1, 0);
	vVar0 = { vLocal_78 };
	vVar3 = { -2f, -4f, 18f };
	uLocal_343 = CREATE_SYNCHRONIZED_SCENE(vVar0, vVar3, 2);
	TASK_SYNCHRONIZED_SCENE(uLocal_53, uLocal_343, "random@burial", "b_burial", 4f, -4f, 1, 0, 1148846080, 0);
	PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_61[0], uLocal_343, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
	PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_61[1], uLocal_343, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
	SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_343, 1);
	SET_PED_KEEP_TASK(uLocal_53, 1);
	TASK_PLAY_ANIM(iLocal_54[0], "random@burial", "a_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	TASK_PLAY_ANIM(iLocal_54[1], "random@burial", "c_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	SET_PED_ANGLED_DEFENSIVE_AREA(iLocal_54[0], vLocal_91, vLocal_94, 2.75f, 0, 0);
	SET_PED_ANGLED_DEFENSIVE_AREA(iLocal_54[1], vLocal_91, vLocal_94, 2.75f, 0, 0);
	if (func_44() == 0)
	{
		func_135(&uLocal_178, 0, PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_44() == 1)
	{
		func_135(&uLocal_178, 1, PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (func_44() == 2)
	{
		func_135(&uLocal_178, 2, PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	SET_AMBIENT_VOICE_NAME(iLocal_54[0], "A_M_M_HillBilly_02_WHITE_MINI_03");
	SET_AMBIENT_VOICE_NAME(iLocal_54[1], "A_M_M_HillBilly_02_WHITE_MINI_02");
	SET_AMBIENT_VOICE_NAME(uLocal_53, "KIDNAPPEDFEMALE");
	func_135(&uLocal_178, 4, iLocal_54[0], "KIDNAPPER2", 0, 1);
	func_135(&uLocal_178, 3, iLocal_54[1], "KIDNAPPER1", 0, 1);
	func_135(&uLocal_178, 5, uLocal_53, "KIDNAPPEDFEMALE", 0, 1);
}

void func_135(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
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

void func_136(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_143(iParam0, 2, 1))
		{
			func_142(iParam0, 2, 1);
		}
	}
	else if (func_143(iParam0, 2, 1))
	{
		func_137(iParam0, 2, 1);
	}
}

void func_137(int iParam0, int iParam1, bool bParam2)
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
		if (func_20() == 0)
		{
			uVar0 = func_140(func_141(iParam0), -1, 0);
			CLEAR_BIT(&uVar0, iParam1);
			func_138(func_141(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		CLEAR_BIT(&(Global_106565.f_668[iParam0]), iParam1);
	}
}

void func_138(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_139(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, uParam1, iParam3);
	}
}

int func_139(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_23();
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

int func_140(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2539502[iParam0 /*3*/][func_139(iParam1)];
	if (STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_141(int iParam0)
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

void func_142(int iParam0, int iParam1, bool bParam2)
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
		if (func_20() == 0)
		{
			uVar0 = func_140(func_141(iParam0), -1, 0);
			SET_BIT(&uVar0, iParam1);
			func_138(func_141(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		SET_BIT(&(Global_106565.f_668[iParam0]), iParam1);
	}
}

int func_143(int iParam0, int iParam1, bool bParam2)
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
		if (func_20() == 0)
		{
			return IS_BIT_SET(func_140(func_141(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return IS_BIT_SET(Global_106565.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_144()
{
	var uVar0;
	int iVar1;
	
	if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1))
	{
		uVar0 = SET_EXCLUSIVE_PHONE_RELATIONSHIPS(PLAYER_PED_ID());
		if (IS_VEHICLE_DRIVEABLE(uVar0, 0))
		{
			iVar1 = GET_PED_IN_VEHICLE_SEAT(uVar0, 0, 0);
			if (!IS_PED_INJURED(iVar1))
			{
				if (iVar1 != PLAYER_PED_ID())
				{
					if (IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						if (!IS_PED_HEADTRACKING_ENTITY(iVar1, PLAYER_PED_ID()))
						{
							TASK_LOOK_AT_ENTITY(iVar1, PLAYER_PED_ID(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_145()
{
	REQUEST_MODEL(iLocal_102);
	REQUEST_MODEL(iLocal_104);
	REQUEST_MODEL(iLocal_103);
	REQUEST_MODEL(iLocal_105);
	REQUEST_MODEL(joaat("prop_ld_shovel"));
	REQUEST_MODEL(joaat("p_arm_bind_cut_s"));
	REQUEST_ANIM_DICT("random@burial");
	REQUEST_PTFX_ASSET();
	REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", 0, -1);
	PREPARE_MUSIC_EVENT("RE6_BOTH_DEAD_OS");
	if (((((((((HAS_MODEL_LOADED(iLocal_102) && HAS_MODEL_LOADED(iLocal_104)) && HAS_MODEL_LOADED(iLocal_103)) && HAS_MODEL_LOADED(iLocal_105)) && HAS_MODEL_LOADED(joaat("prop_ld_shovel"))) && HAS_MODEL_LOADED(joaat("p_arm_bind_cut_s"))) && HAS_ANIM_DICT_LOADED("random@burial")) && HAS_PTFX_ASSET_LOADED()) && REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", 0, -1)) && PREPARE_MUSIC_EVENT("RE6_BOTH_DEAD_OS"))
	{
		bLocal_52 = true;
	}
	else
	{
		REQUEST_MODEL(iLocal_102);
		REQUEST_MODEL(iLocal_104);
		REQUEST_MODEL(iLocal_103);
		REQUEST_MODEL(iLocal_105);
		REQUEST_MODEL(joaat("prop_ld_shovel"));
		REQUEST_MODEL(joaat("p_arm_bind_cut_s"));
		REQUEST_ANIM_DICT("random@burial");
		REQUEST_PTFX_ASSET();
		REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", 0, -1);
		PREPARE_MUSIC_EVENT("RE6_BOTH_DEAD_OS");
	}
}

void func_146()
{
	iLocal_102 = joaat("u_f_y_mistress");
	iLocal_103 = joaat("a_m_m_salton_01");
	iLocal_104 = joaat("a_m_m_salton_01");
	iLocal_105 = joaat("bison");
	vLocal_78 = { 163.4486f, 6839.993f, 18.86f };
	fLocal_97 = 0f;
	vLocal_81[0 /*3*/] = { 162.8193f, 6837.257f, 18.9614f };
	fLocal_98[0] = 297.0056f;
	vLocal_81[1 /*3*/] = { 162.5046f, 6841.68f, 18.8426f };
	fLocal_98[1] = 193.3866f;
	vLocal_88 = { 169.3462f, 6837.805f, 19.1421f };
	fLocal_101 = 265.6862f;
	vLocal_91 = { 164.0896f, 6836.923f, 19.03899f };
	vLocal_94 = { 168.9638f, 6834.302f, 24.99057f };
	iLocal_66 = 1;
}

int func_147()
{
	if (IS_PLAYER_PLAYING(PLAYER_ID()) && !IS_PED_INJURED(PLAYER_PED_ID()))
	{
		if (VDIST2(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), vLocal_44) < (75f * 75f))
		{
			return 1;
		}
		if (VMAG2(GET_ENTITY_VELOCITY(PLAYER_PED_ID())) > 1369f && !func_158())
		{
			return 0;
		}
	}
	if (func_154())
	{
		return 1;
	}
	if (func_148(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_148(float fParam0, bool bParam1)
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
		if (func_33(func_44()))
		{
			iVar36 = func_30();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (IS_BIT_SET(Global_106565.f_18568[iVar32 /*6*/], 2) && !IS_BIT_SET(Global_106565.f_18568[iVar32 /*6*/], 3))
				{
					func_149(iVar32, &Var0);
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

void func_149(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_150(uParam1, "Abigail1", func_152(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 1:
			func_150(uParam1, "Abigail2", func_152(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 2:
			func_150(uParam1, "Barry1", func_152(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 3:
			func_150(uParam1, "Barry2", func_152(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 4:
			func_150(uParam1, "Barry3", func_152(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 5:
			func_150(uParam1, "Barry3A", func_152(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 6:
			func_150(uParam1, "Barry3C", func_152(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 7:
			func_150(uParam1, "Barry4", func_152(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_151(iParam0), 0, 0);
			break;
		
		case 8:
			func_150(uParam1, "Dreyfuss1", func_152(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 9:
			func_150(uParam1, "Epsilon1", func_152(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 10:
			func_150(uParam1, "Epsilon2", func_152(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 11:
			func_150(uParam1, "Epsilon3", func_152(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 12:
			func_150(uParam1, "Epsilon4", func_152(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 13:
			func_150(uParam1, "Epsilon5", func_152(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 14:
			func_150(uParam1, "Epsilon6", func_152(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 15:
			func_150(uParam1, "Epsilon7", func_152(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 16:
			func_150(uParam1, "Epsilon8", func_152(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 17:
			func_150(uParam1, "Extreme1", func_152(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 18:
			func_150(uParam1, "Extreme2", func_152(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 19:
			func_150(uParam1, "Extreme3", func_152(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 20:
			func_150(uParam1, "Extreme4", func_152(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 21:
			func_150(uParam1, "Fanatic1", func_152(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_151(iParam0), 1, 0);
			break;
		
		case 22:
			func_150(uParam1, "Fanatic2", func_152(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_151(iParam0), 1, 0);
			break;
		
		case 23:
			func_150(uParam1, "Fanatic3", func_152(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_151(iParam0), 0, 1);
			break;
		
		case 24:
			func_150(uParam1, "Hao1", func_152(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_151(iParam0), 0, 1);
			break;
		
		case 25:
			func_150(uParam1, "Hunting1", func_152(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 26:
			func_150(uParam1, "Hunting2", func_152(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 27:
			func_150(uParam1, "Josh1", func_152(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 28:
			func_150(uParam1, "Josh2", func_152(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 29:
			func_150(uParam1, "Josh3", func_152(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 30:
			func_150(uParam1, "Josh4", func_152(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 31:
			func_150(uParam1, "Maude1", func_152(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 32:
			func_150(uParam1, "Minute1", func_152(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 33:
			func_150(uParam1, "Minute2", func_152(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 34:
			func_150(uParam1, "Minute3", func_152(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 35:
			func_150(uParam1, "MrsPhilips1", func_152(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 36:
			func_150(uParam1, "MrsPhilips2", func_152(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 37:
			func_150(uParam1, "Nigel1", func_152(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 38:
			func_150(uParam1, "Nigel1A", func_152(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 39:
			func_150(uParam1, "Nigel1B", func_152(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 40:
			func_150(uParam1, "Nigel1C", func_152(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 41:
			func_150(uParam1, "Nigel1D", func_152(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 42:
			func_150(uParam1, "Nigel2", func_152(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 43:
			func_150(uParam1, "Nigel3", func_152(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 44:
			func_150(uParam1, "Omega1", func_152(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 45:
			func_150(uParam1, "Omega2", func_152(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 46:
			func_150(uParam1, "Paparazzo1", func_152(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 47:
			func_150(uParam1, "Paparazzo2", func_152(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 48:
			func_150(uParam1, "Paparazzo3", func_152(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 49:
			func_150(uParam1, "Paparazzo3A", func_152(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 50:
			func_150(uParam1, "Paparazzo3B", func_152(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 51:
			func_150(uParam1, "Paparazzo4", func_152(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 52:
			func_150(uParam1, "Rampage1", func_152(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 54:
			func_150(uParam1, "Rampage3", func_152(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 55:
			func_150(uParam1, "Rampage4", func_152(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 56:
			func_150(uParam1, "Rampage5", func_152(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 53:
			func_150(uParam1, "Rampage2", func_152(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 57:
			func_150(uParam1, "TheLastOne", func_152(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 58:
			func_150(uParam1, "Tonya1", func_152(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 59:
			func_150(uParam1, "Tonya2", func_152(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 60:
			func_150(uParam1, "Tonya3", func_152(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 61:
			func_150(uParam1, "Tonya4", func_152(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 62:
			func_150(uParam1, "Tonya5", func_152(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_150(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_151(int iParam0)
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

struct<2> func_152(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_153(iParam0) };
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

struct<2> func_153(int iParam0)
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

int func_154()
{
	if (func_157() && !func_158())
	{
		return 1;
	}
	if (func_156() && func_155())
	{
		return 1;
	}
	return 0;
}

bool func_155()
{
	return Global_106283 > 0;
}

int func_156()
{
	if (Global_90634 != -1)
	{
		return 1;
	}
	return 0;
}

int func_157()
{
	if (Global_90634 != -1)
	{
		return IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

int func_158()
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

int func_159()
{
	if (!func_119(5))
	{
		return 1;
	}
	if (func_154())
	{
		return 1;
	}
	if (!IS_PED_INJURED(PLAYER_PED_ID()))
	{
		if (VMAG2(GET_ENTITY_VELOCITY(PLAYER_PED_ID())) > 1369f && !func_158())
		{
			return 0;
		}
	}
	if (func_148(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_160()
{
	if ((Global_106554 == func_39() && GET_RANDOM_EVENT_FLAG()) && Global_106555)
	{
		return 1;
	}
	return 0;
}

void func_161(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_163(iParam0);
	_0x65D2EBB47E1CEC21(0);
	SET_RANDOM_EVENT_FLAG(1);
	Global_106551 = 0;
	func_162();
}

void func_162()
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

void func_163(int iParam0)
{
	Global_106554 = iParam0;
}

int func_164(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_39();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_205())
		{
			return 0;
		}
	}
	vLocal_44 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (IS_PLAYER_PLAYING(PLAYER_ID()) && !IS_PED_INJURED(PLAYER_PED_ID()))
		{
			vVar1 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) };
			if (VMAG2(GET_ENTITY_VELOCITY(PLAYER_PED_ID())) > 1369f && !func_158())
			{
				return 0;
			}
		}
		if (!Global_106565.f_9079)
		{
			return 0;
		}
		if (func_16(0))
		{
			return 0;
		}
		if (func_154())
		{
			return 0;
		}
		if (func_204())
		{
			return 0;
		}
		if (Global_106554 != -1)
		{
			return 0;
		}
		if (func_33(func_44()))
		{
			if (func_148(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (IS_PLAYER_PLAYING(PLAYER_ID()) && !bParam6)
		{
			if ((vVar1.z - vLocal_44.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_203(iParam3))
		{
			return 0;
		}
		if (func_33(func_44()))
		{
			if (func_202(func_44()) == 4 || func_202(func_44()) == 5)
			{
				return 0;
			}
		}
		if (func_33(func_44()))
		{
			if (!func_201(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_200(Global_106565.f_24989.f_43[iParam3]))
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
		if (func_199())
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
		if (!func_190(4))
		{
			return 0;
		}
		if (!func_119(5))
		{
			return 0;
		}
		if (func_189(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_189(0, 0))
		{
			return 0;
		}
		if (Global_25911)
		{
			return 0;
		}
		if (func_203(30) && !func_189(30, 0))
		{
			if (iParam3 != 30)
			{
				if (VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_33(func_44()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_106565.f_2357.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_106565.f_2357.f_539.f_2296[iVar4];
				if (func_188(iVar8))
				{
					if (func_166(iVar4))
					{
						if (!func_165(vVar5, 0f, 0f, 0f, 0))
						{
							if (VDIST2(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), vVar5) < (210f * 210f))
							{
								if (func_44() != iVar4)
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

bool func_165(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_166(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_106565.f_2357.f_539.f_2296[iParam0];
	return func_167(iVar0);
}

int func_167(int iParam0)
{
	return func_168(iParam0, 1);
}

int func_168(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_188(iParam0))
	{
		return 0;
	}
	func_169(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_169(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_170(func_181(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_170(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_180(iParam0, iParam1))
	{
		iVar0 = func_179(iParam1);
		iVar1 = func_177(iParam0);
		iVar2 = (func_177(iParam0) - func_177(iParam1));
		iVar3 = (func_179(iParam0) - func_179(iParam1));
		iVar4 = (func_176(iParam0) - func_176(iParam1));
		iVar5 = (func_175(iParam0) - func_175(iParam1));
		iVar6 = (func_174(iParam0) - func_174(iParam1));
		iVar7 = (func_173(iParam0) - func_173(iParam1));
	}
	else
	{
		iVar0 = func_179(iParam0);
		iVar1 = func_177(iParam1);
		iVar2 = (func_177(iParam1) - func_177(iParam0));
		iVar3 = (func_179(iParam1) - func_179(iParam0));
		iVar4 = (func_176(iParam1) - func_176(iParam0));
		iVar5 = (func_175(iParam1) - func_175(iParam0));
		iVar6 = (func_174(iParam1) - func_174(iParam0));
		iVar7 = (func_173(iParam1) - func_173(iParam0));
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
		iVar4 = (iVar4 + func_172(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = ROUND(func_171(TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_171(float fParam0, float fParam1, float fParam2)
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

int func_172(int iParam0, int iParam1)
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

int func_173(int iParam0)
{
	return SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_174(int iParam0)
{
	return SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_175(int iParam0)
{
	return SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_176(int iParam0)
{
	return SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_177(int iParam0)
{
	return (SHIFT_RIGHT(iParam0, 26) & 31 * func_178(IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_178(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_179(int iParam0)
{
	return iParam0 & 15;
}

int func_180(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_188(iParam1) || !func_188(iParam0))
	{
		return 1;
	}
	iVar0 = func_177(iParam0);
	iVar1 = func_177(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_179(iParam0);
	iVar1 = func_179(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_176(iParam0);
	iVar1 = func_176(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_175(iParam0);
	iVar1 = func_175(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_174(iParam0);
	iVar1 = func_174(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	iVar1 = func_173(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_181()
{
	var uVar0;
	
	func_187(&uVar0, GET_CLOCK_SECONDS());
	func_186(&uVar0, GET_CLOCK_MINUTES());
	func_185(&uVar0, GET_CLOCK_HOURS());
	func_184(&uVar0, GET_CLOCK_DAY_OF_MONTH());
	func_183(&uVar0, GET_CLOCK_MONTH());
	func_182(&uVar0, GET_CLOCK_YEAR());
	return uVar0;
}

void func_182(var uParam0, int iParam1)
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

void func_183(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_184(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_179(*uParam0);
	iVar1 = func_177(*uParam0);
	if (iParam1 < 1 || iParam1 > func_172(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 4));
}

void func_185(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 9));
}

void func_186(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 14));
}

void func_187(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 20));
}

int func_188(int iParam0)
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
	iVar0 = func_173(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_174(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_175(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_177(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_179(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_176(iParam0);
	if (iVar5 < 1 || iVar5 > func_172(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_189(int iParam0, int iParam1)
{
	if (IS_BIT_SET(Global_106565.f_24989.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_190(int iParam0)
{
	int iVar0;
	
	if (IS_PLAYER_PLAYING(PLAYER_ID()))
	{
		if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
		{
			if (!IS_PED_INJURED(PLAYER_PED_ID()))
			{
				iVar0 = func_44();
				if (!func_33(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!IS_PLAYER_READY_FOR_CUTSCENE(PLAYER_ID()) || IS_ENTITY_IN_AIR(PLAYER_PED_ID())) || IS_PED_GETTING_INTO_A_VEHICLE(PLAYER_PED_ID())) || IS_PED_RAGDOLL(PLAYER_PED_ID())) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || IS_PLAYER_CLIMBING(PLAYER_ID())) || IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0)) || func_198()) || Global_105612) || Global_25767) || func_197()) || func_78(8, -1)) || func_196()) || func_195()) || func_194()) || func_193()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1) || func_198()) || Global_25767) || func_197()) || func_78(8, -1)) || func_194()) || func_196()) || func_195()) || func_193()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!IS_PLAYER_READY_FOR_CUTSCENE(PLAYER_ID()) || IS_ENTITY_IN_AIR(PLAYER_PED_ID())) || IS_PED_GETTING_INTO_A_VEHICLE(PLAYER_PED_ID())) || IS_PED_RAGDOLL(PLAYER_PED_ID())) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || IS_PLAYER_CLIMBING(PLAYER_ID())) || IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0)) || func_198()) || Global_105612) || Global_25767) || func_197()) || func_78(8, -1)) || func_194()) || func_196()) || func_195()) || func_193()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((IS_PED_RAGDOLL(PLAYER_PED_ID()) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0)) || func_198()) || Global_105612) || Global_25767) || func_197()) || func_78(8, -1)) || func_196()) || func_195()) || func_193()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_198() || GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) > 0) || func_78(8, -1)) || func_193()) || func_192()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_78(8, -1) || func_196()) || func_195()) || func_192()) || func_191())
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
							if ((((((((((((((IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0) || GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) > 0) || IS_ENTITY_IN_AIR(PLAYER_PED_ID())) || IS_PED_RAGDOLL(PLAYER_PED_ID())) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || IS_PLAYER_CLIMBING(PLAYER_ID())) || func_198()) || Global_25767) || func_197()) || func_78(8, -1)) || func_195()) || func_194()) || func_193()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0) || !IS_PLAYER_CONTROL_ON(PLAYER_ID())) || !IS_PLAYER_READY_FOR_CUTSCENE(PLAYER_ID())) || !IS_SCREEN_FADED_IN()) || IS_ENTITY_IN_AIR(PLAYER_PED_ID())) || IS_PED_RAGDOLL(PLAYER_PED_ID())) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || func_198()) || func_195()) || Global_105612) || Global_25767) || func_197()) || Global_37584) || func_78(8, -1)) || func_194()) || func_192()) || func_193()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0) || !IS_PLAYER_CONTROL_ON(PLAYER_ID())) || !IS_PLAYER_READY_FOR_CUTSCENE(PLAYER_ID())) || !IS_SCREEN_FADED_IN()) || IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER_ID(), 0)) || IS_ENTITY_IN_AIR(PLAYER_PED_ID())) || IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1)) || IS_PED_RAGDOLL(PLAYER_PED_ID())) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PED_SWIMMING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || IS_PLAYER_CLIMBING(PLAYER_ID())) || func_198()) || Global_105612) || Global_25767) || func_197()) || func_78(8, -1)) || func_194()) || func_192()) || func_196()) || func_195()) || func_193())
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

var func_191()
{
	return Global_93721.f_1;
}

int func_192()
{
	if (Global_90634 != -1)
	{
		return IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_193()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_194()
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

bool func_195()
{
	return Global_93734.f_340 > 0;
}

bool func_196()
{
	return Global_93734.f_339 > 0;
}

var func_197()
{
	return Global_1312867;
}

int func_198()
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

int func_199()
{
	func_76();
	if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_200(int iParam0)
{
	return func_180(func_181(), iParam0);
}

int func_201(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_44();
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

int func_202(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_106565.f_7682.f_919[iParam0];
}

int func_203(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_205())
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

int func_204()
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

int func_205()
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

void func_206()
{
	int iVar0;
	
	if (iLocal_162)
	{
		func_219(0);
		REMOVE_SCENARIO_BLOCKING_AREAS();
		CANCEL_MUSIC_EVENT("RE6_BOTH_DEAD_OS");
		if (iLocal_145 || iLocal_165)
		{
			if (Global_26004)
			{
				TRIGGER_MUSIC_EVENT("AC_STOP");
			}
			else
			{
				TRIGGER_MUSIC_EVENT("RE6_END");
			}
		}
		func_218();
		SET_RELATIONSHIP_BETWEEN_GROUPS(255, uLocal_177, 1862763509);
		SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, uLocal_177);
		if (!IS_PED_INJURED(PLAYER_PED_ID()))
		{
			if (!IS_PED_INJURED(uLocal_53))
			{
				SET_PED_CONFIG_FLAG(uLocal_53, 317, 1);
				if (!IS_PED_IN_ANY_VEHICLE(uLocal_53, 0))
				{
					RESET_PED_LAST_VEHICLE(uLocal_53);
				}
				if (IS_PED_IN_GROUP(uLocal_53))
				{
					REMOVE_PED_FROM_GROUP(uLocal_53);
				}
				SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_53, 0);
				SET_PED_CAN_BE_TARGETTED(uLocal_53, 1);
			}
			else if (!IS_ENTITY_DEAD(uLocal_53, 0))
			{
				SET_ENABLE_HANDCUFFS(uLocal_53, 1);
				SET_ENABLE_BOUND_ANKLES(uLocal_53, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_54)
		{
			if (!IS_PED_INJURED(iLocal_54[iVar0]) && !IS_PED_INJURED(PLAYER_PED_ID()))
			{
				_0xF1C03A5352243A30(iLocal_54[iVar0]);
				if (iLocal_69 || iLocal_76)
				{
					TASK_COMBAT_PED(iLocal_54[iVar0], PLAYER_PED_ID(), 0, 16);
				}
				else
				{
					TASK_SMART_FLEE_PED(iLocal_54[iVar0], PLAYER_PED_ID(), 1000f, -1, 0, 0);
					func_104();
				}
				SET_PED_KEEP_TASK(iLocal_54[iVar0], 1);
			}
			iVar0++;
		}
		DELETE_OBJECT(&(uLocal_61[0]));
		DELETE_OBJECT(&(uLocal_61[1]));
		if (DOES_ENTITY_EXIST(uLocal_58))
		{
			SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_58);
		}
		if (DOES_ENTITY_EXIST(uLocal_60))
		{
			if (IS_ENTITY_ATTACHED(uLocal_60))
			{
				DETACH_ENTITY(uLocal_60, 1, 1);
			}
			SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_60);
		}
		if (DOES_BLIP_EXIST(uLocal_163))
		{
			REMOVE_BLIP(&uLocal_163);
		}
		iLocal_64 = 0;
		while (iLocal_64 <= 1)
		{
			if (DOES_BLIP_EXIST(uLocal_111[iLocal_64]))
			{
				REMOVE_BLIP(&(uLocal_111[iLocal_64]));
			}
			iLocal_64++;
		}
		if (DOES_BLIP_EXIST(uLocal_114))
		{
			REMOVE_BLIP(&uLocal_114);
		}
		if (DOES_CAM_EXIST(uLocal_77))
		{
			DESTROY_CAM(uLocal_77, 0);
		}
		ENABLE_DISPATCH_SERVICE(5, 1);
		ENABLE_DISPATCH_SERVICE(3, 1);
		SET_WANTED_LEVEL_MULTIPLIER(1f);
		SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 1, 1);
	}
	func_207(-1);
	TERMINATE_THIS_THREAD();
}

void func_207(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_160())
	{
		func_211(iParam0);
		SET_MISSION_NAME(0, 0);
		Global_106556 = GET_GAME_TIMER();
		func_210(30000);
		StringCopy(&cVar0, func_209(Global_106554, 1), 64);
		if (func_38(Global_106554) > 0)
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
	func_208(&Global_25824);
	Global_106555 = 0;
	func_163(-1);
}

void func_208(var uParam0)
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

char* func_209(int iParam0, bool bParam1)
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

void func_210(int iParam0)
{
	Global_36976 = (GET_GAME_TIMER() + iParam0);
}

void func_211(int iParam0)
{
	func_212(iParam0, 0, func_217(iParam0));
}

void func_212(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_181();
	func_215(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_214(iParam0, &uVar0);
	Var1 = { func_213(&uVar0) };
}

struct<16> func_213(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_175(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_174(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_173(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_176(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_179(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_177(*uParam0), 64);
	return Var0;
}

void func_214(int iParam0, var uParam1)
{
	Global_106565.f_24989.f_43[iParam0] = *uParam1;
}

void func_215(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_177(*uParam0);
	iVar1 = func_179(*uParam0);
	iVar2 = func_176(*uParam0);
	iVar3 = func_175(*uParam0);
	iVar4 = func_174(*uParam0);
	iVar5 = func_173(*uParam0);
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
	iVar6 = func_172(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_172(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_216(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_216(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_187(uParam0, iParam1);
	func_186(uParam0, iParam2);
	func_185(uParam0, iParam3);
	func_183(uParam0, iParam5);
	func_184(uParam0, iParam4);
	func_182(uParam0, iParam6);
}

int func_217(int iParam0)
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

void func_218()
{
	Global_26000 = 0;
	Global_26001 = 0;
	Global_26003 = 0;
	Global_26004 = 0;
	Global_26005 = 0;
}

void func_219(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		func_136(iVar0, bParam0);
		iVar0++;
	}
}

