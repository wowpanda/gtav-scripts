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
	vector3 vLocal_44 = { 0f, 0f, 0f };
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	vector3 vLocal_64 = { 0f, 0f, 0f };
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 16;
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
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	bool bLocal_242 = 0;
	bool bLocal_243 = 0;
	vector3 vLocal_244 = { 0f, 0f, 0f };
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	char* sLocal_248 = NULL;
	char* sLocal_249 = NULL;
	char* sLocal_250 = NULL;
	char* sLocal_251 = NULL;
	char* sLocal_252 = NULL;
	bool bLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	char* sLocal_257 = NULL;
	char* sLocal_258 = NULL;
	char* sLocal_259 = NULL;
	char* sLocal_260 = NULL;
	char* sLocal_261 = NULL;
	char* sLocal_262 = NULL;
	char* sLocal_263 = NULL;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	vector3 vLocal_271 = { 0f, 0f, 0f };
	vector3 vLocal_272 = { 0f, 0f, 0f };
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	bool bLocal_276 = 0;
	bool bLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	bool bLocal_282 = 0;
	vector3 vLocal_283 = { 0f, 0f, 0f };
	bool bLocal_284 = 0;
	struct<2> Local_285 = { 0, 5 } ;
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 5;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
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
	iLocal_238 = 8000;
	iLocal_241 = 8;
	iLocal_243 = 1;
	sLocal_249 = "S_M_Y_RANGER_01_WHITE_FULL_01";
	sLocal_250 = "RANDOM@ARRESTS";
	sLocal_251 = "RANDOM@ARRESTS@BUSTED";
	iLocal_255 = 1;
	vLocal_63 = { ScriptParam_285.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		bLocal_70 = true;
		func_199();
		func_169();
	}
	if (SYSTEM::VDIST(2411.32f, 4958.76f, 45.19f, vLocal_63) < 10f)
	{
		iLocal_51 = 1;
	}
	else
	{
		iLocal_51 = 2;
	}
	if (func_126(vLocal_63, 15, iLocal_51, 0, 0))
	{
		func_121(15);
	}
	else
	{
		HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(CAM::_0xDC9DA9E8789F5246());
		}
		switch (iLocal_46)
		{
			case 0:
				if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && !func_120()) && !func_107())
				{
					if (func_104())
					{
						iLocal_46 = 1;
					}
				}
				else
				{
					func_169();
				}
				break;
			
			case 1:
				if (func_100())
				{
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 0, true, 1);
					GRAPHICS::_0x54E22EA2C1956A8D(0f);
					func_89(1);
					iLocal_46 = 2;
				}
				else if (!func_88(200f))
				{
					func_169();
				}
				break;
			
			case 2:
				if (func_88(1128792064))
				{
					func_1();
				}
				else
				{
					func_169();
				}
				break;
		}
	}
}

void func_1()//Position - 0x1D2
{
	var uVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	
	MISC::SET_BIT(&uVar0, 3);
	MISC::SET_BIT(&uVar0, 4);
	iVar3 = 0;
	func_87();
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		PED::SET_PED_RESET_FLAG(iLocal_53, 129, true);
	}
	if (func_86(iLocal_53))
	{
		if (PED::IS_PED_BEING_STUNNED(iLocal_53, 0))
		{
			bLocal_284 = true;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_52) && (iLocal_47 != 2 && iLocal_47 != 1))
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			switch (iLocal_50)
			{
				case 0:
					GRAPHICS::DRAW_DEBUG_TEXT_2D("copChasesCriminal", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					if (SYSTEM::TIMERA() > 10)
					{
						if (!bLocal_68)
						{
							if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_52, 1227113341) == 7)
							{
								BRAIN::TASK_GO_TO_ENTITY(iLocal_52, iLocal_53, 4294967295, 1f, 3f, 1073741824, 0);
							}
						}
					}
					if (SYSTEM::TIMERA() > 4000)
					{
						if (!bLocal_68)
						{
							if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_53, 1805844857) == 7)
							{
								if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_53, 2277090178) == 1)
								{
									BRAIN::STOP_ANIM_PLAYBACK(iLocal_53, 2, 1);
								}
								BRAIN::TASK_SMART_FLEE_PED(iLocal_53, iLocal_52, 150f, 4294967295, 0, 0);
							}
						}
					}
					fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(iLocal_52, true), unk_0x8000C77B5F336760(iLocal_53, true), true);
					if (SYSTEM::TIMERA() > 8000 || fVar2 < 1.5f)
					{
						iVar3 = func_82();
						if (iVar3 == 1)
						{
							BRAIN::TASK_GO_TO_ENTITY(iLocal_52, iLocal_53, 4294967295, 1f, 0.01f, 1073741824, 0);
						}
					}
					if (SYSTEM::TIMERA() > 30000 && fVar2 < 10f)
					{
						iVar3 = 1;
					}
					if (SYSTEM::TIMERA() > 2000)
					{
						if (iVar3 || iLocal_270 == 1)
						{
							if (!func_81())
							{
								if (func_71(&uLocal_72, "REARRAU", "REARR_PCUFF", 4, iLocal_246, 0, 0))
								{
								}
								bLocal_282 = (PED::IS_PED_RAGDOLL(iLocal_53) || BRAIN::IS_PED_GETTING_UP(iLocal_53));
								if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_52, joaat("weapon_pistol"), 0))
								{
									WEAPON::GIVE_WEAPON_TO_PED(iLocal_52, joaat("weapon_pistol"), 4294967295, false, true);
								}
								WEAPON::SET_CURRENT_PED_WEAPON(iLocal_52, joaat("weapon_pistol"), true);
								vLocal_64 = { unk_0x8000C77B5F336760(iLocal_53, true) };
								NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_52);
								BRAIN::OPEN_SEQUENCE_TASK(&iLocal_67);
								if (!bLocal_282 && fVar2 > 2f)
								{
									BRAIN::TASK_SHOOT_AT_COORD(0, vLocal_64.x, vLocal_64.y, (vLocal_64.z + 4f), 1000, 1566631136);
								}
								BRAIN::TASK_LOOK_AT_ENTITY(0, iLocal_53, 4294967295, 2048, 2);
								BRAIN::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, iLocal_53, iLocal_53, 1f, 0, 3f, 1082130432, 1, 0, 3337513804);
								BRAIN::TASK_AIM_GUN_AT_ENTITY(0, iLocal_53, 5000, 0);
								CUTSCENE::_0x8D9DF6ECA8768583(iLocal_67);
								BRAIN::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
								BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_67);
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_52);
								PED::SET_PED_KEEP_TASK(iLocal_52, true);
								SYSTEM::SETTIMERA(0);
								iLocal_240 = MISC::GET_GAME_TIMER();
								if (bLocal_282)
								{
									NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_53);
									WEAPON::SET_PED_DROPS_WEAPON(iLocal_53);
									iLocal_50 = 4;
								}
								else
								{
									iLocal_50 = 2;
								}
							}
							else if (!iLocal_270)
							{
								BRAIN::TASK_GO_TO_ENTITY(iLocal_52, iLocal_53, 4294967295, 1f, 0.01f, 1073741824, 0);
								iLocal_270 = 1;
							}
						}
						else
						{
							func_70();
						}
					}
					else
					{
						GRAPHICS::DRAW_DEBUG_TEXT_2D("copChasesCriminal TIMERA() < 2000", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_52) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 0))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), iLocal_52))
							{
								NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_52);
								iLocal_50 = 1;
								BRAIN::TASK_STAND_STILL(iLocal_52, 500);
							}
						}
					}
					break;
				
				case 1:
					if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_52, 3312640106) == 7)
					{
						BRAIN::TASK_GO_TO_ENTITY(iLocal_52, iLocal_53, 4294967295, 1f, 3f, 1073741824, 0);
						iLocal_50 = 0;
					}
					break;
				
				case 2:
					if ((MISC::GET_GAME_TIMER() - iLocal_240) > 1000)
					{
						vVar1 = { 0f, 0f, (ENTITY::GET_ENTITY_HEADING(iLocal_53) * 3f) };
						BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_53, vVar1, 2f, 4294967295, 1f, 1024, 1193033728);
						iLocal_50 = 3;
					}
					break;
				
				case 3:
					if ((MISC::GET_GAME_TIMER() - iLocal_240) > 4500)
					{
						iLocal_50 = 4;
					}
					break;
				
				case 4:
					bLocal_68 = true;
					BRAIN::OPEN_SEQUENCE_TASK(&iLocal_67);
					BRAIN::TASK_PLAY_ANIM(0, sLocal_250, "idle_2_hands_up", 2f, -8f, 4294967295, 0, 0, 0, 0, 0);
					BRAIN::TASK_PLAY_ANIM(0, sLocal_250, "kneeling_arrest_idle", 8f, -8f, 4294967295, 1, 0, 0, 0, 0);
					CUTSCENE::_0x8D9DF6ECA8768583(iLocal_67);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
					BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_67);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_53);
					PED::SET_PED_KEEP_TASK(iLocal_53, true);
					WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_53, 1);
					iLocal_50 = 5;
					break;
				
				case 5:
					if (iLocal_48 == 3)
					{
						if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_52, 242628503) == 7)
						{
							NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_52);
							if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_52, joaat("weapon_pistol"), 0))
							{
								WEAPON::GIVE_WEAPON_TO_PED(iLocal_52, joaat("weapon_pistol"), 4294967295, false, true);
							}
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_52, joaat("weapon_pistol"), true);
							BRAIN::OPEN_SEQUENCE_TASK(&iLocal_67);
							BRAIN::TASK_AIM_GUN_AT_ENTITY(0, iLocal_53, 4294967295, 0);
							CUTSCENE::_0x8D9DF6ECA8768583(iLocal_67);
							BRAIN::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
							BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_67);
							PED::SET_PED_KEEP_TASK(iLocal_52, true);
							iLocal_50 = 6;
						}
					}
					break;
				
				case 6:
					if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_55, 0) && !PED::IS_PED_INJURED(iLocal_54))
					{
						VEHICLE::_0xBE5C1255A1830FF5(iLocal_55, 1);
						if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_52, 2277090178) == 7)
						{
							if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_54, 3021937204) == 7)
							{
								if (VEHICLE::_0x639431E895B9AA57(iLocal_53, iLocal_55, 2, 0, false))
								{
									if (!PED::IS_PED_INJURED(iLocal_53))
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_53, iLocal_55))
										{
											if (!PED::IS_PED_IN_COMBAT(iLocal_53, 0))
											{
												if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_53, 2500551826) == 7)
												{
													BRAIN::OPEN_SEQUENCE_TASK(&iLocal_67);
													BRAIN::TASK_PLAY_ANIM(0, sLocal_250, "kneeling_arrest_get_up", 8f, -2f, 4294967295, 0, 0, 0, 0, 0);
													CUTSCENE::_0x8D9DF6ECA8768583(iLocal_67);
													BRAIN::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
													BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_67);
													PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_66, iLocal_65);
													PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_65, iLocal_66);
												}
											}
										}
									}
									if (!PED::IS_PED_INJURED(iLocal_52))
									{
										PED::_0x570389D1C3DE3C6B(iLocal_52);
										if (!PED::IS_PED_IN_COMBAT(iLocal_52, 0))
										{
											if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_55, 0))
											{
												if (!func_81())
												{
													if (func_71(&uLocal_72, "REARRAU", "REARR_INCAR", 4, iLocal_246, 0, 0))
													{
														if (func_69(iLocal_52, iLocal_55) == 2)
														{
															if (PED::IS_PED_FACING_PED(iLocal_54, iLocal_53, 180f))
															{
																vLocal_283 = { 2.978f, -0.75f, 1f };
															}
															else
															{
																vLocal_283 = { 2.978f, 0.75f, 1f };
															}
														}
														else if (PED::IS_PED_FACING_PED(iLocal_54, iLocal_53, 180f))
														{
															vLocal_283 = { -2.978f, -0.75f, 1f };
														}
														else
														{
															vLocal_283 = { -2.978f, 0.75f, 1f };
														}
														BRAIN::OPEN_SEQUENCE_TASK(&iLocal_67);
														BRAIN::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_55, vLocal_283), iLocal_53, 0.75f, false, 0.5f, 4f, true, 0, 0, 3337513804, 60000);
														BRAIN::TASK_AIM_GUN_AT_ENTITY(0, iLocal_53, 4294967295, 0);
														CUTSCENE::_0x8D9DF6ECA8768583(iLocal_67);
														BRAIN::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
														BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_67);
														PED::SET_PED_KEEP_TASK(iLocal_52, true);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_55, 0);
														iLocal_238 = 8000;
														SYSTEM::SETTIMERB(0);
														iLocal_269 = MISC::GET_GAME_TIMER();
														iLocal_50 = 7;
													}
												}
											}
										}
									}
								}
								else
								{
									func_68();
								}
							}
						}
					}
					break;
				
				case 7:
					if (!PED::IS_PED_INJURED(iLocal_52))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_52, 35f, 35f, 35f, 0, 1, 0))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_269) > 8000)
							{
								if (!func_81())
								{
									BRAIN::TASK_LOOK_AT_ENTITY(iLocal_52, AUDIO::_0x0626A247D2405330(), 6000, 2048, 2);
									func_71(&uLocal_72, "REARRAU", "REARR_PLEAVE", 4, iLocal_246, 0, 0);
									iLocal_238 = 8000;
									iLocal_269 = MISC::GET_GAME_TIMER();
								}
							}
						}
						if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_55, 0))
						{
							if (iLocal_62)
							{
								if (func_69(iLocal_52, iLocal_55) == 2)
								{
									BRAIN::TASK_ENTER_VEHICLE(iLocal_53, iLocal_55, 4294967295, 2, 1f, 1, 0);
								}
								else
								{
									BRAIN::TASK_ENTER_VEHICLE(iLocal_53, iLocal_55, 4294967295, 1, 1f, 1, 0);
								}
								iLocal_50 = 8;
							}
							else if (iLocal_61)
							{
								fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(iLocal_53, true), unk_0x8000C77B5F336760(iLocal_55, true), true);
								if (fVar4 < 4f && iLocal_273 == 0)
								{
									BRAIN::TASK_GOTO_ENTITY_OFFSET_XY(iLocal_53, iLocal_55, 60000, 0.5f, vLocal_283.x, vLocal_283.y, 1f, 1);
									iLocal_273 = 1;
								}
								else if (fVar4 < 3f)
								{
									NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_53);
									iLocal_62 = 1;
								}
							}
							else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_250, "kneeling_arrest_get_up", 3))
							{
								if (func_69(iLocal_52, iLocal_55) == 2)
								{
									vLocal_283 = { 1.578f, -0.5f, 1f };
								}
								else
								{
									vLocal_283 = { -1.578f, -0.5f, 1f };
								}
								BRAIN::TASK_GOTO_ENTITY_OFFSET_XY(iLocal_53, iLocal_55, 60000, 0.5f, vLocal_283.x, vLocal_283.y, 1f, 1);
								if (bLocal_284)
								{
									PED::SET_PED_MOVEMENT_CLIPSET(iLocal_53, "MOVE_M@BAIL_BOND_TAZERED", 1048576000);
								}
								else
								{
									PED::SET_PED_MOVEMENT_CLIPSET(iLocal_53, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
								}
								iLocal_61 = 1;
							}
						}
					}
					break;
				
				case 8:
					if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_55, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_54))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_53, iLocal_55))
							{
								if (HUD::DOES_BLIP_EXIST(iLocal_56))
								{
									HUD::REMOVE_BLIP(&iLocal_56);
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_57))
								{
									HUD::REMOVE_BLIP(&iLocal_57);
								}
								if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_52, iLocal_55))
								{
									BRAIN::TASK_VEHICLE_DRIVE_WANDER(iLocal_54, iLocal_55, 10f, 786603);
									PED::SET_PED_KEEP_TASK(iLocal_54, true);
									ENTITY::SET_ENTITY_HEALTH(iLocal_52, false);
									func_169();
								}
								else if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_52, 2500551826) == 7)
								{
									NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_52);
									BRAIN::TASK_ENTER_VEHICLE(iLocal_52, iLocal_55, 20000, 0, 1f, 1, 0);
									PED::SET_PED_KEEP_TASK(iLocal_52, true);
								}
							}
						}
					}
					break;
				}
			}
	}
	func_54();
	if (PED::IS_PED_INJURED(iLocal_53))
	{
	}
	if (PED::IS_PED_INJURED(iLocal_52))
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (iLocal_47 == 2)
			{
				func_12();
			}
			else
			{
				if (iLocal_47 == 1 || iLocal_47 == 3)
				{
					if (!func_81())
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(iLocal_53, true), unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), true) < 20f)
						{
							func_71(&uLocal_72, "REARRAU", sLocal_266, 4, iLocal_246, 0, 0);
						}
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_250, "kneeling_arrest_idle", 3))
				{
					BRAIN::OPEN_SEQUENCE_TASK(&iLocal_67);
					BRAIN::TASK_PLAY_ANIM(0, sLocal_250, "kneeling_arrest_get_up", 2f, -2f, 4294967295, 0, 0, 0, 0, 0);
					BRAIN::TASK_SMART_FLEE_PED(0, AUDIO::_0x0626A247D2405330(), 150f, 4294967295, 0, 0);
					CUTSCENE::_0x8D9DF6ECA8768583(iLocal_67);
					BRAIN::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
					BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_67);
				}
				else
				{
					BRAIN::TASK_SMART_FLEE_PED(iLocal_53, AUDIO::_0x0626A247D2405330(), 150f, 4294967295, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_53, true);
				}
				SYSTEM::WAIT(0);
				if (iLocal_47 == 0)
				{
					iLocal_47 = 2;
				}
				func_169();
			}
		}
	}
	if (PED::IS_PED_INJURED(iLocal_53))
	{
		if (!bLocal_59)
		{
			if (func_11())
			{
				func_3(0);
			}
		}
	}
	if (iLocal_50 == 5 || iLocal_50 == 6)
	{
		if (!bLocal_59)
		{
			if (iLocal_47 == 3)
			{
				if (func_11())
				{
					func_3(0);
				}
			}
			else
			{
				func_3(1);
			}
		}
	}
	func_2();
}

void func_2()//Position - 0xBEC
{
	int iVar0;
	vector3 vVar1;
	
	vVar1 = { 40f, 40f, 20f };
	if (MISC::GET_GAME_TIMER() > iLocal_247 + 1000)
	{
		if (!PED::IS_PED_INJURED(iLocal_52))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_52, AUDIO::_0x0626A247D2405330(), vVar1, 0, 1, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, AUDIO::_0x0626A247D2405330(), vVar1, 0, 1, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			iLocal_246 = 1;
		}
		else
		{
			iLocal_246 = 0;
		}
		iLocal_247 = MISC::GET_GAME_TIMER();
	}
}

void func_3(bool bParam0)//Position - 0xC84
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	if (bParam0)
	{
		sVar0 = "radio_enter";
		sVar1 = "radio_chatter";
		sVar2 = "radio_exit";
	}
	else
	{
		sVar0 = "generic_radio_enter";
		sVar1 = "generic_radio_chatter";
		sVar2 = "generic_radio_exit";
	}
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		switch (iLocal_48)
		{
			case 0:
				if ((iLocal_237 == 3 || iLocal_50 == 5) || iLocal_50 == 6)
				{
					if (!func_81())
					{
						NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_52);
						BRAIN::OPEN_SEQUENCE_TASK(&iLocal_67);
						BRAIN::TASK_LOOK_AT_COORD(0, unk_0x8000C77B5F336760(iLocal_53, false), 10000, 0, 2);
						BRAIN::TASK_PLAY_ANIM(0, sLocal_250, sVar0, 8f, -4f, 4294967295, 0, 0, 0, 0, 0);
						BRAIN::TASK_PLAY_ANIM(0, sLocal_250, sVar1, 16f, -8f, 4294967295, 1, 0, 0, 0, 0);
						CUTSCENE::_0x8D9DF6ECA8768583(iLocal_67);
						BRAIN::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
						BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_67);
						iLocal_48 = 1;
					}
				}
				break;
			
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_52, sLocal_250, sVar1, 3))
				{
					if (!PED::IS_PED_INJURED(iLocal_53))
					{
						if (!func_81())
						{
							if (func_71(&uLocal_72, "REARRAU", "REARR_PRAD1", 4, iLocal_246, 0, 0))
							{
								iLocal_48 = 2;
							}
						}
					}
					else if (func_10())
					{
						if (!func_81())
						{
							if (func_71(&uLocal_72, "REARRAU", "REARR_PRAD2", 4, iLocal_246, 0, 0))
							{
								iLocal_48 = 2;
							}
						}
					}
				}
				break;
			
			case 2:
				if (!func_81())
				{
					if (func_10())
					{
						if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_55, 0))
						{
							VEHICLE::DISABLE_VEHICLE_IMPACT_EXPLOSION_ACTIVATION(iLocal_55, 0);
							VEHICLE::SET_VEHICLE_SIREN(iLocal_55, 1);
						}
						NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_52);
						BRAIN::OPEN_SEQUENCE_TASK(&iLocal_67);
						BRAIN::TASK_PLAY_ANIM(0, sLocal_250, sVar2, 8f, -1.5f, 4294967295, 0, 0, 0, 0, 0);
						CUTSCENE::_0x8D9DF6ECA8768583(iLocal_67);
						BRAIN::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
						BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_67);
						MISC::_0x1327E2FE9746BAEE(iLocal_52, 0, 0);
						func_8();
						iLocal_48 = 3;
					}
				}
				break;
			
			case 3:
				if (!bLocal_68)
				{
					func_7();
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_53) || !ENTITY::IS_ENTITY_DEAD(iLocal_53, 0))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_53))
					{
						if (!func_81())
						{
							func_71(&uLocal_72, "REARRAU", "REARR_PWTF", 4, iLocal_246, 0, 0);
						}
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_52, 35f, 35f, 35f, 0, 1, 0))
				{
					PED::SET_IK_TARGET(iLocal_52, 1, AUDIO::_0x0626A247D2405330(), 31086, 0f, 0f, 0f, 0, 4294967295, 4294967295);
					PED::SET_IK_TARGET(AUDIO::_0x0626A247D2405330(), 1, iLocal_52, 31086, 0f, 0f, 0f, 0, 4294967295, 4294967295);
					if (SYSTEM::TIMERB() > iLocal_238 || iLocal_254)
					{
						if (iLocal_47 == 3 || iLocal_47 == 0)
						{
							if (!PED::IS_PED_INJURED(iLocal_53))
							{
								if (iLocal_238 == 8000 || iLocal_254)
								{
									if (bLocal_253)
									{
										func_6();
									}
									else
									{
										func_4();
									}
								}
								else if (!func_81())
								{
									BRAIN::TASK_LOOK_AT_ENTITY(iLocal_52, AUDIO::_0x0626A247D2405330(), 500, 2048, 2);
									func_71(&uLocal_72, "REARRAU", "REARR_PLEAVE", 4, iLocal_246, 0, 0);
									iLocal_238 = 8000;
								}
							}
							else if (iLocal_238 == 8000)
							{
								if (!func_81())
								{
									func_71(&uLocal_72, "REARRAU", "REARR_PRA2", 4, iLocal_246, 0, 0);
									iLocal_238 = 20000;
								}
							}
							else if (!func_81())
							{
								func_71(&uLocal_72, "REARRAU", "REARR_PRA2", 4, iLocal_246, 0, 0);
								iLocal_238 = 8000;
							}
							SYSTEM::SETTIMERB(0);
						}
						else
						{
							if (PED::IS_PED_INJURED(iLocal_53))
							{
								if (!func_81())
								{
									func_71(&uLocal_72, "REARRAU", "REARR_PRA2", 4, iLocal_246, 0, 0);
									iLocal_238 = 30000;
								}
							}
							else if (!func_81())
							{
								BRAIN::TASK_LOOK_AT_ENTITY(iLocal_52, AUDIO::_0x0626A247D2405330(), 6000, 2048, 2);
								func_71(&uLocal_72, "REARRAU", "REARR_PLEAVE", 4, iLocal_246, 0, 0);
								iLocal_238 = MISC::GET_RANDOM_INT_IN_RANGE(8, 22);
								iLocal_238 *= 30000;
							}
							SYSTEM::SETTIMERB(0);
						}
					}
				}
				if (iLocal_50 != 8)
				{
					if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_55, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_53))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_53, iLocal_55, 0))
							{
								func_68();
							}
						}
					}
					else
					{
						func_68();
					}
				}
				break;
			}
	}
}

void func_4()//Position - 0x1054
{
	if (!iLocal_254)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
		{
			case 0:
				sLocal_252 = "idle_a";
				break;
			
			case 1:
				sLocal_252 = "idle_b";
				break;
			
			case 2:
				sLocal_252 = "idle_c";
				break;
		}
		BRAIN::OPEN_SEQUENCE_TASK(&iLocal_67);
		BRAIN::TASK_PLAY_ANIM(0, sLocal_251, "enter", 8f, -4f, 4294967295, 0, 0, 0, 0, 0);
		BRAIN::TASK_PLAY_ANIM(0, sLocal_251, sLocal_252, 8f, -4f, 4294967295, 0, 0, 0, 0, 0);
		BRAIN::TASK_PLAY_ANIM(0, sLocal_251, "exit", 8f, -4f, 4294967295, 0, 0, 0, 0, 0);
		BRAIN::TASK_PLAY_ANIM(0, sLocal_250, "kneeling_arrest_idle", 8f, -8f, 4294967295, 9, 0, 0, 0, 0);
		CUTSCENE::_0x8D9DF6ECA8768583(iLocal_67);
		BRAIN::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
		BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_67);
		iLocal_254 = 1;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_251, "enter", 3))
	{
		if (func_5())
		{
			func_71(&uLocal_72, "REARRAU", "REARR_PRAND", 4, iLocal_246, 0, 0);
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_251, "exit", 3))
	{
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_251, sLocal_252, 3))
	{
		func_71(&uLocal_72, "REARRAU", sLocal_264, 4, iLocal_246, 0, 0);
	}
	else
	{
		func_8();
	}
}

int func_5()//Position - 0x1199
{
	if (MISC::GET_GAME_TIMER() > iLocal_256 + 6000)
	{
		iLocal_256 = MISC::GET_GAME_TIMER();
		return 1;
	}
	return 0;
}

void func_6()//Position - 0x11BA
{
	if (!iLocal_254)
	{
		BRAIN::OPEN_SEQUENCE_TASK(&iLocal_67);
		BRAIN::TASK_PLAY_ANIM(0, sLocal_250, "radio_enter", 8f, -4f, 4294967295, 0, 0, 0, 0, 0);
		BRAIN::TASK_PLAY_ANIM(0, sLocal_250, "radio_chatter", 8f, -4f, 4294967295, 0, 0, 0, 0, 0);
		BRAIN::TASK_PLAY_ANIM(0, sLocal_250, "radio_exit", 8f, -1.5f, 4294967295, 0, 0, 0, 0, 0);
		BRAIN::TASK_AIM_GUN_AT_ENTITY(0, iLocal_53, 4294967295, 0);
		CUTSCENE::_0x8D9DF6ECA8768583(iLocal_67);
		BRAIN::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
		BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_67);
		iLocal_254 = 1;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_52, sLocal_250, "radio_chatter", 3))
	{
		if (func_5())
		{
			func_71(&uLocal_72, "REARRAU", "REARR_PRAD3", 4, iLocal_246, 0, 0);
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_52, sLocal_250, "radio_exit", 3))
	{
		iLocal_255 = 0;
		func_8();
	}
}

void func_7()//Position - 0x128E
{
	switch (iLocal_49)
	{
		case 0:
			if (!bLocal_68)
			{
				if (iLocal_47 == 3)
				{
					iLocal_49 = 1;
				}
				else if (iLocal_47 == 0)
				{
					iLocal_49 = 1;
				}
				ENTITY::IS_ENTITY_DEAD(iLocal_52, 0);
				ENTITY::IS_ENTITY_DEAD(iLocal_53, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_52) && ENTITY::DOES_ENTITY_EXIST(iLocal_53))
				{
					BRAIN::TASK_GOTO_ENTITY_OFFSET_XY(iLocal_52, iLocal_53, 4294967295, 3f, 0f, 0f, 1f, 0);
				}
				SYSTEM::SETTIMERB(0);
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(iLocal_56))
			{
				HUD::REMOVE_BLIP(&iLocal_56);
			}
			iLocal_49 = 2;
			iLocal_238 = 8000;
			iLocal_279 = MISC::GET_GAME_TIMER();
			break;
		
		case 2:
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_55, 0))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_279) > 20000)
				{
					if (!PED::IS_PED_INJURED(iLocal_54))
					{
						if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_54, 3021937204) == 7)
						{
							BRAIN::TASK_ENTER_VEHICLE(iLocal_52, iLocal_55, 4294967295, 0, 1f, 1, 0);
							iLocal_49 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_55, 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_54))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_52, iLocal_55))
					{
						BRAIN::TASK_VEHICLE_DRIVE_WANDER(iLocal_54, iLocal_55, 10f, 786603);
						PED::SET_PED_KEEP_TASK(iLocal_54, true);
						func_169();
					}
				}
			}
			break;
	}
}

void func_8()//Position - 0x13AD
{
	bLocal_253 = func_9();
	bLocal_253 = iLocal_255;
	iLocal_238 = 20000;
	iLocal_254 = 0;
}

int func_9()//Position - 0x13CB
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_10()//Position - 0x13EC
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	var uVar3;
	int iVar4;
	
	iVar4 = joaat("PRANGER");
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_55, 0))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar4);
	if (STREAMING::HAS_MODEL_LOADED(iVar4))
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(unk_0x8000C77B5F336760(iLocal_52, false), 1, &vVar0, 1, 3f, 0f))
		{
			if (VEHICLE::_0xA4822F1CF23F4810(&vVar0, &vVar2, &uVar3, 0f, 180f, 50f, true, 1, 1))
			{
				iLocal_55 = VEHICLE::CREATE_VEHICLE(iVar4, vVar2, 0f, true, true, false);
				iLocal_54 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_55, 6, joaat("s_m_y_ranger_01"), 4294967295, 1, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_54, 294, true);
				if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_54, joaat("weapon_pistol"), 0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_54, joaat("weapon_pistol"), 4294967295, false, true);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_54, joaat("weapon_pistol"), true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_54, iLocal_65);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_55, 3);
				ENTITY::SET_ENTITY_HEALTH(iLocal_54, true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_55, 1084227584);
				VEHICLE::_0x2B6747FAA9DB9D6B(iLocal_55, 1);
				VEHICLE::_0x25367DE49D64CF16(iLocal_55, 1);
				vVar0 = { unk_0x8000C77B5F336760(iLocal_55, true) };
				vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) - vVar0 };
				ENTITY::SET_ENTITY_HEADING(iLocal_55, MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y));
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(unk_0x8000C77B5F336760(iLocal_52, false), 1, &vVar0, 1, 3f, 0f);
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, 2528.563f, 2639.115f, 36.9446f, true) < 75f)
				{
					vVar0 = { 2473.601f, 2496.765f, 40.87f };
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(2538.71f, 2592.007f, 36.9446f, vVar0, true) < 16f)
				{
					vVar0 = { 2473.601f, 2496.765f, 40.87f };
				}
				BRAIN::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_54, iLocal_55, vVar0, 4, 7f, 786471, 5f, -1f, 1);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_55, 4f);
				VEHICLE::SET_VEHICLE_SIREN(iLocal_55, 1);
				iLocal_71 = 1;
				VEHICLE::SET_RANDOM_TRAINS(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_11()//Position - 0x15AE
{
	if (iLocal_47 != 3)
	{
		iLocal_237 = 3;
	}
	switch (iLocal_237)
	{
		case 0:
			if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_52, 242628503) == 7 || MISC::GET_GAME_TIMER() > iLocal_240 + 15000)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_52, 25f, 25f, 25f, 0, 1, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_52))
					{
						NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_52);
						BRAIN::OPEN_SEQUENCE_TASK(&iLocal_67);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, 0))
						{
							BRAIN::TASK_GO_TO_ENTITY(0, iLocal_53, 4294967295, 3.5f, 2f, 1073741824, 0);
						}
						BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, AUDIO::_0x0626A247D2405330(), 2000);
						CUTSCENE::_0x8D9DF6ECA8768583(iLocal_67);
						BRAIN::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
						BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_67);
						iLocal_237 = 1;
					}
				}
				else
				{
					iLocal_237 = 3;
				}
			}
			break;
		
		case 1:
			if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_52, 242628503) == 1)
			{
				if (BRAIN::GET_SEQUENCE_PROGRESS(iLocal_52) > 0)
				{
					if (!func_81())
					{
						if (iLocal_239 < 2)
						{
							func_71(&uLocal_72, "REARRAU", "REARR_PTHANK", 4, iLocal_246, 0, 0);
							if (HUD::DOES_BLIP_EXIST(iLocal_56))
							{
								HUD::SET_BLIP_AS_FRIENDLY(iLocal_56, true);
							}
						}
						else
						{
							func_71(&uLocal_72, "REARRAU", "REARR_PHELP", 4, iLocal_246, 0, 0);
						}
						iLocal_237 = 2;
					}
				}
			}
			else if (!func_81())
			{
				if (iLocal_239 < 2)
				{
					func_71(&uLocal_72, "REARRAU", "REARR_PTHANK", 4, iLocal_246, 0, 0);
					if (HUD::DOES_BLIP_EXIST(iLocal_56))
					{
						HUD::SET_BLIP_AS_FRIENDLY(iLocal_56, true);
					}
				}
				else
				{
					func_71(&uLocal_72, "REARRAU", "REARR_PHELP", 4, iLocal_246, 0, 0);
				}
				iLocal_237 = 2;
			}
			break;
		
		case 2:
			if (!func_81())
			{
				iLocal_237 = 3;
			}
			BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_52, AUDIO::_0x0626A247D2405330(), 100);
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_12()//Position - 0x1753
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, AUDIO::_0x0626A247D2405330(), 1);
	bVar1 = func_53();
	if (bVar1)
	{
	}
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (!bVar0)
		{
			if (!bVar1)
			{
				if (iLocal_47 == 2 || bLocal_68 == 1)
				{
					switch (iLocal_241)
					{
						case 8:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 8", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							HUD::SET_BLIP_AS_FRIENDLY(iLocal_57, true);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, 0) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_250, "kneeling_arrest_idle", 3))
							{
								BRAIN::OPEN_SEQUENCE_TASK(&iLocal_67);
								BRAIN::TASK_PLAY_ANIM(0, sLocal_250, "kneeling_arrest_get_up", 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
								CUTSCENE::_0x8D9DF6ECA8768583(iLocal_67);
								BRAIN::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
								BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_67);
								iLocal_241 = 9;
							}
							else
							{
								iLocal_241 = 3;
							}
							break;
						
						case 9:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 9", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_53, 242628503) == 7)
							{
								iLocal_241 = 0;
							}
							break;
						
						case 0:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 0", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, AUDIO::_0x0626A247D2405330(), 75f, 75f, 75f, 0, 1, 0))
							{
								AUDIO::STOP_PED_SPEAKING(iLocal_53, true);
								iLocal_241 = 3;
							}
							break;
						
						case 1:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 1", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_53, unk_0x8000C77B5F336760(iLocal_52, false), 4f, 4f, 3f, false, true, 0))
							{
								iLocal_241 = 2;
							}
							else
							{
								NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_53);
								BRAIN::OPEN_SEQUENCE_TASK(&iLocal_67);
								BRAIN::TASK_LOOK_AT_COORD(0, unk_0x8000C77B5F336760(iLocal_52, false), 1000, 0, 2);
								BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, unk_0x8000C77B5F336760(iLocal_52, false), 2f, 4294967295, 3f, 0, 1193033728);
								CUTSCENE::_0x8D9DF6ECA8768583(iLocal_67);
								BRAIN::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
								BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_67);
								iLocal_241 = 2;
							}
							break;
						
						case 2:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 2", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_53, unk_0x8000C77B5F336760(iLocal_52, false), 4f, 4f, 3f, false, true, 0))
							{
								if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_53, 242628503) == 7 || func_71(&uLocal_72, "REARRAU", sLocal_263, 4, iLocal_246, 0, 0))
								{
									iLocal_241 = 6;
								}
							}
							else if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_53, 242628503) == 7)
							{
								BRAIN::OPEN_SEQUENCE_TASK(&iLocal_67);
								BRAIN::TASK_LOOK_AT_COORD(0, unk_0x8000C77B5F336760(iLocal_52, false), 1000, 0, 2);
								BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, unk_0x8000C77B5F336760(iLocal_52, false), 2f, 4294967295, 3f, 0, 1193033728);
								CUTSCENE::_0x8D9DF6ECA8768583(iLocal_67);
								BRAIN::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
								BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_67);
							}
							break;
						
						case 3:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 3", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, AUDIO::_0x0626A247D2405330(), 5f, 5f, 3f, 0, 1, 0))
							{
								iLocal_241 = 4;
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, AUDIO::_0x0626A247D2405330(), 75f, 75f, 75f, 0, 1, 0))
							{
								if (!func_81())
								{
									NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_53);
									BRAIN::OPEN_SEQUENCE_TASK(&iLocal_67);
									BRAIN::TASK_GO_TO_ENTITY(0, AUDIO::_0x0626A247D2405330(), 4294967295, 8f, 2f, 1073741824, 0);
									CUTSCENE::_0x8D9DF6ECA8768583(iLocal_67);
									BRAIN::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
									BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_67);
									iLocal_241 = 4;
								}
							}
							else
							{
								iLocal_241 = 6;
							}
							break;
						
						case 4:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 4", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, AUDIO::_0x0626A247D2405330(), 9f, 9f, 9f, 0, 1, 0))
							{
								iLocal_280 = MISC::GET_GAME_TIMER();
								iLocal_241 = 7;
							}
							break;
						
						case 7:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 7", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!PED::IS_PED_HEADTRACKING_PED(iLocal_53, AUDIO::_0x0626A247D2405330()))
							{
								BRAIN::TASK_LOOK_AT_ENTITY(iLocal_53, AUDIO::_0x0626A247D2405330(), 4294967295, 2064, 2);
							}
							if (!PED::IS_PED_FACING_PED(iLocal_53, AUDIO::_0x0626A247D2405330(), 30f))
							{
								BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_53, AUDIO::_0x0626A247D2405330(), 4294967295);
							}
							if ((MISC::GET_GAME_TIMER() - iLocal_280) > 2000)
							{
								iLocal_241 = 5;
							}
							break;
						
						case 5:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 5", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_250, "Thanks_Male_05", 3) || BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_53, 242628503) == 7)
							{
								if (!func_81())
								{
									if (iLocal_239 < 2)
									{
										func_71(&uLocal_72, "REARRAU", sLocal_258, 4, iLocal_246, 0, 0);
										BRAIN::TASK_PLAY_ANIM(iLocal_53, sLocal_250, "Thanks_Male_05", 16f, -16f, 4294967295, 16, 0, 0, 0, 0);
									}
									else
									{
										func_71(&uLocal_72, "REARRAU", sLocal_262, 4, iLocal_246, 0, 0);
									}
									func_15(func_48(), 1, 250, 0, 0);
									BRAIN::TASK_CLEAR_LOOK_AT(iLocal_53);
									iLocal_241 = 6;
								}
							}
							break;
						
						case 6:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 6", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!func_81())
							{
								BRAIN::TASK_SMART_FLEE_PED(iLocal_53, AUDIO::_0x0626A247D2405330(), 150f, 4294967295, 0, 0);
								func_169();
							}
							break;
						}
				}
			}
			else
			{
				if (!func_81())
				{
					func_71(&uLocal_72, "REARRAU", sLocal_265, 4, iLocal_246, 0, 0);
				}
				BRAIN::TASK_SMART_FLEE_PED(iLocal_53, AUDIO::_0x0626A247D2405330(), 150f, 4294967295, 0, 0);
				func_169();
			}
		}
		else
		{
			func_13();
			BRAIN::TASK_SMART_FLEE_PED(iLocal_53, AUDIO::_0x0626A247D2405330(), 150f, 4294967295, 0, 0);
			if (bVar0 == 1)
			{
				iLocal_47 = 1;
			}
			if (!func_81())
			{
				func_71(&uLocal_72, "REARRAU", sLocal_262, 4, iLocal_246, 0, 0);
			}
			func_169();
		}
	}
}

void func_13()//Position - 0x1C96
{
	Global_3960 = 0;
	func_14();
}

void func_14()//Position - 0x1CA6
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

void func_15(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1CCA
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
	func_16(Global_19E56.f_6D76[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
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

int func_16(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1DB1
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_47();
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
					func_46(99, 1);
					func_45(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_45(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_45(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_29(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_25(5))
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
							func_45(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_45(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_45(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_25(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_45(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_45(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_45(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_45(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_45(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_45(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_45(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_45(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_45(joaat("sp2_money_spent_property"), iParam3);
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
									func_45(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_45(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_45(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_45(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_45(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_45(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_25(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_45(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_45(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_45(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_45(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_45(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_45(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_24(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_46(95, iParam3);
					break;
				
				case 1:
					func_46(97, iParam3);
					break;
				
				case 2:
					func_46(96, iParam3);
					break;
			}
			func_46(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_19(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_19(iVar1);
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
					func_45(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_45(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_45(joaat("sp2_total_cash_earned"), iParam3);
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
	func_18(iParam0);
	if (Global_8D15 == 15)
	{
		func_17(0);
	}
	return 1;
}

void func_17(bool bParam0)//Position - 0x23B0
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

void func_18(int iParam0)//Position - 0x2632
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

void func_19(int iParam0)//Position - 0x268C
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_22(129, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_22(135, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_22(136, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_22(137, 0, 4294967295, 1);
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
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_5038.f_1D7, iParam0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_200000[func_21() /*12745*/].f_1FF2.f_A, iParam0))
	{
		bVar0 = true;
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_5038.f_1D7), iParam0);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_200000[func_21() /*12745*/].f_1FF2.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_20(iParam0));
		HUD::_SET_NOTIFICATION_MESSAGE(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_20(int iParam0)//Position - 0x279F
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

int func_21()//Position - 0x284E
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_22(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x285B
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
		iParam2 = func_23();
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

int func_23()//Position - 0x2DC3
{
	return Global_1407E0;
}

void func_24(int iParam0)//Position - 0x2DCF
{
	func_46(93, iParam0);
	func_46(29, iParam0);
	func_46(30, iParam0);
}

bool func_25(int iParam0)//Position - 0x2DEF
{
	if (iParam0 == 8)
	{
		return func_26(129, 4294967295, 4294967295);
	}
	if (iParam0 == 9)
	{
		return func_26(135, 4294967295, 4294967295);
	}
	if (iParam0 == 10)
	{
		return func_26(136, 4294967295, 4294967295);
	}
	if (iParam0 == 11)
	{
		return func_26(137, 4294967295, 4294967295);
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_5038.f_1D7, iParam0);
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_200000[func_21() /*12745*/].f_1FF2.f_A, iParam0);
}

int func_26(int iParam0, int iParam1, int iParam2)//Position - 0x2E73
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_23();
	}
	iVar1 = func_28(iParam0, iParam1);
	uVar2 = func_27(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_27(int iParam0)//Position - 0x2EB0
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

int func_28(int iParam0, int iParam1)//Position - 0x31C8
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_23();
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

int func_29(bool bParam0)//Position - 0x34C0
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
		func_44(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_30(27, 1);
	return 1;
}

int func_30(int iParam0, int iParam1)//Position - 0x3577
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_31(iParam0, iParam1);
}

int func_31(int iParam0, int iParam1)//Position - 0x3592
{
	if (func_43(14) && !func_42(iParam0))
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
	if (func_41(&Global_412216))
	{
		if (func_39(&Global_412216, iParam0))
		{
			return 0;
		}
		if (func_32(&Global_412216, iParam0))
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

int func_32(var uParam0, int iParam1)//Position - 0x362F
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_43(14) && !func_42(iParam1))
	{
		return 0;
	}
	if (func_39(uParam0, iParam1))
	{
		return 0;
	}
	if (func_38(uParam0) < 0f)
	{
		func_37(uParam0, 0);
	}
	func_35(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_33(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_33(var uParam0, int iParam1)//Position - 0x36E0
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_43(14) && !func_42(iParam1))
	{
		return 0;
	}
	if (func_39(uParam0, iParam1))
	{
		return 0;
	}
	if (func_38(uParam0) < 0f)
	{
		func_37(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_34(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_34(var uParam0, int iParam1)//Position - 0x375B
{
	return (*uParam0)[iParam1] == 78;
}

void func_35(var uParam0)//Position - 0x376C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_36(uParam0, iVar0);
		iVar0++;
	}
	func_37(uParam0, (Global_412215 - 0.5f));
}

void func_36(var uParam0, int iParam1)//Position - 0x37A0
{
	(*uParam0)[iParam1] = 78;
}

void func_37(var uParam0, float fParam1)//Position - 0x37B0
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

float func_38(var uParam0)//Position - 0x37CD
{
	return uParam0->f_50;
}

bool func_39(var uParam0, int iParam1)//Position - 0x37D9
{
	return func_40(uParam0, iParam1) != 4294967295;
}

int func_40(var uParam0, int iParam1)//Position - 0x37EB
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

bool func_41(var uParam0)//Position - 0x3818
{
	return uParam0->f_4F == 1;
}

int func_42(int iParam0)//Position - 0x3826
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

bool func_43(int iParam0)//Position - 0x3876
{
	return Global_8D15 == iParam0;
}

int func_44(int iParam0, int iParam1)//Position - 0x3884
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

void func_45(int iParam0, int iParam1)//Position - 0x38D5
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, 4294967295);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_46(int iParam0, int iParam1)//Position - 0x38F8
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

void func_47()//Position - 0x3955
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

int func_48()//Position - 0x39CA
{
	func_49();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_49()//Position - 0x39E3
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_52(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_51(AUDIO::_0x0626A247D2405330());
			if (func_50(iVar0) && (!func_43(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_50(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_50(int iParam0)//Position - 0x3AE0
{
	return iParam0 < 3;
}

int func_51(int iParam0)//Position - 0x3AEC
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_52(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_52(int iParam0)//Position - 0x3B29
{
	if (func_50(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_53()//Position - 0x3B53
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_55, 0))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_55, iLocal_53, fVar0, fVar0, fVar0, 0, 1, 0))
		{
			return 1;
		}
	}
	iVar1 = PED::GET_RANDOM_PED_AT_COORD(unk_0x8000C77B5F336760(iLocal_53, false), fVar0, fVar0, fVar0, 4294967295);
	if (!PED::IS_PED_INJURED(iVar1))
	{
		if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_f_y_cop_01") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar1 = PED::GET_RANDOM_PED_AT_COORD(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), fVar0, fVar0, fVar0, 4294967295);
	if (!PED::IS_PED_INJURED(iVar1))
	{
		if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_f_y_cop_01") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar2 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(unk_0x8000C77B5F336760(iLocal_53, false), fVar0, 0, 1024);
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar2, 0))
	{
		return 1;
	}
	iVar2 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), fVar0, 0, 1024);
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar2, 0))
	{
		return 1;
	}
	return 0;
}

void func_54()//Position - 0x3C51
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		bVar0 = ENTITY::IS_ENTITY_TOUCHING_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_53);
		bVar1 = ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, AUDIO::_0x0626A247D2405330(), 1);
		if (((bVar1 || func_67()) || func_65()) || bVar0)
		{
			func_64();
			if (bLocal_68)
			{
				if (((bVar0 || bVar1) && !PED::IS_PED_RAGDOLL(iLocal_53)) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_53, 0))
				{
					NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_53);
					PED::SET_PED_TO_RAGDOLL(iLocal_53, 500, 2000, 0, 0, 0, 0);
					BRAIN::TASK_COWER(iLocal_53, 4294967295);
					PED::SET_PED_KEEP_TASK(iLocal_53, true);
				}
				else if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_53, 0) && !PED::IS_PED_RAGDOLL(iLocal_53))
				{
					NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_53);
					BRAIN::TASK_COWER(iLocal_53, 4294967295);
					PED::SET_PED_KEEP_TASK(iLocal_53, true);
				}
				func_60(0);
				if (!func_81())
				{
					if (!PED::IS_PED_INJURED(iLocal_52) && iLocal_274 == 0)
					{
						if (func_71(&uLocal_72, "REARRAU", "REARR_PWTF", 4, iLocal_246, 0, 0))
						{
							iLocal_274 = 1;
						}
					}
				}
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 3;
			}
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_57))
		{
			HUD::REMOVE_BLIP(&iLocal_57);
			func_59(&uLocal_72, 2);
		}
		func_64();
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, AUDIO::_0x0626A247D2405330(), 1))
		{
			if (bLocal_68)
			{
				func_60(1);
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 3;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if (bLocal_59)
		{
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
			{
				func_169();
			}
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
		{
		}
		iVar2 = 0;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, AUDIO::_0x0626A247D2405330(), 1) && ENTITY::GET_ENTITY_HEALTH(iLocal_54) < 190) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, AUDIO::_0x0626A247D2405330(), 1) && PED::IS_PED_RAGDOLL(iLocal_54)))
				{
					iVar2 = 1;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_55) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, AUDIO::_0x0626A247D2405330(), 1))
				{
					iVar2 = 1;
				}
			}
			else
			{
				iVar2 = 1;
			}
		}
		if ((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, AUDIO::_0x0626A247D2405330(), 1) && ENTITY::GET_ENTITY_HEALTH(iLocal_52) < 190) || func_58()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0)) || func_57()) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, AUDIO::_0x0626A247D2405330(), 1) && PED::IS_PED_RAGDOLL(iLocal_52))) || iVar2 == 1)
		{
			func_60(1);
			if (iLocal_47 == 3 || iLocal_47 == 1)
			{
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 2;
			}
		}
	}
	else
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, AUDIO::_0x0626A247D2405330(), 1))
		{
			if (iLocal_275 == 0)
			{
				iLocal_275 = 1;
				iLocal_278 = MISC::GET_GAME_TIMER();
			}
			if (iLocal_47 == 3 || iLocal_47 == 1)
			{
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 2;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_53);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_56))
		{
			HUD::REMOVE_BLIP(&iLocal_56);
			func_59(&uLocal_72, 1);
		}
	}
	if (iLocal_275)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_278) > 5000)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(CAM::_0xDC9DA9E8789F5246(), 3, 0);
			HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
			iLocal_275 = 0;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_52) && !PED::IS_PED_INJURED(iLocal_53))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, AUDIO::_0x0626A247D2405330(), 1) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, AUDIO::_0x0626A247D2405330(), 1))
		{
			if (ENTITY::GET_ENTITY_HEALTH(iLocal_52) < 190 && ENTITY::GET_ENTITY_HEALTH(iLocal_53) < 190)
			{
				func_64();
				func_60(1);
				iLocal_47 = 1;
			}
		}
		if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, iLocal_52, 110f, 110f, 40f, 0, 1, 0))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_52, 20f, 20f, 20f, 0, 1, 0))
			{
				func_55();
				SYSTEM::WAIT(0);
				func_71(&uLocal_72, "REARRAU", "REARR_PORUN", 4, iLocal_246, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_53, 40f, 40f, 40f, 0, 1, 0))
			{
				func_55();
				SYSTEM::WAIT(0);
				func_71(&uLocal_72, "REARRAU", sLocal_259, 4, iLocal_246, 0, 0);
			}
			func_169();
		}
	}
	if (PED::IS_PED_INJURED(iLocal_52) && PED::IS_PED_INJURED(iLocal_53))
	{
		func_169();
	}
	if (PED::IS_PED_INJURED(iLocal_53))
	{
		if (!PED::IS_PED_INJURED(iLocal_52))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_52, 100f, 100f, 40f, 0, 1, 0))
			{
				func_169();
			}
		}
	}
}

void func_55()//Position - 0x4094
{
	Global_3960 = 0;
	func_56();
}

void func_56()//Position - 0x40A4
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

bool func_57()//Position - 0x40FB
{
	bool bVar0;
	
	bVar0 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)) == joaat("BULLDOZER"))
		{
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), iLocal_52))
				{
					bVar0 = true;
				}
			}
		}
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_55, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), iLocal_55))
			{
				bVar0 = true;
			}
		}
		else if (iLocal_71)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, AUDIO::_0x0626A247D2405330(), 1))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_58()//Position - 0x4185
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar0 = { 3f, 3f, 3f };
	vVar1 = { -3f, -3f, -3f };
	if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_52, 31086, 0f, 0f, 0f), 0.5f, 1))
	{
		if (PED::IS_PED_INJURED(iLocal_53))
		{
			return 1;
		}
		else if (!MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_53, 31086, 0f, 0f, 0f), 2f, 1))
		{
			return 1;
		}
	}
	if (GRAPHICS::_0x2F09F7976C512404(PED::GET_PED_BONE_COORDS(iLocal_52, 31086, 0f, 0f, 0f), 3f))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_52, 5f, 5f, 5f, 0, 1, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_52))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(CAM::_0xDC9DA9E8789F5246(), iLocal_52) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(CAM::_0xDC9DA9E8789F5246(), iLocal_52))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iVar2, 1))
				{
					if (iVar2 != joaat("weapon_unarmed"))
					{
						return 1;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(CAM::_0xDC9DA9E8789F5246(), iLocal_53) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(CAM::_0xDC9DA9E8789F5246(), iLocal_53))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iVar2, 1))
				{
					if (iVar2 != joaat("weapon_unarmed"))
					{
						if (bLocal_68)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	vVar0 = { vVar0 + PED::GET_PED_BONE_COORDS(iLocal_52, 31086, 0f, 0f, 0f) };
	vVar1 = { vVar1 + PED::GET_PED_BONE_COORDS(iLocal_52, 31086, 0f, 0f, 0f) };
	if (((MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar1, vVar0, joaat("weapon_smokegrenade"), 1) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar1, vVar0, joaat("weapon_grenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar1, vVar0, joaat("weapon_stickybomb"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar1, vVar0, joaat("vehicle_weapon_tank"), 1))
	{
		return 1;
	}
	return 0;
}

void func_59(var uParam0, int iParam1)//Position - 0x432C
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_60(int iParam0)//Position - 0x4349
{
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_52);
		if (!bLocal_59)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(CAM::_0xDC9DA9E8789F5246(), 2, 0);
			HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_52, true);
			if (HUD::DOES_BLIP_EXIST(iLocal_56))
			{
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_56, false);
			}
			if (iParam0 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_53))
				{
					if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_53, 1805844857) == 7)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_250, "kneeling_arrest_idle", 3))
						{
							BRAIN::OPEN_SEQUENCE_TASK(&iLocal_67);
							BRAIN::TASK_PLAY_ANIM(0, sLocal_250, "kneeling_arrest_escape", 8f, -8f, 4294967295, 4096, 0, 0, 0, 0);
							BRAIN::TASK_SMART_FLEE_PED(0, iLocal_52, 150f, 4294967295, 0, 0);
							CUTSCENE::_0x8D9DF6ECA8768583(iLocal_67);
							BRAIN::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
							BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_67);
							PED::FORCE_PED_MOTION_STATE(iLocal_53, 4294436772, false, 0, 0);
							PED::SET_PED_KEEP_TASK(iLocal_53, true);
						}
						else
						{
							NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_53);
							BRAIN::TASK_SMART_FLEE_PED(iLocal_53, iLocal_52, 150f, 4294967295, 0, 0);
						}
					}
				}
				if ((!ENTITY::IS_ENTITY_DEAD(iLocal_53, 0) && !PED::IS_PED_INJURED(iLocal_53)) && !ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(iLocal_53, true), unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), true) < 20f)
					{
						if (!func_81())
						{
							func_71(&uLocal_72, "REARRAU", sLocal_265, 4, iLocal_246, 0, 0);
						}
					}
				}
			}
			NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_52);
			BRAIN::OPEN_SEQUENCE_TASK(&iLocal_67);
			BRAIN::TASK_LOOK_AT_ENTITY(0, AUDIO::_0x0626A247D2405330(), 4294967295, 2048, 2);
			BRAIN::TASK_COMBAT_PED(0, AUDIO::_0x0626A247D2405330(), 0, 16);
			CUTSCENE::_0x8D9DF6ECA8768583(iLocal_67);
			BRAIN::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
			BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_67);
			PED::SET_PED_KEEP_TASK(iLocal_52, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_52, 1, 0);
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_55, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_55, 1);
			}
			func_62();
			SYSTEM::WAIT(0);
			SYSTEM::WAIT(0);
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				if (!PED::IS_PED_RAGDOLL(iLocal_52))
				{
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
			{
				func_61();
			}
			bLocal_59 = true;
		}
	}
}

void func_61()//Position - 0x4520
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			BRAIN::OPEN_SEQUENCE_TASK(&iLocal_67);
			BRAIN::TASK_LOOK_AT_ENTITY(0, AUDIO::_0x0626A247D2405330(), 4294967295, 2048, 2);
			BRAIN::TASK_COMBAT_PED(0, AUDIO::_0x0626A247D2405330(), 0, 16);
			CUTSCENE::_0x8D9DF6ECA8768583(iLocal_67);
			BRAIN::TASK_PERFORM_SEQUENCE(iLocal_54, iLocal_67);
			BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_67);
			PED::SET_PED_KEEP_TASK(iLocal_54, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_54, 1, 0);
		}
	}
}

void func_62()//Position - 0x457E
{
	Global_3960 = 0;
	func_63();
}

void func_63()//Position - 0x458E
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_41C1 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_3DCE = 6;
	}
}

void func_64()//Position - 0x45AF
{
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_57))
		{
			HUD::SET_BLIP_AS_FRIENDLY(iLocal_57, false);
		}
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_53);
	}
}

int func_65()//Position - 0x45D7
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_52, 0))
	{
		if (bLocal_68)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_52))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_268) > 1000)
				{
					func_66();
				}
			}
		}
	}
	if (iLocal_267 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_66()//Position - 0x461A
{
	if (!func_81())
	{
		if (iLocal_267 < 3)
		{
			BRAIN::TASK_LOOK_AT_ENTITY(iLocal_52, AUDIO::_0x0626A247D2405330(), 6000, 2048, 2);
			func_71(&uLocal_72, "REARRAU", "REARR_PLEAVE", 4, iLocal_246, 0, 0);
		}
	}
	iLocal_267++;
	iLocal_268 = MISC::GET_GAME_TIMER();
}

int func_67()//Position - 0x4663
{
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), iLocal_53))
		{
			if (bLocal_68)
			{
				if (iLocal_50 != 7)
				{
					if (SYSTEM::VDIST(unk_0x8000C77B5F336760(iLocal_53, true), vLocal_64) > 2.5f)
					{
						return 1;
					}
				}
				else
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
	if (bLocal_68)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_53))
		{
			if (PED::IS_PED_RAGDOLL(iLocal_53))
			{
				if (iLocal_50 != 7)
				{
					if (SYSTEM::VDIST(unk_0x8000C77B5F336760(iLocal_53, true), vLocal_64) > 2.5f)
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (bLocal_68)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_268) > 1000)
				{
					func_66();
				}
			}
		}
	}
	if (iLocal_267 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_68()//Position - 0x4728
{
	if (!iLocal_69)
	{
		switch (iLocal_239)
		{
			case 0:
				if (!bLocal_59)
				{
					if (SYSTEM::TIMERA() > 80000)
					{
						if (!PED::IS_PED_INJURED(iLocal_52))
						{
							if (!PED::IS_PED_INJURED(iLocal_53))
							{
								func_55();
								SYSTEM::WAIT(0);
								func_71(&uLocal_72, "REARRAU", "REARR_PRAD3", 4, iLocal_246, 0, 0);
							}
						}
						iLocal_239 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_81())
				{
					if (!PED::IS_PED_INJURED(iLocal_53))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_250, "kneeling_arrest_idle", 3))
						{
							BRAIN::OPEN_SEQUENCE_TASK(&iLocal_67);
							BRAIN::TASK_PLAY_ANIM(0, sLocal_250, "kneeling_arrest_escape", 8f, -8f, 4294967295, 4096, 0, 0, 0, 0);
							BRAIN::TASK_SMART_FLEE_PED(0, iLocal_52, 150f, 4294967295, 0, 0);
							CUTSCENE::_0x8D9DF6ECA8768583(iLocal_67);
							BRAIN::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
							BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_67);
							PED::FORCE_PED_MOTION_STATE(iLocal_53, 4294436772, false, 0, 0);
							PED::SET_PED_KEEP_TASK(iLocal_53, true);
						}
						else
						{
							BRAIN::TASK_SMART_FLEE_PED(iLocal_53, iLocal_52, 150f, 4294967295, 0, 0);
						}
						PED::SET_PED_KEEP_TASK(iLocal_53, true);
						unk_0x65E471E4A2D56226(iLocal_53, 101, 0);
						func_71(&uLocal_72, "REARRAU", sLocal_261, 4, iLocal_246, 0, 0);
						iLocal_239 = 2;
					}
					if (!PED::IS_PED_INJURED(iLocal_52))
					{
						NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_52);
						iLocal_239 = 2;
					}
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_52))
				{
					if (!PED::IS_PED_INJURED(iLocal_53))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_66, iLocal_65);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_65, iLocal_66);
						BRAIN::TASK_COMBAT_PED(iLocal_52, iLocal_53, 0, 16);
					}
					else
					{
						BRAIN::TASK_WANDER_STANDARD(iLocal_52, 1193033728, 0);
						func_169();
					}
					PED::SET_PED_KEEP_TASK(iLocal_52, true);
				}
				iLocal_69 = 1;
				break;
			}
	}
}

int func_69(int iParam0, int iParam1)//Position - 0x48B4
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam1, 0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			vVar0 = { unk_0x8000C77B5F336760(iParam0, true) };
		}
		else
		{
			return 4294967295;
		}
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 1f, -0.5f, 0f) };
		vVar3 = { vVar1 - vVar0 };
		vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, -1f, -0.5f, 0f) };
		vVar4 = { vVar2 - vVar0 };
		if (SYSTEM::VMAG(vVar3) < SYSTEM::VMAG(vVar4))
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	return 4294967295;
}

void func_70()//Position - 0x4941
{
	if (!func_81())
	{
		if (!iLocal_281)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_52, 30f, 30f, 30f, 0, 1, 0))
			{
				func_71(&uLocal_72, "REARRAU", "REARR_PSTOP", 4, iLocal_246, 0, 0);
				iLocal_281 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		else if (SYSTEM::TIMERB() > 8000)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 99) > 50)
			{
				func_71(&uLocal_72, "REARRAU", "REARR_PRAND", 4, iLocal_246, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_53, 10f, 10f, 10f, 0, 1, 0))
			{
				func_71(&uLocal_72, "REARRAU", sLocal_260, 4, iLocal_246, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_52, 10f, 10f, 10f, 0, 1, 0))
			{
				func_71(&uLocal_72, "REARRAU", sLocal_260, 4, iLocal_246, 0, 0);
			}
			else
			{
				func_71(&uLocal_72, "REARRAU", sLocal_264, 4, iLocal_246, 0, 0);
			}
			SYSTEM::SETTIMERB(0);
		}
	}
}

bool func_71(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4A41
{
	func_80(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_72(sParam2, iParam3, 0);
}

int func_72(char* sParam0, int iParam1, bool bParam2)//Position - 0x4A8F
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
					func_56();
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
		if (func_79(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_78();
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
				func_77();
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
				if (func_76())
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
			if (func_75())
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
			func_74();
			Global_3DD8 = bParam2;
		}
		Global_3DD0 = iParam1;
		StringCopy(&Global_3C51, sParam0, 24);
		Global_3960 = 0;
		func_73();
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
		func_56();
	}
	return 0;
}

void func_73()//Position - 0x4D5B
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

void func_74()//Position - 0x4D8D
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

int func_75()//Position - 0x4E22
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_76()//Position - 0x4E49
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

void func_77()//Position - 0x4EE2
{
	if (func_43(14))
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
		Global_38B1 = func_48();
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

void func_78()//Position - 0x4F84
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

bool func_79(int iParam0, int iParam1)//Position - 0x4FDC
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

void func_80(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x5017
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

int func_81()//Position - 0x506D
{
	if (Global_3DCE != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_82()//Position - 0x508F
{
	if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, iLocal_52, 3.5f, 3.5f, 3.5f, 0, 1, 0) || func_85())
	{
		if (!func_83(1063675494))
		{
			return 1;
		}
	}
	return 0;
}

int func_83(float fParam0)//Position - 0x50D0
{
	var uVar0;
	vector3 vVar1;
	
	if (MISC::_GET_GROUND_Z_COORD_WITH_OFFSETS(unk_0x8000C77B5F336760(iLocal_53, true), &uVar0, &vVar1))
	{
		if (func_84(vVar1, 0f, 0f, 1f) < fParam0)
		{
			return 1;
		}
	}
	return 0;
}

float func_84(vector3 vParam0, vector3 vParam1)//Position - 0x5100
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

int func_85()//Position - 0x5121
{
	return 0;
}

int func_86(int iParam0)//Position - 0x512A
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

void func_87()//Position - 0x514B
{
	if ((MISC::GET_GAME_TIMER() - iLocal_245) > 500)
	{
		if ((iLocal_47 != 1 && iLocal_47 != 3) && iLocal_47 != 2)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_57, iLocal_242);
				if (bLocal_242 == 1)
				{
					bLocal_242 = false;
				}
				else
				{
					bLocal_242 = true;
				}
			}
		}
		else
		{
			bLocal_276 = true;
		}
		if (!bLocal_59)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_56))
			{
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_56, iLocal_243);
				if (bLocal_243 == 1)
				{
					bLocal_243 = false;
				}
				else
				{
					bLocal_243 = true;
				}
			}
		}
		else
		{
			bLocal_276 = true;
		}
		iLocal_245 = MISC::GET_GAME_TIMER();
	}
	if (!bLocal_277 == bLocal_276)
	{
		if (bLocal_276)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				HUD::_0x75A16C3DA34F1245(iLocal_57, true);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_56))
			{
				HUD::_0x75A16C3DA34F1245(iLocal_56, true);
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				HUD::_0x75A16C3DA34F1245(iLocal_57, false);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_56))
			{
				HUD::_0x75A16C3DA34F1245(iLocal_56, false);
			}
		}
		bLocal_277 = bLocal_276;
	}
}

int func_88(float fParam0)//Position - 0x522D
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	vVar2 = { fParam0, fParam0, 50f };
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_271, vLocal_272, 194.75f, 0, true, 0))
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_52, AUDIO::_0x0626A247D2405330(), vVar2, 0, 1, 0))
		{
			iVar0 = 1;
		}
		else
		{
			iVar1++;
		}
	}
	else
	{
		iVar1++;
	}
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, AUDIO::_0x0626A247D2405330(), vVar2, 0, 1, 0))
		{
			iVar0 = 1;
		}
		else
		{
			iVar1++;
		}
	}
	else
	{
		iVar1++;
	}
	if (iVar1 == 2)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_89(int iParam0)//Position - 0x52D7
{
	if (func_94())
	{
		Global_19E4C = 1;
		Global_19E49 = MISC::GET_GAME_TIMER();
		if (func_93(Global_19E4B))
		{
			func_90(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_93(Global_19E4B))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_90(int iParam0)//Position - 0x532A
{
	switch (iParam0)
	{
		case 0:
			if (Global_19E56.f_6187.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_91(func_92(iParam0), 4294967295);
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
					func_91(func_92(iParam0), 4294967295);
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
					func_91(func_92(iParam0), 4294967295);
					Global_19E56.f_6187.f_4++;
					MISC::SET_BIT(&Global_19E52, 2);
				}
			}
			break;
	}
}

void func_91(char* sParam0, int iParam1)//Position - 0x540B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

char* func_92(int iParam0)//Position - 0x5422
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

int func_93(int iParam0)//Position - 0x5466
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

int func_94()//Position - 0x5495
{
	switch (func_95(&Global_63AE, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_95(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x54CB
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
		if (func_99(0))
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
		if (!func_97(iParam2))
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
			func_96(uParam0, iParam4);
		}
	}
	return 2;
}

void func_96(var uParam0, int iParam1)//Position - 0x5602
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

bool func_97(int iParam0)//Position - 0x5651
{
	return func_98(iParam0, Global_8D15);
}

int func_98(int iParam0, int iParam1)//Position - 0x5662
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

int func_99(int iParam0)//Position - 0x5843
{
	if (Global_8D15 == 15)
	{
		return 0;
	}
	if (func_97(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_100()//Position - 0x5865
{
	float fVar0;
	
	fVar0 = 50f;
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if ((ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_52, fVar0, fVar0, fVar0, 0, 1, 0) || ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iLocal_53, fVar0, fVar0, fVar0, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_271, vLocal_272, 194.75f, 0, true, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_57))
				{
					iLocal_57 = func_101(iLocal_53, 0, 145);
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_56))
				{
					iLocal_56 = func_101(iLocal_52, 0, 145);
				}
				HUD::_0x75A16C3DA34F1245(iLocal_57, false);
				HUD::_0x75A16C3DA34F1245(iLocal_56, false);
				SYSTEM::SETTIMERA(0);
				return 1;
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_56))
				{
					iLocal_56 = func_101(iLocal_52, 0, 145);
				}
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				HUD::REMOVE_BLIP(&iLocal_57);
			}
			return 1;
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				iLocal_57 = func_101(iLocal_53, 0, 145);
			}
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_56))
		{
			HUD::REMOVE_BLIP(&iLocal_56);
		}
		return 1;
	}
	return 0;
}

int func_101(int iParam0, bool bParam1, int iParam2)//Position - 0x5983
{
	int iVar0;
	
	iVar0 = func_102(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_19E56.f_6D76[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_19E56.f_6D76[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_102(int iParam0, bool bParam1, bool bParam2)//Position - 0x59D5
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_103(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_103(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_103(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_103(bool bParam0, float fParam1, float fParam2)//Position - 0x5A79
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_104()//Position - 0x5A90
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	float fVar5;
	
	iVar0 = joaat("s_m_y_ranger_01");
	if (iLocal_51 == 1)
	{
		vVar2 = { 2429.822f, 4952.938f, 44.8892f };
		fVar4 = 218.3434f;
		vVar3 = { 2431.685f, 4945.31f, 44.6996f };
		fVar5 = 220.0087f;
		vLocal_271 = { 2378.284f, 4863.027f, 32.50883f };
		vLocal_272 = { 2512.797f, 4998.586f, 90.12283f };
		sLocal_248 = "A_M_M_HillBilly_02_WHITE_MINI_02";
		sLocal_257 = "arrestcriminal";
		sLocal_258 = "REARR_CTHANK";
		sLocal_259 = "REARR_CORUN";
		sLocal_260 = "REARR_CWTF";
		sLocal_261 = "REARR_CTURN";
		sLocal_262 = "REARR_CHELP";
		sLocal_263 = "REARR_HATE";
		sLocal_264 = "REARR_CRAND";
		sLocal_265 = "REARR_CRAND";
		sLocal_266 = "REARR_CRAND";
		iVar1 = joaat("a_m_m_hillbilly_02");
	}
	else if (iLocal_51 == 2)
	{
		vVar2 = { 2592.637f, 2540.05f, 30.4162f };
		fVar4 = 90.5639f;
		vVar3 = { 2586.005f, 2541.41f, 31.0379f };
		fVar5 = 75.5943f;
		vLocal_271 = { 2543.135f, 2683.917f, 0.307461f };
		vLocal_272 = { 2597.603f, 2408.885f, 121.901f };
		sLocal_248 = "G_M_M_ArmGoon_01_White_Armenian_MINI_01";
		sLocal_257 = "arrestcriminal2";
		sLocal_258 = "REARR_THANK2";
		sLocal_259 = "REARR_CORUN2";
		sLocal_260 = "REARR_CWTF2";
		sLocal_261 = "REARR_CTURN2";
		sLocal_262 = "REARR_CHELP2";
		sLocal_263 = "REARR_HATE2";
		sLocal_264 = "REARR_CRAND2";
		sLocal_265 = "REARR_CRAND2";
		sLocal_266 = "REARR_CRAND2";
		iVar1 = joaat("g_m_m_armgoon_01");
	}
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar1);
	STREAMING::REQUEST_MODEL(joaat("prop_ld_binbag_01"));
	STREAMING::REQUEST_ANIM_DICT(sLocal_250);
	STREAMING::REQUEST_ANIM_DICT(sLocal_251);
	STREAMING::REQUEST_CLIP_SET("MOVE_M@BAIL_BOND_NOT_TAZERED");
	STREAMING::REQUEST_CLIP_SET("MOVE_M@BAIL_BOND_TAZERED");
	if ((((((STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_binbag_01"))) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_250)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_251)) && STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_NOT_TAZERED")) && STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_TAZERED"))
	{
		iLocal_52 = PED::CREATE_PED(6, iVar0, vVar2, fVar4, 1, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_52, 294, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_52, 1, 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_52, 1);
		ENTITY::SET_ENTITY_HEALTH(iLocal_52, true);
		func_106(&uLocal_72, 1, iLocal_52, "ArrestCop", 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_52, true, 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_52, 1);
		iLocal_53 = PED::CREATE_PED(26, iVar1, vVar3, fVar5, 1, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_53, 1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_53, 42, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_53, 281, true);
		ENTITY::SET_ENTITY_HEALTH(iLocal_53, true);
		func_106(&uLocal_72, 2, iLocal_53, sLocal_257, 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_53, true, 1);
		if (iLocal_51 == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 3, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 4, 0, 0, 0);
		}
		func_105();
		if (func_48() == 0)
		{
			func_106(&uLocal_72, 0, AUDIO::_0x0626A247D2405330(), "MICHAEL", 0, 1);
		}
		else if (func_48() == 1)
		{
			func_106(&uLocal_72, 0, AUDIO::_0x0626A247D2405330(), "FRANKLIN", 0, 1);
		}
		else if (func_48() == 2)
		{
			func_106(&uLocal_72, 0, AUDIO::_0x0626A247D2405330(), "TREVOR", 0, 1);
		}
		if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_52, joaat("weapon_pistol"), 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_52, joaat("weapon_pistol"), 4294967295, false, true);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_52, joaat("weapon_pistol"), true);
		iLocal_58 = OBJECT::CREATE_OBJECT(joaat("prop_ld_binbag_01"), vLocal_63.x, vLocal_63.y, (vLocal_63.z + 100f), true, true, false);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_58, false, 0);
		if (SYSTEM::VDIST(2411.32f, 4958.76f, 45.19f, vLocal_63) < 10f)
		{
			iLocal_51 = 1;
			BRAIN::OPEN_SEQUENCE_TASK(&iLocal_67);
			BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, 2473.254f, 4901.651f, 43.1488f, 3f, 4294967295, 2f, 1, vLocal_244, 40000f);
			BRAIN::TASK_SMART_FLEE_PED(0, iLocal_52, 150f, 4294967295, 0, 0);
			CUTSCENE::_0x8D9DF6ECA8768583(iLocal_67);
			BRAIN::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
			PED::SET_PED_KEEP_TASK(iLocal_53, true);
			BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_67);
			PATHFIND::DISABLE_NAVMESH_IN_AREA(2544.862f, 4729.893f, 27.8986f, 2564.862f, 4749.893f, 28.8986f, 1);
		}
		else
		{
			iLocal_51 = 2;
			BRAIN::OPEN_SEQUENCE_TASK(&iLocal_67);
			BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, 2531.445f, 2521.749f, 38.2072f, 3f, 4294967295, 2f, 1, vLocal_244, 40000f);
			BRAIN::TASK_SMART_FLEE_PED(0, iLocal_52, 150f, 4294967295, 0, 0);
			CUTSCENE::_0x8D9DF6ECA8768583(iLocal_67);
			BRAIN::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
			PED::SET_PED_KEEP_TASK(iLocal_53, true);
			BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_67);
		}
		if (iLocal_51 == 1)
		{
		}
		BRAIN::TASK_GO_TO_ENTITY(iLocal_52, iLocal_53, 4294967295, 1f, 3f, 1073741824, 0);
		PED::SET_PED_KEEP_TASK(iLocal_52, true);
		return 1;
	}
	return 0;
}

void func_105()//Position - 0x5F0E
{
	vLocal_244.x = 0f;
	vLocal_244.y = 10f;
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_52, 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52, 13, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52, 2, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52, 11, false);
	PED::SET_PED_COMBAT_RANGE(iLocal_52, 0);
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_53, 3);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 17, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 6, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 11, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_53, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_53, 1, false);
	PED::ADD_RELATIONSHIP_GROUP("RE_ARREST_COP", &iLocal_65);
	PED::ADD_RELATIONSHIP_GROUP("RE_ARREST_CRIM", &iLocal_66);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_52, iLocal_65);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_53, iLocal_66);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, iLocal_66, iLocal_65);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_65, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_66, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, iLocal_66, 2761840924);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_52, sLocal_249);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_53, sLocal_248);
}

void func_106(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x5FF1
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

int func_107()//Position - 0x608C
{
	if (!func_97(5))
	{
		return 1;
	}
	if (func_116())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(AUDIO::_0x0626A247D2405330())) > 1369f && !func_115())
		{
			return 0;
		}
	}
	if (func_108(100f, 1) != 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_108(float fParam0, bool bParam1)//Position - 0x60EE
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
		if (func_50(func_48()))
		{
			iVar5 = func_114();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4872[iVar1 /*6*/], 2) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4872[iVar1 /*6*/], 3))
				{
					func_109(iVar1, &Var0);
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

void func_109(int iParam0, var uParam1)//Position - 0x61A5
{
	switch (iParam0)
	{
		case 0:
			func_110(uParam1, "Abigail1", func_112(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 1:
			func_110(uParam1, "Abigail2", func_112(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, 4294967295, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 2:
			func_110(uParam1, "Barry1", func_112(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, 4294967295, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 3:
			func_110(uParam1, "Barry2", func_112(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 4:
			func_110(uParam1, "Barry3", func_112(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", 4294967295, 0, "", 164, 1, 4294967295, 0, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 5:
			func_110(uParam1, "Barry3A", func_112(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 6:
			func_110(uParam1, "Barry3C", func_112(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 7:
			func_110(uParam1, "Barry4", func_112(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, 4294967295, 4, 2, 800, 2000, func_111(iParam0), 0, 0);
			break;
		
		case 8:
			func_110(uParam1, "Dreyfuss1", func_112(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 9:
			func_110(uParam1, "Epsilon1", func_112(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 10:
			func_110(uParam1, "Epsilon2", func_112(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 11:
			func_110(uParam1, "Epsilon3", func_112(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 12:
			func_110(uParam1, "Epsilon4", func_112(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 13:
			func_110(uParam1, "Epsilon5", func_112(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 14:
			func_110(uParam1, "Epsilon6", func_112(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 15:
			func_110(uParam1, "Epsilon7", func_112(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", 4294967295, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 16:
			func_110(uParam1, "Epsilon8", func_112(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, 4294967295, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 17:
			func_110(uParam1, "Extreme1", func_112(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", 4294967295, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 18:
			func_110(uParam1, "Extreme2", func_112(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 19:
			func_110(uParam1, "Extreme3", func_112(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 20:
			func_110(uParam1, "Extreme4", func_112(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 21:
			func_110(uParam1, "Fanatic1", func_112(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, 4294967295, 4, 1, 700, 2000, func_111(iParam0), 1, 0);
			break;
		
		case 22:
			func_110(uParam1, "Fanatic2", func_112(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 4, 700, 2000, func_111(iParam0), 1, 0);
			break;
		
		case 23:
			func_110(uParam1, "Fanatic3", func_112(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 2, 700, 2000, func_111(iParam0), 0, 1);
			break;
		
		case 24:
			func_110(uParam1, "Hao1", func_112(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", 4294967295, 0, "controller_Races", 13, 1, 4294967295, 4, 2, 2000, 500, func_111(iParam0), 0, 1);
			break;
		
		case 25:
			func_110(uParam1, "Hunting1", func_112(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", 4294967295, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 26:
			func_110(uParam1, "Hunting2", func_112(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, 4294967295, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 27:
			func_110(uParam1, "Josh1", func_112(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", 4294967295, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 28:
			func_110(uParam1, "Josh2", func_112(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 29:
			func_110(uParam1, "Josh3", func_112(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 4294967295, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 30:
			func_110(uParam1, "Josh4", func_112(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", 4294967295, 36, "", 0, 0, 4294967295, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 31:
			func_110(uParam1, "Maude1", func_112(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", 4294967295, 0, "BailBond_Launcher", 0, 1, 4294967295, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 32:
			func_110(uParam1, "Minute1", func_112(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", 4294967295, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 33:
			func_110(uParam1, "Minute2", func_112(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", 4294967295, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 34:
			func_110(uParam1, "Minute3", func_112(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", 4294967295, 10, "", 0, 0, 4294967295, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 35:
			func_110(uParam1, "MrsPhilips1", func_112(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", 4294967295, 0, "ambient_MrsPhilips", 0, 1, 4294967295, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 36:
			func_110(uParam1, "MrsPhilips2", func_112(iParam0), 0, 11, 4, 0f, 0f, 0f, 4294967295, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 37:
			func_110(uParam1, "Nigel1", func_112(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", 4294967295, 0, "", 177, 1, 4294967295, 1, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 38:
			func_110(uParam1, "Nigel1A", func_112(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 39:
			func_110(uParam1, "Nigel1B", func_112(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_111(iParam0), 1, 1);
			break;
		
		case 40:
			func_110(uParam1, "Nigel1C", func_112(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_111(iParam0), 1, 1);
			break;
		
		case 41:
			func_110(uParam1, "Nigel1D", func_112(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_111(iParam0), 1, 1);
			break;
		
		case 42:
			func_110(uParam1, "Nigel2", func_112(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", 4294967295, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 43:
			func_110(uParam1, "Nigel3", func_112(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", 4294967295, 16, "postRC_Nigel3", 0, 0, 4294967295, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 44:
			func_110(uParam1, "Omega1", func_112(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", 4294967295, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 45:
			func_110(uParam1, "Omega2", func_112(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 46:
			func_110(uParam1, "Paparazzo1", func_112(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", 4294967295, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 47:
			func_110(uParam1, "Paparazzo2", func_112(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", 4294967295, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 48:
			func_110(uParam1, "Paparazzo3", func_112(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", 4294967295, 8, "", 183, 1, 4294967295, 2, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 49:
			func_110(uParam1, "Paparazzo3A", func_112(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 50:
			func_110(uParam1, "Paparazzo3B", func_112(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 51:
			func_110(uParam1, "Paparazzo4", func_112(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", 4294967295, 8, "", 0, 1, 4294967295, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 52:
			func_110(uParam1, "Rampage1", func_112(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", 4294967295, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 54:
			func_110(uParam1, "Rampage3", func_112(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", 4294967295, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 55:
			func_110(uParam1, "Rampage4", func_112(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", 4294967295, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 56:
			func_110(uParam1, "Rampage5", func_112(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", 4294967295, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 53:
			func_110(uParam1, "Rampage2", func_112(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", 4294967295, 0, "rampage_controller", 0, 0, 4294967295, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 57:
			func_110(uParam1, "TheLastOne", func_112(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, 4294967295, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 58:
			func_110(uParam1, "Tonya1", func_112(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", 4294967295, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 59:
			func_110(uParam1, "Tonya2", func_112(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", 4294967295, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 60:
			func_110(uParam1, "Tonya3", func_112(iParam0), 0, 17, 4, 0f, 0f, 0f, 4294967295, "", 4294967295, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 61:
			func_110(uParam1, "Tonya4", func_112(iParam0), 0, 17, 4, 0f, 0f, 0f, 4294967295, "", 4294967295, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 62:
			func_110(uParam1, "Tonya5", func_112(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", 4294967295, 48, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_110(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x73EC
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

int func_111(int iParam0)//Position - 0x747D
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

struct<2> func_112(int iParam0)//Position - 0x77C3
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_113(iParam0) };
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

struct<2> func_113(int iParam0)//Position - 0x77FB
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

int func_114()//Position - 0x7C48
{
	func_49();
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

int func_115()//Position - 0x7C8E
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

int func_116()//Position - 0x7CAB
{
	if (func_119() && !func_115())
	{
		return 1;
	}
	if (func_118() && func_117())
	{
		return 1;
	}
	return 0;
}

bool func_117()//Position - 0x7CDD
{
	return Global_19D3C > 0;
}

int func_118()//Position - 0x7CEB
{
	if (Global_16089 != 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_119()//Position - 0x7D00
{
	if (Global_16089 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14893[Global_16089 /*34*/].f_F, 20);
	}
	return 0;
}

int func_120()//Position - 0x7D26
{
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), vLocal_44) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(AUDIO::_0x0626A247D2405330())) > 1369f && !func_115())
		{
			return 0;
		}
	}
	if (func_116())
	{
		return 1;
	}
	if (func_108(100f, 1) != 4294967295)
	{
		return 1;
	}
	return 0;
}

void func_121(int iParam0)//Position - 0x7DAC
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_124();
	}
	if (iParam0 == 4294967295)
	{
		return;
	}
	func_123(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_19E48 = 0;
	func_122();
}

void func_122()//Position - 0x7DE2
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

void func_123(int iParam0)//Position - 0x7E1F
{
	Global_19E4B = iParam0;
}

int func_124()//Position - 0x7E2D
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = func_125(Var0);
	return uVar1;
}

int func_125(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x7E4A
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

int func_126(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x8024
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
		iParam1 = func_124();
	}
	if (iParam1 == 4294967295)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_168())
		{
			return 0;
		}
	}
	vLocal_44 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(AUDIO::_0x0626A247D2405330())) > 1369f && !func_115())
			{
				return 0;
			}
		}
		if (!Global_19E56.f_2361)
		{
			return 0;
		}
		if (func_167(0))
		{
			return 0;
		}
		if (func_116())
		{
			return 0;
		}
		if (func_166())
		{
			return 0;
		}
		if (Global_19E4B != 4294967295)
		{
			return 0;
		}
		if (func_50(func_48()))
		{
			if (func_108(100f, 1) != 4294967295)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) && !bParam4)
		{
			if ((vVar1.z - vLocal_44.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_165(iParam1))
		{
			return 0;
		}
		if (func_50(func_48()))
		{
			if (func_164(func_48()) == 4 || func_164(func_48()) == 5)
			{
				return 0;
			}
		}
		if (func_50(func_48()))
		{
			if (!func_163(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_162(Global_19E56.f_6187.f_2B[iParam1]))
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
		if (func_161())
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
		if (!func_152(4))
		{
			return 0;
		}
		if (!func_97(5))
		{
			return 0;
		}
		if (func_151(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_151(0, 0))
		{
			return 0;
		}
		if (Global_6405)
		{
			return 0;
		}
		if (func_165(30) && !func_151(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_50(func_48()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_19E56.f_933.f_21B.f_8E8[iVar2 /*3*/] };
				iVar4 = Global_19E56.f_933.f_21B.f_8E4[iVar2];
				if (func_150(iVar4))
				{
					if (func_128(iVar2))
					{
						if (!func_127(vVar3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), vVar3) < (210f * 210f))
							{
								if (func_48() != iVar2)
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

bool func_127(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x83BE
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_128(int iParam0)//Position - 0x8405
{
	int iVar0;
	
	iVar0 = Global_19E56.f_933.f_21B.f_8E4[iParam0];
	return func_129(iVar0);
}

int func_129(int iParam0)//Position - 0x8426
{
	return func_130(iParam0, 1);
}

int func_130(int iParam0, int iParam1)//Position - 0x8435
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_150(iParam0))
	{
		return 0;
	}
	func_131(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_131(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x8488
{
	func_132(func_143(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_132(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x84A6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_142(iParam0, iParam1))
	{
		iVar0 = func_141(iParam1);
		iVar1 = func_139(iParam0);
		iVar2 = (func_139(iParam0) - func_139(iParam1));
		iVar3 = (func_141(iParam0) - func_141(iParam1));
		iVar4 = (func_138(iParam0) - func_138(iParam1));
		iVar5 = (func_137(iParam0) - func_137(iParam1));
		iVar6 = (func_136(iParam0) - func_136(iParam1));
		iVar7 = (func_135(iParam0) - func_135(iParam1));
	}
	else
	{
		iVar0 = func_141(iParam0);
		iVar1 = func_139(iParam1);
		iVar2 = (func_139(iParam1) - func_139(iParam0));
		iVar3 = (func_141(iParam1) - func_141(iParam0));
		iVar4 = (func_138(iParam1) - func_138(iParam0));
		iVar5 = (func_137(iParam1) - func_137(iParam0));
		iVar6 = (func_136(iParam1) - func_136(iParam0));
		iVar7 = (func_135(iParam1) - func_135(iParam0));
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
		iVar4 = (iVar4 + func_134(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_133(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_133(float fParam0, float fParam1, float fParam2)//Position - 0x86A7
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

int func_134(int iParam0, int iParam1)//Position - 0x86E9
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

int func_135(int iParam0)//Position - 0x878B
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_136(int iParam0)//Position - 0x879E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_137(int iParam0)//Position - 0x87B1
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_138(int iParam0)//Position - 0x87C4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_139(int iParam0)//Position - 0x87D6
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_140(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 31), 4294967295, 1)) + 2011;
}

int func_140(bool bParam0, int iParam1, int iParam2)//Position - 0x87FB
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_141(int iParam0)//Position - 0x8812
{
	return iParam0 & 15;
}

int func_142(int iParam0, int iParam1)//Position - 0x881F
{
	int iVar0;
	int iVar1;
	
	if (!func_150(iParam1) || !func_150(iParam0))
	{
		return 1;
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_136(iParam0);
	iVar1 = func_136(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_135(iParam0);
	iVar1 = func_135(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_143()//Position - 0x892B
{
	var uVar0;
	
	func_149(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_148(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_147(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_146(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_145(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_144(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_144(var uParam0, int iParam1)//Position - 0x8971
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

void func_145(var uParam0, int iParam1)//Position - 0x89F7
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_146(var uParam0, int iParam1)//Position - 0x8A2A
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_141(*uParam0);
	iVar1 = func_139(*uParam0);
	if (iParam1 < 1 || iParam1 > func_134(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_147(var uParam0, int iParam1)//Position - 0x8A7B
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_148(var uParam0, int iParam1)//Position - 0x8AB5
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_149(var uParam0, int iParam1)//Position - 0x8AF0
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_150(int iParam0)//Position - 0x8B2C
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
	iVar0 = func_135(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_136(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_137(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_139(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_141(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_138(iParam0);
	if (iVar5 < 1 || iVar5 > func_134(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_151(int iParam0, int iParam1)//Position - 0x8C08
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6187.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_152(int iParam0)//Position - 0x8C2B
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				iVar0 = func_48();
				if (!func_50(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_160()) || Global_19A9D) || Global_6375) || func_159()) || func_79(8, 4294967295)) || func_158()) || func_157()) || func_156()) || func_155()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1) || func_160()) || Global_6375) || func_159()) || func_79(8, 4294967295)) || func_156()) || func_158()) || func_157()) || func_155()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_160()) || Global_19A9D) || Global_6375) || func_159()) || func_79(8, 4294967295)) || func_156()) || func_158()) || func_157()) || func_155()) || Global_19E56.f_1DEC.f_397[iVar0] == 5) || Global_8F38 != 4294967295)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_160()) || Global_19A9D) || Global_6375) || func_159()) || func_79(8, 4294967295)) || func_158()) || func_157()) || func_155()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_160() || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || func_79(8, 4294967295)) || func_155()) || func_154()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_79(8, 4294967295) || func_158()) || func_157()) || func_154()) || func_153())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || func_160()) || Global_6375) || func_159()) || func_79(8, 4294967295)) || func_157()) || func_156()) || func_155()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || func_160()) || func_157()) || Global_19A9D) || Global_6375) || func_159()) || Global_9197) || func_79(8, 4294967295)) || func_156()) || func_154()) || func_155()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0)) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1)) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_SWIMMING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || func_160()) || Global_19A9D) || Global_6375) || func_159()) || func_79(8, 4294967295)) || func_156()) || func_154()) || func_158()) || func_157()) || func_155())
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

var func_153()//Position - 0x9348
{
	return Global_16C57.f_1;
}

int func_154()//Position - 0x9356
{
	if (Global_16089 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14893[Global_16089 /*34*/].f_F, 13);
	}
	return 0;
}

int func_155()//Position - 0x937C
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_156()//Position - 0x9396
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

bool func_157()//Position - 0x93C0
{
	return Global_16C64.f_148 > 0;
}

bool func_158()//Position - 0x93D1
{
	return Global_16C64.f_147 > 0;
}

var func_159()//Position - 0x93E2
{
	return Global_140859;
}

int func_160()//Position - 0x93EE
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_162B5.f_2C == 1;
	}
	return 0;
}

int func_161()//Position - 0x940A
{
	func_77();
	if (Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_162(int iParam0)//Position - 0x9432
{
	return func_142(func_143(), iParam0);
}

int func_163(int iParam0, int iParam1, int iParam2)//Position - 0x9444
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_48();
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

int func_164(int iParam0)//Position - 0x9528
{
	if (!func_50(iParam0))
	{
		return 7;
	}
	return Global_19E56.f_1DEC.f_397[iParam0];
}

bool func_165(int iParam0)//Position - 0x954C
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_168())
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

int func_166()//Position - 0x95AA
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

bool func_167(bool bParam0)//Position - 0x95EE
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

int func_168()//Position - 0x9619
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

void func_169()//Position - 0x96D4
{
	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		switch (iLocal_47)
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 2:
				func_198(6);
				func_183();
				break;
			
			case 3:
				func_198(5);
				func_183();
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
		{
			if (!PED::IS_PED_INJURED(iLocal_53) && !ENTITY::IS_ENTITY_DEAD(iLocal_53, 0))
			{
				ENTITY::IS_ENTITY_DEAD(iLocal_52, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
				{
					BRAIN::TASK_SMART_FLEE_COORD(iLocal_53, unk_0x8000C77B5F336760(iLocal_52, true), 9000f, 4294967295, 0, 0);
				}
				else
				{
					BRAIN::TASK_SMART_FLEE_COORD(iLocal_53, unk_0x8000C77B5F336760(iLocal_53, true), 9000f, 4294967295, 0, 0);
				}
				ENTITY::SET_ENTITY_HEALTH(iLocal_53, false);
				PED::SET_PED_KEEP_TASK(iLocal_53, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
		{
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				PED::SET_PED_KEEP_TASK(iLocal_52, true);
				ENTITY::SET_ENTITY_HEALTH(iLocal_52, false);
				PED::SET_PED_AS_COP(iLocal_52, 1);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_52, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
				{
					func_61();
				}
				ENTITY::SET_ENTITY_HEALTH(iLocal_54, false);
				PED::SET_PED_AS_COP(iLocal_54, 1);
			}
		}
		if (func_182())
		{
			GRAPHICS::_0x54E22EA2C1956A8D(1f);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_66, iLocal_65);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_65, iLocal_66);
		}
		if (iLocal_71)
		{
			VEHICLE::SET_RANDOM_TRAINS(1);
		}
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 1);
	if (iLocal_275)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(CAM::_0xDC9DA9E8789F5246(), 3, 0);
		HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
	}
	func_170(4294967295);
	SYSTEM::WAIT(0);
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_170(int iParam0)//Position - 0x9863
{
	char cVar0[64];
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_124();
	}
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (func_182())
	{
		func_175(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_19E4D = MISC::GET_GAME_TIMER();
		func_174(30000);
		StringCopy(&cVar0, func_173(Global_19E4B, 1), 64);
		if (func_172(Global_19E4B) > 0)
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
	func_171(&Global_63AE);
	Global_19E4C = 0;
	func_123(4294967295);
}

void func_171(var uParam0)//Position - 0x9918
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

int func_172(int iParam0)//Position - 0x9955
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

char* func_173(int iParam0, bool bParam1)//Position - 0x9A06
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

void func_174(int iParam0)//Position - 0x9C4F
{
	Global_8F3C = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_175(int iParam0)//Position - 0x9C61
{
	func_176(iParam0, 0, func_181(iParam0));
}

void func_176(int iParam0, int iParam1, int iParam2)//Position - 0x9C76
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_143();
	func_179(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_178(iParam0, &uVar0);
	Var1 = { func_177(&uVar0) };
}

struct<16> func_177(var uParam0)//Position - 0x9CA5
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_137(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_136(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_135(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_138(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_141(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_139(*uParam0), 64);
	return Var0;
}

void func_178(int iParam0, var uParam1)//Position - 0x9D76
{
	Global_19E56.f_6187.f_2B[iParam0] = *uParam1;
}

void func_179(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9D8E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_139(*uParam0);
	iVar1 = func_141(*uParam0);
	iVar2 = func_138(*uParam0);
	iVar3 = func_137(*uParam0);
	iVar4 = func_136(*uParam0);
	iVar5 = func_135(*uParam0);
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
	iVar6 = func_134(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_134(iVar1, iVar0);
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

void func_180(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9F10
{
	func_149(uParam0, iParam1);
	func_148(uParam0, iParam2);
	func_147(uParam0, iParam3);
	func_145(uParam0, iParam5);
	func_146(uParam0, iParam4);
	func_144(uParam0, iParam6);
}

int func_181(int iParam0)//Position - 0x9F48
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

int func_182()//Position - 0xA0EB
{
	if ((Global_19E4B == func_124() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_19E4C)
	{
		return 1;
	}
	return 0;
}

void func_183()//Position - 0xA116
{
	if (!bLocal_70)
	{
		func_197();
	}
	func_186(15, iLocal_51);
	func_184();
}

void func_184()//Position - 0xA135
{
	func_185();
}

int func_185()//Position - 0xA142
{
	if (func_167(0))
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

void func_186(int iParam0, int iParam1)//Position - 0xA18D
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_124();
	}
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (iParam1 <= func_172(iParam0))
	{
		func_196(iParam0, iParam1);
		if (!func_195(51))
		{
			func_192("RE_REWARD", 1, 0, 4000, 10000, func_114(), 0, 138, 0);
			func_191(51);
		}
		if (func_93(iParam0))
		{
			Global_19E56.f_6187.f_2 = 3;
		}
		if (func_190(iParam0, iParam1) != 322)
		{
			func_187(func_190(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_19E4A = iParam1;
		if (Global_19E48 == 0)
		{
			if (((Global_19E4B == 1 || Global_19E4B == 5) || Global_19E4B == 11) || Global_19E4B == 25)
			{
				func_198(2);
			}
			else if ((Global_19E4B == 26 || Global_19E4B == 8) || Global_19E4B == 17)
			{
				func_198(7);
			}
			else
			{
				func_198(1);
			}
		}
	}
}

void func_187(int iParam0, var uParam1, var uParam2)//Position - 0xA291
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
		func_22((891 + iParam0), 1, 4294967295, 1);
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
		func_188();
	}
}

void func_188()//Position - 0xA379
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
		func_44(13, SYSTEM::FLOOR(Global_19E56.f_27B6.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_11625)
		{
			if (func_189() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_19D4C = 0;
				}
				if (!Global_DB75)
				{
					func_185();
				}
			}
		}
	}
}

int func_189()//Position - 0xA83A
{
	return Global_6373;
}

int func_190(int iParam0, int iParam1)//Position - 0xA845
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

void func_191(int iParam0)//Position - 0xABB9
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

void func_192(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xABFB
{
	func_193(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_193(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0xAC1D
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
		func_194();
	}
}

void func_194()//Position - 0xADF1
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

int func_195(int iParam0)//Position - 0xAF11
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

void func_196(int iParam0, int iParam1)//Position - 0xAF54
{
	MISC::SET_BIT(&(Global_19E56.f_6187.f_8[iParam0]), iParam1);
}

int func_197()//Position - 0xAF6F
{
	return 1;
}

void func_198(int iParam0)//Position - 0xAF78
{
	Global_19E48 = iParam0;
}

void func_199()//Position - 0xAF86
{
	if (!bLocal_68 && iLocal_49 == 0)
	{
		if (!PED::IS_PED_INJURED(iLocal_52) && !PED::IS_PED_INJURED(iLocal_53))
		{
			BRAIN::TASK_GO_STRAIGHT_TO_COORD(iLocal_52, unk_0x8000C77B5F336760(iLocal_53, true), 3f, 20000, 1193033728, 1056964608);
			PED::SET_PED_KEEP_TASK(iLocal_52, true);
			SYSTEM::WAIT(0);
		}
	}
}

