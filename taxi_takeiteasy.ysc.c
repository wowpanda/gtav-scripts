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
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
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
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	vector3 vLocal_77 = { 0f, 0f, 0f };
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	bool bLocal_86 = 0;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 1132396544;
	var uLocal_93 = 1132396544;
	var uLocal_94 = 1132396544;
	var uLocal_95 = 0;
	var uLocal_96 = -1082130432;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 8;
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
	var uLocal_156 = -1;
	var uLocal_157 = 1092616192;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	struct<21> Local_161 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_162[15];
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	struct<2> Local_165 = { 0, 16 } ;
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
	struct<411> Local_231 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = -1;
	var uLocal_240 = -1;
	var uLocal_241 = -1;
	var uLocal_242 = -1;
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
	int iLocal_258 = 0;
	vector3 vLocal_259[1] = {{ 0f, 0f, 0f } };
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	vector3 vLocal_262 = { 0f, 0f, 0f };
	vector3 vLocal_263 = { 0f, 0f, 0f };
	vector3 vLocal_264 = { 0f, 0f, 0f };
	vector3 vLocal_265 = { 0f, 0f, 0f };
	vector3 vLocal_266 = { 0f, 0f, 0f };
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	var uLocal_269 = 0;
	int iLocal_270 = 0;
	float fLocal_271 = 0f;
	float fLocal_272 = 0f;
	float fLocal_273 = 0f;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	bool bLocal_277 = 0;
	bool bLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	char* sLocal_281 = NULL;
	char* sLocal_282 = NULL;
	bool bLocal_283 = 0;
	struct<28> Local_284 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 5;
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
	var uLocal_330 = 1097859072;
	var uLocal_331 = 1500;
	var uLocal_332 = 45;
	var uLocal_333 = 1103626240;
	var uLocal_334 = 5;
	int iLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
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
	iLocal_71 = HUD::_0x4A9923385BDB9DAD();
	iLocal_72 = HUD::_GET_BLIP_INFO_ID_ITERATOR();
	vLocal_77 = { 500f, 500f, 500f };
	iLocal_260 = joaat("a_m_y_soucent_04");
	vLocal_262 = { -1230.55f, -896.7814f, 11.11059f };
	vLocal_263 = { 58.8213f, 293.848f, 109.6124f };
	vLocal_264 = { 62.7742f, 307.4984f, 109.981f };
	vLocal_265 = { 0f, 0f, 0f };
	vLocal_266 = { 0f, 0f, 0f };
	iLocal_267 = 1;
	fLocal_271 = 0f;
	fLocal_272 = 12f;
	sLocal_282 = "random@drunk_driver_1";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_430(2);
		func_429();
	}
	MISC::SET_MISSION_FLAG(1);
	func_416();
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_231.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_231);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)//Position - 0x13A
{
	uParam0->f_2 = AUDIO::_0x0626A247D2405330();
	func_6(&(uParam0->f_F4));
	uParam0->f_1AC = func_2();
}

int func_2()//Position - 0x15B
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(AUDIO::_0x0626A247D2405330());
	if (iVar1 == 0)
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("sp2_dist_driving_car");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("sp1_dist_driving_car");
	}
	else
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	return iVar0;
}

int func_3(int iParam0)//Position - 0x1A6
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_4(int iParam0)//Position - 0x1E3
{
	if (func_5(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_5(int iParam0)//Position - 0x20D
{
	return iParam0 < 3;
}

void func_6(var uParam0)//Position - 0x219
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_3(AUDIO::_0x0626A247D2405330());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, AUDIO::_0x0626A247D2405330(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, AUDIO::_0x0626A247D2405330(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, AUDIO::_0x0626A247D2405330(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, AUDIO::_0x0626A247D2405330(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_7(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2A1
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

void func_8()//Position - 0x33C
{
	if (func_415(&Local_231))
	{
		func_414(&Local_231);
		if (Local_231.f_19A > 0)
		{
			if ((MISC::GET_GAME_TIMER() % 1000) < 50)
			{
			}
			if (func_413(&Local_231, 0))
			{
				func_411();
			}
		}
		else if (func_410(&Local_231, 31) > 5f)
		{
			func_430(2);
			func_429();
		}
	}
	else
	{
		func_409(&Local_231);
		func_375(&Local_231, &uLocal_328);
		func_374(&Local_231, &uLocal_269, 0);
		func_373(&Local_231);
		if (Local_231.f_19A > 2 && iLocal_258 == 0)
		{
			if (!func_372(&Local_231))
			{
				func_339();
			}
			else
			{
				func_333(&Local_231, "Taxi Not Driveable", func_338(&Local_231));
			}
		}
		if (Local_231.f_19A == 9 && iLocal_258 == 0)
		{
			func_309(&Local_231, 0, 0);
			func_307();
			if (bLocal_277)
			{
				if (func_306())
				{
					func_333(&Local_231, "Rider is too damn uncomfortable.", 9);
				}
			}
		}
		switch (Local_231.f_19A)
		{
			case 0:
				func_305(&(vLocal_259[0 /*3*/]), "TAXI_SC_BN_01", 100);
				func_304(&Local_231, &vLocal_259);
				func_301();
				func_300(&Local_231, 16, 4f, 0);
				func_298(&Local_231, vLocal_263, vLocal_264, "TaxiOtis", iLocal_260, 135.3f, 40f);
				func_296(&Local_231);
				func_295(&Local_231, 1);
				break;
			
			case 1:
				if (func_293())
				{
					func_292();
					func_272();
					func_271(&Local_231);
					Local_231.f_E = { vLocal_263 };
					func_295(&Local_231, 3);
				}
				break;
			
			case 3:
				if (func_266(&Local_231, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_231.f_3, 0))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_231.f_3, 3, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_231.f_3, 4, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_231.f_3, 0, 1, 0, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_231.f_3, 1024, true);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_231.f_3, 131072, true);
					}
					func_265(&Local_231, 1, 0);
					func_295(&Local_231, 5);
				}
				break;
			
			case 5:
				if (func_235(&Local_231, 0, 1109393408))
				{
					func_295(&Local_231, 15);
				}
				break;
			
			case 15:
				if (func_234(&Local_231))
				{
					Local_231.f_11 = { vLocal_262 };
					func_231(&Local_231, 9, 1, 0, 0);
					func_230(&Local_231);
					Local_231.f_2E = ENTITY::GET_ENTITY_HEALTH(Local_231.f_4);
					func_229();
					switch (func_228(&Local_231))
					{
						case 2:
							sLocal_281 = "vomit_van";
							break;
						
						case 0:
							sLocal_281 = "vomit_low";
							break;
						
						case 1:
							sLocal_281 = "vomit_outside";
							break;
					}
					func_295(&Local_231, 9);
				}
				if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Local_231.f_4, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_231.f_2, Local_231.f_4, 0))
					{
						func_226(&Local_231);
						func_295(&Local_231, 5);
					}
				}
				break;
			
			case 9:
				if (!iLocal_280)
				{
					if ((func_225(&Local_231, 0) || func_225(&Local_231, 2)) || func_224(&Local_231, 2))
					{
						iLocal_280 = 1;
					}
				}
				if (func_221(&Local_231, 1086324736) && iLocal_258 == 1)
				{
					if (iLocal_261 != 0)
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_261, 0);
						iLocal_261 = 0;
					}
					NETWORK::_0x5E3AA4CA2B6FB0EE(Local_231.f_3);
					bLocal_277 = true;
				}
				switch (iLocal_258)
				{
					case 0:
						if (func_203(&Local_231, 1086324736, 1097859072))
						{
							func_201(&uLocal_287);
							func_200(&Local_284, 3, 0);
							HUD::REMOVE_BLIP(&(Local_231.f_9));
							func_198(&Local_231);
							func_189(&(Local_231.f_F4), Local_231.f_90, "txm1_arrive", 9, 0, 0, 0);
							func_295(&Local_231, 22);
						}
						if ((((func_188(&Local_231) >= 2 && PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) < 1) && !ENTITY::IS_ENTITY_UPSIDEDOWN(Local_231.f_4)) && !(ENTITY::GET_ENTITY_ROLL(Local_231.f_4) <= -145f || ENTITY::GET_ENTITY_ROLL(Local_231.f_4) >= 145f)) && !bLocal_277)
						{
							if (func_187())
							{
								func_185();
								func_231(&Local_231, 61, 1, 0, 0);
							}
							Local_231.f_4C = 0;
							iLocal_258 = 1;
						}
						if (CAM::DOES_CAM_EXIST(Local_231))
						{
							CAM::DESTROY_CAM(Local_231, 0);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
						}
						break;
					
					case 1:
						if (!bLocal_277)
						{
							func_183(&(Local_231.f_3));
						}
						if (func_180())
						{
							if (bLocal_278)
							{
								func_231(&Local_231, 62, 1, 0, 0);
								iLocal_258 = 0;
							}
							else
							{
								func_231(&Local_231, 63, 1, 0, 0);
								iLocal_258 = 0;
							}
							CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
						}
						if (!func_175(&Local_231))
						{
							func_163(&Local_231, 1);
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(Local_231.f_4, Local_231.f_11, 2f, 2f, 20f, false, true, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
						}
						break;
				}
				break;
			
			case 22:
				if (!func_187())
				{
					if (bLocal_277)
					{
						func_162(0);
					}
					else
					{
						func_162(1);
						func_161(&Local_231, 0);
					}
					func_295(&Local_231, 27);
				}
				break;
			
			case 27:
				if (func_151(&Local_231, 1))
				{
					func_150(&Local_231);
					func_231(&Local_231, 104, 1, 1, 0);
					func_295(&Local_231, 29);
				}
				break;
			
			case 28:
				if (func_110(&uLocal_230, &Local_231, &(Local_231.f_3), &uLocal_251, 1))
				{
					func_231(&Local_231, 104, 1, 1, 0);
					func_295(&Local_231, 29);
				}
				break;
			
			case 29:
				if (func_79(&Local_231, &iLocal_335))
				{
					func_10(1, &Local_231, 1);
					func_295(&Local_231, 30);
				}
				if (!PED::IS_PED_INJURED(Local_231.f_3))
				{
					if (func_9(Local_231.f_3, -1226.25f, -902.82f, 11.33f, 1) < 3f)
					{
						PED::SET_PED_RESET_FLAG(Local_231.f_3, 60, true);
					}
				}
				break;
			
			case 30:
				if (!PED::IS_PED_INJURED(Local_231.f_3))
				{
					if (func_9(Local_231.f_3, -1226.25f, -902.82f, 11.33f, 1) < 3f)
					{
						PED::SET_PED_RESET_FLAG(Local_231.f_3, 60, true);
					}
					if (func_9(Local_231.f_3, Local_231.f_1D, 1) < 1f)
					{
						func_429();
					}
				}
				else
				{
					func_429();
				}
				break;
			}
	}
}

float func_9(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x98D
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(iParam0, true), vParam1, bParam2);
}

void func_10(bool bParam0, var uParam1, bool bParam2)//Position - 0x9B7
{
	if (bParam0)
	{
		func_53(uParam1);
		if (!PED::IS_PED_INJURED(uParam1->f_3))
		{
			PED::SET_PED_CONFIG_FLAG(uParam1->f_3, 317, true);
		}
	}
	else
	{
		func_51(1, 0);
	}
	func_11(uParam1, bParam2);
}

void func_11(var uParam0, bool bParam1)//Position - 0x9F3
{
	func_414(uParam0);
	if (func_187())
	{
		func_49();
	}
	func_47();
	HUD::CLEAR_PRINTS();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	func_43(0);
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, false);
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(uParam0->f_4);
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
	}
	func_40(uParam0->f_E, 1);
	func_38(uParam0->f_E, 1, 1114636288);
	func_37(&(uParam0->f_F4), 3);
	PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 32, true);
	if (func_34())
	{
		PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	func_24(0, 1, 1, 0, 0);
	HUD::DISPLAY_RADAR(true);
	unk_0x59B038076F830627(true);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, 0);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	if (func_23(Global_19E56.f_4A7D, 4))
	{
		func_21(&(Global_19E56.f_4A7D), 4);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_20(), false);
	}
	if (bParam1)
	{
		func_19(uParam0);
	}
	func_18(uParam0);
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@towingcome_here");
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_16(uParam0->f_19B);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_12(&iLocal_82) * 1000f)), 12, 0);
}

float func_12(var uParam0)//Position - 0xB46
{
	if (func_15(uParam0))
	{
		if (func_14(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_13(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_13(bool bParam0)//Position - 0xB82
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

bool func_14(var uParam0)//Position - 0xBDA
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 2);
}

bool func_15(var uParam0)//Position - 0xBEA
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 1);
}

void func_16(int iParam0)//Position - 0xBFA
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_17(iParam0)}, 6);
		if (!MISC::IS_STRING_NULL(&uVar0))
		{
		}
	}
}

struct<8> func_17(int iParam0)//Position - 0xC21
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_18(var uParam0)//Position - 0xCEA
{
	VEHICLE::_REMOVE_SPEED_ZONE(uParam0->f_33[0]);
}

void func_19(var uParam0)//Position - 0xCFE
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
			{
				PED::RESET_PED_LAST_VEHICLE(uParam0->f_3);
			}
			ENTITY::SET_ENTITY_HEALTH(uParam0->f_3, false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uParam0->f_19D, 1862763509);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				BRAIN::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3238002688);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				BRAIN::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3238002688);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				BRAIN::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3238002688);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				BRAIN::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3238002688);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_3));
		}
	}
}

int func_20()//Position - 0xDF7
{
	return joaat("TAXI");
}

void func_21(var uParam0, int iParam1)//Position - 0xE04
{
	func_22(uParam0, iParam1);
}

void func_22(var uParam0, int iParam1)//Position - 0xE14
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_23(var uParam0, int iParam1)//Position - 0xE29
{
	return (uParam0 && iParam1) != 0;
}

void func_24(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xE38
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(CAM::_0xDC9DA9E8789F5246());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(CAM::_0xDC9DA9E8789F5246(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 1);
		func_33(1);
		HUD::_0xA8FDB297A8D25FBA();
		HUD::_0xFDB423997FA30340();
		if (Global_38B1.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_32())
			{
				Global_38B1.f_1 = 3;
			}
			Global_3DCE = 5;
		}
		func_31(1, iParam3, iParam2, 0);
		Global_DB7B = 1;
		Global_10B91 = 1;
		Global_11623 = 1;
	}
	else
	{
		func_33(0);
		HUD::_0xE1CD1E48E025E661();
		Global_DB7B = 0;
		if (bParam1)
		{
			CAM::_SET_CAM_EFFECT();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(CAM::_0xDC9DA9E8789F5246(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 0);
		func_31(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && !func_29(CAM::_0xDC9DA9E8789F5246())) && !func_26(CAM::_0xDC9DA9E8789F5246(), 0)) && !func_25()) && !bParam4)
			{
				ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), false);
			}
		}
		else if ((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && !func_29(CAM::_0xDC9DA9E8789F5246())) && !bParam4)
		{
			ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), false);
		}
		Global_11623 = 0;
	}
}

bool func_25()//Position - 0xF61
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 14);
}

bool func_26(int iParam0, int iParam1)//Position - 0xF7E
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_27(4294967295, 0) == 8;
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

int func_27(int iParam0, bool bParam1)//Position - 0xFC9
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_28();
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

int func_28()//Position - 0x100A
{
	return Global_1407E0;
}

int func_29(int iParam0)//Position - 0x1016
{
	if (func_26(iParam0, 0))
	{
		return 1;
	}
	if (func_30())
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

bool func_30()//Position - 0x1058
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

int func_31(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x1069
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

int func_32()//Position - 0x109C
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_33(int iParam0)//Position - 0x10C3
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

int func_34()//Position - 0x10E6
{
	if (!func_36() && !func_35())
	{
		if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			return 1;
		}
	}
	return 0;
}

int func_35()//Position - 0x1111
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_36()//Position - 0x112B
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_37(var uParam0, int iParam1)//Position - 0x1145
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_38(vector3 vParam0, bool bParam1, float fParam2)//Position - 0x1162
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_39(vParam0, 1f, -fParam2, -fParam2, -fParam2) };
	vVar1 = { func_39(vParam0, 1f, fParam2, fParam2, fParam2) };
	vVar0.z = (vVar0.z - 22f);
	vVar1.z = (vVar1.z + 22f);
	if (!bParam1)
	{
		PATHFIND::SET_ROADS_IN_AREA(vVar0, vVar1, false, 1);
	}
	else
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar0, vVar1, true);
		unk_0x02DD9F29D9655E48();
	}
}

Vector3 func_39(vector3 vParam0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x11D7
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	fVar1 = fParam1;
	fVar2 = SYSTEM::COS(fVar1);
	fVar3 = SYSTEM::SIN(fVar1);
	vVar0.x = ((Param2 * fVar2) + (Param2.f_1 * fVar3));
	vVar0.y = ((Param2.f_1 * fVar2) - (Param2 * fVar3));
	vVar4 = { vParam0 + vVar0 };
	return vVar4;
}

void func_40(vector3 vParam0, bool bParam1)//Position - 0x1224
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!func_41(vParam0, func_42(), 0))
	{
		vVar0 = { func_39(vParam0, 1f, -30f, -30f, -10f) };
		vVar1 = { func_39(vParam0, 1f, 30f, 30f, 10f) };
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vVar0, vVar1, bParam1, 1);
	}
}

bool func_41(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x1284
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_42()//Position - 0x12CB
{
	vector3 vVar0;
	
	return vVar0;
}

void func_43(int iParam0)//Position - 0x12D7
{
	if (func_46())
	{
		return;
	}
	if (Global_3959)
	{
		func_44(0, 0);
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
	if (!func_32())
	{
		Global_38B1.f_1 = 3;
	}
}

void func_44(bool bParam0, bool bParam1)//Position - 0x1351
{
	if (bParam0)
	{
		if (func_45(0))
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

int func_45(int iParam0)//Position - 0x13C5
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

bool func_46()//Position - 0x141F
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

void func_47()//Position - 0x1431
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_16094[iVar0 /*17*/] && !Global_16094[iVar0 /*17*/].f_1)
		{
			if (Global_16094[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_16094[iVar0 /*17*/].f_5 != 88 && Global_16094[iVar0 /*17*/].f_5 != 89) && Global_16094[iVar0 /*17*/].f_5 != 92)
				{
					func_48(Global_16094[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_48(int iParam0, bool bParam1)//Position - 0x14B8
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

void func_49()//Position - 0x14F6
{
	Global_3960 = 0;
	func_50();
}

void func_50()//Position - 0x1506
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_41C1 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_3DCE = 6;
	}
}

void func_51(int iParam0, int iParam1)//Position - 0x1527
{
	switch (iParam0)
	{
		case 0:
			Global_19E56.f_4A7D.f_16[0]++;
			func_52("Fares Completed ++ = ", Global_19E56.f_4A7D.f_16[0]);
			break;
		
		case 1:
			Global_19E56.f_4A7D.f_16[1]++;
			func_52("Fares Failed ++ = ", Global_19E56.f_4A7D.f_16[1]);
			break;
		
		case 2:
			Global_19E56.f_4A7D.f_16[2]++;
			func_52("Fares Accepted ++ ", Global_19E56.f_4A7D.f_16[2]);
			break;
		
		case 3:
			Global_19E56.f_4A7D.f_16[3]++;
			func_52("Fares Expired ++ ", Global_19E56.f_4A7D.f_16[3]);
			break;
		
		case 13:
			Global_19E56.f_4A7D.f_16[13]++;
			func_52("Passengers run ++ = ", Global_19E56.f_4A7D.f_16[13]);
			break;
		
		case 14:
			Global_19E56.f_4A7D.f_16[14]++;
			func_52("Passenger Forced to Pay ++ = ", Global_19E56.f_4A7D.f_16[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_19E56.f_4A7D.f_16[4])
				{
					Global_19E56.f_4A7D.f_16[4] = iParam1;
					func_52("This distance ", iParam1);
					func_52(" is longer than current best", Global_19E56.f_4A7D.f_16[4]);
				}
				else
				{
					func_52("Longest Distance Not Beat ", Global_19E56.f_4A7D.f_16[4]);
				}
			}
			break;
		
		case 5:
			Global_19E56.f_4A7D.f_16[5] = (Global_19E56.f_4A7D.f_16[5] + iParam1);
			func_52("Total Distance w/ Passenger = ", Global_19E56.f_4A7D.f_16[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_19E56.f_4A7D.f_16[6]++;
			}
			else
			{
				Global_19E56.f_4A7D.f_16[6] = (Global_19E56.f_4A7D.f_16[6] + iParam1);
			}
			func_52("Wanted Levels ++ = ", Global_19E56.f_4A7D.f_16[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_19E56.f_4A7D.f_16[7] = (Global_19E56.f_4A7D.f_16[7] + iParam1);
			}
			else
			{
				Global_19E56.f_4A7D.f_16[7]++;
			}
			func_52("Wanted Levels Lost = ", Global_19E56.f_4A7D.f_16[7]);
			break;
		
		case 8:
			Global_19E56.f_4A7D.f_16[8]++;
			func_52("Taxis wrecked ++ = ", Global_19E56.f_4A7D.f_16[8]);
			break;
		
		case 9:
			Global_19E56.f_4A7D.f_16[9]++;
			func_52("Horn Honked ++ = ", Global_19E56.f_4A7D.f_16[9]);
			break;
		
		case 10:
			Global_19E56.f_4A7D.f_16[10] = (Global_19E56.f_4A7D.f_16[10] + iParam1);
			func_52("Total Money Earned = ", Global_19E56.f_4A7D.f_16[10]);
			break;
		
		case 11:
			Global_19E56.f_4A7D.f_16[11] = (Global_19E56.f_4A7D.f_16[11] + iParam1);
			func_52("Total Tips Earned = ", Global_19E56.f_4A7D.f_16[11]);
			break;
		
		case 12:
			if (iParam1 > Global_19E56.f_4A7D.f_16[12])
			{
				Global_19E56.f_4A7D.f_16[12] = iParam1;
				func_52("New Highest Tip = ", Global_19E56.f_4A7D.f_16[12]);
			}
			else
			{
				func_52("Highest Tip Not Reached = ", Global_19E56.f_4A7D.f_16[12]);
			}
			break;
	}
}

void func_52(char* sParam0, int iParam1)//Position - 0x1918
{
}

void func_53(var uParam0)//Position - 0x1920
{
	func_51(0, 0);
	if (uParam0->f_19B != 9)
	{
		func_430(1);
		func_65(15, 1);
	}
	func_63(&(Global_19E56.f_4A7D), 1024);
	if (!func_23(Global_19E56.f_4A7D, 64))
	{
		func_54(func_61(func_62(uParam0)), 0, 0);
	}
}

void func_54(int iParam0, int iParam1, int iParam2)//Position - 0x1974
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
		func_60((891 + iParam0), 1, 4294967295, 1);
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
		func_55();
	}
}

void func_55()//Position - 0x1A5C
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
		func_59(13, SYSTEM::FLOOR(Global_19E56.f_27B6.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_11625)
		{
			if (func_58() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_19D4C = 0;
				}
				if (!Global_DB75)
				{
					func_56();
				}
			}
		}
	}
}

int func_56()//Position - 0x1F1D
{
	if (func_57(0))
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

bool func_57(bool bParam0)//Position - 0x1F68
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

int func_58()//Position - 0x1F93
{
	return Global_6373;
}

int func_59(int iParam0, int iParam1)//Position - 0x1F9E
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

int func_60(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1FEF
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
		iParam2 = func_28();
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

int func_61(int iParam0)//Position - 0x2557
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_62(var uParam0)//Position - 0x25ED
{
	return uParam0->f_19B;
}

void func_63(var uParam0, int iParam1)//Position - 0x25FA
{
	func_64(uParam0, iParam1);
}

void func_64(var uParam0, int iParam1)//Position - 0x260A
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_65(int iParam0, int iParam1)//Position - 0x261B
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_66(iParam0, iParam1);
}

int func_66(int iParam0, int iParam1)//Position - 0x2636
{
	if (func_78(14) && !func_77(iParam0))
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
	if (func_76(&Global_412216))
	{
		if (func_74(&Global_412216, iParam0))
		{
			return 0;
		}
		if (func_67(&Global_412216, iParam0))
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

int func_67(var uParam0, int iParam1)//Position - 0x26D3
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_78(14) && !func_77(iParam1))
	{
		return 0;
	}
	if (func_74(uParam0, iParam1))
	{
		return 0;
	}
	if (func_73(uParam0) < 0f)
	{
		func_72(uParam0, 0);
	}
	func_70(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_68(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_68(var uParam0, int iParam1)//Position - 0x2784
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_78(14) && !func_77(iParam1))
	{
		return 0;
	}
	if (func_74(uParam0, iParam1))
	{
		return 0;
	}
	if (func_73(uParam0) < 0f)
	{
		func_72(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_69(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_69(var uParam0, int iParam1)//Position - 0x27FF
{
	return (*uParam0)[iParam1] == 78;
}

void func_70(var uParam0)//Position - 0x2810
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_71(uParam0, iVar0);
		iVar0++;
	}
	func_72(uParam0, (Global_412215 - 0.5f));
}

void func_71(var uParam0, int iParam1)//Position - 0x2844
{
	(*uParam0)[iParam1] = 78;
}

void func_72(var uParam0, float fParam1)//Position - 0x2854
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

float func_73(var uParam0)//Position - 0x2871
{
	return uParam0->f_50;
}

bool func_74(var uParam0, int iParam1)//Position - 0x287D
{
	return func_75(uParam0, iParam1) != 4294967295;
}

int func_75(var uParam0, int iParam1)//Position - 0x288F
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

bool func_76(var uParam0)//Position - 0x28BC
{
	return uParam0->f_4F == 1;
}

int func_77(int iParam0)//Position - 0x28CA
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

bool func_78(int iParam0)//Position - 0x291A
{
	return Global_8D15 == iParam0;
}

int func_79(var uParam0, int iParam1)//Position - 0x2928
{
	switch (iLocal_160)
	{
		case 0:
			if (!func_187() && func_410(uParam0, 0) > 1f)
			{
				if (func_34())
				{
					PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
				}
				func_109(uParam0);
				func_21(&(Global_19E56.f_4A7D), 4096);
				func_106(iParam1, "TAXI_FARE_TITLE", uParam0->f_32, uParam0->f_38, ((uParam0->f_32 + uParam0->f_38) + uParam0->f_69), uParam0->f_69, func_108(uParam0), "TAXI_FARE_MID", 4000, 1);
				iParam1->f_1 = 4000;
				unk_0x1190AB7024CBD8CB(4294967295, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				func_105(1);
				iLocal_160 = 6;
			}
			break;
		
		case 6:
			if (!func_99(iParam1, 0))
			{
				func_80(uParam0);
				func_300(uParam0, 0, 0, 0);
				func_105(0);
				iLocal_160 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_80(var uParam0)//Position - 0x29FA
{
	int iVar0;
	
	iVar0 = ((uParam0->f_32 + uParam0->f_38) + uParam0->f_69);
	if (iVar0 > 0)
	{
		func_81(func_97(), 21, iVar0, 0, 0);
		func_51(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_81(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2A38
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
	func_82(Global_19E56.f_6D76[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
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

int func_82(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2B1F
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_96();
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
					func_95(99, 1);
					func_94(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_94(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_94(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_93(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_89(5))
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
							func_94(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_94(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_94(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_89(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_94(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_94(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_94(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_94(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_94(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_94(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_94(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_94(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_94(joaat("sp2_money_spent_property"), iParam3);
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
									func_94(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_94(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_94(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_94(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_94(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_94(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_89(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_94(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_94(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_94(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_94(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_94(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_94(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_88(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_95(95, iParam3);
					break;
				
				case 1:
					func_95(97, iParam3);
					break;
				
				case 2:
					func_95(96, iParam3);
					break;
			}
			func_95(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_85(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_85(iVar1);
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
					func_94(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_94(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_94(joaat("sp2_total_cash_earned"), iParam3);
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
	func_84(iParam0);
	if (Global_8D15 == 15)
	{
		func_83(0);
	}
	return 1;
}

void func_83(bool bParam0)//Position - 0x311E
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

void func_84(int iParam0)//Position - 0x33A0
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

void func_85(int iParam0)//Position - 0x33FA
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_60(129, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_60(135, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_60(136, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_60(137, 0, 4294967295, 1);
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
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_5038.f_1D7, iParam0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_200000[func_87() /*12745*/].f_1FF2.f_A, iParam0))
	{
		bVar0 = true;
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_5038.f_1D7), iParam0);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_200000[func_87() /*12745*/].f_1FF2.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_86(iParam0));
		HUD::_SET_NOTIFICATION_MESSAGE(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_86(int iParam0)//Position - 0x350D
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

int func_87()//Position - 0x35BC
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_88(int iParam0)//Position - 0x35C9
{
	func_95(93, iParam0);
	func_95(29, iParam0);
	func_95(30, iParam0);
}

bool func_89(int iParam0)//Position - 0x35E9
{
	if (iParam0 == 8)
	{
		return func_90(129, 4294967295, 4294967295);
	}
	if (iParam0 == 9)
	{
		return func_90(135, 4294967295, 4294967295);
	}
	if (iParam0 == 10)
	{
		return func_90(136, 4294967295, 4294967295);
	}
	if (iParam0 == 11)
	{
		return func_90(137, 4294967295, 4294967295);
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_5038.f_1D7, iParam0);
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_200000[func_87() /*12745*/].f_1FF2.f_A, iParam0);
}

int func_90(int iParam0, int iParam1, int iParam2)//Position - 0x366D
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_28();
	}
	iVar1 = func_92(iParam0, iParam1);
	uVar2 = func_91(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_91(int iParam0)//Position - 0x36AA
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

int func_92(int iParam0, int iParam1)//Position - 0x39C2
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_28();
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

int func_93(bool bParam0)//Position - 0x3CBA
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
		func_59(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_65(27, 1);
	return 1;
}

void func_94(int iParam0, int iParam1)//Position - 0x3D71
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, 4294967295);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_95(int iParam0, int iParam1)//Position - 0x3D94
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

void func_96()//Position - 0x3DF1
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

int func_97()//Position - 0x3E66
{
	func_98();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_98()//Position - 0x3E7F
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_4(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_3(AUDIO::_0x0626A247D2405330());
			if (func_5(iVar0) && (!func_78(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_5(Global_19E56.f_933.f_21B.f_10CD))
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

int func_99(var uParam0, int iParam1)//Position - 0x3F7C
{
	if (!func_15(&(uParam0->f_2)))
	{
		func_103(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || uParam0->f_8)
		{
			if (!func_15(&(uParam0->f_5)))
			{
				func_103(&(uParam0->f_5));
				func_102(uParam0, 1051260355);
			}
		}
		if (func_15(&(uParam0->f_5)))
		{
			if (func_101(&(uParam0->f_5)) > 0.33f)
			{
				func_100(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == 4294967295)
	{
		return 1;
	}
	if (func_101(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_15(&(uParam0->f_5)))
		{
			func_103(&(uParam0->f_5));
			func_102(uParam0, 1051260355);
		}
		else if (func_101(&(uParam0->f_5)) > 0.33f)
		{
			func_100(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_100(var uParam0)//Position - 0x4081
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_101(var uParam0)//Position - 0x4097
{
	if (func_15(uParam0))
	{
		if (func_14(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_13(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_102(var uParam0, float fParam1)//Position - 0x40D6
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_9);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam1);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_103(int iParam0)//Position - 0x40FC
{
	func_104(iParam0, 0f);
}

void func_104(int iParam0, float fParam1)//Position - 0x410B
{
	iParam0->f_1 = (func_13(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_105(int iParam0)//Position - 0x4139
{
	Global_11729 = iParam0;
	Global_1172A = iParam0;
}

void func_106(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9)//Position - 0x414D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, func_107());
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam9);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam6);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	func_103(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_107()//Position - 0x41B8
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_108(var uParam0)//Position - 0x41D2
{
	char* sVar0;
	
	switch (uParam0->f_19B)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_109(var uParam0)//Position - 0x426C
{
	int iVar0;
	
	Local_161.f_1 = SYSTEM::TO_FLOAT(uParam0->f_32);
	Local_161.f_2 = SYSTEM::TO_FLOAT(uParam0->f_38);
	func_51(11, uParam0->f_38);
	func_51(12, uParam0->f_38);
	iLocal_57[1] = uParam0->f_38;
	iLocal_57[2] = uParam0->f_38;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3C)
	{
		Local_161.f_4[iVar0 /*3*/] = { uParam0->f_3C[iVar0 /*3*/] };
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_161.f_4[iVar0 /*3*/], 2))
		{
			Local_161.f_3 = (Local_161.f_3 + IntToFloat(uParam0->f_3C[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_161 = uParam0->f_19B;
	Local_161.f_14 = ((Local_161.f_1 + Local_161.f_2) + Local_161.f_3);
}

int func_110(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4)//Position - 0x431B
{
	int iVar0;
	
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(*iParam2, 0))
			{
				func_148(uParam1, 320, bParam4);
				PED::SET_PED_MONEY(*iParam2, MISC::GET_RANDOM_INT_IN_RANGE(100, 300));
				func_146(uParam1, iParam2, "TAXI_BLIP_PASS", 1);
				func_51(13, 0);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 5;
			}
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(*iParam2, 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam2, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(*iParam2, 0))
			{
				func_117(&uLocal_45, *iParam2, 0, 0, 1, 1, 1);
				if (!func_116(uParam1->f_2, *iParam2))
				{
					if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam1->f_4, 0))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam2, uParam1->f_4, 1))
						{
							*uParam0 = 3;
						}
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam2, uParam1->f_2, 1))
					{
						*uParam0 = 3;
					}
					if (*uParam0 != 3)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_2, 0))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(uParam1->f_2, *iParam2, 20f, 20f, 10f, 0, 1, 0))
							{
								if (PED::IS_PED_SHOOTING(uParam1->f_2))
								{
									*uParam0 = 3;
								}
								else
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(uParam1->f_2, *iParam2, 2f, 2f, 10f, 0, 1, 0))
									{
										*uParam0 = 3;
									}
									if (WEAPON::IS_PED_ARMED(uParam1->f_2, 6))
									{
										if (CAM::IS_AIM_CAM_ACTIVE())
										{
											*uParam0 = 3;
										}
									}
								}
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(uParam1->f_2, *iParam2, 50f, 50f, 10f, 0, 1, 0))
							{
								if (PED::IS_PED_SHOOTING(uParam1->f_2))
								{
									*uParam0 = 3;
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_ENTITY(uParam1->f_2, *iParam2, 50f, 50f, 25f, 0, 1, 0))
						{
							if (PED::IS_PED_SHOOTING(uParam1->f_2))
							{
								*uParam0 = 3;
							}
						}
					}
				}
				else
				{
					func_114(&uLocal_45, 0, 0);
					uParam1->f_6D = 1;
					*uParam0 = 5;
				}
			}
			else
			{
				func_114(&uLocal_45, 0, 0);
				*uParam0 = 5;
			}
			break;
		
		case 3:
			func_114(&uLocal_45, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(*iParam2, 0))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_8))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_8));
				}
				ENTITY::SET_ENTITY_HEALTH(*iParam2, true);
				BRAIN::OPEN_SEQUENCE_TASK(&iVar0);
				BRAIN::TASK_COWER(0, 5000);
				BRAIN::TASK_SMART_FLEE_PED(0, uParam1->f_2, 1000f, 4294967295, 0, 0);
				BRAIN::TASK_SWAP_WEAPON(0, 0);
				CUTSCENE::_0x8D9DF6ECA8768583(iVar0);
				BRAIN::TASK_PERFORM_SEQUENCE(*iParam2, iVar0);
				BRAIN::CLEAR_SEQUENCE_TASK(&iVar0);
				PED::SET_PED_KEEP_TASK(*iParam2, true);
				func_231(uParam1, 109, 1, 0, 0);
				*uParam0 = 4;
				HUD::CLEAR_PRINTS();
			}
			else
			{
				*uParam0 = 4;
				HUD::CLEAR_PRINTS();
			}
			if (HUD::DOES_BLIP_EXIST(uParam1->f_8))
			{
				HUD::REMOVE_BLIP(&(uParam1->f_8));
			}
			func_111(*iParam2, uParam3, 1, 4294967295);
			break;
		
		case 4:
			if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(uParam3->f_6))
			{
				if (HUD::DOES_BLIP_EXIST(uParam3->f_5))
				{
					HUD::REMOVE_BLIP(&(uParam3->f_5));
				}
				func_198(uParam1);
				func_51(14, 0);
				uParam1->f_38 = 0;
				*uParam0 = 5;
			}
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(*iParam2, 0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam2);
				if (HUD::DOES_BLIP_EXIST(uParam1->f_8))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_8));
				}
			}
			else
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::GET_PLAYER_INDEX(), 2, 0);
				HUD::_0x84698AB38D0C6636(PLAYER::GET_PLAYER_INDEX(), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_111(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x4650
{
	vector3 vVar0;
	
	uParam1->f_1 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		uParam1->f_2 = { unk_0x8000C77B5F336760(iParam0, true) };
		PED::SET_PED_MONEY(iParam0, 0);
		*uParam1 = 0;
	}
	else
	{
		if (iParam3 <= 0)
		{
			*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(80, 200);
		}
		else
		{
			*uParam1 = iParam3;
		}
		uParam1->f_2 = { PED::GET_DEAD_PED_PICKUP_COORDS(iParam0, 1067030938, 1069547520) };
	}
	MISC::SET_BIT(&(uParam1->f_1), 3);
	MISC::SET_BIT(&(uParam1->f_1), 4);
	vVar0 = { OBJECT::GET_SAFE_PICKUP_COORDS(uParam1->f_2, 1,2f, 1,5f) };
	uParam1->f_6 = OBJECT::CREATE_PICKUP(joaat("pickup_money_variable"), vVar0, uParam1->f_1, *uParam1, 1, 0);
	if (bParam2)
	{
		if (!HUD::DOES_BLIP_EXIST(uParam1->f_5))
		{
			uParam1->f_5 = func_112(uParam1->f_6);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_5, "TAXI_BLIP_MONE");
		}
		else
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_5, "TAXI_BLIP_MONE");
		}
	}
}

int func_112(int iParam0)//Position - 0x472C
{
	int iVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_PICKUP(iParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_113(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

float func_113(bool bParam0, float fParam1, float fParam2)//Position - 0x4764
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_114(var uParam0, int iParam1, int iParam2)//Position - 0x477B
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
			unk_0x1190AB7024CBD8CB(4294967295, "FocusOut", "HintCamSounds", true);
			uParam0->f_B = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
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
		if (func_115(uParam0->f_3))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_115(sVar0))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
	}
}

int func_115(char* sParam0)//Position - 0x4858
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_116(int iParam0, int iParam1)//Position - 0x486B
{
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iParam1, 100f, 100f, 50f, 0, 1, 0))
		{
			if (!CAM::IS_SPHERE_VISIBLE(unk_0x8000C77B5F336760(iParam1, true), 15f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_117(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x48B4
{
	func_118(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_118(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x48CE
{
	func_119(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_119(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x48EB
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
	{
		func_114(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_120(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_120(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x4923
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
	if (func_115(iVar0))
	{
		func_145();
	}
	if (func_144(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
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
			if (func_139(uParam0, bParam5, bParam7, 0))
			{
				func_136(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_125(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!func_115(iVar0))
							{
								func_124(iVar0, 4294967295);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_123(1);
								}
							}
						}
					}
				}
			}
			else if (func_125(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
					{
						if (!func_115(iVar0))
						{
							func_124(iVar0, 4294967295);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_123(1);
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
				if (func_115(sParam3))
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
						func_114(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(AUDIO::_0x0626A247D2405330()))
				{
					if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
					{
						func_114(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(AUDIO::_0x0626A247D2405330()))
				{
					if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
					{
						func_114(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(AUDIO::_0x0626A247D2405330()))
				{
					if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
					{
						func_114(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(AUDIO::_0x0626A247D2405330()))
				{
					if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
					{
						func_114(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_114(uParam0, iVar0, 1);
				}
			}
			if (!func_139(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_122(uParam0))
				{
					func_121(uParam0);
				}
			}
		}
	}
	else
	{
		func_114(uParam0, iVar0, 0);
	}
}

void func_121(var uParam0)//Position - 0x4C90
{
	if (func_144(AUDIO::_0x0626A247D2405330()))
	{
		BRAIN::TASK_CLEAR_LOOK_AT(AUDIO::_0x0626A247D2405330());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::_STOP_SCREEN_EFFECT("FocusIn");
		if (uParam0->f_B)
		{
			GRAPHICS::_START_SCREEN_EFFECT("FocusOut", 0, 0);
			unk_0x1190AB7024CBD8CB(4294967295, "FocusOut", "HintCamSounds", true);
			uParam0->f_B = 0;
		}
	}
	uParam0->f_2 = 4294967295;
	*uParam0 = 1;
}

int func_122(var uParam0)//Position - 0x4CF9
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

int func_123(bool bParam0)//Position - 0x4D24
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

void func_124(char* sParam0, int iParam1)//Position - 0x4DCE
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_125(char* sParam0)//Position - 0x4DE5
{
	if (!func_126(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_115(sParam0)) || func_115("CMN_HINT"))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
		return 0;
	}
	switch (Global_8D15)
	{
		case 0:
		case 3:
			if (func_123(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_123(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_123(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_126(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4E7E
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
	if (func_45(0))
	{
		return 0;
	}
	if (func_135())
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
	if ((func_134() || func_133(Global_440000.f_2559E)) || func_132())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			iVar1 = func_131(AUDIO::_0x0626A247D2405330(), 0);
			if (((VEHICLE::_0xE33FFA906CE74880(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("APC") && iVar1 != 4294967295)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("AKULA") && iVar1 != 4294967295)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("RIOT2") && iVar1 == 0) && func_130(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != 4294967295))
			{
				return 0;
			}
		}
	}
	if (func_127(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	return 1;
}

int func_127(int iParam0)//Position - 0x50CC
{
	if (iParam0 != func_129())
	{
		if (func_128(iParam0, 1, 1))
		{
			return Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295;
		}
		else if ((Global_140859 && iParam0 == CAM::_0xDC9DA9E8789F5246()) && func_128(iParam0, 1, 0))
		{
			return Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295;
		}
	}
	return 0;
}

int func_128(int iParam0, bool bParam1, bool bParam2)//Position - 0x5132
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

int func_129()//Position - 0x517C
{
	return 4294967295;
}

int func_130(int iParam0, int iParam1)//Position - 0x5185
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

int func_131(int iParam0, int iParam1)//Position - 0x51E7
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

var func_132()//Position - 0x526C
{
	return Global_255C02.f_10;
}

bool func_133(int iParam0)//Position - 0x527A
{
	return iParam0 == 51;
}

var func_134()//Position - 0x5287
{
	return Global_255C02.f_F;
}

bool func_135()//Position - 0x5295
{
	return MISC::GET_GAME_TIMER() <= Global_43D7.f_16F1 + 100;
}

void func_136(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x52AA
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
		func_114(uParam0, 0, 0);
	}
	if (func_41(vParam2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_137())
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
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
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
	unk_0x1190AB7024CBD8CB(4294967295, "FocusIn", "HintCamSounds", true);
	uParam0->f_B = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_137()//Position - 0x53BA
{
	return func_138(CAM::_0xDC9DA9E8789F5246());
}

int func_138(int iParam0)//Position - 0x53CA
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_139(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x53E9
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
					if (func_143(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_142(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_142(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_143(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_122(uParam0))
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
						if (!func_143(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_142(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_142(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_143(bParam1, bParam2, bParam3))
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
					if (!func_143(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_142(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_142(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
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
				else if (!func_143(bParam1, bParam2, bParam3))
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
						if (func_141(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_140(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1) || func_140(bParam1, bParam2, bParam3))
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
					else if (func_141(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_122(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_126(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_145();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_140(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5755
{
	if (!func_126(bParam0, bParam1, bParam2))
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

int func_141(bool bParam0, bool bParam1, bool bParam2)//Position - 0x57A7
{
	if (!func_126(bParam0, bParam1, bParam2))
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
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_142(bool bParam0, bool bParam1, bool bParam2)//Position - 0x57F0
{
	if (!func_126(bParam0, bParam1, bParam2))
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

int func_143(bool bParam0, bool bParam1, bool bParam2)//Position - 0x584F
{
	if (!func_126(bParam0, bParam1, bParam2))
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
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_144(int iParam0)//Position - 0x58A5
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

void func_145()//Position - 0x5900
{
	MISC::SET_BIT(&Global_950, 4);
}

void func_146(var uParam0, var uParam1, char* sParam2, bool bParam3)//Position - 0x5910
{
	if (bParam3)
	{
		func_414(uParam0);
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		uParam0->f_8 = func_147(*uParam1, 0, 0);
	}
	if (!MISC::IS_STRING_NULL(sParam2))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, sParam2);
	}
}

int func_147(int iParam0, bool bParam1, bool bParam2)//Position - 0x5950
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_113(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_113(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_113(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_148(var uParam0, int iParam1, bool bParam2)//Position - 0x59F4
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_3, false);
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_3);
		PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 17, true);
		NETWORK::_0x5E3AA4CA2B6FB0EE(uParam0->f_3);
		if ((func_9(uParam0->f_3, uParam0->f_1D, 1) <= 200f && !func_149(uParam0->f_1D)) && !bParam2)
		{
			func_150(uParam0);
		}
		else
		{
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 1024, true);
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 131072, true);
			BRAIN::OPEN_SEQUENCE_TASK(&iVar0);
			BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, iParam1);
			if (uParam0->f_19F == 8)
			{
				BRAIN::TASK_WANDER_STANDARD(0, 1193033728, 0);
			}
			else
			{
				BRAIN::TASK_SMART_FLEE_PED(0, AUDIO::_0x0626A247D2405330(), 1000f, 4294967295, 0, 0);
			}
			BRAIN::TASK_SWAP_WEAPON(0, 0);
			CUTSCENE::_0x8D9DF6ECA8768583(iVar0);
			BRAIN::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
			BRAIN::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
	}
}

int func_149(vector3 vParam0)//Position - 0x5AE8
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_150(var uParam0)//Position - 0x5B12
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0))
	{
		if (func_41(func_42(), uParam0->f_1D, 0))
		{
			if (uParam0->f_19B == 2)
			{
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, 84.9058f);
				PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
			}
			else if (uParam0->f_19B == 4)
			{
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, 68.3138f);
				PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
			}
			else
			{
				BRAIN::TASK_WANDER_STANDARD(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			NETWORK::_0x5E3AA4CA2B6FB0EE(uParam0->f_3);
			BRAIN::CLEAR_SEQUENCE_TASK(&iVar0);
			BRAIN::OPEN_SEQUENCE_TASK(&iVar0);
			BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			BRAIN::TASK_SWAP_WEAPON(0, 0);
			BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_1D, 1f, 4294967295, 1048576000, 0, 1193033728);
			if (uParam0->f_19B == 2)
			{
				BRAIN::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_19B == 0)
			{
				BRAIN::TASK_CLIMB_LADDER(0, 1);
				BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 813.9421f, 1172.681f, 329.7988f, 1f, 4294967295, 1048576000, 0, 1193033728);
				BRAIN::TASK_ACHIEVE_HEADING(0, 151.7794f, 0);
				BRAIN::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_19B == 4)
			{
				BRAIN::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_1D, 15f, 0);
			}
			else if (uParam0->f_19B == 1)
			{
				BRAIN::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_1D, 15f, 20000);
				BRAIN::TASK_WANDER_STANDARD(0, 1193033728, 0);
			}
			else
			{
				BRAIN::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "base", 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
				BRAIN::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_pleased", 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
			}
			if (BRAIN::DOES_SCENARIO_EXIST_IN_AREA(uParam0->f_1D, 15f, 1))
			{
				BRAIN::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_1D, 15f, 0);
			}
			else
			{
				BRAIN::TASK_WANDER_STANDARD(0, 1193033728, 0);
			}
			CUTSCENE::_0x8D9DF6ECA8768583(iVar0);
			BRAIN::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
			BRAIN::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
	}
}

int func_151(var uParam0, bool bParam1)//Position - 0x5CF7
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0))
	{
		if (func_160(uParam0) && func_156(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_155(uParam0, 2097152))
				{
					func_152(uParam0);
				}
			}
			else
			{
				func_152(uParam0);
			}
		}
		else if (!func_160(uParam0))
		{
			if (bParam1)
			{
				if (func_155(uParam0, 2097152))
				{
					if (BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_152(var uParam0)//Position - 0x5D94
{
	vector3 vVar0;
	
	if (func_149(uParam0->f_1D))
	{
		vVar0 = { uParam0->f_11 };
	}
	else
	{
		vVar0 = { uParam0->f_1D };
	}
	func_153(uParam0, vVar0);
}

void func_153(var uParam0, vector3 vParam1)//Position - 0x5DCA
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0) && PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_3, uParam0->f_4))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_154(uParam0->f_3, uParam0->f_4) == 0)
			{
				BRAIN::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, false) < MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam1, false) && VEHICLE::_0x639431E895B9AA57(uParam0->f_3, uParam0->f_4, 1, 0, false))
			{
				BRAIN::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, false) >= MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam1, false) && VEHICLE::_0x639431E895B9AA57(uParam0->f_3, uParam0->f_4, 2, 0, false))
			{
				BRAIN::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				BRAIN::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_154(int iParam0, int iParam1)//Position - 0x5EEB
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 4294967295, 0) == iParam0)
			{
				return 4294967295;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return 4294967294;
}

bool func_155(var uParam0, int iParam1)//Position - 0x5F5D
{
	if (iParam1 != 1073741824)
	{
		return (func_23(uParam0->f_51, iParam1) && !func_187());
	}
	return func_187();
}

int func_156(var uParam0, bool bParam1, float fParam2)//Position - 0x5F8A
{
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_45(1))
			{
				func_43(0);
			}
			if (func_34())
			{
				func_159();
				return 1;
			}
			else if (func_157(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256);
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
				}
			}
			VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_157(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x600B
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
	func_158(iParam0);
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

void func_158(int iParam0)//Position - 0x619A
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

void func_159()//Position - 0x61C6
{
	if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(CAM::_0xDC9DA9E8789F5246()))
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(CAM::_0xDC9DA9E8789F5246());
	}
}

int func_160(var uParam0)//Position - 0x61E1
{
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_161(var uParam0, int iParam1)//Position - 0x6216
{
	if (iParam1 < 5)
	{
		MISC::SET_BIT(&(uParam0->f_3C[iParam1 /*3*/]), 2);
		uParam0->f_69 = (uParam0->f_69 + uParam0->f_3C[iParam1 /*3*/].f_1);
	}
}

void func_162(bool bParam0)//Position - 0x6244
{
	if (Local_231.f_38 < Local_231.f_3A)
	{
		func_231(&Local_231, 103, 1, 0, 0);
	}
	else if (Local_231.f_38 >= Local_231.f_3B)
	{
		if (!bParam0)
		{
			func_231(&Local_231, 101, 1, 0, 0);
		}
		else
		{
			func_63(&(Local_231.f_52), 4194304);
			func_231(&Local_231, 22, 1, 0, 0);
		}
	}
	else if (!bParam0)
	{
		func_231(&Local_231, 102, 1, 0, 0);
	}
	else
	{
		func_63(&(Local_231.f_52), 2097152);
		func_231(&Local_231, 22, 1, 0, 0);
	}
}

void func_163(var uParam0, bool bParam1)//Position - 0x62D4
{
	func_174(uParam0, uParam0->f_3);
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_173(uParam0, 14))
			{
				if (func_187())
				{
					func_172(1);
				}
				func_171(uParam0, 11, 1);
				func_166(uParam0, 1);
				func_300(uParam0, 14, 0f, 1);
				if (uParam0->f_19A < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_160(uParam0))
				{
					if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_2, 0))
					{
						if (func_410(uParam0, 15) > 5f)
						{
							func_300(uParam0, 15, 0f, 1);
						}
					}
					if (func_410(uParam0, 14) > 20f)
					{
						func_333(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_410(uParam0, 14) > 20f)
				{
					if (func_164(uParam0->f_4, 1) > 40f)
					{
						func_333(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_333(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_164(int iParam0, bool bParam1)//Position - 0x63DF
{
	return func_165(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

float func_165(int iParam0, int iParam1, bool bParam2)//Position - 0x63F7
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

void func_166(var uParam0, bool bParam1)//Position - 0x6455
{
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
				func_170(uParam0, &(uParam0->f_62), 4, 3);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
				HUD::CLEAR_PRINTS();
				if (func_160(uParam0))
				{
					func_231(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_170(uParam0, &(uParam0->f_62), 4, 3);
				}
			}
			func_167(uParam0, 0, 0);
		}
		else if (HUD::DOES_BLIP_EXIST(uParam0->f_A))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_A));
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				if (uParam0->f_19B == 5 && uParam0->f_19A == 17)
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
					HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
				}
				else if (uParam0->f_19B != 4)
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
					HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
				}
			}
			HUD::CLEAR_PRINTS();
		}
	}
}

void func_167(var uParam0, bool bParam1, bool bParam2)//Position - 0x6573
{
	if (bParam1)
	{
		func_414(uParam0);
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_A))
	{
		uParam0->f_A = func_147(uParam0->f_4, 1, 0);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_A, "TAXI_BLIP_CAR");
		HUD::SET_BLIP_ROUTE(uParam0->f_A, true);
		func_168(uParam0);
		if (bParam2)
		{
			HUD::CLEAR_PRINTS();
			func_231(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_168(var uParam0)//Position - 0x65CE
{
	func_300(uParam0, 14, 0, 0);
	func_169();
}

void func_169()//Position - 0x65E4
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(4294967295, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_170(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x660D
{
	if (!func_23(*uParam1, iParam2))
	{
		HUD::CLEAR_PRINTS();
		func_231(uParam0, iParam3, 1, 0, 0);
		func_63(uParam1, iParam2);
	}
}

void func_171(var uParam0, int iParam1, bool bParam2)//Position - 0x6639
{
	uParam0->f_19E = iParam1;
	if (bParam2)
	{
	}
}

void func_172(int iParam0)//Position - 0x664D
{
	Global_41C1 = iParam0;
}

bool func_173(var uParam0, int iParam1)//Position - 0x665A
{
	return func_15(&(uParam0->f_92[iParam1 /*3*/]));
}

void func_174(var uParam0, int iParam1)//Position - 0x666E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(CAM::_0xDC9DA9E8789F5246()))
			{
				if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("weapon_stungun"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
				{
					func_333(uParam0, "Passenger injured by player with weapon.", 14);
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(CAM::_0xDC9DA9E8789F5246());
			}
		}
	}
}

int func_175(var uParam0)//Position - 0x66D3
{
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 4294967295, 0) == uParam0->f_2)
		{
			if (func_173(uParam0, 14))
			{
				func_176(uParam0);
			}
			func_166(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_176(var uParam0)//Position - 0x6715
{
	func_179(uParam0, 14, 0);
	func_179(uParam0, 15, 0);
	func_178();
	if (func_177())
	{
		func_172(0);
	}
}

int func_177()//Position - 0x673F
{
	if (Global_41C1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_178()//Position - 0x6756
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(4294967295, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_179(var uParam0, int iParam1, bool bParam2)//Position - 0x677F
{
	int iVar0;
	
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_100(&(uParam0->f_92[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_100(&(uParam0->f_92[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

int func_180()//Position - 0x67C8
{
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Local_231.f_4, 0))
	{
		if (iLocal_274 && ENTITY::GET_ENTITY_SPEED(Local_231.f_4) < 5f)
		{
			if (!func_173(&Local_231, 21))
			{
				func_300(&Local_231, 21, 0, 0);
			}
		}
		if (ENTITY::GET_ENTITY_SPEED(Local_231.f_4) >= 5f && func_173(&Local_231, 21))
		{
			func_179(&Local_231, 21, 0);
		}
	}
	if (bLocal_277)
	{
		func_181(&Local_231, 21);
		fLocal_273 = func_410(&Local_231, 21);
		if (fLocal_273 >= fLocal_272)
		{
			bLocal_278 = true;
			return 1;
		}
		else
		{
			bLocal_278 = false;
			return 1;
		}
	}
	return 0;
}

void func_181(var uParam0, int iParam1)//Position - 0x686A
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!func_14(&(uParam0->f_92[iVar0 /*3*/])))
			{
				func_182(&(uParam0->f_92[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (func_15(&(uParam0->f_92[iParam1 /*3*/])))
	{
		if (!func_14(&(uParam0->f_92[iParam1 /*3*/])))
		{
			func_182(&(uParam0->f_92[iParam1 /*3*/]));
		}
	}
}

void func_182(int iParam0)//Position - 0x68D6
{
	if (func_15(iParam0))
	{
		if (!func_14(iParam0))
		{
			iParam0->f_2 = (func_13(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - iParam0->f_1);
			MISC::SET_BIT(iParam0, 2);
		}
	}
}

int func_183(var uParam0)//Position - 0x6910
{
	float fVar0;
	vector3 vVar1;
	
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		switch (iLocal_268)
		{
			case 0:
				if (!func_187())
				{
					if (func_189(&(Local_231.f_F4), "txm1aud", "txm1_Puke1", 8, 0, 0, 0))
					{
						BRAIN::TASK_PLAY_ANIM(*uParam0, sLocal_282, sLocal_281, 8f, -4f, 4294967295, 0, 0, 0, 0, 0);
						if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 0))
						{
							switch (func_131(*uParam0, 0))
							{
								case 0:
									VEHICLE::REMOVE_VEHICLE_WINDOW(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 1);
									break;
								
								case 2:
									VEHICLE::REMOVE_VEHICLE_WINDOW(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 3);
									break;
								
								default:
									VEHICLE::REMOVE_VEHICLE_WINDOW(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 3);
									break;
								}
						}
						if (func_173(&Local_231, 10))
						{
							func_179(&Local_231, 10, 0);
						}
						iLocal_268++;
					}
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				break;
			
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, sLocal_282, sLocal_281, 3))
				{
					fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, sLocal_282, sLocal_281);
					if (bLocal_283)
					{
					}
					if (fVar0 > 0.243f && fVar0 < 0.28f)
					{
						if (!iLocal_274)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", *uParam0, vLocal_265, vLocal_266, 31086, 1065353216, 0, 0, 0);
							iLocal_274 = 1;
						}
					}
					else if (fVar0 > 0.295f && fVar0 < 0.37f)
					{
						if (!iLocal_275)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", *uParam0, vLocal_265, vLocal_266, 31086, 1065353216, 0, 0, 0);
							iLocal_275 = 1;
						}
					}
					else if (fVar0 > 0.487857f && fVar0 < 0.55f)
					{
						if (!iLocal_276)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", *uParam0, vLocal_265, vLocal_266, 31086, 1065353216, 0, 0, 0);
							iLocal_276 = 1;
							if (!iLocal_279)
							{
								StringCopy(&vVar1, "txm1_pukeR1", 24);
								func_184(&vVar1);
								func_189(&(Local_231.f_F4), "txm1aud", &vVar1, 8, 0, 0, 0);
								iLocal_279 = 1;
							}
						}
					}
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, sLocal_282, sLocal_281) > 0.9f)
					{
						iLocal_268++;
					}
				}
				break;
			
			case 2:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, sLocal_282, sLocal_281, 3))
				{
				}
				BRAIN::TASK_PLAY_ANIM(*uParam0, sLocal_282, "drunk_idle", 8f, -8f, 4294967295, 1, 0, 0, 0, 0);
				iLocal_274 = 0;
				iLocal_268++;
				break;
			
			case 3:
				bLocal_277 = true;
				if (!func_173(&Local_231, 10))
				{
					func_300(&Local_231, 10, 0, 0);
				}
				return 1;
				break;
			}
	}
	return 0;
}

void func_184(char* sParam0)//Position - 0x6BBD
{
	StringConCat(sParam0, "F", 24);
}

void func_185()//Position - 0x6BCD
{
	Global_3960 = 0;
	func_186();
}

void func_186()//Position - 0x6BDD
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

int func_187()//Position - 0x6C34
{
	if (Global_3DCE != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_188(var uParam0)//Position - 0x6C56
{
	return uParam0->f_68;
}

bool func_189(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x6C62
{
	func_197(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_190(sParam2, iParam3, 0);
}

int func_190(char* sParam0, int iParam1, bool bParam2)//Position - 0x6CB0
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
					func_186();
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
		if (func_196(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_195();
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
				func_194();
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
				if (func_193())
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
			if (func_32())
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
			func_192();
			Global_3DD8 = bParam2;
		}
		Global_3DD0 = iParam1;
		StringCopy(&Global_3C51, sParam0, 24);
		Global_3960 = 0;
		func_191();
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
		func_186();
	}
	return 0;
}

void func_191()//Position - 0x6F7C
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

void func_192()//Position - 0x6FAE
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

int func_193()//Position - 0x7043
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

void func_194()//Position - 0x70DC
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
		Global_38B1 = func_97();
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

void func_195()//Position - 0x717E
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

bool func_196(int iParam0, int iParam1)//Position - 0x71D6
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

void func_197(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x7211
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

void func_198(var uParam0)//Position - 0x7267
{
	float fVar0;
	
	fVar0 = uParam0->f_29;
	fVar0 = func_199(fVar0);
	iLocal_57[4] = SYSTEM::CEIL(fVar0);
	iLocal_57[5] = SYSTEM::CEIL(fVar0);
	func_51(4, SYSTEM::CEIL(fVar0));
	func_51(5, SYSTEM::CEIL(fVar0));
	uParam0->f_32 = SYSTEM::CEIL((fVar0 * 100f));
}

float func_199(float fParam0)//Position - 0x72B9
{
	return (fParam0 * 0.0006213712f);
}

void func_200(var uParam0, int iParam1, bool bParam2)//Position - 0x72C9
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = 4294967295;
	}
	if (iParam1 > 4294967295)
	{
		uParam0->f_1B = iParam1;
	}
}

void func_201(var uParam0)//Position - 0x72ED
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_202(), 24);
		iVar0++;
	}
	HUD::CLEAR_PRINTS();
	func_49();
}

var func_202()//Position - 0x732D
{
	var uVar0;
	
	return uVar0;
}

int func_203(var uParam0, float fParam1, float fParam2)//Position - 0x7337
{
	if ((((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADED_OUT()) && !uParam0->f_8E)
	{
		if (func_220(uParam0))
		{
			func_219(uParam0, &(uParam0->f_2B));
			func_216(uParam0);
			func_211(uParam0);
			func_207(uParam0, fParam2, 1117782016);
			func_206(uParam0);
			func_204(uParam0);
			if ((SYSTEM::ROUND(func_410(uParam0, 7)) % 5) == 0 && !iLocal_85)
			{
				iLocal_85 = 1;
			}
			if ((SYSTEM::ROUND(func_410(uParam0, 7)) % 5) == 2 && iLocal_85)
			{
				iLocal_85 = 0;
			}
			return func_221(uParam0, fParam1);
		}
	}
	return 0;
}

void func_204(var uParam0)//Position - 0x73EB
{
	float fVar0;
	
	if ((func_160(uParam0) && func_23(uParam0->f_51, 67108864)) && PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_89) >= 10000)
		{
			fVar0 = func_205(uParam0->f_11, 1);
			if (fVar0 > fLocal_87)
			{
				iLocal_88++;
			}
			else
			{
				iLocal_88 = 0;
			}
			fLocal_87 = fVar0;
			iLocal_89 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_88 >= 2 && !func_187())
		{
			func_231(uParam0, 136, 1, 0, 1);
			iLocal_88 = 0;
		}
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() % 4000) < 50)
		{
			if (!func_160(uParam0))
			{
			}
			if (!func_23(uParam0->f_51, 67108864))
			{
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0)
		{
			if (iLocal_88 > 0)
			{
				iLocal_88 = 0;
			}
		}
	}
}

float func_205(vector3 vParam0, bool bParam1)//Position - 0x74C1
{
	return func_9(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), vParam0, bParam1);
}

void func_206(var uParam0)//Position - 0x74DB
{
	if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && !func_23(uParam0->f_2C, 2))
	{
		func_63(&(uParam0->f_2C), 2);
	}
	else if (!PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && func_23(uParam0->f_2C, 2))
	{
		func_21(&(uParam0->f_2C), 2);
		uParam0->f_2F++;
		func_51(9, 0);
	}
	if (uParam0->f_2F > 30)
	{
		func_231(uParam0, 47, 1, 0, 0);
		uParam0->f_2F = 0;
		uParam0->f_4C = (uParam0->f_4C + SYSTEM::CEIL(5f));
	}
}

void func_207(var uParam0, float fParam1, float fParam2)//Position - 0x7564
{
	if (func_160(uParam0) && func_23(uParam0->f_2C, 4))
	{
		if ((VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4) || ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < 3f) && func_210(uParam0))
		{
			if (!func_173(uParam0, 2))
			{
				func_208(uParam0, 2);
			}
			else if (func_160(uParam0))
			{
				if (func_410(uParam0, 2) > fParam1 && !func_173(uParam0, 14))
				{
					if (func_36())
					{
						func_231(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_231(uParam0, 48, 1, 0, 0);
					}
					func_300(uParam0, 2, 0, 0);
					if (func_173(uParam0, 10))
					{
						func_300(uParam0, 10, 0, 0);
					}
				}
				if (!func_173(uParam0, 3))
				{
					func_300(uParam0, 3, 0, 0);
				}
				else if (func_410(uParam0, 3) >= fParam2)
				{
					func_179(uParam0, 3, 0);
					func_333(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_173(uParam0, 2))
			{
				func_179(uParam0, 2, 0);
			}
			if (func_173(uParam0, 3))
			{
				func_179(uParam0, 3, 0);
			}
		}
	}
}

void func_208(var uParam0, int iParam1)//Position - 0x767F
{
	func_209(&(uParam0->f_92[iParam1 /*3*/]));
}

void func_209(int iParam0)//Position - 0x7693
{
	if (!func_15(iParam0))
	{
		func_103(iParam0);
	}
}

int func_210(var uParam0)//Position - 0x76AB
{
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 4294967295, 0) == AUDIO::_0x0626A247D2405330())
		{
			return 1;
		}
	}
	return 0;
}

void func_211(var uParam0)//Position - 0x76D5
{
	if (!func_23(uParam0->f_2C, 1))
	{
		switch (uParam0->f_19C)
		{
			case 0:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					if (func_410(uParam0, 9) > 1f)
					{
						func_215(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
						if (uParam0->f_19A != 22)
						{
							func_231(uParam0, 50, 1, 1, 0);
						}
						func_300(uParam0, 9, 0, 0);
						if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
						{
							HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
							HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
						}
						uParam0->f_8C = 1;
						uParam0->f_19C = 1;
					}
				}
				break;
			
			case 1:
				if (!func_187() && func_410(uParam0, 9) > 4f)
				{
					func_231(uParam0, 52, 1, 0, 0);
					uParam0->f_19C = 2;
				}
				break;
			
			case 2:
				if (func_214("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_19A != 22)
					{
						func_231(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_19C = 3;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					uParam0->f_19C = 3;
				}
				break;
			
			case 3:
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), func_213(uParam0)))
				{
					func_215(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
					func_51(6, 0);
				}
				if (!func_212(uParam0))
				{
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (func_410(uParam0, 16) > 10f)
						{
							if (uParam0->f_19A != 22)
							{
								func_231(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if (func_214("TAXI_OBJ_POL", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
					uParam0->f_8C = 0;
					uParam0->f_19C = 4;
				}
				break;
			
			case 4:
				if (!func_187())
				{
					if (uParam0->f_19A != 22)
					{
						func_231(uParam0, 53, 1, 0, 1);
					}
					func_51(7, func_213(uParam0));
					func_215(uParam0, 0);
					uParam0->f_19C = 5;
				}
				break;
			
			case 5:
				if (!func_187())
				{
					func_179(uParam0, 9, 0);
					func_300(uParam0, 11, 0, 0);
					uParam0->f_19C = 0;
				}
				break;
			}
	}
}

bool func_212(var uParam0)//Position - 0x78F9
{
	return uParam0->f_6E;
}

int func_213(var uParam0)//Position - 0x7905
{
	return uParam0->f_6A;
}

bool func_214(char* sParam0, int iParam1, int iParam2)//Position - 0x7911
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_215(var uParam0, int iParam1)//Position - 0x792F
{
	if (uParam0->f_6A != iParam1)
	{
		uParam0->f_6A = iParam1;
	}
}

void func_216(var uParam0)//Position - 0x7946
{
	if (func_218(uParam0))
	{
		func_217(uParam0);
	}
}

void func_217(var uParam0)//Position - 0x795D
{
	if (AUDIO::IS_RADIO_RETUNING() && uParam0->f_1A2.f_4 != 0)
	{
		uParam0->f_1A2.f_4 = 0;
	}
	switch (uParam0->f_1A2.f_4)
	{
		case 0:
			uParam0->f_1A2 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
			func_179(uParam0, 20, 0);
			uParam0->f_1A2.f_4++;
			break;
		
		case 1:
			if (uParam0->f_1A2.f_8 && !uParam0->f_1A2 == uParam0->f_1A2.f_2)
			{
				if (func_410(uParam0, 20) > 3f)
				{
					func_231(uParam0, 87, 1, 0, 0);
					uParam0->f_1A2.f_8 = 0;
					uParam0->f_1A2.f_4++;
				}
			}
			else if (uParam0->f_1A2 == uParam0->f_1A2.f_1)
			{
				if (!func_23(uParam0->f_51, 262144) || !func_23(uParam0->f_51, 1048576))
				{
					if (func_410(uParam0, 20) > 5f)
					{
						uParam0->f_1A2.f_5 = 1;
						func_231(uParam0, 84, 1, 0, 0);
						uParam0->f_1A2.f_4++;
					}
				}
			}
			else if (uParam0->f_1A2 == uParam0->f_1A2.f_2)
			{
				if (!func_23(uParam0->f_52, 67108864))
				{
					if (func_410(uParam0, 20) > 5f)
					{
						uParam0->f_1A2.f_6 = 1;
						uParam0->f_1A2.f_8 = 0;
						func_231(uParam0, 85, 1, 0, 0);
						func_179(uParam0, 22, 0);
						uParam0->f_1A2.f_4++;
					}
				}
			}
			else if (uParam0->f_1A2.f_7)
			{
				if (func_410(uParam0, 20) > 8f)
				{
					func_231(uParam0, 86, 1, 0, 0);
					uParam0->f_1A2.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_23(uParam0->f_51, 262144) || func_23(uParam0->f_52, 67108864))
			{
				if (!func_173(uParam0, 22))
				{
					func_208(uParam0, 22);
				}
			}
			if (func_173(uParam0, 22) && func_410(uParam0, 22) > 15f)
			{
				if (uParam0->f_1A2 == uParam0->f_1A2.f_1)
				{
					if (!func_23(uParam0->f_51, 1048576))
					{
						func_231(uParam0, 84, 1, 0, 0);
						func_179(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_1A2 == uParam0->f_1A2.f_2)
				{
					if (!func_23(uParam0->f_52, 134217728))
					{
						func_231(uParam0, 85, 1, 0, 0);
						func_179(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_218(var uParam0)//Position - 0x7BD8
{
	return uParam0->f_78;
}

void func_219(var uParam0, var uParam1)//Position - 0x7BE4
{
	STATS::STAT_GET_FLOAT(uParam0->f_1AC, uParam1, 4294967295);
	uParam0->f_29 = (*uParam1 - uParam0->f_2A);
}

int func_220(var uParam0)//Position - 0x7C05
{
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (!PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 1) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3))
			{
				func_333(uParam0, "Passenger left car.", 9);
			}
			else if (func_175(uParam0))
			{
				if (func_214("TAXI_OBJ_PICKUP", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("TAXI_OBJ_PICKUP");
				}
				if (CAM::IS_SCREEN_FADED_IN())
				{
					return 1;
				}
			}
			else
			{
				if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				func_163(uParam0, 1);
			}
		}
	}
	return 0;
}

int func_221(var uParam0, float fParam1)//Position - 0x7C94
{
	if (func_62(uParam0) == 2)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_11, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_8C, true, 0))
		{
		}
		if (((func_223(uParam0->f_4, uParam0->f_11, 1) <= (fParam1 + 1f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && func_222(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			return func_156(uParam0, 1, fParam1);
		}
	}
	else if (((ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_11, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_8C, true, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && func_222(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
	{
		return func_156(uParam0, 1, fParam1);
	}
	return 0;
}

int func_222(bool bParam0, bool bParam1, bool bParam2)//Position - 0x7D6B
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

float func_223(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x7E50
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

int func_224(var uParam0, int iParam1)//Position - 0x7E8A
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 0))
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_4, iParam1, 0))
			{
				if (BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 355471868) != 1)
				{
					BRAIN::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uParam0->f_3, uParam0->f_4, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_225(var uParam0, int iParam1)//Position - 0x7EDF
{
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 0))
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_4, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_226(var uParam0)//Position - 0x7F23
{
	func_227(uParam0, 1000);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0) && !ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
		BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, AUDIO::_0x0626A247D2405330(), 0);
	}
	func_185();
	func_176(uParam0);
}

void func_227(var uParam0, int iParam1)//Position - 0x7F6F
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		CAM::RENDER_SCRIPT_CAMS(false, true, iParam1, 1, 0, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
	}
}

int func_228(var uParam0)//Position - 0x7FA9
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("GRANGER") || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("REBEL")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("REBEL2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("SANDKING")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("SANDKING2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("PATRIOT")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("SURFER")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("SURFER2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("MESA")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("RANCHERXL")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("TIPTRUCK2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("MIXER")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("MIXER2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("RUBBLE")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("SCRAP")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("TIPTRUCK")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("ARMYTANKER")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("BARRACKS")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("BARRACKS2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("PRANGER")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("AMBULANCE")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("FIRETRUK")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("POLICET")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("RIOT")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("SHERIFF2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("STOCKADE")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("STOCKADE3")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("BIFF")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("HAULER")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("PACKER")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("TRASH")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("BENSON")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("PHANTOM")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("POUNDER")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("UTILLITRUCK")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("UTILLITRUCK2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("UTILLITRUCK3")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("DLOADER")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("FLATBED")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("TOURBUS")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("TOWTRUCK")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("TOWTRUCK2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("CAMPER")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("TACO")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("BOXVILLE")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("BOXVILLE2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("BURRITO")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("BURRITO2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("BURRITO3")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("BURRITO4")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("GBURRITO")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("JOURNEY")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("MULE")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("MULE2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("PONY")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("RUMPO")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("SPEEDO")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("SPEEDO2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("YOUGA"))
		{
			return 2;
		}
		else if ((((((((((((((((((((((ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("PHOENIX") || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("COQUETTE")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("DUNE")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("CHEETAH")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("COGCABRIO")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("JB700")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("MONROE")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("NINEF")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("NINEF2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("RAPIDGT")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("RAPIDGT2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("STINGER")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("STINGERGT")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("ZTYPE")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("BANSHEE")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("BULLET")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("CARBONIZZARE")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("COMET2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("ENTITYXF")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("F620")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("INFERNUS")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("SURANO")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("VOLTIC"))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 3;
}

void func_229()//Position - 0x8640
{
	func_63(&(Local_231.f_37), 2);
	func_63(&(Local_231.f_37), 4);
	func_63(&(Local_231.f_37), 16);
	func_63(&(Local_231.f_37), 64);
	func_63(&(Local_231.f_37), 256);
	func_63(&(Local_231.f_37), 512);
	func_63(&(Local_231.f_37), 1024);
	func_63(&(Local_231.f_37), 2048);
	func_63(&(Local_231.f_37), 67108864);
	func_63(&(Local_231.f_37), 134217728);
	func_63(&(Local_231.f_37), 536870912);
	func_63(&(Local_231.f_37), 268435456);
	func_63(&(Local_231.f_37), 8192);
	func_63(&(Local_231.f_37), 16384);
	func_63(&(Local_231.f_37), 32768);
	func_63(&(Local_231.f_37), 65536);
	func_63(&(Local_231.f_37), 131072);
	func_63(&(Local_231.f_37), 262144);
	func_63(&(Local_231.f_37), 524288);
	func_63(&(Local_231.f_37), 1048576);
	func_63(&(Local_231.f_37), 2097152);
	func_63(&(Local_231.f_64), 64);
	func_63(&(Local_231.f_64), 2048);
	func_63(&(Local_231.f_64), 128);
	func_63(&(Local_231.f_64), 32);
	func_63(&(Local_231.f_64), 256);
	func_63(&(Local_231.f_64), 8);
	func_63(&(Local_231.f_64), 1);
	func_63(&(Local_231.f_64), 4096);
	func_63(&(Local_231.f_64), 8192);
	GRAPHICS::_0x35FB78DC42B7BD21(&uLocal_328, 2);
	func_208(&Local_231, 7);
}

void func_230(var uParam0)//Position - 0x87C3
{
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(CAM::_0xDC9DA9E8789F5246());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	func_227(uParam0, 1000);
}

void func_231(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x87E6
{
	uParam0->f_1A0 = iParam1;
	if (bParam4)
	{
		func_300(uParam0, 16, 4f, 0);
		if (func_232(uParam0))
		{
			func_49();
		}
	}
	func_265(uParam0, iParam2, bParam3);
}

int func_232(var uParam0)//Position - 0x881B
{
	vector3 vVar0;
	struct<6> Var1;
	
	StringCopy(&vVar0, uParam0->f_8F, 24);
	if (func_187())
	{
		Var1 = { func_233() };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
			StringConCat(&vVar0, "_obj1", 24);
			if (MISC::ARE_STRINGS_EQUAL(&Var1, &vVar0))
			{
				return 1;
			}
			StringCopy(&vVar0, uParam0->f_8F, 24);
			StringConCat(&vVar0, "_gret1", 24);
			func_184(&vVar0);
			if (MISC::ARE_STRINGS_EQUAL(&Var1, &vVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<6> func_233()//Position - 0x8881
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3DCE == 4)
	{
		return Global_3C51;
	}
	return Var0;
}

int func_234(var uParam0)//Position - 0x88A5
{
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if ((PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) && (MISC::GET_GAME_TIMER() - iLocal_81) > 500) || PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_235(var uParam0, bool bParam1, float fParam2)//Position - 0x88F8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((MISC::GET_GAME_TIMER() % 1000) < 50)
			{
			}
			func_163(uParam0, 1);
			if (func_34())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
			}
			if (BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 2106541073) == 1 || BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 2106541073) == 0)
			{
				BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
				uParam0->f_30 = 0;
				iLocal_79 = 0;
				BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, AUDIO::_0x0626A247D2405330(), 0);
			}
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			func_263(uParam0);
			if (uParam0->f_30 > 1)
			{
				BRAIN::CLEAR_SEQUENCE_TASK(&iVar3);
				BRAIN::OPEN_SEQUENCE_TASK(&iVar3);
				BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_B, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
				CUTSCENE::_0x8D9DF6ECA8768583(iVar3);
				BRAIN::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar3);
				uParam0->f_30 = 0;
			}
		}
		else
		{
			if (func_173(uParam0, 14))
			{
				func_176(uParam0);
				func_166(uParam0, 0);
			}
			if (func_173(uParam0, 9))
			{
				func_179(uParam0, 9, 0);
				HUD::CLEAR_PRINTS();
				if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
					HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0))
			{
				fVar4 = ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_8D && func_262(uParam0, uParam0->f_3) > 300f)
				{
					func_333(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_30)
				{
					case 0:
						if (BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 || ((func_165(AUDIO::_0x0626A247D2405330(), uParam0->f_3, 1) < 20f && func_223(uParam0->f_3, uParam0->f_B, 1) <= 28f) && func_223(uParam0->f_4, uParam0->f_B, 1) <= 28f))
						{
							if (func_259(uParam0, fParam2))
							{
								uParam0->f_30++;
							}
						}
						break;
					
					case 1:
						if (func_258(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_8A = 1;
							if (bLocal_86)
							{
								uParam0->f_7 = func_257(uParam0->f_4, uParam0->f_3);
								iVar0 = func_256(uParam0, &iVar1);
								if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
								{
									if (iVar1 == uParam0->f_7)
									{
										if (uParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (uParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										BRAIN::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, iVar2);
									}
									else
									{
										BRAIN::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
									}
								}
								if (uParam0->f_19B == 0)
								{
									if (VEHICLE::_0x639431E895B9AA57(uParam0->f_3, uParam0->f_4, 0, 0, false))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
											{
												BRAIN::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							NETWORK::_0x5E3AA4CA2B6FB0EE(uParam0->f_3);
							BRAIN::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_30++;
						}
						else
						{
							if (bParam1)
							{
								GRAPHICS::DRAW_DEBUG_SPHERE(unk_0x8000C77B5F336760(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
							}
							if (!func_210(uParam0))
							{
								NETWORK::_0x5E3AA4CA2B6FB0EE(uParam0->f_3);
							}
							else if (((BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 0) && BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 7) && func_262(uParam0, uParam0->f_3) > 8f)
							{
								BRAIN::CLEAR_SEQUENCE_TASK(&(uParam0->f_F3));
								BRAIN::OPEN_SEQUENCE_TASK(&(uParam0->f_F3));
								BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, AUDIO::_0x0626A247D2405330(), 0);
								if (uParam0->f_19B != 9)
								{
									BRAIN::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, 4294967295, 48, 0, 0, 0, 0);
								}
								else
								{
									BRAIN::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, 4294967295, 48, 0, 0, 0, 0);
								}
								CUTSCENE::_0x8D9DF6ECA8768583(uParam0->f_F3);
								BRAIN::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_F3);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_86)
						{
							if (func_165(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_255(uParam0, 1))
								{
									BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_333(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_254(uParam0->f_4))
								{
									BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_333(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_252(uParam0);
						if (func_262(uParam0, uParam0->f_3) < fVar4 || func_34())
						{
							if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_237(uParam0))
								{
									func_236(uParam0);
									iLocal_81 = MISC::GET_GAME_TIMER();
									PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 26, true);
									func_179(uParam0, 5, 0);
									HUD::CLEAR_GPS_FLAGS();
									STATS::STAT_GET_FLOAT(uParam0->f_1AC, &(uParam0->f_2A), 4294967295);
									PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							GRAPHICS::DRAW_DEBUG_SPHERE(unk_0x8000C77B5F336760(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_236(var uParam0)//Position - 0x8E0A
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
		HUD::REMOVE_BLIP(&(uParam0->f_8));
	}
}

int func_237(var uParam0)//Position - 0x8E2E
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	
	func_251("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_4E), 1000);
	iVar6 = 4294967295;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, 0))
	{
		func_250();
	}
	if (bLocal_86)
	{
		iLocal_78 = 10;
	}
	if ((iLocal_78 < 7 && iLocal_78 > 0) && !bLocal_86)
	{
		if (func_248(iLocal_80))
		{
			iLocal_78 = 7;
		}
	}
	switch (iLocal_78)
	{
		case 0:
			if (func_156(uParam0, 0, 1084227584) && func_222(1, 1, 1))
			{
				if (func_255(uParam0, 1))
				{
					iLocal_80 = MISC::GET_GAME_TIMER();
					SYSTEM::SETTIMERA(0);
					iLocal_78 = 1;
				}
				else
				{
					func_333(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (SYSTEM::TIMERA() > 500)
			{
				uParam0->f_7 = func_257(uParam0->f_4, uParam0->f_3);
				iVar3 = func_256(uParam0, &iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3, 0))
				{
					if (iVar4 == uParam0->f_7)
					{
						if (uParam0->f_7 == 1)
						{
							iVar5 = 262144;
						}
						else
						{
							iVar5 = 131072;
						}
						BRAIN::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, iVar5);
					}
					else
					{
						BRAIN::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, 0);
					}
				}
				if (uParam0->f_19B == 0)
				{
					if (VEHICLE::_0x639431E895B9AA57(uParam0->f_3, uParam0->f_4, 0, 0, false))
					{
						uParam0->f_7 = 0;
						if (!ENTITY::IS_ENTITY_DEAD(iVar3, 0))
						{
							BRAIN::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, 4096);
						}
					}
				}
				iLocal_78 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_7 == 0)
			{
				vVar2 = { 1.5f, 0f, -0.6422f };
				vVar0 = { -1.4309f, 3.958f, 3.5037f };
				vVar1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (uParam0->f_7 == 2)
			{
				vVar2 = { 1.5f, -1f, -0.6422f };
				vVar0 = { 1.4309f, 3.958f, 0.5037f };
				vVar1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				vVar2 = { -1.5f, -1f, -0.6422f };
				vVar0 = { -1.4823f, 4.2333f, 0.5939f };
				vVar1 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar6 = func_247(&(uParam0->f_199), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0f, 2.2f, 0.275f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, vVar0), 1);
			if (iVar6 == 1)
			{
				vVar0.z = (vVar0.z + 1.5f);
				if (uParam0->f_7 == 2)
				{
					vVar1 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar6 != 4294967295)
			{
				func_246(0, 0, 1);
				MISC::CLEAR_AREA_OF_PEDS(unk_0x8000C77B5F336760(uParam0->f_4, true), 3f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(unk_0x8000C77B5F336760(uParam0->f_4, true), 25f, 0);
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				HUD::CLEAR_PRINTS();
				func_244();
				func_265(uParam0, 0, 0);
				vVar7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, vVar2) };
				ENTITY::SET_ENTITY_COORDS(uParam0->f_3, vVar7, 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, func_242(uParam0));
				func_241(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				CAM::SET_CAM_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, vVar0));
				CAM::POINT_CAM_AT_ENTITY(*uParam0, uParam0->f_4, vVar1, 1);
				CAM::SET_CAM_ACTIVE(*uParam0, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				MISC::_0x1327E2FE9746BAEE(uParam0->f_3, 0, 0);
				BRAIN::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_78 = 5;
			}
			break;
		
		case 5:
			func_251("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_4E), 1000);
			if (SYSTEM::TIMERA() > 3500)
			{
				iLocal_78 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
				{
					PED::SET_PED_INTO_VEHICLE(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(uParam0->f_4, func_240(uParam0->f_7), 1);
				}
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
				CAM::DESTROY_CAM(*uParam0, 0);
				CAM::DESTROY_CAM(uParam0->f_1, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::DO_SCREEN_FADE_IN(800);
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				HUD::CLEAR_PRINTS();
				func_244();
				func_265(uParam0, 0, 0);
				iLocal_78 = 8;
			}
			break;
		
		case 8:
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				func_238(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
			CAM::DESTROY_CAM(*uParam0, 0);
			CAM::DESTROY_CAM(uParam0->f_1, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			func_238(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, 0))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) || PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (BRAIN::GET_SCRIPT_TASK_STATUS(AUDIO::_0x0626A247D2405330(), 2500551826) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(AUDIO::_0x0626A247D2405330(), 2500551826) != 0)
				{
					BRAIN::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_238(bool bParam0, bool bParam1, int iParam2)//Position - 0x933B
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	func_24(0, 1, iParam2, 0, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(true);
		unk_0x59B038076F830627(true);
	}
	func_239(23, 0);
}

void func_239(int iParam0, bool bParam1)//Position - 0x9377
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

int func_240(int iParam0)//Position - 0x9399
{
	switch (iParam0)
	{
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 0:
			return 1;
		
		case 4294967295:
			return 0;
		
		default:
	}
	return 2;
}

void func_241(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x93D1
{
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vParam1, vParam2, fParam3, 0, 2);
	}
}

float func_242(var uParam0)//Position - 0x93FC
{
	float fVar0;
	vector3 vVar1;
	
	fVar0 = 0f;
	vVar1 = { func_42() };
	if (uParam0->f_7 == 2)
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_243(unk_0x8000C77B5F336760(uParam0->f_3, true), vVar1);
	return fVar0;
}

float func_243(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)//Position - 0x9465
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_244()//Position - 0x947F
{
	Global_3960 = 0;
	func_245();
}

void func_245()//Position - 0x948F
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

void func_246(int iParam0, int iParam1, int iParam2)//Position - 0x94B3
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0);
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		FIRE::STOP_FIRE_IN_RANGE(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(iParam1);
	func_43(0);
	func_24(1, 1, iParam2, 0, 0);
	HUD::DISPLAY_RADAR(false);
	unk_0x59B038076F830627(false);
	func_239(23, 1);
}

int func_247(var uParam0, vector3 vParam1, vector3 vParam2, bool bParam3)//Position - 0x950A
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (*uParam0 == 0)
	{
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam2, 511, 0, 7);
		if (bParam3)
		{
		}
	}
	else
	{
		iVar4 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar2, &uVar0, &uVar1, &uVar3);
		if (iVar4 == 2)
		{
			if (bParam3)
			{
			}
			if (iVar2 == 0)
			{
				*uParam0 = 0;
				return iVar2;
			}
			else
			{
				if (bParam3)
				{
				}
				*uParam0 = 0;
				return iVar2;
			}
		}
		else if (iVar4 == 0)
		{
			if (bParam3)
			{
			}
			*uParam0 = 0;
		}
	}
	return 4294967295;
}

int func_248(int iParam0)//Position - 0x9584
{
	if (func_249() && MISC::GET_GAME_TIMER() >= iParam0 + 1000)
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		func_43(0);
		func_185();
		return 1;
	}
	return 0;
}

int func_249()//Position - 0x95C7
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

void func_250()//Position - 0x95F9
{
	if (func_36())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appInternet");
	}
	if (func_35())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appCamera");
	}
	if (func_45(1))
	{
		func_43(0);
	}
}

void func_251(char* sParam0, int iParam1, int iParam2)//Position - 0x962C
{
	if (MISC::GET_GAME_TIMER() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = MISC::GET_GAME_TIMER();
}

void func_252(var uParam0)//Position - 0x964B
{
	int iVar0;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (func_164(uParam0->f_3, 1) > 30f || func_253(uParam0))
			{
				if (BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 2500551826) == 1 || BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) == 1)
				{
					BRAIN::CLEAR_SEQUENCE_TASK(&iVar0);
					BRAIN::OPEN_SEQUENCE_TASK(&iVar0);
					BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
					BRAIN::TASK_PLAY_ANIM(0, "misscommon@response", "screw_you", 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_B, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					CUTSCENE::_0x8D9DF6ECA8768583(iVar0);
					BRAIN::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
					func_333(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_253(var uParam0)//Position - 0x971C
{
	if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 3f && func_410(uParam0, 5) > 15f) || ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_254(int iParam0)//Position - 0x9756
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		iVar1 = 0;
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

int func_255(var uParam0, bool bParam1)//Position - 0x9812
{
	int iVar0[3];
	int iVar1;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		iVar0[0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 1, 0);
		iVar0[1] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 2, 0);
		iVar0[2] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0, 0);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar1]))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar0[iVar1], 0))
				{
					if (iVar1 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar1 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar1++;
		}
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_256(var uParam0, var uParam1)//Position - 0x98CC
{
	int iVar0;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 2, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_257(int iParam0, int iParam1)//Position - 0x9941
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, unk_0x8000C77B5F336760(iParam1, true)) };
	if (ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("VACCA"))
	{
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("SENTINEL2"))
	{
		iVar2 = 1;
	}
	if (iVar2 == 1)
	{
		iVar1 = 0;
	}
	else if (vVar0.x > 0f)
	{
		if (VEHICLE::_0x639431E895B9AA57(iParam1, iParam0, 2, 0, false))
		{
			iVar1 = 2;
		}
		else if (VEHICLE::_0x639431E895B9AA57(iParam1, iParam0, 1, 0, false))
		{
			iVar1 = 1;
		}
		else
		{
			iVar1 = 4294967294;
		}
	}
	else if (VEHICLE::_0x639431E895B9AA57(iParam1, iParam0, 1, 0, false))
	{
		iVar1 = 1;
	}
	else if (VEHICLE::_0x639431E895B9AA57(iParam1, iParam0, 2, 0, false))
	{
		iVar1 = 2;
	}
	else
	{
		iVar1 = 4294967294;
	}
	return iVar1;
}

int func_258(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)//Position - 0x99F9
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3) && func_164(uParam0->f_3, 1) < fParam2)
		{
			if (!func_173(uParam0, 5))
			{
				func_300(uParam0, 5, 0, 0);
			}
		}
		else if (func_173(uParam0, 5))
		{
			func_179(uParam0, 5, 0);
		}
		if (((func_410(uParam0, 5) > IntToFloat(iParam1) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < fParam4) && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3)) || func_164(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_259(var uParam0, float fParam1)//Position - 0x9A97
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	
	iVar8 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen");
	if (iVar8 == 4294967295)
	{
		iVar8 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen_f");
	}
	if (iVar8 != 4294967295)
	{
		vVar2 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_4, iVar8) };
		vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_4, vVar2) };
		vVar2.y = (vVar2.y + 1f);
	}
	else
	{
		vVar2 = { 0f, 1f, 1f };
	}
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, vVar2) };
	vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, 0f, 0.25f, 0.9f) };
	GRAPHICS::DRAW_DEBUG_LINE(vVar0, vVar1, 0, 0, 255, 255);
	switch (iLocal_79)
	{
		case 0:
			ENTITY::SET_ENTITY_HEALTH(uParam0->f_3, true);
			iLocal_79 = 1;
			break;
		
		case 1:
			if ((func_165(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_8E) && MISC::ABSF((vVar0.z - vVar1.z)) < 5f)
			{
				if (uParam0->f_199 == 0)
				{
					uParam0->f_199 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar0, vVar1, 511, 0, 7);
				}
				else
				{
					iVar7 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_199, &iVar5, &uVar3, &uVar4, &uVar6);
					if (iVar7 == 2)
					{
						if (iVar5 == 0)
						{
							iLocal_79 = 2;
						}
						uParam0->f_199 = 0;
					}
					else if (iVar7 == 0)
					{
						uParam0->f_199 = 0;
					}
				}
			}
			else if (BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 0)
			{
				BRAIN::CLEAR_SEQUENCE_TASK(&(uParam0->f_F3));
				BRAIN::OPEN_SEQUENCE_TASK(&(uParam0->f_F3));
				BRAIN::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "idle_a", 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
				BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, AUDIO::_0x0626A247D2405330(), 0);
				BRAIN::SET_SEQUENCE_TO_REPEAT(uParam0->f_F3, 1);
				CUTSCENE::_0x8D9DF6ECA8768583(uParam0->f_F3);
				BRAIN::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_F3);
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			if (uParam0->f_19B != 9)
			{
				if (!func_23(uParam0->f_2C, 128))
				{
					func_231(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_260(uParam0->f_3, "TAXI_HAIL", uParam0->f_91, 4);
			}
			NETWORK::_0x5E3AA4CA2B6FB0EE(uParam0->f_3);
			BRAIN::TASK_LOOK_AT_ENTITY(uParam0->f_3, uParam0->f_4, 4294967295, 2048, 4);
			BRAIN::CLEAR_SEQUENCE_TASK(&(uParam0->f_F3));
			BRAIN::OPEN_SEQUENCE_TASK(&(uParam0->f_F3));
			if (uParam0->f_19B != 9)
			{
				BRAIN::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, 4294967295, 48, 0, 0, 0, 0);
			}
			else
			{
				BRAIN::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, 4294967295, 48, 0, 0, 0, 0);
			}
			BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, AUDIO::_0x0626A247D2405330(), 0);
			CUTSCENE::_0x8D9DF6ECA8768583(uParam0->f_F3);
			BRAIN::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_F3);
			BRAIN::CLEAR_SEQUENCE_TASK(&(uParam0->f_F3));
			iLocal_79 = 3;
			break;
		
		case 3:
			iLocal_79 = 0;
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_260(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x9D74
{
	AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(iParam0, sParam1, sParam2, func_261(iParam3), 0);
}

int func_261(int iParam0)//Position - 0x9D8D
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

float func_262(var uParam0, int iParam1)//Position - 0x9F82
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		if (func_210(uParam0))
		{
			return func_165(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_263(var uParam0)//Position - 0x9FAD
{
	func_174(uParam0, uParam0->f_3);
	if (func_210(uParam0))
	{
		if (func_173(uParam0, 14))
		{
			func_176(uParam0);
			if (HUD::DOES_BLIP_EXIST(uParam0->f_A))
			{
				HUD::REMOVE_BLIP(&(uParam0->f_A));
			}
		}
	}
	if (!func_173(uParam0, 9))
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
		{
			HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
			HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
		}
		func_300(uParam0, 9, 0, 0);
		func_264("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_264(char* sParam0, int iParam1, int iParam2)//Position - 0xA02B
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

void func_265(var uParam0, int iParam1, bool bParam2)//Position - 0xA044
{
	uParam0->f_6E = iParam1;
	if (bParam2)
	{
		func_49();
		func_300(uParam0, 16, 4f, 0);
		HUD::CLEAR_PRINTS();
	}
}

int func_266(var uParam0, int iParam1)//Position - 0xA069
{
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		return 0;
	}
	func_270(12);
	if (func_23(uParam0->f_2C, 8))
	{
		if (!func_23(uParam0->f_2C, 128))
		{
			if (PED::IS_PED_JACKING(AUDIO::_0x0626A247D2405330()) && !func_23(uParam0->f_2C, 256))
			{
				func_63(&(uParam0->f_2C), 256);
			}
			if (func_23(uParam0->f_2C, 256) && PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				func_231(uParam0, 135, 1, 0, 1);
				func_63(&(uParam0->f_2C), 128);
			}
		}
	}
	if (!func_269(uParam0, iParam1))
	{
		if (func_164(uParam0->f_3, 1) < 35f)
		{
			if (!func_23(uParam0->f_2C, 8))
			{
				BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, AUDIO::_0x0626A247D2405330(), 0);
				func_231(uParam0, 133, 1, 0, 1);
				func_63(&(uParam0->f_2C), 8);
			}
		}
		if ((PED::IS_PED_INJURED(uParam0->f_3) || PED::IS_PED_FLEEING(uParam0->f_3)) || func_164(uParam0->f_3, 1) > 400f)
		{
			func_333(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_2, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, true);
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 4294967295, 0) == uParam0->f_2)
		{
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
			func_267(uParam0);
			func_51(2, 0);
			bLocal_86 = true;
			func_209(&iLocal_82);
			return 1;
		}
		else
		{
			func_333(uParam0, "No Taxi", 21);
			func_124("TAXI_DBG_NTAXI", 4294967295);
		}
	}
	return 0;
}

void func_267(var uParam0)//Position - 0xA1E2
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, 0))
	{
		if (func_268())
		{
		}
	}
}

int func_268()//Position - 0xA1FE
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_269(var uParam0, int iParam1)//Position - 0xA21F
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
				bVar2 = func_254(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("RHINO") || iVar1 == joaat("RATLOADER")) || iVar1 == joaat("SURFER")) || iVar1 == joaat("SURFER2")) || iVar1 == joaat("ARMYTANKER")) || iVar1 == joaat("BARRACKS")) || iVar1 == joaat("BARRACKS2")) || iVar1 == joaat("CRUSADER")) || iVar1 == joaat("UTILLITRUCK")) || iVar1 == joaat("UTILLITRUCK2")) || iVar1 == joaat("UTILLITRUCK3")) || iVar1 == joaat("AIRTUG")) || iVar1 == joaat("CADDY")) || iVar1 == joaat("CADDY2")) || iVar1 == joaat("DLOADER")) || iVar1 == joaat("DOCKTUG")) || iVar1 == joaat("FLATBED")) || iVar1 == joaat("RIPLEY")) || iVar1 == joaat("ROMERO")) || iVar1 == joaat("TOWTRUCK")) || iVar1 == joaat("TOWTRUCK2")) || iVar1 == joaat("AIRBUS")) || iVar1 == joaat("BUS")) || iVar1 == joaat("COACH")) || iVar1 == joaat("RENTALBUS")) || iVar1 == joaat("TOURBUS")) || iVar1 == joaat("RIOT")) || iVar1 == joaat("TRASH")) || iVar1 == joaat("BENSON")) || iVar1 == joaat("BIFF")) || iVar1 == joaat("HAULER")) || iVar1 == joaat("PACKER")) || iVar1 == joaat("PHANTOM")) || iVar1 == joaat("POUNDER")) || iVar1 == joaat("BULLDOZER")) || iVar1 == joaat("HANDLER")) || iVar1 == joaat("TIPTRUCK2")) || iVar1 == joaat("CUTTER")) || iVar1 == joaat("DUMP")) || iVar1 == joaat("MIXER")) || iVar1 == joaat("MIXER2")) || iVar1 == joaat("RUBBLE")) || iVar1 == joaat("SCRAP")) || iVar1 == joaat("TIPTRUCK")) || iVar1 == joaat("CAMPER")) || iVar1 == joaat("TACO")) || iVar1 == joaat("BOXVILLE")) || iVar1 == joaat("BOXVILLE2")) || iVar1 == joaat("BOXVILLE3")) || iVar1 == joaat("BURRITO")) || iVar1 == joaat("BURRITO2")) || iVar1 == joaat("BURRITO3")) || iVar1 == joaat("BURRITO4")) || iVar1 == joaat("GBURRITO")) || iVar1 == joaat("JOURNEY")) || iVar1 == joaat("MULE")) || iVar1 == joaat("MULE2")) || iVar1 == joaat("PONY")) || iVar1 == joaat("RUMPO")) || iVar1 == joaat("RUMPO2")) || iVar1 == joaat("SPEEDO")) || iVar1 == joaat("SPEEDO2")) || iVar1 == joaat("YOUGA")) || iVar1 == joaat("MOWER")) || iVar1 == joaat("TRACTOR")) || iVar1 == joaat("TRACTOR2")) || iVar1 == joaat("FBI")) || iVar1 == joaat("FBI2")) || iVar1 == joaat("PRANGER")) || iVar1 == joaat("AMBULANCE")) || iVar1 == joaat("DILETTANTE2")) || iVar1 == joaat("FIRETRUK")) || iVar1 == joaat("LGUARD")) || iVar1 == joaat("DUNE")) || iVar1 == joaat("PBUS")) || iVar1 == joaat("POLICE")) || iVar1 == joaat("POLICE2")) || iVar1 == joaat("POLICE3")) || iVar1 == joaat("POLICE4")) || iVar1 == joaat("POLICEB")) || iVar1 == joaat("POLICET")) || iVar1 == joaat("SHERIFF")) || iVar1 == joaat("SHERIFF2")) || iVar1 == joaat("STOCKADE"))
				{
					bVar3 = false;
				}
				if (uParam0->f_19B == 7)
				{
					if (iVar1 == joaat("BODHI2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 4294967295, 0) == AUDIO::_0x0626A247D2405330())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_23(uParam0->f_2C, 64))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_124("TX_VIP_DMGD", 4294967295);
							if (func_115("TX_VIP_DMGD"))
							{
								func_63(&(uParam0->f_2C), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_23(uParam0->f_2C, 32))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_124("TX_VIP_CAR", 4294967295);
							if (func_115("TX_VIP_CAR"))
							{
								func_63(&(uParam0->f_2C), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_23(uParam0->f_2C, 16))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_124("TX_VIP_SMALL", 4294967295);
							if (func_115("TX_VIP_SMALL"))
							{
								func_63(&(uParam0->f_2C), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_21(&(uParam0->f_2C), 16);
			func_21(&(uParam0->f_2C), 64);
			func_21(&(uParam0->f_2C), 32);
		}
	}
	return 0;
}

void func_270(int iParam0)//Position - 0xA834
{
	var uVar0;
	vector3 vVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::_NETWORK_SET_RICH_PRESENCE_2(8, &cVar1);
	}
}

void func_271(var uParam0)//Position - 0xA88D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_22(&(uParam0->f_64), iVar0);
		iVar0++;
	}
}

void func_272()//Position - 0xA8B2
{
	Local_165 = 0;
	func_289(44133/*func_291*/, 44108/*func_290*/, 1);
	func_289(43869/*func_287*/, 43846/*func_286*/, 1);
	func_289(43784/*func_285*/, 43759/*func_284*/, 1);
	func_289(43687/*func_283*/, 43663/*func_282*/, 1);
	func_289(43553/*func_281*/, 43532/*func_280*/, 1);
	func_289(43479/*func_278*/, 43454/*func_277*/, 1);
	func_289(43312/*func_274*/, 43289/*func_273*/, 1);
}

int func_273(var uParam0, var uParam1)//Position - 0xA919
{
	uParam1 = uParam1;
	func_333(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_274(var uParam0)//Position - 0xA930
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_276(uParam0->f_4))
		{
			func_275(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_275(var uParam0, int iParam1)//Position - 0xA95A
{
	uParam0->f_75 = 1;
	uParam0->f_76 = iParam1;
}

int func_276(int iParam0)//Position - 0xA96D
{
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) < -100f)
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_277(var uParam0, var uParam1)//Position - 0xA9BE
{
	uParam1 = uParam1;
	func_333(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_278(var uParam0)//Position - 0xA9D7
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0)
	{
		if (func_279(uParam0->f_55, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_279(var uParam0, int iParam1)//Position - 0xA9FD
{
	return (uParam0 && iParam1) != 0;
}

int func_280(var uParam0, var uParam1)//Position - 0xAA0C
{
	uParam1 = uParam1;
	func_275(uParam0, 11);
	return 1;
}

int func_281(var uParam0)//Position - 0xAA21
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(uParam0->f_4) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			if (!func_173(uParam0, 25))
			{
				func_300(uParam0, 25, 0, 0);
			}
			else if (func_410(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_173(uParam0, 25))
		{
			func_179(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_282(var uParam0, var uParam1)//Position - 0xAA8F
{
	uParam1 = uParam1;
	func_333(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_283(var uParam0)//Position - 0xAAA7
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, 0))
	{
		if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(uParam0->f_4))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_284(var uParam0, var uParam1)//Position - 0xAAEF
{
	uParam1 = uParam1;
	func_333(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_285(var uParam0)//Position - 0xAB08
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, 0))
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
			{
				if (func_279(uParam0->f_56, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_286(var uParam0, var uParam1)//Position - 0xAB46
{
	uParam1 = uParam1;
	func_333(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_287(var uParam0)//Position - 0xAB5D
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_288(uParam0->f_4))
		{
			func_275(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_288(int iParam0)//Position - 0xAB87
{
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) == 0f)
	{
		if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
		{
		}
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_289(int iParam0, int iParam1, bool bParam2)//Position - 0xABE2
{
	if (Local_165 >= 16)
	{
		Local_165 = 16;
		return;
	}
	Local_165.f_1[Local_165 /*4*/] = 0;
	func_64(&(Local_165.f_1[Local_165 /*4*/]), 1);
	if (bParam2)
	{
		func_64(&(Local_165.f_1[Local_165 /*4*/]), 2);
	}
	Local_165.f_1[Local_165 /*4*/].f_2 = iParam0;
	Local_165.f_1[Local_165 /*4*/].f_3 = iParam1;
	Local_165++;
}

int func_290(var uParam0, var uParam1)//Position - 0xAC4C
{
	uParam1 = uParam1;
	func_333(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_291(var uParam0)//Position - 0xAC65
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if ((PED::IS_PED_INJURED(uParam0->f_3) || ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0)) || FIRE::IS_ENTITY_ON_FIRE(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_292()//Position - 0xACA5
{
	Local_162[5 /*10*/] = 5;
	Local_162[5 /*10*/].f_1 = 0;
	Local_162[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_162[5 /*10*/].f_9 = 78;
	Local_162[0 /*10*/] = 5;
	Local_162[0 /*10*/].f_1 = 0;
	Local_162[0 /*10*/].f_2 = "TX_AIR_N";
	Local_162[0 /*10*/].f_9 = 76;
	Local_162[2 /*10*/] = 5;
	Local_162[2 /*10*/].f_1 = 0;
	Local_162[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_162[2 /*10*/].f_9 = 21;
	Local_162[1 /*10*/] = 10;
	Local_162[1 /*10*/].f_1 = 0;
	Local_162[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_162[1 /*10*/].f_9 = 71;
	Local_162[4 /*10*/] = 10;
	Local_162[4 /*10*/].f_1 = 0;
	Local_162[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_162[4 /*10*/].f_9 = 79;
	Local_162[6 /*10*/] = 10;
	Local_162[6 /*10*/].f_1 = 0;
	Local_162[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_162[6 /*10*/].f_9 = 80;
	Local_162[9 /*10*/] = 15;
	Local_162[9 /*10*/].f_1 = 0;
	Local_162[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_162[9 /*10*/].f_9 = 82;
	Local_162[8 /*10*/] = 15;
	Local_162[8 /*10*/].f_1 = 0;
	Local_162[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_162[8 /*10*/].f_9 = 72;
	Local_162[7 /*10*/] = 15;
	Local_162[7 /*10*/].f_1 = 0;
	Local_162[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_162[7 /*10*/].f_9 = 74;
	Local_162[11 /*10*/] = 5;
	Local_162[11 /*10*/].f_1 = 0;
	Local_162[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_162[11 /*10*/].f_9 = 70;
	Local_162[12 /*10*/] = 5;
	Local_162[12 /*10*/].f_1 = 0;
	Local_162[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_162[12 /*10*/].f_9 = 69;
	Local_162[13 /*10*/] = 10;
	Local_162[13 /*10*/].f_1 = 0;
	Local_162[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_162[13 /*10*/].f_9 = 67;
	Local_162[14 /*10*/] = 10;
	Local_162[14 /*10*/].f_1 = 0;
	Local_162[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_162[14 /*10*/].f_9 = 75;
}

int func_293()//Position - 0xAE7D
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_260))
	{
		func_251("TAXI_ASSETS_STREAMED - Loading A_M_Y_SouCent_01", &iLocal_267, 1000);
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_335))
	{
		return 0;
	}
	if (!func_294(&iLocal_267, 1))
	{
		func_251("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_267, 1000);
		return 0;
	}
	return 1;
}

int func_294(int iParam0, bool bParam1)//Position - 0xAED0
{
	if (!STREAMING::HAS_MODEL_LOADED(func_20()))
	{
		func_251("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"))
		{
			func_251("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@taxi@"))
	{
		func_251("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@towingcome_here"))
	{
		func_251("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
	{
		func_251("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		func_251("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_295(var uParam0, int iParam1)//Position - 0xAF87
{
	switch (iParam1)
	{
		case 1:
			uParam0->f_7B = "TRS_STREAMING";
			break;
		
		case 2:
			uParam0->f_7B = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			uParam0->f_7B = " TRS_SPAWNING ";
			break;
		
		case 4:
			uParam0->f_7B = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			uParam0->f_7B = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			uParam0->f_7B = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			uParam0->f_7B = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			uParam0->f_7B = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			uParam0->f_7B = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			uParam0->f_7B = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			uParam0->f_7B = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			uParam0->f_7B = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			uParam0->f_7B = " TRS_CUTSCENE ";
			break;
		
		case 20:
			uParam0->f_7B = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			uParam0->f_7B = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			uParam0->f_7B = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			uParam0->f_7B = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			uParam0->f_7B = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			uParam0->f_7B = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			uParam0->f_7B = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			uParam0->f_7B = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			uParam0->f_7B = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			uParam0->f_7B = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			uParam0->f_7B = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			uParam0->f_7B = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			uParam0->f_7B = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			uParam0->f_7B = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			uParam0->f_7B = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			uParam0->f_7B = " TRS_CLEANUP ";
			break;
		
		case 21:
			uParam0->f_7B = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			uParam0->f_7B = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_19A = iParam1;
}

int func_296(var uParam0)//Position - 0xB1A6
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		uParam0->f_8 = func_297(uParam0->f_3, 0, 0);
		HUD::SET_GPS_FLAGS(1, 0f);
		HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, "TAXI_BLIP_PASS");
		BRAIN::TASK_LOOK_AT_ENTITY(uParam0->f_3, AUDIO::_0x0626A247D2405330(), 4294967295, 2048, 4);
	}
	return 1;
}

int func_297(int iParam0, bool bParam1, bool bParam2)//Position - 0xB1F5
{
	return func_147(iParam0, !bParam1, bParam2);
}

int func_298(var uParam0, vector3 vParam1, vector3 vParam2, char* sParam3, int iParam4, float fParam5, float fParam6)//Position - 0xB208
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		func_299(uParam0, uParam0->f_E);
		uParam0->f_B = { vParam1 };
		uParam0->f_E = { vParam2 };
		func_40(uParam0->f_E, 0);
		MISC::CLEAR_AREA_OF_PEDS(uParam0->f_E, 2f, 0);
		func_38(uParam0->f_E, 0, fParam6);
		if (iParam4 == 0)
		{
			uParam0->f_3 = PED::CREATE_RANDOM_PED(uParam0->f_B);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_1994C.f_E1[0]))
		{
			uParam0->f_3 = Global_1994C.f_E1[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, true, 1);
		}
		else
		{
			uParam0->f_3 = PED::CREATE_PED(26, iParam4, uParam0->f_B, fParam5, 1, true);
		}
		func_7(&(uParam0->f_F4), 3, uParam0->f_3, sParam3, 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_3, sParam3);
		PED::SET_PED_RESET_FLAG(uParam0->f_3, 112, true);
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			ENTITY::SET_ENTITY_LOD_DIST(uParam0->f_3, 250);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 32, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 104, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 177, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 116, false);
			PED::ADD_RELATIONSHIP_GROUP("TAXI_Passenger", &(uParam0->f_19D));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uParam0->f_19D, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, uParam0->f_19D, 2761840924);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_3, uParam0->f_19D);
			return 1;
		}
	}
	return 0;
}

void func_299(var uParam0, vector3 vParam1)//Position - 0xB35D
{
	uParam0->f_33[0] = VEHICLE::_ADD_SPEED_ZONE_FOR_COORD(vParam1, 20f, 5f, 0);
}

void func_300(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0xB37B
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_104(&(uParam0->f_92[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_103(&(uParam0->f_92[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_104(&(uParam0->f_92[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_103(&(uParam0->f_92[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_301()//Position - 0xB3ED
{
	STREAMING::REQUEST_MODEL(iLocal_260);
	STREAMING::REQUEST_ANIM_DICT(sLocal_282);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Taxi_Vomit", false, 4294967295);
	iLocal_335 = func_303();
	STREAMING::REQUEST_PTFX_ASSET();
	func_302(1);
}

void func_302(bool bParam0)//Position - 0xB41E
{
	STREAMING::REQUEST_MODEL(func_20());
	if (bParam0)
	{
		STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
	}
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@towingcome_here");
	STREAMING::REQUEST_ANIM_DICT("misscommon@response");
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI", 2);
	if (!func_23(Global_19E56.f_4A7D, 128))
	{
		func_63(&(Global_19E56.f_4A7D), 128);
	}
}

int func_303()//Position - 0xB478
{
	return unk_0x9934FEFB3B8C6DB8("MIDSIZED_MESSAGE");
}

void func_304(var uParam0, var uParam1)//Position - 0xB488
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_3C[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_3C[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			MISC::SET_BIT(&(uParam0->f_3C[iVar0 /*3*/]), 1);
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_3C[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_305(var uParam0, char* sParam1, int iParam2)//Position - 0xB4FF
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

int func_306()//Position - 0xB517
{
	float fVar0;
	int iVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
	iVar1 = func_188(&Local_231);
	if ((fVar0 - fLocal_271) > 5f)
	{
		fLocal_271 = fVar0;
		if (iLocal_270 == 0)
		{
			if (func_9(Local_231.f_4, Local_231.f_11, 1) < 200f)
			{
				iLocal_270++;
			}
			if (iVar1 >= 5)
			{
				if (!func_187())
				{
					return 1;
				}
				else
				{
					func_185();
					fLocal_271 = 0f;
				}
			}
		}
		else if (iVar1 >= 7)
		{
			if (!func_187())
			{
				return 1;
			}
			else
			{
				func_185();
				fLocal_271 = 0f;
			}
		}
	}
	return 0;
}

void func_307()//Position - 0xB5A9
{
	if (func_308(&Local_231, 27, 155f))
	{
	}
}

int func_308(var uParam0, int iParam1, float fParam2)//Position - 0xB5C2
{
	if (uParam0->f_19A < 29)
	{
		if (func_173(uParam0, 7))
		{
			func_208(uParam0, 23);
			if (func_410(uParam0, 7) > fParam2 && func_410(uParam0, 23) > 35f)
			{
				func_300(uParam0, 23, 0, 0);
				func_231(uParam0, iParam1, 1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_309(var uParam0, int iParam1, bool bParam2)//Position - 0xB620
{
	if (uParam0->f_19B == 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 0)
		{
			if (bParam2)
			{
				if (func_410(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_70)
					{
						func_231(uParam0, 92, 1, 0, 0);
						uParam0->f_70 = 0;
					}
					else
					{
						func_231(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_71 = 1;
					func_300(uParam0, 10, 0f, 1);
				}
			}
			else if (func_410(uParam0, 10) > 20f)
			{
				if (uParam0->f_70)
				{
					func_231(uParam0, 92, 1, 0, 0);
					uParam0->f_70 = 0;
				}
				else
				{
					func_231(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_71 = 1;
				func_300(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_19B == 1)
	{
		if (func_410(uParam0, 10) > 30f)
		{
			if (!func_187())
			{
				if (uParam0->f_70)
				{
					func_231(uParam0, 92, 1, 0, 0);
					uParam0->f_70 = 0;
				}
				else
				{
					func_231(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_71 = 1;
				func_300(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_23(uParam0->f_64, 64))
	{
		if (!func_15(&(Local_162[5 /*10*/].f_6)))
		{
			func_209(&(Local_162[5 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[5 /*10*/].f_6)) > 6f)
		{
			if (func_332(uParam0))
			{
				if (uParam0->f_71)
				{
					func_231(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_231(uParam0, Local_162[5 /*10*/].f_9, 1, 0, 0);
				}
				func_331(uParam0, 1);
				func_329(5, uParam0);
				func_328(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 1))
	{
		if (!func_15(&(Local_162[0 /*10*/].f_6)))
		{
			func_209(&(Local_162[0 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[0 /*10*/].f_6)) > 5f)
		{
			if (func_327(uParam0))
			{
				func_331(uParam0, 1);
				func_329(0, uParam0);
				if (uParam0->f_71)
				{
					func_231(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_231(uParam0, Local_162[0 /*10*/].f_9, 1, 0, 0);
				}
				func_328(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 2))
	{
		if (!func_15(&(Local_162[1 /*10*/].f_6)))
		{
			func_209(&(Local_162[1 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[1 /*10*/].f_6)) > 5f)
		{
			if (func_326(uParam0))
			{
				func_331(uParam0, 1);
				func_329(1, uParam0);
				if (uParam0->f_71)
				{
					func_231(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_231(uParam0, Local_162[1 /*10*/].f_9, 1, 0, 0);
				}
				func_328(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 2048))
	{
		if (!func_15(&(Local_162[8 /*10*/].f_6)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
			{
				uParam0->f_2E = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
				func_209(&(Local_162[8 /*10*/].f_6));
			}
		}
		else if (func_101(&(Local_162[8 /*10*/].f_6)) > 7f || Local_162[8 /*10*/].f_1 == 0)
		{
			if (func_325(uParam0))
			{
				func_331(uParam0, 1);
				func_329(8, uParam0);
				func_328(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 128))
	{
		if (!func_15(&(Local_162[6 /*10*/].f_6)))
		{
			func_209(&(Local_162[6 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[6 /*10*/].f_6)) > 5f)
		{
			if (func_324(uParam0))
			{
				func_331(uParam0, 1);
				func_329(6, uParam0);
				if (uParam0->f_71)
				{
					func_231(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_231(uParam0, Local_162[6 /*10*/].f_9, 1, 0, 0);
				}
				func_328(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 32))
	{
		if (!func_15(&(Local_162[4 /*10*/].f_6)))
		{
			func_209(&(Local_162[4 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[4 /*10*/].f_6)) > 4f)
		{
			if (func_323(uParam0))
			{
				func_331(uParam0, 1);
				func_329(4, uParam0);
				if (uParam0->f_71)
				{
					func_231(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_231(uParam0, Local_162[4 /*10*/].f_9, 1, 0, 0);
				}
				func_328(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 256))
	{
		if (!func_15(&(Local_162[7 /*10*/].f_6)))
		{
			func_209(&(Local_162[7 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[7 /*10*/].f_6)) > 5f || Local_162[7 /*10*/].f_1 == 0)
		{
			if (func_322(uParam0))
			{
				func_329(7, uParam0);
				func_331(uParam0, 1);
				if (uParam0->f_71)
				{
					func_231(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_231(uParam0, Local_162[7 /*10*/].f_9, 1, 0, 1);
				}
				func_328(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 8))
	{
		if (!func_15(&(Local_162[9 /*10*/].f_6)))
		{
			func_209(&(Local_162[9 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[9 /*10*/].f_6)) <= 7f)
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(CAM::_0xDC9DA9E8789F5246());
		}
		else if (func_101(&(Local_162[9 /*10*/].f_6)) > 7f || Local_162[9 /*10*/].f_1 == 0)
		{
			if (func_321(uParam0))
			{
				func_331(uParam0, 1);
				func_329(9, uParam0);
				if (uParam0->f_71)
				{
					func_231(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_231(uParam0, Local_162[9 /*10*/].f_9, 1, 0, 1);
				}
				func_328(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 16384))
	{
		if (!func_15(&(Local_162[13 /*10*/].f_6)))
		{
			func_209(&(Local_162[13 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[13 /*10*/].f_6)) > 10f)
		{
			if (func_315(uParam0))
			{
				func_331(uParam0, 1);
				func_329(13, uParam0);
				if (uParam0->f_71)
				{
					func_231(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_231(uParam0, Local_162[13 /*10*/].f_9, 1, 0, 0);
				}
				func_328(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 32768))
	{
		if (!func_15(&(Local_162[14 /*10*/].f_6)))
		{
			func_209(&(Local_162[14 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[14 /*10*/].f_6)) > 7f)
		{
			if (func_314(uParam0))
			{
				func_331(uParam0, 1);
				func_329(14, uParam0);
				if (uParam0->f_71)
				{
					func_231(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_231(uParam0, Local_162[14 /*10*/].f_9, 1, 0, 0);
				}
				func_328(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 4096))
	{
		if (!func_15(&(Local_162[11 /*10*/].f_6)))
		{
			func_209(&(Local_162[11 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[11 /*10*/].f_6)) > 8f)
		{
			if (func_313(uParam0))
			{
				func_331(uParam0, 1);
				func_329(11, uParam0);
				if (uParam0->f_71)
				{
					func_231(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_231(uParam0, Local_162[11 /*10*/].f_9, 1, 0, 0);
				}
				func_328(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 8192))
	{
		if (!func_15(&(Local_162[12 /*10*/].f_6)))
		{
			func_209(&(Local_162[12 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[12 /*10*/].f_6)) > 5f)
		{
			if (func_312(uParam0))
			{
				func_331(uParam0, 1);
				func_329(12, uParam0);
				if (uParam0->f_71)
				{
					func_231(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_231(uParam0, Local_162[12 /*10*/].f_9, 1, 0, 0);
				}
				func_328(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 4))
	{
		if (!func_15(&(Local_162[2 /*10*/].f_6)))
		{
			func_311(&(Local_162[2 /*10*/].f_6), 0f);
		}
		else if (func_101(&(Local_162[2 /*10*/].f_6)) > 5f)
		{
			if (func_310(uParam0))
			{
				if (uParam0->f_71)
				{
					func_231(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_231(uParam0, Local_162[2 /*10*/].f_9, 1, 0, 0);
				}
				func_331(uParam0, 1);
				func_329(2, uParam0);
				func_328(uParam0);
			}
		}
	}
}

int func_310(var uParam0)//Position - 0xBE1A
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(uParam0->f_2))
	{
		if ((!PED::IS_PED_STOPPED(uParam0->f_2) && !func_15(&(Local_162[0 /*10*/].f_3))) && !func_15(&(Local_162[1 /*10*/].f_3)))
		{
			if (!func_15(&(Local_162[2 /*10*/].f_3)))
			{
				uParam0->f_25 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				if (uParam0->f_25 > 10f)
				{
					func_209(&(Local_162[2 /*10*/].f_3));
				}
			}
			else if (func_101(&(Local_162[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_26 = uParam0->f_25;
				uParam0->f_25 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				fVar0 = (uParam0->f_26 - uParam0->f_25);
				func_100(&(Local_162[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_25 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_100(&(Local_162[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_311(int iParam0, float fParam1)//Position - 0xBEFD
{
	if (!func_15(iParam0))
	{
		func_104(iParam0, fParam1);
	}
}

int func_312(var uParam0)//Position - 0xBF17
{
	vector3 vVar0;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, 1) };
		if (vVar0.y < -10f && !func_15(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_162[12 /*10*/].f_3)))
			{
				func_209(&(Local_162[12 /*10*/].f_3));
			}
			else if (func_101(&(Local_162[12 /*10*/].f_3)) > 5f)
			{
				func_100(&(Local_162[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_162[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_313(var uParam0)//Position - 0xBFA6
{
	vector3 vVar0;
	
	if ((((((OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0) && !func_15(&(Local_162[0 /*10*/].f_3))) && !func_15(&(Local_162[1 /*10*/].f_3))) && !func_15(&(Local_162[5 /*10*/].f_3))) && !func_15(&(Local_162[9 /*10*/].f_3))) && !func_15(&(Local_162[7 /*10*/].f_3))) && !func_15(&(Local_162[8 /*10*/].f_3)))
	{
		vVar0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, 1) };
		if (MISC::ABSF(vVar0.x) > 2.5f && !func_15(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_162[11 /*10*/].f_3)))
			{
				func_209(&(Local_162[11 /*10*/].f_3));
				fLocal_164 = vVar0.x;
			}
			else if (func_101(&(Local_162[11 /*10*/].f_3)) < 1.5f && (MISC::ABSF(fLocal_164) - MISC::ABSF(vVar0.x)) < 0f)
			{
				func_100(&(Local_162[11 /*10*/].f_3));
				return 1;
			}
			else if (func_101(&(Local_162[11 /*10*/].f_3)) >= 1.5f)
			{
				func_100(&(Local_162[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_314(var uParam0)//Position - 0xC0D8
{
	if (((((OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0) && !func_15(&(Local_162[0 /*10*/].f_3))) && !func_15(&(Local_162[8 /*10*/].f_3))) && !func_15(&(Local_162[5 /*10*/].f_3))) && !func_15(&(Local_162[9 /*10*/].f_3))) && !func_15(&(Local_162[7 /*10*/].f_3)))
	{
		if (!func_15(&(Local_162[14 /*10*/].f_3)))
		{
			uParam0->f_5 = VEHICLE::GET_CLOSEST_VEHICLE(unk_0x8000C77B5F336760(uParam0->f_4, true), 10f, 0, 260);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f && func_165(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5, 0) && !VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_5, 4294967295, 0)))
				{
					func_209(&(Local_162[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_101(&(Local_162[14 /*10*/].f_3)) < 1.5f && func_165(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			func_100(&(Local_162[14 /*10*/].f_3));
			return 1;
		}
		else if (func_101(&(Local_162[14 /*10*/].f_3)) >= 1.5f)
		{
			func_100(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			func_100(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_315(var uParam0)//Position - 0xC25D
{
	if (((OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0) && !func_15(&(Local_162[9 /*10*/].f_3))) && !func_15(&(Local_162[7 /*10*/].f_3))) && !func_15(&(Local_162[4 /*10*/].f_3)))
	{
		if (!func_316(uParam0->f_4) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f)
		{
			if (!func_15(&(Local_162[13 /*10*/].f_3)))
			{
				func_209(&(Local_162[13 /*10*/].f_3));
			}
			else if (func_101(&(Local_162[13 /*10*/].f_3)) > 5f)
			{
				func_100(&(Local_162[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_162[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_316(int iParam0)//Position - 0xC314
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(unk_0x8000C77B5F336760(iParam0, true), 1, &vVar0, 1, 3f, 0f);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(unk_0x8000C77B5F336760(iParam0, true), 2, &vVar1, 1, 3f, 0f);
	PATHFIND::_0x16F46FB18C8009E4(vVar0, 4294967295, &vVar2);
	fVar9 = SYSTEM::VMAG(vVar2 - vVar0);
	vVar3 = { func_320((vVar1.x - vVar0.x), (vVar1.y - vVar0.y), 0f) };
	vVar4 = { func_319(vVar3, 0) * Vector(fVar9, fVar9, fVar9) };
	vVar3 = { vVar3 * Vector(2f, 2f, 2f) };
	vVar5 = { vVar0 - vVar3 + vVar4 };
	vVar6 = { vVar0 - vVar3 - vVar4 };
	vVar7 = { vVar1 + vVar3 + vVar4 };
	vVar8 = { vVar1 + vVar3 - vVar4 };
	vVar8 = { vVar8 };
	return func_317(unk_0x8000C77B5F336760(iParam0, true), vVar5, vVar6, vVar7);
}

int func_317(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)//Position - 0xC3FD
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	vParam0.z = 0f;
	vParam1.z = 0f;
	vParam2.z = 0f;
	vParam3.z = 0f;
	vVar0 = { func_320(vParam2 - vParam1) };
	vVar1 = { func_320(vParam3 - vParam1) };
	fVar2 = func_318(vParam0, vVar0);
	fVar3 = func_318(vParam1, vVar0);
	fVar4 = func_318(vParam2, vVar0);
	fVar5 = func_318(vParam0, vVar1);
	fVar6 = func_318(vParam1, vVar1);
	fVar7 = func_318(vParam3, vVar1);
	if (fVar3 > fVar4)
	{
		fVar8 = fVar3;
		fVar3 = fVar4;
		fVar4 = fVar8;
	}
	if (fVar2 < fVar3 || fVar2 > fVar4)
	{
		return 0;
	}
	if (fVar6 > fVar7)
	{
		fVar9 = fVar6;
		fVar6 = fVar7;
		fVar7 = fVar9;
	}
	if (fVar5 < fVar6 || fVar5 > fVar7)
	{
		return 0;
	}
	return 1;
}

float func_318(vector3 vParam0, vector3 vParam1)//Position - 0xC4E6
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_319(vector3 vParam0, int iParam1)//Position - 0xC507
{
	vector3 vVar0;
	
	switch (iParam1)
	{
		case 0:
			vVar0.x = -vParam0.y;
			vVar0.y = vParam0.x;
			break;
		
		case 1:
			vVar0.x = -vParam0.x;
			vVar0.y = -vParam0.y;
			break;
		
		case 2:
			vVar0.x = vParam0.y;
			vVar0.y = -vParam0.x;
			break;
	}
	vVar0.z = vParam0.z;
	return vVar0;
}

Vector3 func_320(vector3 vParam0)//Position - 0xC565
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

int func_321(var uParam0)//Position - 0xC5A4
{
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 4294967295, 0) == AUDIO::_0x0626A247D2405330())
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(CAM::_0xDC9DA9E8789F5246()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_322(var uParam0)//Position - 0xC5D9
{
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 4294967295, 0) == AUDIO::_0x0626A247D2405330())
		{
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
			{
				if (!iLocal_163)
				{
					if (ENTITY::GET_ENTITY_ROLL(uParam0->f_4) <= -145f || ENTITY::GET_ENTITY_ROLL(uParam0->f_4) >= 145f)
					{
						iLocal_163 = 1;
					}
				}
			}
			else if (iLocal_163)
			{
				if (ENTITY::GET_ENTITY_ROLL(uParam0->f_4) <= 35f && ENTITY::GET_ENTITY_ROLL(uParam0->f_4) >= -35f)
				{
					iLocal_163 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_323(var uParam0)//Position - 0xC66F
{
	int iVar0;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(CAM::_0xDC9DA9E8789F5246());
		if (iVar0 == 0)
		{
			if (!func_15(&(Local_162[4 /*10*/].f_3)))
			{
				func_209(&(Local_162[4 /*10*/].f_3));
			}
			else if (func_101(&(Local_162[4 /*10*/].f_3)) > 2f)
			{
				func_100(&(Local_162[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_162[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_324(var uParam0)//Position - 0xC6E1
{
	int iVar0;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(CAM::_0xDC9DA9E8789F5246());
		if (iVar0 == 0)
		{
			if (!func_15(&(Local_162[6 /*10*/].f_3)))
			{
				func_209(&(Local_162[6 /*10*/].f_3));
			}
			else if (func_101(&(Local_162[6 /*10*/].f_3)) > 3.5f)
			{
				func_100(&(Local_162[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_162[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_325(var uParam0)//Position - 0xC757
{
	int iVar0;
	int iVar1;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_4))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
			iVar1 = (uParam0->f_2E - iVar0);
			uParam0->f_2E = iVar0;
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_71)
				{
					func_231(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_231(uParam0, 72, 1, 0, 1);
				}
				func_100(&(Local_162[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_326(var uParam0)//Position - 0xC7D8
{
	vector3 vVar0;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, 1) };
		if (MISC::ABSF(vVar0.x) > 3f && !func_15(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_162[1 /*10*/].f_3)))
			{
				func_209(&(Local_162[1 /*10*/].f_3));
			}
			else if (func_101(&(Local_162[1 /*10*/].f_3)) > 1.2f)
			{
				func_100(&(Local_162[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_162[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_327(var uParam0)//Position - 0xC864
{
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_4))
		{
			if (!func_15(&(Local_162[0 /*10*/].f_3)))
			{
				func_209(&(Local_162[0 /*10*/].f_3));
			}
			else if (func_101(&(Local_162[0 /*10*/].f_3)) > 0.7f)
			{
				func_100(&(Local_162[0 /*10*/].f_3));
				func_103(&(Local_162[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_162[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_328(var uParam0)//Position - 0xC8EE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_15(&(Local_162[iVar0 /*10*/].f_6)))
		{
			func_103(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_300(uParam0, 10, 0f, 1);
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(CAM::_0xDC9DA9E8789F5246());
}

void func_329(int iParam0, var uParam1)//Position - 0xC936
{
	Local_162[iParam0 /*10*/].f_1++;
	func_330(uParam1, iParam0);
	func_100(&(Local_162[iParam0 /*10*/].f_6));
	uParam1->f_70 = 1;
}

void func_330(var uParam0, int iParam1)//Position - 0xC969
{
	uParam0->f_4C = (uParam0->f_4C + Local_162[iParam1 /*10*/]);
}

void func_331(var uParam0, int iParam1)//Position - 0xC980
{
	uParam0->f_68 = (uParam0->f_68 + iParam1);
}

int func_332(var uParam0)//Position - 0xC993
{
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
	{
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 25f)
		{
			if (!func_15(&(Local_162[5 /*10*/].f_3)))
			{
				func_209(&(Local_162[5 /*10*/].f_3));
			}
			else if (func_101(&(Local_162[5 /*10*/].f_3)) > 3.5f)
			{
				func_100(&(Local_162[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_100(&(Local_162[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_333(var uParam0, char* sParam1, int iParam2)//Position - 0xCA0A
{
	vector3 vVar0;
	
	func_185();
	func_430(2);
	vVar0 = { func_337() };
	if ((!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0) && func_187()) && !MISC::ARE_STRINGS_EQUAL(&vVar0, "NULL"))
	{
	}
	else
	{
		HUD::CLEAR_PRINTS();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		StringCopy(&vVar0, uParam0->f_8F, 24);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0))
		{
			if (!func_160(uParam0))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					BRAIN::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3238002688);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					BRAIN::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3238002688);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					BRAIN::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3238002688);
				}
			}
		}
		uParam0->f_6D = 1;
		uParam0->f_79 = sParam1;
		uParam0->f_19F = iParam2;
		func_300(uParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (uParam0->f_19B != 9)
			{
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_aband2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				func_335(uParam0, &vVar0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_260(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 4);
			}
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (uParam0->f_73)
			{
				StringConCat(&vVar0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_aggro", 24);
			}
			func_335(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_19F == 15)
		{
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&vVar0, "_lost1", 24);
			func_335(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&vVar0, "_spotd1", 24);
			func_335(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&vVar0, "_wntd1", 24);
			func_335(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&vVar0, "_spook", 24);
			func_335(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
			if (func_160(uParam0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
				{
					func_148(uParam0, 4096, 0);
				}
				else
				{
					func_148(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&vVar0, "_hit2", 24);
			func_335(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&vVar0, "_jak", 24);
			func_335(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (uParam0->f_19B != 9)
			{
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_shot2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_shot1", 24);
				}
				func_335(uParam0, &vVar0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_260(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_91, 4);
			}
			PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), 1, 0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_335(uParam0, &vVar0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), 1, 0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_335(uParam0, &vVar0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), 1, 0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_51(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_19B != 9)
			{
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_335(uParam0, &vVar0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_260(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_91, 4);
			}
			func_148(uParam0, 0, 0);
			func_335(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_51(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_19B != 9)
			{
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_335(uParam0, &vVar0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_260(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 4);
			}
			func_335(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_51(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_19B != 9)
			{
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_335(uParam0, &vVar0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_260(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 4);
			}
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&vVar0, "OJTX_QUIT_", 24);
			func_334(&vVar0);
			func_189(&(uParam0->f_F4), "OJTXAUD", &vVar0, 7, 0, 0, 0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (uParam0->f_73)
			{
				StringConCat(&vVar0, "_aband2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_fail1", 24);
			}
			func_335(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (uParam0->f_19B != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&vVar0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				if (uParam0->f_19A > 5)
				{
					func_335(uParam0, &vVar0);
				}
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_260(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 4);
			}
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
			func_51(3, 0);
		}
		func_300(uParam0, 3, 0f, 1);
	}
}

void func_334(char* sParam0)//Position - 0xCFB9
{
	switch (func_3(AUDIO::_0x0626A247D2405330()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_335(var uParam0, char* sParam1)//Position - 0xD00C
{
	if (func_336(uParam0))
	{
		func_189(&(uParam0->f_F4), uParam0->f_90, sParam1, 9, 0, 0, 0);
	}
}

int func_336(var uParam0)//Position - 0xD034
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0))
	{
		if (func_165(AUDIO::_0x0626A247D2405330(), uParam0->f_3, 1) < 40f && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_337()//Position - 0xD072
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3DCE == 4)
	{
		iVar1 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar1 = (iVar1 + Global_41C0);
		if (iVar1 > 4294967295)
		{
			return Global_3962[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_338(var uParam0)//Position - 0xD0B8
{
	return uParam0->f_76;
}

void func_339()//Position - 0xD0C4
{
	if (func_371(&Local_231, &Local_284))
	{
		switch (Local_284.f_1B)
		{
			case 0:
				if (Local_231.f_19A == 9)
				{
					if (!func_370(&Local_231) && PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) < 1)
					{
						if (func_369("TX_OBJ_TIE_DO") || HUD::DOES_BLIP_EXIST(Local_231.f_9))
						{
							Local_284.f_1B++;
						}
						else if (func_368(&Local_231) != 10)
						{
							func_231(&Local_231, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if (!bLocal_277)
				{
					if (func_368(&Local_231) > 10 && func_368(&Local_231) != 15)
					{
						func_231(&Local_231, 15, 1, 0, 0);
						func_300(&Local_231, 10, 0, 0);
						if (bLocal_283)
						{
						}
					}
				}
				else
				{
					Local_284.f_1B++;
				}
				break;
			
			case 2:
				if ((bLocal_277 && iLocal_258 == 0) && !func_187())
				{
					if (func_368(&Local_231) > 10 && func_368(&Local_231) != 16)
					{
						func_231(&Local_231, 16, 1, 0, 0);
						func_300(&Local_231, 10, 0, 0);
						if (bLocal_283)
						{
						}
					}
				}
				break;
			
			case 3:
				break;
			}
	}
	func_340(&Local_231, &uLocal_287, &Local_284, 4, bLocal_283);
}

int func_340(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)//Position - 0xD221
{
	char cVar0[48];
	struct<6> Var1;
	
	func_351(uParam0, uParam1);
	if ((*uParam2 == 4294967295 && uParam0->f_19A < 29) && !uParam0->f_6D)
	{
		if (func_350(uParam1))
		{
			*uParam2 = 1;
			if (bParam4)
			{
			}
		}
	}
	if (!uParam0->f_6D)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_349(uParam0))
				{
					uParam2->f_7 = { func_348(uParam1) };
					func_189(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam4)
					{
					}
				}
				break;
			
			case 2:
				if (func_187())
				{
					uParam2->f_D = { func_233() };
					if (MISC::ARE_STRINGS_EQUAL(&(uParam2->f_D), &(uParam2->f_7)))
					{
						*uParam2 = 3;
						if (bParam4)
						{
						}
					}
					else
					{
						*uParam2 = 1;
					}
				}
				break;
			
			case 3:
				if (func_212(uParam0))
				{
					if (func_187())
					{
						if (AUDIO::IS_ANY_SPEECH_PLAYING(AUDIO::_0x0626A247D2405330()))
						{
							uParam2->f_1D = 1;
						}
						else
						{
							uParam2->f_1D = 0;
						}
						func_300(uParam0, 17, 0f, 1);
						if (uParam0->f_19B == 1)
						{
							uParam2->f_1 = { func_337() };
							func_49();
						}
						else
						{
							uParam2->f_1 = { func_347() };
							func_185();
						}
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
						{
							*uParam2 = 0;
						}
						else if (uParam0->f_19B == 1)
						{
							*uParam2 = 4;
						}
						else
						{
							*uParam2 = 6;
						}
					}
				}
				else if (func_187())
				{
					uParam2->f_13 = { func_347() };
				}
				else
				{
					func_64(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_345(uParam1);
					func_300(uParam0, 18, 0, 0);
					*uParam2 = 4294967295;
					if (bParam4)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_173(uParam0, 14) && !func_187()) && !func_212(uParam0)) && func_410(uParam0, 18) > 1f)
				{
					func_300(uParam0, 18, 0, 0);
					*uParam2 = 5;
					if (bParam4)
					{
					}
				}
				break;
			
			case 5:
				if ((func_410(uParam0, 18) > 1.5f && !func_187()) && !func_212(uParam0))
				{
					StringCopy(&cVar0, uParam0->f_8F, 24);
					if (func_344(uParam2, &cVar0))
					{
						func_189(&(uParam0->f_F4), uParam0->f_90, &cVar0, 8, 0, 0, 0);
						func_300(uParam0, 18, 0, 0);
						*uParam2 = 7;
					}
					else
					{
						if (uParam2->f_1D)
						{
							StringConCat(&cVar0, "_resB", 24);
						}
						else
						{
							StringConCat(&cVar0, "_resA", 24);
						}
						Var1 = { cVar0 };
						func_343(&(uParam2->f_19), iParam3, &cVar0, 1, 1, 0);
						func_342(&(uParam0->f_F4), uParam0->f_90, &Var1, &cVar0, 8, 0, 0);
						func_300(uParam0, 18, 0, 0);
						*uParam2 = 6;
					}
				}
				break;
			
			case 6:
				if (!func_187() && func_410(uParam0, 17) > 1f)
				{
					if (func_410(uParam0, 18) > 0.5f || uParam0->f_19B == 0)
					{
						if (MISC::ARE_STRINGS_EQUAL(&(uParam2->f_13), &(uParam2->f_1)) && uParam0->f_19B != 0)
						{
							StringCopy(&(uParam2->f_1), uParam0->f_8F, 24);
							StringConCat(&(uParam2->f_1), "_end1", 24);
							func_184(&(uParam2->f_1));
							func_189(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_1), 8, 0, 0, 0);
							func_179(uParam0, 17, 1);
							*uParam2 = 7;
						}
						else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1)))
						{
							func_341(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_D), &(uParam2->f_1), 8, 0, 0);
							if (bParam4)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_187())
				{
					func_64(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_345(uParam1);
					func_300(uParam0, 18, 0, 0);
					*uParam2 = 4294967295;
				}
				break;
			}
	}
	return 0;
}

int func_341(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD5E8
{
	func_197(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_3DD5 = 0;
	Global_3DDC = 0;
	Global_3DD7 = 0;
	Global_41AD = 0;
	Global_41AF = 0;
	Global_41B3 = 1;
	StringCopy(&Global_41BA, sParam3, 24);
	Global_280001 = 0;
	return func_190(sParam2, iParam4, 0);
}

int func_342(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD63C
{
	func_197(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_3DD5 = 0;
	Global_3DDC = 0;
	Global_3DD7 = 0;
	Global_41AD = 1;
	Global_41AF = 0;
	Global_41B3 = 0;
	StringCopy(&Global_41BA, sParam3, 24);
	Global_280001 = 0;
	return func_190(sParam2, iParam4, 0);
}

void func_343(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xD690
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_279(*uParam0, iVar1))
		{
			func_64(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_184(sParam2);
				}
				else
				{
					func_184(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

int func_344(var uParam0, char* sParam1)//Position - 0xD727
{
	if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_D), "txm3_bant1") || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_D), "txm9_bant2"))
	{
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	if ((MISC::ARE_STRINGS_EQUAL(&(uParam0->f_D), "txm6_bant3M") || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_D), "txm6_bant3T")) || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_D), "txm6_bant3F"))
	{
		func_63(&(uParam0->f_1C), 1);
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	return 0;
}

void func_345(var uParam0)//Position - 0xD7A5
{
	int iVar0;
	
	iVar0 = func_346(uParam0);
	if (iVar0 > 4294967295)
	{
		func_21(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_21(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_63(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_202(), 24);
	}
}

int func_346(var uParam0)//Position - 0xD7EF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_23((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

struct<6> func_347()//Position - 0xD81F
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3DCE == 4)
	{
		iVar1 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar1 = (iVar1 + Global_41C0);
		iVar2 = iVar1 + 1;
		if (iVar2 > 4294967295 && iVar1 > 4294967295)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_3962[iVar2 /*6*/])))
			{
				return Global_3962[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_3962[iVar3 /*6*/])))
					{
						return Global_3962[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_3962[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_348(var uParam0)//Position - 0xD8CB
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_23((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_63(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_349(var uParam0)//Position - 0xD912
{
	switch (uParam0->f_19B)
	{
		case 0:
			if (func_214("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_214("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_214("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_214("TX_OBJ_GYB_DO", 0, 0) || func_214("TAXI_OBJ_GYB", 0, 0)) || func_214("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_214("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_214("TX_OBJ_CYI_DO", 0, 0) || func_214("TAXI_OBJ_CYI_01", 0, 0)) || func_214("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_214("TX_OBJ_GYN_DO", 0, 0) || func_214("TAXI_OBJ_GYN", 0, 0)) || func_214("TAXI_OBJ_GYN_TG", 0, 0)) || func_214("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_214("TAXI_OBJ_CC1", 0, 0) || func_214("TAXI_OBJ_CC2", 0, 0)) || func_214("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_214("TAXI_OBJ_FTC1", 0, 0) || func_214("TAXI_OBJ_FTC2", 0, 0)) || func_214("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_214("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_214("TAXI_OBJ_GETRUN", 0, 0) || func_214("TAXI_OBJ_DRIVE", 0, 0)) || func_214("TAXI_OBJ_RETURN", 0, 0)) || func_214("TAXI_OBJ_POL", 0, 0)) || func_214("TAXI_OBJ_RUNOUT", 0, 0)) || func_214("TAXI_OBJ_POL", 0, 0));
}

int func_350(var uParam0)//Position - 0xDB32
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_23((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_351(var uParam0, var uParam1)//Position - 0xDB61
{
	vector3 vVar0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	
	if (func_349(uParam0))
	{
	}
	else if (!uParam0->f_6E)
	{
	}
	else if (func_173(uParam0, 14))
	{
		StringCopy(&vVar0, uParam0->f_8F, 24);
		switch (func_368(uParam0))
		{
			case 55:
				StringConCat(&vVar0, "_lvMe1", 24);
				cVar1 = { vVar0 };
				func_343(&(uParam0->f_5D), 3, &cVar1, 0, 1, 0);
				func_342(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_300(uParam0, 16, 0, 0);
				func_367(4, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_187())
				{
					if (uParam0->f_73)
					{
						StringConCat(&vVar0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_retrn1", 24);
					}
					if (uParam0->f_19B != 9)
					{
						func_366(uParam0, &vVar0, 0, 0, 8);
					}
				}
				else
				{
					func_363(uParam0, vVar0, func_365(uParam0, 2));
				}
				if (func_23(uParam0->f_62, 4))
				{
					func_300(uParam0, 16, 0, 0);
					func_265(uParam0, 0, 0);
				}
				func_170(uParam0, &(uParam0->f_62), 4, 3);
				break;
			
			case 3:
				if (func_410(uParam0, 16) > 1f)
				{
					func_172(1);
					if (uParam0->f_19B == 9)
					{
						func_264("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_264("TAXI_VIP_RETURN", 7500, 1);
					}
					func_300(uParam0, 16, 0, 0);
					func_265(uParam0, 0, 0);
				}
				break;
			
			case 65:
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aggro", 24);
				}
				uParam0->f_6B++;
				if (uParam0->f_19B != 9)
				{
					func_366(uParam0, &vVar0, 0, 1, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_260(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_91, 4);
				}
				break;
		}
	}
	else if ((func_410(uParam0, 16) > func_113(uParam0->f_19B == 0, 1f, 4f) && !uParam0->f_8E) && (((uParam0->f_19B == 0 || uParam0->f_19B == 1) && !func_187()) || (uParam0->f_19B != 0 && uParam0->f_19B != 1)))
	{
		StringCopy(&vVar0, uParam0->f_8F, 24);
		switch (func_368(uParam0))
		{
			case 142:
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_366(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&vVar0, "_lvMe2", 24);
				cVar1 = { vVar0 };
				func_343(&(uParam0->f_5D), 3, &cVar1, 0, 1, 0);
				func_342(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_300(uParam0, 16, 0, 0);
				func_367(4, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_19B == 9)
				{
					func_189(&(uParam0->f_F4), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_231(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_300(uParam0, 16, 0, 0);
				func_231(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&vVar0, "_hail1", 24);
				cVar1 = { vVar0 };
				if (!func_23(uParam0->f_2C, 128))
				{
					if ((uParam0->f_19B == 0 || uParam0->f_19B == 1) || uParam0->f_19B == 4)
					{
						func_343(&(uParam0->f_63), 4, &cVar1, 0, 1, 0);
						func_342(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
					}
					else
					{
						func_366(uParam0, &vVar0, 0, 0, 8);
					}
				}
				func_300(uParam0, 16, 4f, 0);
				uParam0->f_8D = 1;
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_19B == 7)
				{
					func_264("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_264("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_8D = 1;
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&vVar0, "_obj1", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				if (uParam0->f_19B != 7 && uParam0->f_19B != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = func_362(uParam0->f_11, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_11);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				func_231(uParam0, 10, 1, 0, 0);
				uParam0->f_1A1 = 10;
				break;
			
			case 9:
				if ((uParam0->f_65 == 1 || uParam0->f_19B == 2) || uParam0->f_19B == 0)
				{
					StringConCat(&vVar0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_66)
					{
						case 1:
							StringConCat(&vVar0, "_gret1", 24);
							break;
						
						case 0:
							StringConCat(&vVar0, "_gret2", 24);
							break;
						
						case 2:
							StringConCat(&vVar0, "_gret3", 24);
							break;
						
						default:
							StringConCat(&vVar0, "_gret4", 24);
							break;
						}
				}
				func_184(&vVar0);
				if (uParam0->f_19B != 9)
				{
					func_366(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					func_260(uParam0->f_3, "TAXI_START", uParam0->f_91, 4);
				}
				if (uParam0->f_19B != 7 && uParam0->f_19B != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = func_362(uParam0->f_11, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_11);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				func_231(uParam0, 10, 1, 0, 0);
				uParam0->f_1A1 = 10;
				break;
			
			case 7:
				StringConCat(&vVar0, "_dest2", 24);
				func_361(uParam0, 33554432, vVar0, "", 1, 8);
				func_300(uParam0, 16, 0, 0);
				func_231(uParam0, 10, 1, 0, 0);
				uParam0->f_1A1 = 10;
				break;
			
			case 10:
				if (!func_187())
				{
					func_360(uParam0, 0);
					func_63(&(uParam0->f_2C), 4);
					func_300(uParam0, 16, 0, 0);
					func_231(uParam0, 13, 0, 0, 0);
				}
				break;
			
			case 14:
				switch (uParam0->f_66)
				{
					case 0:
						StringConCat(&vVar0, "_bant2", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_bant1", 24);
						break;
					
					case 2:
						StringConCat(&vVar0, "_bant3", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_bant1", 24);
						break;
				}
				func_184(&vVar0);
				func_358(vVar0, uParam1);
				func_300(uParam0, 16, 0, 0);
				func_300(uParam0, 11, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_410(uParam0, 11) > uParam0->f_24)
				{
					if (uParam0->f_19B == 0)
					{
						StringConCat(&vVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant1", 24);
						func_184(&vVar0);
					}
					func_358(vVar0, uParam1);
					func_63(&(uParam0->f_51), 67108864);
					func_300(uParam0, 16, 0, 0);
					func_300(uParam0, 11, 0, 0);
					func_265(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_410(uParam0, 11) > uParam0->f_24)
				{
					if (uParam0->f_19B == 0)
					{
						StringConCat(&vVar0, "_ban2", 24);
					}
					else if (uParam0->f_19B == 1)
					{
						StringConCat(&vVar0, "_banter", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant2", 24);
						if (uParam0->f_19B != 6)
						{
							func_184(&vVar0);
						}
					}
					func_358(vVar0, uParam1);
					func_300(uParam0, 11, 0, 0);
					func_300(uParam0, 16, 0, 0);
					func_265(uParam0, 0, 0);
				}
				break;
			
			case 17:
				if (uParam0->f_19B == 0)
				{
					StringConCat(&vVar0, "_ban3", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant3", 24);
					func_184(&vVar0);
				}
				func_358(vVar0, uParam1);
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 18:
				if (uParam0->f_19B == 0)
				{
					StringConCat(&vVar0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant4", 24);
				}
				func_184(&vVar0);
				func_358(vVar0, uParam1);
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 19:
				if (uParam0->f_19B == 0)
				{
					StringConCat(&vVar0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant5", 24);
				}
				func_184(&vVar0);
				func_358(vVar0, uParam1);
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&vVar0, "_dest2b", 24);
				func_184(&vVar0);
				func_358(vVar0, uParam1);
				func_300(uParam0, 16, 0, 0);
				func_300(uParam0, 11, 0, 0);
				func_265(uParam0, 0, 0);
				func_63(&(uParam0->f_52), 262144);
				uParam0->f_24 = 20f;
				break;
			
			case 23:
				StringConCat(&vVar0, "_seePt1", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				func_231(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_1A1 = 24;
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&vVar0, "_talk", 24);
				StringIntConCat(&vVar0, 1, 24);
				func_184(&vVar0);
				func_366(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 89:
				switch (uParam0->f_66)
				{
					case 0:
						StringConCat(&vVar0, "_deal1", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_deal1", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_deal1", 24);
						break;
				}
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&vVar0, "_ig1c", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 27:
				StringConCat(&vVar0, "_bTime", 24);
				if (uParam0->f_19B == 2)
				{
					iVar3 = 8;
				}
				else
				{
					iVar3 = 3;
				}
				iVar2 = 0;
				while (iVar2 < iVar3)
				{
					switch (uParam0->f_19B)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_19B == 2)
				{
					func_357(&(uParam0->f_5A), 8, &vVar0, &iVar5, 1, 0);
				}
				else
				{
					func_357(&(uParam0->f_5A), 3, &vVar0, &iVar5, 1, 0);
				}
				func_358(vVar0, uParam1);
				func_367(0, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_300(uParam0, 16, 0, 0);
				func_300(uParam0, 6, 0f, 1);
				func_265(uParam0, 0, 0);
				break;
			
			case 26:
				StringConCat(&vVar0, "_gTime", 24);
				iVar2 = 0;
				while (iVar2 < 8)
				{
					switch (uParam0->f_19B)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_19B == 2)
				{
					func_357(&(uParam0->f_59), 8, &vVar0, &iVar5, 1, 0);
				}
				else
				{
					func_357(&(uParam0->f_59), 3, &vVar0, &iVar5, 1, 0);
				}
				func_358(vVar0, uParam1);
				func_367(0, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 1);
				func_300(uParam0, 16, 0, 0);
				func_300(uParam0, 6, 0f, 1);
				func_265(uParam0, 0, 0);
				break;
			
			case 12:
				func_264("TAXI_OBJ_GYB", 3500, 1);
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_19A == 12 || uParam0->f_19A == 18)
				{
					func_264("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_19A < 21)
				{
					func_264("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_264("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_1A1 = 11;
				uParam0->f_8D = 1;
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 28:
				switch (uParam0->f_66)
				{
					case 0:
						StringConCat(&vVar0, "_dest1A", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_dest1B", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_dest1A", 24);
						break;
				}
				func_366(uParam0, &vVar0, 0, 0, 8);
				func_231(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_23(uParam0->f_62, 268435456))
				{
					func_264("TAXI_OBJ_CYI_01", 7500, 1);
					func_63(&(uParam0->f_62), 268435456);
				}
				uParam0->f_1A1 = 29;
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&vVar0, "_rCar1", 24);
				func_184(&vVar0);
				func_358(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&vVar0, "_rCar2", 24);
				func_184(&vVar0);
				func_358(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&vVar0, "_rCar3", 24);
				func_184(&vVar0);
				func_358(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 33:
				func_264("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_1A1 = 33;
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_23(uParam0->f_52, 8192))
				{
					if (func_410(uParam0, 11) > uParam0->f_24)
					{
						StringConCat(&vVar0, "_airBr1", 24);
						func_184(&vVar0);
						if (uParam0->f_19B == 5)
						{
							func_358(vVar0, uParam1);
						}
						else
						{
							func_366(uParam0, &vVar0, 0, 0, 8);
						}
						func_63(&(uParam0->f_52), 8192);
						func_300(uParam0, 16, 0, 0);
						func_300(uParam0, 11, 0, 0);
						func_265(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_23(uParam0->f_52, 16384))
				{
					StringConCat(&vVar0, "_seeD1", 24);
					func_184(&vVar0);
					func_366(uParam0, &vVar0, 0, 0, 8);
					func_63(&(uParam0->f_52), 16384);
				}
				break;
			
			case 36:
				if (!func_23(uParam0->f_52, 32768))
				{
					StringConCat(&vVar0, "_seeD2", 24);
					func_184(&vVar0);
					func_366(uParam0, &vVar0, 0, 0, 8);
					func_63(&(uParam0->f_52), 32768);
				}
				break;
			
			case 37:
				StringConCat(&vVar0, "_done1", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				func_231(uParam0, 46, 1, 0, 0);
				break;
			
			case 138:
				if (uParam0->f_65 == 1)
				{
					StringConCat(&vVar0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_66)
					{
						case 1:
							StringConCat(&vVar0, "_ftc1", 24);
							break;
						
						case 0:
							StringConCat(&vVar0, "_ftc2", 24);
							break;
						
						case 2:
							StringConCat(&vVar0, "_ftc3", 24);
							break;
						
						default:
							StringConCat(&vVar0, "_ftc3", 24);
							break;
						}
				}
				func_184(&vVar0);
				func_366(uParam0, &vVar0, 0, 0, 8);
				func_231(uParam0, 139, 1, 0, 0);
				uParam0->f_1A1 = 139;
				func_265(uParam0, 0, 0);
				break;
			
			case 139:
				func_264("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_1A1 = 13;
				func_231(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&vVar0, "_dOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 120);
				if (!func_23(uParam0->f_52, 268435456))
				{
					if (iVar4 > 80)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else if (iVar4 > 40)
					{
						StringConCat(&cVar1, "_2", 24);
					}
					else
					{
						StringConCat(&cVar1, "_3", 24);
					}
					func_63(&(uParam0->f_52), 268435456);
				}
				else if (iVar4 > 80)
				{
					StringConCat(&cVar1, "_4", 24);
				}
				else if (iVar4 > 40)
				{
					StringConCat(&cVar1, "_5", 24);
				}
				else
				{
					StringConCat(&cVar1, "_6", 24);
				}
				func_342(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&vVar0, "_bdOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (!func_23(uParam0->f_52, 268435456))
				{
					if (iVar4 < 50)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					func_63(&(uParam0->f_52), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				func_342(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&vVar0, "_dr2P", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&vVar0, "_dr2N", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&vVar0, "_dOff2", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				func_231(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_264("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_1A1 = 44;
				func_265(uParam0, 0, 0);
				func_231(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&vVar0, "_dOff3", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				func_231(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_187())
				{
					func_264("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_1A1 = 45;
					func_265(uParam0, 0, 0);
					func_231(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_264("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_1A1 = 46;
				func_265(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_23(uParam0->f_51, 1))
				{
					func_356(uParam0, 1, vVar0, "_sick1", 8);
					func_21(&(uParam0->f_51), 2);
				}
				else if (!func_23(uParam0->f_51, 2))
				{
					func_356(uParam0, 2, vVar0, "_sick2", 8);
					func_21(&(uParam0->f_51), 1);
				}
				func_367(12, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_23(uParam0->f_52, 2097152))
				{
					StringConCat(&vVar0, "_nopke1", 24);
				}
				else if (!func_23(uParam0->f_52, 4194304))
				{
					StringConCat(&vVar0, "_nopke2", 24);
				}
				func_63(&(uParam0->f_51), 2097152);
				func_366(uParam0, &vVar0, 0, 0, 8);
				func_300(uParam0, 16, 0, 0);
				func_367(17, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 1);
				func_265(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&vVar0, "_Puke1", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				func_367(18, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				break;
			
			case 63:
				StringConCat(&vVar0, "_PkStp2", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				func_367(20, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&vVar0, "_PkStp1", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				func_367(19, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				break;
			
			case 64:
				StringConCat(&vVar0, "_PukeR1", 24);
				func_184(&vVar0);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_23(uParam0->f_51, 4))
				{
					func_356(uParam0, 4, vVar0, "_turns1", 8);
				}
				else if (!func_23(uParam0->f_51, 8))
				{
					func_356(uParam0, 8, vVar0, "_turns2", 8);
				}
				else
				{
					func_356(uParam0, 8, vVar0, "_turns3", 8);
					func_21(&(uParam0->f_51), 4);
					func_21(&(uParam0->f_51), 8);
				}
				func_367(13, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_355(uParam0))
				{
					func_363(uParam0, vVar0, func_365(uParam0, 72));
				}
				else if (uParam0->f_19B == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_260(uParam0->f_3, "CRASH_GENERIC", uParam0->f_91, 4);
					}
				}
				else if (uParam0->f_19B == 1)
				{
					StringConCat(&vVar0, "_carHt", 24);
					cVar1 = { vVar0 };
					func_343(&(uParam0->f_5F), 5, &cVar1, 1, 0, 1);
					func_189(&(uParam0->f_F4), uParam0->f_90, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&vVar0, "_carHt1", 24);
					cVar1 = { vVar0 };
					if (uParam0->f_19B == 0)
					{
						func_343(&(uParam0->f_5F), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						func_343(&(uParam0->f_5F), 5, &cVar1, 1, 1, 0);
					}
					func_342(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				}
				func_367(2, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0);
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&vVar0, "_genPnHi", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_23(uParam0->f_53, 128))
				{
					StringConCat(&vVar0, "_nMiss1", 24);
					func_189(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_63(&(uParam0->f_53), 128);
					func_21(&(uParam0->f_53), 256);
					func_300(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 256))
				{
					StringConCat(&vVar0, "_nMiss2", 24);
					func_189(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_63(&(uParam0->f_53), 256);
					func_21(&(uParam0->f_53), 512);
					func_300(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 512))
				{
					StringConCat(&vVar0, "_nMiss3", 24);
					func_189(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_63(&(uParam0->f_53), 512);
					func_21(&(uParam0->f_53), 128);
					func_300(uParam0, 16, 0, 0);
				}
				func_265(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_19B == 1 || uParam0->f_19B == 0)
				{
					bVar6 = true;
				}
				if (!func_23(uParam0->f_53, 1))
				{
					StringConCat(&vVar0, "_air1", 24);
					if (bVar6)
					{
						func_184(&vVar0);
					}
					func_189(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_63(&(uParam0->f_53), 1);
					func_21(&(uParam0->f_53), 2);
					func_300(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 2))
				{
					StringConCat(&vVar0, "_air2", 24);
					if (bVar6)
					{
						func_184(&vVar0);
					}
					func_189(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_63(&(uParam0->f_53), 2);
					if (uParam0->f_19B == 0)
					{
						func_21(&(uParam0->f_53), 4);
					}
					else
					{
						func_21(&(uParam0->f_53), 1);
					}
					func_300(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 4))
				{
					StringConCat(&vVar0, "_air3", 24);
					if (bVar6)
					{
						func_184(&vVar0);
					}
					func_189(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_63(&(uParam0->f_53), 4);
					func_21(&(uParam0->f_53), 1);
					func_300(uParam0, 16, 0, 0);
				}
				func_367(11, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_19B == 1 || uParam0->f_19B == 0)
				{
					bVar6 = true;
				}
				if (!func_23(uParam0->f_51, 4096))
				{
					func_361(uParam0, 4096, vVar0, "_sideW1", bVar6, 8);
				}
				else if (!func_23(uParam0->f_51, 8192))
				{
					func_361(uParam0, 8192, vVar0, "_sideW2", bVar6, 8);
				}
				func_367(15, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_19B == 1 || uParam0->f_19B == 0)
				{
					bVar6 = true;
				}
				if (!func_23(uParam0->f_51, 16384))
				{
					func_361(uParam0, 16384, vVar0, "_opLne1", bVar6, 8);
				}
				else if (!func_23(uParam0->f_51, 32768))
				{
					func_361(uParam0, 32768, vVar0, "_opLne2", bVar6, 8);
				}
				func_367(14, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_19B == 0)
				{
					if (!func_23(uParam0->f_52, 8))
					{
						func_354(uParam0, 8, vVar0, "_bored1", 8, 0);
					}
					else if (!func_23(uParam0->f_52, 16))
					{
						func_354(uParam0, 16, vVar0, "_bored2", 8, 0);
					}
					else if (!func_23(uParam0->f_52, 32))
					{
						func_354(uParam0, 32, vVar0, "_bored3", 8, 0);
					}
					func_367(9, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
					func_265(uParam0, 0, 0);
				}
				if (uParam0->f_19B == 1)
				{
					StringConCat(&vVar0, "_good1", 24);
					cVar1 = { vVar0 };
					func_343(&(uParam0->f_5D), 6, &cVar1, 0, 1, 0);
					func_342(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
					func_367(9, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
					func_300(uParam0, 16, 0, 0);
					func_265(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&vVar0, "_EtoB1", 24);
				cVar1 = { vVar0 };
				func_343(&(uParam0->f_60), 2, &cVar1, 0, 1, 0);
				func_342(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_367(9, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&vVar0, "_BtoE1", 24);
				cVar1 = { vVar0 };
				func_343(&(uParam0->f_61), 2, &cVar1, 0, 1, 0);
				func_342(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_367(12, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_23(uParam0->f_51, 65536))
				{
					func_361(uParam0, 65536, vVar0, "_runLit1", 1, 8);
				}
				else if (!func_23(uParam0->f_51, 131072))
				{
					func_361(uParam0, 131072, vVar0, "_runLit2", 1, 8);
				}
				func_265(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_355(uParam0))
				{
					func_363(uParam0, vVar0, func_365(uParam0, 82));
				}
				else if (uParam0->f_19B == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_260(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_91, 4);
					}
				}
				else if (!func_23(uParam0->f_53, 8))
				{
					StringConCat(&vVar0, "_hitR1", 24);
					func_184(&vVar0);
					func_189(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_63(&(uParam0->f_53), 8);
					func_21(&(uParam0->f_53), 16);
					func_300(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 16))
				{
					StringConCat(&vVar0, "_hitR2", 24);
					func_184(&vVar0);
					func_189(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_63(&(uParam0->f_53), 16);
					func_21(&(uParam0->f_53), 32);
					func_300(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 32))
				{
					StringConCat(&vVar0, "_hitR3", 24);
					func_184(&vVar0);
					func_189(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_63(&(uParam0->f_53), 32);
					if (uParam0->f_19B == 0)
					{
						func_21(&(uParam0->f_53), 64);
					}
					else
					{
						func_21(&(uParam0->f_53), 8);
					}
					func_300(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 64))
				{
					StringConCat(&vVar0, "_hitR4", 24);
					func_184(&vVar0);
					func_189(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_63(&(uParam0->f_53), 64);
					func_21(&(uParam0->f_53), 8);
					func_300(uParam0, 16, 0, 0);
				}
				func_367(1, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_187())
				{
					if (uParam0->f_73)
					{
						StringConCat(&vVar0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_aggro", 24);
					}
					func_366(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_363(uParam0, vVar0, func_365(uParam0, 65));
					func_265(uParam0, 0, 0);
				}
				uParam0->f_6B++;
				break;
			
			case 66:
				if (!func_187())
				{
					if (uParam0->f_19B == 4)
					{
						StringCopy(&vVar0, "tm6_shoot", 24);
					}
					else if (uParam0->f_73)
					{
						StringConCat(&vVar0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&vVar0, "_shoot", 24);
					}
					func_366(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_363(uParam0, vVar0, func_365(uParam0, 66));
					func_265(uParam0, 0, 0);
				}
				uParam0->f_6B++;
				break;
			
			case 13:
				if (uParam0->f_19B == 8)
				{
					if (!uParam0->f_6D && !func_187())
					{
						switch (uParam0->f_19E)
						{
							case 3:
								StringConCat(&vVar0, "_warnC1", 24);
								func_366(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&vVar0, "_warnF1", 24);
								func_366(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&vVar0, "_far1", 24);
								func_366(uParam0, &vVar0, 0, 0, 8);
								func_367(21, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
								break;
							
							case 2:
								StringConCat(&vVar0, "_close1", 24);
								func_366(uParam0, &vVar0, 0, 0, 8);
								func_367(22, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
								break;
							
							case 10:
								StringConCat(&vVar0, "_hit1", 24);
								func_366(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&vVar0, "_good1", 24);
								cVar1 = { vVar0 };
								func_343(&(uParam0->f_5D), 6, &cVar1, 1, 1, 0);
								func_342(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
								func_367(23, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0);
								func_300(uParam0, 16, 0, 0);
								func_265(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_58)
								{
									StringConCat(&vVar0, "_sBant1", 24);
									cVar1 = { vVar0 };
									func_366(uParam0, &vVar0, 0, 0, 8);
									func_300(uParam0, 16, 0, 0);
									func_300(uParam0, 11, 0, 0);
									func_265(uParam0, 0, 0);
									if (!iLocal_60)
									{
										iLocal_58 = 1;
									}
								}
								else
								{
									if (!iLocal_59)
									{
										StringConCat(&vVar0, "_bant3", 24);
										iLocal_59 = 1;
									}
									else
									{
										StringConCat(&vVar0, "_bant2", 24);
										iLocal_60 = 1;
									}
									func_184(&vVar0);
									func_366(uParam0, &vVar0, 0, 0, 8);
									func_300(uParam0, 16, 0, 0);
									func_300(uParam0, 11, 0, 0);
									func_265(uParam0, 0, 0);
									iLocal_58 = 0;
								}
								break;
							
							case 7:
								StringConCat(&vVar0, "_done1", 24);
								func_366(uParam0, &vVar0, 0, 0, 8);
								break;
						}
						func_231(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&vVar0, "_speed1", 24);
				cVar1 = { vVar0 };
				func_343(&(uParam0->f_57), 6, &cVar1, 1, 1, 0);
				func_342(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_367(10, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_23(uParam0->f_52, 1))
				{
					func_354(uParam0, 1, vVar0, "_close1", 8, 0);
				}
				else if (!func_23(uParam0->f_52, 2))
				{
					func_354(uParam0, 2, vVar0, "_close2", 8, 0);
				}
				else if (!func_23(uParam0->f_52, 4))
				{
					func_354(uParam0, 4, vVar0, "_close3", 8, 0);
				}
				func_265(uParam0, 0, 0);
				break;
			
			case 48:
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_stop2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_stop1", 24);
				}
				cVar1 = { vVar0 };
				func_343(&(uParam0->f_56), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_19B != 9)
				{
					func_342(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_260(uParam0->f_3, "TAXI_STOPPED", uParam0->f_91, 4);
				}
				func_300(uParam0, 16, 0, 0);
				func_367(5, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_355(uParam0))
				{
					func_363(uParam0, vVar0, func_365(uParam0, 74));
				}
				else if (uParam0->f_19B == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_260(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_91, 4);
					}
				}
				else
				{
					StringConCat(&vVar0, "_roll1", 24);
					func_353(uParam0, vVar0, 8);
				}
				func_367(3, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_23(uParam0->f_53, 1024))
				{
					func_63(&(uParam0->f_53), 1024);
					func_300(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv1", 24);
					func_184(&vVar0);
					func_189(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 2048))
				{
					func_63(&(uParam0->f_53), 2048);
					func_300(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv2", 24);
					func_184(&vVar0);
					func_189(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 4096))
				{
					func_63(&(uParam0->f_53), 4096);
					func_300(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv3", 24);
					func_184(&vVar0);
					func_189(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
				}
				func_265(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_23(uParam0->f_52, 1024))
				{
					func_354(uParam0, 1024, vVar0, "_rvrs1", 8, 1);
					func_21(&(uParam0->f_52), 2048);
				}
				else if (!func_23(uParam0->f_52, 2048))
				{
					func_354(uParam0, 2048, vVar0, "_rvrs2", 8, 1);
				}
				func_265(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&vVar0, "_ofrd1", 24);
				cVar1 = { vVar0 };
				func_343(&(uParam0->f_58), 4, &cVar1, 0, 1, 0);
				func_342(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_367(16, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0);
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&vVar0, "_ofrdch1", 24);
				func_189(&(uParam0->f_F4), uParam0->f_90, &vVar0, 9, 0, 0, 0);
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&vVar0, "_losPol1", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				func_231(uParam0, 52, 1, 0, 0);
				break;
			
			case 50:
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_lsPo1", 24);
				}
				if (uParam0->f_19B != 9)
				{
					func_366(uParam0, &vVar0, 0, 0, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_260(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_91, 4);
				}
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_355(uParam0))
				{
					if (uParam0->f_19B == 2)
					{
						StringConCat(&vVar0, "_copBa1", 24);
						cVar1 = { vVar0 };
						cVar1 = { vVar0 };
						func_366(uParam0, &vVar0, 0, 0, 8);
						func_231(uParam0, 52, 1, 0, 0);
						func_300(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_19B == 5 && uParam0->f_19A > 9)
						{
							StringConCat(&vVar0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&vVar0, "_copBa1", 24);
						}
						cVar1 = { vVar0 };
						func_366(uParam0, &vVar0, 0, 0, 8);
						func_300(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&vVar0, "_copBa1", 24);
					cVar1 = { vVar0 };
					func_343(&(uParam0->f_55), 6, &cVar1, 1, 1, 0);
					func_342(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
					func_300(uParam0, 16, 0, 0);
					func_265(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&vVar0, "_evdeP1", 24);
				func_367(8, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_366(uParam0, &vVar0, 0, 0, 8);
				func_300(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					func_264("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_1A1 = 52;
				}
				func_265(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&vVar0, "_cpFz1", 24);
				func_184(&vVar0);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_23(uParam0->f_51, 262144))
				{
					func_361(uParam0, 262144, vVar0, "_rdCh1", 1, 8);
				}
				else if (!func_23(uParam0->f_51, 1048576))
				{
					if (uParam0->f_19B == 0 || uParam0->f_19B == 1)
					{
						func_361(uParam0, 1048576, vVar0, "_rdCh2", 1, 8);
					}
					else
					{
						func_361(uParam0, 1048576, vVar0, "_rdCh2", 0, 8);
					}
				}
				func_367(7, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_23(uParam0->f_52, 67108864))
				{
					if (uParam0->f_1A2.f_6)
					{
						func_352(uParam0, 67108864, vVar0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_23(uParam0->f_52, 134217728))
				{
					func_352(uParam0, 134217728, vVar0, "_rdFv1", 0, 7);
				}
				func_367(6, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&vVar0, "_rdneu1", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&vVar0, "_rdtip1", 24);
				cVar1 = { vVar0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_1A2.f_3, 24);
				func_342(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 100:
				func_264("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_1A1 = 100;
				func_265(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_19B == 1)
				{
					StringConCat(&vVar0, "_horn", 24);
					func_366(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&vVar0, "_thank1", 24);
				if ((uParam0->f_19B == 1 || uParam0->f_19B == 5) || uParam0->f_19B == 0)
				{
					func_184(&vVar0);
				}
				func_63(&(uParam0->f_51), 2097152);
				if (uParam0->f_19B != 9)
				{
					func_366(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&vVar0, "_thank2", 24);
				if ((uParam0->f_19B == 1 || uParam0->f_19B == 5) || uParam0->f_19B == 0)
				{
					func_184(&vVar0);
				}
				func_63(&(uParam0->f_51), 2097152);
				if (uParam0->f_19B != 9)
				{
					func_366(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 103:
				if (uParam0->f_19B == 4)
				{
					StringConCat(&vVar0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_thank3", 24);
				}
				if ((uParam0->f_19B == 1 || uParam0->f_19B == 5) || uParam0->f_19B == 0)
				{
					func_184(&vVar0);
				}
				func_63(&(uParam0->f_51), 2097152);
				if (uParam0->f_19B != 9)
				{
					func_366(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_23(uParam0->f_52, 65536))
				{
					if (func_410(uParam0, 11) > uParam0->f_24)
					{
						switch (uParam0->f_66)
						{
							case 0:
								StringConCat(&vVar0, "_ccba2", 24);
								break;
							
							case 1:
								StringConCat(&vVar0, "_ccba1", 24);
								break;
							
							default:
								StringConCat(&vVar0, "_ccba1", 24);
								break;
						}
						func_184(&vVar0);
						func_358(vVar0, uParam1);
						func_63(&(uParam0->f_52), 65536);
						func_300(uParam0, 16, 0, 0);
						func_300(uParam0, 11, 0, 0);
						func_265(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_23(uParam0->f_52, 131072))
				{
					if (func_410(uParam0, 11) > uParam0->f_24)
					{
						StringConCat(&vVar0, "_ccbb1", 24);
						func_184(&vVar0);
						func_358(vVar0, uParam1);
						func_63(&(uParam0->f_52), 131072);
						func_300(uParam0, 16, 0, 0);
						func_300(uParam0, 11, 0, 0);
						func_265(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_23(uParam0->f_52, 8388608))
				{
					StringConCat(&vVar0, "_close1", 24);
					func_63(&(uParam0->f_52), 8388608);
				}
				else if (!func_23(uParam0->f_52, 16777216))
				{
					StringConCat(&vVar0, "_close2", 24);
					func_63(&(uParam0->f_52), 16777216);
				}
				else if (!func_23(uParam0->f_52, 33554432))
				{
					StringConCat(&vVar0, "_close3", 24);
					func_63(&(uParam0->f_52), 33554432);
				}
				func_358(vVar0, uParam1);
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_19B == 6)
				{
					StringConCat(&vVar0, "_kill1", 24);
					cVar1 = { vVar0 };
					func_343(&(uParam0->f_5D), 6, &cVar1, 1, 1, 1);
					func_184(&vVar0);
					func_342(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_19B == 8)
				{
					StringConCat(&vVar0, "_cheat1", 24);
					func_366(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					StringConCat(&vVar0, "_kill1", 24);
					func_366(uParam0, &vVar0, 0, 0, 8);
				}
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&vVar0, "_wndw2", 24);
				func_358(vVar0, uParam1);
				func_300(uParam0, 16, 0, 0);
				func_300(uParam0, 11, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&vVar0, "_wndw0", 24);
				func_358(vVar0, uParam1);
				func_300(uParam0, 16, 0, 0);
				func_300(uParam0, 11, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&vVar0, "_wndw1", 24);
				func_358(vVar0, uParam1);
				func_300(uParam0, 16, 0, 0);
				func_300(uParam0, 11, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&vVar0, "_csite1", 24);
				func_184(&vVar0);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&vVar0, "_fair1", 24);
				func_184(&vVar0);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&vVar0, "_AlCk1", 24);
				cVar1 = { vVar0 };
				func_343(&(uParam0->f_5B), 5, &cVar1, 1, 1, 0);
				func_342(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&vVar0, "_eggG1", 24);
				cVar1 = { vVar0 };
				func_343(&(uParam0->f_5C), 5, &cVar1, 1, 1, 0);
				func_342(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&vVar0, "_goons1", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&vVar0, "_oRun1", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&vVar0, "_gotG1", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&vVar0, "_getA1", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&vVar0, "_gnawy1", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&vVar0, "_grl1", 24);
				func_184(&vVar0);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&vVar0, "_figt1", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&vVar0, "_gEgg1", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&vVar0, "_gEgg3", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&vVar0, "_gEgg2", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&vVar0, "_gLeav1", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&vVar0, "_aKill1", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&vVar0, "_gHelp1", 24);
				func_184(&vVar0);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&vVar0, "_gDest1", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				func_231(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&vVar0, "_gKO1", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&vVar0, "_gThank1", 24);
				func_63(&(uParam0->f_51), 2097152);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&vVar0, "_gDriv1", 24);
				func_184(&vVar0);
				func_358(vVar0, uParam1);
				func_63(&(uParam0->f_51), 67108864);
				func_300(uParam0, 16, 0, 0);
				func_300(uParam0, 11, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&vVar0, "_cash1", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_23(uParam0->f_51, 33554432) && uParam0->f_19B != 9)
				{
					func_361(uParam0, 33554432, vVar0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_19B == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_260(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_91, 4);
					}
				}
				func_231(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&vVar0, "_foot", 24);
				func_189(&(uParam0->f_F4), uParam0->f_90, &vVar0, 9, 0, 0, 0);
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_23(uParam0->f_51, 268435456))
				{
					func_361(uParam0, 268435456, vVar0, "_kPay1", 1, 8);
				}
				func_231(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_264("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_1A1 = 108;
				func_265(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_23(uParam0->f_51, 4194304))
				{
					if (uParam0->f_19B == 2 || uParam0->f_19B == 6)
					{
						func_361(uParam0, 4194304, vVar0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_19B == 9)
					{
						if (!PED::IS_PED_INJURED(uParam0->f_3))
						{
							func_260(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_91, 4);
						}
					}
					else
					{
						func_361(uParam0, 4194304, vVar0, "_mPay1", 1, 8);
					}
				}
				func_231(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_264("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_1A1 = 111;
				func_265(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&vVar0, "_runoff", 24);
				func_189(&(uParam0->f_F4), uParam0->f_90, &vVar0, 9, 0, 0, 0);
				func_300(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_23(uParam0->f_51, 16777216))
				{
					func_361(uParam0, 16777216, vVar0, "_ret1", 1, 8);
				}
				func_265(uParam0, 0, 0);
				break;
			
			case 88:
				func_264("TAXI_TIEFLEE", 7500, 1);
				func_265(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_23(uParam0->f_62, 536870912))
				{
					func_264("TAXI_OBJ_CYI_1B", 7500, 1);
					func_63(&(uParam0->f_62), 536870912);
				}
				uParam0->f_1A1 = 57;
				func_265(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&vVar0, "_joke1", 24);
				func_184(&vVar0);
				func_366(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 136:
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_wronglz", 24);
				}
				else if (uParam0->f_74)
				{
					StringConCat(&vVar0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_wrong", 24);
				}
				func_366(uParam0, &vVar0, 0, 0, 8);
				func_265(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&vVar0, "_shout", 24);
				func_366(uParam0, &vVar0, 0, 0, 8);
				func_265(uParam0, 0, 0);
				break;
			
			case 135:
				if (uParam0->f_19B == 4)
				{
					StringCopy(&vVar0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&vVar0, "_jack", 24);
				}
				func_366(uParam0, &vVar0, 0, 0, 8);
				func_265(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&vVar0, "_getCar", 24);
				func_366(uParam0, &vVar0, 1, 0, 8);
				func_231(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_264("TX_VIP", 7500, 0);
				uParam0->f_1A1 = 134;
				func_231(uParam0, 0, 0, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			}
	}
}

void func_352(var uParam0, int iParam1, vector3 vParam2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x10E20
{
	func_63(&(uParam0->f_52), iParam1);
	func_300(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_184(&vParam2);
	}
	func_189(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam8, 0, 0, 0);
}

void func_353(var uParam0, struct<6> Param1, int iParam2)//Position - 0x10E61
{
	vector3 vVar0[24];
	
	cVar0 = { Param1 };
	if (!func_23(uParam0->f_52, 64))
	{
		func_63(&(uParam0->f_52), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_23(uParam0->f_52, 128))
	{
		func_63(&(uParam0->f_52), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, MISC::GET_RANDOM_INT_IN_RANGE(1, 3), 24);
	}
	func_342(&(uParam0->f_F4), uParam0->f_90, &Param1, &cVar0, iParam2, 0, 0);
	func_300(uParam0, 16, 0, 0);
}

void func_354(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)//Position - 0x10EE8
{
	func_63(&(uParam0->f_52), iParam1);
	func_300(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if ((((uParam0->f_19B == 1 || uParam0->f_19B == 0) || uParam0->f_19B == 5) || uParam0->f_19B == 8) || uParam0->f_19B == 2)
	{
		if (bParam8)
		{
			func_184(&vParam2);
		}
	}
	func_189(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam7, 0, 0, 0);
}

int func_355(var uParam0)//Position - 0x10F68
{
	if ((((((uParam0->f_19B == 2 || uParam0->f_19B == 3) || uParam0->f_19B == 4) || uParam0->f_19B == 5) || uParam0->f_19B == 6) || uParam0->f_19B == 7) || uParam0->f_19B == 8)
	{
		return 1;
	}
	return 0;
}

void func_356(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)//Position - 0x10FCE
{
	func_63(&(uParam0->f_51), iParam1);
	func_300(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	func_189(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam7, 0, 0, 0);
}

void func_357(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x11004
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_279(*uParam0, iVar1))
		{
			func_64(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_184(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_358(char[24] cParam0, var uParam1)//Position - 0x11085
{
	int iVar0;
	
	iVar0 = func_359(uParam1);
	if (iVar0 > 4294967295)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		func_63(&((uParam1[iVar0 /*8*/])->f_7), 2);
	}
}

int func_359(var uParam0)//Position - 0x110B4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_360(var uParam0, bool bParam1)//Position - 0x110E1
{
	switch (uParam0->f_19B)
	{
		case 0:
			if (bParam1)
			{
				func_264("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_264("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_264("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_264("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_264("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_264("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_264("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_264("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_264("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_264("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_264("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_264("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_264("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_264("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_264("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_264("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_264("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_264("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_264("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_264("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_8B = 1;
	}
}

void func_361(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x11298
{
	func_63(&(uParam0->f_51), iParam1);
	func_300(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_184(&vParam2);
	}
	func_189(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam8, 0, 0, 0);
}

int func_362(vector3 vParam0, bool bParam1)//Position - 0x112D9
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_113(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

void func_363(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)//Position - 0x11305
{
	func_300(uParam0, 16, 0, 0);
	func_300(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam5, 24);
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		AUDIO::INTERRUPT_CONVERSATION(uParam0->f_3, &cParam1, func_364(uParam0));
	}
}

char* func_364(var uParam0)//Position - 0x11343
{
	char* sVar0;
	
	switch (uParam0->f_19B)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		
		case 1:
			sVar0 = "TaxiOtis";
			break;
		
		case 2:
			sVar0 = "TaxiKwak";
			break;
		
		case 3:
			sVar0 = "TaxiWalter";
			break;
		
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		
		case 7:
			sVar0 = "TaxiDarren";
			break;
		
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_365(var uParam0, int iParam1)//Position - 0x113DD
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_19B)
			{
				case 0:
					return "_ACRH";
				
				case 1:
					return "_ACRH";
				
				case 2:
					return "_ACAA";
				
				case 3:
					return "_ACRH";
				
				case 4:
					return "_AEAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					return "_ACAA";
				
				case 7:
					return "_ACAA";
				
				case 8:
					return "_ACRH";
				
				default:
			}
			return "_ACRH";
			break;
		
		case 82:
			switch (uParam0->f_19B)
			{
				case 0:
					return "_AHIT";
				
				case 1:
					return "_AHIT";
				
				case 2:
					return "_AEAA";
				
				case 3:
					return "_ADAA";
				
				case 4:
					return "_AFAA";
				
				case 5:
					return "_AFAA";
				
				case 6:
					return "_AEAA";
				
				case 7:
					return "_AHAA";
				
				case 8:
					return "_AEAA";
				
				default:
			}
			return "_AHIT";
			break;
		
		case 74:
			switch (uParam0->f_19B)
			{
				case 0:
					return "_AROL";
				
				case 1:
					return "_AROL";
				
				case 2:
					return "_AHAA";
				
				case 3:
					return "_AROL";
				
				case 4:
					return "_AGAA";
				
				case 5:
					return "_AROL";
				
				case 6:
					return "_AROL";
				
				case 7:
					return "_AROL";
				
				case 8:
					return "_AROL";
				
				default:
			}
			return "_AROL";
			break;
		
		case 65:
			switch (uParam0->f_19B)
			{
				case 0:
					return "_ABAA";
				
				case 1:
					return "_FUAA";
				
				case 2:
					return "_AFAA";
				
				case 3:
					return "_DBAA";
				
				case 4:
					return "_DLAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					if (uParam0->f_73)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				
				case 7:
					return "_DBAA";
				
				case 8:
					return "_EFAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 66:
			switch (uParam0->f_19B)
			{
				case 0:
					return "_AEAA";
				
				case 1:
					return "_ACAA";
				
				case 2:
					return "_AJAA";
				
				case 3:
					return "_AHAA";
				
				case 4:
					return "_AHAA";
				
				case 5:
					return "_AIAA";
				
				case 6:
					if (uParam0->f_73)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				
				case 7:
					return "_AUAA";
				
				case 8:
					return "_AHAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 2:
			switch (uParam0->f_19B)
			{
				case 0:
					return "_AAAA";
				
				case 1:
					return "_AAAA";
				
				case 2:
					return "_ADAA";
				
				case 3:
					return "_ABAA";
				
				case 4:
					return "_AAAA";
				
				case 5:
					return "_ABAA";
				
				case 6:
					if (uParam0->f_73)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				
				case 7:
					return "_BUAA";
				
				case 8:
					return "_ADAA";
				
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

bool func_366(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x11786
{
	func_300(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_300(uParam0, 17, 0f, 1);
	}
	func_265(uParam0, iParam2, 0);
	return func_189(&(uParam0->f_F4), uParam0->f_90, sParam1, iParam4, 0, 0, 0);
}

void func_367(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)//Position - 0x117C3
{
	if (iParam0 == 0)
	{
		if (func_23(*uParam2, 2))
		{
			if (!bParam5)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_23(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_23(*uParam2, 4))
		{
			if (!func_23(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_21(uParam2, 4096);
			}
		}
		else if (func_23(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_23(*uParam2, 512))
		{
			if (!func_23(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_21(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_23(*uParam2, 16))
		{
			if (!func_23(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_21(uParam2, 4096);
			}
		}
		else if (func_23(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_23(*uParam2, 64))
		{
			if (!func_23(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_21(uParam2, 4096);
			}
		}
		else if (func_23(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_23(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_23(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_23(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_23(*uParam2, 8192))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_23(*uParam2, 16384))
		{
			if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_23(*uParam2, 32768))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_23(*uParam2, 65536))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_23(*uParam2, 131072))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_23(*uParam2, 262144))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_23(*uParam2, 524288))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_23(*uParam2, 1048576))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_23(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_23(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_23(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_23(*uParam2, 67108864))
		{
			if (func_23(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_23(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_23(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_23(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_23(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_368(var uParam0)//Position - 0x11DCD
{
	return uParam0->f_1A0;
}

int func_369(char* sParam0)//Position - 0x11DDA
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (func_214(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_370(var uParam0)//Position - 0x11DFC
{
	if (func_187())
	{
		return 1;
	}
	if (func_173(uParam0, 17))
	{
		return 1;
	}
	if (func_173(uParam0, 14))
	{
		return 1;
	}
	if (func_212(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_371(var uParam0, var uParam1)//Position - 0x11E3B
{
	return ((*uParam1 == 4294967295 && uParam0->f_19C == 0) && !func_173(uParam0, 9));
}

bool func_372(var uParam0)//Position - 0x11E62
{
	return uParam0->f_75;
}

void func_373(var uParam0)//Position - 0x11E6E
{
	int iVar0;
	
	if (uParam0->f_19A >= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		{
			if (Local_165 > 0 && !func_279(Local_165.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_165 - 1))
				{
					if (func_279(Local_165.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_165.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_279(Local_165.f_1[iVar0 /*4*/], 4))
							{
								func_64(&(Local_165.f_1[iVar0 /*4*/]), 4);
								Local_165.f_1[iVar0 /*4*/].f_1 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							func_22(&(Local_165.f_1[iVar0 /*4*/]), 12);
						}
						if (func_279(Local_165.f_1[iVar0 /*4*/], 4) && !func_279(Local_165.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_165.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_165.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_64(&(Local_165.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_333(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

void func_374(var uParam0, var uParam1, bool bParam2)//Position - 0x11F81
{
	if (!func_23(uParam0->f_37, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_7C)) && func_187())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_187())
				{
					StringCopy(&(uParam0->f_7C), func_202(), 24);
					uParam0->f_38 = (uParam0->f_38 + uParam0->f_39);
					if (uParam0->f_38 < 0)
					{
						uParam0->f_38 = 0;
					}
					uParam0->f_39 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

int func_375(var uParam0, var uParam1)//Position - 0x12007
{
	var uVar0;
	
	if (!func_173(uParam0, 27))
	{
		func_208(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_6D && func_410(uParam0, 27) > 5f)
	{
		if (func_402(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_300(uParam0, 27, 0, 0);
			func_300(uParam0, 10, 0, 0);
			func_400(uParam0, &uVar0, uParam1);
		}
		func_397(uParam0);
	}
	if (uParam0->f_19A >= 3 && uParam0->f_19A <= 5)
	{
		func_376(uParam0);
	}
	if ((((!PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()) && (CAM::DOES_CAM_EXIST(*uParam0) && !CAM::IS_CAM_ACTIVE(*uParam0))) && (CAM::DOES_CAM_EXIST(uParam0->f_1) && !CAM::IS_CAM_ACTIVE(uParam0->f_1))) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !func_187())
	{
		if (func_410(uParam0, 26) > 10f)
		{
			func_179(uParam0, 26, 0);
			PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
		}
	}
	else if (func_173(uParam0, 26))
	{
		func_179(uParam0, 26, 0);
	}
	return 0;
}

void func_376(var uParam0)//Position - 0x12131
{
	if (!func_396(uParam0->f_1AD))
	{
		uParam0->f_1AD = func_395();
		func_386(&(uParam0->f_1AD), 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(4, 7), 0, 0, 0);
	}
	else if (func_377(uParam0->f_1AD))
	{
		func_333(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_377(int iParam0)//Position - 0x1217E
{
	return func_378(func_395(), iParam0);
}

int func_378(int iParam0, int iParam1)//Position - 0x12190
{
	int iVar0;
	int iVar1;
	
	if (!func_396(iParam1) || !func_396(iParam0))
	{
		return 1;
	}
	iVar0 = func_384(iParam0);
	iVar1 = func_384(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_383(iParam0);
	iVar1 = func_383(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_382(iParam0);
	iVar1 = func_382(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_381(iParam0);
	iVar1 = func_381(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_380(iParam0);
	iVar1 = func_380(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_379(iParam0);
	iVar1 = func_379(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_379(int iParam0)//Position - 0x1229C
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_380(int iParam0)//Position - 0x122AF
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_381(int iParam0)//Position - 0x122C2
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_382(int iParam0)//Position - 0x122D5
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_383(int iParam0)//Position - 0x122E7
{
	return iParam0 & 15;
}

var func_384(int iParam0)//Position - 0x122F4
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_385(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 31), 4294967295, 1)) + 2011;
}

int func_385(bool bParam0, int iParam1, int iParam2)//Position - 0x12319
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_386(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x12330
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_384(*uParam0);
	iVar1 = func_383(*uParam0);
	iVar2 = func_382(*uParam0);
	iVar3 = func_381(*uParam0);
	iVar4 = func_380(*uParam0);
	iVar5 = func_379(*uParam0);
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
	iVar6 = func_394(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_394(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_387(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_387(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x124B2
{
	func_393(uParam0, iParam1);
	func_392(uParam0, iParam2);
	func_391(uParam0, iParam3);
	func_390(uParam0, iParam5);
	func_389(uParam0, iParam4);
	func_388(uParam0, iParam6);
}

void func_388(var uParam0, int iParam1)//Position - 0x124EA
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

void func_389(var uParam0, int iParam1)//Position - 0x12570
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_383(*uParam0);
	iVar1 = func_384(*uParam0);
	if (iParam1 < 1 || iParam1 > func_394(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_390(var uParam0, int iParam1)//Position - 0x125C1
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_391(var uParam0, int iParam1)//Position - 0x125F4
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_392(var uParam0, int iParam1)//Position - 0x1262E
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_393(var uParam0, int iParam1)//Position - 0x12669
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_394(int iParam0, int iParam1)//Position - 0x126A5
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

int func_395()//Position - 0x12747
{
	var uVar0;
	
	func_393(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_392(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_391(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_389(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_390(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_388(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

int func_396(int iParam0)//Position - 0x1278D
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
	iVar0 = func_379(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_380(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_381(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_384(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_383(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_382(iParam0);
	if (iVar5 < 1 || iVar5 > func_394(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_397(var uParam0)//Position - 0x12869
{
	var uVar0;
	
	if (uParam0->f_19A < 7 && !uParam0->f_8A)
	{
		if (((uParam0->f_19B == 9 && func_399()) && !func_210(uParam0)) || ((uParam0->f_19B != 9 && func_269(uParam0, 1)) && !func_210(uParam0)))
		{
			uVar0 = func_398(uParam0->f_4);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
			uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4, true, 0);
			func_176(uParam0);
			func_166(uParam0, 0);
		}
	}
}

var func_398(var uParam0)//Position - 0x128FF
{
	return uParam0;
}

int func_399()//Position - 0x12909
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 4294967295, 0) == AUDIO::_0x0626A247D2405330())
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iVar0, func_20()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_400(var uParam0, var uParam1, var uParam2)//Position - 0x12960
{
	switch (*uParam1)
	{
		case 1:
			if (func_401(uParam0, 0, 1))
			{
				func_333(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_401(uParam0, 0, 4))
			{
				func_333(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_401(uParam0, 0, 8))
			{
				func_333(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_401(uParam0, 1, 1))
			{
				func_333(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_401(uParam0, 0, 1))
			{
				func_333(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_23(*uParam2, 2) && func_160(uParam0))
			{
				func_333(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_401(var uParam0, int iParam1, int iParam2)//Position - 0x12A3B
{
	if (((uParam0->f_6B >= 2 && uParam0->f_19A < 29) || uParam0->f_19A <= 5) || (iParam1 && !uParam0->f_72))
	{
		return 1;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_231(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_231(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_402(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x12AB8
{
	int iVar0;
	bool bVar1;
	
	iVar0 = AUDIO::_0x0626A247D2405330();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (!func_23(*uParam2, 1))
		{
			if (func_408(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_23(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_23(*uParam2, 4))
		{
			if (func_406(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_23(*uParam2, 8))
		{
			if (func_405(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_23(*uParam2, 128);
		if (bParam4)
		{
			if (func_403(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_23(*uParam2, 16))
		{
			if (func_403(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
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

int func_403(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x12BE2
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_73)
		{
			iLocal_74 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_73 = true;
		}
		iLocal_75 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_76 = (iLocal_74 - iLocal_75);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_73)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, AUDIO::_0x0626A247D2405330(), 1))
			{
				if (IntToFloat(iLocal_76) > 100f)
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
	if (func_404(AUDIO::_0x0626A247D2405330(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_164(iParam0, 1) < 1.5f)
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

int func_404(int iParam0, int iParam1)//Position - 0x12DAA
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

int func_405(int iParam0, int iParam1, var uParam2)//Position - 0x12DFF
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

int func_406(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x12E4D
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
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_407(iVar1))
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

int func_407(int iParam0)//Position - 0x12FC6
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
						if (func_165(AUDIO::_0x0626A247D2405330(), iParam0, 1) < 40f)
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

int func_408(int iParam0, var uParam1)//Position - 0x13094
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (WEAPON::IS_PED_ARMED(AUDIO::_0x0626A247D2405330(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(CAM::_0xDC9DA9E8789F5246(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(CAM::_0xDC9DA9E8789F5246(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, AUDIO::_0x0626A247D2405330(), 90f))
				{
					if (func_164(iParam0, 1) < uParam1->f_2)
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

void func_409(var uParam0)//Position - 0x13119
{
	if (!func_23(uParam0->f_62, 2))
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
		{
			if (func_9(uParam0->f_4, uParam0->f_11, 1) < 180f)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(uParam0->f_11, 25f, 0, 0, 0, 0, false, 0);
				func_63(&(uParam0->f_62), 2);
			}
		}
	}
}

float func_410(var uParam0, int iParam1)//Position - 0x13170
{
	if (!func_15(&(uParam0->f_92[iParam1 /*3*/])))
	{
		func_209(&(uParam0->f_92[iParam1 /*3*/]));
	}
	return func_101(&(uParam0->f_92[iParam1 /*3*/]));
}

void func_411()//Position - 0x131A0
{
	func_412(&Local_231);
	func_429();
}

void func_412(var uParam0)//Position - 0x131B3
{
	func_10(0, uParam0, 1);
	if (uParam0->f_19B != 9)
	{
		func_430(2);
	}
}

int func_413(var uParam0, bool bParam1)//Position - 0x131D2
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_187() && func_410(uParam0, 3) > 1f) || uParam0->f_19F == 18) || uParam0->f_19F == 14) || uParam0->f_19F == 15)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0))
		{
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_4, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_62(uParam0) == 0 || func_279(uParam0->f_55, 32))
					{
						if (!VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
						{
							func_148(uParam0, 4160, 0);
						}
						else
						{
							func_148(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_148(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_148(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_148(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
	{
	}
	return 0;
}

void func_414(var uParam0)//Position - 0x132D1
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_8));
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_9));
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_A))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_A));
	}
}

int func_415(var uParam0)//Position - 0x13312
{
	if (uParam0->f_6D && uParam0->f_19A < 29)
	{
		return 1;
	}
	return 0;
}

void func_416()//Position - 0x13333
{
	func_418(&Local_231, 1);
	Local_231.f_19A = 0;
	func_417(&Local_231, 2, 4);
	Local_231.f_17 = { 31.3927f, 229.9863f, 108.45f };
	Local_231.f_21 = 340.5f;
	Local_231.f_1A = { -1239.992f, -902.0005f, 10.8342f };
	Local_231.f_22 = 305.2155f;
	Local_231.f_1D = { -1224.093f, -907.3411f, 11.3263f };
}

void func_417(var uParam0, int iParam1, int iParam2)//Position - 0x133A9
{
	uParam0->f_3A = iParam1;
	uParam0->f_3B = iParam2;
}

void func_418(var uParam0, int iParam1)//Position - 0x133BD
{
	func_428(1);
	func_178();
	func_6(&(uParam0->f_F4));
	func_427(uParam0);
	uParam0->f_19B = iParam1;
	if (!func_23(Global_19E56.f_4A7D, 4))
	{
		func_63(&(Global_19E56.f_4A7D), 4);
	}
	func_422(uParam0);
	func_420(uParam0);
	PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 32, false);
	uParam0->f_66 = (func_419(uParam0->f_19B) % uParam0->f_65);
	uParam0->f_50 = 0;
	uParam0->f_1AC = func_2();
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI", 2);
}

int func_419(int iParam0)//Position - 0x1343F
{
	return Global_19E56.f_4A7D.f_27[iParam0];
}

void func_420(var uParam0)//Position - 0x13454
{
	switch (func_62(uParam0))
	{
		case 0:
			func_421(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_65 = 2;
			break;
		
		case 1:
			func_421(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_65 = 1;
			break;
		
		case 2:
			func_421(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_65 = 1;
			break;
		
		case 3:
			func_421(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_65 = 2;
			break;
		
		case 4:
			func_421(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_65 = 2;
			break;
		
		case 5:
			func_421(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_65 = 1;
			break;
		
		case 6:
			func_421(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_65 = 1;
			break;
		
		case 7:
			func_421(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_65 = 2;
			break;
		
		case 8:
			func_421(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_65 = 1;
			break;
		
		case 9:
			func_421(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_65 = 1;
			break;
	}
}

void func_421(var uParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x135A7
{
	uParam0->f_7A = sParam1;
	uParam0->f_8F = sParam2;
	uParam0->f_90 = sParam3;
}

void func_422(var uParam0)//Position - 0x135C1
{
	int iVar0;
	
	switch (uParam0->f_19B)
	{
		case 0:
			func_426(uParam0, 3);
			func_425(uParam0, 14);
			break;
		
		case 1:
			func_426(uParam0, 14);
			func_425(uParam0, 8);
			break;
		
		case 2:
			func_426(uParam0, 8);
			func_425(uParam0, 7);
			break;
		
		case 3:
			func_426(uParam0, 15);
			func_425(uParam0, 6);
			break;
		
		case 4:
			func_426(uParam0, 0);
			func_425(uParam0, 3);
			break;
		
		case 5:
			func_426(uParam0, 6);
			func_425(uParam0, 7);
			break;
		
		case 6:
			func_426(uParam0, 8);
			func_425(uParam0, 15);
			break;
		
		case 7:
			func_426(uParam0, 8);
			func_425(uParam0, 14);
			break;
		
		case 8:
			func_426(uParam0, 7);
			func_425(uParam0, 15);
			break;
		
		case 9:
			func_426(uParam0, MISC::GET_RANDOM_INT_IN_RANGE(0, 17));
			iVar0 = func_424((uParam0->f_1A2.f_2 + MISC::GET_RANDOM_INT_IN_RANGE(1, 17)), 0, 16);
			func_425(uParam0, iVar0);
			func_423(uParam0);
			uParam0->f_1A2.f_7 = 1;
			uParam0->f_1A2.f_8 = 1;
			break;
	}
}

void func_423(var uParam0)//Position - 0x136F8
{
	switch (uParam0->f_1A2.f_2)
	{
		case 2:
		case 8:
			uParam0->f_1A2.f_3 = 1;
			break;
		
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_1A2.f_3 = 2;
			break;
		
		case 4:
		case 10:
			uParam0->f_1A2.f_3 = 3;
			break;
		
		case 1:
		case 6:
		case 13:
			uParam0->f_1A2.f_3 = 4;
			break;
		
		case 11:
			uParam0->f_1A2.f_3 = 5;
			break;
		
		case 12:
		case 14:
			uParam0->f_1A2.f_3 = 6;
			break;
		
		case 7:
			uParam0->f_1A2.f_3 = 7;
			break;
	}
}

int func_424(int iParam0, int iParam1, int iParam2)//Position - 0x137B9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 > iParam2)
	{
		return 4294967295;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_425(var uParam0, int iParam1)//Position - 0x1385B
{
	uParam0->f_1A2.f_1 = iParam1;
}

void func_426(var uParam0, int iParam1)//Position - 0x1386C
{
	uParam0->f_1A2.f_2 = iParam1;
}

void func_427(var uParam0)//Position - 0x1387D
{
	uParam0->f_2 = AUDIO::_0x0626A247D2405330();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_E = { func_42() };
	uParam0->f_11 = { func_42() };
	uParam0->f_23 = 0f;
	uParam0->f_4C = 0;
	uParam0->f_31 = 0;
	uParam0->f_6D = 0;
	uParam0->f_24 = 0f;
	uParam0->f_19A = 2;
	uParam0->f_7B = "TRS_FINDING_LOCATION";
	func_179(uParam0, 32, 0);
}

void func_428(bool bParam0)//Position - 0x138DB
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

void func_429()//Position - 0x13907
{
	if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_282))
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_282);
	}
	if (iLocal_261 != 0)
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_261, 0);
		iLocal_261 = 0;
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_430(int iParam0)//Position - 0x1393B
{
	Global_1994C.f_16 = iParam0;
}

