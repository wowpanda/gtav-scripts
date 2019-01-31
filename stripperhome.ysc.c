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
	int iLocal_45 = 0;
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
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74[1] = { 0 };
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78 = 16;
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
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	int iLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	int iLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	int iLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	int iLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	int iLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	int iLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	int iLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 1097859072;
	var uLocal_267 = 1500;
	var uLocal_268 = 45;
	var uLocal_269 = 1103626240;
	var uLocal_270 = 5;
	int iLocal_271[1] = { 0 };
	char* sLocal_272 = NULL;
	char* sLocal_273 = NULL;
	var uLocal_274 = 1;
	var uLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	var uLocal_278[1] = { 0 };
	int iLocal_279[4] = { 0, 0, 0, 0 };
	struct<9> Local_280 = { 0, 0, 0, 0, 0, 0, 0, 21, 6 } ;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	int iLocal_284 = 0;
	vector3 vLocal_285 = { 0f, 0f, 0f };
	vector3 vLocal_286 = { 0f, 0f, 0f };
	vector3 vLocal_287 = { 0f, 0f, 0f };
	vector3 vLocal_288 = { 0f, 0f, 0f };
	vector3 vLocal_289 = { 0f, 0f, 0f };
	vector3 vLocal_290 = { 0f, 0f, 0f };
	vector3 vLocal_291 = { 0f, 0f, 0f };
	vector3 vLocal_292 = { 0f, 0f, 0f };
	float fLocal_293 = 0f;
	float fLocal_294 = 0f;
	float fLocal_295 = 0f;
	float fLocal_296 = 0f;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	bool bLocal_303 = 0;
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	struct<5> Local_308 = { 1, 0, 0, 0, 0 } ;
	var uLocal_309 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
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
	vLocal_63 = { 500f, 500f, 500f };
	fLocal_296 = -1f;
	iLocal_299 = 4294967295;
	bLocal_303 = true;
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("stripperhome");
	MISC::SET_MISSION_FLAG(1);
	PLAYER::_0xDE45D1A1EF45EE61(CAM::_0xDC9DA9E8789F5246(), 1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(75))
	{
		func_290();
	}
	bLocal_304 = ScriptParam_308.f_5;
	if (bLocal_304)
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, 4294967295);
		func_285(0, 4294967295, 0);
		NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	}
	uLocal_74[0] = ScriptParam_308[0];
	Global_19A87.f_1 = uLocal_74[0];
	bVar0 = false;
	bVar1 = true;
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	if (func_284() && ScriptParam_308.f_4)
	{
		bVar1 = false;
		if (iVar2 > 14 && iVar2 < 22)
		{
			bVar0 = true;
		}
	}
	while (((!func_255(&ScriptParam_308, bVar0) && iLocal_72 != 6) && iLocal_72 != 5) && (iLocal_72 != 4294967295 || !func_254(uLocal_300, 1024)))
	{
		func_246(0);
		SYSTEM::WAIT(0);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_245(0, 0));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_245(1, 0));
	if (!bVar1)
	{
		iLocal_72 = 2;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_302 > 0)
		{
			func_243();
			iLocal_302 = (iLocal_302 - SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		}
		switch (iLocal_72)
		{
			case 4294967295:
				func_242();
				break;
			
			case 0:
				func_203(1);
				break;
			
			case 1:
				func_106();
				break;
			
			case 2:
				func_203(0);
				break;
			
			case 3:
				func_88();
				break;
			
			case 4:
				func_37(bLocal_303);
				break;
			
			case 5:
				func_11();
				break;
			
			case 6:
				if (!func_10(&iLocal_258))
				{
					func_7(&iLocal_258);
				}
				else if (func_1(&iLocal_258, 7.5f))
				{
					func_290();
				}
				break;
		}
	}
}

int func_1(int iParam0, float fParam1)//Position - 0x24B
{
	if (func_3(iParam0, fParam1))
	{
		func_2(iParam0);
		return 1;
	}
	return 0;
}

void func_2(int iParam0)//Position - 0x269
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_3(int iParam0, float fParam1)//Position - 0x27F
{
	if (func_10(iParam0))
	{
		if (func_4(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(int iParam0)//Position - 0x2A1
{
	if (func_10(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_5(bool bParam0)//Position - 0x2E0
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

bool func_6(var uParam0)//Position - 0x338
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 2);
}

void func_7(int iParam0)//Position - 0x348
{
	if (!func_10(iParam0))
	{
		func_8(iParam0);
	}
}

void func_8(int iParam0)//Position - 0x360
{
	func_9(iParam0, 0f);
}

void func_9(int iParam0, float fParam1)//Position - 0x36F
{
	iParam0->f_1 = (func_5(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_10(var uParam0)//Position - 0x39D
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 1);
}

void func_11()//Position - 0x3AD
{
	if (!func_254(uLocal_300, 8192))
	{
		if (func_36())
		{
			func_26();
		}
		else
		{
			iLocal_72 = 6;
		}
	}
	if (func_254(uLocal_300, 16384))
	{
		if (func_12())
		{
			iLocal_72 = 6;
		}
	}
}

int func_12()//Position - 0x3EB
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_271[0], 0))
	{
		return 1;
	}
	if (func_254(uLocal_300, 8192))
	{
		PED::SET_PED_RESET_FLAG(iLocal_271[0], 60, true);
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_271[0], 96.8033f, -1287.597f, 28.2688f, 5f, 5f, 2f, false, true, 1) || func_25(AUDIO::_0x0626A247D2405330(), 96.8033f, -1287.597f, 28.2688f, 1) > 100f)
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 1, 0f, 0);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_279[0]))
			{
				if (CAM::IS_CAM_RENDERING(iLocal_279[0]))
				{
					func_13(1, 1, 0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
					CAM::DESTROY_CAM(iLocal_279[0], 1);
				}
			}
			PED::DELETE_PED(&(iLocal_271[0]));
			return 1;
		}
	}
	return 0;
}

void func_13(bool bParam0, bool bParam1, int iParam2)//Position - 0x4E7
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	func_15(0, 1, iParam2, 0, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(true);
		unk_0x59B038076F830627(true);
	}
	func_14(23, 0);
}

void func_14(int iParam0, bool bParam1)//Position - 0x523
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_6468, iParam0);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_6468, iParam0);
	}
}

void func_15(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x545
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(CAM::_0xDC9DA9E8789F5246());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(CAM::_0xDC9DA9E8789F5246(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 1);
		func_24(1);
		HUD::_0xA8FDB297A8D25FBA();
		HUD::_0xFDB423997FA30340();
		if (Global_38B1.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_23())
			{
				Global_38B1.f_1 = 3;
			}
			Global_3DCE = 5;
		}
		func_22(1, iParam3, iParam2, 0);
		Global_DB7B = 1;
		Global_10B91 = 1;
		Global_11623 = 1;
	}
	else
	{
		func_24(0);
		HUD::_0xE1CD1E48E025E661();
		Global_DB7B = 0;
		if (bParam1)
		{
			CAM::_SET_CAM_EFFECT();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(CAM::_0xDC9DA9E8789F5246(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 0);
		func_22(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && !func_20(CAM::_0xDC9DA9E8789F5246())) && !func_17(CAM::_0xDC9DA9E8789F5246(), 0)) && !func_16()) && !bParam4)
			{
				ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), false);
			}
		}
		else if ((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && !func_20(CAM::_0xDC9DA9E8789F5246())) && !bParam4)
		{
			ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), false);
		}
		Global_11623 = 0;
	}
}

bool func_16()//Position - 0x66E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 14);
}

bool func_17(int iParam0, int iParam1)//Position - 0x68B
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_18(4294967295, 0) == 8;
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

int func_18(int iParam0, bool bParam1)//Position - 0x6D6
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_19();
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

int func_19()//Position - 0x717
{
	return Global_1407E0;
}

int func_20(int iParam0)//Position - 0x723
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_21())
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

bool func_21()//Position - 0x765
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

int func_22(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x776
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_23()//Position - 0x7A9
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_24(int iParam0)//Position - 0x7D0
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_94F, 13);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 13);
	}
}

float func_25(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x7F3
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

void func_26()//Position - 0x82D
{
	int iVar0;
	
	func_29();
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 0, 0f, 0);
	}
	func_27(&uLocal_300, 16384);
	unk_0x346478B12F69D4E3(iLocal_271[0], false);
	PED::SET_PED_CONFIG_FLAG(iLocal_271[0], 104, true);
	BRAIN::OPEN_SEQUENCE_TASK(&iVar0);
	BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 98.2041f, -1291.252f, 28.2688f, 1f, 4294967295, 0.25f, 1, 1193033728);
	BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 107.6303f, -1304.742f, 27.7688f, 1f, 4294967295, 0.25f, 0, 1193033728);
	BRAIN::TASK_PLAY_ANIM(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 15000, 1, 0, 0, 0, 0);
	CUTSCENE::_0x8D9DF6ECA8768583(iVar0);
	BRAIN::TASK_PERFORM_SEQUENCE(iLocal_271[0], iVar0);
	BRAIN::CLEAR_SEQUENCE_TASK(&iVar0);
	func_27(&uLocal_300, 8192);
}

void func_27(var uParam0, int iParam1)//Position - 0x91A
{
	func_28(uParam0, iParam1);
}

void func_28(var uParam0, var uParam1)//Position - 0x92A
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_29()//Position - 0x93B
{
	if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_271[0]) && func_35(1, 0, 1))
	{
		func_30(0, 0, 0);
		iLocal_279[0] = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 90.1007f, -1281.573f, 28.6661f, 2.4422f, 0f, -113.4013f, 45f, 1, 2);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
	}
}

void func_30(int iParam0, int iParam1, int iParam2)//Position - 0x9A1
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0);
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		FIRE::STOP_FIRE_IN_RANGE(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(iParam1);
	func_31(0);
	func_15(1, 1, iParam2, 0, 0);
	HUD::DISPLAY_RADAR(false);
	unk_0x59B038076F830627(false);
	func_14(23, 1);
}

void func_31(int iParam0)//Position - 0x9F8
{
	if (func_34())
	{
		return;
	}
	if (Global_3959)
	{
		func_32(0, 0);
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
	if (!func_23())
	{
		Global_38B1.f_1 = 3;
	}
}

void func_32(bool bParam0, bool bParam1)//Position - 0xA72
{
	if (bParam0)
	{
		if (func_33(0))
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

int func_33(int iParam0)//Position - 0xAE6
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

bool func_34()//Position - 0xB40
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

int func_35(bool bParam0, bool bParam1, bool bParam2)//Position - 0xB52
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

int func_36()//Position - 0xC37
{
	if ((uLocal_74[0] == 8 || uLocal_74[0] == 9) || func_25(iLocal_271[0], 96.12f, -1284.91f, 29.43f, 1) > 10f)
	{
		return 0;
	}
	return 1;
}

void func_37(bool bParam0)//Position - 0xC83
{
	vector3 vVar0;
	var uVar1;
	int iVar2;
	
	func_64();
	if (bParam0)
	{
		vVar0 = { vLocal_287 };
	}
	else
	{
		func_63(&vVar0, &uVar1, 0);
	}
	func_60(vVar0);
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_271[0], 0))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, 0))
			{
				if (iLocal_305)
				{
					if (func_58(iVar2, 4f, 1, 1056964608, 0, 1, 0))
					{
						func_57();
						BRAIN::TASK_LEAVE_ANY_VEHICLE(iLocal_271[0], 0, 16777216);
						func_38();
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vVar0, 4f, 4f, 2f, true, true, 2))
				{
					iLocal_305 = 1;
				}
			}
		}
	}
}

void func_38()//Position - 0xD39
{
	func_56();
	func_49(295, 0, 0);
	func_39(0);
	func_290();
}

void func_39(bool bParam0)//Position - 0xD57
{
	struct<8> Var0[3];
	struct<6> Var1[3];
	
	if (!func_46())
	{
		return;
	}
	if (!iLocal_67)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Location", 32);
	StringCopy(&(Var0[2 /*8*/]), "Type", 32);
	if (bParam0)
	{
		StringCopy(&(Var1[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	}
	StringCopy(&(Var1[1 /*6*/]), "City", 24);
	StringCopy(&(Var1[2 /*6*/]), "????", 24);
	if (func_44(200, &Var1, &Var0, 3, 4294967295, 0, 0))
	{
		STATS::_0x0BCA1D2C47B0D269(131, func_43(), 0f);
		STATS::_0x0BCA1D2C47B0D269(108, func_42(), 0f);
		STATS::_0x0BCA1D2C47B0D269(102, func_41(), 0f);
		STATS::_0x0BCA1D2C47B0D269(8, func_40(), 0f);
	}
	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
}

int func_40()//Position - 0xE14
{
	return iLocal_65;
}

int func_41()//Position - 0xE1E
{
	return iLocal_66;
}

int func_42()//Position - 0xE28
{
	return iLocal_64;
}

int func_43()//Position - 0xE32
{
	return 0;
}

int func_44(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xE3B
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	if ((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::_0x1353F87E89946207())) && NETWORK::_0x422D396F80A96547())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == 4294967295)
		{
			if (GRAPHICS::_DRAW_SHOWROOM())
			{
				Var2 = { func_45(CAM::_0xDC9DA9E8789F5246()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var2))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1C0005.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_257B9F.f_3)
			{
				STATS::_0xC980E62E33DF1D5C(&Var0, &(Global_193FA3.f_A));
			}
			else
			{
				STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			}
		}
		return 1;
	}
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	if (NETWORK::_0x1353F87E89946207())
	{
	}
	if (!NETWORK::_0x422D396F80A96547())
	{
	}
	return 0;
}

struct<13> func_45(int iParam0)//Position - 0xF6F
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_46()//Position - 0xF86
{
	if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && func_47())
	{
		return 1;
	}
	return 0;
}

int func_47()//Position - 0xFAC
{
	if (func_48())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_48()//Position - 0xFCC
{
	return Global_258443;
}

void func_49(int iParam0, int iParam1, int iParam2)//Position - 0xFD8
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
		func_55((891 + iParam0), 1, 4294967295, 1);
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
		Global_19E56.f_27B6[iParam0 /*12*/].f_A = iParam1;
		Global_19E56.f_27B6[iParam0 /*12*/].f_B = iParam2;
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
		func_50();
	}
}

void func_50()//Position - 0x10C0
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
		func_54(13, SYSTEM::FLOOR(Global_19E56.f_27B6.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_11625)
		{
			if (func_53() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_19D4C = 0;
				}
				if (!Global_DB75)
				{
					func_51();
				}
			}
		}
	}
}

int func_51()//Position - 0x1581
{
	if (func_52(0))
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

bool func_52(bool bParam0)//Position - 0x15CC
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

int func_53()//Position - 0x15F7
{
	return Global_6373;
}

int func_54(int iParam0, int iParam1)//Position - 0x1602
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

int func_55(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1653
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
		iParam2 = func_19();
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

void func_56()//Position - 0x1BB1
{
	iLocal_66++;
	iLocal_67 = 1;
}

void func_57()//Position - 0x1BC2
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_271[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_271[0], 0))
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_271[0], true);
		if (PED::IS_PED_IN_GROUP(iLocal_271[0]))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_271[0]);
		}
	}
}

int func_58(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1C0A
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
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
	PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	func_59(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_1D) > 500)
	{
		VEHICLE::_SET_VEHICLE_HALT(iParam0, fParam1, iParam2, iParam4);
	}
	Global_1D = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_59(int iParam0)//Position - 0x1D99
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (unk_0xB90934C41404D57A(iParam0))
		{
			if (unk_0x8324A028D312E68D(iParam0))
			{
				unk_0xFE0D4DB713B1C1E7(iParam0, 0);
			}
		}
	}
}

void func_60(vector3 vParam0)//Position - 0x1DC5
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(iLocal_277))
	{
		HUD::REMOVE_BLIP(&iLocal_277);
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_271[0], 0))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_271[0], PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_276))
				{
					iLocal_276 = func_61(vParam0, 1);
				}
			}
		}
	}
}

int func_61(vector3 vParam0, bool bParam1)//Position - 0x1E4B
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_62(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

float func_62(bool bParam0, float fParam1, float fParam2)//Position - 0x1E77
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_63(var uParam0, var uParam1, bool bParam2)//Position - 0x1E8E
{
	vLocal_290 = { vLocal_290 };
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (!bParam2)
			{
				*uParam0 = { 92.8829f, -1281.123f, 28.1845f };
				*uParam1 = 15f;
			}
			else
			{
				*uParam0 = { vLocal_289 };
				*uParam1 = fLocal_293;
			}
			vLocal_290 = { *uParam0 };
			break;
		
		case 8:
			if (!bParam2)
			{
				*uParam0 = { -1615.991f, 187.4827f, 59.1337f };
				*uParam1 = 217.5474f;
			}
			else
			{
				*uParam0 = { vLocal_289 };
				*uParam1 = fLocal_293;
			}
			vLocal_290 = { *uParam0 };
			break;
		
		case 9:
			if (!bParam2)
			{
				*uParam0 = { 1538.432f, 3776.85f, 33.5178f };
				*uParam1 = 225.8821f;
			}
			else
			{
				*uParam0 = { vLocal_289 };
				*uParam1 = fLocal_293;
			}
			vLocal_290 = { *uParam0 };
			break;
	}
}

void func_64()//Position - 0x1FA3
{
	if (PED::IS_PED_INJURED(iLocal_271[0]))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_271[0]))
		{
		}
		else if (ENTITY::IS_ENTITY_DEAD(iLocal_271[0], 0))
		{
		}
		func_65(0);
	}
}

void func_65(int iParam0)//Position - 0x1FDC
{
	if ((uLocal_74[0] > 4294967295 && uLocal_74[0] < 10) && iParam0 != 2)
	{
		func_86(uLocal_74[0], (func_87(uLocal_74[0]) / 2));
	}
	func_84();
	switch (iParam0)
	{
		case 0:
			func_82("SCLUB_HOME_D", uLocal_74[0]);
			func_86(uLocal_74[0], 0);
			func_71(uLocal_74[0], 1);
			iLocal_72 = 6;
			break;
		
		case 1:
			HUD::CLEAR_PRINTS();
			func_66("SCLUB_HOME_A", uLocal_74[0], 0);
			iLocal_72 = 5;
			break;
		
		case 2:
			iLocal_72 = 5;
			break;
		
		case 4:
			func_82("SCLUB_HOME_D3", uLocal_74[0]);
			iLocal_72 = 6;
			break;
		
		case 3:
			if (func_25(iLocal_271[0], 92.5861f, -1282.86f, 28.2548f, 1) < 10f)
			{
				iLocal_72 = 5;
			}
			else
			{
				iLocal_72 = 6;
			}
			break;
	}
}

void func_66(char* sParam0, int iParam1, bool bParam2)//Position - 0x20C8
{
	int iVar0;
	
	MemCopy(&iVar0, {func_70(iParam1)}, 6);
	if (!func_69(sParam0, &iVar0))
	{
		if (!bParam2)
		{
			func_68(sParam0, &iVar0, 4294967295);
		}
		else
		{
			func_67(sParam0, &iVar0);
		}
	}
}

void func_67(char* sParam0, int iParam1)//Position - 0x2101
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, 4294967295);
}

void func_68(char* sParam0, int iParam1, int iParam2)//Position - 0x211D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam2);
}

int func_69(char* sParam0, int iParam1)//Position - 0x213A
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

struct<4> func_70(int iParam0)//Position - 0x2153
{
	struct<4> Var0;
	
	StringCopy(&Var0, "SCLUB_NM_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

void func_71(int iParam0, bool bParam1)//Position - 0x216D
{
	if (bParam1)
	{
		func_27(&(Global_19E56.f_F3[func_74() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
	else
	{
		func_72(&(Global_19E56.f_F3[func_74() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
}

void func_72(var uParam0, int iParam1)//Position - 0x21AF
{
	func_73(uParam0, iParam1);
}

void func_73(var uParam0, var uParam1)//Position - 0x21BF
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_74()//Position - 0x21D4
{
	int iVar0;
	
	iVar0 = func_76();
	switch (iVar0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		default:
			switch (func_75(4294967295))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

int func_75(int iParam0)//Position - 0x2262
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_19();
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

int func_76()//Position - 0x2296
{
	func_77();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_77()//Position - 0x22AF
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_81(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_80(AUDIO::_0x0626A247D2405330());
			if (func_79(iVar0) && (!func_78(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_79(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_78(int iParam0)//Position - 0x23AC
{
	return Global_8D15 == iParam0;
}

bool func_79(int iParam0)//Position - 0x23BA
{
	return iParam0 < 3;
}

int func_80(int iParam0)//Position - 0x23C6
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_81(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_81(int iParam0)//Position - 0x2403
{
	if (func_79(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_82(char* sParam0, int iParam1)//Position - 0x242D
{
	int iVar0;
	
	MemCopy(&iVar0, {func_70(iParam1)}, 6);
	func_83(sParam0, &iVar0, 7500, 1);
}

void func_83(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x244C
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, 1);
}

void func_84()//Position - 0x246B
{
	if (HUD::DOES_BLIP_EXIST(iLocal_277))
	{
		HUD::REMOVE_BLIP(&iLocal_277);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_276))
	{
		HUD::REMOVE_BLIP(&iLocal_276);
	}
	func_85();
}

void func_85()//Position - 0x2499
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_278[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_278[iVar0]));
		}
		iVar0++;
	}
}

void func_86(int iParam0, int iParam1)//Position - 0x24CC
{
	Global_19E56.f_F3[func_74() /*53*/].f_2[iParam0 /*5*/] = iParam1;
}

int func_87(int iParam0)//Position - 0x24E8
{
	return Global_19E56.f_F3[func_74() /*53*/].f_2[iParam0 /*5*/];
}

void func_88()//Position - 0x2502
{
	func_64();
	func_84();
	switch (iLocal_77)
	{
		case 0:
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_271[0], 0))
				{
					if (!func_105("SCLUB_SECLUDED"))
					{
						func_104("SCLUB_SECLUDED");
					}
					if (func_103() && ENTITY::GET_ENTITY_SPEED(AUDIO::_0x0626A247D2405330()) == 0f)
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
						STREAMING::REQUEST_ANIM_DICT(func_98(iLocal_271[0], 0, 0));
						iLocal_77 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (func_91())
			{
				iLocal_77 = 2;
			}
			break;
		
		case 2:
			if (BRAIN::GET_SCRIPT_TASK_STATUS(AUDIO::_0x0626A247D2405330(), 242628503) != 1)
			{
				func_243();
				if (CLOCK::GET_CLOCK_HOURS() > 20 || CLOCK::GET_CLOCK_HOURS() < 4)
				{
					bLocal_303 = false;
				}
				CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_45);
				func_89(bLocal_303);
				iLocal_72 = 4;
			}
			break;
	}
}

void func_89(bool bParam0)//Position - 0x25D9
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_82("SCLUB_HOME_GO", uLocal_74[0]);
			}
			else
			{
				func_90("SCLUB_CLUB_GO", 7500, 1);
			}
			break;
		
		case 8:
		case 9:
			func_90("SCLUB_HOME_GO3", 7500, 1);
			break;
	}
}

void func_90(char* sParam0, int iParam1, int iParam2)//Position - 0x265A
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_91()//Position - 0x2673
{
	if (STREAMING::HAS_ANIM_DICT_LOADED(func_98(iLocal_271[0], 0, 0)))
	{
		func_92(iLocal_271[0], 0, 1, 4294967295, 1);
		func_92(AUDIO::_0x0626A247D2405330(), 0, 0, 4294967295, 1);
		return 1;
	}
	return 0;
}

void func_92(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x26AD
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
	{
		return;
	}
	iLocal_45 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1) && func_97(0, 1))
	{
		if (iLocal_45 != 4)
		{
			CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(4);
		}
	}
	bVar1 = func_96(iVar0);
	sVar2 = func_98(iParam0, 0, 0);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
	{
		STREAMING::REQUEST_ANIM_DICT(sVar2);
	}
	else
	{
		BRAIN::OPEN_SEQUENCE_TASK(&iVar3);
		BRAIN::TASK_PLAY_ANIM(0, sVar2, func_93(0, bParam2, bParam1, bVar1), 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
		BRAIN::TASK_PLAY_ANIM(0, sVar2, func_93(1, bParam2, bParam1, bVar1), 8f, -4f, 4294967295, 0, 0, 0, 0, 0);
		BRAIN::TASK_PLAY_ANIM(0, sVar2, func_93(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		BRAIN::TASK_PLAY_ANIM(0, sVar2, func_93(3, bParam2, bParam1, bVar1), 8f, -4f, 4294967295, 0, 0, 0, 0, 0);
		BRAIN::TASK_PLAY_ANIM(0, sVar2, func_93(4, bParam2, bParam1, bVar1), 4f, -2f, 4294967295, 0, 0, 0, 0, 0);
		CUTSCENE::_0x8D9DF6ECA8768583(iVar3);
		BRAIN::TASK_PERFORM_SEQUENCE(iParam0, iVar3);
		if (bParam4)
		{
			BRAIN::CLEAR_SEQUENCE_TASK(&iVar3);
		}
	}
}

char* func_93(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x27F2
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_95(18);
					}
					else
					{
						sVar0 = func_95(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_95(8);
				}
				else
				{
					sVar0 = func_95(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_94(18);
				}
				else
				{
					sVar0 = func_94(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(8);
			}
			else
			{
				sVar0 = func_94(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_95(19);
					}
					else
					{
						sVar0 = func_95(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_95(9);
				}
				else
				{
					sVar0 = func_95(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_94(19);
				}
				else
				{
					sVar0 = func_94(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(9);
			}
			else
			{
				sVar0 = func_94(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_95(20);
					}
					else
					{
						sVar0 = func_95(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_95(10);
				}
				else
				{
					sVar0 = func_95(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_94(20);
				}
				else
				{
					sVar0 = func_94(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(10);
			}
			else
			{
				sVar0 = func_94(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_95(21);
					}
					else
					{
						sVar0 = func_95(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_95(11);
				}
				else
				{
					sVar0 = func_95(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_94(21);
				}
				else
				{
					sVar0 = func_94(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(11);
			}
			else
			{
				sVar0 = func_94(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_95(22);
					}
					else
					{
						sVar0 = func_95(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_95(12);
				}
				else
				{
					sVar0 = func_95(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_94(22);
				}
				else
				{
					sVar0 = func_94(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(12);
			}
			else
			{
				sVar0 = func_94(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_95(3);
				}
				else
				{
					sVar0 = func_95(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(3);
			}
			else
			{
				sVar0 = func_94(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_94(int iParam0)//Position - 0x2AD4
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_95(int iParam0)//Position - 0x2C92
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_96(int iParam0)//Position - 0x2E50
{
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case 2228715155:
			case 4256554140:
			case 3512246797:
			case 542797648:
			case 68566729:
			case 2407223118:
			case 3831626299:
			case 2033852426:
			case 2474072471:
			case 1697345049:
			case 3659269889:
			case 2841488156:
			case 1837596901:
			case 2013836096:
			case 2071837743:
			case 2130662788:
			case 2748835284:
			case 1192783831:
			case 3977022632:
			case 570040040:
			case 1212243433:
			case 4101944522:
			case 510359473:
			case 3306590002:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_97(bool bParam0, bool bParam1)//Position - 0x2F05
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = CAM::_0xEE778F8C7E1142E2(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = CAM::_0xEE778F8C7E1142E2(1) == 4;
		}
	}
	return bVar0;
}

var func_98(int iParam0, bool bParam1, int iParam2)//Position - 0x2F34
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
		{
			if (func_96(iVar0))
			{
				if ((!func_97(0, 1) || iParam2) && !bParam1)
				{
					return func_102();
				}
				else
				{
					return func_101();
				}
			}
		}
	}
	if ((!func_97(0, 1) || iParam2) && !bParam1)
	{
		return func_100();
	}
	return func_99();
}

char* func_99()//Position - 0x2FB6
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_100()//Position - 0x2FC2
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_101()//Position - 0x2FCE
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_102()//Position - 0x2FDA
{
	return "mini@prostitutes@sexlow_veh";
}

int func_103()//Position - 0x2FE6
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	vector3 vVar5;
	var uVar6;
	vector3 vVar7;
	float fVar8;
	int iVar9;
	
	fVar4 = 25f;
	func_63(&vVar5, &uVar6, 0);
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		}
		vVar3 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
		if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(vVar3, &vVar7, 1077936128, 0))
		{
			fVar8 = SYSTEM::VDIST(vVar3, vVar7);
			if (fVar8 <= 10f)
			{
				return 0;
			}
		}
		if (SYSTEM::VDIST(vVar3, vLocal_287) < 20f || SYSTEM::VDIST(vVar3, vVar5) < 20f)
		{
			return 0;
		}
		if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(vVar3 - Vector(20f, 20f, 20f), vVar3 + Vector(20f, 20f, 20f)))
		{
			return 0;
		}
		PED::GET_CLOSEST_PED(vVar3, fVar4, 1, 1, &iVar0, 0, 0, 4294967295);
		if (!iVar0 == 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iVar0, AUDIO::_0x0626A247D2405330(), 17))
				{
					return 0;
				}
			}
		}
		else
		{
			iVar1 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(vVar3, fVar4, 0, 4294967295);
			if (!iVar1 == 0)
			{
				if (!iVar1 == iVar2)
				{
					if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar1, 0))
					{
						iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, 4294967295, 0);
						if (!iVar0 == 0)
						{
							return 0;
						}
					}
				}
			}
		}
		iVar9 = INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330());
		if (!iVar9 == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_104(char* sParam0)//Position - 0x3158
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, 4294967295);
}

int func_105(char* sParam0)//Position - 0x316E
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_106()//Position - 0x3181
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_73 < 12 && iLocal_73 >= 2)
	{
		if (func_201(3000))
		{
			CAM::DO_SCREEN_FADE_OUT(1000);
			iLocal_73 = 12;
		}
	}
	if (!bLocal_69 && iLocal_73 >= 5)
	{
		iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("BLIMP2"))
			{
				bLocal_69 = false;
			}
			else if (VEHICLE::IS_BIG_VEHICLE(VEHICLE::GET_LAST_DRIVEN_VEHICLE()) && uLocal_74[0] == 5)
			{
				bLocal_69 = func_198(&uLocal_68, -865f, 516.3f, 90f, 1, 15f);
			}
			else if (func_197(VEHICLE::GET_LAST_DRIVEN_VEHICLE()))
			{
				bLocal_69 = func_198(&uLocal_68, vLocal_292, 1, fLocal_294);
			}
			else
			{
				bLocal_69 = func_198(&uLocal_68, vLocal_287, 1, fLocal_294);
			}
		}
	}
	if (iLocal_73 > 0 && iLocal_73 < 13)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	switch (iLocal_73)
	{
		case 0:
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			HUD::CLEAR_PRINTS();
			func_84();
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TIME_LAPSE", false, 4294967295);
			func_30(56, 1, 0);
			if (!func_254(uLocal_300, 131072))
			{
				func_27(&uLocal_300, 131072);
			}
			if (!func_254(uLocal_300, 256))
			{
				func_196();
				func_27(&uLocal_300, 256);
			}
			if (!func_254(uLocal_300, 32768))
			{
				STREAMING::REQUEST_ANIM_DICT(func_195());
				func_27(&uLocal_300, 32768);
			}
			if (!func_254(uLocal_300, 256))
			{
				STREAMING::REQUEST_ANIM_DICT(func_194());
				func_27(&uLocal_300, 256);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				iLocal_307 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
				func_193(AUDIO::_0x0626A247D2405330(), iLocal_307);
				iLocal_73 = 1;
			}
			else
			{
				func_57();
				func_191(AUDIO::_0x0626A247D2405330(), vLocal_285);
				func_191(iLocal_271[0], vLocal_286);
				iLocal_73 = 2;
			}
			func_189();
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_307, 0))
			{
				if (SYSTEM::VDIST(unk_0x8000C77B5F336760(iLocal_307, true), vLocal_287) < 2f)
				{
					func_57();
					func_191(AUDIO::_0x0626A247D2405330(), vLocal_285);
					func_191(iLocal_271[0], vLocal_286);
					BRAIN::ENABLE_SCRIPT_BRAIN_SET();
					iLocal_73 = 2;
				}
				else if (MISC::GET_GAME_TIMER() >= 10000)
				{
					iLocal_73 = 13;
				}
			}
			break;
		
		case 2:
			if (!CAM::IS_CAM_RENDERING(iLocal_279[0]))
			{
				CAM::SET_CAM_ACTIVE(iLocal_279[0], true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_307, 0))
				{
					if (ENTITY::GET_ENTITY_MODEL(iLocal_307) == joaat("BLIMP2"))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_307, false, 0);
					}
				}
				func_8(&iLocal_252);
				iLocal_73 = 3;
			}
			break;
		
		case 3:
			if (func_188(&iLocal_252) > 1f)
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_279[1], iLocal_279[0], 6000, 1, 1);
				func_187(&Local_280, 1, 0, 2000, 1, 1, 0, 1);
				iVar1 = CLOCK::GET_CLOCK_HOURS();
				iLocal_297 = iVar1 + 8;
				if (iLocal_297 > 23)
				{
					iLocal_297 = (iLocal_297 - 24);
				}
				Local_280.f_7 = iVar1;
				Local_280.f_8 = iLocal_297;
				func_2(&iLocal_252);
				iLocal_73 = 4;
			}
			break;
		
		case 4:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_279[1]) && CAM::IS_CAM_RENDERING(iLocal_279[1]))
			{
				if (!func_254(uLocal_298, 512))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_307) && !ENTITY::IS_ENTITY_DEAD(iLocal_307, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_307, 1);
					}
					func_184(AUDIO::_0x0626A247D2405330(), func_186());
					ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), func_183());
					func_165();
					func_27(&uLocal_298, 512);
				}
				else if (!func_254(uLocal_298, 2048))
				{
					if (ENTITY::IS_ENTITY_DEAD(iLocal_271[0], 0))
					{
					}
					if (!func_164() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_271[0]))
					{
						func_165();
						if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
						{
							AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(AUDIO::_0x0626A247D2405330());
							AUDIO::_PLAY_AMBIENT_SPEECH1(AUDIO::_0x0626A247D2405330(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
						}
						func_27(&uLocal_298, 2048);
						func_8(&iLocal_252);
						sLocal_273 = func_163();
						iLocal_73 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (func_188(&iLocal_252) > 1f)
			{
				if (func_138(iLocal_297, 0, sLocal_273, "", &Local_280, (func_188(&iLocal_252) * 0.2f), 0))
				{
					if (!func_164())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_307))
						{
							if (ENTITY::GET_ENTITY_MODEL(iLocal_307) != joaat("BLIMP2"))
							{
								MISC::CLEAR_AREA(vLocal_286, 20f, 1, 0, 0, false);
							}
						}
						else
						{
							MISC::CLEAR_AREA(vLocal_286, 20f, 1, 0, 0, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_271[0]))
						{
							ENTITY::SET_ENTITY_VISIBLE(iLocal_271[0], false, 0);
						}
						BRAIN::SET_PED_PATH_AVOID_FIRE(AUDIO::_0x0626A247D2405330(), 0);
						func_8(&iLocal_252);
						iLocal_73 = 6;
					}
				}
			}
			break;
		
		case 6:
			WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_unarmed"), true);
			if (func_188(&iLocal_252) > 1.5f)
			{
				if (bLocal_69)
				{
					func_136(&uLocal_68);
				}
				func_8(&iLocal_252);
				iLocal_73 = 7;
			}
			break;
		
		case 7:
			if (!CAM::IS_CAM_RENDERING(iLocal_279[2]))
			{
				CAM::_SET_CAM_EFFECT();
				GRAPHICS::_0x0AE73D8DF3A762B2(true);
				unk_0x66F05C65F48B55AF(1);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_279[2], iLocal_279[1], 6000, 1, 1);
				func_8(&iLocal_252);
				iLocal_73 = 8;
			}
			break;
		
		case 8:
			if (!func_254(uLocal_300, 262144))
			{
				if (func_188(&iLocal_252) >= 1.25f)
				{
					func_135();
				}
			}
			if (func_188(&iLocal_252) > 6f)
			{
				CAM::SET_CAM_ACTIVE(iLocal_279[3], true);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_307, 0))
				{
					if (ENTITY::GET_ENTITY_MODEL(iLocal_307) == joaat("BLIMP2"))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_307, true, 0);
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_307, true, 1);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_307, 1000f);
					unk_0xD3F329A16C0E5B2B(iLocal_307, 1000f);
					VEHICLE::SET_VEHICLE_FIXED(iLocal_307);
				}
				func_8(&iLocal_252);
				iLocal_73 = 10;
			}
			break;
		
		case 10:
			if (func_188(&iLocal_252) > 2f)
			{
				CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
				iLocal_73 = 13;
			}
			break;
		
		case 12:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				if (!func_254(uLocal_300, 262144))
				{
					PLAYER::START_PLAYER_TELEPORT(CAM::_0xDC9DA9E8789F5246(), vLocal_289, fLocal_293, false, true, 1);
					func_135();
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_307, 0))
				{
					if (ENTITY::GET_ENTITY_MODEL(iLocal_307) == joaat("BLIMP2"))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_307, true, 0);
					}
				}
				WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_unarmed"), true);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_307, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_307, true, 1);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_307, 1000f);
					unk_0xD3F329A16C0E5B2B(iLocal_307, 1000f);
					VEHICLE::SET_VEHICLE_FIXED(iLocal_307);
				}
				func_8(&iLocal_252);
				iLocal_73 = 13;
			}
			break;
		
		case 13:
			if (!CAM::IS_SCREEN_FADING_OUT() && func_188(&iLocal_252) >= 1f)
			{
				func_13(1, 1, 0);
				unk_0x65E471E4A2D56226(AUDIO::_0x0626A247D2405330(), PED::GET_PED_MAX_HEALTH(AUDIO::_0x0626A247D2405330()), 0);
				PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(CAM::_0xDC9DA9E8789F5246(), 30, 1);
				if (PED::IS_PED_MODEL(AUDIO::_0x0626A247D2405330(), func_81(0)))
				{
					func_134();
				}
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), 15f, 1);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_307, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_307, true, 1);
					if (ENTITY::GET_ENTITY_MODEL(iLocal_307) != joaat("BLIMP2"))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_307, vLocal_287, 1, false, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_307, fLocal_294);
						if (VEHICLE::IS_BIG_VEHICLE(iLocal_307) && uLocal_74[0] == 5)
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_307, -865f, 516.3f, 90f, 1, false, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_307, 15f);
						}
						else if (func_197(iLocal_307))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_307, vLocal_292, 1, false, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_307, fLocal_295);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_307, 1084227584);
					}
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					func_187(&Local_280, 0, 0, 2000, 1, 0, 0, 1);
				}
				else
				{
					CLOCK::ADD_TO_CLOCK_TIME(8, 0, 0);
					func_132(SYSTEM::TO_FLOAT(8));
					CAM::DO_SCREEN_FADE_IN(2000);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					func_187(&Local_280, 0, 0, 2000, 1, 1, 0, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_271[0]))
				{
					PED::DELETE_PED(&(iLocal_271[0]));
				}
				if (!func_131(uLocal_74[0], 4294967295))
				{
					if (uLocal_74[0] == 5)
					{
						func_66("SCLUB_PHON_HELP_ALT", uLocal_74[0], 0);
					}
					else
					{
						func_66("SCLUB_PHON_HELP", uLocal_74[0], 0);
					}
					func_117(uLocal_74[0], 1, 4294967295);
					SYSTEM::WAIT(4000);
				}
				func_115(uLocal_74[0]);
				iVar2 = func_114(uLocal_74[0]);
				if (iVar2 <= 2)
				{
					iVar3 = func_113(uLocal_74[0]);
					iVar4 = func_112(iVar2);
					func_107(3910391504, iVar3, iVar4, 3, func_111(), func_110(uLocal_74[0]), 60000, 10000, 4294967295, 0, 4294967295, 0, 1);
				}
				func_38();
			}
			break;
	}
}

int func_107(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x3A40
{
	struct<14> Var0;
	
	if (func_52(0))
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 < 0)
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
	if (iParam5 < 3)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, iParam5))
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (iParam1 == 4294967295)
	{
		return 0;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return 0;
	}
	if (Global_19E56.f_1DEC.f_2FC < 8)
	{
		Var0 = iParam0;
		Var0.f_3 = func_109(iParam3);
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = iParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_A = iParam1;
		Var0.f_B = iParam2;
		Var0.f_D = iParam12;
		GRAPHICS::_0x35FB78DC42B7BD21(&(Var0.f_1), 0);
		Global_19E56.f_1DEC.f_28B[Global_19E56.f_1DEC.f_2FC /*14*/] = { Var0 };
		Global_19E56.f_1DEC.f_2FC++;
		func_108(0);
		func_108(1);
		func_108(2);
		return 1;
	}
	return 0;
}

void func_108(int iParam0)//Position - 0x3B7E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_79(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_1DEC.f_88)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1DEC[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_19E56.f_1DEC[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_19E56.f_1DEC[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_19E56.f_1DEC.f_2FC)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1DEC.f_28B[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_19E56.f_1DEC.f_28B[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_19E56.f_1DEC.f_397[iParam0] = iVar1;
}

int func_109(int iParam0)//Position - 0x3C42
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

int func_110(int iParam0)//Position - 0x3CAC
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

int func_111()//Position - 0x3D49
{
	func_77();
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

int func_112(int iParam0)//Position - 0x3D8F
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
	}
	return 4294967295;
}

int func_113(int iParam0)//Position - 0x3DC9
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 4:
			return 2;
			break;
		
		case 5:
			return 3;
			break;
		
		case 8:
			return 4;
			break;
		
		case 9:
			return 5;
			break;
	}
	return 4294967295;
}

int func_114(int iParam0)//Position - 0x3E27
{
	return Global_19E56.f_F3[func_74() /*53*/].f_2[iParam0 /*5*/].f_2;
}

void func_115(int iParam0)//Position - 0x3E43
{
	if (func_114(iParam0) < 0)
	{
		func_116(iParam0, 0);
	}
	Global_19E56.f_F3[func_74() /*53*/].f_2[iParam0 /*5*/].f_2++;
}

void func_116(int iParam0, int iParam1)//Position - 0x3E86
{
	Global_19E56.f_F3[func_74() /*53*/].f_2[iParam0 /*5*/].f_2 = iParam1;
}

void func_117(int iParam0, bool bParam1, int iParam2)//Position - 0x3EA4
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_74();
	}
	if (func_130(iParam2) == 4)
	{
	}
	bVar0 = Global_19E56.f_F3[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!func_129(func_110(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_129(func_110(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_19E56.f_F3[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_128(iParam0, 0);
			func_125(func_110(iParam0), func_130(iParam2), 1);
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					MISC::SET_BIT(&(Global_200000[func_124() /*12745*/].f_1FF2.f_4F8), iParam0);
					func_121(15, 0);
					break;
			}
			func_120(iVar1);
			func_119(iParam0, iVar1);
			Global_19A68.f_F[iParam0] = MISC::GET_GAME_TIMER();
		}
	}
	else if (bVar0)
	{
		func_118(func_110(iParam0), func_130(iParam2));
	}
}

void func_118(int iParam0, int iParam1)//Position - 0x3FC8
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

void func_119(int iParam0, int iParam1)//Position - 0x400C
{
	if (iParam1 > 4294967295)
	{
		Global_19A68.f_4[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
	}
	else
	{
		Global_19A68.f_4[iParam0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1200000, 2100000));
	}
}

void func_120(int iParam0)//Position - 0x4049
{
	if (iParam0 != 4294967295)
	{
		Global_19A68.f_3 = (MISC::GET_GAME_TIMER() + iParam0);
	}
	else
	{
		Global_19A68.f_3 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(21600000, 25200000));
	}
}

void func_121(int iParam0, int iParam1)//Position - 0x4080
{
	int iVar0;
	
	if (func_123(iParam0, iParam1))
	{
		iVar0 = func_122();
		Global_2581E6[iVar0] = iParam0;
	}
}

int func_122()//Position - 0x40A3
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

int func_123(int iParam0, var uParam1)//Position - 0x40D8
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

int func_124()//Position - 0x415E
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_125(int iParam0, int iParam1, bool bParam2)//Position - 0x416B
{
	Global_BFD = iParam0;
	if (Global_75[iParam0 /*10*/].f_8 != 145)
	{
		func_127();
		if (iParam1 == 4)
		{
			Global_19E56.f_6D76[iParam0 /*29*/].f_C[0] = 1;
			Global_19E56.f_6D76[iParam0 /*29*/].f_C[1] = 1;
			Global_19E56.f_6D76[iParam0 /*29*/].f_C[2] = 1;
			Global_19E56.f_6D76[iParam0 /*29*/].f_18[0] = 1;
			Global_19E56.f_6D76[iParam0 /*29*/].f_18[1] = 1;
			Global_19E56.f_6D76[iParam0 /*29*/].f_18[2] = 1;
		}
		else
		{
			if (Global_19E56.f_6D76[iParam0 /*29*/].f_C[iParam1] == 1 && Global_19E56.f_6D76[iParam0 /*29*/].f_18[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_19E56.f_6D76[iParam0 /*29*/].f_C[iParam1] = 1;
			Global_19E56.f_6D76[iParam0 /*29*/].f_18[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_11625)
			{
				if (iParam1 != 4)
				{
					if (Global_38B1 != iParam1)
					{
						Global_BE2[iParam1 /*4*/] = { Global_19E56.f_6D76[iParam0 /*29*/].f_3 };
						Global_BF3[iParam1] = 1;
						Global_BF8[iParam1] = iParam0;
					}
					else if (iParam0 == Global_38B1)
					{
					}
					else
					{
						Global_BB1[1 /*6*/] = { Global_19E56.f_6D76[iParam0 /*29*/].f_3 };
						Global_BB1[1 /*6*/].f_5 = iParam1;
						func_126();
					}
				}
				else
				{
					Global_BB1[1 /*6*/] = { Global_19E56.f_6D76[iParam0 /*29*/].f_3 };
					Global_BB1[1 /*6*/].f_5 = iParam1;
					func_126();
				}
			}
			else
			{
				Global_BB1[1 /*6*/] = { Global_19E56.f_6D76[iParam0 /*29*/].f_3 };
				Global_BB1[1 /*6*/].f_5 = iParam1;
				func_126();
			}
		}
	}
}

void func_126()//Position - 0x4315
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[Global_BFD /*29*/].f_7)), 64);
	if (Global_C10 == 0)
	{
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("");
		StringCopy(&cVar1, HUD::_GET_LABEL_TEXT(&(Global_BB1[1 /*6*/])), 64);
		sVar2 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::_SET_NOTIFICATION_MESSAGE(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_BB1[1 /*6*/]));
		HUD::_SET_NOTIFICATION_MESSAGE(&cVar0, &cVar0, 0, 3, "", 0);
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 0);
}

void func_127()//Position - 0x4396
{
	if (func_78(14))
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
		Global_38B1 = func_76();
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

void func_128(int iParam0, int iParam1)//Position - 0x4438
{
	Global_19E56.f_F3[func_74() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_129(int iParam0, int iParam1)//Position - 0x4456
{
	if (Global_19E56.f_6D76[iParam0 /*29*/].f_C[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)//Position - 0x447B
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

bool func_131(int iParam0, int iParam1)//Position - 0x44D7
{
	if (iParam1 < 0)
	{
		iParam1 = func_74();
	}
	return Global_19E56.f_F3[iParam1 /*53*/].f_2[iParam0 /*5*/].f_4;
}

void func_132(float fParam0)//Position - 0x44FD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_10(&(Global_19E56.f_469B.f_AF[iVar0 /*19*/].f_5)))
		{
			func_133(&(Global_19E56.f_469B.f_AF[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_10(&(Global_19E56.f_469B.f_16A[iVar1 /*3*/])))
		{
			func_133(&(Global_19E56.f_469B.f_16A[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	AUDIO::SKIP_RADIO_FORWARD();
}

void func_133(int iParam0, float fParam1)//Position - 0x458E
{
	if (func_10(iParam0))
	{
		func_9(iParam0, (func_4(iParam0) + fParam1));
	}
}

void func_134()//Position - 0x45B1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_15EBD[iVar0] = Global_15EBD[iVar0 + 1];
		}
		else
		{
			Global_15EBD[iVar0] = MISC::GET_GAME_TIMER();
		}
		iVar0++;
	}
}

void func_135()//Position - 0x45F2
{
	int iVar0;
	int iVar1;
	
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_272))
	{
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 50000);
		NETWORK::_0x5E3AA4CA2B6FB0EE(AUDIO::_0x0626A247D2405330());
		BRAIN::OPEN_SEQUENCE_TASK(&iVar1);
		BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_289, 1f, 4294967295, 0.25f, 0, fLocal_293);
		if (iVar0 < 15000)
		{
			BRAIN::TASK_PLAY_ANIM(0, sLocal_272, "fidget_rub_hands", 1.5f, -1f, 4294967295, 8320, 0, 0, 0, 0);
		}
		else if (iVar0 >= 15000 && iVar0 < 35000)
		{
			BRAIN::TASK_PLAY_ANIM(0, sLocal_272, "fidget_rub_chin", 1.5f, -1f, 4294967295, 8320, 0, 0, 0, 0);
		}
		else
		{
			BRAIN::TASK_PLAY_ANIM(0, sLocal_272, "fidget_arm_swing", 1.5f, -1f, 4294967295, 8320, 0, 0, 0, 0);
		}
		CUTSCENE::_0x8D9DF6ECA8768583(iVar1);
		BRAIN::TASK_PERFORM_SEQUENCE(AUDIO::_0x0626A247D2405330(), iVar1);
		BRAIN::CLEAR_SEQUENCE_TASK(&iVar1);
		func_27(&uLocal_300, 262144);
	}
}

void func_136(var uParam0)//Position - 0x46C8
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_137(iVar0))
		{
			ENTITY::SET_ENTITY_COLLISION(iVar0, true, 0);
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, 0);
			unk_0x346478B12F69D4E3(iVar0, false);
		}
	}
}

int func_137(int iParam0)//Position - 0x46FF
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_138(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6)//Position - 0x4742
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_162();
			iVar4 = func_162();
			func_161(&iVar4, iParam0);
			func_160(&iVar4, iParam1);
			func_159(&iVar4, 0);
			if (func_157(*uParam4, iVar4))
			{
				func_152(&iVar4, 0, 0, 0, 1, 0, 0);
			}
			func_149(*uParam4, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam4->f_B = ((iVar0 + iVar1 * 60) + (iVar2 + iParam6) * 3600);
			func_132((SYSTEM::TO_FLOAT(uParam4->f_B) / 3600f));
			GRAPHICS::_0x5F0F3F56635809EF(0.6f);
			unk_0x66F05C65F48B55AF(0);
			GRAPHICS::_0x0AE73D8DF3A762B2(false);
			func_148();
			uParam4->f_A = AUDIO::GET_SOUND_ID();
			unk_0x1190AB7024CBD8CB(uParam4->f_A, "TIME_LAPSE_MASTER", 0, true);
			AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
			func_147();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if (fParam5 >= 0.5f)
			{
				if (uParam4->f_3 == 1)
				{
					if (MISC::GET_HASH_KEY(sParam2) != 0)
					{
						MISC::_SET_WEATHER_TYPE_OVER_TIME(sParam2, 1f);
					}
					if (MISC::GET_HASH_KEY(sParam3) != 0)
					{
						unk_0x5D4CFAB81AB232CA();
						MISC::_SET_CLOUD_HAT_TRANSITION(sParam3, 0);
					}
					uParam4->f_3 = 2;
				}
			}
			if (fParam5 >= 0.99f || fParam5 == -1f)
			{
				iVar4 = *uParam4;
				func_152(&iVar4, uParam4->f_B, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(func_146(iVar4), func_145(iVar4), func_144(iVar4));
				AUDIO::STOP_SOUND(uParam4->f_A);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				return 1;
			}
			fVar10 = fParam5;
			fVar8 = 0.1f;
			fVar9 = 0.9f;
			fVar11 = func_143(((fVar10 - fVar8) / (fVar9 - fVar8)), 0f, 1f);
			iVar3 = SYSTEM::ROUND((IntToFloat(uParam4->f_B) * fVar11));
			iVar4 = *uParam4;
			func_152(&iVar4, iVar3, 0, 0, 0, 0, 0);
			CLOCK::SET_CLOCK_TIME(func_146(iVar4), func_145(iVar4), func_144(iVar4));
			if (func_142(iVar4) != CLOCK::GET_CLOCK_DAY_OF_MONTH())
			{
				CLOCK::SET_CLOCK_DATE(func_142(iVar4), func_141(iVar4), func_139(iVar4));
			}
			func_243();
			GRAPHICS::_0xE3E2C1B4C59DBC77(6);
			break;
	}
	return 0;
}

int func_139(int iParam0)//Position - 0x4940
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_140(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 31), 4294967295, 1)) + 2011;
}

int func_140(bool bParam0, int iParam1, int iParam2)//Position - 0x4965
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_141(int iParam0)//Position - 0x497C
{
	return iParam0 & 15;
}

int func_142(int iParam0)//Position - 0x4989
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

float func_143(float fParam0, float fParam1, float fParam2)//Position - 0x499B
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_144(int iParam0)//Position - 0x49C2
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_145(int iParam0)//Position - 0x49D5
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_146(int iParam0)//Position - 0x49E8
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

void func_147()//Position - 0x49FB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		HUD::_REMOVE_NOTIFICATION(Global_19E56.f_3721[iVar0 /*104*/].f_10);
		iVar0++;
	}
}

int func_148()//Position - 0x4A27
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		return 0;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0;
	}
	AUDIO::SET_VEH_RADIO_STATION(iVar0, "OFF");
	return 1;
}

void func_149(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x4A75
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_157(iParam0, iParam1))
	{
		iVar0 = func_141(iParam1);
		iVar1 = func_139(iParam0);
		iVar2 = (func_139(iParam0) - func_139(iParam1));
		iVar3 = (func_141(iParam0) - func_141(iParam1));
		iVar4 = (func_142(iParam0) - func_142(iParam1));
		iVar5 = (func_146(iParam0) - func_146(iParam1));
		iVar6 = (func_145(iParam0) - func_145(iParam1));
		iVar7 = (func_144(iParam0) - func_144(iParam1));
	}
	else
	{
		iVar0 = func_141(iParam0);
		iVar1 = func_139(iParam1);
		iVar2 = (func_139(iParam1) - func_139(iParam0));
		iVar3 = (func_141(iParam1) - func_141(iParam0));
		iVar4 = (func_142(iParam1) - func_142(iParam0));
		iVar5 = (func_146(iParam1) - func_146(iParam0));
		iVar6 = (func_145(iParam1) - func_145(iParam0));
		iVar7 = (func_144(iParam1) - func_144(iParam0));
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
		iVar4 = (iVar4 + func_151(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_150(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_150(float fParam0, float fParam1, float fParam2)//Position - 0x4C76
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

int func_151(int iParam0, int iParam1)//Position - 0x4CB8
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

void func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4D5A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_139(*iParam0);
	iVar1 = func_141(*iParam0);
	iVar2 = func_142(*iParam0);
	iVar3 = func_146(*iParam0);
	iVar4 = func_145(*iParam0);
	iVar5 = func_144(*iParam0);
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
	iVar6 = func_151(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_151(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_153(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_153(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4EDC
{
	func_159(uParam0, iParam1);
	func_160(uParam0, iParam2);
	func_161(uParam0, iParam3);
	func_156(uParam0, iParam5);
	func_155(uParam0, iParam4);
	func_154(uParam0, iParam6);
}

void func_154(var uParam0, int iParam1)//Position - 0x4F14
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

void func_155(var uParam0, int iParam1)//Position - 0x4F9A
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_141(*uParam0);
	iVar1 = func_139(*uParam0);
	if (iParam1 < 1 || iParam1 > func_151(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_156(var uParam0, int iParam1)//Position - 0x4FEB
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

int func_157(int iParam0, int iParam1)//Position - 0x501E
{
	int iVar0;
	int iVar1;
	
	if (!func_158(iParam1) || !func_158(iParam0))
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
	iVar0 = func_142(iParam0);
	iVar1 = func_142(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_145(iParam0);
	iVar1 = func_145(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	iVar1 = func_144(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_158(int iParam0)//Position - 0x512A
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
	iVar0 = func_144(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_145(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_146(iParam0);
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
	iVar5 = func_142(iParam0);
	if (iVar5 < 1 || iVar5 > func_151(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_159(int iParam0, int iParam1)//Position - 0x5206
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 66060288);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_160(int iParam0, int iParam1)//Position - 0x5242
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_161(int iParam0, int iParam1)//Position - 0x527D
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

int func_162()//Position - 0x52B7
{
	var uVar0;
	
	func_159(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_160(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_161(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_155(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_156(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_154(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

char* func_163()//Position - 0x52FD
{
	char* sVar0;
	
	switch (uLocal_74[0])
	{
		case 0:
			sVar0 = "CLEARING";
			break;
		
		case 1:
			sVar0 = "OVERCAST";
			break;
		
		case 4:
			sVar0 = "CLOUDS";
			break;
		
		case 5:
			sVar0 = "CLEAR";
			break;
		
		case 8:
			sVar0 = "EXTRASUNNY";
			break;
		
		case 9:
			sVar0 = "RAIN";
			break;
		
		default:
			sVar0 = "EXTRASUNNY";
			break;
	}
	return sVar0;
}

int func_164()//Position - 0x5374
{
	if (Global_3DCE != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_165()//Position - 0x5396
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_271[0], 0))
	{
		if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
		{
			func_181(&uLocal_78, 1, 0, func_182(uLocal_74[0]), 0, 1);
			func_168("SC_SEX", 0, 0, 0);
		}
		else
		{
			func_166(iLocal_271[0], "SEX_ORAL", 10);
		}
	}
}

void func_166(int iParam0, char* sParam1, int iParam2)//Position - 0x53F8
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_167(iParam2), 1);
}

int func_167(int iParam0)//Position - 0x540F
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

int func_168(char* sParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x5604
{
	struct<6> Var0;
	char[] cVar1[8];
	
	if (func_180())
	{
		StringCopy(&Var0, sParam0, 24);
		if (bParam1)
		{
			func_179(&Var0, bParam2);
		}
		else
		{
			Var0 = { func_178(Var0) };
		}
		if (bParam3)
		{
			cVar1 = "SCAUD";
		}
		else
		{
			cVar1 = "SHAUD";
		}
		if (func_169(&uLocal_78, cVar1, &Var0, 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_169(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x565F
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

int func_170(char* sParam0, int iParam1, bool bParam2)//Position - 0x56AD
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
					func_176();
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
		if (func_175(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_174();
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
				func_127();
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
				if (func_173())
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
			if (func_23())
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
		func_176();
	}
	return 0;
}

void func_171()//Position - 0x5979
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

void func_172()//Position - 0x59AB
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

int func_173()//Position - 0x5A40
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

void func_174()//Position - 0x5AD9
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

bool func_175(int iParam0, int iParam1)//Position - 0x5B31
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

void func_176()//Position - 0x5B6C
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

void func_177(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5BC3
{
	Global_3BAC = { *uParam0 };
	Global_6A3 = iParam1;
	StringCopy(&Global_3E14, sParam2, 24);
	Global_41AB = iParam5;
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

struct<6> func_178(char[24] cParam0)//Position - 0x5C19
{
	int iVar0;
	
	StringConCat(&cParam0, "_", 24);
	iVar0 = uLocal_74[0];
	StringIntConCat(&cParam0, iVar0, 24);
	return cParam0;
}

void func_179(char* sParam0, bool bParam1)//Position - 0x5C3A
{
	StringConCat(sParam0, "_", 24);
	if (func_76() == 2)
	{
		StringConCat(sParam0, "T", 24);
	}
	else if (func_76() == 0)
	{
		StringConCat(sParam0, "M", 24);
	}
	else if (func_76() == 1)
	{
		StringConCat(sParam0, "F", 24);
	}
	if (bParam1)
	{
		*sParam0 = { func_178(*sParam0) };
	}
}

int func_180()//Position - 0x5C91
{
	if ((HUD::IS_MESSAGE_BEING_DISPLAYED() || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) || Global_3DCE != 0)
	{
		return 0;
	}
	return 1;
}

void func_181(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x5CBA
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

char* func_182(int iParam0)//Position - 0x5D55
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
			break;
		
		case 1:
			return "Nikki";
			break;
		
		case 2:
			return "Chastity";
			break;
		
		case 3:
			return "Cheetah";
			break;
		
		case 4:
			return "Sapphire";
			break;
		
		case 5:
			return "Infernus";
			break;
		
		case 6:
			return "Fufu";
			break;
		
		case 7:
			return "Peach";
			break;
		
		case 8:
			return "TaxiLiz";
			break;
		
		case 9:
			return "REHH2Hiker";
			break;
	}
	return "Invalid name";
}

float func_183()//Position - 0x5E08
{
	switch (uLocal_74[0])
	{
		case 1:
			return 325.6f;
			break;
		
		case 0:
			return 52.89f;
			break;
		
		case 4:
			return 14.5f;
			break;
		
		case 5:
			return 43.85f;
			break;
		
		case 8:
			return 193.5f;
			break;
		
		case 9:
			return 233.2f;
			break;
	}
	return 0f;
}

Vector3 func_184(int iParam0, vector3 vParam1)//Position - 0x5E81
{
	var uVar0;
	
	vParam1.z = (vParam1.z + 0.15f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vParam1, &uVar0, 0, 0))
	{
		vParam1.z = uVar0;
	}
	if (func_185(iParam0))
	{
		ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, 1, false, 0, 1);
	}
	return vParam1;
}

bool func_185(int iParam0)//Position - 0x5EC7
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, 0);
}

Vector3 func_186()//Position - 0x5EE5
{
	switch (uLocal_74[0])
	{
		case 1:
			return 130.7462f, -1896.513f, 22.3246f;
			break;
		
		case 0:
			return -162.4315f, -1635.107f, 32.6529f;
			break;
		
		case 4:
			return -197.6542f, 92.3329f, 68.5846f;
			break;
		
		case 5:
			return -848.9675f, 510.048f, 89.8218f;
			break;
		
		case 8:
			return -28.5266f, -1565.793f, 28.918f;
			break;
		
		case 9:
			return 3315.045f, 5174.08f, 17.6765f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_187(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x5F9C
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()), 64);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			PED::REMOVE_PED_HELMET(AUDIO::_0x0626A247D2405330(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(bParam1, bParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_4))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_4, false);
			}
			CAM::DESTROY_CAM(uParam0->f_4, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			ENTITY::SET_ENTITY_VISIBLE(AUDIO::_0x0626A247D2405330(), true, 0);
		}
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, 0);
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_A);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
	}
	func_15(bParam1, 1, 0, 0, 0);
	func_147();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	if (!bParam1)
	{
		if (Global_19E56.f_7F5D.f_12C1 != 4294967281)
		{
			Global_19E56.f_7F5D.f_12C1 = func_162();
		}
	}
}

float func_188(int iParam0)//Position - 0x610E
{
	if (func_10(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_189()//Position - 0x614A
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2[4];
	var uVar3[4];
	
	func_190(&vVar1, &vVar2, &uVar3);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!CAM::DOES_CAM_EXIST(iLocal_279[iVar0]))
		{
			iLocal_279[iVar0] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar1[iVar0 /*3*/], vVar2[iVar0 /*3*/], uVar3[iVar0], 0, 2);
			CAM::SHAKE_CAM(iLocal_279[iVar0], "HAND_SHAKE", 0.3f);
		}
		iVar0++;
	}
	Local_280.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
	CAM::ADD_CAM_SPLINE_NODE(Local_280.f_4, vVar1[0 /*3*/], vVar2[0 /*3*/], 6000, 3, 2);
	CAM::ADD_CAM_SPLINE_NODE(Local_280.f_4, vVar1[1 /*3*/], vVar2[1 /*3*/], 6000, 3, 2);
	CAM::SET_CAM_FOV(Local_280.f_4, uVar3[0]);
}

void func_190(var uParam0, var uParam1, var uParam2)//Position - 0x621C
{
	switch (uLocal_74[0])
	{
		case 1:
			*(uParam0[0 /*3*/]) = { 140.9085f, -1885.527f, 25.6959f };
			*(uParam1[0 /*3*/]) = { -9.0308f, 0f, 126.3829f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 141.712f, -1884.935f, 30.7241f };
			*(uParam1[1 /*3*/]) = { 4.7025f, 0f, 129.5531f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 139.1899f, -1885.865f, 24.96737f };
			*(uParam1[2 /*3*/]) = { -3.535496f, 0.081819f, 135.1308f };
			(*uParam2)[2] = 50f;
			*(uParam0[3 /*3*/]) = { 133.9669f, -1893.292f, 23.9573f };
			*(uParam1[3 /*3*/]) = { -1.8669f, -0.0329f, -5.5828f };
			(*uParam2)[3] = 50f;
			break;
		
		case 0:
			*(uParam0[0 /*3*/]) = { -186.5408f, -1629.328f, 35.8275f };
			*(uParam1[0 /*3*/]) = { -1.5588f, 0f, -118.8025f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -186.1923f, -1629.505f, 48.7132f };
			*(uParam1[1 /*3*/]) = { -1.2745f, 0f, -116.9616f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -184.9595f, -1632.193f, 36.32303f };
			*(uParam1[2 /*3*/]) = { -3.262451f, 0.073971f, -100.6756f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -164.7078f, -1632.25f, 34.0944f };
			*(uParam1[3 /*3*/]) = { -3.7303f, 0.0222f, 108.1824f };
			(*uParam2)[3] = 40f;
			break;
		
		case 4:
			*(uParam0[0 /*3*/]) = { -208.6886f, 112.8581f, 73.0855f };
			*(uParam1[0 /*3*/]) = { -0.1055f, 0f, -156.0082f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -208.9068f, 113.3747f, 85.2889f };
			*(uParam1[1 /*3*/]) = { 3.8438f, 0f, -157.0767f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -206.2357f, 106.941f, 72.07555f };
			*(uParam1[2 /*3*/]) = { -11.58381f, 0.084975f, -158.9702f };
			(*uParam2)[2] = 45f;
			*(uParam0[3 /*3*/]) = { -197.6886f, 94.7063f, 69.814f };
			*(uParam1[3 /*3*/]) = { 0.5155f, -0.0266f, 48.8652f };
			(*uParam2)[3] = 45f;
			break;
		
		case 5:
			*(uParam0[0 /*3*/]) = { -871.6285f, 520.8466f, 93.1945f };
			*(uParam1[0 /*3*/]) = { -0.1377f, -1.3933f, -105.9309f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -871.5255f, 521.1066f, 104.6356f };
			*(uParam1[1 /*3*/]) = { 3.1118f, -1.3933f, -105.9309f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -866.6436f, 514.6121f, 92.90275f };
			*(uParam1[2 /*3*/]) = { -5.957637f, -1.324997f, -101.9062f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -849.5522f, 514.2322f, 91.0095f };
			*(uParam1[3 /*3*/]) = { -1.626f, -1.3198f, 92.3739f };
			(*uParam2)[3] = 40f;
			break;
		
		case 8:
			*(uParam0[0 /*3*/]) = { -27.698f, -1584.646f, 31.1034f };
			*(uParam1[0 /*3*/]) = { 0.0044f, 0f, -1.9117f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -27.698f, -1584.646f, 40.4849f };
			*(uParam1[1 /*3*/]) = { 7.981f, 0f, -1.9117f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -28.63904f, -1579.74f, 30.82423f };
			*(uParam1[2 /*3*/]) = { -7.527712f, 0.030218f, -14.33051f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -28.6719f, -1568.09f, 29.7492f };
			*(uParam1[3 /*3*/]) = { -1.5414f, 0f, -168.6005f };
			(*uParam2)[3] = 40f;
			break;
		
		case 9:
			*(uParam0[0 /*3*/]) = { 3323.631f, 5148.861f, 20.9592f };
			*(uParam1[0 /*3*/]) = { 1.1547f, 1.0064f, 21.8733f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 3323.844f, 5148.672f, 28.2303f };
			*(uParam1[1 /*3*/]) = { 11.4168f, 1.0064f, 22.8025f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 3328.904f, 5157.818f, 20.5799f };
			*(uParam1[2 /*3*/]) = { -3.634001f, 1.039937f, 30.44809f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { 3315.368f, 5171.771f, 18.9066f };
			*(uParam1[3 /*3*/]) = { -2.8773f, 1.0064f, -103.0585f };
			(*uParam2)[3] = 40f;
			break;
	}
}

void func_191(int iParam0, vector3 vParam1)//Position - 0x6750
{
	float fVar0;
	float fVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		BRAIN::SET_PED_PATH_AVOID_FIRE(iParam0, 1);
		if (BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
		{
			BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_306);
			BRAIN::OPEN_SEQUENCE_TASK(&iLocal_306);
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
			{
				BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 16777216);
			}
			if (iParam0 == AUDIO::_0x0626A247D2405330())
			{
				fVar0 = SYSTEM::VDIST(unk_0x8000C77B5F336760(iParam0, true), vLocal_285);
				fVar1 = SYSTEM::VDIST(unk_0x8000C77B5F336760(iParam0, true), vLocal_286);
				if (fVar1 < fVar0)
				{
					BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_271[0], 0);
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(func_192()))
				{
					BRAIN::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_192(), 0, 552, 4294967295);
				}
				else
				{
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_285, 1f, 4294967295, 0.25f, 64, 1193033728);
				}
			}
			if (iParam0 != AUDIO::_0x0626A247D2405330())
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_192()))
				{
					BRAIN::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_192(), 0, 546, 4294967295);
				}
				else
				{
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam1, 1f, 4294967295, 0.25f, 1, 1193033728);
				}
				if (func_25(iParam0, vParam1, 1) > 5f)
				{
					BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, AUDIO::_0x0626A247D2405330(), 0);
					BRAIN::TASK_PLAY_ANIM(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
					BRAIN::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
					BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, AUDIO::_0x0626A247D2405330(), 0);
					BRAIN::TASK_PLAY_ANIM(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
					BRAIN::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
					BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, AUDIO::_0x0626A247D2405330(), 0);
					BRAIN::TASK_PLAY_ANIM(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
					BRAIN::TASK_PLAY_ANIM(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 4294967295, 0, 0, 0, 0, 0);
				}
			}
			CUTSCENE::_0x8D9DF6ECA8768583(iLocal_306);
			BRAIN::TASK_PERFORM_SEQUENCE(iParam0, iLocal_306);
		}
	}
}

char* func_192()//Position - 0x691E
{
	char* sVar0;
	
	if (uLocal_74[0] == 1)
	{
		sVar0 = "BC_NIKKI_H_F";
	}
	return sVar0;
}

void func_193(int iParam0, int iParam1)//Position - 0x6937
{
	if (!PED::IS_PED_INJURED(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		BRAIN::TASK_VEHICLE_PARK(iParam0, iParam1, vLocal_287, fLocal_294, 3, 10f, 0);
	}
}

char* func_194()//Position - 0x696D
{
	return "mini@strip_club@idles@bouncer@base";
}

char* func_195()//Position - 0x6979
{
	if (func_76() == 0)
	{
		return "facials@p_m_zero@variations@happy";
	}
	else if (func_76() == 1)
	{
		return "facials@p_m_one@variations@happy";
	}
	else if (func_76() == 2)
	{
		return "facials@p_m_two@variations@happy";
	}
	return "facials@p_m_zero@variations@happy";
}

void func_196()//Position - 0x69B8
{
	sLocal_272 = "move_p_m_one_idles@generic";
	STREAMING::REQUEST_ANIM_DICT(sLocal_272);
}

int func_197(int iParam0)//Position - 0x69CE
{
	if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("BLIMP")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("CARGOBOB")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("CARGOBOB2")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("CARGOBOB3")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("BUZZARD")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("BUZZARD2")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("MAVERICK")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("POLMAV")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("ANNIHILATOR")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("FROGGER")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("FROGGER2")))
	{
		return 1;
	}
	return 0;
}

int func_198(var uParam0, vector3 vParam1, bool bParam2, float fParam3)//Position - 0x6ABB
{
	if (func_200(uParam0))
	{
		VEHICLE::SET_LAST_DRIVEN_VEHICLE(*uParam0);
		if (!func_199(vParam1))
		{
			ENTITY::SET_ENTITY_COORDS(*uParam0, vParam1, 1, false, 0, 1);
			if (bParam2)
			{
				ENTITY::SET_ENTITY_HEADING(*uParam0, fParam3);
			}
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 1084227584);
		}
		return 1;
	}
	return 0;
}

int func_199(vector3 vParam0)//Position - 0x6B0E
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_200(var uParam0)//Position - 0x6B38
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_137(iVar0))
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && ENTITY::IS_ENTITY_AT_ENTITY(iVar0, AUDIO::_0x0626A247D2405330(), vLocal_63, 0, 1, 0))
			{
				VEHICLE::SET_LAST_DRIVEN_VEHICLE(iVar0);
				ENTITY::SET_ENTITY_COLLISION(iVar0, false, 0);
				ENTITY::SET_ENTITY_VISIBLE(iVar0, false, 0);
				unk_0x346478B12F69D4E3(iVar0, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_201(int iParam0)//Position - 0x6BAA
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_1C) > iParam0)
		{
			Global_1B = MISC::GET_GAME_TIMER();
		}
		Global_1C = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_1B) > iParam0)
		{
			if (func_202())
			{
				Global_1B = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_202()//Position - 0x6BF4
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_203(bool bParam0)//Position - 0x6C26
{
	struct<4> Var0;
	float fVar1;
	
	func_64();
	if (ENTITY::IS_ENTITY_DEAD(iLocal_271[0], 0))
	{
		return;
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_287 + Vector(0f, 1f, 1f) * Vector(10f, 10f, 10f), vLocal_287 + Vector(0f, -1f, -1f) * Vector(10f, 10f, 10f), false, 1);
	fVar1 = SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), unk_0x8000C77B5F336760(iLocal_271[0], true));
	if (iLocal_75 != 9)
	{
		if (((fVar1 >= (200f / 2f) && func_180()) && !func_254(uLocal_300, 2)) || func_241(iLocal_271[0], 0))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_277))
			{
				HUD::REMOVE_BLIP(&iLocal_277);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_276))
			{
				HUD::REMOVE_BLIP(&iLocal_276);
			}
			func_238(0);
			func_82("SCLUB_HOME_R", uLocal_74[0]);
			iLocal_75 = 9;
		}
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if (iLocal_75 != 8)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_277))
			{
				HUD::REMOVE_BLIP(&iLocal_277);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_276))
			{
				HUD::REMOVE_BLIP(&iLocal_276);
			}
			iLocal_75 = 8;
		}
	}
	if (func_227(iLocal_271[0], &uLocal_264, &iLocal_261))
	{
		func_65(4);
	}
	if (iLocal_75 <= 1)
	{
		func_246(1);
	}
	switch (iLocal_75)
	{
		case 0:
			iLocal_76 = 0;
			if (func_180())
			{
				if (!func_254(uLocal_300, 1))
				{
					unk_0x346478B12F69D4E3(iLocal_271[0], true);
					func_82("SCLUB_HOME_MEET", uLocal_74[0]);
					func_238(0);
					func_27(&uLocal_300, 1);
				}
				iLocal_75 = 1;
			}
			break;
		
		case 1:
			iLocal_76 = 1;
			Var0 = { func_70(uLocal_74[0]) };
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				iLocal_307 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
				iLocal_301 = ENTITY::GET_ENTITY_HEALTH(iLocal_307);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), unk_0x8000C77B5F336760(iLocal_271[0], true), 3f, 3f, 3f, false, true, 0) || (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_307, 0) && func_226(iLocal_307, iLocal_271[0], 1) <= 10f))
			{
				unk_0x346478B12F69D4E3(iLocal_271[0], false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_307) && (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iLocal_307) < 1 || (!bParam0 && !VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_307)))))
				{
					if (!func_69("SCLUB_SMALL_CAR", &Var0))
					{
						func_66("SCLUB_SMALL_CAR", uLocal_74[0], 0);
						func_166(iLocal_271[0], "NEED_A_VEHICLE", 10);
					}
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
					NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_271[0]);
					func_224();
					if (!func_254(uLocal_300, 2))
					{
						func_27(&uLocal_300, 2);
					}
					func_223();
					func_84();
					func_216(39, 1);
					func_216(40, 1);
					func_216(41, 1);
					func_216(42, 1);
					func_216(43, 1);
					func_216(44, 1);
					iLocal_75 = 2;
				}
			}
			else if (func_69("SCLUB_SMALL_CAR", &Var0))
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			}
			break;
		
		case 2:
			iLocal_76 = 2;
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_271[0], 0))
				{
					iLocal_75 = 3;
				}
			}
			else
			{
				func_166(iLocal_271[0], "NEED_A_VEHICLE", 10);
				iLocal_75 = 3;
			}
			break;
		
		case 3:
			iLocal_76 = 3;
			func_213();
			if (!func_164())
			{
				if (func_180())
				{
					PATHFIND::SET_ROADS_IN_AREA(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), false, 1);
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), false, 1);
					MISC::CLEAR_AREA_OF_VEHICLES(vLocal_287, 10f, 0, 0, 0, 0, false, 0);
					MISC::CLEAR_AREA_OF_PEDS(vLocal_287, 10f, 0);
					iLocal_284 = PED::ADD_SCENARIO_BLOCKING_AREA(vLocal_287 - Vector(35f, 35f, 35f), vLocal_287 + Vector(35f, 35f, 35f), 0, 1, 1, 1);
					func_8(&iLocal_243);
					if (bParam0)
					{
						func_89(1);
						func_212();
					}
					else
					{
						iLocal_72 = 3;
					}
				}
			}
			break;
		
		case 4:
			iLocal_76 = 4;
			func_209(fVar1, vLocal_288);
			func_204();
			if ((func_4(&iLocal_255) > 45f || SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), vLocal_291) > (100f * 100f)) && func_25(AUDIO::_0x0626A247D2405330(), vLocal_288, 1) > 100f)
			{
				if (uLocal_74[0] == 8)
				{
					func_168("SC_WALK", 0, 0, 0);
				}
				else
				{
					func_166(iLocal_271[0], "GENERIC_FUCK_YOU", 10);
				}
				func_65(3);
			}
			else if (func_241(iLocal_271[0], 1))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_277))
				{
					HUD::REMOVE_BLIP(&iLocal_277);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_276))
				{
					HUD::REMOVE_BLIP(&iLocal_276);
				}
				func_238(0);
				func_82("SCLUB_HOME_R", uLocal_74[0]);
				iLocal_75 = 9;
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_287, 3f, 3f, 2f, true, true, 2) || ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_286, 5f, 5f, 2f, true, true, 1))
			{
				if (func_35(1, 0, 1))
				{
					iLocal_72 = 1;
				}
			}
			else if (!PED::IS_PED_ON_FOOT(AUDIO::_0x0626A247D2405330()))
			{
				func_212();
			}
			break;
		
		case 5:
			iLocal_76 = 5;
			func_209(fVar1, vLocal_287);
			func_204();
			func_224();
			if (ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_287, 1f, 1f, 2f, true, true, 2))
			{
				iLocal_75 = 6;
			}
			else
			{
				if (PED::IS_PED_ON_FOOT(AUDIO::_0x0626A247D2405330()))
				{
					func_212();
				}
				else
				{
					func_60(vLocal_287);
				}
				if (func_105("SCLUB_HOME_WALK"))
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				}
			}
			break;
		
		case 6:
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)))
				{
					if (func_58(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 3f, 2, 0.5f, 0, 1, 0))
					{
						func_57();
						func_191(iLocal_271[0], vLocal_286);
						if (uLocal_74[0] == 9 || uLocal_74[0] == 8)
						{
							func_168("SC_GO_DOOR", 0, 0, 0);
						}
						else
						{
							func_168("SC_FOLLOWD", 0, 0, 1);
						}
						iLocal_75 = 7;
					}
				}
			}
			else if (PED::IS_PED_ON_FOOT(AUDIO::_0x0626A247D2405330()))
			{
				BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_271[0]);
				func_212();
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			}
			break;
		
		case 7:
			iLocal_76 = 7;
			if ((!func_164() && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !func_254(uLocal_300, 2048))
			{
				Var0 = { func_70(uLocal_74[0]) };
				func_83("SCLUB_FOLLOW_H", &Var0, 7500, 1);
				func_84();
				func_238(0);
				func_27(&uLocal_300, 2048);
			}
			if ((ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_288, 5f, 5f, 2f, false, true, 1) || ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_286, 5f, 5f, 2f, false, true, 1)) && PED::IS_PED_ON_FOOT(AUDIO::_0x0626A247D2405330()))
			{
				if (func_35(1, 0, 1))
				{
					iLocal_72 = 1;
				}
			}
			break;
		
		case 8:
			if ((!func_254(uLocal_298, 4096) && !func_164()) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_271[0]))
			{
				if (iLocal_76 > 1 || SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), unk_0x8000C77B5F336760(iLocal_271[0], true)) < (3f * 3f))
				{
					func_166(iLocal_271[0], "GENERIC_FRIGHTENED_MED", 10);
					func_27(&uLocal_298, 4096);
				}
			}
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
			{
				iLocal_75 = iLocal_76;
			}
			break;
		
		case 9:
			if (fVar1 > 200f)
			{
				func_65(1);
			}
			else if (fVar1 <= (200f / 2f) && !func_241(iLocal_271[0], 1))
			{
				HUD::CLEAR_PRINTS();
				iLocal_75 = iLocal_76;
				if (PED::IS_PED_ON_FOOT(AUDIO::_0x0626A247D2405330()))
				{
					func_212();
				}
			}
			break;
	}
}

void func_204()//Position - 0x73B8
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!func_254(uLocal_300, 16))
	{
		if (func_205())
		{
			func_27(&uLocal_300, 16);
		}
		else
		{
			return;
		}
	}
	sVar0 = func_98(iLocal_271[0], 0, 0);
	if (!func_254(uLocal_300, 8))
	{
		if (!func_254(uLocal_300, 4))
		{
			if (!func_254(uLocal_298, 256))
			{
				if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
				{
					func_168("SC_BJ", 0, 0, 0);
				}
				func_27(&uLocal_298, 256);
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT(sVar0);
				func_27(&uLocal_300, 4);
			}
		}
		else if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			func_92(iLocal_271[0], 1, 1, 4294967295, 1);
			PED::SET_PED_KEEP_TASK(iLocal_271[0], true);
			func_7(&iLocal_252);
			func_27(&uLocal_300, 8);
		}
	}
	else if (func_254(uLocal_300, 4))
	{
		iVar1 = 0;
		bVar2 = ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_271[0], sVar0, func_93(4, 1, 1, func_96(iLocal_307)), 3);
		bVar3 = PED::IS_PED_SHOOTING(AUDIO::_0x0626A247D2405330());
		bVar4 = BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_271[0], 242628503) == 7;
		bVar5 = PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0);
		bVar6 = false;
		if (bVar5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 0))
			{
				bVar6 = (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)) && ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)) > 5f);
			}
		}
		if ((((!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) || func_4(&iLocal_252) > 35f) || SYSTEM::VDIST(vLocal_287, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true)) < 75f) || bVar3) || bVar6)
		{
			if (!bVar4 && !bVar2)
			{
				BRAIN::TASK_PLAY_ANIM(iLocal_271[0], sVar0, func_93(4, 1, 1, func_96(iLocal_307)), 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
			}
			if (bVar3)
			{
				iLocal_302 = 2000;
			}
			iVar1 = 1;
		}
		else if (bVar4)
		{
			iVar1 = 1;
		}
		if (bVar2)
		{
			func_243();
		}
		if ((iVar1 && bVar4) && !bVar2)
		{
			if (!bVar3 && bVar5)
			{
				if (bVar6)
				{
					unk_0x65E471E4A2D56226(AUDIO::_0x0626A247D2405330(), (ENTITY::GET_ENTITY_HEALTH(AUDIO::_0x0626A247D2405330()) - SYSTEM::CEIL((IntToFloat(PED::GET_PED_MAX_HEALTH(AUDIO::_0x0626A247D2405330())) * 0.1f))), 0);
					func_166(AUDIO::_0x0626A247D2405330(), "GENERIC_CURSE_HIGH", 10);
				}
				else
				{
					func_166(AUDIO::_0x0626A247D2405330(), "SEX_CLIMAX", 10);
				}
				func_27(&uLocal_298, 128);
			}
			STREAMING::REMOVE_ANIM_DICT(sVar0);
			func_72(&uLocal_300, 4);
		}
		if (!func_254(uLocal_298, 64))
		{
			if (func_4(&iLocal_252) > 10f)
			{
				func_166(AUDIO::_0x0626A247D2405330(), "SEX_GENERIC", 10);
				func_166(iLocal_271[0], "SEX_ORAL", 10);
				func_27(&uLocal_298, 64);
			}
		}
		unk_0x82BD2E9769751DCD();
		func_243();
	}
}

int func_205()//Position - 0x76A4
{
	vector3 vVar0;
	var uVar1;
	
	if (!func_180())
	{
		return 0;
	}
	func_63(&vVar0, &uVar1, 0);
	if (((SYSTEM::VDIST(vLocal_287, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true)) > (75f * 2f) && SYSTEM::VDIST(vVar0, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true)) > (75f / 2f)) && func_114(uLocal_74[0]) > 1) && func_206())
	{
		return 1;
	}
	return 0;
}

int func_206()//Position - 0x771A
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (func_208(iVar1, 0) && func_207(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_207(int iParam0)//Position - 0x776A
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != 4294967295)
					{
						StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
						iVar2 = MISC::GET_HASH_KEY(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case 2228715155:
			case 3512246797:
			case 542797648:
			case 68566729:
			case 2407223118:
			case 1486715695:
			case 2377295321:
			case 2889616976:
			case 4136977079:
			case 4014890549:
			case 1710903184:
			case 1663892749:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case 4266733384:
			case 3144903323:
			case 3831626299:
			case 3591317893:
			case 197952738:
			case 4086720684:
			case 2033852426:
			case 2474072471:
			case 1697345049:
			case 3659269889:
			case 2384225955:
			case 3136875355:
			case 2460745437:
			case 2841488156:
			case 2340342841:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case 3768242112:
			case 1610027666:
			case 3324935724:
			case 2071837743:
			case 1482989244:
			case 2130662788:
			case 2748835284:
			case 1410462333:
			case 1192783831:
			case 2990118722:
			case 3977022632:
			case 570040040:
			case 1212243433:
			case 4101944522:
			case 510359473:
			case 3306590002:
			case 954521785:
			case 584837381:
				return 1;
				break;
		}
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0) == 931866387 && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("SLAMVAN"))
		{
			return 1;
		}
	}
	return 0;
}

int func_208(int iParam0, bool bParam1)//Position - 0x799D
{
	if ((((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("POLICE") || iParam0 == joaat("POLICE2")) || iParam0 == joaat("POLICE3")) || iParam0 == joaat("POLICE4")) || iParam0 == joaat("FBI")) || iParam0 == joaat("FBI2")) || iParam0 == joaat("CADDY")) || iParam0 == joaat("CADDY2"))
		{
			return 0;
		}
	}
	if (((((((((((((iParam0 == joaat("ISSI2") || iParam0 == joaat("HOTKNIFE")) || iParam0 == joaat("JB700")) || iParam0 == joaat("JESTER")) || iParam0 == joaat("JESTER2")) || iParam0 == joaat("STROMBERG")) || iParam0 == joaat("BARRAGE")) || iParam0 == joaat("KAMACHO")) || iParam0 == joaat("GB200")) || iParam0 == joaat("FAGALOA")) || iParam0 == joaat("TEZERACT")) || iParam0 == joaat("SWINGER")) || iParam0 == 276065473) || iParam0 == joaat("IMPERATOR"))
	{
		return 0;
	}
	return 1;
}

void func_209(float fParam0, vector3 vParam1)//Position - 0x7B1F
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (!func_254(uLocal_298, 262144))
	{
		if (func_211(iLocal_271[0]))
		{
			if (uLocal_74[0] == 8)
			{
				func_168("SC_STEALC", 0, 0, 0);
			}
			else
			{
				func_166(iLocal_271[0], "GENERIC_SHOCKED_MED", 10);
			}
			func_8(&iLocal_246);
			func_27(&uLocal_298, 262144);
		}
	}
	else if (func_4(&iLocal_246) > 10f)
	{
		func_72(&uLocal_298, 262144);
		func_8(&iLocal_246);
	}
	if ((fParam0 > 5f || !func_180()) || func_254(uLocal_300, 4))
	{
		return;
	}
	if (!func_254(uLocal_298, 1) && !func_254(uLocal_298, 128))
	{
		if (SYSTEM::VDIST(vParam1, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true)) < 75f)
		{
			if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
			{
				if (func_168("SC_NEAR", 0, 0, 0))
				{
					func_27(&uLocal_298, 1);
				}
			}
			else
			{
				func_27(&uLocal_298, 1);
			}
			MISC::CLEAR_AREA_OF_VEHICLES(vLocal_287, 5f, 0, 0, 0, 0, false, 0);
		}
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
	{
		if (!func_254(uLocal_298, 16))
		{
			func_166(iLocal_271[0], "NEED_A_VEHICLE", 10);
			func_27(&uLocal_298, 16);
			func_8(&iLocal_243);
		}
		if (!func_254(uLocal_298, 4))
		{
			func_72(&uLocal_298, 4);
		}
		if (!func_254(uLocal_298, 8))
		{
			func_72(&uLocal_298, 8);
		}
	}
	else
	{
		fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
		fVar2 = VEHICLE::_GET_VEHICLE_MAX_SPEED(iVar0);
		if (fVar1 < (fVar2 * 0.9f) || fVar1 > (fVar2 * 0.1f))
		{
			func_8(&iLocal_249);
		}
		if (!func_254(uLocal_298, 4))
		{
			if (func_4(&iLocal_243) > 15f && func_4(&iLocal_249) > 5f)
			{
				func_166(iLocal_271[0], "DRIVEN_FAST", 10);
				func_27(&uLocal_298, 4);
				func_8(&iLocal_243);
			}
		}
		else if (func_4(&iLocal_243) < 5f)
		{
			func_72(&uLocal_298, 4);
			func_8(&iLocal_243);
		}
		if (!func_254(uLocal_298, 8))
		{
			if (func_4(&iLocal_243) > 15f && func_4(&iLocal_249) > 5f)
			{
				func_166(iLocal_271[0], "DRIVEN_SLOW", 10);
				func_27(&uLocal_298, 4);
				func_8(&iLocal_243);
			}
		}
		else if (func_4(&iLocal_243) < 5f)
		{
			func_72(&uLocal_298, 8);
			func_8(&iLocal_243);
		}
		if (!func_254(uLocal_298, 131072))
		{
			if (func_210(iLocal_271[0], &iLocal_301))
			{
				if (func_4(&iLocal_246) > 5f)
				{
					func_166(iLocal_271[0], "CRASH_GENERIC_DRIVEN", 10);
					func_27(&uLocal_298, 131072);
					func_8(&iLocal_243);
				}
			}
		}
		else if (func_4(&iLocal_246) > 5f)
		{
			func_72(&uLocal_298, 131072);
			func_8(&iLocal_246);
		}
		if (!func_254(uLocal_298, 65536))
		{
			if (func_4(&iLocal_243) > 30f || (func_4(&iLocal_243) > 10f && !func_254(uLocal_298, 32)))
			{
				func_166(iLocal_271[0], "BOOTY_FLIRT", 10);
				func_27(&uLocal_298, 32);
				func_27(&uLocal_298, 524288);
				func_8(&iLocal_243);
			}
			else if (func_254(uLocal_298, 524288))
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_271[0]) && func_4(&iLocal_243) > 4f)
				{
					func_166(AUDIO::_0x0626A247D2405330(), "BOOTY_FLIRT_RESP", 10);
					func_72(&uLocal_298, 524288);
				}
			}
		}
	}
}

int func_210(int iParam0, int iParam1)//Position - 0x7ED4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iVar0))
		{
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iVar0))
			{
				iVar1 = ENTITY::GET_ENTITY_HEALTH(iVar0);
				iVar2 = (*iParam1 - iVar1);
				*iParam1 = iVar1;
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar0);
				if (iVar2 > 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_211(int iParam0)//Position - 0x7F2C
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(108, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), 10f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, AUDIO::_0x0626A247D2405330()))
		{
			return 1;
		}
	}
	return 0;
}

void func_212()//Position - 0x7F6A
{
	func_85();
	func_8(&iLocal_243);
	if (PED::IS_PED_ON_FOOT(AUDIO::_0x0626A247D2405330()))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_276))
		{
			HUD::REMOVE_BLIP(&iLocal_276);
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_277))
		{
			iLocal_277 = func_61(vLocal_288, 0);
		}
		func_8(&iLocal_255);
		vLocal_291 = { unk_0x8000C77B5F336760(iLocal_271[0], true) };
		iLocal_75 = 4;
	}
	else
	{
		func_8(&iLocal_246);
		func_60(vLocal_287);
		iLocal_75 = 5;
	}
}

void func_213()//Position - 0x7FDF
{
	if (!func_254(uLocal_298, 1024))
	{
		if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0) && PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (func_214(uLocal_74[0]))
			{
				if (!func_164())
				{
					func_166(iLocal_271[0], "NICE_CAR", 10);
					func_27(&uLocal_298, 1024);
				}
			}
		}
	}
}

int func_214(int iParam0)//Position - 0x803E
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (func_215(iParam0, iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_215(int iParam0, int iParam1)//Position - 0x8073
{
	switch (iParam1)
	{
		case joaat("MANANA"):
		case joaat("TORNADO"):
		case joaat("TORNADO3"):
		case joaat("TORNADO4"):
		case joaat("ZTYPE"):
		case joaat("REGINA"):
			if (iParam0 == 0)
			{
				return 1;
			}
			break;
		
		case joaat("BLISTA"):
		case joaat("SURGE"):
		case joaat("DILETTANTE"):
		case joaat("PENUMBRA"):
		case joaat("ASTEROPE"):
			if (iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("DOMINATOR"):
		case joaat("GAUNTLET"):
		case joaat("PHOENIX"):
		case joaat("SABREGT"):
		case joaat("BULLET"):
		case joaat("BANSHEE"):
		case joaat("PEYOTE"):
		case joaat("BUFFALO"):
		case joaat("BUFFALO2"):
			if (iParam0 == 2)
			{
				return 1;
			}
			break;
		
		case joaat("CHEETAH"):
		case joaat("COGCABRIO"):
		case joaat("JB700"):
		case joaat("STINGERGT"):
		case joaat("MONROE"):
		case joaat("COMET2"):
		case joaat("ORACLE"):
		case joaat("ORACLE2"):
		case joaat("INTRUDER"):
		case joaat("JACKAL"):
		case joaat("EXEMPLAR"):
		case joaat("FELON"):
		case joaat("SUPERD"):
		case joaat("INFERNUS"):
		case joaat("ENTITYXF"):
		case joaat("ADDER"):
		case joaat("VACCA"):
			if (iParam0 == 3 || iParam0 == 5)
			{
				return 1;
			}
			break;
		
		case joaat("BALLER"):
		case joaat("BISON"):
		case joaat("DUBSTA"):
		case joaat("GRANGER"):
		case joaat("PATRIOT"):
		case joaat("BALLER2"):
		case joaat("BJXL"):
		case joaat("CAVALCADE"):
		case joaat("CAVALCADE2"):
		case joaat("GRESLEY"):
		case joaat("LANDSTALKER"):
		case joaat("MESA"):
		case joaat("RANCHERXL"):
		case joaat("SANDKING"):
		case joaat("REBEL"):
		case joaat("STRETCH"):
		case joaat("ROMERO"):
		case joaat("COACH"):
		case joaat("BUS"):
			if (iParam0 == 4 || iParam0 == 7)
			{
				return 1;
			}
			break;
		
		case joaat("SURANO"):
		case joaat("RAPIDGT2"):
		case joaat("NINEF2"):
		case joaat("ZION2"):
		case joaat("TORNADO2"):
		case joaat("SENTINEL2"):
		case joaat("ISSI2"):
		case joaat("FELON2"):
			if (iParam0 == 6 || iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("VADER"):
		case joaat("AKUMA"):
		case joaat("BAGGER"):
		case joaat("BATI"):
		case joaat("BATI2"):
		case joaat("DOUBLE"):
		case joaat("HEXER"):
		case joaat("NEMESIS"):
		case joaat("RUFFIAN"):
			if (iParam0 == 8)
			{
				return 1;
			}
			break;
		
		case joaat("FBI"):
		case joaat("TAXI"):
		case joaat("PRANGER"):
		case joaat("AMBULANCE"):
		case joaat("POLICE3"):
			if (iParam0 == 9)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_216(int iParam0, bool bParam1)//Position - 0x82E2
{
	if (bParam1)
	{
		if (!func_222(iParam0, 2, 1))
		{
			func_221(iParam0, 2, 1);
		}
	}
	else if (func_222(iParam0, 2, 1))
	{
		func_217(iParam0, 2, 1);
	}
}

void func_217(int iParam0, int iParam1, bool bParam2)//Position - 0x8319
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
		if (func_53() == 0)
		{
			iVar0 = func_219(func_220(iParam0), 4294967295, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, iParam1);
			func_218(func_220(iParam0), iVar0, 4294967295, 1, 0);
		}
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_29C[iParam0]), iParam1);
	}
}

void func_218(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x838B
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_75(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_219(int iParam0, int iParam1, int iParam2)//Position - 0x83BB
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_75(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_220(int iParam0)//Position - 0x83ED
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

void func_221(int iParam0, int iParam1, bool bParam2)//Position - 0x86F0
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
		if (func_53() == 0)
		{
			iVar0 = func_219(func_220(iParam0), 4294967295, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_218(func_220(iParam0), iVar0, 4294967295, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_19E56.f_29C[iParam0]), iParam1);
	}
}

int func_222(int iParam0, int iParam1, bool bParam2)//Position - 0x8762
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
		if (func_53() == 0)
		{
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(func_219(func_220(iParam0), 4294967295, 0), iParam1);
		}
	}
	else
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_29C[iParam0], iParam1);
	}
	return 0;
}

void func_223()//Position - 0x87CC
{
	if (uLocal_74[0] == 8)
	{
		func_168("SC_GREET", 0, 0, 0);
	}
	else
	{
		func_166(iLocal_271[0], "GENERIC_HI_FLIRTY", 10);
	}
}

void func_224()//Position - 0x87FD
{
	if (!PED::IS_PED_IN_GROUP(iLocal_271[0]) && SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), unk_0x8000C77B5F336760(iLocal_271[0], true)) < 10f)
	{
		PED::SET_PED_AS_GROUP_MEMBER(iLocal_271[0], func_225());
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_271[0], 0);
	}
}

int func_225()//Position - 0x884F
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

float func_226(int iParam0, int iParam1, bool bParam2)//Position - 0x885F
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

int func_227(int iParam0, var uParam1, int iParam2)//Position - 0x88BD
{
	var uVar0;
	int iVar1;
	
	if (!func_10(iParam2))
	{
		func_7(iParam2);
	}
	if (func_4(iParam2) > 3f)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		}
		if (func_230(iParam0, iVar1, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_228(&uVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
				{
					if (!unk_0x4EE7377FBE72B4BC(iLocal_70))
					{
						PED::ADD_RELATIONSHIP_GROUP("BootyCall", &iLocal_70);
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_70, 1862763509);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, iLocal_70);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_70);
					BRAIN::TASK_SMART_FLEE_PED(iParam0, AUDIO::_0x0626A247D2405330(), 500f, 4294967295, 0, 0);
				}
			}
			func_8(iParam2);
			return 1;
		}
	}
	return 0;
}

void func_228(var uParam0)//Position - 0x8977
{
	switch (*uParam0)
	{
		case 1:
		case 4:
		case 16:
			func_229(1);
			break;
		
		case 2:
			break;
	}
}

void func_229(bool bParam0)//Position - 0x89AA
{
	Global_19A68 = 0;
	Global_19A68.f_1 = 4294967295;
	Global_19A68.f_2 = 4294967295;
	if (bParam0)
	{
		func_120(4294967295);
	}
}

int func_230(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x89CF
{
	int iVar0;
	bool bVar1;
	
	iVar0 = AUDIO::_0x0626A247D2405330();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (!func_254(*uParam2, 1))
		{
			if (func_237(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_254(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_254(*uParam2, 4))
		{
			if (func_235(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_254(*uParam2, 8))
		{
			if (func_234(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_254(*uParam2, 128);
		if (bParam4)
		{
			if (func_231(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_254(*uParam2, 16))
		{
			if (func_231(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_231(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x8AF9
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_59)
		{
			iLocal_60 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_59 = true;
		}
		iLocal_61 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_62 = (iLocal_60 - iLocal_61);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_59)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, AUDIO::_0x0626A247D2405330(), 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, AUDIO::_0x0626A247D2405330(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == AUDIO::_0x0626A247D2405330())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(AUDIO::_0x0626A247D2405330()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(CAM::_0xDC9DA9E8789F5246()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(AUDIO::_0x0626A247D2405330()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (func_233(AUDIO::_0x0626A247D2405330(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_232(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(AUDIO::_0x0626A247D2405330(), PED::GET_VEHICLE_PED_IS_IN(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(AUDIO::_0x0626A247D2405330(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, AUDIO::_0x0626A247D2405330(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_232(int iParam0, bool bParam1)//Position - 0x8CC1
{
	return func_226(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

int func_233(int iParam0, int iParam1)//Position - 0x8CD9
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (SYSTEM::VDIST(unk_0x8000C77B5F336760(iParam0, true), unk_0x8000C77B5F336760(iParam1, true)) < 2.5f)
			{
				if (PED::IS_PED_FACING_PED(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_234(int iParam0, int iParam1, var uParam2)//Position - 0x8D2E
{
	if (WEAPON::IS_PED_ARMED(iParam0, 4))
	{
		if (PED::IS_PED_SHOOTING(iParam0) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, unk_0x8000C77B5F336760(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_235(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x8D7C
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam1, true) };
	}
	if (MISC::IS_BULLET_IN_AREA(vVar0, 4f, 1))
	{
		return 1;
	}
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (WEAPON::IS_PED_ARMED(iParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, unk_0x8000C77B5F336760(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_236(iVar1))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, unk_0x8000C77B5F336760(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (MISC::IS_PROJECTILE_IN_AREA((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_236(int iParam0)//Position - 0x8EF5
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 4294967295, 0) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_226(AUDIO::_0x0626A247D2405330(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(CAM::_0xDC9DA9E8789F5246(), &iVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 4294967295, 0)))
								{
									if ((PED::IS_PED_ON_FOOT(AUDIO::_0x0626A247D2405330()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) && PAD::IS_CONTROL_PRESSED(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_237(int iParam0, var uParam1)//Position - 0x8FC3
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (WEAPON::IS_PED_ARMED(AUDIO::_0x0626A247D2405330(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(CAM::_0xDC9DA9E8789F5246(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(CAM::_0xDC9DA9E8789F5246(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, AUDIO::_0x0626A247D2405330(), 90f))
				{
					if (func_232(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
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

void func_238(int iParam0)//Position - 0x9048
{
	struct<4> Var0;
	
	if (HUD::DOES_BLIP_EXIST(uLocal_278[iParam0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_278[iParam0]));
	}
	uLocal_278[iParam0] = func_239(iLocal_271[iParam0], 0, 145);
	Var0 = { func_70(uLocal_74[iParam0]) };
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_278[iParam0], &Var0);
}

int func_239(int iParam0, bool bParam1, int iParam2)//Position - 0x9099
{
	int iVar0;
	
	iVar0 = func_240(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_19E56.f_6D76[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_19E56.f_6D76[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_240(int iParam0, bool bParam1, bool bParam2)//Position - 0x90EB
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_62(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_62(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_62(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_241(int iParam0, int iParam1)//Position - 0x918F
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	float fVar3;
	
	vVar0 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
	vVar1 = { unk_0x8000C77B5F336760(iParam0, true) };
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (PED::GET_PED_GROUP_INDEX(iParam0) == func_225())
		{
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar2, 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(iParam0, iVar2, 0) && SYSTEM::VDIST(vVar0, vVar1) > 10f)
				{
					return 1;
				}
			}
		}
	}
	if (iParam1 && func_254(uLocal_300, 2))
	{
		fVar3 = MISC::ABSF((vVar0.z - vVar1.z));
		if (fVar3 > 8f)
		{
			return 1;
		}
	}
	return 0;
}

void func_242()//Position - 0x9236
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_271[0], 0))
	{
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			func_184(iLocal_271[0], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), ENTITY::GET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330()), 0f, 2f, 0f));
			iLocal_72 = 1;
			iLocal_73 = 0;
		}
	}
}

void func_243()//Position - 0x9286
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_244();
}

void func_244()//Position - 0x9296
{
	Global_434C.f_86 = 1;
}

int func_245(int iParam0, bool bParam1)//Position - 0x92A4
{
	if (iParam0 == 0)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_01");
		}
		else
		{
			return joaat("s_f_y_stripper_01");
		}
	}
	else if (iParam0 == 1)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_02");
		}
		else
		{
			return joaat("s_f_y_stripper_02");
		}
	}
	return 0;
}

void func_246(bool bParam0)//Position - 0x92EC
{
	struct<8> Var0;
	
	if (!func_158(iLocal_71))
	{
		iLocal_71 = func_162();
		func_152(&iLocal_71, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(5, 7), 0, 0, 0);
	}
	else if (bParam0)
	{
		if (!func_254(uLocal_300, 512))
		{
			if (func_253(iLocal_71) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_271[0]))
			{
				if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
				{
					StringCopy(&Var0, "SC_CANCEL_", 64);
					StringIntConCat(&Var0, uLocal_74[0], 64);
					func_181(&uLocal_78, 1, 0, func_182(uLocal_74[0]), 0, 1);
					func_252(&uLocal_78, func_110(uLocal_74[0]), "SHAUD", &Var0, 7, 0, 0, 1);
				}
				else
				{
					func_250();
				}
				func_249(iLocal_271[0]);
				func_27(&uLocal_300, 512);
			}
		}
		else if (func_248())
		{
			func_72(&uLocal_300, 512);
		}
		else if ((!func_164() && func_247()) && !func_248())
		{
			func_229(1);
			func_65(2);
		}
	}
}

int func_247()//Position - 0x93F1
{
	if (Global_3DCE == 0)
	{
		return 1;
	}
	return 0;
}

int func_248()//Position - 0x9408
{
	if (Global_3DFF == 1 || Global_41C6 == 1)
	{
		return 1;
	}
	return 0;
}

void func_249(int iParam0)//Position - 0x942B
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		BRAIN::SET_PED_PATH_AVOID_FIRE(iParam0, 1);
		if (BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
		{
			BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_306);
			BRAIN::OPEN_SEQUENCE_TASK(&iLocal_306);
			BRAIN::TASK_USE_MOBILE_PHONE_TIMED(0, 8000);
			BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_286, 1.5f, 4294967295, 0.25f, 0, 1193033728);
			CUTSCENE::_0x8D9DF6ECA8768583(iLocal_306);
			BRAIN::TASK_PERFORM_SEQUENCE(iParam0, iLocal_306);
		}
	}
}

void func_250()//Position - 0x9494
{
	int iVar0;
	
	if (func_251())
	{
		return;
	}
	iVar0 = func_113(uLocal_74[0]);
	func_107(3910391504, iVar0, 6, 3, func_111(), func_110(uLocal_74[0]), 0, 10000, 4294967295, 0, 4294967295, 0, 1);
}

int func_251()//Position - 0x94D5
{
	if (func_53() == 0)
	{
		return 1;
	}
	return 0;
}

int func_252(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x94EA
{
	func_177(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_3DFE = 1;
	Global_3DD5 = 1;
	Global_3DDC = 0;
	Global_3DD7 = 0;
	Global_41AD = 0;
	Global_41AF = 0;
	Global_41B3 = 0;
	Global_3DD3 = 0;
	Global_3E02 = 0;
	Global_3E04 = 0;
	Global_280001 = 0;
	return func_170(sParam3, iParam4, bParam7);
}

bool func_253(int iParam0)//Position - 0x9538
{
	return func_157(func_162(), iParam0);
}

bool func_254(var uParam0, int iParam1)//Position - 0x954A
{
	return (uParam0 && iParam1) != 0;
}

int func_255(var uParam0, bool bParam1)//Position - 0x9559
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	char cVar3[64];
	struct<16> Var4;
	struct<8> Var5;
	
	func_283();
	func_63(&vVar0, &fVar1, bParam1);
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (fLocal_296 == -1f)
		{
			fLocal_296 = SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), vVar0);
		}
		if (iLocal_299 == 4294967295)
		{
			iLocal_299 = uParam0->f_3;
		}
		if (!func_254(uLocal_300, 32))
		{
			func_279(&uLocal_274, func_281((*uParam0)[0], 0));
			func_278(&uLocal_274);
			func_27(&uLocal_300, 32);
			STREAMING::REQUEST_ANIM_DICT("mini@strip_club@idles@stripper");
			STREAMING::REQUEST_ANIM_DICT("gestures@f@standing@casual");
			func_277();
			return 0;
		}
		else if ((!func_276(&uLocal_274) || !STREAMING::HAS_ANIM_DICT_LOADED("mini@strip_club@idles@stripper")) || !func_275())
		{
			return 0;
		}
		if (bLocal_304)
		{
			if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
			{
				return 0;
			}
		}
		if (!func_254(uLocal_300, 1024))
		{
			uLocal_74[0] = (*uParam0)[0];
			iLocal_271[0] = PED::CREATE_PED(26, func_281((*uParam0)[0], 0), vVar0, fVar1, 1, true);
			func_269(iLocal_271[0], uLocal_74[0], 0);
			ENTITY::SET_ENTITY_HEALTH(iLocal_271[iVar2], true);
			PED::SET_PED_KEEP_TASK(iLocal_271[0], true);
			PED::SET_PED_DIES_WHEN_INJURED(iLocal_271[0], true);
			func_265(iLocal_271[0]);
			BRAIN::TASK_PLAY_ANIM(iLocal_271[0], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1.5f, 4294967295, 1, 0, 0, 0, 0);
			BRAIN::TASK_LOOK_AT_ENTITY(iLocal_271[iVar2], AUDIO::_0x0626A247D2405330(), 4294967295, 2048, 4);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_271[0], 0);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_271[0], func_182((*uParam0)[0]));
			func_181(&uLocal_78, 1, iLocal_271[0], func_182((*uParam0)[0]), 0, 1);
			func_27(&uLocal_300, 1024);
		}
		if (SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), vVar0) > 100f)
		{
			if (func_180())
			{
				if (!func_254(uLocal_300, 1))
				{
					func_264(bParam1);
					func_238(0);
					func_27(&uLocal_300, 1);
				}
			}
			if (!func_254(uLocal_300, 64) && !func_254(uLocal_300, 512))
			{
				if (func_263(func_110((*uParam0)[0])))
				{
					StringCopy(&cVar3, "BC_PLYRC_", 64);
					if (func_76() == 2)
					{
						func_181(&uLocal_78, 0, AUDIO::_0x0626A247D2405330(), "TREVOR", 0, 1);
						StringConCat(&cVar3, "T", 64);
					}
					else if (func_76() == 0)
					{
						func_181(&uLocal_78, 0, AUDIO::_0x0626A247D2405330(), "MICHAEL", 0, 1);
						StringConCat(&cVar3, "M", 64);
					}
					else if (func_76() == 1)
					{
						func_181(&uLocal_78, 0, AUDIO::_0x0626A247D2405330(), "FRANKLIN", 0, 1);
						StringConCat(&cVar3, "F", 64);
					}
					func_181(&uLocal_78, 3, 0, func_182((*uParam0)[0]), 0, 1);
					Var4 = { func_262() };
					func_257(&uLocal_78, func_110((*uParam0)[0]), "BCAUD", &cVar3, &cVar3, &Var4, &Var4, 12, 1, 0, 0, 0);
					func_27(&uLocal_300, 64);
				}
				if (func_158(iLocal_71))
				{
					if (func_253(iLocal_71))
					{
						if ((*uParam0)[0] == 8 || (*uParam0)[0] == 9)
						{
							StringCopy(&Var5, "SC_CANCEL_", 64);
							StringIntConCat(&Var5, (*uParam0)[0], 64);
							func_181(&uLocal_78, 1, 0, func_182((*uParam0)[0]), 0, 1);
							func_252(&uLocal_78, func_110((*uParam0)[0]), "SHAUD", &Var5, 12, 0, 0, 1);
						}
						else
						{
							func_250();
						}
						func_27(&uLocal_300, 512);
					}
				}
			}
			else if (func_248())
			{
				func_72(&uLocal_300, 64);
				func_72(&uLocal_300, 512);
			}
			else if ((!func_164() && func_247()) && !func_248())
			{
				func_256((*uParam0)[0]);
				func_229(1);
				func_65(2);
			}
			if (!func_254(uLocal_300, 128))
			{
				if (!func_33(0))
				{
					func_66("SCLUB_HOME_C_H", uLocal_74[0], 0);
					func_27(&uLocal_300, 128);
				}
			}
			if (SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), vVar0) > (fLocal_296 + (200f * 3f)))
			{
				func_65(1);
			}
			else if (SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), vVar0) < fLocal_296)
			{
				fLocal_296 = SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), vVar0);
			}
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (func_76() == 2)
	{
		func_181(&uLocal_78, 0, AUDIO::_0x0626A247D2405330(), "TREVOR", 0, 1);
	}
	else if (func_76() == 0)
	{
		func_181(&uLocal_78, 0, AUDIO::_0x0626A247D2405330(), "MICHAEL", 0, 1);
	}
	else if (func_76() == 1)
	{
		func_181(&uLocal_78, 0, AUDIO::_0x0626A247D2405330(), "FRANKLIN", 0, 1);
	}
	return 1;
}

void func_256(int iParam0)//Position - 0x99DC
{
	if (Global_19E56.f_F3[func_74() /*53*/].f_2[iParam0 /*5*/].f_1 < 0)
	{
		Global_19E56.f_F3[func_74() /*53*/].f_2[iParam0 /*5*/].f_1 = 0;
	}
	Global_19E56.f_F3[func_74() /*53*/].f_2[iParam0 /*5*/].f_1++;
}

int func_257(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x9A3B
{
	var uVar0;
	var uVar1;
	
	func_177(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_261();
	if (iParam8 == 1)
	{
		Global_3DDA = 1;
	}
	else
	{
		Global_3DDA = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_259(2, &uVar0, &uVar1, cParam3, cParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_258(&uVar0, &uVar1, iParam7, bParam11);
}

int func_258(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x9A9A
{
	int iVar0;
	
	Global_3DCF = 0;
	if (Global_3DCE == 0 || Global_3DD0 == 2)
	{
		if (Global_3DCE != 0)
		{
			if (iParam2 > Global_3DD0)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_38B1.f_1 = 3;
					Global_3DCE = 0;
					Global_3DCF = 1;
					Global_3E03 = 0;
					Global_3DCA = 0;
					Global_3DCB = 0;
				}
				else
				{
					func_176();
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
		if (func_175(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_174();
		Global_3B07 = { Global_3BAC };
		Global_3DD4 = Global_3DD5;
		Global_3DDB = Global_3DDC;
		Global_280002 = Global_280001;
		Global_3DDD = { Global_3DED };
		Global_3DD6 = Global_3DD7;
		Global_41AC = Global_41AD;
		Global_41B4 = { Global_41BA };
		Global_41B2 = Global_41B3;
		Global_41AE = Global_41AF;
		Global_41B0 = Global_41B1;
		Global_3C51.f_170 = Global_41A9;
		Global_3C51.f_171 = Global_41AA;
		Global_3C51.f_172 = Global_41AB;
		Global_3DCA = Global_3DCB;
		Global_3DCC = Global_3DCD;
		if (Global_3ED0 == 0)
		{
			Global_3E68[0 /*6*/] = { Global_3E82[0 /*6*/] };
			Global_3E68[1 /*6*/] = { Global_3E82[1 /*6*/] };
			Global_3E9C[0 /*6*/] = { Global_3EB6[0 /*6*/] };
			Global_3E9C[1 /*6*/] = { Global_3EB6[1 /*6*/] };
			Global_3E75[0 /*6*/] = { Global_3E8F[0 /*6*/] };
			Global_3E75[1 /*6*/] = { Global_3E8F[1 /*6*/] };
			Global_3EA9[0 /*6*/] = { Global_3EC3[0 /*6*/] };
			Global_3EA9[1 /*6*/] = { Global_3EC3[1 /*6*/] };
		}
		if (Global_3DD4)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 20);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 17);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 0);
			if (bParam3)
			{
				func_127();
				if (Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam2 == 13)
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
				if (func_173())
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
					if (Global_3ED0 == 0)
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
			}
			if (func_23())
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
			}
			func_172();
			Global_3DD8 = bParam3;
		}
		Global_3DD0 = iParam2;
		if (Global_3DCA > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_3DCA)
			{
				StringCopy(&(Global_3C51.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_3C51.f_BB[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_3960 = 0;
		func_171();
		return 1;
	}
	if (Global_3DCE == 5)
	{
		return 0;
	}
	if (iParam2 < Global_3DD0 || iParam2 == Global_3DD0)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_176();
	}
	return 0;
}

void func_259(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x9E04
{
	func_260(iParam0);
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

void func_260(var uParam0)//Position - 0x9E74
{
	Global_3DCB = uParam0;
	Global_3DD5 = 1;
	Global_3DDC = 0;
	Global_3DD7 = 0;
	Global_41AD = 0;
	Global_41B3 = 0;
	Global_280001 = 0;
}

void func_261()//Position - 0x9E9A
{
	Global_3DFE = 0;
	Global_3DD5 = 1;
	Global_3DDC = 0;
	Global_3DD7 = 0;
	Global_41AD = 0;
	Global_41AF = 0;
	Global_3DDC = 0;
	Global_41B3 = 0;
	Global_3DD3 = 0;
	Global_3E02 = 0;
	Global_3E04 = 0;
	Global_280001 = 0;
}

struct<16> func_262()//Position - 0x9ED3
{
	struct<16> Var0;
	
	StringCopy(&Var0, "BC_DECR_", 64);
	StringIntConCat(&Var0, uLocal_74[0], 64);
	return Var0;
}

int func_263(int iParam0)//Position - 0x9EF1
{
	if ((Global_4228 || Global_4227) || Global_4229)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_75[iParam0 /*10*/].f_8 != 145)
	{
		if (Global_38B1.f_1 == 10)
		{
			if (Global_6A2 == iParam0)
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
	return 0;
}

void func_264(bool bParam0)//Position - 0x9F55
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_82("SCLUB_HOME_MEE4", uLocal_74[0]);
			}
			else
			{
				func_82("SCLUB_HOME_MEET", uLocal_74[0]);
			}
			break;
		
		case 8:
			func_82("SCLUB_HOME_LIZ", uLocal_74[0]);
			break;
		
		case 9:
			func_82("SCLUB_HOME_HITCH", uLocal_74[0]);
			break;
	}
}

void func_265(int iParam0)//Position - 0x9FE8
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("s_f_y_stripper_02"))
	{
		func_268(iParam0, 2, MISC::GET_RANDOM_INT_IN_RANGE(0, 3));
		func_267(iParam0, 2, MISC::GET_RANDOM_INT_IN_RANGE(0, 3));
		func_266(iParam0, 0, 0);
	}
}

void func_266(int iParam0, int iParam1, int iParam2)//Position - 0xA020
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 6, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, iParam1, iParam2, 0);
	}
}

void func_267(int iParam0, int iParam1, int iParam2)//Position - 0xA045
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 3, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, iParam1, iParam2, 0);
	}
}

void func_268(int iParam0, int iParam1, int iParam2)//Position - 0xA06A
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 8, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iParam1, iParam2, 0);
	}
}

void func_269(int iParam0, int iParam1, bool bParam2)//Position - 0xA091
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
		bVar0 = false;
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_stripperlite"))
		{
			bVar0 = true;
		}
		switch (iParam1)
		{
			case 0:
				if (bVar0)
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 1, 0);
					func_267(iParam0, 1, 0);
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, 4294967295, 4294967295);
				}
				else
				{
					func_274(iParam0, 1, 1);
					func_273(iParam0, 2, 0);
					func_267(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_268(iParam0, 1, 0);
					func_270(iParam0, 0, 0);
					func_271(iParam0, bParam2, 4294967295, 4294967295);
				}
				break;
			
			case 1:
				if (bVar0)
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 0, 0);
					func_267(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, 4294967295, 4294967295);
				}
				else
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 0, 0);
					func_267(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_266(iParam0, 4, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, 0, 4);
				}
				break;
			
			case 2:
				if (bVar0)
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 1, 1);
					func_267(iParam0, 1, 0);
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, 4294967295, 4294967295);
				}
				else
				{
					func_274(iParam0, 0, 1);
					func_273(iParam0, 1, 1);
					func_267(iParam0, 1, 0);
					func_272(iParam0, 1, 1);
					func_268(iParam0, 1, 0);
					func_270(iParam0, 1, 0);
					func_271(iParam0, bParam2, 4294967295, 4294967295);
				}
				break;
			
			case 3:
				if (bVar0)
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 0, 1);
					func_267(iParam0, 0, 1);
					func_272(iParam0, 0, 1);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, 4294967295, 4294967295);
				}
				else
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 2, 0);
					func_267(iParam0, 0, 2);
					func_272(iParam0, 1, 1);
					func_266(iParam0, 0, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, 2, 0);
				}
				break;
			
			case 4:
				if (bVar0)
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 1, 0);
					func_267(iParam0, 1, 0);
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, 4294967295, 4294967295);
				}
				else
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 2, 1);
					func_267(iParam0, 1, 2);
					func_272(iParam0, 0, 2);
					func_268(iParam0, 1, 0);
					func_270(iParam0, 1, 2);
					func_271(iParam0, bParam2, 4294967295, 4294967295);
				}
				break;
			
			case 5:
				if (bVar0)
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 0, 0);
					func_267(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, 4294967295, 4294967295);
				}
				else
				{
					func_274(iParam0, 1, 1);
					func_273(iParam0, 1, 0);
					func_267(iParam0, 0, 1);
					func_272(iParam0, 0, 2);
					func_266(iParam0, 2, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, 1, 2);
				}
				break;
			
			case 6:
				if (bVar0)
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 1, 0);
					func_267(iParam0, 1, 0);
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, 4294967295, 4294967295);
				}
				else
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 1, 0);
					func_267(iParam0, 0, 1);
					func_272(iParam0, 0, 1);
					func_268(iParam0, 1, 0);
					func_270(iParam0, 0, 1);
					func_271(iParam0, bParam2, 0, 1);
				}
				break;
			
			case 7:
				if (bVar0)
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 0, 1);
					func_267(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, 4294967295, 4294967295);
				}
				else
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 0, 2);
					func_267(iParam0, 1, 1);
					func_272(iParam0, 0, 1);
					func_266(iParam0, 0, 0);
					func_268(iParam0, 1, 0);
					func_271(iParam0, bParam2, 0, 0);
				}
				break;
			
			case 8:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 1, 0);
				break;
			
			case 9:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, 0);
				break;
			}
	}
}

void func_270(int iParam0, int iParam1, int iParam2)//Position - 0xA4EC
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 11, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, iParam1, iParam2, 0);
	}
}

void func_271(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xA513
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar0 == func_245(0, 0) || iVar0 == func_245(0, 1))
	{
		if (bParam1)
		{
			func_267(iParam0, 2, 0);
			func_268(iParam0, 1, 0);
		}
	}
	else if (iVar0 == func_245(1, 0) || iVar0 == func_245(1, 1))
	{
		if (bParam1)
		{
			func_267(iParam0, 0, iParam2);
			func_266(iParam0, iParam3, 0);
			func_268(iParam0, 1, 0);
		}
	}
	else if (iVar0 == joaat("mp_f_stripperlite"))
	{
		if (bParam1)
		{
			func_268(iParam0, 1, 0);
		}
	}
}

void func_272(int iParam0, int iParam1, int iParam2)//Position - 0xA5B7
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 4, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, iParam1, iParam2, 0);
	}
}

void func_273(int iParam0, int iParam1, int iParam2)//Position - 0xA5DC
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 2, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, iParam1, iParam2, 0);
	}
}

void func_274(int iParam0, int iParam1, int iParam2)//Position - 0xA601
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 0, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, iParam1, iParam2, 0);
	}
}

int func_275()//Position - 0xA626
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_192()))
	{
		return 1;
	}
	else if (BRAIN::GET_IS_WAYPOINT_RECORDING_LOADED(func_192()))
	{
		return 1;
	}
	return 0;
}

int func_276(var uParam0)//Position - 0xA653
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_277()//Position - 0xA69A
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_192()))
	{
		BRAIN::REQUEST_WAYPOINT_RECORDING(func_192());
	}
}

void func_278(var uParam0)//Position - 0xA6B6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_279(var uParam0, int iParam1)//Position - 0xA6E6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_280(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_280(var uParam0)//Position - 0xA743
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_281(int iParam0, bool bParam1)//Position - 0xA76F
{
	int iVar0;
	
	if (bParam1)
	{
		return joaat("mp_f_stripperlite");
	}
	iVar0 = func_110(iParam0);
	if (iVar0 != 145)
	{
		return func_282(iVar0);
	}
	return func_245(0, 0);
}

int func_282(int iParam0)//Position - 0xA7A2
{
	if (!func_79(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_283()//Position - 0xA7CD
{
	switch (uLocal_74[0])
	{
		case 1:
			vLocal_285 = { 128.1002f, -1895.001f, 22.4811f };
			vLocal_286 = { 128.1059f, -1896.819f, 22.6792f };
			vLocal_287 = { 133.9411f, -1881.89f, 22.5257f };
			vLocal_288 = { 130.1663f, -1893.057f, 22.3748f };
			vLocal_289 = { 133.4958f, -1891.641f, 22.4252f };
			fLocal_293 = 330.5705f;
			fLocal_294 = 244f;
			vLocal_292 = { 146.293f, -1888.049f, 22.2193f };
			fLocal_295 = fLocal_294;
			break;
		
		case 0:
			vLocal_285 = { -161.9628f, -1636.501f, 33.0339f };
			vLocal_286 = { -159.9415f, -1637.307f, 33.0339f };
			vLocal_287 = { -178.6316f, -1629.522f, 32.1789f };
			vLocal_288 = { -166.1453f, -1633.102f, 32.6574f };
			vLocal_289 = { -166.6636f, -1633.229f, 32.6567f };
			fLocal_293 = 108.072f;
			fLocal_294 = 180.9811f;
			vLocal_292 = { vLocal_287 };
			fLocal_295 = fLocal_294;
			break;
		
		case 4:
			vLocal_285 = { -198.3824f, 87.8785f, 68.7436f };
			vLocal_286 = { -197.2292f, 86.3497f, 68.7561f };
			vLocal_287 = { -200.9078f, 113.537f, 68.5518f };
			vLocal_288 = { -200.1384f, 96.9809f, 68.5203f };
			vLocal_289 = { -199.5068f, 95.7042f, 68.5193f };
			fLocal_293 = 48.99f;
			fLocal_294 = 64.3f;
			vLocal_292 = { vLocal_287 };
			fLocal_295 = fLocal_294;
			break;
		
		case 5:
			vLocal_285 = { -849.0348f, 510.6906f, 89.8218f };
			vLocal_286 = { -849.0408f, 508.5767f, 89.8218f };
			vLocal_287 = { -846.1005f, 520.2202f, 89.6217f };
			vLocal_288 = { -851.8972f, 512.73f, 89.6217f };
			vLocal_289 = { -851.8746f, 513.6746f, 89.6217f };
			fLocal_293 = 92.365f;
			fLocal_294 = 293f;
			vLocal_292 = { -860.4819f, 514.2496f, 88.1473f };
			fLocal_295 = fLocal_294;
			break;
		
		case 8:
			vLocal_285 = { -28.2427f, -1555.892f, 29.6918f };
			vLocal_286 = { -24.8589f, -1556.846f, 29.6819f };
			vLocal_287 = { -41.8174f, -1575.609f, 28.2831f };
			vLocal_288 = { -25.3404f, -1556.341f, 29.6919f };
			vLocal_289 = { -27.7382f, -1570.572f, 29.3f };
			fLocal_293 = 181.352f;
			fLocal_294 = 47.9206f;
			vLocal_292 = { vLocal_287 };
			fLocal_295 = fLocal_294;
			break;
		
		case 9:
			vLocal_285 = { 3313.487f, 5175.831f, 18.619f };
			vLocal_286 = { 3310.816f, 5176.331f, 18.619f };
			vLocal_287 = { 3334.321f, 5161.122f, 17.2996f };
			vLocal_288 = { 3317.788f, 5171.707f, 17.4471f };
			vLocal_289 = { 3318.076f, 5171.805f, 17.4385f };
			fLocal_293 = 236.4579f;
			vLocal_292 = { 3322.927f, 5148.607f, 17.3141f };
			fLocal_295 = 310.8648f;
			break;
	}
}

int func_284()//Position - 0xAB45
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bLocal_304)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_285(int iParam0, int iParam1, bool bParam2)//Position - 0xABA3
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_289();
			}
			else
			{
				return 0;
			}
		}
		if (!func_288())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_289();
					}
					else
					{
						return 0;
					}
				}
				if (func_287())
				{
					if (!bParam2)
					{
						func_289();
					}
					else
					{
						return 0;
					}
				}
				if (func_286(155))
				{
					if (!bParam2)
					{
						func_289();
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
					func_289();
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
				func_289();
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
			func_289();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_286(int iParam0)//Position - 0xACB8
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_287()//Position - 0xACCF
{
	return Global_255C02.f_246;
}

bool func_288()//Position - 0xACDE
{
	return Global_140842;
}

void func_289()//Position - 0xACEA
{
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_290()//Position - 0xACF6
{
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	func_84();
	HUD::CLEAR_PRINTS();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_284, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), true, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), 15f, 1);
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_271[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_271[0], 0))
		{
			if (!func_254(uLocal_300, 8192))
			{
				BRAIN::TASK_WANDER_STANDARD(iLocal_271[0], 1193033728, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_271[0], true);
			if (!unk_0x4EE7377FBE72B4BC(iLocal_70))
			{
				PED::ADD_RELATIONSHIP_GROUP("BootyCall", &iLocal_70);
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_70, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, iLocal_70);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_271[0], iLocal_70);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_271[0]));
	}
	if (iLocal_299 != 4294967295)
	{
		func_292(&iLocal_299);
	}
	if (bLocal_69)
	{
		func_136(&uLocal_68);
	}
	PLAYER::_0xDE45D1A1EF45EE61(CAM::_0xDC9DA9E8789F5246(), 0);
	func_119(uLocal_74[0], 4294967295);
	Global_19A68 = 0;
	func_291(0);
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_291(bool bParam0)//Position - 0xAE2E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		func_216(iVar0, bParam0);
		iVar0++;
	}
}

void func_292(int iParam0)//Position - 0xAE51
{
	if (*iParam0 == 4294967295)
	{
		return;
	}
	if (!*iParam0 == Global_8CEF)
	{
		*iParam0 = 4294967295;
		return;
	}
	*iParam0 = 4294967295;
	Global_8CEE = 0;
	Global_8CF0 = 0;
	Global_8D15 = 15;
	Global_DB72 = 0;
	Global_DB73 = 0;
}

