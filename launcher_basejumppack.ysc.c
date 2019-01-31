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
	vector3 vLocal_45 = { 0f, 0f, 0f };
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	vector3 vLocal_55 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	float fLocal_57 = 0f;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	char* sLocal_65 = NULL;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	float fLocal_74 = 0f;
	vector3 vLocal_75 = { 0f, 0f, 0f };
	vector3 vLocal_76 = { 0f, 0f, 0f };
	float fLocal_77 = 0f;
	var uLocal_78 = 1;
	var uLocal_79 = 0;
	var uLocal_80 = 1;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	var uLocal_84 = 0;
	var uLocal_85 = 16;
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
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	int iLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	bool bLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	struct<2> Local_261 = { 0, 5 } ;
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
	var uLocal_277 = 5;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
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
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_60 = 4294967295;
	iLocal_61 = 2050;
	iLocal_62 = 4294967295;
	iLocal_63 = 4294967295;
	sLocal_65 = "CC_SUBSTR";
	fLocal_66 = 125f;
	iLocal_67 = 1;
	iLocal_69 = 263;
	fLocal_77 = 4f;
	vLocal_56 = { ScriptParam_261.f_1[0 /*3*/] };
	vLocal_56 = { vLocal_56 };
	uLocal_54 = uLocal_54;
	Local_52 = { Local_52 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(114))
	{
		func_139(1);
	}
	iLocal_53 = PLAYER::GET_PLAYER_PED(CAM::_0xDC9DA9E8789F5246());
	iLocal_59 = 0;
	func_137(&Global_19911, 0);
	func_131();
	unk_0x80BDE252D8D954BC(1);
	if (func_130(uLocal_58, 1))
	{
		iLocal_64 = 10;
	}
	else
	{
		iLocal_64 = 9;
	}
	while (!Global_7C8F)
	{
		SYSTEM::WAIT(0);
	}
	if (!func_130(uLocal_58, 8))
	{
		if (!func_128(iLocal_64))
		{
			if (func_127(0, iLocal_63))
			{
				func_139(0);
			}
			else
			{
				func_139(1);
			}
		}
	}
	if (iLocal_63 != 4294967295)
	{
		if (!func_127(0, iLocal_63))
		{
			func_139(1);
		}
	}
	if (func_130(uLocal_58, 8388608))
	{
		func_139(1);
	}
	if (func_130(uLocal_58, 524288) && (func_126() && !func_125()))
	{
		func_139(1);
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_130(uLocal_58, 4194304))
	{
		if (iLocal_69 != 263)
		{
			func_124(iLocal_69, 1, 0);
			iLocal_69 = 263;
		}
		func_123(10);
	}
	while (true)
	{
		if (Global_3)
		{
			func_139(1);
		}
		iLocal_53 = PLAYER::GET_PLAYER_PED(CAM::_0xDC9DA9E8789F5246());
		if (func_130(uLocal_58, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_53, 0))
			{
				func_139(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53) && !ENTITY::IS_ENTITY_DEAD(iLocal_53, 0))
		{
			vLocal_55 = { unk_0x8000C77B5F336760(iLocal_53, true) };
			fLocal_57 = SYSTEM::VDIST2(vLocal_55, ScriptParam_261.f_1[0 /*3*/]);
			fLocal_57 = fLocal_57;
			vLocal_75 = { vLocal_55 };
			vLocal_76 = { ScriptParam_261.f_1[0 /*3*/] };
			vLocal_75.z = 0f;
			vLocal_76.z = 0f;
			fLocal_74 = SYSTEM::VDIST2(vLocal_75, vLocal_76);
			switch (iLocal_59)
			{
				case 0:
					if (func_128(iLocal_64) || (func_130(uLocal_58, 16) && !func_130(uLocal_58, 524288)))
					{
						iLocal_62 = 4294967295;
						func_119();
						func_123(1);
					}
					else
					{
						if (fLocal_74 > (fLocal_66 * fLocal_66))
						{
							if (iLocal_69 != 263)
							{
								func_124(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
							func_123(10);
						}
						if ((vLocal_55.z - ScriptParam_261.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_117())
					{
						iLocal_67 = iLocal_67;
						func_123(3);
					}
					else
					{
						func_119();
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_139(1);
						return;
					}
					if (!func_128(iLocal_64))
					{
						if (!func_130(uLocal_58, 8))
						{
							bVar1 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_16C30.f_3), &Local_52))
							{
								Local_52 = { Local_51 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_139(0);
								break;
							}
						}
					}
					if (!func_130(uLocal_58, 4))
					{
						func_114();
						func_113(&uLocal_58, 4);
					}
					if (fLocal_74 > (fLocal_66 * fLocal_66) && !Global_16C52)
					{
						if (iLocal_69 != 263)
						{
							if (func_112(6) && !func_111(iLocal_69))
							{
							}
							else
							{
								func_124(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
						}
						func_123(10);
					}
					else
					{
						Local_52 = { Local_51 };
						bVar2 = !func_130(uLocal_58, 64);
						func_137(&uLocal_58, 128);
						if (!func_110(3) && !Global_16C52)
						{
							if (func_130(uLocal_58, 2097152))
							{
								if ((!func_130(uLocal_58, 1) || !ENTITY::DOES_ENTITY_EXIST(func_109())) && !Global_16C52)
								{
									func_123(10);
									break;
								}
							}
						}
						if (func_130(uLocal_58, 524288) && (func_126() && !func_125()))
						{
							func_139(1);
						}
						if (func_108())
						{
							func_139(1);
						}
						if ((!func_100(6) || Global_19A9D) || func_99())
						{
							bVar2 = false;
						}
						if (func_130(uLocal_58, 1))
						{
							if (!func_98())
							{
								func_96(&uLocal_58, 128);
								bVar2 = false;
							}
						}
						if (func_95(1))
						{
							bVar2 = false;
						}
						if (Global_11625)
						{
							bVar2 = false;
						}
						if (func_94())
						{
							bVar2 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar2 = false;
						}
						if (func_93() || func_92(8, 4294967295))
						{
							bVar2 = false;
						}
						if (!PLAYER::CAN_PLAYER_START_MISSION(CAM::_0xDC9DA9E8789F5246()))
						{
							bVar2 = false;
						}
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
						{
							bVar2 = false;
						}
						if (func_91(0) || func_90())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_53, ScriptParam_261.f_1[0 /*3*/], fLocal_77, fLocal_77, 2f, false, true, iLocal_67))
							{
								bVar2 = false;
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								PAD::SET_INPUT_EXCLUSIVE(0, 51);
								if (func_89(uLocal_54))
								{
									if (iLocal_60 == 4294967295)
									{
										func_88(&iLocal_60, 4, sLocal_65, 0, 0, 0, 0);
										func_96(&uLocal_58, 2048);
									}
									else if (!func_130(uLocal_58, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_87(&iLocal_60);
										func_137(&uLocal_58, 2048);
									}
									if (func_85(iLocal_60, 1))
									{
										sLocal_65 = sLocal_65;
										func_87(&iLocal_60);
										func_137(&uLocal_58, 2048);
										SCRIPT::REQUEST_SCRIPT(&Local_52);
										PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 56);
										func_123(5);
									}
								}
								else
								{
									sLocal_65 = sLocal_65;
									func_87(&iLocal_60);
									func_137(&uLocal_58, 2048);
									SCRIPT::REQUEST_SCRIPT(&Local_52);
									PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 56);
									func_123(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_60 != 4294967295)
							{
								func_87(&iLocal_60);
								func_137(&uLocal_58, 2048);
								GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
							}
						}
					}
					func_82();
					break;
				
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(0, 51);
					if (SCRIPT::HAS_SCRIPT_LOADED(&Local_52))
					{
						if (iLocal_60 != 4294967295)
						{
							func_87(&iLocal_60);
						}
						iVar3 = 2;
						bVar0 = false;
						if (func_130(uLocal_58, 1))
						{
							if (func_112(6) || func_112(7))
							{
								iVar3 = 1;
								bVar0 = true;
							}
						}
						if (iVar3 != 1)
						{
							iVar3 = func_79(&iLocal_62, 6, iLocal_64, 0, 0);
						}
						if (iVar3 == 1)
						{
							if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
							}
							func_78();
							if (Global_9197)
							{
								func_69(AUDIO::_0x0626A247D2405330());
							}
							PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 56);
							iLocal_50 = func_24();
							func_96(&uLocal_58, 2);
							func_123(6);
							func_20(&iLocal_71);
							if (iLocal_63 != 4294967295)
							{
								func_19(iLocal_63);
								func_16(func_18(iLocal_63), 0, 0);
							}
						}
						else if (iVar3 == 2)
						{
							func_15();
						}
						else if (iVar3 == 0)
						{
							func_123(10);
						}
					}
					else
					{
						func_15();
					}
					break;
				
				case 6:
					if (func_130(Global_19911, 262144))
					{
						func_137(&Global_19911, 262144);
						func_14();
					}
					if (func_130(uLocal_58, 2097152))
					{
						if (!func_110(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
						{
							func_123(10);
						}
					}
					if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_10(&iLocal_71) * 1000f)), iLocal_63, 0);
						func_9(&iLocal_71);
						func_137(&uLocal_58, 256);
						func_8();
						if (bVar0)
						{
							func_137(&uLocal_58, 2);
						}
						else if (func_130(uLocal_58, 2))
						{
							if (func_130(Global_19911, 0))
							{
								func_7(&iLocal_62);
								iLocal_62 = 4294967295;
								func_137(&uLocal_58, 2);
							}
							else
							{
								func_7(&iLocal_62);
								iLocal_62 = 4294967295;
								func_137(&uLocal_58, 2);
							}
						}
						func_123(0);
						if (iLocal_63 != 4294967295)
						{
							if (func_130(Global_19911, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_18(iLocal_63), 0, Global_16C55, 0);
								func_6(func_18(iLocal_63), 0, Global_16C55, 1, 0);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_18(iLocal_63), 0, Global_16C55, 0);
								func_6(func_18(iLocal_63), 0, Global_16C55, 0, 0);
							}
						}
						func_5();
						func_137(&Global_19911, 0);
						if (func_130(uLocal_58, 16777216))
						{
							func_139(1);
						}
						if (iLocal_63 != 4294967295)
						{
							if (Global_19E56.f_2361)
							{
								if (!func_127(0, iLocal_63))
								{
									func_139(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_123(0);
					break;
				
				case 10:
					func_139(1);
					break;
				
				case 9:
					if (fLocal_74 > (fLocal_66 * fLocal_66))
					{
						if (iLocal_69 != 263)
						{
							func_124(iLocal_69, 1, 0);
							iLocal_69 = 263;
						}
						func_123(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_69 != 263)
					{
						func_124(iLocal_69, 0, 0);
					}
					if (iLocal_60 != 4294967295)
					{
						func_87(&iLocal_60);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_65))
					{
						if (func_1(sLocal_65))
						{
							GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
						}
					}
					func_123(4);
					break;
				
				case 4:
					if ((iLocal_68 % 150) == 0)
					{
						if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
						{
							if (iLocal_70 == 2)
							{
								if (iLocal_70 == 2)
								{
									if (func_128(iLocal_64) && func_127(0, iLocal_63))
									{
										func_131();
										if (iLocal_69 != 263)
										{
											func_124(iLocal_69, 1, 0);
										}
										func_123(0);
									}
								}
							}
							else if (iLocal_70 == 0)
							{
								if (fLocal_74 > (fLocal_66 * fLocal_66))
								{
									if (iLocal_69 != 263)
									{
										func_124(iLocal_69, 1, 0);
										iLocal_69 = 263;
									}
									func_123(10);
								}
							}
							else if (iLocal_70 == 1)
							{
								if (fLocal_74 > ((80f + 5f) * (80f + 5f)))
								{
									func_131();
									if (iLocal_69 != 263)
									{
										func_124(iLocal_69, 1, 0);
									}
									func_123(0);
								}
							}
						}
						else
						{
							func_124(iLocal_69, 1, 0);
						}
					}
					else
					{
						iLocal_68++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(char* sParam0)//Position - 0x9EB
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2()//Position - 0x9FE
{
	func_3(&uLocal_78);
	func_3(&uLocal_80);
	STREAMING::REMOVE_ANIM_DICT("pickup_object");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@basejump@ig_15");
}

void func_3(var uParam0)//Position - 0xA20
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()//Position - 0xA50
{
}

void func_5()//Position - 0xA58
{
}

void func_6(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xA60
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_1611D))
	{
		return;
	}
	if (MISC::COMPARE_STRINGS(sParam0, &Global_1611D, 0, 4294967295) != 0)
	{
		return;
	}
	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, iParam3, iParam4, Global_155D0);
	StringCopy(&Global_1611D, "", 64);
}

void func_7(int iParam0)//Position - 0xAA4
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

void func_8()//Position - 0xAE1
{
	vector3 vVar0[24];
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		NETWORK::_NETWORK_SET_RICH_PRESENCE_2(0, &cVar0);
	}
}

void func_9(int iParam0)//Position - 0xB23
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_10(int iParam0)//Position - 0xB39
{
	if (func_13(iParam0))
	{
		if (func_12(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_11(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_11(bool bParam0)//Position - 0xB78
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

bool func_12(var uParam0)//Position - 0xBD0
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 2);
}

bool func_13(var uParam0)//Position - 0xBE0
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 1);
}

int func_14()//Position - 0xBF0
{
	return 1;
}

void func_15()//Position - 0xBF9
{
}

void func_16(char* sParam0, int iParam1, int iParam2)//Position - 0xC01
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1611D))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_1611D, 0, 0, 0, 1, 0);
		StringCopy(&Global_1611D, "", 64);
	}
	StringCopy(&Global_1611D, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_17(0));
}

bool func_17(bool bParam0)//Position - 0xC42
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

char* func_18(int iParam0)//Position - 0xC6D
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_19(int iParam0)//Position - 0xDAB
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

void func_20(int iParam0)//Position - 0xE02
{
	if (!func_13(iParam0))
	{
		func_23(iParam0);
	}
	else
	{
		func_21(iParam0);
	}
}

void func_21(int iParam0)//Position - 0xE23
{
	func_22(iParam0, 0f);
}

void func_22(int iParam0, float fParam1)//Position - 0xE32
{
	iParam0->f_1 = (func_11(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_23(int iParam0)//Position - 0xE60
{
	if (!func_13(iParam0))
	{
		func_21(iParam0);
	}
}

int func_24()//Position - 0xE78
{
	int iVar0;
	
	Global_19E56.f_49FB = iLocal_82;
	switch (iLocal_82)
	{
		case 4:
		case 8:
			func_25(1);
			break;
		
		case 5:
		case 12:
		case 6:
			func_25(0);
			break;
		
		default:
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 177, true);
	}
	iVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&Local_51, &vLocal_83, 170, iLocal_61);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_51);
	return iVar0;
}

void func_25(bool bParam0)//Position - 0xEEF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	bool bVar8;
	
	vVar6 = { func_68(iLocal_82) };
	vVar6 = { func_67(SYSTEM::COS(vVar6.z), SYSTEM::SIN(vVar6.z), MISC::TAN(vVar6.x)) };
	STREAMING::NEW_LOAD_SCENE_START(func_66(iLocal_82), vVar6, 5000f, 0);
	PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 256);
	unk_0x59B038076F830627(false);
	HUD::DISPLAY_RADAR(false);
	func_64(1);
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_unarmed"), true);
		PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 177, true);
		if (ENTITY::GET_ENTITY_SPEED(AUDIO::_0x0626A247D2405330()) > 0.3f)
		{
			BRAIN::TASK_STAND_STILL(AUDIO::_0x0626A247D2405330(), 4294967295);
			while (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0) && ENTITY::GET_ENTITY_SPEED(AUDIO::_0x0626A247D2405330()) > 0.3f)
			{
				SYSTEM::WAIT(0);
				if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
				{
					PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 177, true);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_255))
		{
			vVar4 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) - unk_0x8000C77B5F336760(iLocal_255, false) };
			vVar4.z = 0f;
			fVar7 = SYSTEM::VMAG(vVar4);
			BRAIN::OPEN_SEQUENCE_TASK(&iVar1);
			if (fVar7 > 0.8f)
			{
				vVar4 = { vVar4 * FtoV((0.78f / fVar7)) };
				vVar5 = { unk_0x8000C77B5F336760(iLocal_255, false) + vVar4 };
				if (iLocal_82 == 12)
				{
					BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar5, 1f, 20000, 1048576000, 0, func_63(vVar5, unk_0x8000C77B5F336760(iLocal_255, false)));
				}
				else
				{
					BRAIN::TASK_GO_STRAIGHT_TO_COORD(0, vVar5, 1f, 4294967295, func_63(vVar5, unk_0x8000C77B5F336760(iLocal_255, false)), 1056964608);
				}
			}
			else if (fVar7 > 0.15f)
			{
				BRAIN::TASK_ACHIEVE_HEADING(0, func_63(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), unk_0x8000C77B5F336760(iLocal_255, false)), 0);
			}
			BRAIN::TASK_PLAY_ANIM(0, "pickup_object", "pickup_low", 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
			CUTSCENE::_0x8D9DF6ECA8768583(iVar1);
			if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				NETWORK::_0x5E3AA4CA2B6FB0EE(AUDIO::_0x0626A247D2405330());
				PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 177, true);
				BRAIN::TASK_PERFORM_SEQUENCE(AUDIO::_0x0626A247D2405330(), iVar1);
			}
			BRAIN::CLEAR_SEQUENCE_TASK(&iVar1);
			func_64(1);
		}
	}
	func_23(&iLocal_251);
	while ((func_10(&iLocal_251) < 6f && !ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(AUDIO::_0x0626A247D2405330(), "pickup_object", "pickup_low", 3))
	{
		PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 177, true);
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0) && ENTITY::IS_ENTITY_PLAYING_ANIM(AUDIO::_0x0626A247D2405330(), "pickup_object", "pickup_low", 3))
	{
		ENTITY::SET_ENTITY_ANIM_SPEED(AUDIO::_0x0626A247D2405330(), "pickup_object", "pickup_low", 0.8f);
		bVar8 = true;
	}
	while ((func_10(&iLocal_251) < 6f && !ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0)) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(AUDIO::_0x0626A247D2405330(), "pickup_object", "pickup_low") < 0.22f)
	{
		PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 177, true);
		if (!bVar8 && ENTITY::IS_ENTITY_PLAYING_ANIM(AUDIO::_0x0626A247D2405330(), "pickup_object", "pickup_low", 3))
		{
			ENTITY::SET_ENTITY_ANIM_SPEED(AUDIO::_0x0626A247D2405330(), "pickup_object", "pickup_low", 0.8f);
			bVar8 = true;
		}
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (!bVar8 && ENTITY::IS_ENTITY_PLAYING_ANIM(AUDIO::_0x0626A247D2405330(), "pickup_object", "pickup_low", 3))
		{
			ENTITY::SET_ENTITY_ANIM_SPEED(AUDIO::_0x0626A247D2405330(), "pickup_object", "pickup_low", 0.7f);
			bVar8 = true;
		}
		PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 177, true);
	}
	func_9(&iLocal_251);
	func_40();
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (func_35() == 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(AUDIO::_0x0626A247D2405330(), 9, 5, 0, 0);
		}
		else if (func_35() == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(AUDIO::_0x0626A247D2405330(), 8, 1, 0, 0);
		}
		else if (func_35() == 2)
		{
			PED::SET_PED_COMPONENT_VARIATION(AUDIO::_0x0626A247D2405330(), 8, 3, 0, 0);
		}
	}
	if (bParam0)
	{
		if (!func_33(func_34(iLocal_82)) && !ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			NETWORK::_0x5E3AA4CA2B6FB0EE(AUDIO::_0x0626A247D2405330());
			BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(AUDIO::_0x0626A247D2405330(), func_34(iLocal_82), 1f, 4294967295, 1048576000, 0, 1193033728);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_255))
		{
			OBJECT::DELETE_OBJECT(&iLocal_255);
		}
		iVar2 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, func_32(iLocal_82), func_31(iLocal_82), func_30(iLocal_82), 1, 2);
		iVar3 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, func_29(iLocal_82), func_28(iLocal_82), func_27(iLocal_82), 0, 2);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
		CAM::_0xF4C8CF9E353AFECA("HAND_SHAKE", 0.2f);
		func_23(&iVar0);
		while (func_10(&iVar0) < 1.5f)
		{
			SYSTEM::WAIT(0);
		}
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iVar3, iVar2, func_26(iLocal_82), 1, 1);
		func_21(&iVar0);
		while (func_10(&iVar0) < ((SYSTEM::TO_FLOAT(func_26(iLocal_82)) / 1000f) + 0.3f))
		{
			if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 177, true);
			}
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		vLocal_83.z = iLocal_255;
	}
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 177, true);
	}
}

int func_26(int iParam0)//Position - 0x13DB
{
	switch (iParam0)
	{
		case 4:
		case 8:
			return 3500;
			break;
	}
	return 0;
}

float func_27(int iParam0)//Position - 0x1400
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_28(int iParam0)//Position - 0x1430
{
	switch (iParam0)
	{
		case 4:
			return 58.4197f, 0f, -47.9402f;
		
		case 8:
			return 47.6798f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_29(int iParam0)//Position - 0x146A
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

float func_30(int iParam0)//Position - 0x14AC
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_31(int iParam0)//Position - 0x14DC
{
	switch (iParam0)
	{
		case 4:
			return -4.0151f, 0f, -47.5544f;
		
		case 8:
			return 2.5127f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_32(int iParam0)//Position - 0x1516
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_33(vector3 vParam0)//Position - 0x1558
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_34(int iParam0)//Position - 0x1582
{
	switch (iParam0)
	{
		case 4:
			return -83.4741f, -835.4191f, 39.5575f;
		
		case 8:
			return -772.8513f, 312.9656f, 84.6996f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_35()//Position - 0x15C4
{
	func_36();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_36()//Position - 0x15DD
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_39(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_38(AUDIO::_0x0626A247D2405330());
			if (func_37(iVar0) && (!func_112(14) || Global_19A3D))
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

bool func_37(int iParam0)//Position - 0x16DA
{
	return iParam0 < 3;
}

int func_38(int iParam0)//Position - 0x16E6
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

int func_39(int iParam0)//Position - 0x1723
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

void func_40()//Position - 0x174D
{
	vector3 vVar0;
	var uVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	
	if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		return;
	}
	PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_255))
	{
		OBJECT::DELETE_OBJECT(&iLocal_255);
	}
	func_48(0, 0, 1);
	iLocal_255 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("p_parachute_s"), func_47(iLocal_82), true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_255, func_46(iLocal_82), 2, 1);
	func_41(&vVar0, &uVar1);
	vVar2 = { 0f, 0f, uVar1 };
	iVar3 = PED::CREATE_SYNCHRONIZED_SCENE(vVar0, vVar2, 2);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_255, iVar3, "puton_parachute_bag", "oddjobs@basejump@ig_15", 1000f, -1000f, 1, 1148846080);
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		NETWORK::_0x5E3AA4CA2B6FB0EE(AUDIO::_0x0626A247D2405330());
		BRAIN::TASK_SYNCHRONIZED_SCENE(AUDIO::_0x0626A247D2405330(), iVar3, "oddjobs@basejump@ig_15", "puton_parachute", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	unk_0x1190AB7024CBD8CB(4294967295, "Grab_Parachute", "BASEJUMPS_SOUNDS", true);
	iVar4 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
	CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iVar4, iVar3, "puton_parachute_cam", "oddjobs@basejump@ig_15");
	CAM::SET_CAM_ACTIVE(iVar4, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
	while (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar3) < 0.6f)
	{
		SYSTEM::WAIT(0);
	}
	PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
}

void func_41(var uParam0, var uParam1)//Position - 0x187B
{
	*uParam0 = { func_45(iLocal_82) };
	switch (iLocal_82)
	{
		case 5:
			*uParam1 = -1.8f;
			break;
		
		case 4:
			*uParam1 = func_44(func_63(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_43(*uParam1, 111.6f);
			}
			else
			{
				*uParam1 = func_42(*uParam1, -104.04f);
			}
			break;
		
		case 8:
			*uParam1 = func_44(func_63(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_43(*uParam1, 79.28f);
			}
			else
			{
				*uParam1 = func_42(*uParam1, -8f);
			}
			break;
		
		case 6:
			*uParam1 = func_44(func_63(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), *uParam0), -180f, 180f);
			break;
		
		case 12:
			*uParam1 = func_44(func_63(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), *uParam0), -180f, 180f);
			break;
	}
}

float func_42(float fParam0, float fParam1)//Position - 0x19A3
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_43(float fParam0, float fParam1)//Position - 0x19BA
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_44(float fParam0, float fParam1, float fParam2)//Position - 0x19D1
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

Vector3 func_45(int iParam0)//Position - 0x1A13
{
	switch (iParam0)
	{
		case 0:
			return -829.3729f, -1289.817f, 4.0005f;
		
		case 1:
			return 1208.2f, 174.3914f, 80.1245f;
		
		case 2:
			return 2463.793f, 1509.956f, 35.0349f;
		
		case 3:
			return -274.6549f, 6633.898f, 7.1166f;
		
		case 4:
			return -92.35f, -854.3f, 39.571f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 7:
			return -742.5269f, 4493.315f, 75.1444f;
		
		case 8:
			return -801.3582f, 298.8532f, 84.949f;
		
		case 9:
			return -1367.595f, 4381.943f, 41.132f;
		
		case 10:
			return 2517.931f, 4971.752f, 44.7082f;
		
		case 11:
			return 1054.534f, -179.6562f, 70.3066f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_46(int iParam0)//Position - 0x1B5D
{
	switch (iParam0)
	{
		case 4:
			return 12f, 0f, 12.77f;
		
		case 5:
			return 10f, 0f, -134.58f;
		
		case 6:
			return 76f, 0f, -89.95f;
		
		case 8:
			return 12f, 0f, 89.56f;
		
		case 12:
			return 0f, 75f, -22f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_47(int iParam0)//Position - 0x1BD3
{
	switch (iParam0)
	{
		case 4:
			return -92.25f, -854.28f, 39.85f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 8:
			return -801.57f, 298.85f, 85.25f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_48(int iParam0, int iParam1, int iParam2)//Position - 0x1C5D
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0);
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		FIRE::STOP_FIRE_IN_RANGE(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(iParam1);
	func_60(0);
	func_50(1, 1, iParam2, 0, 0);
	HUD::DISPLAY_RADAR(false);
	unk_0x59B038076F830627(false);
	func_49(23, 1);
}

void func_49(int iParam0, bool bParam1)//Position - 0x1CB4
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

void func_50(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x1CD6
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(CAM::_0xDC9DA9E8789F5246());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(CAM::_0xDC9DA9E8789F5246(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 1);
		func_59(1);
		HUD::_0xA8FDB297A8D25FBA();
		HUD::_0xFDB423997FA30340();
		if (Global_38B1.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_58())
			{
				Global_38B1.f_1 = 3;
			}
			Global_3DCE = 5;
		}
		func_57(1, iParam3, uParam2, 0);
		Global_DB7B = 1;
		Global_10B91 = 1;
		Global_11623 = 1;
	}
	else
	{
		func_59(0);
		HUD::_0xE1CD1E48E025E661();
		Global_DB7B = 0;
		if (bParam1)
		{
			CAM::_SET_CAM_EFFECT();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(CAM::_0xDC9DA9E8789F5246(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 0);
		func_57(0, iParam3, uParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && !func_55(CAM::_0xDC9DA9E8789F5246())) && !func_52(CAM::_0xDC9DA9E8789F5246(), 0)) && !func_51()) && !bParam4)
			{
				ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), false);
			}
		}
		else if ((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && !func_55(CAM::_0xDC9DA9E8789F5246())) && !bParam4)
		{
			ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), false);
		}
		Global_11623 = 0;
	}
}

bool func_51()//Position - 0x1DFF
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 14);
}

bool func_52(int iParam0, int iParam1)//Position - 0x1E1C
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_53(4294967295, 0) == 8;
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

int func_53(int iParam0, bool bParam1)//Position - 0x1E67
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_54();
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

int func_54()//Position - 0x1EA8
{
	return Global_1407E0;
}

int func_55(int iParam0)//Position - 0x1EB4
{
	if (func_52(iParam0, 0))
	{
		return 1;
	}
	if (func_56())
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

bool func_56()//Position - 0x1EF6
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

int func_57(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x1F07
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

int func_58()//Position - 0x1F3A
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_59(int iParam0)//Position - 0x1F61
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

void func_60(int iParam0)//Position - 0x1F84
{
	if (func_62())
	{
		return;
	}
	if (Global_3959)
	{
		func_61(0, 0);
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
	if (!func_58())
	{
		Global_38B1.f_1 = 3;
	}
}

void func_61(bool bParam0, bool bParam1)//Position - 0x1FFE
{
	if (bParam0)
	{
		if (func_91(0))
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

bool func_62()//Position - 0x2072
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

float func_63(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x2084
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_64(bool bParam0)//Position - 0x209E
{
	if (bParam0)
	{
		func_65();
		if (Global_38B1.f_1 == 10 || Global_38B1.f_1 == 9)
		{
			MISC::SET_BIT(&Global_950, 16);
		}
		Global_38B1.f_1 = 1;
		if (func_91(0))
		{
			func_60(0);
		}
	}
	else if (Global_38B1.f_1 == 1)
	{
		if (!Global_38B1.f_1 == 0)
		{
			Global_38B1.f_1 = 3;
		}
	}
}

void func_65()//Position - 0x2101
{
	if (Global_38B1.f_1 == 9 || Global_38B1.f_1 == 10)
	{
		Global_3E03 = 0;
		Global_3DFF = 1;
	}
}

Vector3 func_66(int iParam0)//Position - 0x212A
{
	switch (iParam0)
	{
		case 0:
			return -1143.586f, -1859.747f, 208.3878f;
		
		case 1:
			return 877.5864f, -436.3322f, 536.9036f;
		
		case 2:
			return 2041.231f, 1978.98f, 585.9358f;
		
		case 3:
			return 405.2326f, 5705.887f, 697.2318f;
		
		case 4:
			return -103.8901f, -870.8046f, 298.7574f;
		
		case 5:
			return -118.2569f, -975.1133f, 297.3781f;
		
		case 6:
			return -1237.465f, 4526.661f, 181.7929f;
		
		case 7:
			return -357.7932f, 4107.914f, 314.8059f;
		
		case 8:
			return -809.6324f, 331.3331f, 233.2818f;
		
		case 9:
			return -1286.926f, 3660.203f, 1076.051f;
		
		case 10:
			return 1022.178f, 3975.738f, 1362.533f;
		
		case 11:
			return 1608.553f, -434.5186f, 1321.916f;
		
		case 12:
			return -756.3533f, 4341.521f, 143.8134f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_67(vector3 vParam0)//Position - 0x2274
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

Vector3 func_68(int iParam0)//Position - 0x22B3
{
	switch (iParam0)
	{
		case 0:
			return -21.7965f, -0.0328f, 70.0438f;
		
		case 1:
			return -26.5541f, 0.0092f, -86.4416f;
		
		case 2:
			return -11.2825f, 0.0213f, 148.5283f;
		
		case 3:
			return -39.935f, 0f, 12.8174f;
		
		case 4:
			return 0.9749f, 0f, -5.2236f;
		
		case 5:
			return -12.889f, 0f, 1.6227f;
		
		case 6:
			return -48.5605f, 0f, 160.4909f;
		
		case 7:
			return -37.0509f, 0.0324f, 24.0288f;
		
		case 8:
			return -17.4118f, 0f, 117.7175f;
		
		case 9:
			return -15.4633f, 0.0328f, -5.1142f;
		
		case 10:
			return -20.9567f, 0f, 170.5743f;
		
		case 11:
			return 1.9344f, 0f, -55.2084f;
		
		case 12:
			return -46.0342f, 0f, 37.5935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_69(int iParam0)//Position - 0x23DD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_77(iParam0);
	if (!iVar0 == 4294967295)
	{
		iVar1 = Global_90C2[iVar0 /*5*/];
		func_72(1, iVar1, 1);
		return;
	}
	iVar2 = func_71(iParam0);
	if (iVar2 == 4294967295)
	{
		return;
	}
	func_70(iVar2);
}

void func_70(int iParam0)//Position - 0x2436
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_90A8[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_90A8[iParam0 /*5*/].f_1 == AUDIO::_0x0626A247D2405330())
		{
			Global_9195 = 0;
		}
	}
	Global_90A8[iParam0 /*5*/] = 13;
	Global_90A8[iParam0 /*5*/].f_1 = 0;
	Global_90A8[iParam0 /*5*/].f_2 = 0;
	Global_90A8[iParam0 /*5*/].f_3 = 0;
	Global_90A8[iParam0 /*5*/].f_4 = 0;
	Global_90A7 = (Global_90A7 - 1);
	if (Global_90A7 < 0)
	{
		Global_90A7 = 0;
	}
}

int func_71(int iParam0)//Position - 0x24B9
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_90A8[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_72(int iParam0, int iParam1, int iParam2)//Position - 0x24EA
{
	func_73(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_73(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x24FF
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (iParam1 == 4294967295)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_75(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_74();
	if (iVar0 == 4294967295)
	{
		return;
	}
	Global_9113[iVar0 /*6*/] = iParam0;
	Global_9113[iVar0 /*6*/].f_1 = iParam1;
	Global_9113[iVar0 /*6*/].f_2 = iParam2;
	Global_9113[iVar0 /*6*/].f_3 = iParam3;
	Global_9113[iVar0 /*6*/].f_4 = iParam4;
	Global_9113[iVar0 /*6*/].f_5 = iParam5;
}

int func_74()//Position - 0x2581
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_9113[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_75(int iParam0, int iParam1, int iParam2)//Position - 0x25B2
{
	if (func_76(iParam0, iParam1, iParam2) == 4294967295)
	{
		return 0;
	}
	return 1;
}

int func_76(int iParam0, int iParam1, int iParam2)//Position - 0x25CD
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_9113[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_9113[iVar0 /*6*/])
			{
				if (iParam1 == Global_9113[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_77(int iParam0)//Position - 0x2619
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_90C2[iVar0 /*5*/] == 4294967295)
		{
			if (iParam0 == Global_90C2[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

void func_78()//Position - 0x2662
{
	if (Global_C74[0 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C74[0 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_C74[1 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C74[1 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_C74[2 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C74[2 /*2811*/][0 /*281*/].f_103 = 0;
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 25);
	MISC::SET_BIT(&Global_950, 11);
}

int func_79(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x26DF
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
		if (func_81(0))
		{
			return 0;
		}
		Global_8CF1++;
		*iParam0 = Global_8CF1;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_434C.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_8D15 = iParam2;
		Global_8CEF = *iParam0;
		Global_8CF0 = iParam4;
		Global_8CEE = 0;
		return 1;
	}
	if (*iParam0 != 4294967295)
	{
		if (Global_8CEE > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_8CEE)
			{
				if (Global_8CF4[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_8CEF == *iParam0)
		{
			return 1;
		}
		*iParam0 = 4294967295;
	}
	if (*iParam0 == 4294967295)
	{
		if (!func_128(iParam2))
		{
			return 0;
		}
		if (Global_8CEE == 8)
		{
			return 0;
		}
		Global_8CF1++;
		*iParam0 = Global_8CF1;
		Global_8CF4[Global_8CEE /*4*/] = Global_8CF1;
		Global_8CF4[Global_8CEE /*4*/].f_1 = iParam1;
		Global_8CF4[Global_8CEE /*4*/].f_2 = iParam2;
		Global_8CF4[Global_8CEE /*4*/].f_3 = 0;
		Global_8CEE++;
		if (iParam4 != 0)
		{
			func_80(iParam0, iParam4);
		}
	}
	return 2;
}

void func_80(var uParam0, int iParam1)//Position - 0x2816
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

int func_81(int iParam0)//Position - 0x2865
{
	if (Global_8D15 == 15)
	{
		return 0;
	}
	if (func_128(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_82()//Position - 0x2887
{
	switch (iLocal_82)
	{
		case 4:
		case 5:
		case 6:
		case 8:
		case 12:
			func_83();
			break;
		
		default:
			break;
	}
}

void func_83()//Position - 0x28BE
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		vLocal_83.y = iVar0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_255))
	{
		vVar1 = { unk_0x8000C77B5F336760(iLocal_255, true) };
		if (SYSTEM::VDIST2(vVar1, vLocal_56) > 25f)
		{
			func_84(0);
		}
	}
}

void func_84(int iParam0)//Position - 0x290B
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_70 = iParam0;
	iLocal_68 = 0;
	iLocal_59 = 7;
}

int func_85(int iParam0, bool bParam1)//Position - 0x292C
{
	int iVar0;
	
	iVar0 = func_86(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_91(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > 4294967295 && iVar0 < 6)
	{
		if (Global_8FDB[iVar0 /*32*/] == 1 && Global_8FDB[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_8FDB[iVar0 /*32*/].f_1D)
				{
					return 0;
				}
			}
			Global_8FDB[iVar0 /*32*/].f_5 = 1;
			Global_8FDB[iVar0 /*32*/].f_1D = 1;
			return 1;
		}
		else
		{
			if (Global_8FDB[iVar0 /*32*/] == 0)
			{
			}
			if (Global_8FDB[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_86(int iParam0)//Position - 0x29E4
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_8FDB[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_87(int iParam0)//Position - 0x2A1F
{
	int iVar0;
	
	if (*iParam0 == 4294967295)
	{
		return;
	}
	iVar0 = func_86(*iParam0);
	if (iVar0 == 4294967295)
	{
		*iParam0 = 4294967295;
		return;
	}
	if (iVar0 > 4294967295 && iVar0 < 6)
	{
		if (Global_8FDB[iVar0 /*32*/])
		{
			Global_8FDB[iVar0 /*32*/].f_7 = 1;
			*iParam0 = 4294967295;
			return;
		}
	}
	*iParam0 = 4294967295;
}

void func_88(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x2A76
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == 4294967295)
		{
			func_87(iParam0);
		}
		return;
	}
	if (!*iParam0 == 4294967295)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_8FDB[iVar0 /*32*/])
		{
			Global_8FDB[iVar0 /*32*/] = 1;
			Global_8FDB[iVar0 /*32*/].f_1 = Global_90A4;
			Global_90A4++;
			Global_8FDB[iVar0 /*32*/].f_4 = 0;
			Global_8FDB[iVar0 /*32*/].f_1D = 0;
			Global_8FDB[iVar0 /*32*/].f_5 = 0;
			Global_8FDB[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_8FDB[iVar0 /*32*/].f_8), sParam2, 16);
			Global_8FDB[iVar0 /*32*/].f_6 = iParam3;
			Global_8FDB[iVar0 /*32*/].f_1F = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_8FDB[iVar0 /*32*/].f_7 = 0;
			Global_8FDB[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_8FDB[iVar0 /*32*/].f_C = 1;
				StringCopy(&(Global_8FDB[iVar0 /*32*/].f_D), sParam4, 64);
				Global_8FDB[iVar0 /*32*/].f_1E = iParam6;
			}
			else
			{
				Global_8FDB[iVar0 /*32*/].f_C = 0;
				Global_8FDB[iVar0 /*32*/].f_1E = 0;
			}
			*iParam0 = Global_8FDB[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_89(var uParam0)//Position - 0x2BA1
{
	return 1;
}

var func_90()//Position - 0x2BAA
{
	return Global_10B8E;
}

int func_91(int iParam0)//Position - 0x2BB6
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

bool func_92(int iParam0, int iParam1)//Position - 0x2C10
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

bool func_93()//Position - 0x2C4B
{
	return MISC::GET_GAME_TIMER() <= Global_43D7.f_16F1 + 100;
}

int func_94()//Position - 0x2C60
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_95(bool bParam0)//Position - 0x2C7A
{
	if (bParam0)
	{
		return (Global_434C.f_4 && Global_434C.f_68 == 4);
	}
	return Global_434C.f_4;
}

void func_96(var uParam0, int iParam1)//Position - 0x2CA3
{
	func_97(uParam0, iParam1);
}

void func_97(var uParam0, var uParam1)//Position - 0x2CB3
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_98()//Position - 0x2CC4
{
	return 1;
}

bool func_99()//Position - 0x2CCD
{
	int iVar0;
	bool bVar1;
	
	if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		return ((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 69)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 70))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 68))) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(CAM::_0xDC9DA9E8789F5246()));
	}
	return (((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 24)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 25))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 47))) || PED::_0xDCCA191DF9980FD7(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(CAM::_0xDC9DA9E8789F5246()));
}

int func_100(int iParam0)//Position - 0x2DD7
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				iVar0 = func_35();
				if (!func_37(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_107()) || Global_19A9D) || Global_6375) || func_106()) || func_92(8, 4294967295)) || func_105()) || func_104()) || func_103()) || func_94()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1) || func_107()) || Global_6375) || func_106()) || func_92(8, 4294967295)) || func_103()) || func_105()) || func_104()) || func_94()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_107()) || Global_19A9D) || Global_6375) || func_106()) || func_92(8, 4294967295)) || func_103()) || func_105()) || func_104()) || func_94()) || Global_19E56.f_1DEC.f_397[iVar0] == 5) || Global_8F38 != 4294967295)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_107()) || Global_19A9D) || Global_6375) || func_106()) || func_92(8, 4294967295)) || func_105()) || func_104()) || func_94()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_107() || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || func_92(8, 4294967295)) || func_94()) || func_102()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_92(8, 4294967295) || func_105()) || func_104()) || func_102()) || func_101())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || func_107()) || Global_6375) || func_106()) || func_92(8, 4294967295)) || func_104()) || func_103()) || func_94()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || func_107()) || func_104()) || Global_19A9D) || Global_6375) || func_106()) || Global_9197) || func_92(8, 4294967295)) || func_103()) || func_102()) || func_94()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0)) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1)) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_SWIMMING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || func_107()) || Global_19A9D) || Global_6375) || func_106()) || func_92(8, 4294967295)) || func_103()) || func_102()) || func_105()) || func_104()) || func_94())
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

var func_101()//Position - 0x34F4
{
	return Global_16C57.f_1;
}

int func_102()//Position - 0x3502
{
	if (Global_16089 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14893[Global_16089 /*34*/].f_F, 13);
	}
	return 0;
}

int func_103()//Position - 0x3528
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

bool func_104()//Position - 0x3552
{
	return Global_16C64.f_148 > 0;
}

bool func_105()//Position - 0x3563
{
	return Global_16C64.f_147 > 0;
}

var func_106()//Position - 0x3574
{
	return Global_140859;
}

int func_107()//Position - 0x3580
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_162B5.f_2C == 1;
	}
	return 0;
}

int func_108()//Position - 0x359C
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_109()//Position - 0x35B6
{
	return Global_15C47;
}

int func_110(int iParam0)//Position - 0x35C2
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_112(6) || func_112(7))
			{
				return 1;
			}
			else
			{
				return func_110(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_128(5))
			{
				if (func_100(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_111(int iParam0)//Position - 0x3634
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return HUD::DOES_BLIP_EXIST(Global_64EA[iVar0 /*23*/].f_13);
}

bool func_112(int iParam0)//Position - 0x3670
{
	return Global_8D15 == iParam0;
}

void func_113(var uParam0, int iParam1)//Position - 0x367E
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_114()//Position - 0x368F
{
	vector3 vVar0;
	
	if (bLocal_254)
	{
		switch (iLocal_82)
		{
			case 4:
			case 5:
			case 8:
				iLocal_255 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("p_parachute_s"), func_47(iLocal_82), true, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_255, func_46(iLocal_82), 2, 1);
				unk_0x346478B12F69D4E3(iLocal_255, true);
				break;
			
			case 6:
			case 12:
				iLocal_255 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("p_parachute_s"), func_47(iLocal_82), true, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_255, func_46(iLocal_82), 2, 1);
				OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(iLocal_255);
				vVar0 = { func_116(iLocal_82) };
				if (!func_33(vVar0))
				{
					iLocal_256 = VEHICLE::CREATE_VEHICLE(joaat("BATI"), vVar0, func_115(iLocal_82), true, true, false);
					iLocal_256 = iLocal_256;
				}
				break;
			
			default:
				break;
			}
	}
}

float func_115(int iParam0)//Position - 0x3758
{
	switch (iParam0)
	{
		case 6:
			return 165.0425f;
		
		default:
	}
	return 0f;
}

Vector3 func_116(int iParam0)//Position - 0x3776
{
	switch (iParam0)
	{
		case 6:
			return -1243.606f, 4543.016f, 185.9527f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_117()//Position - 0x37A0
{
	switch (iLocal_82)
	{
		case 5:
		case 4:
		case 8:
		case 6:
			return (((STREAMING::HAS_ANIM_DICT_LOADED("pickup_object") && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@basejump@ig_15")) && func_118(&uLocal_78)) && func_118(&uLocal_80));
			break;
		
		case 12:
			return ((STREAMING::HAS_ANIM_DICT_LOADED("pickup_object") && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@basejump@ig_15")) && func_118(&uLocal_78));
			break;
		
		default:
			break;
	}
	return (func_118(&uLocal_78) && func_118(&uLocal_80));
}

int func_118(var uParam0)//Position - 0x3834
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

void func_119()//Position - 0x387B
{
	switch (iLocal_82)
	{
		case 5:
		case 8:
			func_121(&uLocal_78, joaat("p_parachute_s"));
			STREAMING::REQUEST_ANIM_DICT("pickup_object");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@basejump@ig_15");
			break;
		
		case 4:
		case 6:
			func_121(&uLocal_78, joaat("p_parachute_s"));
			func_121(&uLocal_80, joaat("BATI"));
			STREAMING::REQUEST_ANIM_DICT("pickup_object");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@basejump@ig_15");
			break;
		
		case 12:
			func_121(&uLocal_78, joaat("p_parachute_s"));
			STREAMING::REQUEST_ANIM_DICT("pickup_object");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@basejump@ig_15");
			break;
		
		default:
			break;
	}
	func_120(&uLocal_78);
	func_120(&uLocal_80);
}

void func_120(var uParam0)//Position - 0x391A
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

int func_121(var uParam0, int iParam1)//Position - 0x394A
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
	iVar1 = func_122(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_122(var uParam0)//Position - 0x39A7
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

void func_123(int iParam0)//Position - 0x39D3
{
	iLocal_59 = iParam0;
}

void func_124(int iParam0, bool bParam1, bool bParam2)//Position - 0x39DF
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_64EA[iVar0 /*23*/].f_B, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_64EA[iVar0 /*23*/].f_B, 0))
	{
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 18);
		if (Global_64E7 == 1)
		{
			Global_64E8 = 1;
		}
		Global_64E7 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 0);
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 15);
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 3);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_64EA[iVar0 /*23*/].f_B), 0);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_64EA[iVar0 /*23*/].f_B), 15);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_64EA[iVar0 /*23*/].f_B, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_64EA[iVar0 /*23*/].f_13))
		{
			unk_0xB5AD2E78802711D6(1);
			HUD::REMOVE_BLIP(&(Global_64EA[iVar0 /*23*/].f_13));
			unk_0xB5AD2E78802711D6(0);
		}
	}
}

int func_125()//Position - 0x3AE8
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

int func_126()//Position - 0x3B05
{
	if (Global_16089 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14893[Global_16089 /*34*/].f_F, 20);
	}
	return 0;
}

bool func_127(int iParam0, int iParam1)//Position - 0x3B2B
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == 4294967295)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2361.f_63.f_DB[iParam0], iParam1);
	return bVar0;
}

bool func_128(int iParam0)//Position - 0x3B78
{
	return func_129(iParam0, Global_8D15);
}

int func_129(int iParam0, int iParam1)//Position - 0x3B89
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

bool func_130(var uParam0, int iParam1)//Position - 0x3D6A
{
	return (uParam0 && iParam1) != 0;
}

void func_131()//Position - 0x3D79
{
	if (ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		func_96(&uLocal_58, 8388608);
		return;
	}
	StringCopy(&Local_51, "bj", 64);
	iLocal_82 = func_135(vLocal_56, 0);
	switch (iLocal_82)
	{
		case 4:
			iLocal_69 = 129;
			break;
		
		case 5:
			iLocal_69 = 130;
			break;
		
		case 6:
			iLocal_69 = 131;
			break;
		
		case 8:
			iLocal_69 = 133;
			break;
		
		case 12:
			iLocal_69 = 137;
			break;
		
		default:
			break;
	}
	if (iLocal_69 == 129)
	{
		if (func_134(19))
		{
			func_133(iLocal_69);
		}
	}
	func_96(&uLocal_58, 4194304);
	iLocal_63 = 0;
	fLocal_66 = (SYSTEM::TO_FLOAT(func_132(iLocal_69)) + 5f);
	fLocal_77 = 1.1f;
	sLocal_65 = "PLAY_BASEJUMP_G";
	if (iLocal_69 != 263)
	{
		if (!func_127(0, iLocal_63))
		{
			bLocal_254 = false;
			func_133(iLocal_69);
		}
		else
		{
			bLocal_254 = true;
		}
	}
	else
	{
		bLocal_254 = false;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("bj")) > 0)
	{
		func_96(&uLocal_58, 8);
	}
	else
	{
		func_137(&uLocal_58, 8);
	}
	if (func_112(12))
	{
		func_96(&uLocal_58, 8);
	}
	iLocal_61 = 25000;
}

int func_132(int iParam0)//Position - 0x3E97
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return 4294967295;
}

void func_133(int iParam0)//Position - 0x3FAF
{
	if (iLocal_59 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_124(iParam0, 0, 0);
		}
		iLocal_69 = 263;
		func_87(&iLocal_60);
		iLocal_59 = 9;
	}
}

bool func_134(int iParam0)//Position - 0x3FF2
{
	return Global_19AC5[iParam0 /*10*/].f_1;
}

int func_135(vector3 vParam0, int iParam1)//Position - 0x4005
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13)
	{
		if (iParam1 == func_136(iVar3))
		{
			fVar1 = SYSTEM::VDIST2(vParam0, func_45(iVar3));
			if (fVar0 > fVar1)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_136(int iParam0)//Position - 0x4054
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 7:
		case 9:
		case 10:
		case 11:
			return 1;
			break;
	}
	return 0;
}

void func_137(var uParam0, int iParam1)//Position - 0x409B
{
	func_138(uParam0, iParam1);
}

void func_138(var uParam0, var uParam1)//Position - 0x40AB
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_139(bool bParam0)//Position - 0x40C0
{
	if (bParam0)
	{
		if (iLocal_69 != 263)
		{
			func_124(iLocal_69, 0, 0);
		}
	}
	func_87(&iLocal_60);
	if (func_130(uLocal_58, 2))
	{
		func_5();
		func_137(&uLocal_58, 2);
		func_7(&iLocal_62);
	}
	iLocal_62 = 4294967295;
	func_140();
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_140()//Position - 0x4109
{
	func_137(&uLocal_58, 4);
	func_141();
	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_50, 3);
	}
	if (!MISC::IS_STRING_NULL(&Local_52))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_52) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_52);
		}
	}
}

void func_141()//Position - 0x4146
{
}

