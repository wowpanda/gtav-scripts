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
	bool bLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	struct<4> Local_38[10];
	bool bLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<27> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	struct<11> Local_45[2];
	struct<25> Local_46[21];
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	vector3 vLocal_54 = { 0f, 0f, 0f };
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = -1;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 1000;
	var uLocal_66 = 1000;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	struct<8> Local_73[3];
	var uLocal_74 = 15;
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
	var uLocal_126 = 15;
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
	int iLocal_178 = 0;
	char* sLocal_179 = NULL;
	char* sLocal_180 = NULL;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	vector3 vLocal_185 = { 0f, 0f, 0f };
	vector3 vLocal_186 = { 0f, 0f, 0f };
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	bool bLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	struct<14> Local_197 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_198 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_199 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	char[] cLocal_204[8] = 0;
	var uLocal_205 = 16;
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
	char[] cLocal_370[8] = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	int iLocal_374[3] = { 0, 0, 0 };
	int iLocal_375 = 0;
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
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	iLocal_41 = 21;
	fLocal_47 = -1f;
	vLocal_54 = { 0f, 0f, 0f };
	iLocal_55 = 4294967295;
	sLocal_180 = "FBIPRA";
	vLocal_185 = { 0f, 0f, 0f };
	vLocal_186 = { 1381.472f, -2072.245f, 50.9981f };
	cLocal_204 = "FIBP1AU";
	iLocal_375 = 4294967295;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		sLocal_179 = 0;
		func_381();
		func_369();
	}
	func_352();
	if (func_351())
	{
		func_350(918.8851f, -269.789f, 67.2145f, 68.2149f, 1, 0);
	}
	func_336();
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_TrT", 0);
		if (func_335(AUDIO::_0x0626A247D2405330()))
		{
			func_331();
			func_327();
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(CAM::_0xDC9DA9E8789F5246());
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
			switch (iLocal_68)
			{
				case 0:
					func_265();
					break;
				
				case 1:
					func_233();
					break;
				
				case 2:
					func_215();
					break;
				
				case 3:
					func_102();
					break;
				
				case 4:
					func_38();
					break;
				
				case 5:
					func_1();
					break;
			}
			if (iLocal_68 != 5)
			{
				if (iLocal_68 >= 0 && !bLocal_28)
				{
				}
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x189
{
	int iVar0;
	
	switch (iLocal_69)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			func_37();
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
				if (func_36(iVar0) && ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("TOWTRUCK"))
				{
					func_35(iVar0, 2);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_179))
			{
				func_33(sLocal_179);
			}
			else
			{
				func_18(0);
			}
			iLocal_69 = 1;
			break;
		
		case 1:
			if (func_17())
			{
				if (func_16())
				{
					func_11();
				}
				func_2();
				MISC::CLEAR_AREA(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), 30f, 1, 0, 0, false);
				func_369();
			}
			break;
	}
}

void func_2()//Position - 0x23E
{
	func_9(&Local_199);
	func_9(&iLocal_201);
	func_9(&iLocal_200);
	func_8(&Local_197);
	func_8(&Local_198);
	func_9(&iLocal_202);
	func_3();
}

void func_3()//Position - 0x274
{
	func_7(&(Local_45[0 /*11*/].f_4));
	func_7(&(Local_45[1 /*11*/].f_4));
	func_6(&iLocal_43);
	func_5(&(Local_45[0 /*11*/]), 1, 0, 1);
	func_5(&(Local_45[1 /*11*/]), 1, 0, 1);
	func_4(&(Local_46[iLocal_48 /*25*/].f_11), 0);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_40);
	STREAMING::REMOVE_ANIM_DICT("missfbi4prepp1");
	STREAMING::REMOVE_ANIM_SET("missfbi4prepp1_garbageman");
}

void func_4(int iParam0, bool bParam1)//Position - 0x2D2
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
		}
		if (!bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			OBJECT::_MARK_OBJECT_FOR_DELETION(*iParam0);
		}
	}
}

void func_5(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x30D
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0, 1);
			if (iParam3 == 0)
			{
				BRAIN::CLEAR_PED_SECONDARY_TASK(*iParam0);
			}
			PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				ENTITY::SET_ENTITY_HEALTH(*iParam0, false);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_6(int iParam0)//Position - 0x35D
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*iParam0, 0);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, 1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_7(int iParam0)//Position - 0x395
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, false);
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_8(int iParam0)//Position - 0x3B5
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, 0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0, 1);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, 0);
		}
		PED::DELETE_PED(iParam0);
	}
}

void func_9(int iParam0)//Position - 0x3F6
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, 0);
		}
		if (func_36(*iParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, 1))
			{
				if (func_10(AUDIO::_0x0626A247D2405330()))
				{
					if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), *iParam0, 0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
						return;
					}
				}
				VEHICLE::DELETE_VEHICLE(iParam0);
			}
		}
		else
		{
			if (func_10(AUDIO::_0x0626A247D2405330()))
			{
				if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), *iParam0, 0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
					return;
				}
			}
			VEHICLE::DELETE_VEHICLE(iParam0);
		}
	}
}

int func_10(int iParam0)//Position - 0x492
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

void func_11()//Position - 0x4B3
{
	func_14(918.8851f, -269.789f, 67.2145f, 325.9081f);
	func_12(917.5291f, -263.8595f, 67.3489f, 188.0605f);
}

void func_12(vector3 vParam0, float fParam1)//Position - 0x4EB
{
	func_13(&(Global_18531.f_B3B), vParam0, fParam1);
}

void func_13(var uParam0, vector3 vParam1, var uParam2)//Position - 0x504
{
	*uParam0 = { vParam1 };
	uParam0->f_6 = uParam2;
}

void func_14(vector3 vParam0, float fParam1)//Position - 0x51A
{
	if (func_15(Global_11715, 0f, 0f, 0f, 0))
	{
		Global_11715 = { vParam0 };
		Global_11718 = fParam1;
	}
}

bool func_15(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x546
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_16()//Position - 0x58D
{
	if (Global_16C30 == 7)
	{
		return 1;
	}
	return 0;
}

int func_17()//Position - 0x5A2
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_16C30 == 7 || Global_16C30 == 8)
	{
		return 1;
	}
	return 0;
}

void func_18(int iParam0)//Position - 0x5CF
{
	int iVar0;
	
	if (Global_19E56.f_2361 || func_32(0))
	{
		iVar0 = func_31();
		if (!func_19(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_1486F[iVar0 /*5*/].f_1), 5);
		Global_16C54 = iParam0;
	}
}

int func_19(int iParam0)//Position - 0x614
{
	int iVar0;
	int iVar1;
	
	func_24();
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_1486F[iParam0 /*5*/];
	iVar1 = Global_11732.f_6D[iVar0 /*4*/];
	func_23(iVar1, 1);
	PLAYER::_0xC9A763D8FE87436A(CAM::_0xDC9DA9E8789F5246());
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(CAM::_0xDC9DA9E8789F5246());
	func_20(&(Global_19E56.f_933.f_21B), iVar1);
	if (Global_155CE == Global_16C55)
	{
		Global_19E56.f_2361.f_14A[iVar1 /*6*/].f_1++;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14893[iVar1 /*34*/].f_F, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		}
	}
	Global_19E56.f_2361.f_14A[iVar1 /*6*/].f_2++;
	Global_155CE = Global_16C55;
	if (iParam0 == 4294967295)
	{
		if (Global_19E56.f_2361)
		{
		}
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1486F[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1486F[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_20(var uParam0, int iParam1)//Position - 0x72B
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_19E56.f_4849[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2361.f_63.f_DB[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_22(Global_19E56.f_4849[iVar0], &vVar2, &fVar3))
			{
				Global_19E56.f_4849[iVar0] = 318;
				func_21(&(uParam0->f_8E4[iVar0]));
				uParam0->f_8E8[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_8F2[iVar0] = 0f;
				uParam0->f_8F6[iVar0] = 0;
				uParam0->f_8FA[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_904[iVar0] = 0;
				Global_1625D[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_1625D[iVar0 /*29*/].f_9 = 0f;
				Global_1625D[iVar0 /*29*/].f_C = 0f;
				Global_1625D[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_1625D[iVar0 /*29*/].f_A = 0f;
				Global_1625D[iVar0 /*29*/].f_D = 0f;
				Global_1625D[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_1625D[iVar0 /*29*/].f_B = 0f;
				Global_1625D[iVar0 /*29*/].f_E = 0f;
				Global_1625D[iVar0 /*29*/].f_11 = { 0f, 0f, 0f };
				Global_1625D[iVar0 /*29*/].f_1A = 0f;
				Global_1625D[iVar0 /*29*/].f_14 = { 0f, 0f, 0f };
				Global_1625D[iVar0 /*29*/].f_1B = 0f;
				Global_1625D[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_1625D[iVar0 /*29*/].f_1C = 0f;
			}
		}
		iVar0++;
	}
}

void func_21(var uParam0)//Position - 0x8F4
{
	*uParam0 = 4294967281;
}

int func_22(int iParam0, var uParam1, float fParam2)//Position - 0x902
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_22(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_22(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_23(int iParam0, bool bParam1)//Position - 0x1271
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_15510[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_15510[iParam0 /*2*/] = 0;
	}
}

void func_24()//Position - 0x12AF
{
	Global_16C53 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_1170D))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_1170D, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_1170D, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_1170D, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_11711, "", 16);
		}
		Global_16C53 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_1170D))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_1170D, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_1170D, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_1170D, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_11711, "", 16);
		}
		Global_16C53 = 0;
		MISC::SET_BIT(&(Global_16C30.f_14), 25);
	}
}

int func_25()//Position - 0x1396
{
	func_26();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_26()//Position - 0x13AF
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_30(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_29(AUDIO::_0x0626A247D2405330());
			if (func_28(iVar0) && (!func_27(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_28(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_27(int iParam0)//Position - 0x14AC
{
	return Global_8D15 == iParam0;
}

bool func_28(int iParam0)//Position - 0x14BA
{
	return iParam0 < 3;
}

int func_29(int iParam0)//Position - 0x14C6
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(int iParam0)//Position - 0x1503
{
	if (func_28(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_31()//Position - 0x152D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1486F[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool func_32(bool bParam0)//Position - 0x1562
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

void func_33(char* sParam0)//Position - 0x158D
{
	func_34(sParam0);
	func_18(0);
}

void func_34(char* sParam0)//Position - 0x15A0
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_1170D, sParam0, 16);
			StringCopy(&Global_11711, "", 16);
			if (RECORDING::_IS_RECORDING())
			{
				RECORDING::_STOP_RECORDING_AND_SAVE_CLIP();
			}
		}
	}
}

void func_35(int iParam0, int iParam1)//Position - 0x15DF
{
	Global_16C30.f_16[iParam1] = iParam0;
}

int func_36(int iParam0)//Position - 0x15F3
{
	if (func_10(iParam0))
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

void func_37()//Position - 0x161D
{
	func_7(&iLocal_182);
}

void func_38()//Position - 0x162C
{
	int iVar0;
	
	switch (iLocal_69)
	{
		case 0:
			iLocal_69 = 1;
			break;
		
		case 1:
			if (!func_101(AUDIO::_0x0626A247D2405330(), vLocal_186, 270f))
			{
				iLocal_69 = 2;
			}
			else if (!func_100("PRA_LEVAREA", 0, 0))
			{
				func_99("PRA_LEVAREA", 60000, 0);
			}
			break;
		
		case 2:
			iVar0 = func_25();
			if (func_100("PRA_LEVAREA", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			if (iVar0 == 0)
			{
				if (func_66(&uLocal_72, &cLocal_370, &uLocal_205))
				{
					func_62();
					func_57();
				}
			}
			else
			{
				func_52(func_56(iVar0), 3673067633, 3673067633, 5, 0, iVar0, func_55(iVar0), 0, 6000, 6000, 4294967295, 0, 0);
				func_62();
				func_57();
			}
			break;
		
		case 3:
			func_39(1, 1, 1);
			iLocal_69 = 2;
			break;
	}
}

void func_39(int iParam0, int iParam1, int iParam2)//Position - 0x170D
{
	func_41(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (iParam1 == 1)
	{
		func_40(500, 0);
	}
}

void func_40(int iParam0, bool bParam1)//Position - 0x1741
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(iParam0);
		}
	}
	if (bParam1)
	{
		while (!CAM::IS_SCREEN_FADED_IN())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_41(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x177D
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(iVar0, bParam3, 0);
	func_42(0, 1, 0, 0, 0);
	if (iParam2 == 1)
	{
		HUD::DISPLAY_RADAR(true);
		unk_0x59B038076F830627(true);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	if (iParam0 == 1)
	{
		CAM::SET_WIDESCREEN_BORDERS(false, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_37 != 0 && iLocal_37 != joaat("object")) && iLocal_37 != joaat("gadget_parachute"))
		{
			if (func_10(AUDIO::_0x0626A247D2405330()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(AUDIO::_0x0626A247D2405330(), iLocal_37, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), iLocal_37, false);
				}
			}
		}
	}
	if (func_335(AUDIO::_0x0626A247D2405330()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(AUDIO::_0x0626A247D2405330(), 0, 0);
	}
}

void func_42(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1825
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(CAM::_0xDC9DA9E8789F5246());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(CAM::_0xDC9DA9E8789F5246(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 1);
		func_51(1);
		HUD::_0xA8FDB297A8D25FBA();
		HUD::_0xFDB423997FA30340();
		if (Global_38B1.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_50())
			{
				Global_38B1.f_1 = 3;
			}
			Global_3DCE = 5;
		}
		func_49(1, iParam3, iParam2, 0);
		Global_DB7B = 1;
		Global_10B91 = 1;
		Global_11623 = 1;
	}
	else
	{
		func_51(0);
		HUD::_0xE1CD1E48E025E661();
		Global_DB7B = 0;
		if (bParam1)
		{
			CAM::_SET_CAM_EFFECT();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(CAM::_0xDC9DA9E8789F5246(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 0);
		func_49(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && !func_47(CAM::_0xDC9DA9E8789F5246())) && !func_44(CAM::_0xDC9DA9E8789F5246(), 0)) && !func_43()) && !bParam4)
			{
				ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), false);
			}
		}
		else if ((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && !func_47(CAM::_0xDC9DA9E8789F5246())) && !bParam4)
		{
			ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), false);
		}
		Global_11623 = 0;
	}
}

bool func_43()//Position - 0x194E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 14);
}

bool func_44(int iParam0, int iParam1)//Position - 0x196B
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_45(4294967295, 0) == 8;
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

int func_45(int iParam0, bool bParam1)//Position - 0x19B6
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_46();
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

int func_46()//Position - 0x19F7
{
	return Global_1407E0;
}

int func_47(int iParam0)//Position - 0x1A03
{
	if (func_44(iParam0, 0))
	{
		return 1;
	}
	if (func_48())
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

bool func_48()//Position - 0x1A45
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

int func_49(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x1A56
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

int func_50()//Position - 0x1A89
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_51(int iParam0)//Position - 0x1AB0
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

int func_52(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x1AD3
{
	struct<15> Var0;
	int iVar1;
	
	if (func_32(0))
	{
		return 0;
	}
	if (iParam8 < 0)
	{
		return 0;
	}
	if (iParam9 < 0)
	{
		return 0;
	}
	if (iParam10 == 76)
	{
		return 0;
	}
	if (iParam11 == 235)
	{
		return 0;
	}
	if (iParam6 == iParam5)
	{
		return 0;
	}
	if (((iParam5 != 144 && iParam5 != 0) && iParam5 != 1) && iParam5 != 2)
	{
		return 0;
	}
	if (Global_19E56.f_1DEC.f_88 < 9)
	{
		Var0 = uParam0;
		Var0.f_A = iParam1;
		Var0.f_B = iParam2;
		Var0.f_9 = iParam3;
		if (Global_19E56.f_1DEC.f_38F == Var0)
		{
			Global_19E56.f_1DEC.f_38F = 4294967295;
		}
		Var0.f_3 = func_54(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam8);
		Var0.f_1 = iParam12;
		iVar1 = 0;
		MISC::SET_BIT(&iVar1, iParam5);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam6;
		Var0.f_E = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::SET_BIT(&(Var0.f_1), 13);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Var0.f_1), 1);
		if (iParam4 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_19E56.f_1DEC[Global_19E56.f_1DEC.f_88 /*15*/] = { Var0 };
		Global_19E56.f_1DEC.f_88++;
		func_53(iParam5);
		return 1;
	}
	return 0;
}

void func_53(int iParam0)//Position - 0x1C30
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_28(iParam0))
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

int func_54(int iParam0)//Position - 0x1CF4
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

int func_55(int iParam0)//Position - 0x1D5E
{
	if (iParam0 == 1)
	{
		return 9;
	}
	return 8;
}

int func_56(int iParam0)//Position - 0x1D73
{
	if (iParam0 == 1)
	{
		return 3580207230;
	}
	return 3096911775;
}

void func_57()//Position - 0x1D8E
{
	HUD::CLEAR_PRINTS();
	func_60();
	func_58(0, 0);
	func_369();
}

void func_58(bool bParam0, int iParam1)//Position - 0x1DA8
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_DB77)
	{
		Global_DB77 = iParam1;
	}
	if (bParam0)
	{
		if ((func_32(0) && Global_1171B.f_1 == 1) && func_59(Global_1171B))
		{
		}
		else
		{
			Global_DB75 = 1;
		}
	}
	if (Global_19E56.f_2361 || func_32(0))
	{
		iVar0 = func_31();
		iVar1 = Global_1486F[iVar0 /*5*/];
		uVar2 = Global_11732.f_6D[iVar1 /*4*/];
		if (iVar0 == 4294967295)
		{
			if (Global_19E56.f_2361)
			{
			}
			return;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1486F[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1486F[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_1486F[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_1171D, 1);
		Global_1172D = uVar2;
		Global_1172E = MISC::GET_GAME_TIMER();
	}
}

int func_59(int iParam0)//Position - 0x1E7E
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_60()//Position - 0x1EBC
{
	Global_3960 = 0;
	func_61();
}

void func_61()//Position - 0x1ECC
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

void func_62()//Position - 0x1F23
{
	func_65(0, 4294967295);
	func_64(0, 318);
	func_63(1, 320);
}

void func_63(bool bParam0, int iParam1)//Position - 0x1F41
{
	int iVar0;
	
	if (Global_DB7D)
	{
	}
	Global_DB7D = 0;
	if (bParam0)
	{
		Global_DB7E = 1;
	}
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iVar0 = 0;
		while (iVar0 < Global_10AB4)
		{
			if (Global_DC56[Global_10AB5[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_10AB5[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_10AB4)
		{
			if (Global_10AB5[iVar0 /*9*/] > 0)
			{
				if (Global_10AB5[iVar0 /*9*/] == iParam1)
				{
					Global_10AB5[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_64(int iParam0, int iParam1)//Position - 0x1FDB
{
	int iVar0;
	
	Global_DB82 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_10AB4)
	{
		if (iParam1 == 4294967295 || Global_10AB5[iVar0 /*9*/] == iParam1)
		{
			if (Global_10AB5[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_10AB5[iVar0 /*9*/].f_6 = iParam0;
				Global_10AB5[iVar0 /*9*/].f_7 = 1;
				Global_10AB5[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_65(int iParam0, int iParam1)//Position - 0x2046
{
	Global_DB80 = iParam0;
	Global_DB81 = iParam1;
}

int func_66(var uParam0, char* sParam1, var uParam2)//Position - 0x2058
{
	switch (*uParam0)
	{
		case 0:
			if (func_97())
			{
				if ((func_96(74) || func_96(75)) && func_95())
				{
					if (func_25() == 0)
					{
						func_94(1);
						func_93(46, 1);
						*uParam0 = 4;
					}
					else
					{
						func_92(uParam2, 0, 0, "MICHAEL", 0, 1);
						if (func_81(uParam2, func_91(), func_25(), "FBIPRAU", func_90(), 9, 1, 0, 0, 0))
						{
							*sParam1 = { func_80(1) };
							func_93(46, 1);
							*uParam0 = 1;
						}
					}
				}
				else if (func_25() == 0)
				{
					func_94(0);
					*uParam0 = 4;
				}
				else
				{
					func_92(uParam2, 0, 0, "MICHAEL", 0, 1);
					if (func_81(uParam2, func_91(), func_25(), "FBIPRAU", func_90(), 9, 1, 0, 0, 0))
					{
						*sParam1 = { func_80(0) };
						*uParam0 = 1;
					}
				}
			}
			else
			{
				func_73();
				*uParam0 = 4;
			}
			break;
		
		case 1:
			if (func_72())
			{
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 0)
				{
					func_71("FBIPRAU", sParam1);
					func_70(1);
					*uParam0 = 3;
				}
			}
			if (func_69())
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_72())
			{
				if (!func_68(0))
				{
					if (!func_96(3) && func_97())
					{
						func_67(50, 0);
					}
					return 1;
				}
			}
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_67(int iParam0, int iParam1)//Position - 0x21CD
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_19E56.f_2189[iParam0] = 1;
	Global_19E56.f_2189.f_EC[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

int func_68(int iParam0)//Position - 0x220A
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

int func_69()//Position - 0x2264
{
	if (Global_3DFF == 1 || Global_41C6 == 1)
	{
		return 1;
	}
	return 0;
}

void func_70(bool bParam0)//Position - 0x2287
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(bParam0);
	if (bParam0)
	{
	}
}

void func_71(char* sParam0, char* sParam1)//Position - 0x229B
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		Global_3E07 = 1;
		StringCopy(&Global_3E0E, sParam0, 24);
		StringCopy(&Global_3E08, sParam1, 24);
	}
}

int func_72()//Position - 0x22BC
{
	if (Global_3DCE == 4)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
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

void func_73()//Position - 0x22E1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_78(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (func_77(iVar1, 0))
			{
				return;
			}
		}
		iVar0++;
	}
	func_74(func_75(), 0, func_25(), func_91(), 9, 6000, 6000, 4294967295, 0, 4294967295, 0);
}

int func_74(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x2338
{
	struct<15> Var0;
	int iVar1;
	
	if (func_32(0))
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
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == iParam2)
	{
		return 0;
	}
	if (((iParam2 != 144 && iParam2 != 0) && iParam2 != 1) && iParam2 != 2)
	{
		return 0;
	}
	if (Global_19E56.f_1DEC.f_88 < 9)
	{
		Var0 = iParam0;
		if (Global_19E56.f_1DEC.f_38F == Var0)
		{
			Global_19E56.f_1DEC.f_38F = 4294967295;
		}
		Var0.f_3 = func_54(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam5);
		Var0.f_1 = iParam10;
		iVar1 = 0;
		MISC::SET_BIT(&iVar1, iParam2);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam3;
		Var0.f_E = iParam4;
		Var0.f_A = 4294967295;
		Var0.f_B = 4294967295;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		MISC::SET_BIT(&(Var0.f_1), 0);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_19E56.f_1DEC[Global_19E56.f_1DEC.f_88 /*15*/] = { Var0 };
		Global_19E56.f_1DEC.f_88++;
		func_53(iParam2);
		return 1;
	}
	return 0;
}

int func_75()//Position - 0x2489
{
	switch (func_76())
	{
		case 33:
			switch (func_25())
			{
				case 0:
					return 2447232493;
					break;
				
				case 1:
					return 3580207230;
					break;
				
				case 2:
					return 3096911775;
					break;
			}
			break;
		
		case 34:
			switch (func_25())
			{
				case 0:
					return 1374342572;
					break;
				
				case 1:
					return 530956160;
					break;
				
				case 2:
					return 240475766;
					break;
			}
			break;
		
		case 36:
			switch (func_25())
			{
				case 0:
					return 580731697;
					break;
				
				case 1:
					return 728176806;
					break;
				
				case 2:
					return 910240872;
					break;
			}
			break;
		
		case 37:
			switch (func_25())
			{
				case 0:
					return 74540475;
					break;
				
				case 1:
					return 3094614032;
					break;
				
				case 2:
					return 801340541;
					break;
			}
			break;
	}
	return 4294967295;
}

int func_76()//Position - 0x25AF
{
	return Global_1172B;
}

int func_77(int iParam0, int iParam1)//Position - 0x25BB
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_78(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == AUDIO::_0x0626A247D2405330())
			{
				return 0;
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15C5C, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_78(int iParam0)//Position - 0x2617
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_25())
	{
		return AUDIO::_0x0626A247D2405330();
	}
	return Global_162B5[func_79(iParam0)];
}

int func_79(int iParam0)//Position - 0x2648
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

struct<4> func_80(bool bParam0)//Position - 0x2683
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_25())
		{
			case 1:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
		}
	}
	else
	{
		switch (func_25())
		{
			case 1:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			}
	}
	return Var0;
}

bool func_81(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x26E9
{
	func_89(uParam0, iParam1, sParam3, iParam7, iParam8, 0);
	Global_6A5 = iParam2;
	Global_3DFE = 0;
	Global_3DD5 = 1;
	Global_3DDC = 0;
	Global_3DD7 = 0;
	Global_41AD = 0;
	Global_41AF = 0;
	Global_41B3 = 0;
	Global_3DDC = 0;
	Global_3DD3 = 1;
	Global_3E02 = 0;
	Global_3E04 = 0;
	if (iParam6 == 1)
	{
		Global_3DDA = 1;
	}
	else
	{
		Global_3DDA = 0;
	}
	Global_280001 = 0;
	return func_82(sParam4, iParam5, bParam9);
}

int func_82(char* sParam0, int iParam1, bool bParam2)//Position - 0x2751
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
					func_61();
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
		if (func_88(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_87();
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
				func_86();
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
				if (func_85())
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
			if (func_50())
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
			func_84();
			Global_3DD8 = bParam2;
		}
		Global_3DD0 = iParam1;
		StringCopy(&Global_3C51, sParam0, 24);
		Global_3960 = 0;
		func_83();
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
		func_61();
	}
	return 0;
}

void func_83()//Position - 0x2A1D
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

void func_84()//Position - 0x2A4E
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

int func_85()//Position - 0x2AE3
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

void func_86()//Position - 0x2B7C
{
	if (func_27(14))
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
		Global_38B1 = func_25();
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

void func_87()//Position - 0x2C1E
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

bool func_88(int iParam0, int iParam1)//Position - 0x2C75
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

void func_89(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2CB0
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

char* func_90()//Position - 0x2D06
{
	char* sVar0;
	
	switch (func_76())
	{
		case 33:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP1_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP1_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP1_TENDC";
					break;
			}
			break;
		
		case 34:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP2_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP2_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP2_TENDC";
					break;
			}
			break;
		
		case 36:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP4_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP4_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP4_TENDC";
					break;
			}
			break;
		
		case 37:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP5_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP5_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP5_TENDC";
					break;
			}
			break;
	}
	return sVar0;
}

int func_91()//Position - 0x2E0E
{
	int iVar0;
	
	switch (func_25())
	{
		case 0:
			iVar0 = 5;
			break;
		
		case 1:
			iVar0 = 9;
			break;
		
		case 2:
			iVar0 = 8;
			break;
	}
	return iVar0;
}

void func_92(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2E47
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

void func_93(int iParam0, int iParam1)//Position - 0x2EE2
{
	if (iParam0 == 146 || iParam0 == 4294967295)
	{
		return;
	}
	if (Global_19E56.f_2361.f_63.f_3A[iParam0] == iParam1)
	{
		return;
	}
	Global_19E56.f_2361.f_63.f_3A[iParam0] = iParam1;
}

void func_94(bool bParam0)//Position - 0x2F27
{
	if (bParam0)
	{
		func_74(1527885205, 0, func_25(), 23, 3, 6000, 6000, 4294967295, 0, 4294967295, 0);
	}
	else if (!func_96(3))
	{
		func_74(4070275669, 0, func_25(), 23, 3, 6000, 6000, 4294967295, 50, 4294967295, 0);
	}
	else
	{
		func_74(4070275669, 0, func_25(), 23, 3, 6000, 6000, 4294967295, 0, 4294967295, 0);
	}
}

int func_95()//Position - 0x2F98
{
	if ((func_96(41) && func_96(3)) && func_96(21))
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0)//Position - 0x2FC3
{
	if (iParam0 == 94 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_19E56.f_2361.f_14A[iParam0 /*6*/];
}

int func_97()//Position - 0x2FEF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 33;
	while (iVar1 <= 37)
	{
		if (func_96(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_98(45))
	{
		iVar0++;
	}
	if (iVar0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_98(int iParam0)//Position - 0x3037
{
	if (iParam0 == 146 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_19E56.f_2361.f_63.f_3A[iParam0];
}

void func_99(char* sParam0, int iParam1, int iParam2)//Position - 0x3064
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

bool func_100(char* sParam0, int iParam1, int iParam2)//Position - 0x307D
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_101(int iParam0, vector3 vParam1, float fParam2)//Position - 0x309B
{
	return SYSTEM::VDIST2(unk_0x8000C77B5F336760(iParam0, true), vParam1) <= (fParam2 * fParam2);
}

void func_102()//Position - 0x30B8
{
	func_209(&iLocal_200, &iLocal_201, &iLocal_71, &iLocal_183, &iLocal_182, vLocal_186, Local_199, 0, 1090519040);
	func_208();
	func_149();
	switch (iLocal_69)
	{
		case 0:
			if (func_116(iLocal_68, bLocal_28))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 0)
				{
					if (func_36(iLocal_200))
					{
						if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_200, 0))
						{
							func_115("PRA_LEVVEH", &iLocal_181);
						}
					}
				}
				iLocal_69 = 1;
			}
			break;
		
		case 1:
			func_114(&iLocal_182, vLocal_186, &iLocal_70, iLocal_71, &iLocal_181, &iLocal_195);
			if (func_107(iLocal_200, vLocal_186, &iLocal_182, iLocal_71, iLocal_70, &iLocal_193, &iLocal_196, &iLocal_192, &iLocal_191, &iLocal_181, 1090519040))
			{
				if (!func_106())
				{
					if (func_66(&uLocal_72, &cLocal_370, &uLocal_205))
					{
						func_62();
						func_57();
					}
				}
				else
				{
					func_93(46, 1);
					func_62();
					func_104(0);
				}
			}
			break;
		
		case 3:
			if (func_36(Local_199))
			{
				if (!PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), Local_199, 0))
				{
					PED::SET_PED_INTO_VEHICLE(AUDIO::_0x0626A247D2405330(), Local_199, 4294967295);
				}
				else
				{
					func_103(Local_199, vLocal_186, 126.0705f, 0, 1);
					func_39(1, 1, 1);
					iLocal_69 = 1;
				}
			}
			break;
	}
}

int func_103(int iParam0, vector3 vParam1, float fParam2, bool bParam3, int iParam4)//Position - 0x320B
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_10(iParam0))
	{
		if (bParam3 == 1)
		{
			fVar1 = 0f;
			bVar0 = MISC::GET_GROUND_Z_FOR_3D_COORD(vParam1, &fVar1, 0, 0);
			if (bVar0)
			{
				vParam1.z = fVar1;
			}
		}
		ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, 1, false, 0, iParam4);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam2);
		if (bParam3)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

void func_104(bool bParam0)//Position - 0x3267
{
	func_105(iLocal_68);
	iLocal_178 = iLocal_68;
	if (!bParam0)
	{
		iLocal_68 = iLocal_178 + 1;
	}
	else if (iLocal_178 > 0)
	{
		iLocal_68 = (iLocal_178 - 1);
	}
	iLocal_181 = 0;
	iLocal_69 = 0;
}

void func_105(int iParam0)//Position - 0x32A4
{
	switch (iParam0)
	{
		case 0:
			break;
	}
}

int func_106()//Position - 0x32BC
{
	if (func_97())
	{
		if ((func_96(74) || func_96(75)) && func_95())
		{
			return 1;
		}
	}
	return 0;
}

int func_107(int iParam0, vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10)//Position - 0x32EE
{
	float fVar0;
	
	if ((iParam3 == 1 || iParam3 == 2) || iParam3 == 3)
	{
		if (iParam4 == 0)
		{
			if (func_36(iParam0))
			{
				if (!ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
				{
					func_115(func_113(func_76()), iParam9);
				}
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vParam1, fParam10, fParam10, 2f, false, true, 2))
			{
				ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vParam1, fParam10, fParam10, 2f, true, true, 2);
				if (func_100(func_113(func_76()), 0, 0))
				{
					HUD::CLEAR_THIS_PRINT(func_113(func_76()));
				}
				*iParam5 = 1;
				func_111(iParam2, vParam1, 1);
			}
			else
			{
				if (*iParam5)
				{
					fVar0 = (fParam10 / 2f);
					if (func_101(AUDIO::_0x0626A247D2405330(), vParam1, fVar0))
					{
						*iParam5 = 0;
						func_110(1077936128, 1);
					}
				}
				func_7(iParam2);
			}
		}
	}
	else if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, fParam10, fParam10, 2f, false, true, 2))
	{
		if (*iParam7 == 4294967295)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 2);
			return 1;
		}
		if (!*iParam8)
		{
			if (func_100(func_113(func_76()), 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			*iParam7 = MISC::GET_GAME_TIMER();
			*iParam8 = 1;
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 2);
		}
		else if ((MISC::GET_GAME_TIMER() - *iParam7) > 3000)
		{
			return 1;
		}
	}
	else
	{
		if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0) == 2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 1);
		}
		if (!*iParam6)
		{
			if (func_100(func_109(func_76(), 0), 0, 0))
			{
				HUD::CLEAR_THIS_PRINT(func_109(func_76(), 0));
			}
			if (!func_100(func_108(func_76()), 0, 0))
			{
				func_99(func_108(func_76()), 7500, 0);
				*iParam6 = 1;
			}
		}
		*iParam5 = 1;
	}
	return 0;
}

char* func_108(int iParam0)//Position - 0x3498
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_RETVEH";
			break;
		
		case 34:
			sVar0 = "PRB_RETVEH";
			break;
		
		case 78:
			sVar0 = "PR_RETVEH";
			break;
		
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_RETVEH";
			break;
	}
	return sVar0;
}

char* func_109(int iParam0, bool bParam1)//Position - 0x34F1
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_TAKBACK";
			break;
		
		case 34:
			sVar0 = "PRB_TAKBACK";
			break;
		
		case 78:
			sVar0 = "PR_TAKBACK";
			break;
		
		case 80:
		case 81:
		case 82:
			if (!bParam1)
			{
				sVar0 = "PRF_TAKBACK";
			}
			else
			{
				sVar0 = "PRF_GARAGE";
			}
			break;
	}
	return sVar0;
}

int func_110(float fParam0, int iParam1)//Position - 0x3559
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		return 1;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 4294967295, 0) == AUDIO::_0x0626A247D2405330())
		{
			if (!VEHICLE::IS_VEHICLE_STOPPED(iVar0))
			{
				VEHICLE::_SET_VEHICLE_HALT(iVar0, fParam0, iParam1, 0);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (PED::IS_PED_STOPPED(AUDIO::_0x0626A247D2405330()))
	{
		return 1;
	}
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_111(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x35DD
{
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		*iParam0 = func_112(vParam1, 5, bParam2);
	}
}

int func_112(vector3 vParam0, int iParam1, bool bParam2)//Position - 0x35FE
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_PRIORITY(iVar0, iParam1);
	HUD::SET_BLIP_SCALE(iVar0, 1f);
	HUD::SET_BLIP_ROUTE(iVar0, bParam2);
	return iVar0;
}

char* func_113(int iParam0)//Position - 0x362C
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_LEVVEH";
			break;
		
		case 34:
			sVar0 = "PRB_LEVVEH";
			break;
		
		case 78:
			sVar0 = "PR_LEVVEH";
			break;
		
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_LEAVE";
			break;
	}
	return sVar0;
}

void func_114(int iParam0, vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x3685
{
	switch (*iParam2)
	{
		case 0:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0)
			{
				*iParam2 = 1;
			}
			break;
		
		case 1:
			func_7(iParam0);
			if ((iParam3 == 1 || iParam3 == 2) || iParam3 == 3)
			{
				HUD::CLEAR_PRINTS();
				func_99("LOSE_WANTED", 7500, 0);
				*iParam2 = 2;
			}
			break;
		
		case 2:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 0)
			{
				HUD::CLEAR_PRINTS();
				if ((iParam3 == 1 || iParam3 == 2) || iParam3 == 3)
				{
					func_115(func_109(func_76(), 0), iParam4);
					func_111(iParam0, vParam1, 1);
				}
				else if (iParam3 == 0 && !*iParam5)
				{
					func_99(func_108(func_76()), 7500, 0);
					*iParam5 = 1;
				}
				*iParam2 = 0;
			}
			break;
	}
}

void func_115(char* sParam0, int iParam1)//Position - 0x3765
{
	if (!*iParam1)
	{
		func_99(sParam0, 7500, 0);
		*iParam1 = 1;
	}
}

int func_116(int iParam0, bool bParam1)//Position - 0x3782
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_28 = false;
				func_39(1, 1, 1);
			}
			else if (func_143(1, vLocal_185, 0))
			{
				if (func_142())
				{
					func_141(33);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("TRASH"), true);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("TOWTRUCK"), true);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("s_m_y_garbage"), true);
					iLocal_68 = 2;
					func_7(&iLocal_182);
					func_139(&uLocal_56, 0, 0);
					func_138(190, 1244.338f, -339.3197f, 68.0823f);
					func_136();
					BRAIN::SET_SCENARIO_TYPE_ENABLED("DRIVE", 0);
					BRAIN::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", 0);
					BRAIN::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					BRAIN::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
				else if (((func_143(2, Local_199.f_1, Local_199.f_4) && func_143(3, Local_197.f_1, Local_197.f_4)) && func_143(4, Local_198.f_1, Local_198.f_4)) && func_135(0))
				{
					func_136();
					func_141(33);
					if (func_335(Local_197))
					{
						func_134(Local_197);
					}
					if (func_335(Local_198))
					{
						func_133(Local_198);
					}
					func_132(Local_199);
					if (func_335(Local_198) && func_335(Local_197))
					{
						func_121(iLocal_187, 1, 0, 1);
					}
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("TRASH"), true);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("TOWTRUCK"), true);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("s_m_y_garbage"), true);
					if (HUD::GET_BLIP_FROM_ENTITY(Local_199) != 0)
					{
						iVar0 = HUD::GET_BLIP_FROM_ENTITY(Local_199);
						unk_0xB5AD2E78802711D6(1);
						func_7(&iVar0);
						unk_0xB5AD2E78802711D6(0);
					}
					func_119(&iLocal_182, Local_199, 1);
					func_138(190, 1244.338f, -339.3197f, 68.0823f);
					BRAIN::SET_SCENARIO_TYPE_ENABLED("DRIVE", 0);
					BRAIN::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", 0);
					BRAIN::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					BRAIN::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				if ((func_143(2, Local_199.f_1, Local_199.f_4) && func_143(3, Local_197.f_1, Local_197.f_4)) && func_143(4, Local_198.f_1, Local_198.f_4))
				{
					func_118(AUDIO::_0x0626A247D2405330(), 1197.861f, -353.011f, 68.0929f, 278.9647f);
					func_117();
					bLocal_28 = false;
					BRAIN::SET_SCENARIO_TYPE_ENABLED("DRIVE", 0);
					BRAIN::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", 0);
					BRAIN::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					BRAIN::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
					func_39(1, 1, 1);
				}
			}
			else
			{
				func_136();
				return 1;
			}
			break;
		
		case 2:
			if (bParam1)
			{
				if (func_143(2, Local_199.f_1, Local_199.f_4))
				{
					func_117();
					func_136();
					PED::SET_PED_INTO_VEHICLE(AUDIO::_0x0626A247D2405330(), Local_199, 4294967295);
					bLocal_28 = false;
					func_39(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (bParam1)
			{
				if (func_143(2, vLocal_186, Local_199.f_4))
				{
					func_117();
					PED::SET_PED_INTO_VEHICLE(AUDIO::_0x0626A247D2405330(), Local_199, 4294967295);
					func_136();
					bLocal_28 = false;
					func_39(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_117()//Position - 0x3A98
{
	if (iLocal_68 == 1)
	{
		func_134(Local_197);
		func_133(Local_198);
		func_132(Local_199);
		func_121(iLocal_187, 1, 0, 1);
	}
	iLocal_203 = 0;
	iLocal_195 = 0;
	iLocal_196 = 0;
	iLocal_191 = 0;
	iLocal_192 = 0;
	iLocal_193 = 0;
}

void func_118(int iParam0, vector3 vParam1, float fParam2)//Position - 0x3ADE
{
	if (func_335(iParam0))
	{
		NETWORK::_0x5E3AA4CA2B6FB0EE(iParam0);
	}
	func_103(iParam0, vParam1, fParam2, 0, 1);
}

void func_119(int iParam0, int iParam1, bool bParam2)//Position - 0x3B04
{
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		*iParam0 = func_120(iParam1, bParam2, 5);
	}
}

int func_120(int iParam0, bool bParam1, int iParam2)//Position - 0x3B23
{
	int iVar0;
	
	iVar0 = 0;
	if (func_10(iParam0))
	{
		iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		HUD::SET_BLIP_PRIORITY(iVar0, iParam2);
		HUD::SET_BLIP_SCALE(iVar0, 1f);
	}
	return iVar0;
}

void func_121(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3B58
{
	int iVar0;
	
	iLocal_41 = iParam0;
	bLocal_50 = iParam1;
	bLocal_49 = iParam2;
	bLocal_51 = iParam3;
	Local_45[0 /*11*/].f_1 = 0;
	Local_45[1 /*11*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_41 - 1))
	{
		Local_46[iVar0 /*25*/].f_12 = 0;
		iVar0++;
	}
	fLocal_47 = 0f;
	func_123();
	Local_45[1 /*11*/].f_7 = 3;
	Local_45[1 /*11*/].f_5 = 0;
	Local_45[1 /*11*/].f_A = 1;
	Local_45[1 /*11*/].f_2 = 1500;
	Local_45[1 /*11*/].f_3 = 500;
	Local_45[0 /*11*/].f_5 = 0;
	Local_45[0 /*11*/].f_A = 0;
	Local_45[0 /*11*/].f_2 = 1000;
	Local_45[0 /*11*/].f_3 = 100;
	PED::ADD_RELATIONSHIP_GROUP("Enemies", &iLocal_40);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_45[0 /*11*/], iLocal_40);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_45[1 /*11*/], iLocal_40);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_45[0 /*11*/], 1, 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_45[1 /*11*/], 1, 0);
	func_122(1.9f, 1.9f, 8f, 0f, 0f, 0f);
}

void func_122(vector3 vParam0, vector3 vParam1)//Position - 0x3C45
{
	Local_42.f_8 = { vParam0 };
	Local_42.f_B = { vParam1 };
	Local_42.f_1 = 4;
}

void func_123()//Position - 0x3C66
{
	if (!PED::IS_PED_IN_VEHICLE(Local_45[0 /*11*/], iLocal_43, 0))
	{
		BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_45[0 /*11*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_131(1)), 1f, 4294967295, 1048576000, 0, 1193033728);
		Local_45[0 /*11*/].f_7 = 1;
	}
	else
	{
		func_124(1);
	}
}

void func_124(bool bParam0)//Position - 0x3CAF
{
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_43, 0, 0))
	{
		func_125(bParam0);
		if (iLocal_48 != (iLocal_41 - 1))
		{
			if (iLocal_48 == 4)
			{
				BRAIN::TASK_VEHICLE_GOTO_NAVMESH(Local_45[0 /*11*/], iLocal_43, Local_46[iLocal_48 /*25*/], 15f, 2883755, Local_46[iLocal_48 /*25*/].f_6);
			}
			else
			{
				BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(Local_45[0 /*11*/], iLocal_43, Local_46[iLocal_48 /*25*/], 15f, 0, 0, 2883755, Local_46[iLocal_48 /*25*/].f_6, Local_46[iLocal_48 /*25*/].f_7);
			}
			Local_45[0 /*11*/].f_8 = Local_45[0 /*11*/].f_7;
			Local_45[0 /*11*/].f_7 = 4;
		}
		else
		{
			BRAIN::TASK_VEHICLE_DRIVE_WANDER(Local_45[0 /*11*/], iLocal_43, 15f, 786599);
			Local_45[0 /*11*/].f_8 = Local_45[0 /*11*/].f_7;
			Local_45[0 /*11*/].f_7 = 10;
		}
	}
	else
	{
		Local_45[0 /*11*/].f_8 = Local_45[0 /*11*/].f_7;
		Local_45[0 /*11*/].f_7 = 7;
	}
}

void func_125(bool bParam0)//Position - 0x3D91
{
	if (iLocal_48 != 4294967295)
	{
		if (!func_130(Local_46[iLocal_48 /*25*/].f_B) && !func_130(Local_46[iLocal_48 /*25*/].f_E))
		{
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_46[iLocal_48 /*25*/].f_B - Local_46[iLocal_48 /*25*/].f_E, Local_46[iLocal_48 /*25*/].f_B + Local_46[iLocal_48 /*25*/].f_E, true, 1);
		}
	}
	if (!bParam0)
	{
		func_128();
	}
	else
	{
		iLocal_48 = func_126();
	}
	if (iLocal_48 != 4294967295)
	{
		if (!func_130(Local_46[iLocal_48 /*25*/].f_B) && !func_130(Local_46[iLocal_48 /*25*/].f_E))
		{
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_46[iLocal_48 /*25*/].f_B - Local_46[iLocal_48 /*25*/].f_E, Local_46[iLocal_48 /*25*/].f_B + Local_46[iLocal_48 /*25*/].f_E, false, 1);
		}
	}
}

int func_126()//Position - 0x3E73
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4[21];
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	
	if (func_36(iLocal_43))
	{
		vVar1 = { unk_0x8000C77B5F336760(iLocal_43, true) };
		iVar2 = 0;
		while (iVar2 <= (iLocal_41 - 1))
		{
			fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, Local_46[iVar2 /*25*/], true);
			if (!func_130(Local_46[iVar2 /*25*/]) && fVar5 > 25f)
			{
				fVar4[iVar2] = fVar5;
			}
			else
			{
				fVar4[iVar2] = -1f;
			}
			iVar2++;
		}
		fVar6 = fVar4[0];
		iVar2 = 0;
		while (iVar2 <= (iLocal_41 - 1))
		{
			if (fVar4[iVar2] != -1f)
			{
				if (fVar4[iVar2] < fVar6)
				{
					fVar6 = fVar4[iVar2];
					iVar0 = iVar2;
				}
			}
			iVar2++;
		}
		fVar7 = func_127(Local_46[iVar0 /*25*/] - vVar1, ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_43));
		iVar3 = iVar0;
		iVar8 = 0;
		while (fVar7 < 0f && iVar8 < 40)
		{
			iVar3++;
			if (iVar3 >= 21)
			{
				iVar3 = 0;
			}
			vVar1 = { unk_0x8000C77B5F336760(iLocal_43, true) };
			fVar7 = func_127(Local_46[iVar3 /*25*/] - vVar1, ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_43));
			iVar8++;
		}
		if (iVar8 >= 40)
		{
			iVar3 = (iLocal_41 - 1);
		}
	}
	iVar0 = iVar3;
	return iVar0;
}

float func_127(vector3 vParam0, vector3 vParam1)//Position - 0x3FAC
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

void func_128()//Position - 0x3FCD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (bLocal_50)
	{
		while (Local_46[iLocal_48 /*25*/].f_12 && iVar0 != 4294967295)
		{
			iLocal_48++;
			if (iLocal_48 >= (iLocal_41 - 1))
			{
				iVar0 = 4294967295;
				iLocal_48 = (iLocal_41 - 1);
			}
		}
		if (iLocal_48 == (iLocal_41 - 1))
		{
			if (bLocal_49)
			{
				iLocal_48 = 0;
				iVar0 = 0;
				while (iVar0 <= (iLocal_41 - 1))
				{
					Local_46[iVar0 /*25*/].f_12 = 0;
					iVar0++;
				}
			}
			else
			{
				iLocal_48 = (iLocal_41 - 1);
				return;
			}
		}
	}
	else
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 <= (iLocal_41 - 1))
		{
			if (Local_46[iVar0 /*25*/].f_12)
			{
				iVar1++;
			}
			iVar0++;
		}
		if (iVar1 == (iLocal_41 - 1))
		{
			iLocal_48 = (iLocal_41 - 1);
		}
		else if (iVar1 == iLocal_41)
		{
			if (bLocal_49)
			{
				iVar0 = 0;
				while (iVar0 <= (iLocal_41 - 1))
				{
					Local_46[iVar0 /*25*/].f_12 = 0;
					iVar0++;
				}
				iLocal_48 = func_129();
			}
			else
			{
				iLocal_48 = 4294967295;
				return;
			}
		}
		else
		{
			iLocal_48 = func_129();
		}
	}
}

int func_129()//Position - 0x40D7
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, (iLocal_41 - 1));
	while (Local_46[iVar0 /*25*/].f_12)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, (iLocal_41 - 1));
	}
	return iVar0;
}

int func_130(vector3 vParam0)//Position - 0x4105
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_131(bool bParam0)//Position - 0x412F
{
	vector3 vVar0;
	int iVar1;
	
	if (!bParam0)
	{
		iVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_43, "wheel_rf");
	}
	else
	{
		iVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_43, "wheel_lf");
	}
	vVar0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_43, iVar1) };
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_43, vVar0) };
	if (!bParam0)
	{
		vVar0 = { vVar0 + Vector(0.5f, 0f, 1f) };
	}
	else
	{
		vVar0 = { vVar0 + Vector(0.5f, 0f, -1f) };
	}
	return vVar0;
}

void func_132(int iParam0)//Position - 0x419F
{
	if (func_36(iParam0))
	{
		iLocal_43 = iParam0;
	}
}

void func_133(int iParam0)//Position - 0x41B7
{
	if (func_335(iParam0))
	{
		Local_45[1 /*11*/] = iParam0;
	}
}

void func_134(int iParam0)//Position - 0x41D2
{
	if (func_335(iParam0))
	{
		Local_45[0 /*11*/] = iParam0;
	}
}

int func_135(bool bParam0)//Position - 0x41ED
{
	STREAMING::REQUEST_ANIM_DICT("missfbi4prepp1");
	STREAMING::REQUEST_ANIM_SET("missfbi4prepp1_garbageman");
	if (bParam0)
	{
		while (!STREAMING::HAS_ANIM_DICT_LOADED("missfbi4prepp1") && !STREAMING::HAS_ANIM_SET_LOADED("missfbi4prepp1_garbageman"))
		{
			SYSTEM::WAIT(0);
		}
		return 1;
	}
	else if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi4prepp1") && STREAMING::HAS_ANIM_SET_LOADED("missfbi4prepp1_garbageman"))
	{
		return 1;
	}
	return 0;
}

void func_136()//Position - 0x424A
{
	func_137(&uLocal_205);
}

void func_137(var uParam0)//Position - 0x4259
{
	int iVar0;
	char* sVar1;
	
	switch (func_25())
	{
		case 0:
			iVar0 = 0;
			sVar1 = "MICHAEL";
			break;
		
		case 1:
			iVar0 = 1;
			sVar1 = "FRANKLIN";
			break;
		
		case 2:
			iVar0 = 2;
			sVar1 = "TREVOR";
			break;
	}
	func_92(uParam0, iVar0, AUDIO::_0x0626A247D2405330(), sVar1, 0, 1);
}

void func_138(int iParam0, vector3 vParam1)//Position - 0x42AF
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if ((vParam1.x == Global_64EA[iVar0 /*23*/][0 /*3*/] && vParam1.y == Global_64EA[iVar0 /*23*/][0 /*3*/].f_1) && vParam1.z == Global_64EA[iVar0 /*23*/][0 /*3*/].f_2)
	{
		return;
	}
	Global_64E7 = 1;
	MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 18);
	Global_64EA[iVar0 /*23*/][0 /*3*/] = { vParam1 };
	Global_7C8C = 1;
}

void func_139(var uParam0, int iParam1, int iParam2)//Position - 0x4343
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11E1, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(iParam2);
		GRAPHICS::_STOP_SCREEN_EFFECT("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_B)
		{
			GRAPHICS::_START_SCREEN_EFFECT("FocusOut", 0, 0);
			unk_0x1190AB7024CBD8CB(4294967295, "FocusOut", "HintCamSounds", 1);
			uParam0->f_B = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = 4294967295;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_140(uParam0->f_3))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_140(sVar0))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
	}
}

int func_140(char* sParam0)//Position - 0x4420
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_141(int iParam0)//Position - 0x4433
{
	if (Global_16089 != 4294967295)
	{
		if (iParam0 == Global_16089)
		{
			Global_1608D = 1;
			return;
		}
	}
}

int func_142()//Position - 0x4457
{
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), joaat("TRASH")))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), true, 0);
			iLocal_200 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			if (func_36(iLocal_200))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_143(int iParam0, vector3 vParam1, float fParam2)//Position - 0x44AA
{
	switch (iParam0)
	{
		case 0:
			if (func_148(vParam1, vLocal_185, 1056964608, 0) && fParam2 == 0f)
			{
				return 1;
			}
			break;
		
		case 1:
			HUD::REQUEST_ADDITIONAL_TEXT(sLocal_180, 0);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_36(Global_15EE0[0]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15EE0[0], true, 1);
				Local_199 = Global_15EE0[0];
				if (func_36(Local_199))
				{
					func_35(Local_199, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_199, true);
					ENTITY::_SET_ENTITY_SOMETHING(Local_199, 1);
					return 1;
				}
			}
			else if (func_147(&Local_199, Local_199.f_5, Local_199.f_1, Local_199.f_4, 1))
			{
				func_35(Local_199, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_199, true);
				ENTITY::_SET_ENTITY_SOMETHING(Local_199, 1);
				return 1;
			}
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Global_15EE0.f_9[0]))
			{
				if (!PED::IS_PED_DEAD_OR_DYING(Global_15EE0.f_9[0], 1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15EE0.f_9[0], true, 1);
					Local_197 = Global_15EE0.f_9[0];
					if (func_335(Local_197))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_197, true);
						PED::SET_PED_CONFIG_FLAG(Local_197, 170, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_197, 65536, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_197, 50, true);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_144(&Local_197, Local_197.f_5, Local_197.f_1, Local_197.f_4, 1, 0, 1, 1))
			{
				if (func_36(Local_199))
				{
					PED::SET_PED_INTO_VEHICLE(Local_197, Local_199, 4294967295);
					ENTITY::SET_ENTITY_HEALTH(Local_197, true);
					PED::SET_PED_CONFIG_FLAG(Local_197, 170, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_197, 65536, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_197, 50, true);
					return 1;
				}
			}
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(Global_15EE0.f_9[1]))
			{
				if (!PED::IS_PED_DEAD_OR_DYING(Global_15EE0.f_9[1], 1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15EE0.f_9[1], true, 1);
					Local_198 = Global_15EE0.f_9[1];
					if (func_335(Local_198))
					{
						PED::SET_PED_CONFIG_FLAG(Local_198, 170, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_198, 65536, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_198, 50, true);
						ENTITY::SET_ENTITY_HEALTH(Local_198, true);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_198, 1, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_144(&Local_198, Local_198.f_5, Local_198.f_1, Local_198.f_4, 1, 0, 1, 1))
			{
				if (func_36(Local_199))
				{
					PED::SET_PED_INTO_VEHICLE(Local_198, Local_199, 0);
					PED::SET_PED_CONFIG_FLAG(Local_198, 170, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_198, 65536, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_198, 50, true);
					ENTITY::SET_ENTITY_HEALTH(Local_198, true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_198, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_144(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x4770
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (func_146(iParam1, "Loading", 0))
		{
			*iParam0 = PED::CREATE_PED(26, iParam1, vParam2, fParam3, 1, true);
			if (func_335(*iParam0))
			{
				if (bParam5)
				{
					unk_0x346478B12F69D4E3(*iParam0, true);
				}
				if (bParam6)
				{
					ENTITY::SET_ENTITY_HEALTH(*iParam0, bParam6);
				}
				if (!bParam7)
				{
					PED::SET_PED_CAN_BE_TARGETTED(*iParam0, bParam7);
				}
				if (bParam4)
				{
					func_145(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_335(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_145(int iParam0, bool bParam1)//Position - 0x47FA
{
	if (bParam1)
	{
		if (STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
	else
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
	}
}

int func_146(int iParam0, char* sParam1, int iParam2)//Position - 0x481F
{
	STREAMING::REQUEST_MODEL(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && iParam2 != 4294967295)
	{
	}
	if (STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0x484E
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (func_146(iParam1, "Loading", 0))
		{
			*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam3, 1, 1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, 0);
				}
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
				if (bParam4)
				{
					func_145(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (func_36(*iParam0))
		{
			ENTITY::SET_ENTITY_COORDS(*iParam0, vParam2, 1, false, 0, 1);
			ENTITY::SET_ENTITY_HEADING(*iParam0, fParam3);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, 0);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_148(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x4901
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (MISC::ABSF((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (MISC::ABSF((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (MISC::ABSF((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (MISC::ABSF((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_149()//Position - 0x497C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		func_150(&(Local_45[iVar0 /*11*/]), iVar0);
		iVar0++;
	}
}

void func_150(int iParam0, int iParam1)//Position - 0x49A4
{
	if (func_335(*iParam0))
	{
		func_196(iParam0, iParam1, 0);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 3))
		{
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "missfbi4prepp1", "_bag_drop_garbage_man") >= 0.172f)
			{
				if (func_10(Local_46[iLocal_48 /*25*/].f_11) && ENTITY::IS_ENTITY_ATTACHED(Local_46[iLocal_48 /*25*/].f_11))
				{
					PED::RESET_PED_MOVEMENT_CLIPSET(*iParam0, 1048576000);
					PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*iParam0);
					if (iLocal_48 <= 20 && iLocal_48 != 4294967295)
					{
						Local_46[iLocal_48 /*25*/].f_12 = 1;
						iParam0->f_9 = 0;
					}
					ENTITY::DETACH_ENTITY(Local_46[iLocal_48 /*25*/].f_11, 1, 0);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_46[iLocal_48 /*25*/].f_11, 1, ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0), 0, 1, 1, 0);
				}
			}
		}
		switch (iParam0->f_5)
		{
			case 0:
				if (iParam1 == 0)
				{
					func_193();
					func_192(iParam0);
				}
				func_179(iParam0);
				break;
			
			case 1:
				func_152(iParam0);
				break;
		}
	}
	else
	{
		if (func_10(Local_46[iLocal_48 /*25*/].f_11))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_46[iLocal_48 /*25*/].f_11))
			{
				ENTITY::DETACH_ENTITY(Local_46[iLocal_48 /*25*/].f_11, 1, 0);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_46[iLocal_48 /*25*/].f_11, 1, ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0), 0, 1, 1, 0);
			}
		}
		func_7(&(iParam0->f_4));
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (!func_151(AUDIO::_0x0626A247D2405330(), *iParam0, 150f, 1) && !bLocal_52)
			{
				func_5(iParam0, 1, 0, 1);
			}
		}
	}
}

bool func_151(int iParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x4B22
{
	return SYSTEM::VDIST2(unk_0x8000C77B5F336760(iParam0, bParam3), unk_0x8000C77B5F336760(iParam1, bParam3)) <= (fParam2 * fParam2);
}

void func_152(int iParam0)//Position - 0x4B44
{
	var uVar0;
	var uVar1;
	
	switch (iParam0->f_6)
	{
		case 5:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_3)
			{
				if (func_178(*iParam0, 780511057))
				{
					NETWORK::_0x5E3AA4CA2B6FB0EE(*iParam0);
				}
				BRAIN::TASK_SMART_FLEE_PED(*iParam0, AUDIO::_0x0626A247D2405330(), 30f, 4294967295, 0, 0);
				iParam0->f_6 = 6;
				iParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 21:
			if (WEAPON::IS_PED_ARMED(AUDIO::_0x0626A247D2405330(), 6))
			{
				if (func_171(*iParam0, AUDIO::_0x0626A247D2405330(), 1126825984, 1, 250, 7))
				{
					func_170(iParam0, 1);
					return;
				}
			}
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_3)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
				{
					BRAIN::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*iParam0, AUDIO::_0x0626A247D2405330(), 8f, -1f, 10f, 0);
				}
				else
				{
					BRAIN::OPEN_SEQUENCE_TASK(&uVar0);
					BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					BRAIN::TASK_COMBAT_PED(0, AUDIO::_0x0626A247D2405330(), 0, 16);
					CUTSCENE::_0x8D9DF6ECA8768583(uVar0);
					BRAIN::TASK_PERFORM_SEQUENCE(*iParam0, uVar0);
					BRAIN::CLEAR_SEQUENCE_TASK(&uVar0);
				}
				if (!HUD::DOES_BLIP_EXIST(iParam0->f_4))
				{
					iParam0->f_4 = func_167(*iParam0, 1, 145);
				}
				iParam0->f_6 = 22;
				iParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 10:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_3)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
				{
					PED::SET_PED_RESET_FLAG(*iParam0, 120, true);
					iParam0->f_6 = 12;
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (!func_178(*iParam0, 474215631))
				{
					if (func_178(*iParam0, 780511057))
					{
						NETWORK::_0x5E3AA4CA2B6FB0EE(*iParam0);
					}
					BRAIN::TASK_COWER(*iParam0, 4294967295);
					iParam0->f_6 = 12;
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_3)
			{
				BRAIN::TASK_USE_MOBILE_PHONE(*iParam0, 1, 1);
				BRAIN::TASK_SMART_FLEE_PED(*iParam0, AUDIO::_0x0626A247D2405330(), 500f, 4294967295, 0, 1);
				iParam0->f_1 = MISC::GET_GAME_TIMER();
				iParam0->f_6 = 4;
				iParam0->f_5 = 1;
			}
			break;
		
		case 11:
			func_166(iParam0);
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > 5000)
			{
				if (!func_178(*iParam0, 713668775))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_45[func_165(iParam0->f_A) /*11*/]))
					{
						BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, vLocal_54, 1f, 4294967295, 2f, 0, 1193033728);
					}
				}
				iParam0->f_1 = MISC::GET_GAME_TIMER();
				iParam0->f_6 = 23;
				iParam0->f_5 = 1;
			}
			break;
		
		case 18:
			if (!func_178(*iParam0, 2277090178))
			{
				BRAIN::OPEN_SEQUENCE_TASK(&uVar1);
				if (func_164(unk_0x8000C77B5F336760(*iParam0, true), unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true)) > 1.5f)
				{
					BRAIN::TASK_TURN_PED_TO_FACE_COORD(0, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), 0);
				}
				BRAIN::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				CUTSCENE::_0x8D9DF6ECA8768583(uVar1);
				BRAIN::TASK_PERFORM_SEQUENCE(*iParam0, uVar1);
				BRAIN::CLEAR_SEQUENCE_TASK(&uVar1);
				iParam0->f_5 = 1;
				iParam0->f_6 = 20;
				iParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 19:
			func_166(iParam0);
			if (!func_178(*iParam0, 2277090178))
			{
				BRAIN::TASK_START_SCENARIO_IN_PLACE(*iParam0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				iParam0->f_5 = 1;
				iParam0->f_6 = 20;
				iParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 1:
			if (!PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_43, 0))
			{
				func_162(iParam0);
			}
			break;
		
		case 2:
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(*iParam0) && (MISC::GET_GAME_TIMER() - iParam0->f_1) > 3000)
			{
				func_162(iParam0);
			}
			break;
		
		case 4:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > 8000)
			{
				BRAIN::TASK_SMART_FLEE_PED(*iParam0, AUDIO::_0x0626A247D2405330(), 500f, 4294967295, 0, 0);
				if (!iLocal_53)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), 2, 0);
						HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
						iLocal_53 = 1;
					}
				}
				BRAIN::TASK_USE_MOBILE_PHONE(*iParam0, 0, 1);
				iParam0->f_1 = MISC::GET_GAME_TIMER();
				iParam0->f_6 = 8;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 1)
			{
				BRAIN::TASK_USE_MOBILE_PHONE(*iParam0, 0, 1);
				iParam0->f_1 = MISC::GET_GAME_TIMER();
				iParam0->f_6 = 8;
			}
			break;
		
		case 6:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_2)
			{
				if (!func_151(*iParam0, AUDIO::_0x0626A247D2405330(), 15f, 1))
				{
					func_7(&(iParam0->f_4));
					iParam0->f_6 = 7;
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 7:
			if (PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_43, 1))
			{
				if (iParam0->f_6 != 4 && iParam0->f_6 != 1)
				{
					if (func_160())
					{
						if (func_335(*iParam0))
						{
							NETWORK::_0x5E3AA4CA2B6FB0EE(*iParam0);
							BRAIN::TASK_SMART_FLEE_PED(*iParam0, AUDIO::_0x0626A247D2405330(), 500f, 4294967295, 0, 1);
							iParam0->f_6 = 1;
						}
					}
				}
				if (!func_151(*iParam0, AUDIO::_0x0626A247D2405330(), 120f, 1))
				{
					func_5(iParam0, 1, 0, 1);
				}
			}
			else
			{
				func_162(iParam0);
			}
			break;
		
		case 8:
			if (!func_151(*iParam0, AUDIO::_0x0626A247D2405330(), 120f, 1))
			{
				func_5(iParam0, 1, 0, 1);
			}
			break;
		
		case 9:
			if (PED::IS_PED_BEING_JACKED(*iParam0))
			{
				func_170(iParam0, 1);
				return;
			}
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_2 || !func_178(*iParam0, 2104565373))
			{
				func_157(iParam0);
			}
			break;
		
		case 12:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				BRAIN::TASK_SMART_FLEE_PED(*iParam0, AUDIO::_0x0626A247D2405330(), 500f, 4294967295, 0, 1);
				iParam0->f_6 = 5;
			}
			else
			{
				PED::SET_PED_RESET_FLAG(*iParam0, 120, true);
			}
			break;
		
		case 13:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_151(*iParam0, AUDIO::_0x0626A247D2405330(), 15f, 1))
				{
					func_157(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (func_171(Local_45[func_165(iParam0->f_A) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_170(iParam0, 0);
				}
				else
				{
					func_156(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 15:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_151(*iParam0, AUDIO::_0x0626A247D2405330(), 15f, 1))
				{
					func_157(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (func_171(Local_45[func_165(iParam0->f_A) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_170(iParam0, 0);
				}
				else
				{
					func_156(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 16:
			if (PED::IS_PED_BEING_JACKED(*iParam0))
			{
				func_170(iParam0, 1);
				return;
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_55) >= 9000)
			{
				if (!func_155(iParam0))
				{
					func_157(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iParam0->f_1 = MISC::GET_GAME_TIMER();
					iParam0->f_5 = 1;
					iParam0->f_6 = 16;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_55) >= 5000 && (MISC::GET_GAME_TIMER() - iLocal_55) <= 5500)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
				{
					if (BRAIN::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(*iParam0))
					{
						BRAIN::CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(*iParam0);
					}
				}
			}
			break;
		
		case 14:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_151(*iParam0, AUDIO::_0x0626A247D2405330(), 15f, 1))
				{
					func_157(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (func_171(Local_45[func_165(iParam0->f_A) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_170(iParam0, 0);
				}
				else
				{
					func_156(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 17:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_151(*iParam0, AUDIO::_0x0626A247D2405330(), 15f, 1))
				{
					func_157(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (func_171(Local_45[func_165(iParam0->f_A) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_170(iParam0, 0);
				}
				else
				{
					func_156(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 20:
			if (WEAPON::IS_PED_ARMED(AUDIO::_0x0626A247D2405330(), 6) && !PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				if (func_171(*iParam0, AUDIO::_0x0626A247D2405330(), 1126825984, 1, 250, 7))
				{
					func_170(iParam0, 1);
					return;
				}
			}
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) >= 6000)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 5f, 0f, -2f), unk_0x8000C77B5F336760(iLocal_43, true) + Vector(2f, 0f, 0f), 9f, 0, true, 0))
				{
					func_157(iParam0);
				}
				else
				{
					func_162(iParam0);
					func_162(&(Local_45[func_165(iParam0->f_A) /*11*/]));
				}
				iParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			func_166(iParam0);
			break;
		
		case 22:
			if (WEAPON::IS_PED_ARMED(AUDIO::_0x0626A247D2405330(), 6))
			{
				if (func_171(*iParam0, AUDIO::_0x0626A247D2405330(), 1126825984, 1, 250, 7))
				{
					func_170(iParam0, 1);
					return;
				}
			}
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_151(*iParam0, AUDIO::_0x0626A247D2405330(), 15f, 1))
				{
					func_157(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
					return;
				}
				else
				{
					func_156(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 23:
			func_196(iParam0, iParam0->f_A, 1);
			func_166(iParam0);
			if (func_101(*iParam0, vLocal_54, 2f))
			{
				if (func_153(*iParam0, vLocal_54, 1126825984, 0))
				{
					NETWORK::_0x5E3AA4CA2B6FB0EE(*iParam0);
					iParam0->f_6 = 19;
					iParam0->f_5 = 1;
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
	}
}

int func_153(int iParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0x5490
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_154(vParam1 - unk_0x8000C77B5F336760(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		vVar1 = { func_154(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_127(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

Vector3 func_154(vector3 vParam0)//Position - 0x551E
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
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

int func_155(int iParam0)//Position - 0x555D
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 0f, 10f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 0f, 3f, 2f), 5f, 0, true, 0) && PED::IS_PED_STOPPED(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_156(int iParam0)//Position - 0x559F
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (func_36(iVar0))
		{
			if (!VEHICLE::_0x639431E895B9AA57(*iParam0, iVar0, 4294967295, 0, 0))
			{
				iParam0->f_6 = 18;
				iParam0->f_1 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_157(int iParam0)//Position - 0x55E5
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_40, 1862763509);
	switch (iParam0->f_8)
	{
		case 4:
			break;
		
		case 10:
			break;
		
		case 8:
			func_123();
			break;
		
		case 3:
			if (!func_178(*iParam0, 242628503))
			{
				if (iLocal_48 <= 20 && iLocal_48 != 4294967295)
				{
					Local_46[iLocal_48 /*25*/].f_12 = 1;
				}
				if (!PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_43, 0))
				{
					if (iParam0->f_A == 0)
					{
						BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_131(1)), 1f, 4294967295, 1048576000, 0, 1193033728);
						iParam0->f_7 = 1;
					}
					else
					{
						BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_131(0)), 1f, 4294967295, 1048576000, 0, 1193033728);
						iParam0->f_7 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_43, 0))
			{
				if (iParam0->f_A == 0)
				{
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_131(1)), 1f, 4294967295, 1048576000, 0, 1193033728);
					iParam0->f_7 = 1;
				}
				else
				{
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_131(0)), 1f, 4294967295, 1048576000, 0, 1193033728);
					iParam0->f_7 = 1;
				}
			}
			break;
		
		case 9:
			if (!Local_46[iLocal_48 /*25*/].f_12)
			{
				if (iParam0->f_9 == 1)
				{
					func_158(iParam0);
				}
				else if (iParam0->f_A == 0)
				{
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_131(1)), 1f, 4294967295, 1048576000, 0, 1193033728);
					iParam0->f_7 = 1;
				}
				else
				{
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_131(0)), 1f, 4294967295, 1048576000, 0, 1193033728);
					iParam0->f_7 = 1;
				}
			}
			else if (!PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_43, 0))
			{
				if (iParam0->f_A == 0)
				{
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_131(1)), 1f, 4294967295, 1048576000, 0, 1193033728);
					iParam0->f_7 = 1;
				}
				else
				{
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_131(0)), 1f, 4294967295, 1048576000, 0, 1193033728);
					iParam0->f_7 = 1;
				}
			}
			break;
		
		default:
			break;
	}
	iParam0->f_1 = MISC::GET_GAME_TIMER();
	iParam0->f_5 = 0;
}

void func_158(var uParam0)//Position - 0x5810
{
	if (!func_178(*uParam0, 4223627085))
	{
		if (Local_46[iLocal_48 /*25*/].f_17 != 0)
		{
			if (func_10(Local_46[iLocal_48 /*25*/].f_11))
			{
				BRAIN::TASK_GOTO_ENTITY_OFFSET(*uParam0, Local_46[iLocal_48 /*25*/].f_11, 4294967295, 0f, 180f, 1f, 0);
			}
		}
		else
		{
			BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, Local_46[iLocal_48 /*25*/].f_13, 1f, 20000, -1f, 0, func_159(Local_46[iLocal_48 /*25*/].f_13, unk_0x8000C77B5F336760(*uParam0, true), 1));
		}
		if (func_36(iLocal_43))
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_43, 5, 0, 0);
		}
		uParam0->f_8 = uParam0->f_7;
		uParam0->f_7 = 9;
		uParam0->f_9 = 1;
	}
}

float func_159(struct<2> Param0, var uParam1, struct<2> Param2, float fParam3, int iParam4)//Position - 0x58B6
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_160()//Position - 0x591B
{
	if (func_36(iLocal_43) && func_335(AUDIO::_0x0626A247D2405330()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_43, AUDIO::_0x0626A247D2405330(), 1))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_43);
			if (func_161() || ENTITY::GET_ENTITY_HEALTH(iLocal_43) < 851)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_161()//Position - 0x5969
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_43, iVar0, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_162(int iParam0)//Position - 0x59A3
{
	if (iParam0->f_6 != 3 && iParam0->f_6 != 4)
	{
		func_163(iParam0);
		iParam0->f_1 = MISC::GET_GAME_TIMER();
		iParam0->f_6 = 3;
		iParam0->f_5 = 1;
	}
}

void func_163(var uParam0)//Position - 0x59D7
{
	if (uParam0->f_7 == 9)
	{
		if (uParam0->f_9 >= 2)
		{
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 1048576000);
				PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
				BRAIN::TASK_PLAY_ANIM(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 8f, -8f, 4294967295, 56, 0, 0, 0, 0);
			}
		}
	}
}

float func_164(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x5A2D
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_165(int iParam0)//Position - 0x5A47
{
	if (iParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_166(int iParam0)//Position - 0x5A5A
{
	if (func_36(iLocal_43) && (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_43, 0) && !PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_43, 0)))
	{
		if (ENTITY::GET_ENTITY_SPEED(iLocal_43) > 0f)
		{
			iParam0->f_1 = MISC::GET_GAME_TIMER();
			iParam0->f_8 = iParam0->f_7;
			iParam0->f_5 = 1;
			iParam0->f_6 = 21;
		}
	}
}

int func_167(int iParam0, bool bParam1, int iParam2)//Position - 0x5AB4
{
	int iVar0;
	
	iVar0 = func_168(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_19E56.f_6D76[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_19E56.f_6D76[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_168(int iParam0, bool bParam1, bool bParam2)//Position - 0x5B06
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_169(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_169(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_169(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_169(bool bParam0, float fParam1, float fParam2)//Position - 0x5BAA
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_170(int iParam0, int iParam1)//Position - 0x5BC1
{
	func_163(iParam0);
	if ((WEAPON::IS_PED_ARMED(AUDIO::_0x0626A247D2405330(), 6) || iParam1) || iParam0->f_6 == 23)
	{
		if (!func_151(AUDIO::_0x0626A247D2405330(), *iParam0, 10f, 1))
		{
			if (!func_178(*iParam0, 1805844857))
			{
				iParam0->f_6 = 5;
				iParam0->f_5 = 1;
				iParam0->f_1 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			iParam0->f_6 = 10;
			iParam0->f_5 = 1;
			iParam0->f_1 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iParam0->f_5 != 1)
	{
		if (!func_178(*iParam0, 780511057) && !func_178(*iParam0, 4223627085))
		{
			iParam0->f_5 = 1;
			iParam0->f_6 = 21;
			iParam0->f_1 = MISC::GET_GAME_TIMER();
		}
	}
}

bool func_171(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5C7D
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_177(iParam0, iParam1);
	if (!func_10(iParam0) || !func_10(iParam1))
	{
		if (iVar2 != 4294967295)
		{
			func_176(&(Local_38[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_175(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == 4294967295)
	{
		iVar2 = func_174();
		if (iVar2 == 4294967295)
		{
			return 0;
		}
		Local_38[iVar2 /*4*/].f_1 = iParam0;
		Local_38[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_172(&(Local_38[iVar2 /*4*/]), vVar1, iParam1, &(Local_38[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_38[iVar2 /*4*/].f_3) < iParam4);
}

int func_172(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)//Position - 0x5D3E
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_10(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_173(iParam2, iParam5) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &vVar1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (ENTITY::IS_ENTITY_A_PED(iVar3))
	{
		func_10(iVar3);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3) == iParam2)
		{
			if (bLocal_39)
			{
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, unk_0x8000C77B5F336760(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = MISC::GET_GAME_TIMER();
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar3))
	{
		func_10(iVar3);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam2, 0))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar3) == PED::GET_VEHICLE_PED_IS_IN(iParam2, 0))
			{
				if (bLocal_39)
				{
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, unk_0x8000C77B5F336760(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_173(int iParam0, int iParam1)//Position - 0x5E6A
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x8000C77B5F336760(iParam0, true);
	}
	else if (iParam1 == 1)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x8000C77B5F336760(iParam0, true);
}

int func_174()//Position - 0x5F2F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_38)
	{
		if ((Local_38[iVar0 /*4*/] == 0 && Local_38[iVar0 /*4*/].f_1 == 0) && Local_38[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_175(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x5F79
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_154(unk_0x8000C77B5F336760(iParam1, true) - unk_0x8000C77B5F336760(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		vVar1 = { func_154(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_127(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

void func_176(var uParam0)//Position - 0x600A
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_177(int iParam0, int iParam1)//Position - 0x6025
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_38)
	{
		if (Local_38[iVar0 /*4*/].f_1 == iParam0 && Local_38[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_178(int iParam0, int iParam1)//Position - 0x6064
{
	if (func_335(iParam0))
	{
		if (BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_179(var uParam0)//Position - 0x6097
{
	float fVar0;
	
	if (uParam0->f_9 == 0 && uParam0->f_A == 1)
	{
	}
	switch (uParam0->f_7)
	{
		case 1:
			if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_43, 1))
			{
				func_170(uParam0, 0);
				return;
			}
			if (uParam0->f_A == 0)
			{
				func_190(uParam0, 1);
			}
			else
			{
				func_190(uParam0, 0);
			}
			break;
		
		case 2:
			if (PED::IS_PED_SITTING_IN_VEHICLE(*uParam0, iLocal_43))
			{
				if (!func_178(*uParam0, 2500551826))
				{
					if (uParam0->f_A == 0)
					{
						func_124(0);
					}
					else
					{
						uParam0->f_7 = 3;
					}
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_43, 1))
			{
				func_170(uParam0, 0);
				return;
			}
			break;
		
		case 3:
			if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_43, 1))
			{
				func_170(uParam0, 0);
				return;
			}
			if (bLocal_51)
			{
				if (iLocal_48 <= 20 && iLocal_48 != 4294967295)
				{
					if (!Local_46[iLocal_48 /*25*/].f_12)
					{
						if (func_101(*uParam0, Local_46[iLocal_48 /*25*/], 20f))
						{
							if (Local_46[iLocal_48 /*25*/].f_9 && VEHICLE::IS_VEHICLE_STOPPED(iLocal_43))
							{
								func_189();
							}
						}
					}
				}
				else
				{
					uParam0->f_7 = 10;
				}
			}
			break;
		
		case 4:
			if (func_101(*uParam0, Local_46[iLocal_48 /*25*/], 25f))
			{
				if (Local_46[iLocal_48 /*25*/].f_9)
				{
					func_188(uParam0);
				}
				else
				{
					Local_46[iLocal_48 /*25*/].f_12 = 1;
					func_124(0);
				}
			}
			break;
		
		case 5:
			if (func_36(iLocal_43))
			{
				VEHICLE::_SET_VEHICLE_HALT(iLocal_43, 25f, 10, 0);
				fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_43);
				if (fVar0 < 8f)
				{
					func_188(uParam0);
				}
			}
			break;
		
		case 6:
			if (!func_178(*uParam0, 242628503) && VEHICLE::IS_VEHICLE_STOPPED(iLocal_43))
			{
				if (bLocal_51)
				{
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 7;
				}
				else
				{
					BRAIN::TASK_LEAVE_ANY_VEHICLE(*uParam0, 0, 0);
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 8;
				}
			}
			break;
		
		case 7:
			if (func_335(Local_45[1 /*11*/]))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_45[1 /*11*/], iLocal_43, 0) && Local_45[1 /*11*/].f_7 == 3)
				{
					func_124(0);
				}
			}
			break;
		
		case 8:
			if (!PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_43, 0))
			{
				func_158(uParam0);
			}
			break;
		
		case 9:
			func_180(uParam0);
			break;
	}
}

void func_180(var uParam0)//Position - 0x6300
{
	var uVar0;
	var uVar1;
	
	if (uParam0->f_9 >= 1 && uParam0->f_9 != 0)
	{
	}
	switch (uParam0->f_9)
	{
		case 1:
			if (!func_178(*uParam0, 2279858344))
			{
				BRAIN::OPEN_SEQUENCE_TASK(&uVar0);
				if (func_164(unk_0x8000C77B5F336760(*uParam0, true), Local_46[iLocal_48 /*25*/].f_13) > 1.5f)
				{
					BRAIN::TASK_TURN_PED_TO_FACE_COORD(0, Local_46[iLocal_48 /*25*/].f_13, 0);
				}
				BRAIN::TASK_PLAY_ANIM(0, "missfbi4prepp1", "_bag_pickup_garbage_man", 8f, -16f, 4294967295, 528384, 0, 0, 0, 0);
				CUTSCENE::_0x8D9DF6ECA8768583(uVar0);
				BRAIN::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
				BRAIN::CLEAR_SEQUENCE_TASK(&uVar0);
				uParam0->f_9 = 2;
			}
			else if (func_185(Local_46[iLocal_48 /*25*/].f_13, *uParam0, 1f, 1f, 8f))
			{
				func_184(uParam0);
				return;
			}
			PED::SET_PED_CAPSULE(*uParam0, 0.2f);
			break;
		
		case 2:
			if (func_178(*uParam0, 242628503))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man") >= 0.333f)
					{
						PED::SET_PED_MOVEMENT_CLIPSET(*uParam0, "missfbi4prepp1_garbageman", 0f);
						PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0, "missfbi4prepp1_garbageman");
						if (func_10(Local_46[iLocal_48 /*25*/].f_11) && !ENTITY::IS_ENTITY_ATTACHED(Local_46[iLocal_48 /*25*/].f_11))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_46[iLocal_48 /*25*/].f_11, *uParam0, PED::GET_PED_BONE_INDEX(*uParam0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
						}
					}
				}
				if (func_185(Local_46[iLocal_48 /*25*/].f_13, *uParam0, 1f, 1f, 8f))
				{
					func_184(uParam0);
					return;
				}
			}
			else if (!func_178(*uParam0, 713668775))
			{
				if (func_36(iLocal_43))
				{
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 0f, -4.8f, 0f), 1f, 4294967295, 0.25f, 0, ENTITY::GET_ENTITY_HEADING(iLocal_43));
				}
				uParam0->f_9 = 3;
			}
			PED::SET_PED_CAPSULE(*uParam0, 0.2f);
			break;
		
		case 3:
			if (func_36(iLocal_43))
			{
				if (!func_185(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 0f, -5.5f, 0f), iLocal_43, 1.9f, 1.9f, 8f))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 0f, -5.5f, 0f), 0.9f, 0.9f, 2f, false, true, 0))
					{
						if (!func_178(*uParam0, 713668775))
						{
							BRAIN::OPEN_SEQUENCE_TASK(&uVar1);
							if (func_164(unk_0x8000C77B5F336760(*uParam0, true), unk_0x8000C77B5F336760(iLocal_43, true)) > 3f)
							{
								BRAIN::TASK_ACHIEVE_HEADING(0, ENTITY::GET_ENTITY_HEADING(iLocal_43), 0);
							}
							BRAIN::TASK_PLAY_ANIM(0, "missfbi4prepp1", "_bag_throw_garbage_man", 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
							CUTSCENE::_0x8D9DF6ECA8768583(uVar1);
							BRAIN::TASK_PERFORM_SEQUENCE(*uParam0, uVar1);
							BRAIN::CLEAR_SEQUENCE_TASK(&uVar1);
							uParam0->f_9 = 4;
						}
					}
					else if (!func_178(*uParam0, 713668775))
					{
						BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 0f, -4.8f, 0f), 1f, 4294967295, 0.25f, 0, ENTITY::GET_ENTITY_HEADING(iLocal_43));
					}
				}
				else
				{
					func_182(uParam0);
				}
			}
			break;
		
		case 4:
			if (!func_185(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 0f, -5.5f, 0f), *uParam0, 1.9f, 1.9f, 8f))
			{
				if (func_178(*uParam0, 242628503))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man") >= 0.391f)
						{
							if (func_10(Local_46[iLocal_48 /*25*/].f_11))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(Local_46[iLocal_48 /*25*/].f_11))
								{
									PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 1048576000);
									PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
									ENTITY::DETACH_ENTITY(Local_46[iLocal_48 /*25*/].f_11, 1, 0);
									OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_46[iLocal_48 /*25*/].f_11, 2f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, 3212836864, 3212836864, 3212836864);
									ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_46[iLocal_48 /*25*/].f_11, 1, ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0), 0, 1, 1, 0);
								}
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_46[iLocal_48 /*25*/].f_11, iLocal_43))
								{
									func_181(&(Local_46[iLocal_48 /*25*/].f_11));
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_9 = 0;
					if (func_36(iLocal_43))
					{
						VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_43, 5, 0);
						func_181(&(Local_46[iLocal_48 /*25*/].f_11));
					}
					func_157(uParam0);
				}
			}
			else
			{
				func_182(uParam0);
			}
			break;
		
		case 5:
			break;
	}
}

void func_181(int iParam0)//Position - 0x6744
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
		}
		OBJECT::DELETE_OBJECT(iParam0);
	}
}

void func_182(var uParam0)//Position - 0x676F
{
	var uVar0;
	var uVar1;
	
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_40, 1862763509);
	func_163(uParam0);
	if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
		{
			BRAIN::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*uParam0, AUDIO::_0x0626A247D2405330(), 8f, -1f, 10f, 0);
		}
		else
		{
			BRAIN::OPEN_SEQUENCE_TASK(&uVar0);
			BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			BRAIN::TASK_COMBAT_PED(0, AUDIO::_0x0626A247D2405330(), 0, 16);
			CUTSCENE::_0x8D9DF6ECA8768583(uVar0);
			BRAIN::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
			BRAIN::CLEAR_SEQUENCE_TASK(&uVar0);
		}
	}
	else
	{
		BRAIN::OPEN_SEQUENCE_TASK(&uVar1);
		BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, AUDIO::_0x0626A247D2405330(), 0);
		BRAIN::TASK_COMBAT_PED(0, AUDIO::_0x0626A247D2405330(), 0, 16);
		CUTSCENE::_0x8D9DF6ECA8768583(uVar1);
		BRAIN::TASK_PERFORM_SEQUENCE(*uParam0, uVar1);
		BRAIN::CLEAR_SEQUENCE_TASK(&uVar1);
	}
	PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 1048576000);
	PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
	func_183();
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_4))
	{
		uParam0->f_4 = func_167(*uParam0, 1, 145);
	}
	uParam0->f_1 = MISC::GET_GAME_TIMER();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 15;
}

void func_183()//Position - 0x686A
{
	Local_42 = 0;
	Local_42.f_1A = 0;
	Local_42.f_12 = 0;
}

void func_184(var uParam0)//Position - 0x687F
{
	var uVar0;
	var uVar1;
	
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_40, 1862763509);
	func_163(uParam0);
	if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
		{
			BRAIN::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*uParam0, AUDIO::_0x0626A247D2405330(), 8f, -1f, 10f, 0);
		}
		else
		{
			BRAIN::OPEN_SEQUENCE_TASK(&uVar0);
			BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			BRAIN::TASK_COMBAT_PED(0, AUDIO::_0x0626A247D2405330(), 0, 16);
			CUTSCENE::_0x8D9DF6ECA8768583(uVar0);
			BRAIN::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
			BRAIN::CLEAR_SEQUENCE_TASK(&uVar0);
		}
	}
	else
	{
		BRAIN::OPEN_SEQUENCE_TASK(&uVar1);
		BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, AUDIO::_0x0626A247D2405330(), 0);
		BRAIN::TASK_COMBAT_PED(0, AUDIO::_0x0626A247D2405330(), 0, 16);
		CUTSCENE::_0x8D9DF6ECA8768583(uVar1);
		BRAIN::TASK_PERFORM_SEQUENCE(*uParam0, uVar1);
		BRAIN::CLEAR_SEQUENCE_TASK(&uVar1);
	}
	PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 1048576000);
	PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
	func_183();
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_4))
	{
		uParam0->f_4 = func_167(*uParam0, 1, 145);
	}
	uParam0->f_1 = MISC::GET_GAME_TIMER();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 14;
}

int func_185(vector3 vParam0, int iParam1, vector3 vParam2)//Position - 0x697A
{
	Local_42.f_2 = { vParam0 };
	Local_42.f_8 = { vParam2 };
	func_186(&Local_42, iParam1);
	if (Local_42.f_1A)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(Local_42.f_12))
			{
				if (func_10(Local_42.f_12))
				{
					if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_42.f_12) == PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 1))
					{
						return 1;
					}
				}
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(Local_42.f_12))
		{
			if (func_10(Local_42.f_12))
			{
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_42.f_12) == AUDIO::_0x0626A247D2405330())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_186(var uParam0, int iParam1)//Position - 0x6A0C
{
	int iVar0;
	int iVar1;
	
	iVar1 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar0, &(uParam0->f_14), &(uParam0->f_17), &(uParam0->f_12));
	uParam0->f_13 = 2 == iVar1;
	if (uParam0->f_13)
	{
		if (0 == iVar0)
		{
			uParam0->f_1A = 0;
		}
		else
		{
			uParam0->f_1A = 1;
		}
	}
	if (iVar1 != 1)
	{
		func_187(uParam0, iParam1);
	}
}

void func_187(var uParam0, int iParam1)//Position - 0x6A5B
{
	switch (uParam0->f_1)
	{
		case 0:
			break;
		
		case 1:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(uParam0->f_2, uParam0->f_5, 511, iParam1, 7);
			break;
		
		case 2:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_BOUND(uParam0->f_11, 511, 4);
			break;
		
		case 3:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_BOUNDING_BOX(uParam0->f_11, 511, 4);
			break;
		
		case 4:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_BOX(uParam0->f_2, uParam0->f_8, uParam0->f_B, uParam0->f_E, 6, iParam1, 4);
			break;
		
		case 5:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_CAPSULE(uParam0->f_2, uParam0->f_5, uParam0->f_F, 511, iParam1, 4);
			break;
	}
	uParam0->f_10 = *uParam0 != 0;
}

void func_188(var uParam0)//Position - 0x6B20
{
	var uVar0;
	
	if (func_36(iLocal_43))
	{
		BRAIN::OPEN_SEQUENCE_TASK(&uVar0);
		BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_43, Local_46[iLocal_48 /*25*/].f_3, 8f, 0, joaat("TRASH"), 786469, 10f, 15f);
		BRAIN::TASK_VEHICLE_PARK(0, iLocal_43, Local_46[iLocal_48 /*25*/].f_3, Local_46[iLocal_48 /*25*/].f_8, Local_46[iLocal_48 /*25*/].f_A, 5f, 1);
		CUTSCENE::_0x8D9DF6ECA8768583(uVar0);
		BRAIN::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
		BRAIN::CLEAR_SEQUENCE_TASK(&uVar0);
		uParam0->f_7 = 6;
	}
}

void func_189()//Position - 0x6BA2
{
	func_158(&(Local_45[1 /*11*/]));
}

void func_190(var uParam0, bool bParam1)//Position - 0x6BB3
{
	int iVar0;
	
	if (func_185(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_131(bParam1)), iLocal_43, 1.9f, 1.9f, 8f))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 5f, 0f, -2f), unk_0x8000C77B5F336760(iLocal_43, true) + Vector(2f, 0f, 0f), 9f, 0, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 5f, 0f, -2f), unk_0x8000C77B5F336760(iLocal_43, true) + Vector(2f, 0f, 0f), 9f, 0, true, 0))
		{
			func_191(uParam0);
		}
		else if (!func_178(*uParam0, 1227113341) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 5f, 0f, -2f), unk_0x8000C77B5F336760(iLocal_43, true) + Vector(2f, 0f, 0f), 9f, 0, true, 0))
		{
			NETWORK::_0x5E3AA4CA2B6FB0EE(*uParam0);
			BRAIN::TASK_GO_TO_ENTITY(*uParam0, AUDIO::_0x0626A247D2405330(), 4294967295, 4f, 1f, 1073741824, 0);
		}
	}
	else if (func_101(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_131(bParam1)), 5f))
	{
		iVar0 = 4294967295;
		if (!bParam1)
		{
			iVar0 = 0;
		}
		BRAIN::TASK_ENTER_VEHICLE(*uParam0, iLocal_43, 4294967295, iVar0, 1f, 8388609, 0);
		uParam0->f_7 = 2;
	}
}

void func_191(var uParam0)//Position - 0x6CD4
{
	var uVar0;
	var uVar1;
	
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_40, 1862763509);
	func_163(uParam0);
	if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
		{
			BRAIN::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*uParam0, AUDIO::_0x0626A247D2405330(), 8f, -1f, 10f, 0);
		}
		else
		{
			BRAIN::OPEN_SEQUENCE_TASK(&uVar0);
			BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			BRAIN::TASK_COMBAT_PED(0, AUDIO::_0x0626A247D2405330(), 0, 16);
			CUTSCENE::_0x8D9DF6ECA8768583(uVar0);
			BRAIN::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
			BRAIN::CLEAR_SEQUENCE_TASK(&uVar0);
		}
	}
	else
	{
		BRAIN::OPEN_SEQUENCE_TASK(&uVar1);
		BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, AUDIO::_0x0626A247D2405330(), 0);
		BRAIN::TASK_COMBAT_PED(0, AUDIO::_0x0626A247D2405330(), 0, 16);
		CUTSCENE::_0x8D9DF6ECA8768583(uVar1);
		BRAIN::TASK_PERFORM_SEQUENCE(*uParam0, uVar1);
		BRAIN::CLEAR_SEQUENCE_TASK(&uVar1);
	}
	PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 1048576000);
	PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
	func_183();
	uParam0->f_1 = MISC::GET_GAME_TIMER();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 13;
}

void func_192(var uParam0)//Position - 0x6DB5
{
	if (uParam0->f_5 != 1)
	{
		if (func_36(iLocal_43) && PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (!func_178(*uParam0, 2104565373) && PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_43, 0))
			{
				if (func_151(AUDIO::_0x0626A247D2405330(), iLocal_43, 10f, 1))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_43, AUDIO::_0x0626A247D2405330()))
					{
						BRAIN::TASK_DRIVE_BY(*uParam0, AUDIO::_0x0626A247D2405330(), 0, 0f, 0f, 0f, 10f, 100, 1, 3337513804);
						uParam0->f_1 = MISC::GET_GAME_TIMER();
						uParam0->f_6 = 9;
					}
				}
			}
		}
	}
}

void func_193()//Position - 0x6E45
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_41 - 1))
	{
		if (Local_46[iVar0 /*25*/].f_17 != 0)
		{
			if (Local_46[iVar0 /*25*/].f_18)
			{
				if ((iVar0 != iLocal_48 && func_10(Local_46[iVar0 /*25*/].f_11)) && func_195(Local_46[iVar0 /*25*/].f_11, AUDIO::_0x0626A247D2405330(), 1) > 200f)
				{
					OBJECT::DELETE_OBJECT(&(Local_46[iVar0 /*25*/].f_11));
					Local_46[iVar0 /*25*/].f_18 = 0;
				}
			}
			else if (Local_46[iVar0 /*25*/].f_17 != 0)
			{
				if (func_101(AUDIO::_0x0626A247D2405330(), Local_46[iVar0 /*25*/], 100f) || func_101(Local_45[0 /*11*/], Local_46[iVar0 /*25*/], 120f))
				{
					Local_46[iVar0 /*25*/].f_18 = func_194(&(Local_46[iVar0 /*25*/].f_11), Local_46[iVar0 /*25*/].f_17, Local_46[iVar0 /*25*/].f_13, Local_46[iVar0 /*25*/].f_16, 1);
				}
			}
		}
		iVar0++;
	}
}

int func_194(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0x6F36
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (func_146(iParam1, "Loading", 0))
		{
			*uParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam2, 1, true, 0);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				ENTITY::SET_ENTITY_HEADING(*uParam0, fParam3);
				PHYSICS::ACTIVATE_PHYSICS(*uParam0);
				if (bParam4)
				{
					func_145(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_10(*uParam0))
	{
		return 1;
	}
	return 0;
}

float func_195(int iParam0, int iParam1, bool bParam2)//Position - 0x6FA3
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

void func_196(int iParam0, int iParam1, int iParam2)//Position - 0x7001
{
	if (iParam0->f_5 != 1 || iParam2)
	{
		if (!func_335(Local_45[func_165(iParam1) /*11*/]))
		{
			if (!bLocal_52)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_45[func_165(iParam1) /*11*/]))
				{
					if (func_175(*iParam0, Local_45[func_165(iParam1) /*11*/], 140f, 0) || func_151(Local_45[func_165(iParam1) /*11*/], *iParam0, 3f, 1))
					{
						func_170(iParam0, 0);
						bLocal_52 = true;
						return;
					}
					else
					{
						vLocal_54 = { unk_0x8000C77B5F336760(Local_45[func_165(iParam1) /*11*/], true) };
						iParam0->f_1 = MISC::GET_GAME_TIMER();
						iParam0->f_8 = iParam0->f_7;
						iParam0->f_5 = 1;
						iParam0->f_6 = 11;
					}
				}
				else
				{
					func_170(iParam0, 0);
				}
			}
		}
		else if (Local_45[func_165(iParam1) /*11*/].f_6 == 22)
		{
			if (func_175(*iParam0, Local_45[func_165(iParam1) /*11*/], 140f, 0) && func_151(Local_45[func_165(iParam1) /*11*/], AUDIO::_0x0626A247D2405330(), 15f, 1))
			{
				iParam0->f_5 = 1;
				iParam0->f_6 = 21;
			}
		}
		else if (Local_45[func_165(iParam1) /*11*/].f_6 == 5 || Local_45[func_165(iParam1) /*11*/].f_6 == 7)
		{
			if (func_151(Local_45[func_165(iParam1) /*11*/], *iParam0, 10f, 1))
			{
				func_170(iParam0, 0);
			}
		}
		if (func_207(*iParam0))
		{
			func_163(iParam0);
			iParam0->f_1 = MISC::GET_GAME_TIMER();
			iParam0->f_8 = iParam0->f_7;
			iParam0->f_5 = 1;
			iParam0->f_6 = 21;
		}
		if (iParam0->f_A == 0 && iParam0->f_7 == 4)
		{
			if (func_155(iParam0))
			{
				if (PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_43, 0))
				{
					BRAIN::TASK_DRIVE_BY(*iParam0, AUDIO::_0x0626A247D2405330(), 0, 0f, 0f, 0f, 10f, 100, 1, 3337513804);
					AUDIO::_0x9D3AF56E94C9AE98(iLocal_43, 2000f);
					iLocal_55 = MISC::GET_GAME_TIMER();
					iParam0->f_1 = MISC::GET_GAME_TIMER();
					iParam0->f_6 = 16;
					iParam0->f_5 = 1;
				}
			}
		}
		if (func_198(*iParam0, 1, 70f, 170f, 0, 1, 0, 0) && !func_197(iParam0))
		{
			if (WEAPON::IS_PED_ARMED(AUDIO::_0x0626A247D2405330(), 6))
			{
				if (func_36(iLocal_43))
				{
					if (PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_43, 0))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_43) > 5f)
						{
							if (iParam1 == 0)
							{
								BRAIN::TASK_VEHICLE_MISSION_PED_TARGET(*iParam0, iLocal_43, AUDIO::_0x0626A247D2405330(), 8, 30f, 786469, 300f, 2f, 1);
								iParam0->f_6 = 7;
								BRAIN::TASK_COWER(Local_45[func_165(iParam1) /*11*/], 4294967295);
								Local_45[func_165(iParam1) /*11*/].f_6 = 10;
								Local_45[func_165(iParam1) /*11*/].f_5 = 1;
								iParam0->f_5 = 1;
								iParam0->f_1 = MISC::GET_GAME_TIMER();
								Local_45[func_165(iParam1) /*11*/].f_1 = MISC::GET_GAME_TIMER();
							}
							else
							{
								BRAIN::TASK_COWER(*iParam0, 4294967295);
								iParam0->f_6 = 12;
								BRAIN::TASK_VEHICLE_MISSION_PED_TARGET(Local_45[func_165(iParam1) /*11*/], iLocal_43, AUDIO::_0x0626A247D2405330(), 8, 30f, 786469, 300f, 2f, 1);
								Local_45[func_165(iParam1) /*11*/].f_6 = 5;
								Local_45[func_165(iParam1) /*11*/].f_5 = 1;
								iParam0->f_5 = 1;
								iParam0->f_1 = MISC::GET_GAME_TIMER();
								Local_45[func_165(iParam1) /*11*/].f_1 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							func_170(iParam0, 0);
							if (ENTITY::DOES_ENTITY_EXIST(Local_45[func_165(iParam1) /*11*/]))
							{
								if (func_175(Local_45[func_165(iParam1) /*11*/], AUDIO::_0x0626A247D2405330(), 1126825984, 0))
								{
									func_170(&(Local_45[func_165(iParam1) /*11*/]), 0);
								}
							}
						}
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam0);
					}
					else
					{
						func_170(iParam0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_45[func_165(iParam1) /*11*/]))
						{
							if (func_171(Local_45[func_165(iParam1) /*11*/], *iParam0, 1126825984, 1, 250, 7))
							{
								func_170(&(Local_45[func_165(iParam1) /*11*/]), 0);
							}
						}
					}
				}
			}
			else
			{
				iParam0->f_1 = MISC::GET_GAME_TIMER();
				iParam0->f_8 = iParam0->f_7;
				iParam0->f_5 = 1;
				iParam0->f_6 = 21;
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam0);
				if (func_171(Local_45[func_165(iParam1) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					Local_45[func_165(iParam1) /*11*/].f_1 = MISC::GET_GAME_TIMER();
					Local_45[func_165(iParam1) /*11*/].f_8 = iParam0->f_7;
					Local_45[func_165(iParam1) /*11*/].f_5 = 1;
					Local_45[func_165(iParam1) /*11*/].f_6 = 21;
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_45[func_165(iParam1) /*11*/]);
				}
			}
			iParam0->f_5 = 1;
		}
		else if (PED::IS_PED_BEING_JACKED(*iParam0))
		{
			func_163(iParam0);
			BRAIN::TASK_SMART_FLEE_PED(*iParam0, AUDIO::_0x0626A247D2405330(), 500f, 4294967295, 0, 1);
			iParam0->f_6 = 2;
			iParam0->f_5 = 1;
			iParam0->f_1 = MISC::GET_GAME_TIMER();
		}
		if (PED::IS_PED_RAGDOLL(*iParam0))
		{
			if (func_10(Local_46[iLocal_48 /*25*/].f_11))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Local_46[iLocal_48 /*25*/].f_11))
				{
					ENTITY::DETACH_ENTITY(Local_46[iLocal_48 /*25*/].f_11, 1, 0);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_46[iLocal_48 /*25*/].f_11, 1, ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0), 0, 1, 1, 0);
				}
			}
		}
	}
	if (iParam0->f_5 != 1)
	{
		if (func_335(Local_45[func_165(iParam1) /*11*/]))
		{
			if (PED::IS_PED_BEING_JACKED(Local_45[func_165(iParam1) /*11*/]))
			{
				func_163(iParam0);
				BRAIN::TASK_SMART_FLEE_PED(*iParam0, AUDIO::_0x0626A247D2405330(), 120f, 4294967295, 0, 0);
				iParam0->f_1 = MISC::GET_GAME_TIMER();
				iParam0->f_6 = 7;
				iParam0->f_5 = 1;
			}
		}
	}
}

int func_197(var uParam0)//Position - 0x7529
{
	if ((ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, 0f, -2f, 0f), 2f, 3f, 2f, false, true, 0) && !WEAPON::IS_PED_ARMED(AUDIO::_0x0626A247D2405330(), 6)) && PED::GET_PED_STEALTH_MOVEMENT(AUDIO::_0x0626A247D2405330()))
	{
		return 1;
	}
	return 0;
}

int func_198(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x7571
{
	vector3 vVar0;
	
	if (func_10(AUDIO::_0x0626A247D2405330()) && func_10(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, AUDIO::_0x0626A247D2405330(), 1))
		{
			return 1;
		}
		if (func_203(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!WEAPON::IS_PED_ARMED(AUDIO::_0x0626A247D2405330(), 6))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(AUDIO::_0x0626A247D2405330()))
			{
				vVar0 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) - unk_0x8000C77B5F336760(iParam0, true) };
				if ((((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) + (vVar0.z * vVar0.z)) <= 5f)
				{
					return func_202(AUDIO::_0x0626A247D2405330(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_199(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_199(int iParam0, float fParam1)//Position - 0x762C
{
	float fVar0;
	
	if (func_10(AUDIO::_0x0626A247D2405330()) && func_10(iParam0))
	{
		if (func_201(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(CAM::_0xDC9DA9E8789F5246(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(AUDIO::_0x0626A247D2405330(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_200(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_200(int iParam0, float fParam1)//Position - 0x76A2
{
	return func_171(iParam0, AUDIO::_0x0626A247D2405330(), fParam1, 1, 250, 7);
}

int func_201(int iParam0)//Position - 0x76BA
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(CAM::_0xDC9DA9E8789F5246(), iParam0) && WEAPON::IS_PED_ARMED(AUDIO::_0x0626A247D2405330(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_202(int iParam0, int iParam1, float fParam2)//Position - 0x76E2
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar1 = { unk_0x8000C77B5F336760(iParam1, true) - unk_0x8000C77B5F336760(iParam0, true) };
	return (((vVar0.x * vVar1.x) + (vVar0.y * vVar1.y)) / SYSTEM::VDIST(vVar1, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}

int func_203(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x7729
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
	if (func_10(AUDIO::_0x0626A247D2405330()) && func_10(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_206(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_204(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(AUDIO::_0x0626A247D2405330()))
			{
				if (PED::IS_PED_SHOOTING(AUDIO::_0x0626A247D2405330()))
				{
					if (MISC::IS_BULLET_IN_AREA(unk_0x8000C77B5F336760(iParam0, true), fVar0, 1))
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
				if (func_206(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_204(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_204(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0x7824
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x8000C77B5F336760(iParam0, true) };
	vVar1 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar1.x = (vVar1.x + fParam1);
	vVar1.y = (vVar1.y + fParam1);
	vVar1.z = (vVar1.z + fParam1);
	if (bParam2)
	{
		if (((MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(unk_0x8000C77B5F336760(iParam0, true), joaat("weapon_grenade"), fParam1, 1) || MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(unk_0x8000C77B5F336760(iParam0, true), joaat("weapon_molotov"), fParam1, 1)) || MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(unk_0x8000C77B5F336760(iParam0, true), joaat("weapon_smokegrenade"), fParam1, 1)) || MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(unk_0x8000C77B5F336760(iParam0, true), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_205(iParam0, fParam1))
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
			if (func_205(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (MISC::IS_PROJECTILE_IN_AREA(vVar0, vVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_205(int iParam0, float fParam1)//Position - 0x7930
{
	var uVar0;
	vector3 vVar1;
	
	if ((((MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_153(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_206(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0x79C5
{
	if (bParam1)
	{
		if (PED::IS_PED_SHOOTING(AUDIO::_0x0626A247D2405330()))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_BULLET_IN_AREA(unk_0x8000C77B5F336760(iParam0, true), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_207(int iParam0)//Position - 0x7A0D
{
	if (func_151(iParam0, AUDIO::_0x0626A247D2405330(), 6f, 1))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, AUDIO::_0x0626A247D2405330()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_208()//Position - 0x7A41
{
	if (func_36(Local_199))
	{
		if (func_151(AUDIO::_0x0626A247D2405330(), Local_199, 100f, 1) && !iLocal_194)
		{
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("TRASH"), 3);
			if (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("TRASH")))
			{
				iLocal_194 = 1;
			}
		}
		else if (!func_151(AUDIO::_0x0626A247D2405330(), Local_199, 120f, 1) && iLocal_194)
		{
			VEHICLE::REMOVE_VEHICLE_ASSET(joaat("TRASH"));
			iLocal_194 = 0;
		}
	}
}

void func_209(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, vector3 vParam5, int iParam6, bool bParam7, float fParam8)//Position - 0x7AB8
{
	if (func_36(*iParam0))
	{
		switch (*iParam2)
		{
			case 0:
				if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), *iParam0, 0))
				{
					func_7(iParam3);
					if (func_100(func_108(func_76()), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(func_108(func_76()));
					}
					if (*iParam0 == iParam6)
					{
						*iParam2 = 1;
					}
					else
					{
						*iParam2 = 2;
					}
				}
				else if (func_214(*iParam0) || func_213(*iParam0))
				{
					func_7(iParam3);
					if (func_100(func_108(func_76()), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(func_108(func_76()));
					}
					*iParam2 = 3;
				}
				else
				{
					if (func_100(func_109(func_76(), bParam7), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(func_109(func_76(), bParam7));
					}
					if (func_76() != 33)
					{
						func_211(iParam0);
					}
					else
					{
						func_210(iParam0, iParam1);
					}
				}
				break;
			
			case 2:
			case 1:
				if ((!PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), *iParam0, 0) && !func_214(*iParam0)) && !func_213(*iParam0))
				{
					func_7(iParam4);
					if (!ENTITY::IS_ENTITY_AT_COORD(*iParam0, vParam5, fParam8, fParam8, 2f, false, true, 2))
					{
						func_119(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
			
			case 3:
				if (!func_214(*iParam0) && !func_213(*iParam0))
				{
					func_7(iParam4);
					if (!ENTITY::IS_ENTITY_AT_COORD(*iParam0, vParam5, fParam8, fParam8, 2f, false, true, 2))
					{
						func_119(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
		}
	}
	else if (func_76() != 33)
	{
		func_211(iParam0);
	}
	else
	{
		func_210(iParam0, iParam1);
	}
}

void func_210(int iParam0, var uParam1)//Position - 0x7C6C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!bLocal_28)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			if (iVar0 != *iParam0)
			{
				if (func_36(iVar0))
				{
					iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
					if (iVar1 == joaat("TRASH"))
					{
						*uParam1 = *iParam0;
						func_6(iParam0);
						*iParam0 = iVar0;
						func_35(*iParam0, 1);
						func_35(*uParam1, 3);
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, 1);
						}
					}
					else if (iVar1 == joaat("TOWTRUCK"))
					{
						iVar2 = VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0));
						if (func_10(iVar2))
						{
							iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2);
							if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("TRASH"))
							{
								*uParam1 = *iParam0;
								func_6(iParam0);
								*iParam0 = iVar0;
								func_35(*iParam0, 1);
								func_35(*uParam1, 3);
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, 1);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_211(int iParam0)//Position - 0x7D59
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (iVar0 != *iParam0)
		{
			if (func_36(iVar0))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == func_212(func_76()))
				{
					func_6(iParam0);
					*iParam0 = iVar0;
					func_35(*iParam0, 1);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, 1);
				}
			}
		}
	}
}

int func_212(int iParam0)//Position - 0x7DB6
{
	int iVar0;
	
	switch (iParam0)
	{
		case 33:
			iVar0 = joaat("TRASH");
			break;
		
		case 34:
			iVar0 = joaat("TOWTRUCK");
			break;
		
		case 78:
			iVar0 = 0;
			break;
		
		case 80:
		case 81:
		case 82:
			iVar0 = joaat("GAUNTLET");
			break;
	}
	return iVar0;
}

int func_213(int iParam0)//Position - 0x7E0F
{
	int iVar0;
	int iVar1;
	
	if ((func_335(AUDIO::_0x0626A247D2405330()) && PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0)) && func_36(iParam0))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (func_36(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if ((iVar1 == joaat("CARGOBOB") || iVar1 == joaat("CARGOBOB2")) || iVar1 == joaat("CARGOBOB3"))
			{
				if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(iVar0))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(iVar0, iParam0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_214(int iParam0)//Position - 0x7E92
{
	int iVar0;
	int iVar1;
	
	if ((func_335(AUDIO::_0x0626A247D2405330()) && PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0)) && func_36(iParam0))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (func_36(iVar0))
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

void func_215()//Position - 0x7EFE
{
	func_209(&iLocal_200, &iLocal_201, &iLocal_71, &iLocal_183, &iLocal_182, vLocal_186, Local_199, 0, 1090519040);
	func_149();
	func_232();
	func_208();
	switch (iLocal_69)
	{
		case 0:
			if (func_116(iLocal_68, bLocal_28))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 0 && !func_231())
				{
					func_111(&iLocal_182, vLocal_186, 1);
					func_115("PRA_TAKBACK", &iLocal_181);
				}
				iLocal_69 = 1;
			}
			break;
		
		case 1:
			func_114(&iLocal_182, vLocal_186, &iLocal_70, iLocal_71, &iLocal_181, &iLocal_195);
			func_221();
			if (func_219(iLocal_200, vLocal_186, &iLocal_182, iLocal_70, iLocal_71, &iLocal_181, &iLocal_196, 0, 0, 1086324736))
			{
				RECORDING::_0x293220DA1B46CEBC(8f, 5f, 4);
				iLocal_69 = 2;
			}
			break;
		
		case 2:
			func_216();
			func_7(&iLocal_182);
			func_7(&iLocal_183);
			if (func_110(1077936128, 1))
			{
				func_104(0);
			}
			break;
		
		case 3:
			if (func_36(iLocal_200))
			{
				if (!PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_200, 0))
				{
					PED::SET_PED_INTO_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_200, 4294967295);
				}
				else
				{
					func_103(iLocal_200, vLocal_186, 146.5443f, 0, 1);
					func_39(1, 1, 1);
					iLocal_69 = 1;
				}
			}
			break;
	}
}

void func_216()//Position - 0x805D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_78(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (func_218(iVar1))
			{
				func_217(iVar1);
			}
		}
		iVar0++;
	}
}

int func_217(int iParam0)//Position - 0x8099
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_78(iVar0) != iParam0)
		{
			return 0;
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15C5D, iVar0))
		{
			return 0;
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_15C5D, iVar0);
		return 1;
	}
	return 0;
}

int func_218(int iParam0)//Position - 0x80F1
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_78(iVar0) != iParam0)
		{
			return 0;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15C5D, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_219(int iParam0, vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)//Position - 0x813A
{
	if ((iParam4 == 1 || iParam4 == 2) || iParam4 == 3)
	{
		if (iParam3 == 0)
		{
			func_111(iParam2, vParam1, 1);
			if (!bParam8)
			{
				if (func_36(iParam0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, fParam9, fParam9, 2f, true, true, 0))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vParam1, fParam9, fParam9, 2f, true, true, 2))
			{
				return 1;
			}
			if (func_100(func_108(func_76()), 0, 0))
			{
				HUD::CLEAR_THIS_PRINT(func_108(func_76()));
			}
			if (!func_220())
			{
				func_115(func_109(func_76(), bParam7), iParam5);
			}
		}
	}
	else if (iParam3 == 0)
	{
		if (!*iParam6)
		{
			if (func_100(func_109(func_76(), 0), 0, 0))
			{
				HUD::CLEAR_THIS_PRINT(func_109(func_76(), 0));
			}
			func_99(func_108(func_76()), 7500, 0);
			*iParam6 = 1;
		}
	}
	return 0;
}

bool func_220()//Position - 0x822D
{
	return Global_16C64.f_147 > 0;
}

void func_221()//Position - 0x823E
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = func_78(iVar0);
		if (!PED::IS_PED_INJURED(iVar2))
		{
			if (func_77(iVar2, 0))
			{
				if (!bVar1)
				{
					if (func_151(AUDIO::_0x0626A247D2405330(), iVar2, 5f, 1))
					{
						if (!func_231())
						{
							func_226(iVar0);
							bVar1 = true;
						}
					}
				}
				if (!iLocal_374[iVar0])
				{
					if (iVar0 == 0)
					{
						func_92(&uLocal_205, iVar0, iVar2, "MICHAEL", 0, 1);
					}
					else if (iVar0 == 1)
					{
						func_92(&uLocal_205, iVar0, iVar2, "FRANKLIN", 0, 1);
					}
					else if (iVar0 == 2)
					{
						func_92(&uLocal_205, iVar0, iVar2, "TREVOR", 0, 1);
					}
					iLocal_374[iVar0] = 1;
				}
			}
			if (!func_218(iVar2))
			{
				if (func_77(iVar2, 0))
				{
					if (func_225(iVar2) || func_223(iVar2))
					{
						if (func_222(iVar2, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, 1);
							ENTITY::SET_ENTITY_HEALTH(iVar2, true);
							NETWORK::_0x5E3AA4CA2B6FB0EE(iVar2);
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar2, 1))
			{
				if (func_225(iVar2))
				{
					if (BRAIN::GET_SCRIPT_TASK_STATUS(iVar2, 3021937204) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(iVar2, 3021937204) != 0)
					{
						if (PATHFIND::_0xF7B79A50B905A30D(623.3781f, -172.26f, 1700.732f, -2115.843f))
						{
							BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(iVar2, PED::GET_VEHICLE_PED_IS_IN(iVar2, 0), vLocal_186, 20f, 0, 0, 34340901, 2f, 10f);
						}
						else
						{
							PATHFIND::_0x07FB139B592FA687(623.3781f, -172.26f, 1700.732f, -2115.843f);
						}
					}
				}
				else if (func_223(iVar2))
				{
					if (func_36(Local_199))
					{
						if (!func_151(iVar2, Local_199, 17f, 1))
						{
							if (BRAIN::GET_SCRIPT_TASK_STATUS(iVar2, 3021937204) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(iVar2, 3021937204) != 0)
							{
								BRAIN::TASK_VEHICLE_MISSION(iVar2, PED::GET_VEHICLE_PED_IS_IN(iVar2, 0), Local_199, 3, 20f, 786468, 2f, 0.5f, 1);
							}
						}
					}
				}
				else
				{
					func_217(iVar2);
				}
			}
		}
		iVar0++;
	}
}

int func_222(int iParam0, int iParam1)//Position - 0x844B
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_78(iVar0) != iParam0)
		{
			return 0;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15C5D, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == AUDIO::_0x0626A247D2405330())
			{
				return 0;
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15C5C, iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, 0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, 0, 1);
			MISC::SET_BIT(&Global_15C5D, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_223(int iParam0)//Position - 0x84D2
{
	int iVar0;
	
	if (!func_224())
	{
		if ((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0)) && PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 0)
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			if (func_36(iVar0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("TRASH")))
				{
					return 0;
				}
				if (PED::IS_PED_IN_VEHICLE(iParam0, iVar0, 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 4294967295, 0) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_224()//Position - 0x8552
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_162B5.f_2C == 1;
	}
	return 0;
}

int func_225(int iParam0)//Position - 0x856E
{
	if (!func_224())
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_199) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Local_199, 0)) && !ENTITY::IS_ENTITY_AT_COORD(Local_199, vLocal_186, 2f, 2f, 2f, false, true, 0))
		{
			if ((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), Local_199, 0)) && PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 0)
			{
				if (PED::IS_PED_IN_VEHICLE(iParam0, Local_199, 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_199, 4294967295, 0) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_226(int iParam0)//Position - 0x85FC
{
	if (iLocal_68 > 1)
	{
		if (iLocal_70 > 0)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_73[iParam0 /*8*/].f_7, 0) && iLocal_71 == 1)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (func_230(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][0], 8, 0, 0, 0))
					{
						MISC::SET_BIT(&(Local_73[iParam0 /*8*/].f_7), 0);
					}
				}
			}
		}
		else
		{
			if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_73[iParam0 /*8*/].f_7, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_73[iParam0 /*8*/].f_7, 1)) && iLocal_71 == 1)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (func_230(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][1], 7, 0, 0, 0))
					{
						MISC::SET_BIT(&(Local_73[iParam0 /*8*/].f_7), 1);
					}
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_73[iParam0 /*8*/].f_7, 5))
			{
				if (func_229(iLocal_200, vLocal_186, 1) < 15f && iLocal_71 == 1)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (func_230(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][5], 7, 0, 0, 0))
						{
							MISC::SET_BIT(&(Local_73[iParam0 /*8*/].f_7), 5);
						}
					}
				}
			}
			switch (func_29(AUDIO::_0x0626A247D2405330()))
			{
				case 0:
					if (iParam0 == 1)
					{
						if (!func_228(2))
						{
							func_227(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_228(4))
						{
							func_227(iParam0, 4);
						}
					}
					break;
				
				case 1:
					if (iParam0 == 0)
					{
						if (!func_228(2))
						{
							func_227(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_228(3))
						{
							func_227(iParam0, 3);
						}
					}
					break;
				
				case 2:
					if (iParam0 == 1)
					{
						if (!func_228(3))
						{
							func_227(iParam0, 3);
						}
					}
					else if (iParam0 == 0)
					{
						if (!func_228(4))
						{
							func_227(iParam0, 4);
						}
					}
					break;
				}
			}
	}
}

void func_227(int iParam0, int iParam1)//Position - 0x87DB
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_73[iParam0 /*8*/].f_7, iParam1))
	{
		if (iLocal_375 != 4294967295)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_230(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][iParam1], 7, 0, 0, 0))
				{
					MISC::SET_BIT(&(Local_73[iParam0 /*8*/].f_7), iParam1);
				}
			}
		}
		else if (!func_231() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			iLocal_375 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_375 = 4294967295;
		}
	}
}

int func_228(int iParam0)//Position - 0x8853
{
	if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_73[0 /*8*/].f_7, iParam0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_73[1 /*8*/].f_7, iParam0)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_73[2 /*8*/].f_7, iParam0))
	{
		return 1;
	}
	return 0;
}

float func_229(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x8899
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

bool func_230(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x88D3
{
	func_89(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_82(sParam2, iParam3, 0);
}

int func_231()//Position - 0x8921
{
	if (Global_3DCE != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_232()//Position - 0x8943
{
	if (func_101(AUDIO::_0x0626A247D2405330(), vLocal_186, 220f))
	{
		if (!iLocal_203 && !func_101(AUDIO::_0x0626A247D2405330(), vLocal_186, 100f))
		{
			iLocal_203 = func_147(&iLocal_202, joaat("CAVALCADE2"), 1370.912f, -2060.055f, 50.9983f, 312.8686f, 1);
		}
	}
	else if (func_101(AUDIO::_0x0626A247D2405330(), vLocal_186, 240f))
	{
		if (iLocal_203)
		{
			func_6(&iLocal_202);
			iLocal_203 = 0;
		}
	}
}

void func_233()//Position - 0x89CC
{
	func_209(&iLocal_200, &iLocal_201, &iLocal_71, &iLocal_183, &iLocal_182, vLocal_186, Local_199, 0, 1090519040);
	func_208();
	func_149();
	switch (iLocal_69)
	{
		case 0:
			if (func_116(iLocal_68, bLocal_28))
			{
				func_119(&iLocal_182, Local_199, 1);
				func_115("PRA_GOVAN", &iLocal_181);
				iLocal_69 = 1;
			}
			break;
		
		case 1:
			func_221();
			if (func_36(Local_199))
			{
				func_236(&uLocal_56, Local_199, 0, 0, 1, 1, 1);
			}
			if (!bLocal_190)
			{
				if (func_335(Local_197) && PED::IS_PED_BEING_JACKED(Local_197))
				{
					func_235();
				}
				if (func_335(Local_198) && PED::IS_PED_BEING_JACKED(Local_198))
				{
					func_235();
				}
			}
			if (func_36(iLocal_200))
			{
				if ((iLocal_71 == 1 || iLocal_71 == 2) || iLocal_71 == 3)
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					iLocal_69 = 2;
				}
			}
			break;
		
		case 2:
			func_7(&iLocal_182);
			func_139(&uLocal_56, 0, 0);
			func_104(0);
			break;
		
		case 3:
			func_8(&Local_197);
			func_8(&Local_198);
			if (func_36(Local_199))
			{
				PED::SET_PED_INTO_VEHICLE(AUDIO::_0x0626A247D2405330(), Local_199, 4294967295);
			}
			func_234(1);
			func_39(1, 1, 1);
			iLocal_69 = 1;
			break;
	}
}

void func_234(bool bParam0)//Position - 0x8B23
{
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	if (bParam0)
	{
		GRAPHICS::_0x54E22EA2C1956A8D(1f);
		HUD::_0x14621BB1DF14E2B2(5);
	}
	else
	{
		HUD::_0x14621BB1DF14E2B2(0);
		GRAPHICS::_0x54E22EA2C1956A8D(0f);
	}
}

void func_235()//Position - 0x8B6A
{
	char* sVar0;
	
	switch (func_25())
	{
		case 0:
			sVar0 = "FBI4_JACKSM";
			break;
		
		case 1:
			sVar0 = "FBI4_JACKSF";
			break;
		
		case 2:
			sVar0 = "FBI4_JACKST";
			break;
	}
	bLocal_190 = func_230(&uLocal_205, "FBIPRAU", sVar0, 7, 0, 0, 0);
	if (bLocal_190)
	{
		RECORDING::_0x293220DA1B46CEBC(8f, 8f, 4);
	}
}

void func_236(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x8BD0
{
	func_237(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_237(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x8BED
{
	func_238(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_238(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x8C0B
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
	{
		func_139(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_239(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_239(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x8C43
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_140(iVar0))
	{
		func_264();
	}
	if (func_263(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::_0x7D7A2E43E74E2EB8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::GET_PED_FLOOD_INVINCIBILITY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 1);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			unk_0xF0020781B6E3E577(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_258(uParam0, bParam5, bParam7, 0))
			{
				func_255(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_244(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!func_140(iVar0))
							{
								func_243(iVar0, 4294967295);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_242(1);
								}
							}
						}
					}
				}
			}
			else if (func_244(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
					{
						if (!func_140(iVar0))
						{
							func_243(iVar0, 4294967295);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_242(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam3))
			{
				if (func_140(sParam3))
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
			{
				if (PED::IS_PED_IN_ANY_BOAT(AUDIO::_0x0626A247D2405330()))
				{
					if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
					{
						func_139(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(AUDIO::_0x0626A247D2405330()))
				{
					if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
					{
						func_139(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(AUDIO::_0x0626A247D2405330()))
				{
					if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
					{
						func_139(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(AUDIO::_0x0626A247D2405330()))
				{
					if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
					{
						func_139(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(AUDIO::_0x0626A247D2405330()))
				{
					if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
					{
						func_139(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_139(uParam0, iVar0, 1);
				}
			}
			if (!func_258(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_241(uParam0))
				{
					func_240(uParam0);
				}
			}
		}
	}
	else
	{
		func_139(uParam0, iVar0, 0);
	}
}

void func_240(var uParam0)//Position - 0x8FB0
{
	if (func_263(AUDIO::_0x0626A247D2405330()))
	{
		BRAIN::TASK_CLEAR_LOOK_AT(AUDIO::_0x0626A247D2405330());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::_STOP_SCREEN_EFFECT("FocusIn");
		if (uParam0->f_B)
		{
			GRAPHICS::_START_SCREEN_EFFECT("FocusOut", 0, 0);
			unk_0x1190AB7024CBD8CB(4294967295, "FocusOut", "HintCamSounds", 1);
			uParam0->f_B = 0;
		}
	}
	uParam0->f_2 = 4294967295;
	*uParam0 = 1;
}

int func_241(var uParam0)//Position - 0x9019
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_A / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_242(bool bParam0)//Position - 0x9044
{
	switch (Global_8D15)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_19E56.f_2725.f_64++;
			}
			return Global_19E56.f_2725.f_64;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_19E56.f_2725.f_65++;
			}
			return Global_19E56.f_2725.f_65;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_19E56.f_2725.f_66++;
			}
			return Global_19E56.f_2725.f_66;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_243(char* sParam0, int iParam1)//Position - 0x90EE
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_244(char* sParam0)//Position - 0x9105
{
	if (!func_245(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_140(sParam0)) || func_140("CMN_HINT"))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
		return 0;
	}
	switch (Global_8D15)
	{
		case 0:
		case 3:
			if (func_242(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_242(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_242(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_245(bool bParam0, bool bParam1, bool bParam2)//Position - 0x919E
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_68(0))
	{
		return 0;
	}
	if (func_254())
	{
		return 0;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_10B8E)
	{
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_D072)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(AUDIO::_0x0626A247D2405330()))
			{
				if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(AUDIO::_0x0626A247D2405330()))
			{
				if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(AUDIO::_0x0626A247D2405330()))
			{
				if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(AUDIO::_0x0626A247D2405330()))
			{
				if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(AUDIO::_0x0626A247D2405330()))
			{
				if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	if ((func_253() || func_252(Global_440000.f_2559E)) || func_251())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			iVar1 = func_250(AUDIO::_0x0626A247D2405330(), 0);
			if (((VEHICLE::_0xE33FFA906CE74880(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("APC") && iVar1 != 4294967295)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("AKULA") && iVar1 != 4294967295)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("RIOT2") && iVar1 == 0) && func_249(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != 4294967295))
			{
				return 0;
			}
		}
	}
	if (func_246(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	return 1;
}

int func_246(int iParam0)//Position - 0x93EC
{
	if (iParam0 != func_248())
	{
		if (func_247(iParam0, 1, 1))
		{
			return Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295;
		}
		else if ((Global_140859 && iParam0 == CAM::_0xDC9DA9E8789F5246()) && func_247(iParam0, 1, 0))
		{
			return Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295;
		}
	}
	return 0;
}

int func_247(int iParam0, bool bParam1, bool bParam2)//Position - 0x9452
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

int func_248()//Position - 0x949C
{
	return 4294967295;
}

int func_249(int iParam0, int iParam1)//Position - 0x94A5
{
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
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
					if (AUDIO::GET_VEHICLE_DEFAULT_HORN(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_250(int iParam0, int iParam1)//Position - 0x9507
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = 4294967295;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, 0))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0) == iParam0)
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

var func_251()//Position - 0x958C
{
	return Global_255C02.f_10;
}

bool func_252(int iParam0)//Position - 0x959A
{
	return iParam0 == 51;
}

var func_253()//Position - 0x95A7
{
	return Global_255C02.f_F;
}

bool func_254()//Position - 0x95B5
{
	return MISC::GET_GAME_TIMER() <= Global_43D7.f_16F1 + 100;
}

void func_255(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x95CA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1417C7 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		func_139(uParam0, 0, 0);
	}
	if (func_15(vParam2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_256())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_A;
	if (iParam3 == 1726668277)
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
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, vParam2, 1, 4294967295, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	BRAIN::TASK_LOOK_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iParam1, 4294967295, iVar3, iVar4);
	GRAPHICS::_START_SCREEN_EFFECT("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	unk_0x1190AB7024CBD8CB(4294967295, "FocusIn", "HintCamSounds", 1);
	uParam0->f_B = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_256()//Position - 0x96DA
{
	return func_257(CAM::_0xDC9DA9E8789F5246());
}

int func_257(int iParam0)//Position - 0x96EA
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_258(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x9709
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
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
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
				{
					if (func_262(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_261(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_261(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_262(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_241(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
					{
						if (!func_262(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_261(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_261(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_262(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
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
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
				{
					if (!func_262(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_261(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_261(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1) || BRAIN::GET_IS_TASK_ACTIVE(AUDIO::_0x0626A247D2405330(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_262(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
					{
						if (func_260(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_259(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1) || func_259(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1) || BRAIN::GET_IS_TASK_ACTIVE(AUDIO::_0x0626A247D2405330(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_260(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_241(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_245(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_264();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_259(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9A75
{
	if (!func_245(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(CAM::_0xDC9DA9E8789F5246()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_260(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9AC7
{
	if (!func_245(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_261(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9B10
{
	if (!func_245(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(CAM::_0xDC9DA9E8789F5246()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (unk_0xE11F00B4AC919F45(0, 80) && MISC::GET_GAME_TIMER() > Global_74)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_262(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9B6F
{
	if (!func_245(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (unk_0xE11F00B4AC919F45(0, 80) && MISC::GET_GAME_TIMER() > Global_74)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_263(int iParam0)//Position - 0x9BC5
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_264()//Position - 0x9C20
{
	MISC::SET_BIT(&Global_950, 4);
}

void func_265()//Position - 0x9C30
{
	switch (iLocal_69)
	{
		case 0:
			if (func_116(iLocal_68, 0))
			{
				func_278();
				func_276(33);
				HUD::_0x14621BB1DF14E2B2(2);
				GRAPHICS::_0x54E22EA2C1956A8D(0.1f);
				if (func_351())
				{
					func_273(0, 4294967295, 1);
					func_40(500, 1);
					iLocal_69 = 2;
				}
				else
				{
					if (func_32(0))
					{
						func_118(AUDIO::_0x0626A247D2405330(), 1228.635f, -348.4277f, 68.0929f, 86.7244f);
						func_267(1228.635f, -348.4277f, 68.0929f, 1112014848, 12, 5000, 0, 0);
						func_40(500, 1);
					}
					func_266();
					if (iLocal_68 == 2)
					{
						iLocal_69 = 0;
					}
					else
					{
						iLocal_69 = 2;
					}
				}
			}
			break;
		
		case 2:
			func_104(0);
			break;
	}
}

void func_266()//Position - 0x9CF8
{
}

void func_267(vector3 vParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x9D00
{
	var uVar0;
	int iVar1;
	
	uVar0 = STREAMING::FORMAT_FOCUS_HEADING(vParam0, iParam1, iParam2, 127);
	if (STREAMING::_0x07C313F94746702C(uVar0))
	{
		iVar1 = (MISC::GET_GAME_TIMER() + iParam3);
		while (!STREAMING::_0x7D41E9D2D17C5B2D(uVar0) && MISC::GET_GAME_TIMER() < iVar1)
		{
			if (bParam5)
			{
				func_269(0);
			}
			if (bParam4)
			{
				func_268();
			}
			SYSTEM::WAIT(0);
		}
		if (MISC::GET_GAME_TIMER() < iVar1)
		{
		}
		STREAMING::_0x1EE7D8DF4425F053(uVar0);
	}
}

void func_268()//Position - 0x9D70
{
	Global_434C.f_6 = 1;
}

void func_269(int iParam0)//Position - 0x9D7E
{
	if (func_272())
	{
		return;
	}
	if (!Global_38B1.f_1 == 1)
	{
		if (func_68(0))
		{
			func_270(iParam0);
		}
		MISC::SET_BIT(&Global_950, 2);
	}
}

void func_270(int iParam0)//Position - 0x9DB1
{
	if (func_272())
	{
		return;
	}
	if (Global_3959)
	{
		func_271(0, 0);
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
	if (!func_50())
	{
		Global_38B1.f_1 = 3;
	}
}

void func_271(bool bParam0, bool bParam1)//Position - 0x9E2B
{
	if (bParam0)
	{
		if (func_68(0))
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

bool func_272()//Position - 0x9E9F
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

void func_273(int iParam0, int iParam1, int iParam2)//Position - 0x9EB1
{
	if (func_351() && func_275())
	{
		while (Global_16C2B != 6)
		{
			SYSTEM::WAIT(0);
		}
		MISC::SET_GAME_PAUSED(0);
		if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				PED::CLEAR_PED_WETNESS(AUDIO::_0x0626A247D2405330());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iParam0, 0))
						{
							PED::SET_PED_INTO_VEHICLE(AUDIO::_0x0626A247D2405330(), iParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
			{
				PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
			}
		}
		GRAPHICS::_STOP_ALL_SCREEN_EFFECTS();
		func_274(0);
	}
}

void func_274(int iParam0)//Position - 0x9F75
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_16C30.f_14), 13);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_16C30.f_14), 13);
	}
}

bool func_275()//Position - 0x9F9E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_16C30.f_14, 13);
}

void func_276(int iParam0)//Position - 0x9FB2
{
	Global_15C5E = 0;
	switch (iParam0)
	{
		case 72:
			func_277(2);
			func_277(4);
			break;
		
		case 73:
			func_277(0);
			func_277(1);
			func_277(7);
			break;
		
		case 92:
			func_277(10);
			func_277(9);
			func_277(13);
			func_277(6);
			break;
		
		case 68:
			func_277(11);
			break;
		
		case 78:
			func_277(14);
			break;
		
		case 79:
			func_277(3);
			break;
		
		default:
			break;
	}
}

void func_277(int iParam0)//Position - 0xA040
{
	MISC::SET_BIT(&Global_15C5E, iParam0);
}

void func_278()//Position - 0xA052
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
		{
			func_279(iVar0, unk_0x8000C77B5F336760(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 24, 0);
		}
	}
}

void func_279(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0xA08F
{
	struct<60> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[25]) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_11188.f_1E4[25], 0))
			{
				if (Global_11188.f_1E4[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("BUS")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("TOURBUS"))
			{
				return;
			}
		}
		func_326(iParam3);
		Var0.f_9 = 49;
		Var0.f_3B = 2;
		func_321(iParam0, &Var0);
		if (func_15(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { unk_0x8000C77B5F336760(iParam0, true) };
			fParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_11564 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_314(iParam3, &Var0, vParam1, fParam2, func_320(iParam0));
		func_280(iParam3, iParam0, 0);
	}
}

void func_280(int iParam0, int iParam1, int iParam2)//Position - 0xA1B8
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (!func_311(&(Global_11188.f_22B[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11188.f_22B[0 /*21*/].f_9, 12) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11188.f_22B[0 /*21*/].f_9, 10))
	{
		if (Global_11188.f_22B[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_11513 != 4294967295 && Global_11513 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam1, 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_19E56.f_7F5D.f_12C1 = func_300();
			}
			if (iParam1 != Global_11188.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_299(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0)) && iParam1 != iVar0)
					{
						func_281(iVar0, 145);
					}
				}
				Global_11512 = iParam1;
				Global_11513 = iParam0;
				Global_11514 = iParam2;
			}
		}
	}
}

void func_281(int iParam0, int iParam1)//Position - 0xA2D5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_282(iParam0))
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
	func_321(iParam0, &(Global_19E56.f_7F5D.f_1586));
}

int func_282(int iParam0)//Position - 0xA4D7
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0)) || func_297(iParam0, 0, 0)) || func_297(iParam0, 1, 0)) || func_297(iParam0, 2, 0)) || func_320(iParam0) != 145) || func_296(iParam0)) || func_295(iParam0)) || func_294(iParam0)) || func_293(iParam0)) || !func_283(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_295(iParam0))
		{
		}
		if (func_295(iParam0))
		{
		}
		if (func_297(iParam0, 0, 0))
		{
		}
		if (func_297(iParam0, 1, 0))
		{
		}
		if (func_297(iParam0, 2, 0))
		{
		}
		if (func_320(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_283(int iParam0)//Position - 0xA5B4
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_284(iParam0, 0))
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

int func_284(int iParam0, bool bParam1)//Position - 0xA765
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
		if (!func_292())
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
		if ((((!func_291() && !func_290()) && !func_289()) && !func_288()) && !func_292())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("HOTKNIFE") || iParam0 == joaat("CARBONRS")) || iParam0 == joaat("KHAMELION"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_289())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_287(iParam0))
		{
			return 0;
		}
	}
	if (!func_285(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_285(int iParam0)//Position - 0xA8E5
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_286())
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

int func_286()//Position - 0xA9B1
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

int func_287(int iParam0)//Position - 0xA9C8
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

int func_288()//Position - 0xC6C4
{
	return 0;
}

int func_289()//Position - 0xC6CD
{
	return 1;
}

int func_290()//Position - 0xC6D6
{
	return 1;
}

int func_291()//Position - 0xC6DF
{
	if (DLC::IS_DLC_PRESENT(3068027362))
	{
		return 1;
	}
	return 0;
}

int func_292()//Position - 0xC6F8
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

int func_293(int iParam0)//Position - 0xC7B3
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("SPEEDO") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_284(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_294(int iParam0)//Position - 0xC7F9
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

int func_295(int iParam0)//Position - 0xC834
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

int func_296(int iParam0)//Position - 0xC8B0
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

int func_297(int iParam0, int iParam1, bool bParam2)//Position - 0xC998
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_298(iParam1, iVar0, &sVar1, &iVar2))
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

int func_298(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0xCA09
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

int func_299(int iParam0)//Position - 0xCAE1
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_11188.f_8B[iParam0];
}

var func_300()//Position - 0xCAFD
{
	var uVar0;
	
	func_310(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_309(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_308(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_303(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_302(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_301(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_301(var uParam0, int iParam1)//Position - 0xCB43
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

void func_302(var uParam0, int iParam1)//Position - 0xCBC9
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_303(var uParam0, int iParam1)//Position - 0xCBFC
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_307(*uParam0);
	iVar1 = func_305(*uParam0);
	if (iParam1 < 1 || iParam1 > func_304(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_304(int iParam0, int iParam1)//Position - 0xCC4D
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

var func_305(int iParam0)//Position - 0xCCEF
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_306(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 31), 4294967295, 1)) + 2011;
}

int func_306(bool bParam0, int iParam1, int iParam2)//Position - 0xCD14
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_307(var uParam0)//Position - 0xCD2B
{
	return uParam0 & 15;
}

void func_308(var uParam0, int iParam1)//Position - 0xCD38
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_309(var uParam0, int iParam1)//Position - 0xCD72
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_310(var uParam0, int iParam1)//Position - 0xCDAD
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_311(var uParam0, int iParam1)//Position - 0xCDE9
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 145;
	uParam0->f_D = 4294967295;
	uParam0->f_E = 0;
	uParam0->f_F = { 0f, 0f, 0f };
	uParam0->f_12 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_312(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_312(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_312(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_312(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_312(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_312(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_312(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_312(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_312(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("SCORCHER");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("SEASHARK");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("DUSTER");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_E = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_C = 0;
			uParam0->f_D = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_E = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_C = 1;
			uParam0->f_D = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_E = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_C = 2;
			uParam0->f_D = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_E = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_C = 0;
			uParam0->f_D = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_E = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_C = 1;
			uParam0->f_D = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_E = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_C = 2;
			uParam0->f_D = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_E = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_C = 0;
			uParam0->f_D = 360;
			uParam0->f_F = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_12 = { -738.0606f, -1423.068f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_E = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_C = 1;
			uParam0->f_D = 360;
			uParam0->f_F = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_12 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_E = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_C = 2;
			uParam0->f_D = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_E = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 0;
			uParam0->f_D = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_E = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 1;
			uParam0->f_D = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_E = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 2;
			uParam0->f_D = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_E = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_E = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_E = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_E = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_E = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("TAILGATER");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("PROPTRAILER");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("BJXL");
			uParam0->f_A = 126;
			uParam0->f_B = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("VELUM");
			uParam0->f_A = 157;
			uParam0->f_B = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("CARGOBOB3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TOWTRUCK");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TRASH");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("BARRACKS");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("FIRETRUK");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("VACCA");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("SURANO");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("TORNADO2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("SUPERD");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			uParam0->f_D = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("DINGHY");
			uParam0->f_D = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("BFINJECTION");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_292())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_D = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_292())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_D = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("BLAZER3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("SUBMERSIBLE2");
			uParam0->f_D = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("DUKES2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("DUKES2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("DODO");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("DODO");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_19E56.f_7F5D.f_45[uParam0->f_E /*78*/].f_42;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("MILJET") || uParam0->f_4 == joaat("BESRA")) || uParam0->f_4 == joaat("LUXOR")) || uParam0->f_4 == joaat("SHAMAL")) || uParam0->f_4 == joaat("TITAN")) || uParam0->f_4 == joaat("LUXOR2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_15(Global_19E56.f_7F5D.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19E56.f_7F5D.f_748[uParam0->f_E /*3*/] };
		}
		if (Global_19E56.f_7F5D.f_78E[uParam0->f_E] != -1f)
		{
			uParam0->f_3 = Global_19E56.f_7F5D.f_78E[uParam0->f_E];
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_9, 19))
	{
		if (!func_15(Global_19E56.f_933.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19E56.f_933.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19E56.f_933.f_21B.f_E05[1 /*4*/][uParam0->f_C];
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_9, 20))
	{
		if (!func_15(Global_19E56.f_933.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19E56.f_933.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19E56.f_933.f_21B.f_E05[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_312(int iParam0, int iParam1)//Position - 0xE4E0
{
	struct<82> Var0;
	
	if (func_28(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 49;
		Var0.f_51 = 2;
		func_313(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_313(int iParam0, var uParam1, int iParam2)//Position - 0xE522
{
	int iVar0;
	
	uParam1->f_58 = 1;
	uParam1->f_54 = 255;
	uParam1->f_55 = 255;
	uParam1->f_56 = 255;
	uParam1->f_61 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("TAILGATER");
			if (Global_19E56.f_2361.f_63.f_3A[128] && !Global_19E56.f_2361.f_63.f_3A[131])
			{
				iVar0 = joaat("PREMIER");
			}
			switch (iVar0)
			{
				case joaat("TAILGATER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_B[0] = 1;
					StringCopy(&(uParam1->f_1B), "5MDS003", 16);
					break;
				
				case joaat("PREMIER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_1B), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("BODHI2");
			switch (iVar0)
			{
				case joaat("BODHI2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_1B), "BETTY 32", 16);
					if (Global_19E56.f_2361.f_63.f_3A[119])
					{
						uParam1->f_B[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("BUFFALO2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("BAGGER");
			}
			else if (Global_19E56.f_2361.f_63.f_3A[118])
			{
				iVar0 = joaat("BAGGER");
			}
			else
			{
				iVar0 = joaat("BUFFALO2");
			}
			switch (iVar0)
			{
				case joaat("BAGGER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_1B), "FC88", 16);
					break;
				
				case joaat("BUFFALO2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_A = 1;
					StringCopy(&(uParam1->f_1B), "FC1988", 16);
					uParam1->f_B[0] = 1;
					uParam1->f_B[1] = 1;
					uParam1->f_B[2] = 1;
					uParam1->f_B[3] = 1;
					uParam1->f_B[4] = 1;
					uParam1->f_B[5] = 1;
					uParam1->f_B[6] = 1;
					uParam1->f_B[7] = 1;
					uParam1->f_B[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_314(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0xE77E
{
	if (func_311(&(Global_11188.f_22B[0 /*21*/]), iParam0))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11188.f_22B[0 /*21*/].f_9, 10))
		{
			func_319(iParam0);
			func_318(uParam1, &(Global_19E56.f_7F5D.f_45[Global_11188.f_22B[0 /*21*/].f_E /*78*/]));
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11188.f_22B[0 /*21*/].f_9, 11))
			{
				Global_19E56.f_7F5D.f_748[Global_11188.f_22B[0 /*21*/].f_E /*3*/] = { vParam2 };
				Global_19E56.f_7F5D.f_78E[Global_11188.f_22B[0 /*21*/].f_E] = fParam3;
			}
			else
			{
				Global_19E56.f_7F5D.f_748[Global_11188.f_22B[0 /*21*/].f_E /*3*/] = { 0f, 0f, 0f };
				Global_19E56.f_7F5D.f_78E[Global_11188.f_22B[0 /*21*/].f_E] = -1f;
			}
			Global_19E56.f_7F5D.f_7A6[Global_11188.f_22B[0 /*21*/].f_E] = iParam4 + 1;
			func_315(iParam0, 1);
		}
	}
}

void func_315(int iParam0, bool bParam1)//Position - 0xE87D
{
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_317(iParam0, 0))
		{
			func_316(iParam0, 1, 0);
			func_316(iParam0, 2, 0);
			func_316(iParam0, 3, 0);
			func_316(iParam0, 4, 0);
			func_316(iParam0, 0, 1);
			Global_11188[iParam0] = 1;
		}
	}
	else
	{
		func_316(iParam0, 0, 0);
	}
}

void func_316(int iParam0, int iParam1, bool bParam2)//Position - 0xE8DA
{
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_19E56.f_7F5D[iParam0]), iParam1);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_7F5D[iParam0]), iParam1);
	}
}

bool func_317(int iParam0, int iParam1)//Position - 0xE915
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_7F5D[iParam0], iParam1);
}

void func_318(var uParam0, var uParam1)//Position - 0xE938
{
	uParam1->f_42 = uParam0->f_42;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_3B = { uParam0->f_3B };
	uParam1->f_3E = uParam0->f_3E;
	uParam1->f_3F = uParam0->f_3F;
	uParam1->f_40 = uParam0->f_40;
	uParam1->f_41 = uParam0->f_41;
	uParam1->f_4D = uParam0->f_4D;
	uParam1->f_43 = uParam0->f_43;
	uParam1->f_45 = uParam0->f_45;
	uParam1->f_44 = uParam0->f_44;
	uParam1->f_47 = uParam0->f_47;
	uParam1->f_48 = uParam0->f_48;
	uParam1->f_49 = uParam0->f_49;
	uParam1->f_4A = uParam0->f_4A;
	uParam1->f_4B = uParam0->f_4B;
	uParam1->f_4C = uParam0->f_4C;
}

void func_319(int iParam0)//Position - 0xEA04
{
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (func_311(&(Global_11188.f_22B[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_8B[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_11188.f_8B[iParam0], true, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_11188.f_8B[iParam0]));
			Global_11188.f_8B[iParam0] = 0;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11188.f_22B[0 /*21*/].f_9, 13))
		{
			func_315(iParam0, 0);
		}
	}
}

int func_320(int iParam0)//Position - 0xEA7E
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

void func_321(int iParam0, var uParam1)//Position - 0xEAE1
{
	int iVar0;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		func_325(uParam1);
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
		if (uParam1->f_41 == 4294967295 && !func_324(uParam1->f_42))
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
		func_323(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_4D), func_322(iVar0 + 1));
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

int func_322(int iParam0)//Position - 0xED8C
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

int func_323(int iParam0, var uParam1, var uParam2)//Position - 0xEE3C
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

int func_324(int iParam0)//Position - 0xF02F
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

void func_325(var uParam0)//Position - 0xF04F
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

void func_326(int iParam0)//Position - 0xF0FF
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_319(iParam0);
	func_315(iParam0, 0);
}

void func_327()//Position - 0xF126
{
	func_330();
	func_328();
}

void func_328()//Position - 0xF136
{
	if (!iLocal_188)
	{
		if (func_36(iLocal_200))
		{
			if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_200, 0))
			{
				func_65(iLocal_200, 4294967295);
				func_64(iLocal_200, 318);
				iLocal_188 = 1;
			}
		}
	}
	if (!iLocal_189)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0)
		{
			func_329(320, 0);
			iLocal_189 = 1;
		}
	}
	else if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 0)
	{
		func_63(0, 320);
		iLocal_189 = 0;
	}
}

void func_329(int iParam0, bool bParam1)//Position - 0xF1AE
{
	int iVar0;
	
	Global_DB7F = iParam0;
	if (!Global_DB7D)
	{
		Global_DB7D = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_10AB4)
		{
			if (Global_10AB5[iVar0 /*9*/] == iParam0)
			{
				Global_10AB5[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_330()//Position - 0xF1F8
{
}

void func_331()//Position - 0xF200
{
	if (!bLocal_28 && iLocal_68 != 5)
	{
		if (iLocal_68 > 0)
		{
			func_332();
		}
	}
}

void func_332()//Position - 0xF223
{
	float fVar0;
	int iVar1;
	
	fVar0 = 600f;
	if (!func_36(iLocal_200))
	{
		if (!func_36(iLocal_201) && !func_36(Local_199))
		{
			func_334(1);
			return;
		}
		if (func_36(Local_199) && !func_151(AUDIO::_0x0626A247D2405330(), Local_199, fVar0, 1))
		{
			func_334(2);
		}
	}
	else
	{
		iVar1 = 0;
		if (!func_151(AUDIO::_0x0626A247D2405330(), iLocal_200, fVar0, 1))
		{
			iVar1++;
		}
		if (func_36(iLocal_201))
		{
			if (!func_151(AUDIO::_0x0626A247D2405330(), iLocal_201, fVar0, 1))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_36(Local_199))
		{
			if (!func_151(AUDIO::_0x0626A247D2405330(), Local_199, fVar0, 1))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_334(2);
			return;
		}
		iVar1 = 0;
		if (func_333(iLocal_200))
		{
			iVar1++;
		}
		if (func_36(iLocal_201))
		{
			if (func_333(iLocal_201))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_36(Local_199))
		{
			if (func_333(Local_199))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_334(3);
			return;
		}
	}
}

int func_333(int iParam0)//Position - 0xF369
{
	if (func_36(iParam0))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
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

void func_334(int iParam0)//Position - 0xF3C4
{
	HUD::CLEAR_PRINTS();
	func_60();
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			sLocal_179 = "PRA_FWRECK";
			break;
		
		case 2:
			sLocal_179 = "PRA_FFAR";
			break;
		
		case 3:
			sLocal_179 = "PRA_FSTUCK";
			break;
	}
	iLocal_68 = 5;
	iLocal_69 = 0;
}

int func_335(int iParam0)//Position - 0xF41C
{
	if (func_10(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_336()//Position - 0xF43C
{
	if (!func_96(36))
	{
		func_337(21, 0, 0);
	}
}

void func_337(int iParam0, bool bParam1, int iParam2)//Position - 0xF456
{
	if (bParam1)
	{
		if (!func_349(iParam0, 0, 0))
		{
			if (iParam2 && Global_16C64.f_12[iParam0])
			{
				if (func_348(iParam0) == 3 && !func_347(iParam0))
				{
					func_346(iParam0);
					func_345(iParam0, 0, 0);
					func_339(iParam0, 1, 0);
					func_338(iParam0);
				}
				else
				{
					func_345(iParam0, 1, 0);
					func_338(iParam0);
				}
			}
			else
			{
				func_345(iParam0, 0, 0);
				func_339(iParam0, 1, 0);
				func_338(iParam0);
			}
		}
		else
		{
			func_339(iParam0, 1, 0);
			func_338(iParam0);
		}
	}
	else if (func_349(iParam0, 0, 0))
	{
		func_339(iParam0, 0, 0);
		func_339(iParam0, 1, 0);
		func_338(iParam0);
	}
}

void func_338(int iParam0)//Position - 0xF515
{
	Global_16C64.f_AC[iParam0] = 1;
	Global_16C64.f_AB = 1;
}

void func_339(int iParam0, int iParam1, bool bParam2)//Position - 0xF52F
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
		if (func_344() == 0)
		{
			iVar0 = func_342(func_343(iParam0), 4294967295, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, iParam1);
			func_340(func_343(iParam0), iVar0, 4294967295, 1, 0);
		}
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_29C[iParam0]), iParam1);
	}
}

void func_340(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xF5A1
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_341(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_341(var uParam0)//Position - 0xF5D1
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_46();
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

int func_342(int iParam0, int iParam1, int iParam2)//Position - 0xF605
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_341(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_343(int iParam0)//Position - 0xF637
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

int func_344()//Position - 0xF93A
{
	return Global_6373;
}

void func_345(int iParam0, int iParam1, bool bParam2)//Position - 0xF945
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
		if (func_344() == 0)
		{
			iVar0 = func_342(func_343(iParam0), 4294967295, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_340(func_343(iParam0), iVar0, 4294967295, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_19E56.f_29C[iParam0]), iParam1);
	}
}

void func_346(int iParam0)//Position - 0xF9B7
{
	if (Global_16C64.f_12[iParam0])
	{
		func_345(iParam0, 10, 1);
		func_345(iParam0, 19, 1);
	}
}

bool func_347(int iParam0)//Position - 0xF9DE
{
	return func_349(iParam0, 5, 1);
}

int func_348(int iParam0)//Position - 0xF9EE
{
	switch (iParam0)
	{
		case 4294967295:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
	}
	return 6;
}

int func_349(int iParam0, int iParam1, bool bParam2)//Position - 0xFC95
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
		if (func_344() == 0)
		{
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(func_342(func_343(iParam0), 4294967295, 0), iParam1);
		}
	}
	else
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_29C[iParam0], iParam1);
	}
	return 0;
}

void func_350(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0xFCFF
{
	if (func_351())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_16C30.f_14), 2);
		MISC::SET_GAME_PAUSED(1);
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
		}
		Global_16C2C = { vParam0 };
		Global_16C2F = fParam1;
		Global_16C2B = 1;
		if (iParam2 == 1)
		{
			MISC::SET_BIT(&(Global_16C30.f_14), 14);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_16C30.f_14), 14);
		}
		if (iParam3 == 1)
		{
			MISC::SET_BIT(&(Global_16C30.f_14), 24);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_16C30.f_14), 24);
		}
		func_274(1);
	}
}

int func_351()//Position - 0xFD94
{
	if (Global_16C30 == 10 || Global_16C30 == 9)
	{
		return 1;
	}
	return 0;
}

void func_352()//Position - 0xFDB8
{
	func_367();
	func_365();
	func_358();
	func_355();
	func_353();
}

void func_353()//Position - 0xFDD4
{
	iLocal_374[0] = 0;
	iLocal_374[1] = 0;
	iLocal_374[2] = 0;
	Local_73[0 /*8*/] = { func_354("FP1_WANTM", "FP1_LOSTM", "FP1_THEREM", "FP1_CHATFM", "", "FP1_CHATTM") };
	Local_73[1 /*8*/] = { func_354("FP1_WANTT", "FP1_LOSTT", "FP1_THERET", "FP1_CHATFM", "FP1_CHATFT", "") };
	Local_73[2 /*8*/] = { func_354("FP1_WANTF", "FP1_LOSTF", "FP1_THEREF", "", "FP1_CHATFT", "FP1_CHATTM") };
}

struct<8> func_354(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)//Position - 0xFE5D
{
	struct<8> Var0;
	
	Var0 = 6;
	Var0[0] = sParam0;
	Var0[1] = sParam1;
	Var0[5] = sParam2;
	Var0[2] = sParam3;
	Var0[3] = sParam4;
	Var0[4] = sParam5;
	return Var0;
}

void func_355()//Position - 0xFE9B
{
	Local_46[0 /*25*/] = { func_357(1203.146f, -337.3543f, 67.9314f, 1245.118f, -348.5059f, 68.2099f, 253.1908f, 0) };
	func_356(&(Local_46[0 /*25*/]), vLocal_185, 0, 15f, 5f, 270f, 3, 1192.006f, -631.4703f, 61.6972f, 10f, 10f, 5f);
	Local_46[1 /*25*/] = { func_357(1215.084f, -339.3139f, 68.1323f, 964.9214f, -555.212f, 58.0211f, 39.645f, 0) };
	func_356(&(Local_46[1 /*25*/]), vLocal_185, 0, 15f, 10f, 270f, 3, 1103.29f, -764.532f, 56.633f, 10f, 10f, 5f);
	Local_46[2 /*25*/] = { func_357(1179.533f, -361.3286f, 67.4559f, 929.8701f, -619.4534f, 56.4632f, 164.3631f, 0) };
	func_356(&(Local_46[2 /*25*/]), vLocal_185, 0, 15f, 10f, 270f, 3, 933.3745f, -615.9453f, 56.3041f, 10f, 10f, 5f);
	Local_46[3 /*25*/] = { func_357(1107.674f, -364.0569f, 65.9581f, 1099.266f, -775.0809f, 57.3525f, 178.2038f, 0) };
	func_356(&(Local_46[3 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[4 /*25*/] = { func_357(1069.279f, -393.5795f, 66.0262f, 1065.364f, -389.9561f, 66.1504f, 220.1611f, 0) };
	func_356(&(Local_46[4 /*25*/]), vLocal_185, 0, 5f, 30f, 128.1732f, 3, 1069.718f, -393.9912f, 66.0261f, 10f, 10f, 5f);
	Local_46[5 /*25*/] = { func_357(1031.673f, -424.599f, 64.5439f, 1027.179f, -420.6656f, 64.6268f, 178.2038f, joaat("p_binbag_01_s")) };
	func_356(&(Local_46[5 /*25*/]), 1028.201f, -428.3677f, 64.3571f, 1, 15f, 2f, 128.3915f, 1, 1027.179f, -420.6656f, 64.6268f, 10f, 10f, 5f);
	Local_46[6 /*25*/] = { func_357(942.1528f, -488.8956f, 59.3129f, 932.0198f, -489.3886f, 58.9212f, 202.5785f, joaat("p_binbag_01_s")) };
	func_356(&(Local_46[6 /*25*/]), 930.7186f, -494.9253f, 58.616f, 1, 15f, 2f, 119.6518f, 1, 952.9781f, -482.5082f, 60.0003f, 10f, 10f, 5f);
	Local_46[7 /*25*/] = { func_357(868.2734f, -529.5473f, 56.2071f, 865.0042f, -522.4746f, 56.3363f, 241.9711f, joaat("p_binbag_01_s")) };
	func_356(&(Local_46[7 /*25*/]), 865.2349f, -535.8759f, 56.1574f, 1, 15f, 2f, 162.7219f, 1, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[8 /*25*/] = { func_357(874.8076f, -571.2073f, 56.2987f, 983.125f, -541.9902f, 58.5929f, 49.7653f, 0) };
	func_356(&(Local_46[8 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[9 /*25*/] = { func_357(931.5218f, -614.2144f, 56.3119f, 928.6471f, -620.711f, 56.4611f, -108.06f, joaat("p_binbag_01_s")) };
	func_356(&(Local_46[9 /*25*/]), 940.4086f, -622.1787f, 56.3003f, 1, 15f, 2f, 228.1176f, 1, 918.6716f, -602.9258f, 56.3395f, 10f, 10f, 5f);
	Local_46[10 /*25*/] = { func_357(964.9758f, -645.9614f, 56.4465f, 927.1033f, -575.4162f, 56.5329f, 55.9317f, 0) };
	func_356(&(Local_46[10 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[11 /*25*/] = { func_357(983.4438f, -683.1442f, 56.4087f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_356(&(Local_46[11 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[12 /*25*/] = { func_357(1016.261f, -731.546f, 56.555f, 1011.801f, -733.0652f, 56.7435f, 314.5626f, joaat("p_binbag_01_s")) };
	func_356(&(Local_46[12 /*25*/]), 1020.251f, -736.815f, 56.6235f, 1, 15f, 2f, 220.7804f, 1, 1011.238f, -724.7085f, 56.5183f, 10f, 10f, 5f);
	Local_46[13 /*25*/] = { func_357(1164.126f, -762.2866f, 56.6656f, 1099.342f, -775.4273f, 57.3525f, 177.5729f, 0) };
	func_356(&(Local_46[13 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[14 /*25*/] = { func_357(1199.339f, -678.0995f, 59.9051f, 1205.415f, -672.1282f, 60.1445f, 105.2374f, 0) };
	func_356(&(Local_46[14 /*25*/]), vLocal_185, 0, 15f, 2f, 12.1103f, 3, 1199.339f, -678.0995f, 59.9051f, 10f, 10f, 5f);
	Local_46[15 /*25*/] = { func_357(1183.445f, -582.9476f, 63.0962f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_356(&(Local_46[15 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[16 /*25*/] = { func_357(1192.479f, -485.1086f, 64.7195f, 1264.359f, -719.084f, 63.328f, 65.0519f, 0) };
	func_356(&(Local_46[16 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[17 /*25*/] = { func_357(1212.693f, -400.0532f, 67.0971f, 1284.109f, -676.728f, 65.0225f, 69.9898f, 0) };
	func_356(&(Local_46[17 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[18 /*25*/] = { func_357(1114.573f, -232.3706f, 68.0949f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_356(&(Local_46[18 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	iLocal_187 = 19;
}

void func_356(var uParam0, vector3 vParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, vector3 vParam7, vector3 vParam8)//Position - 0x10681
{
	uParam0->f_3 = { vParam1 };
	uParam0->f_6 = fParam3;
	uParam0->f_7 = fParam4;
	uParam0->f_8 = fParam5;
	uParam0->f_9 = iParam2;
	uParam0->f_A = iParam6;
	uParam0->f_B = { vParam7 };
	uParam0->f_E = { vParam8 };
}

struct<25> func_357(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0x106C5
{
	struct<25> Var0;
	
	Var0.f_9 = 1;
	Var0.f_A = 3;
	Var0 = { vParam0 };
	Var0.f_13 = { vParam1 };
	Var0.f_16 = fParam2;
	Var0.f_17 = iParam3;
	return Var0;
}

void func_358()//Position - 0x106FF
{
	vector3 vVar0[6];
	
	vVar0[0 /*3*/] = { 1251.308f, -400.6231f, 68.0926f };
	vVar0[1 /*3*/] = { 1183.993f, -403.3443f, 66.8734f };
	vVar0[2 /*3*/] = { 1161.54f, -372.6073f, 66.6034f };
	vVar0[3 /*3*/] = { 1167.644f, -273.7987f, 67.9705f };
	vVar0[4 /*3*/] = { 1252.362f, -247.353f, 77.5631f };
	vVar0[5 /*3*/] = { 1330.062f, -341.0342f, 100.3476f };
	func_359(&vVar0, 6);
}

void func_359(var uParam0, int iParam1)//Position - 0x10797
{
	int iVar0;
	
	func_364(&uLocal_74);
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		func_363(&uLocal_74, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	func_362(&uLocal_74);
	func_360(&uLocal_126, &uLocal_74, 50f);
}

void func_360(var uParam0, var uParam1, float fParam2)//Position - 0x107E0
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	
	if (uParam1->f_2E < 3)
	{
	}
	iVar0 = (uParam1->f_2E - 1);
	iVar1 = 0;
	iVar2 = 1;
	uParam0->f_2E = uParam1->f_2E;
	while (iVar1 < uParam1->f_2E)
	{
		vVar3 = { *(uParam1[iVar1 /*3*/]) - *(uParam1[iVar0 /*3*/]) };
		vVar4 = { *(uParam1[iVar2 /*3*/]) - *(uParam1[iVar1 /*3*/]) };
		vVar3 = { vVar3 / FtoV(SYSTEM::SQRT(((vVar3.x * vVar3.x) + (vVar3.y * vVar3.y)))) };
		vVar4 = { vVar4 / FtoV(SYSTEM::SQRT(((vVar4.x * vVar4.x) + (vVar4.y * vVar4.y)))) };
		vVar5 = { vVar3 - vVar4 };
		vVar5 = { vVar5 / FtoV(SYSTEM::SQRT(((vVar5.x * vVar5.x) + (vVar5.y * vVar5.y)))) };
		if (func_361(uParam1, *(uParam1[iVar1 /*3*/]) + vVar5))
		{
			vVar5 = { -vVar5 };
		}
		*(uParam0[iVar1 /*3*/]) = { *(uParam1[iVar1 /*3*/]) + vVar5 * Vector(fParam2, fParam2, fParam2) };
		iVar0 = iVar1;
		iVar1++;
		iVar2 = (iVar2 + 1 % uParam1->f_2E);
	}
}

bool func_361(var uParam0, struct<2> Param1, Vector3 vParam2)//Position - 0x108ED
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_2E < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_2E - 1);
	while (iVar1 < uParam0->f_2E)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

void func_362(var uParam0)//Position - 0x109A9
{
	int iVar0;
	float fVar1;
	
	if (uParam0->f_33 == 0)
	{
	}
	if (uParam0->f_2E < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_2E)
	{
		uParam0->f_2F = { uParam0->f_2F + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_2F = { uParam0->f_2F / FtoV(SYSTEM::TO_FLOAT(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_2E)
	{
		fVar1 = SYSTEM::VDIST2(uParam0->f_2F, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_32)
		{
			uParam0->f_32 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_32 = SYSTEM::SQRT(uParam0->f_32);
	uParam0->f_33 = 0;
}

void func_363(var uParam0, vector3 vParam1)//Position - 0x10A49
{
	if (uParam0->f_33 == 0)
	{
	}
	if (uParam0->f_2E >= 15)
	{
	}
	*(uParam0[uParam0->f_2E /*3*/]) = { vParam1 };
	uParam0->f_2E++;
}

void func_364(var uParam0)//Position - 0x10A7A
{
	if (uParam0->f_33)
	{
	}
	uParam0->f_2E = 0;
	uParam0->f_2F = { 0f, 0f, 0f };
	uParam0->f_32 = 0f;
	uParam0->f_33 = 1;
}

void func_365()//Position - 0x10AA1
{
	Local_197 = { func_366(1200.61f, -344.2721f, 68.0424f, 269.2015f, joaat("s_m_y_garbage")) };
	Local_198 = { func_366(1202.42f, -341.6034f, 67.9378f, 273.1125f, joaat("s_m_y_garbage")) };
}

struct<14> func_366(vector3 vParam0, float fParam1, int iParam2)//Position - 0x10AEF
{
	struct<14> Var0;
	
	Var0.f_1 = { vParam0 };
	Var0.f_4 = fParam1;
	Var0.f_5 = iParam2;
	return Var0;
}

void func_367()//Position - 0x10B12
{
	Local_199 = { func_368(1203.146f, -337.3543f, 67.9314f, 189.7047f, joaat("TRASH")) };
}

struct<6> func_368(vector3 vParam0, float fParam1, int iParam2)//Position - 0x10B3C
{
	struct<6> Var0;
	
	Var0.f_1 = { vParam0 };
	Var0.f_4 = fParam1;
	Var0.f_5 = iParam2;
	return Var0;
}

void func_369()//Position - 0x10B5E
{
	func_234(1);
	func_380(1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("TRASH"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("TOWTRUCK"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("s_m_y_garbage"), false);
	func_62();
	func_379();
	func_378();
	func_370(0);
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_370(bool bParam0)//Position - 0x10BA3
{
	vector3 vVar0;
	
	if (bParam0)
	{
	}
	PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
	BRAIN::SET_SCENARIO_TYPE_ENABLED("DRIVE", 1);
	BRAIN::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", 1);
	BRAIN::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", 1);
	BRAIN::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_37();
	func_377();
	func_376();
	func_375();
	func_374();
	func_216();
	if (bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
		{
			if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
			{
				if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_200, 0))
					{
						vVar0 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
						ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), vVar0, 1, false, 0, 1);
					}
				}
			}
		}
		func_372();
		HUD::CLEAR_PRINTS();
		func_2();
	}
	else
	{
		func_371();
	}
	HUD::_0x3DDA37128DD1ACA8(0);
	func_139(&uLocal_56, 0, 0);
	if (CAM::DOES_CAM_EXIST(iLocal_184))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
		CAM::DESTROY_CAM(iLocal_184, 0);
	}
}

void func_371()//Position - 0x10C87
{
	func_3();
	func_6(&Local_199);
	func_6(&iLocal_201);
	func_6(&iLocal_200);
	func_5(&Local_197, 1, 0, 1);
	func_5(&Local_198, 1, 0, 1);
	func_6(&iLocal_202);
}

void func_372()//Position - 0x10CC3
{
	Global_3960 = 0;
	func_373();
}

void func_373()//Position - 0x10CD3
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_41C1 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_3DCE = 6;
	}
}

void func_374()//Position - 0x10CF4
{
}

void func_375()//Position - 0x10CFC
{
	if (iLocal_194)
	{
		VEHICLE::REMOVE_VEHICLE_ASSET(joaat("TRASH"));
	}
}

void func_376()//Position - 0x10D13
{
}

void func_377()//Position - 0x10D1B
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_199.f_5);
}

void func_378()//Position - 0x10D2C
{
	func_337(21, 1, 0);
}

void func_379()//Position - 0x10D3C
{
	Global_15C5E = 0;
}

void func_380(int iParam0)//Position - 0x10D49
{
	Global_16209 = iParam0;
}

void func_381()//Position - 0x10D57
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_19E56.f_2361 || func_32(0))
	{
		if (!func_382())
		{
			iVar0 = func_31();
			if (iVar0 != 4294967295)
			{
				if (!func_19(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_1486F[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_24();
		}
	}
}

int func_382()//Position - 0x10DC8
{
	if (((Global_16C30 == 13 || Global_16C30 == 10) || Global_16C30 == 11) || Global_16C30 == 12)
	{
		return 0;
	}
	return 1;
}

