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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_34 = 0f;
	vector3 vLocal_35 = { 0f, 0f, 0f };
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	struct<9> Local_38 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_39 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_40 = { 0f, 0f, 0f };
	vector3 vLocal_41 = { 0f, 0f, 0f };
	vector3 vLocal_42 = { 0f, 0f, 0f };
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	float fLocal_46 = 0f;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	char* sLocal_57 = NULL;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	float fLocal_89 = 0f;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	float fLocal_105 = 0f;
	int iLocal_106[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_107 = 0;
	struct<68> Local_108 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
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
	var uLocal_129 = 10;
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
	var uLocal_140 = 2;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 8;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 8;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	float fLocal_162 = 0f;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	vector3 vLocal_169 = { 0f, 0f, 0f };
	int iLocal_170[2] = { 0, 0 };
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	bool bLocal_178 = 0;
	bool bLocal_179 = 0;
	bool bLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	bool bLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	bool bLocal_186 = 0;
	bool bLocal_187 = 0;
	bool bLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	bool bLocal_193 = 0;
	var uLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	var uLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
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
	vector3 vLocal_239 = { 0f, 0f, 0f };
	vector3 vLocal_240 = { 0f, 0f, 0f };
	vector3 vLocal_241 = { 0f, 0f, 0f };
	vector3 vLocal_242 = { 0f, 0f, 0f };
	vector3 vLocal_243 = { 0f, 0f, 0f };
	vector3 vLocal_244 = { 0f, 0f, 0f };
	float fLocal_245 = 0f;
	float fLocal_246 = 0f;
	float fLocal_247 = 0f;
	float fLocal_248 = 0f;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	char* sLocal_251 = NULL;
	char* sLocal_252 = NULL;
	int iLocal_253 = 0;
	char* sLocal_254 = NULL;
	char* sLocal_255 = NULL;
	char* sLocal_256[3] = { NULL, NULL, NULL };
	char* sLocal_257[3] = { NULL, NULL, NULL };
	char* sLocal_258[3] = { NULL, NULL, NULL };
	char* sLocal_259[3] = { NULL, NULL, NULL };
	struct<5> Local_260 = { 0, 0, 0, 0, 0 } ;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<460> Var0;
	int iVar1;
	struct<4> Var2;
	vector3 vVar3;
	struct<25> Var4;
	struct<682> Var5;
	struct<532> Var6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	vector3 vVar17;
	vector3 vVar18;
	vector3 vVar19;
	vector3 vVar20;
	vector3 vVar21;
	char* sVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	var uVar26[20];
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	float fVar34;
	int iVar35;
	
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
	iLocal_28 = joaat("prop_dart_1");
	iLocal_29 = joaat("prop_dart_2");
	iLocal_32 = joaat("prop_dart_bd_cab_01");
	fLocal_34 = 0.063f;
	vLocal_35 = { -0.0035f, 0f, -0.001f };
	iLocal_37 = joaat("prop_target_bull");
	vLocal_42 = { 987.8541f, -98.4173f, 73.8599f };
	fLocal_47 = 0.1f;
	iLocal_58 = 3;
	fLocal_61 = 80f;
	fLocal_62 = 140f;
	fLocal_63 = 180f;
	iLocal_69 = 1;
	iLocal_70 = 65;
	iLocal_71 = 49;
	iLocal_72 = 64;
	iLocal_95 = 65;
	iLocal_97 = 660;
	fLocal_102 = 0.27f;
	fLocal_103 = 0.1f;
	fLocal_104 = -120f;
	fLocal_105 = 127f;
	fLocal_162 = ((0.05f + 0.275f) - 0.01f);
	vLocal_169 = { 500f, 500f, 500f };
	bLocal_180 = true;
	vLocal_241 = { -573.1373f, 294.0269f, 78.1765f };
	vLocal_242 = { -574.1169f, 292.7964f, 78.1766f };
	vLocal_243 = { 1995.295f, 3050.084f, 46.91535f };
	vLocal_244 = { 1995.488f, 3047.383f, 46.91535f };
	fLocal_245 = 172.6813f;
	fLocal_246 = 274.5094f;
	fLocal_247 = 142.6717f;
	fLocal_248 = 44.8785f;
	Var0.f_1 = 2;
	Var0.f_5 = 2;
	Var0.f_5.f_1 = 3;
	Var0.f_5.f_1.f_4F = 3;
	Var0.f_A4 = 3;
	Var0.f_101 = 16;
	Var0.f_1A6 = 2;
	Var0.f_1A9 = 2;
	Var0.f_1AD = 2;
	Var0.f_1B0 = 2;
	Var0.f_1B5 = 2;
	Var0.f_1B8 = 2;
	Var0.f_1BB = 2;
	Var0.f_1BE = 2;
	Var0.f_1C1 = 2;
	Var4.f_1 = 2;
	Var4.f_1.f_1 = 7;
	Var4.f_1.f_1.f_8 = 7;
	Var5.f_3 = 8;
	Var5.f_C = 8;
	Var5.f_15 = 4;
	Var5.f_1A.f_3 = 8;
	Var5.f_1A.f_C = 8;
	Var5.f_1A.f_15 = 4;
	Var5.f_48 = 3;
	Var5.f_48.f_2C.f_3.f_1 = 4;
	Var5.f_48.f_71 = 2;
	Var5.f_48.f_71.f_1.f_1 = 4;
	Var5.f_48.f_71.f_1.f_42.f_1 = 4;
	Var5.f_48.f_F6.f_6 = 12;
	Var5.f_48.f_F6.f_BB = 3;
	Var5.f_1FD.f_2 = 8;
	Var5.f_1FD.f_2.f_1.f_3 = 4;
	Var5.f_1FD.f_2.f_1.f_F.f_3 = 4;
	Var5.f_1FD.f_2.f_1.f_F.f_F.f_3 = 4;
	Var5.f_1FD.f_2.f_1.f_F.f_F.f_F.f_3 = 4;
	Var5.f_1FD.f_2.f_1.f_F.f_F.f_F.f_F.f_3 = 4;
	Var5.f_1FD.f_2.f_1.f_F.f_F.f_F.f_F.f_F.f_3 = 4;
	Var5.f_1FD.f_2.f_1.f_F.f_F.f_F.f_F.f_F.f_F.f_3 = 4;
	Var5.f_1FD.f_2.f_1.f_F.f_F.f_F.f_F.f_F.f_F.f_F.f_3 = 4;
	Var5.f_2A9 = 2;
	Var6.f_20 = 3;
	Var6.f_24 = 1;
	Var6.f_35 = 2;
	Var6.f_39 = 13;
	Var6.f_47 = 13;
	Var6.f_118 = 13;
	Var6.f_1E9 = 13;
	Var6.f_1F7 = 13;
	Var6.f_205 = 13;
	Var6.f_213 = 13;
	iVar13 = 0;
	sLocal_254 = "facials@gen_female@variations@happy";
	switch (func_493(AUDIO::_0x0626A247D2405330()))
	{
		case 0:
			sLocal_255 = "facials@p_m_zero@variations@happy";
			break;
		
		case 1:
			sLocal_255 = "facials@p_m_one@variations@happy";
			break;
		
		case 2:
			sLocal_255 = "facials@p_m_two@variations@happy";
			break;
	}
	sLocal_256[0] = "mood_happy_1";
	sLocal_256[1] = "mood_happy_2";
	sLocal_256[2] = "mood_happy_3";
	sLocal_257[0] = "darts_outro_01_guy1";
	sLocal_257[1] = "darts_outro_02_guy2";
	sLocal_257[2] = "darts_outro_03_guy2";
	sLocal_258[0] = "darts_outro_01_guy2";
	sLocal_258[1] = "darts_outro_02_guy1";
	sLocal_258[2] = "darts_outro_03_guy1";
	sLocal_259[0] = "darts_outro_01_cam";
	sLocal_259[1] = "darts_outro_02_cam";
	sLocal_259[2] = "darts_outro_03_cam";
	iLocal_170[0] = AUDIO::_0x0626A247D2405330();
	bLocal_183 = true;
	vVar17 = { 1992.293f, 3050.583f, 47.98973f };
	vVar18 = { -572.0406f, 294.1958f, 79.9374f };
	func_492();
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		iLocal_207 = 1;
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
		{
			case 0:
				iLocal_204 = joaat("a_f_m_salton_01");
				break;
			
			case 1:
				iLocal_204 = joaat("a_f_o_salton_01");
				break;
		}
		iLocal_202 = 10;
		WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_unarmed"), true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(ScriptParam_260.f_4))
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			if (iLocal_207 == 2)
			{
				ScriptParam_260 = { vVar18 };
				ScriptParam_260.f_3 = -0.09f;
			}
			else
			{
				ScriptParam_260 = { vVar17 };
				ScriptParam_260.f_3 = 57.78315f;
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(ScriptParam_260, 5f, joaat("prop_dart_bd_cab_01"), 0))
			{
				ScriptParam_260.f_4 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ScriptParam_260, 5f, joaat("prop_dart_bd_cab_01"), 1, 0, 1);
				OBJECT::_0x163F8B586BC95F2A(ScriptParam_260, 5f, joaat("prop_dart_bd_cab_01"), &ScriptParam_260, &vVar19, 0);
				ScriptParam_260.f_3 = vVar19.z;
			}
		}
	}
	else
	{
		vVar19 = { unk_0x8000C77B5F336760(ScriptParam_260.f_4, true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(func_491(), 0))
	{
		func_489(iLocal_202, 1);
		if (PED::IS_PED_IN_ANY_VEHICLE(func_491(), 0))
		{
			BRAIN::TASK_LEAVE_ANY_VEHICLE(func_491(), 0, 0);
		}
		iLocal_170[1] = func_491();
	}
	else
	{
		MISC::SET_MISSION_FLAG(1);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_480();
		func_462(&Var0, &Var5, &Var6);
	}
	unk_0x0FD8C89650533D97(0);
	PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
	func_460(1);
	iLocal_198 = func_457(func_493(iLocal_170[0]), 1);
	fVar15 = (SYSTEM::TO_FLOAT(iLocal_198) / 100f);
	fVar16 = (fVar15 * 1200f);
	iLocal_97 = SYSTEM::ROUND(fVar16);
	if (iLocal_97 < 660)
	{
		iLocal_97 = 660;
	}
	func_456(23, 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
		if (iLocal_190 && Var0 < 13)
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(Var4, Var4.f_12, Var4.f_15, Var4.f_18, Var4.f_18, 2);
		}
		if ((PED::IS_PED_INJURED(ScriptParam_260.f_5) && !ENTITY::DOES_ENTITY_EXIST(func_491())) || (ENTITY::DOES_ENTITY_EXIST(func_491()) && PED::IS_PED_INJURED(func_491())))
		{
			func_462(&Var0, &Var5, &Var6);
		}
		if (!PED::IS_PED_INJURED(iLocal_170[0]))
		{
			PED::SET_PED_RESET_FLAG(iLocal_170[0], 239, 1);
			PED::SET_PED_RESET_FLAG(iLocal_170[0], 124, 1);
			func_455();
			PAD::_DISABLE_INPUT_GROUP(0);
			PAD::_DISABLE_INPUT_GROUP(2);
			iVar14 = 0;
			while (iVar14 < PED::GET_PED_NEARBY_PEDS(AUDIO::_0x0626A247D2405330(), &uVar26, 4294967295))
			{
				if (uVar26[iVar14] != iLocal_170[1])
				{
					if (!PED::IS_PED_INJURED(uVar26[iVar14]))
					{
						PED::SET_PED_RESET_FLAG(uVar26[iVar14], 240, 1);
					}
				}
				iVar14++;
			}
			switch (Var0)
			{
				case 0:
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
					func_454(&(Var0.f_F3), &ScriptParam_260);
					func_453(Var0.f_F3.f_1, Var0.f_F3.f_4);
					if (ENTITY::DOES_ENTITY_EXIST(Var0.f_F3))
					{
						vLocal_239 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Var0.f_F3, 0.7792f, -1.138f, 0.1814f) };
						vLocal_240 = { -7.9947f, 0f, (Var0.f_F3.f_4 + 36.19176f) };
						iLocal_84 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vLocal_239, vLocal_240, 65f, 0, 2);
						CAM::SET_CAM_FOV(iLocal_84, 30f);
					}
					func_452();
					SYSTEM::SETTIMERA(0);
					Var0 = 1;
					break;
				
				case 1:
					if (SYSTEM::TIMERA() > 500 && !PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()))
					{
						MISC::CLEAR_AREA(ScriptParam_260, 0.5f, 1, 0, 0, false);
						if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
						{
							BRAIN::CLEAR_SEQUENCE_TASK(&uLocal_205);
							BRAIN::OPEN_SEQUENCE_TASK(&uLocal_205);
							BRAIN::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							CUTSCENE::_0x8D9DF6ECA8768583(uLocal_205);
							BRAIN::TASK_PERFORM_SEQUENCE(AUDIO::_0x0626A247D2405330(), uLocal_205);
						}
						vLocal_42 = { vLocal_42 };
						Var0 = 2;
					}
					break;
				
				case 2:
					iVar28 = 0;
					while (iVar28 < 2)
					{
						iVar29 = 0;
						while (iVar29 < 3)
						{
							func_451(&(Var0.f_5[iVar28 /*79*/][iVar29 /*26*/]), iVar28);
							iVar29++;
						}
						iVar28++;
					}
					iVar30 = 0;
					while (iVar30 < 3)
					{
						func_451(&(Var0.f_A4[iVar30 /*26*/]), 0);
						iVar30++;
					}
					iVar1 = 2;
					func_450(0);
					func_448(&Var4, iLocal_207, Var0.f_F3.f_1, Var0.f_F3.f_4);
					if (ENTITY::DOES_ENTITY_EXIST(Var0.f_F3))
					{
						vVar19 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Var0.f_F3, Var4.f_12) };
					}
					func_445(&Var4, &Var5);
					AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
					Var0 = 3;
					break;
				
				case 3:
					if (func_442(&Var4, &Var5))
					{
						func_439(&(Var0.f_F3), &Var2, &vVar3, 0);
						iLocal_249 = func_493(iLocal_170[0]);
						switch (iLocal_249)
						{
							case 0:
								sLocal_251 = func_438("MICHAEL");
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E2F, 0))
								{
									sVar22 = "darts_ig_intro_player_0_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_0_face";
								}
								break;
							
							case 1:
								sLocal_251 = func_438("FRANKLIN");
								bLocal_187 = true;
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E2F, 0))
								{
									sVar22 = "darts_ig_intro_player_1_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_1_face";
								}
								break;
							
							case 2:
								sLocal_251 = func_438("TREVOR");
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E2F, 0))
								{
									sVar22 = "darts_ig_intro_player_2_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_2_face";
								}
								break;
						}
						if (!ENTITY::IS_ENTITY_DEAD(func_491(), 0))
						{
							iLocal_250 = func_493(func_491());
							if (iLocal_250 == 145)
							{
								iLocal_250 = func_436(func_491());
							}
							switch (iLocal_250)
							{
								case 0:
									sLocal_252 = func_438("MICHAEL");
									break;
								
								case 1:
									sLocal_252 = func_438("FRANKLIN");
									break;
								
								case 2:
									sLocal_252 = func_438("TREVOR");
									break;
								
								case 19:
									sLocal_252 = func_438("LAMAR");
									PED::SET_PED_COMPONENT_VARIATION(func_491(), 5, 2, 0, 0);
									break;
								
								case 14:
									sLocal_252 = func_438("JIMMY");
									break;
								
								default:
									sLocal_252 = "NEW_GUY";
									break;
							}
						}
						else
						{
							iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, 200);
							if (iLocal_207 == 2)
							{
								if (iVar12 < 51)
								{
									sLocal_252 = func_438("RAYMOND");
									iLocal_253 = 954610991;
								}
								else if (iVar12 < 101)
								{
									sLocal_252 = func_438("JOHAN");
									iLocal_253 = 94453331;
								}
								else if (iVar12 < 151)
								{
									sLocal_252 = func_438("STAN");
									iLocal_253 = 1891555423;
								}
								else
								{
									sLocal_252 = func_438("VINCE");
									iLocal_253 = 3227336947;
								}
							}
							else if (iVar12 < 51)
							{
								sLocal_252 = func_438("KRISTY");
								iLocal_253 = 885327384;
							}
							else if (iVar12 < 101)
							{
								sLocal_252 = func_438("MARLENE");
								iLocal_253 = 2503966302;
							}
							else if (iVar12 < 151)
							{
								sLocal_252 = func_438("LORIE");
								iLocal_253 = 1954368234;
							}
							else
							{
								sLocal_252 = func_438("SHELLEY");
								iLocal_253 = 3431748392;
							}
						}
						iLocal_36 = OBJECT::CREATE_OBJECT(iLocal_37, vVar3, 1, true, 0);
						Var0.f_1BE[0] = 0;
						Var0.f_1BE[1] = 0;
						Var0 = 4;
					}
					break;
				
				case 4:
					if (!CAM::_0x705A276EBFF3133D())
					{
						iVar27 = OBJECT::CREATE_OBJECT(joaat("prop_dart_1"), vVar3, 1, true, 0);
						func_433(Var0.f_F3.f_4, Var2, &uVar26, &ScriptParam_260);
						func_432(&Var4, sLocal_251, sLocal_252);
						NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_170[1]);
						iLocal_206 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
						if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
						{
							PED::FORCE_PED_MOTION_STATE(AUDIO::_0x0626A247D2405330(), 2423432979, 0, 0, 0);
						}
						func_431(&(Var0.f_101), 0, AUDIO::_0x0626A247D2405330(), sLocal_251, 0, 1);
						if (ENTITY::IS_ENTITY_DEAD(func_491(), 0))
						{
							if (iLocal_207 == 2)
							{
								func_431(&(Var0.f_101), 3, iLocal_170[1], "DartsBillLost1", 0, 1);
							}
							else
							{
								func_431(&(Var0.f_101), 3, iLocal_170[1], "DartsMelHick1", 0, 1);
							}
							iVar13 = 4294967295;
						}
						else
						{
							func_431(&(Var0.f_101), 3, func_491(), sLocal_252, 0, 1);
							func_429(&iVar25);
							iVar13 = 6;
						}
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E2F, 0))
						{
							iVar13 = 4294967295;
						}
						else
						{
							iVar13 = 3;
						}
						func_428(&Var4, 0);
						Var0 = 5;
					}
					break;
				
				case 5:
					if ((((!PED::IS_PED_INJURED(iLocal_170[1]) && PED::IS_PED_ON_FOOT(iLocal_170[0])) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_170[0], 1)) && PED::IS_PED_ON_FOOT(iLocal_170[1])) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_170[1], 1))
					{
						bLocal_178 = func_426(&uLocal_194);
						if ((func_425() && MISC::GET_GAME_TIMER() >= iLocal_196 + 1000) && iVar13 != 9)
						{
							if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
							{
								CAM::DO_SCREEN_FADE_OUT(500);
							}
						}
						if (CAM::IS_SCREEN_FADED_OUT() && iVar13 != 9)
						{
							func_422(0);
							func_420();
							iVar13 = 9;
						}
						switch (iVar13)
						{
							case 4294967295:
								if (!PED::IS_PED_INJURED(iLocal_170[1]))
								{
									iLocal_200 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(ScriptParam_260.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (ENTITY::GET_ENTITY_HEADING(ScriptParam_260.f_4) - 3.783146f), 2);
									iLocal_206 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_206, iLocal_200, "darts_ig_intro_cam", "mini@dartsintro");
									CAM::SET_CAM_ACTIVE(iLocal_206, true);
									CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
									BRAIN::TASK_CLEAR_LOOK_AT(iLocal_170[0]);
									BRAIN::TASK_CLEAR_LOOK_AT(iLocal_170[1]);
									BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_170[0]);
									BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_170[1]);
									BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_170[1], iLocal_200, "mini@dartsintro", "darts_ig_intro_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_170[0], iLocal_200, "mini@dartsintro", "darts_ig_intro_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									BRAIN::TASK_PLAY_ANIM(iLocal_170[1], "mini@dartsintro", "darts_ig_intro_guy1_face", 8f, -8f, 4294967295, 32, 0, 0, 0, 0);
									BRAIN::TASK_PLAY_ANIM(iLocal_170[0], "mini@dartsintro", sVar22, 8f, -8f, 4294967295, 32, 0, 0, 0, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iVar27, iLocal_200, "darts_ig_intro_dart", "mini@dartsintro", 1000f, 8f, 0, 1148846080);
									func_419(&iVar25);
									iVar13++;
								}
								break;
							
							case 0:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_200))
								{
									if (!bVar9)
									{
										if (func_418(&iVar25) > 1.5f)
										{
											func_417(iLocal_170[0], "DARTS_REQUEST_GAME", 6);
											bVar9 = true;
											func_416(&iVar25);
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_170[0]))
									{
										if (!bVar10)
										{
											if (!func_415(&iVar25))
											{
												func_429(&iVar25);
											}
											else if (func_418(&iVar25) > 0.5f)
											{
												func_414(iLocal_170[1]);
												func_416(&iVar25);
												bVar10 = true;
											}
										}
									}
									switch (iLocal_31)
									{
										case 0:
											func_419(&iVar25);
											func_413("DARTS_HOW_TO_2", 4294967295);
											iLocal_31++;
											break;
										
										case 1:
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_200) > 0.25f)
											{
												func_419(&iVar25);
												func_413("DARTS_HOW_TO_3", 4294967295);
												iLocal_31++;
											}
											break;
										
										case 2:
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_200) > 0.55f)
											{
												func_413("DARTS_HOW_3A", 4294967295);
												iLocal_31++;
											}
											break;
										
										case 3:
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_200) > 0.85f)
											{
												func_413("DARTS_HOW_3A", 4294967295);
												iLocal_31++;
											}
											break;
									}
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_200) > 0.95f)
									{
										iLocal_190 = 1;
										iVar13++;
									}
									else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
									{
									}
								}
								break;
							
							case 1:
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_200) > 0.99f)
								{
									if (!PED::IS_PED_INJURED(iLocal_170[1]))
									{
										func_410(Var0.f_F3.f_1, Var0.f_F3.f_4, func_412(2), func_411(0), 0, 1);
										iLocal_31 = 0;
										GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
										CAM::DESTROY_CAM(iLocal_206, 0);
										NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_170[0]);
										NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_170[1]);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iVar27, -1000f, 0);
										OBJECT::DELETE_OBJECT(&iVar27);
										AUDIO::STOP_AUDIO_SCENE(func_409(0));
										func_416(&iVar25);
										Var0 = 6;
										iVar13 = 0;
									}
								}
								break;
							
							case 3:
								if (!PED::IS_PED_INJURED(iLocal_170[1]))
								{
									iLocal_200 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(ScriptParam_260.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (ENTITY::GET_ENTITY_HEADING(ScriptParam_260.f_4) - 3.783146f), 2);
									iLocal_206 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_206, iLocal_200, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
									CAM::SET_CAM_ACTIVE(iLocal_206, true);
									CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
									BRAIN::TASK_CLEAR_LOOK_AT(iLocal_170[0]);
									BRAIN::TASK_CLEAR_LOOK_AT(iLocal_170[1]);
									BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_170[0]);
									BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_170[1]);
									BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_170[1], iLocal_200, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_170[0], iLocal_200, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									BRAIN::TASK_PLAY_ANIM(iLocal_170[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, 4294967295, 32, 0, 0, 0, 0);
									BRAIN::TASK_PLAY_ANIM(iLocal_170[0], "mini@dartsintro_alt1", sVar22, 8f, -8f, 4294967295, 32, 0, 0, 0, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iVar27, iLocal_200, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 8f, 0, 1148846080);
									func_419(&iVar25);
									iVar13++;
								}
								break;
							
							case 4:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_200))
								{
									if (!bVar9)
									{
										if (func_418(&iVar25) > 0.5f)
										{
											func_417(iLocal_170[0], "DARTS_REQUEST_GAME", 6);
											bVar9 = true;
											func_416(&iVar25);
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_170[0]))
									{
										if (!bVar10)
										{
											if (!func_415(&iVar25))
											{
												func_429(&iVar25);
											}
											else if (func_418(&iVar25) > 0.25f)
											{
												func_414(iLocal_170[1]);
												func_416(&iVar25);
												bVar10 = true;
											}
										}
									}
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_200) > 0.95f)
									{
										iLocal_190 = 1;
										iVar13++;
									}
									else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
									{
									}
								}
								break;
							
							case 5:
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_200) > 0.99f)
								{
									if (!PED::IS_PED_INJURED(iLocal_170[1]))
									{
										func_408();
										CAM::DESTROY_CAM(iLocal_206, 0);
										NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_170[0]);
										NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_170[1]);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iVar27, -1000f, 0);
										OBJECT::DELETE_OBJECT(&iVar27);
										AUDIO::STOP_AUDIO_SCENE(func_409(0));
										func_416(&iVar25);
										Var0 = 6;
										iVar13 = 0;
									}
								}
								break;
							
							case 9:
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									iLocal_190 = 1;
									iLocal_31 = 0;
									GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
									if (!PED::IS_PED_INJURED(iLocal_170[1]))
									{
										ENTITY::SET_ENTITY_COORDS(iLocal_170[0], Var2, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(iLocal_170[0], Var0.f_F3.f_4);
										ENTITY::SET_ENTITY_COORDS(iLocal_170[1], Var2.f_3, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(iLocal_170[1], Var0.f_F3.f_4);
										NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_170[0]);
										NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_170[1]);
									}
									CAM::DESTROY_CAM(iLocal_206, 0);
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iVar27, -1000f, 0);
									OBJECT::DELETE_OBJECT(&iVar27);
									if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E2F, 0))
									{
										func_410(Var0.f_F3.f_1, Var0.f_F3.f_4, func_412(2), func_411(0), 0, 1);
									}
									else
									{
										func_408();
									}
									AUDIO::STOP_AUDIO_SCENE(func_409(0));
									func_416(&iVar25);
									CAM::DO_SCREEN_FADE_IN(500);
									Var0 = 6;
									iVar13 = 0;
								}
								break;
							}
					}
					break;
				
				case 6:
					switch (iVar13)
					{
						case 0:
							iLocal_196 = MISC::GET_GAME_TIMER();
							if (!PED::IS_PED_INJURED(iLocal_170[1]))
							{
								ENTITY::SET_ENTITY_COORDS(iLocal_170[0], Var2, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_170[0], Var0.f_F3.f_4);
								ENTITY::SET_ENTITY_COORDS(iLocal_170[1], Var2.f_3, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_170[1], Var0.f_F3.f_4);
							}
							AUDIO::START_AUDIO_SCENE(func_409(1));
							iVar13 = 0;
							Var0 = 7;
							break;
						
						case 1:
							if ((MISC::GET_GAME_TIMER() - iLocal_196) > 1500)
							{
								func_406(&(Var5.f_39), "DARTS_TITLE", 0, 4000, 12, 2, 0, 0);
								iVar13++;
							}
							break;
						
						case 2:
							if (!func_405(&(Var5.f_39), 1, 0))
							{
								AUDIO::START_AUDIO_SCENE(func_409(1));
								iVar13 = 0;
								Var0 = 7;
							}
							break;
					}
					break;
				
				case 7:
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E2F, 0))
					{
						if (func_402(&iVar1, &(Var0.f_F3), &(Var0.f_F9), &(Var0.f_1), &(Var0.f_A4), &iVar24))
						{
							MISC::SET_BIT(&Global_19E2F, 0);
							Var0 = 8;
						}
					}
					else
					{
						CAM::SET_CAM_ACTIVE(iLocal_75, true);
						Var0 = 8;
					}
					break;
				
				case 8:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					switch (iVar13)
					{
						case 0:
							if (!ENTITY::DOES_ENTITY_EXIST(func_491()))
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E2F, 10))
								{
									MISC::SET_BIT(&Global_19E2F, 10);
								}
								else
								{
									GRAPHICS::_0x35FB78DC42B7BD21(&Global_19E2F, 10);
								}
								func_400(&Var5);
								iVar13++;
							}
							else
							{
								func_400(&Var5);
								iVar13++;
							}
							break;
						
						case 1:
							if (MISC::IS_PC_VERSION())
							{
								if (fLocal_89 != GRAPHICS::_GET_ASPECT_RATIO(0))
								{
									fLocal_89 = GRAPHICS::_GET_ASPECT_RATIO(0);
									CAM::SET_CAM_FOV(iLocal_75, func_399(fLocal_89));
									CAM::SET_CAM_FOV(iLocal_76, func_399(fLocal_89));
								}
							}
							if (func_339(&Var5, &(Var0.f_1C4), &(Var0.f_1C5)))
							{
								AUDIO::STOP_AUDIO_SCENE(func_409(1));
								if (Var0.f_1C4 > 0)
								{
									iVar13 = 0;
									if (Var0.f_1C4 > 1 || Var0.f_1C5 > 1)
									{
										func_338(&Var4, 0, 0, 0, 0);
										bVar8 = true;
									}
									func_335(1, 4294967295);
									Var0 = 9;
								}
								else if (Var0.f_1C4 < 0)
								{
									Var0 = 15;
								}
							}
							break;
					}
					break;
				
				case 9:
					if (func_328(&Var0, &Var4, &Var5))
					{
						Var0.f_F9.f_4 = 1;
						if (Global_19E56.f_49FE.f_5 >= 5 && Global_19E56.f_49FE.f_7 >= 0.8f)
						{
							Var0.f_F9.f_4 = 2;
						}
						else if (Global_19E56.f_49FE.f_5 >= 3 && Global_19E56.f_49FE.f_7 >= 0.66f)
						{
							Var0.f_F9.f_4 = 1;
						}
						else
						{
							Var0.f_F9.f_4 = 0;
						}
						if (func_327(Global_19E56.f_49FE.f_5, &iLocal_199))
						{
							func_326(&(Var5.f_29A), 24, 1);
						}
						fLocal_45 = func_325(Global_19E56.f_49FE.f_5);
						fLocal_46 = func_324(Global_19E56.f_49FE.f_5);
						fLocal_43 = fLocal_45;
						fLocal_44 = fLocal_46;
						iLocal_106[4]++;
						if (!PED::IS_PED_INJURED(iLocal_170[1]))
						{
							BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_170[1]);
							ENTITY::SET_ENTITY_COORDS(iLocal_170[1], Var2.f_3, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_170[1], Var0.f_F3.f_4);
						}
						if (func_415(&iVar23))
						{
							func_416(&iVar23);
						}
						AUDIO::START_AUDIO_SCENE(func_409(2));
						func_323(iLocal_170[1]);
						Var0 = 10;
						Var0.f_1 = 2;
					}
					break;
				
				case 10:
					if (MISC::IS_PC_VERSION())
					{
						if (fLocal_89 != GRAPHICS::_GET_ASPECT_RATIO(0))
						{
							fLocal_89 = GRAPHICS::_GET_ASPECT_RATIO(0);
							CAM::SET_CAM_FOV(iLocal_75, func_399(fLocal_89));
							CAM::SET_CAM_FOV(iLocal_76, func_399(fLocal_89));
						}
					}
					if (!bLocal_188)
					{
						STREAMING::REQUEST_ANIM_DICT("mini@dartsoutro");
						bLocal_188 = true;
					}
					if (!iLocal_189)
					{
						if (bLocal_188)
						{
							if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@dartsoutro"))
							{
							}
							else
							{
								iLocal_189 = 1;
							}
						}
					}
					func_241(&Var0, &vVar3, &Var4, &Var5, &iVar23);
					break;
				
				case 11:
					switch (iVar13)
					{
						case 0:
							if (func_418(&(Var0.f_FE)) > 0.5f)
							{
								GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
								HUD::CLEAR_PRINTS();
								func_240(AUDIO::_0x0626A247D2405330());
								func_338(&Var4, Var0.f_1C1[0], Var0.f_1C1[1], Var0.f_1BE[0], Var0.f_1BE[1]);
								iVar31 = 0;
								while (iVar31 < 2)
								{
									iVar32 = 0;
									while (iVar32 < 3)
									{
										func_239(&(Var0.f_5[iVar31 /*79*/][iVar32 /*26*/]));
										iVar32++;
									}
									func_238(&Var4, iVar31);
									iVar31++;
								}
								if (Var0.f_1CB)
								{
									if (Var0.f_1C6)
									{
										func_236(&(Var5.f_3E), "DARTS_WINNER", "DARTS_SETW", 4000, 5, 12);
									}
									else
									{
										func_236(&(Var5.f_3E), "DARTS_LOSER", "DARTS_SETL", 4000, 5, 6);
									}
									Var0.f_1CB = 0;
								}
								else if (Var0.f_1C6)
								{
									func_236(&(Var5.f_3E), "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 12);
								}
								else
								{
									func_236(&(Var5.f_3E), "DARTS_LOSER", "DARTS_LEGL", 4000, 5, 6);
								}
								fVar34 = GRAPHICS::_GET_ASPECT_RATIO(1);
								if (fVar34 > 2f)
								{
									vVar20 = { 1992.294f, 3047.577f, 46.21517f };
									vVar21 = { 0f, 0f, 138.74f };
								}
								else
								{
									vVar20 = { 1992.336f, 3047.924f, 46.21517f };
									vVar21 = { 0f, 0f, 136.74f };
								}
								iVar33 = func_235();
								iLocal_200 = PED::CREATE_SYNCHRONIZED_SCENE(vVar20, vVar21, 2);
								iLocal_206 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_206, iLocal_200, sLocal_259[iVar33], "mini@dartsoutro");
								CAM::SET_CAM_ACTIVE(iLocal_206, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
								if (!PED::IS_PED_INJURED(iLocal_170[0]) && !PED::IS_PED_INJURED(iLocal_170[1]))
								{
									if (Var0.f_1C6)
									{
										if ((Var0.f_1B5[0] + Var0.f_1B5[1]) == 1)
										{
											iVar35 = 1;
										}
										else
										{
											iVar35 = 0;
										}
										unk_0x1190AB7024CBD8CB(4294967295, "TENNIS_POINT_WON", "HUD_AWARDS", 1);
										func_234(&iLocal_170, iVar35);
										BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_170[0], iLocal_200, "mini@dartsoutro", sLocal_257[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_170[1], iLocal_200, "mini@dartsoutro", sLocal_258[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										BRAIN::TASK_PLAY_ANIM(AUDIO::_0x0626A247D2405330(), sLocal_255, sLocal_256[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, 4294967295, 32, 0, 0, 0, 0);
									}
									else
									{
										unk_0x1190AB7024CBD8CB(4294967295, "OTHER_TEXT", "HUD_AWARDS", 1);
										func_233(&iLocal_170);
										BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_170[1], iLocal_200, "mini@dartsoutro", sLocal_257[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_170[0], iLocal_200, "mini@dartsoutro", sLocal_258[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										BRAIN::TASK_PLAY_ANIM(iLocal_170[1], sLocal_254, sLocal_256[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, 4294967295, 32, 0, 0, 0, 0);
									}
								}
								iVar13++;
							}
							break;
						
						case 1:
							if (!func_231(&(Var5.f_3E), 1))
							{
								iVar13++;
							}
							break;
						
						case 2:
							func_416(&(Var0.f_FE));
							iLocal_184 = 0;
							AUDIO::STOP_AUDIO_SCENE(func_409(3));
							func_408();
							if (CAM::DOES_CAM_EXIST(iLocal_206))
							{
								CAM::DESTROY_CAM(iLocal_206, 0);
							}
							iVar13 = 0;
							Var0 = 9;
							break;
					}
					break;
				
				case 12:
					if (func_418(&(Var0.f_FE)) > 0.92f)
					{
						func_41(&Var0, &Var5, &Var4, &Var6, bVar8);
					}
					break;
				
				case 13:
					uVar11 = func_10(&Var6, 0, 1065353216, 0, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(func_491(), 0))
					{
						NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_170[1]);
						Var0 = 15;
					}
					switch (iVar13)
					{
						case 0:
							NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_170[0]);
							if (!bLocal_186)
							{
								CAM::RENDER_SCRIPT_CAMS(false, bLocal_186, 3000, 1, 0, 0);
							}
							else
							{
								CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
							}
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
							HUD::CLEAR_PRINTS();
							BRAIN::TASK_LOOK_AT_ENTITY(iLocal_170[0], iLocal_170[1], 5000, 2049, 3);
							func_429(&iVar25);
							iVar13++;
							break;
						
						case 1:
							if (func_7(&iVar25) > 0.1f)
							{
								if (!bVar7)
								{
								}
								func_429(&iVar25);
								iVar13++;
							}
							break;
						
						case 2:
							if (func_7(&iVar25) > 0.3f)
							{
								if (!PED::IS_PED_INJURED(iLocal_170[1]))
								{
									if (!bVar7)
									{
										func_4(iLocal_170[0], "GENERIC_THANKS", 1, 4);
									}
								}
								func_429(&iVar25);
								iVar13++;
							}
							break;
						
						case 3:
							if (uVar11 || bVar7)
							{
								Var0 = 15;
								iVar13++;
							}
							break;
					}
					break;
				
				case 14:
					func_2(&Var5);
					if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
					{
						func_1(iLocal_170[1]);
						iLocal_203 = 2;
						bVar7 = true;
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_409(2)))
						{
							AUDIO::STOP_AUDIO_SCENE(func_409(2));
						}
						Var0 = 13;
					}
					if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
					{
						if (Var0.f_1 == 2)
						{
							iLocal_55 = 0;
						}
						func_326(&(Var5.f_29A), 8, 0);
						Var0 = 10;
					}
					break;
				
				case 15:
					func_462(&Var0, &Var5, &Var6);
					break;
				}
		}
	}
}

void func_1(int iParam0)//Position - 0x1DE4
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_4(iParam0, "GAME_QUIT_EARLY", 0, 6);
	}
}

void func_2(var uParam0)//Position - 0x1E02
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (!func_3(&(uParam0->f_29A), 8))
		{
			func_326(&(uParam0->f_29A), 8, 1);
			func_326(&(uParam0->f_29A), 15, 0);
			func_326(&(uParam0->f_29A), 16, 0);
			func_326(&(uParam0->f_29A), 17, 0);
		}
		HUD::CLEAR_SMALL_PRINTS();
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, 0, 4294967295, 0, 0, 1, 0);
	}
	else if (func_3(&(uParam0->f_29A), 8))
	{
		func_326(&(uParam0->f_29A), 8, 0);
	}
}

bool func_3(var uParam0, int iParam1)//Position - 0x1E87
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, iParam1);
}

void func_4(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x1E98
{
	if (!ENTITY::IS_ENTITY_DEAD(func_491(), 0) || iParam2)
	{
		func_417(iParam0, sParam1, iParam3);
	}
	else if (!PED::IS_PED_INJURED(iParam0))
	{
		func_5(iParam0, sParam1, sLocal_57, iParam3);
	}
}

void func_5(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x1ED8
{
	AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(iParam0, sParam1, sParam2, func_6(iParam3), 0);
}

int func_6(int iParam0)//Position - 0x1EF1
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

float func_7(int iParam0)//Position - 0x20E6
{
	if (func_415(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_8(bool bParam0)//Position - 0x2125
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

bool func_9(int iParam0)//Position - 0x217D
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 2);
}

int func_10(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x218D
{
	bool bVar0;
	
	if (MISC::GET_FRAME_COUNT() == uParam0->f_23E)
	{
		return uParam0->f_23F;
	}
	uParam0->f_23E = MISC::GET_FRAME_COUNT();
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 1))
		{
			uParam0->f_23F = 1;
			return 1;
		}
		if (BRAIN::IS_PED_BEING_ARRESTED(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			uParam0->f_23F = 1;
			return 1;
		}
	}
	if (!uParam0->f_234)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(true);
			uParam0->f_234 = 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(CAM::_0xDC9DA9E8789F5246()))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE(CAM::_0xDC9DA9E8789F5246());
			}
		}
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	PAD::DISABLE_CONTROL_ACTION(2, 19, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 28, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 29, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 171, 1);
	func_38(0);
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (PLAYER::_IS_PLAYER_CAM_CONTROL_DISABLED() || (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN()))
		{
			HUD::_SHOW_CURSOR_THIS_FRAME();
		}
	}
	Global_8F3B = 1;
	if (!uParam0->f_233)
	{
		switch (func_493(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			case 1:
				GRAPHICS::_START_SCREEN_EFFECT("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				GRAPHICS::_START_SCREEN_EFFECT("SuccessTrevor", 1000, 0);
				break;
			
			default:
				GRAPHICS::_START_SCREEN_EFFECT("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_233 = 1;
	}
	if (uParam0->f_22E == 0)
	{
		uParam0->f_22E = (uParam0->f_23C + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_23C >= (uParam0->f_22E - 1500))
	{
		uParam0->f_22E = uParam0->f_23C + 3000;
	}
	if (uParam0->f_230 == 0f)
	{
		uParam0->f_230 = (uParam0->f_230 + func_37(30f));
		uParam0->f_230 = (uParam0->f_230 + (IntToFloat(uParam0->f_38) * func_37(25f)));
		if (uParam0->f_38 > 0)
		{
			uParam0->f_230 = (uParam0->f_230 + func_37((25f * 0.5f)));
		}
		if (uParam0->f_225)
		{
			uParam0->f_230 = (uParam0->f_230 + (func_37(30f) - func_37(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_36(1);
		uParam0->f_23C = (uParam0->f_23C + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_15(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_1E < 1f)
			{
				uParam0->f_1E = (uParam0->f_1E + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_1E = func_14(uParam0->f_1E, 0f, 1f);
		if (uParam0->f_23C > (uParam0->f_22E - 333))
		{
			if (!uParam0->f_231)
			{
				if (uParam0->f_235)
				{
					uParam0->f_235 = 0;
					uParam0->f_236 = 0;
					uParam0->f_23D = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				uParam0->f_223 = (uParam0->f_223 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_223 = func_14(uParam0->f_223, 0f, 1f);
		if ((uParam0->f_223 <= 0.7f && !uParam0->f_221) && uParam0->f_1 != 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_OUT");
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			uParam0->f_222 = uParam0->f_23C;
			uParam0->f_221 = 1;
		}
		if (uParam0->f_23C > (uParam0->f_22E - 333))
		{
			if (!uParam0->f_231)
			{
				if (uParam0->f_224 < 1f)
				{
					uParam0->f_224 = (uParam0->f_224 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_224 = func_14(uParam0->f_224, 0f, 1f);
		if (uParam0->f_232)
		{
			if (PAD::_0x6CD79468A1E595C6(2))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
				{
					if (!uParam0->f_237)
					{
						func_11(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0));
					}
				}
			}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 216) && uParam0->f_22E > uParam0->f_23C + 333)
		{
			if (((!uParam0->f_236 && uParam0->f_38 != 0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4)) && IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_235)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					uParam0->f_235 = 1;
					uParam0->f_23D = 0.75f;
					if (uParam0->f_23C > (uParam0->f_22E - 5000))
					{
						uParam0->f_22E = uParam0->f_23C + 5000;
					}
				}
				else if (bParam5)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					uParam0->f_235 = 0;
					uParam0->f_23D = 0.75f;
				}
				func_11(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0));
			}
		}
		if ((uParam0->f_235 || uParam0->f_236) && uParam0->f_38 != 0)
		{
			if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_236 && !uParam0->f_235)
				{
					uParam0->f_235 = 1;
					uParam0->f_23D = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				uParam0->f_22F = func_14((uParam0->f_22F + (((1f / 0.3f) * uParam0->f_23D) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_23D = func_14((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_22F = func_14((uParam0->f_22F - ((((1f / 0.3f) * uParam0->f_23D) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_23D = func_14((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_23C > uParam0->f_22E)
		{
			if (uParam0->f_231)
			{
				if (!uParam0->f_237)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 215))
					{
						uParam0->f_231 = 0;
					}
				}
			}
			else if ((uParam0->f_23C - uParam0->f_222) > 1000 && uParam0->f_221)
			{
				bVar0 = false;
			}
		}
		uParam0->f_23F = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!bVar0)
			{
				func_36(0);
			}
			return !bVar0;
		}
	}
	func_36(0);
	return 1;
}

void func_11(var uParam0, bool bParam1)//Position - 0x27E6
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SET_SEETHROUGH(true);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
	func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 215, true));
	func_12("ES_HELP");
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::SET_SEETHROUGH(true);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(215);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	if (bParam1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
		func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 216, true));
		func_12("ES_XPAND");
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::SET_SEETHROUGH(true);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(216);
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_12(char* sParam0)//Position - 0x28AA
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

void func_13(char* sParam0)//Position - 0x28BC
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

float func_14(float fParam0, float fParam1, float fParam2)//Position - 0x28CA
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

void func_15(var uParam0, float fParam1, bool bParam2)//Position - 0x28F1
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	iVar0 = SYSTEM::ROUND((uParam0->f_223 * 255f));
	fVar1 = (func_35() * 0.25f);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
	{
		if (uParam0->f_1E >= 0f)
		{
			if (!uParam0->f_2)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_12(&(uParam0->f_5));
				if (uParam0->f_22C == 4)
				{
					func_34(&(uParam0->f_D));
				}
				else
				{
					func_12(&(uParam0->f_D));
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(150);
				}
				else
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(100);
				}
				GRAPHICS::SET_SEETHROUGH(true);
				if (uParam0->f_22C == 4)
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE((uParam0->f_38 - 1));
				}
				else
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_38);
				}
				GRAPHICS::SET_SEETHROUGH(bParam2);
				if (uParam0->f_22C == 4 || uParam0->f_22C == 3)
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(2);
				}
				else
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(69);
				}
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_38 > 0 && !uParam0->f_3) && uParam0->f_23C > 600)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_UP");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0.15f);
				GRAPHICS::SET_SEETHROUGH(true);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				uParam0->f_3 = 1;
			}
		}
		func_33();
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_230 * uParam0->f_22F) * (1f - uParam0->f_224));
	fVar3 = 0f;
	if (uParam0->f_237)
	{
		fVar3 = (((0.1388889f + func_37((2f * 2f))) * uParam0->f_238) * (1f - uParam0->f_224));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_224 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_1E >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_35());
	if (uParam0->f_C)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_22C != 4)
	{
		fVar7 = func_32(&(uParam0->f_D));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (GRAPHICS::_GET_ASPECT_RATIO(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_32(&(uParam0->f_226));
		fVar8 = (((0.119f + 0.05f) / func_35()) / 2.5f);
		if ((uParam0->f_22C == 1 || uParam0->f_22C == 0) && uParam0->f_22D != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_22C == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	PAD::SET_INPUT_EXCLUSIVE(2, 215);
	PAD::SET_INPUT_EXCLUSIVE(2, 216);
	PAD::SET_INPUT_EXCLUSIVE(2, 200);
	PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
	if (uParam0->f_232 || uParam0->f_237)
	{
		if ((IntToFloat(uParam0->f_22E) - (14000f * fParam1)) < IntToFloat(uParam0->f_23C) || ((uParam0->f_237 && uParam0->f_22F > 0.95f) && (uParam0->f_22E - 10000) < uParam0->f_23C))
		{
			if (uParam0->f_237)
			{
				if (uParam0->f_23A < 0)
				{
					uParam0->f_23A = (uParam0->f_23A * 4294967295);
					uParam0->f_23A = (uParam0->f_23C + uParam0->f_23A);
				}
				if (uParam0->f_23A > 0)
				{
					if ((uParam0->f_23A - uParam0->f_23C) > 0)
					{
						func_29((uParam0->f_23A - uParam0->f_23C), "TIMER_TIME", 0, 0, 4294967295, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						uParam0->f_23A = 0;
						uParam0->f_239 = 1;
						uParam0->f_237 = 0;
						uParam0->f_231 = 0;
						uParam0->f_232 = 0;
						uParam0->f_22E = uParam0->f_23C + 500;
						uParam0->f_23A = 0;
					}
				}
				if (uParam0->f_238 < 1f)
				{
					uParam0->f_238 = (uParam0->f_238 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_238 > 1f)
					{
						uParam0->f_238 = 1f;
					}
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_224 < 0.1f) && uParam0->f_23C <= uParam0->f_22E)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_237)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				PAD::DISABLE_CONTROL_ACTION(2, 188, 1);
				if (NETWORK::_0x5C497525F803486B(2, 188))
				{
					unk_0x1190AB7024CBD8CB(4294967295, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 3;
					uParam0->f_23A = 0;
					unk_0x1190AB7024CBD8CB(4294967295, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 187, 1);
				if (NETWORK::_0x5C497525F803486B(2, 187))
				{
					unk_0x1190AB7024CBD8CB(4294967295, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 4;
					uParam0->f_23A = 0;
					unk_0x1190AB7024CBD8CB(4294967295, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 202, 1);
				if (NETWORK::_0x5C497525F803486B(2, 202))
				{
					unk_0x1190AB7024CBD8CB(4294967295, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 2;
					uParam0->f_23A = 0;
					unk_0x1190AB7024CBD8CB(4294967295, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_232)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 215) || NETWORK::_0x5C497525F803486B(2, 200))
				{
					unk_0x1190AB7024CBD8CB(4294967295, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_232 = 0;
					uParam0->f_231 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					unk_0x1190AB7024CBD8CB(4294967295, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	HUD::GET_HUD_COLOUR(1, &iVar13, &iVar14, &iVar15, &iVar16);
	HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, iVar0);
	HUD::SET_TEXT_WRAP(fVar9, fVar10);
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, 0.4f);
	fVar1 = (fVar1 - func_37(6f));
	fVar1 = (fVar1 + (func_37(30f) - func_37((2f * 2f))));
	fVar11 = (fVar2 - func_37((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
		func_33();
		GRAPHICS::DRAW_RECT(0.5f, (fVar1 - (func_37((2f - 0.5f)) - 0.001388889f)), fVar6, func_28(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_37((2f * 0.3f)));
	if (uParam0->f_38 > 0)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_38)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_37(25f))), 0f, 1f);
			func_25(uParam0, iVar17, (fVar1 + func_37(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_37(25f));
		if (uParam0->f_22C == 4)
		{
			if (iVar17 == (uParam0->f_240 - 1))
			{
				fVar1 = (fVar1 + func_37((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_37(2f));
					fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
					func_33();
					GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_37((2f * 0.5f))), fVar6, func_28(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_37((2f * 0.3f)));
					if (uParam0->f_38 > 0)
					{
						fVar1 = (fVar1 + func_37((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_22C == 4)
	{
		return;
	}
	if (uParam0->f_38 > 0)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_37(2f));
			fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
			func_33();
			GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_37((2f * 0.5f))), fVar6, func_28(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_225)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_37(25f))), 0f, 1f);
			HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_18(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (UNK::_GET_CURRENT_LANGUAGE_ID() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_35()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_35()) / 2.5f));
				if (uParam0->f_22C == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_35()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_35()) / 2.5f));
				}
			}
			if (uParam0->f_22D == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_22C != 3)
			{
				HUD::SET_TEXT_WRAP(fVar20, fVar21);
				HUD::SET_TEXT_JUSTIFICATION(1);
			}
			else
			{
				fVar20 = 0.5f;
				HUD::SET_TEXT_JUSTIFICATION(0);
			}
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			func_17(&(uParam0->f_226), fVar20, (fVar1 + func_37((2f * 2f))), 0, 0, 0);
			HUD::SET_TEXT_WRAP(fVar20, fVar21);
			HUD::SET_TEXT_JUSTIFICATION(2);
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			HUD::SET_TEXT_CENTRE(0);
			func_33();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			HUD::SET_TEXT_WRAP(fVar20, fVar22);
			HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_22C)
			{
				case 0:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22A);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 1:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22A);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22B);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 2:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("MTPHPER_XPNO");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22A);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 5:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(uParam0->f_22A, 1);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_22D != 0)
			{
				iVar25 = 255;
				iVar26 = 255;
				iVar27 = 255;
				iVar28 = iVar0;
				switch (uParam0->f_22D)
				{
					case 1:
						HUD::GET_HUD_COLOUR(107, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 3:
						HUD::GET_HUD_COLOUR(109, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(108, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0.001388889f * 5f);
				fVar30 = ((0.00078125f * 16f) * 2f);
				fVar31 = ((0.001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_16(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_37(10f)) + fVar29);
				if (uParam0->f_22C == 4294967295)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				GRAPHICS::DRAW_SPRITE(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_37(30f) - 2f));
		}
	}
}

float func_16(float fParam0)//Position - 0x3581
{
	return (fParam0 * 0.00078125f);
}

void func_17(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x3591
{
	HUD::SET_TEXT_CENTRE(iParam3);
	HUD::SET_TEXT_FONT(iParam5);
	func_33();
	if (bParam4)
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam1, fParam2, 0);
}

int func_18(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x35CE
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_24(iParam0), 64);
	StringCopy(&cVar1, func_21(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_20())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_20())
			{
				fVar4 = 1f;
			}
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) > 0)
			{
				GRAPHICS::GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
		}
		vVar7 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_19(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_19(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_43D7.f_1ACF[29 /*16*/])) == 2807284209)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_43D6)
			{
				*fParam4 = (*fParam4 * (Global_43D6 / *fParam3));
				*fParam3 = Global_43D6;
			}
		}
		return 1;
	}
	return 0;
}

float func_19(int iParam0)//Position - 0x377F
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_20()//Position - 0x381E
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_21(int iParam0, bool bParam1)//Position - 0x3850
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_43D7.f_1ACF[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_43D7.f_1ACF[iParam0 /*16*/])) == 2807284209)
		{
			Var2 = { func_23(CAM::_0xDC9DA9E8789F5246()) };
			if (NETWORK::_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var2, &uVar1))
			{
				return func_22(&uVar1);
			}
		}
		else
		{
			return func_22(&(Global_43D7.f_1ACF[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 52:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_22(var uParam0)//Position - 0x3CBD
{
	return uParam0;
}

struct<13> func_23(int iParam0)//Position - 0x3CC7
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_24(int iParam0)//Position - 0x3CDE
{
	var uVar0;
	struct<13> Var1;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_43D7.f_177E[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_43D7.f_177E[iParam0 /*16*/])) == 2807284209)
		{
			Var1 = { func_23(CAM::_0xDC9DA9E8789F5246()) };
			NETWORK::_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var1, &uVar0);
			return func_22(&uVar0);
		}
		else
		{
			return func_22(&(Global_43D7.f_177E[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_25(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)//Position - 0x3D53
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iParam5);
	HUD::SET_TEXT_WRAP(fParam3, fParam4);
	HUD::SET_TEXT_JUSTIFICATION(1);
	HUD::SET_TEXT_SCALE(1f, func_27(14f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_FONT(0);
	func_33();
	if (uParam0->f_213[iParam1])
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_47[iParam1 /*16*/]));
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(uParam0->f_47[iParam1 /*16*/]));
		if (uParam0->f_39[iParam1] == 16 || uParam0->f_39[iParam1] == 17)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_1E9[iParam1]);
		}
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_205[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_18(7, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_21(7, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_18(5, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_21(5, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_18(6, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_21(6, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_39[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_39[iParam1] == 15)
	{
		HUD::SET_TEXT_JUSTIFICATION(1);
	}
	else
	{
		HUD::SET_TEXT_JUSTIFICATION(2);
	}
	HUD::SET_TEXT_SCALE(1f, func_27(14f));
	if (uParam0->f_39[iParam1] == 5 || uParam0->f_39[iParam1] == 4)
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iParam5);
	func_26(uParam0->f_1E9[iParam1], uParam0->f_1F7[iParam1], fParam4, fParam2, &(uParam0->f_118[iParam1 /*16*/]), uParam0->f_39[iParam1]);
}

void func_26(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)//Position - 0x3FDE
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_FONT(0);
	func_33();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			HUD::SET_TEXT_SCALE(1f, func_27(18f));
			HUD::SET_TEXT_FONT(4);
			if (iParam0 < 0)
			{
				HUD::_BEGIN_TEXT_COMMAND_WIDTH("ESMINDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((4294967295 * iParam0), 1);
				fVar1 = HUD::_END_TEXT_COMMAND_GET_WIDTH(0);
			}
			else
			{
				HUD::_BEGIN_TEXT_COMMAND_WIDTH("ESDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
				fVar1 = HUD::_END_TEXT_COMMAND_GET_WIDTH(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			HUD::SET_TEXT_SCALE(1f, func_27(14f));
			break;
	}
	HUD::_SET_NOTIFICATION_COLOR_NEXT(iVar0);
	switch (iParam5)
	{
		case 11:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 1:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_NUM");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 2:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 4:
		case 5:
			HUD::SET_TEXT_SCALE(1f, func_27(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESMINDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((4294967295 * iParam0), 1);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
			}
			break;
		
		case 6:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
		
		case 7:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
			break;
		
		case 8:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 14);
			break;
		
		case 9:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 6);
			break;
		
		case 10:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 18:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 12:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("AHD_DIST");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 13:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 15:
		case 14:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 16:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			HUD::SET_TEXT_SCALE(1f, func_27(14f));
		}
		else
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
		}
	}
}

float func_27(float fParam0)//Position - 0x435B
{
	return (fParam0 * 0.025f);
}

float func_28(float fParam0)//Position - 0x436B
{
	return (fParam0 * 0.0009259259f);
}

void func_29(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x437B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_31(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_30(7, iVar0);
		Global_14E696.f_112F[iVar0] = iParam0;
		StringCopy(&(Global_14E696.f_112F.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14E696.f_112F.f_AC[iVar0] = iParam2;
		Global_14E696.f_112F.f_D8[iVar0] = iParam3;
		Global_14E696.f_112F.f_B7[iVar0] = iParam4;
		Global_14E696.f_112F.f_C2[iVar0] = iParam5;
		Global_14E696.f_112F.f_F9[iVar0] = iParam6;
		Global_14E696.f_112F.f_104[iVar0] = iParam7;
		Global_14E696.f_112F.f_CD[iVar0] = iParam8;
		Global_14E696.f_112F.f_13A[iVar0] = iParam9;
		Global_14E696.f_112F.f_145[iVar0] = iParam10;
		Global_14E696.f_112F.f_165[iVar0] = iParam11;
		Global_14E696.f_112F.f_EE[iVar0] = iParam12;
		Global_14E696.f_112F.f_10F[iVar0] = iParam13;
		Global_14E696.f_112F.f_170[iVar0] = iParam14;
		Global_14E696.f_112F.f_17B[iVar0] = iParam15;
		Global_14E696.f_112F.f_186[iVar0] = iParam16;
	}
}

void func_30(int iParam0, int iParam1)//Position - 0x44C9
{
	MISC::SET_BIT(&(Global_14E696.f_17F2[iParam0]), iParam1);
}

bool func_31(int iParam0, int iParam1)//Position - 0x44E2
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E696.f_17F2[iParam0], iParam1);
}

float func_32(char* sParam0)//Position - 0x44FB
{
	HUD::_BEGIN_TEXT_COMMAND_WIDTH(sParam0);
	return (HUD::_END_TEXT_COMMAND_GET_WIDTH(1) / 2f);
}

void func_33()//Position - 0x4510
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	}
	unk_0x6AEB48E3B648804A(0);
}

void func_34(char* sParam0)//Position - 0x4538
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

float func_35()//Position - 0x4546
{
	float fVar0;
	
	fVar0 = 1f;
	if (MISC::IS_PC_VERSION())
	{
	}
	return fVar0;
}

void func_36(int iParam0)//Position - 0x455A
{
	Global_11729 = iParam0;
	Global_1172A = iParam0;
}

float func_37(float fParam0)//Position - 0x456E
{
	return (fParam0 * 0.001388889f);
}

void func_38(int iParam0)//Position - 0x457E
{
	if (func_40())
	{
		return;
	}
	if (!Global_38B1.f_1 == 1)
	{
		if (func_39(0))
		{
			func_422(iParam0);
		}
		MISC::SET_BIT(&Global_950, 2);
	}
}

int func_39(int iParam0)//Position - 0x45B1
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

bool func_40()//Position - 0x460B
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

void func_41(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x461D
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
	}
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (!iLocal_191)
		{
			if (func_208(uParam1, 0, &iLocal_192))
			{
				func_326(&(uParam1->f_29A), 9, 0);
				iLocal_191 = 1;
			}
		}
	}
	if (iLocal_173)
	{
		if (PAD::_IS_INPUT_DISABLED(2))
		{
			HUD::_SHOW_CURSOR_THIS_FRAME();
		}
		bVar1 = true;
		if (uParam1->f_2A8)
		{
			if (!uParam1->f_286 && !PLAYER::IS_PLAYER_ONLINE())
			{
				uParam1->f_286 = func_199(&(uParam1->f_287), 0);
				bVar1 = false;
				if (uParam1->f_286)
				{
					uParam1->f_2A8 = 0;
					func_326(&(uParam1->f_29A), 9, 0);
					uParam1->f_286 = 0;
				}
			}
			else
			{
				func_121(&(uParam1->f_48), &(uParam1->f_285));
			}
			if (bVar1)
			{
				func_117(&(uParam1->f_1FD), 1128792064, 1, 0, 1, 1065353216);
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
				{
					uParam1->f_2A8 = 0;
					func_326(&(uParam1->f_29A), 9, 0);
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 215))
				{
					iVar0 = 2;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 216))
				{
					iVar0 = 1;
				}
			}
			if (func_116(&(uParam1->f_48)))
			{
				if (!bLocal_193)
				{
					bLocal_193 = true;
					func_115(&(uParam1->f_1FD), 0, 0, 1, 1);
					func_114(&(uParam1->f_1FD), "DARTS_CONT", 2, 215, 1, 1, 0);
					func_114(&(uParam1->f_1FD), "DARTS_REMATCH", 2, 216, 1, 1, 0);
					func_114(&(uParam1->f_1FD), "IB_BACK", 2, 202, 1, 1, 0);
					func_114(&(uParam1->f_1FD), "SCLB_PROFILE", 2, 217, 1, 1, 0);
					func_111(&(uParam1->f_1FD), 1);
				}
			}
		}
		else
		{
			iVar0 = func_104(uParam1, 0, 0, iLocal_191);
			func_10(uParam3, 0, 1065353216, 0, 0, 0);
		}
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_200) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_200) >= 0.995f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_200))
		{
			bLocal_186 = true;
			if (CAM::DOES_CAM_EXIST(iLocal_206))
			{
				CAM::DESTROY_CAM(iLocal_206, 0);
				if (!PED::IS_PED_INJURED(iLocal_170[0]) && !PED::IS_PED_INJURED(iLocal_170[1]))
				{
					BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_170[0]);
					BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_170[1]);
					MISC::_0x1327E2FE9746BAEE(iLocal_170[0], 0, 0);
					MISC::_0x1327E2FE9746BAEE(iLocal_170[1], 0, 0);
				}
			}
			func_103();
		}
		if (func_418(&(uParam0->f_FE)) > 2f)
		{
			if (!iLocal_184)
			{
				if (uParam0->f_1C6)
				{
					if ((uParam0->f_1B5[0] + uParam0->f_1B5[1]) == 1)
					{
						iVar2 = 1;
					}
					else
					{
						iVar2 = 0;
					}
					func_234(&iLocal_170, iVar2);
				}
				else
				{
					func_233(&iLocal_170);
				}
				iLocal_184 = 1;
			}
		}
		if (iVar0 == 1)
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			AUDIO::STOP_AUDIO_SCENE(func_409(3));
			if (!PED::IS_PED_INJURED(iLocal_170[0]) && !PED::IS_PED_INJURED(iLocal_170[1]))
			{
				BRAIN::TASK_CLEAR_LOOK_AT(iLocal_170[0]);
				BRAIN::TASK_CLEAR_LOOK_AT(iLocal_170[1]);
			}
			func_102(uParam3);
			if (bParam4)
			{
				func_338(uParam2, 0, 0, 0, 0);
			}
			uParam0->f_1AD[0] = 0;
			uParam0->f_1AD[1] = 0;
			uParam0->f_1B0[0] = 0;
			uParam0->f_1B0[1] = 0;
			iLocal_30 = 1;
			func_416(&(uParam0->f_FE));
			*uParam0 = 9;
			iLocal_184 = 0;
			iLocal_182 = 0;
			bLocal_186 = false;
			func_99();
			iLocal_191 = 0;
			iLocal_166 = 0;
			uParam1->f_2A8 = 0;
			iLocal_192 = 0;
			bLocal_193 = false;
			func_91(&(uParam1->f_48), 0);
			func_452();
		}
		else if (iVar0 == 2)
		{
			func_90(uParam3);
			AUDIO::STOP_AUDIO_SCENE(func_409(3));
			if (uParam0->f_1BE[0] * 10 > 0)
			{
				func_53(func_86(), 21, uParam0->f_1BE[0] * 10, 0, 0);
			}
			HUD::CLEAR_PRINTS();
			*uParam0 = 13;
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(0, 234) || PAD::IS_CONTROL_JUST_PRESSED(0, 235)) && uParam0->f_F8 == 1) && bVar1)
		{
			uParam0->f_1C9 = 0;
			if (iLocal_172)
			{
				vVar3 = { unk_0x8000C77B5F336760(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], true) };
				func_52(vVar3, 0, iLocal_172);
				iLocal_172 = 0;
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
			{
				iLocal_195++;
				if (iLocal_195 >= uParam0->f_1B4)
				{
					iLocal_195 = 0;
				}
				vVar3 = { unk_0x8000C77B5F336760(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], true) };
				func_50(vVar3);
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
			{
				iLocal_195 = (iLocal_195 - 1);
				if (iLocal_195 < 0)
				{
					iLocal_195 = (uParam0->f_1B4 - 1);
				}
				vVar3 = { unk_0x8000C77B5F336760(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], true) };
				func_50(vVar3);
			}
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(0, 211) || NETWORK::_0x5C497525F803486B(0, 211)) && bVar1) && (iLocal_191 || !PLAYER::IS_PLAYER_ONLINE()))
		{
			uParam1->f_2A8 = 1;
			func_115(&(uParam1->f_1FD), 0, 0, 1, 1);
			func_114(&(uParam1->f_1FD), "DARTS_CONT", 2, 215, 1, 1, 0);
			func_114(&(uParam1->f_1FD), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			func_114(&(uParam1->f_1FD), "IB_BACK", 2, 202, 1, 1, 0);
			if (bLocal_193)
			{
				func_114(&(uParam1->f_1FD), "SCLB_PROFILE", 2, 217, 1, 1, 0);
			}
			func_111(&(uParam1->f_1FD), 1);
		}
	}
	else if (!uParam0->f_1C9)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		HUD::CLEAR_PRINTS();
		func_46(uParam3, uParam0->f_1C6, uParam0->f_1AD[iLocal_30], uParam0->f_1B0[iLocal_30], iLocal_106[2], uParam0->f_1B5[0], uParam0->f_1B5[1], uParam0->f_1B8[0], uParam0->f_1B8[1], uParam0->f_1BB[0], uParam0->f_1BB[1], bParam4);
		fVar4 = GRAPHICS::_GET_ASPECT_RATIO(1);
		if (fVar4 > 2f)
		{
			vVar5 = { 1992.294f, 3047.577f, 46.21517f };
			vVar6 = { 0f, 0f, 138.74f };
		}
		else
		{
			vVar5 = { 1992.336f, 3047.924f, 46.21517f };
			vVar6 = { 0f, 0f, 136.74f };
		}
		iVar7 = func_235();
		iLocal_200 = PED::CREATE_SYNCHRONIZED_SCENE(vVar5, vVar6, 2);
		iLocal_206 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_206, iLocal_200, sLocal_259[iVar7], "mini@dartsoutro");
		CAM::SET_CAM_ACTIVE(iLocal_206, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
		if (!PED::IS_PED_INJURED(iLocal_170[0]) && !PED::IS_PED_INJURED(iLocal_170[1]))
		{
			if (uParam0->f_1C6)
			{
				BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_170[0], iLocal_200, "mini@dartsoutro", sLocal_257[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_170[1], iLocal_200, "mini@dartsoutro", sLocal_258[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				BRAIN::TASK_PLAY_ANIM(AUDIO::_0x0626A247D2405330(), sLocal_255, sLocal_256[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, 4294967295, 32, 0, 0, 0, 0);
			}
			else
			{
				BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_170[1], iLocal_200, "mini@dartsoutro", sLocal_257[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_170[0], iLocal_200, "mini@dartsoutro", sLocal_258[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				BRAIN::TASK_PLAY_ANIM(iLocal_170[1], sLocal_254, sLocal_256[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, 4294967295, 32, 0, 0, 0, 0);
			}
		}
		bLocal_186 = false;
		uParam0->f_1C9 = 1;
		uParam1->f_29F = MISC::GET_GAME_TIMER();
		iVar8 = 0;
		while (iVar8 < 2)
		{
			iVar9 = 0;
			while (iVar9 < 3)
			{
				func_239(&(uParam0->f_5[iVar8 /*79*/][iVar9 /*26*/]));
				iVar9++;
			}
			func_238(uParam2, iVar8);
			iVar8++;
		}
	}
	else if ((MISC::GET_GAME_TIMER() - uParam1->f_29F) > 400 && func_42(uParam3, 0, 0))
	{
		if (!uParam0->f_1C6)
		{
			unk_0x1190AB7024CBD8CB(4294967295, "LOOSE_MATCH", "HUD_MINI_GAME_SOUNDSET", 1);
		}
		iLocal_173 = 1;
	}
}

int func_42(var uParam0, bool bParam1, int iParam2)//Position - 0x4DE1
{
	uParam0->f_C = iParam2;
	func_45(uParam0);
	func_44(uParam0);
	if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_226), "SPR_RESULT") || (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_226), "") && uParam0->f_38 > 0))
	{
		uParam0->f_236 = 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		unk_0xE2BBD32891C18569("MPHud", false);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0xE2BBD32891C18569("CommonMenu", false);
		unk_0xE2BBD32891C18569("MPLeaderboard", false);
		unk_0xE2BBD32891C18569("MPHud", false);
		uParam0->f_1 = unk_0x9934FEFB3B8C6DB8("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			SYSTEM::WAIT(0);
		}
		if (uParam0->f_232 || uParam0->f_237)
		{
			while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		if (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_232)
		{
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_232)
	{
		if (uParam0->f_237)
		{
			func_43(uParam0);
		}
		else if (uParam0->f_38 != 0)
		{
			func_11(uParam0, 1);
		}
		else
		{
			func_11(uParam0, 0);
		}
	}
	Global_1172A = 1;
	return 1;
}

void func_43(var uParam0)//Position - 0x4F81
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SET_SEETHROUGH(true);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(2);
	func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 188, true));
	func_12("ES_HELP_TU");
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
	func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 187, true));
	func_12("ES_HELP_TD");
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
	func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, true));
	func_12("ES_HELP_AB");
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_44(var uParam0)//Position - 0x5046
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, func_27(16f));
	if (uParam0->f_1F == 0)
	{
		if (uParam0->f_1D)
		{
			HUD::_BEGIN_TEXT_COMMAND_WIDTH("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_D));
			fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
		}
		else
		{
			HUD::_BEGIN_TEXT_COMMAND_WIDTH(&(uParam0->f_D));
			fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
		}
	}
	else
	{
		HUD::_BEGIN_TEXT_COMMAND_WIDTH("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_1F)
		{
			switch (uParam0->f_20[iVar3])
			{
				case 0:
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_35[iVar1]);
					iVar1++;
					break;
				
				case 1:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam0->f_24[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_24[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_45(var uParam0)//Position - 0x514E
{
	uParam0->f_223 = 1f;
	uParam0->f_222 = 0;
	uParam0->f_238 = 0f;
	uParam0->f_22E = 0;
	uParam0->f_1E = 0f;
	uParam0->f_224 = 0f;
	uParam0->f_22F = 0f;
	uParam0->f_230 = 0f;
	uParam0->f_221 = 0;
	uParam0->f_233 = 0;
	uParam0->f_23C = 0;
	uParam0->f_234 = 0;
	uParam0->f_235 = 0;
	uParam0->f_236 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_23E = 0;
	uParam0->f_23F = 0;
	uParam0->f_23D = 1f;
}

void func_46(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x51CD
{
	uParam0->f_231 = 1;
	if (bParam1)
	{
		func_49(uParam0, "DARTS_WINNER", "DARTS_YJ", 0);
	}
	else
	{
		func_49(uParam0, "DARTS_LOSE_R", "DARTS_YJ", 0);
	}
	func_48(uParam0, 1, "DARTS_NUM_T", "", uParam2, 0, 0, 0);
	func_48(uParam0, 1, "DARTS_NUM_B", "", uParam3, 0, 0, 0);
	func_48(uParam0, 1, "DARTS_NUM_180", "", uParam4, 0, 0, 0);
	if (bParam11)
	{
		func_48(uParam0, 2, "DARTS_WIN", "", iParam5, (iParam5 + iParam6), 0, 0);
		func_48(uParam0, 2, "DARTS_SWIN", "", iParam7, (iParam7 + iParam8), 0, 0);
	}
	func_48(uParam0, 2, "DARTS_GWIN", "", iParam9, (iParam9 + iParam10), 0, 0);
	func_47(uParam0, 0, "", 0, 0, 0, 0, 0);
	func_36(1);
}

void func_47(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x529F
{
	uParam0->f_225 = iParam1;
	StringCopy(&(uParam0->f_226), sParam2, 16);
	uParam0->f_22A = iParam3;
	uParam0->f_22B = iParam4;
	uParam0->f_22C = iParam5;
	uParam0->f_22D = iParam6;
	uParam0->f_240 = iParam7;
}

void func_48(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7)//Position - 0x52DA
{
	int iVar0;
	
	if (uParam0->f_38 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_38;
	uParam0->f_39[iVar0] = iParam1;
	StringCopy(&(uParam0->f_47[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_118[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_1E9[iVar0] = uParam4;
	uParam0->f_1F7[iVar0] = iParam5;
	uParam0->f_205[iVar0] = iParam6;
	uParam0->f_213[iVar0] = iParam7;
	uParam0->f_38++;
}

void func_49(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x534D
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_D), sParam2, 64);
	uParam0->f_1D = iParam3;
	uParam0->f_B = 0;
}

void func_50(vector3 vParam0)//Position - 0x5370
{
	vector3 vVar0;
	
	vVar0 = { func_51(vParam0) };
	if (bLocal_88)
	{
		CAM::SET_CAM_COORD(iLocal_86, vVar0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_86, iLocal_85, 500, 1, 1);
		bLocal_88 = false;
	}
	else
	{
		CAM::SET_CAM_COORD(iLocal_85, vVar0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_85, iLocal_86, 500, 1, 1);
		bLocal_88 = true;
	}
}

Vector3 func_51(vector3 vParam0)//Position - 0x53C0
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 0.3495f, -0.0276f, -0.0114f };
	vVar0 = { vParam0 - vVar1 };
	return vVar0;
}

void func_52(vector3 vParam0, bool bParam1, bool bParam2)//Position - 0x53EC
{
	vector3 vVar0;
	
	vVar0 = { func_51(vParam0) };
	if (bParam1)
	{
		CAM::SET_CAM_COORD(iLocal_85, vVar0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_85, iLocal_84, 1500, 1, 1);
		CAM::SET_CAM_ACTIVE(iLocal_84, false);
		CAM::SET_CAM_COORD(iLocal_86, vVar0);
		bLocal_88 = true;
	}
	else if (bParam2)
	{
		CAM::SET_CAM_COORD(iLocal_85, vVar0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_85, iLocal_77, 2000, 1, 1);
		bLocal_88 = true;
	}
	else
	{
		if (bLocal_88)
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_84, iLocal_85, 1500, 1, 1);
		}
		else
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_84, iLocal_86, 1500, 1, 1);
		}
		CAM::SET_CAM_ACTIVE(iLocal_85, false);
	}
}

void func_53(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x547E
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
	func_54(Global_19E56.f_6D76[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
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

int func_54(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x5565
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_85();
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
					func_84(99, 1);
					func_83(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_83(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_83(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_67(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_63(5))
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
							func_83(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_83(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_83(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_63(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_83(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_83(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_83(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_83(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_83(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_83(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_83(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_83(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_83(joaat("sp2_money_spent_property"), iParam3);
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
									func_83(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_83(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_83(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_83(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_83(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_83(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_63(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_83(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_83(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_83(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_83(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_83(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_83(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_62(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_84(95, iParam3);
					break;
				
				case 1:
					func_84(97, iParam3);
					break;
				
				case 2:
					func_84(96, iParam3);
					break;
			}
			func_84(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_57(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_57(iVar1);
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
					func_83(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_83(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_83(joaat("sp2_total_cash_earned"), iParam3);
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
	func_56(iParam0);
	if (Global_8D15 == 15)
	{
		func_55(0);
	}
	return 1;
}

void func_55(bool bParam0)//Position - 0x5B64
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

void func_56(int iParam0)//Position - 0x5DE6
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

void func_57(int iParam0)//Position - 0x5E40
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
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_5038.f_1D7, iParam0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_200000[func_59() /*12745*/].f_1FF2.f_A, iParam0))
	{
		bVar0 = true;
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_5038.f_1D7), iParam0);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_200000[func_59() /*12745*/].f_1FF2.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_58(iParam0));
		HUD::_SET_NOTIFICATION_MESSAGE(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_58(int iParam0)//Position - 0x5F53
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

int func_59()//Position - 0x6002
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_60(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x600F
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
		iParam2 = func_61();
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

int func_61()//Position - 0x6577
{
	return Global_1407E0;
}

void func_62(int iParam0)//Position - 0x6583
{
	func_84(93, iParam0);
	func_84(29, iParam0);
	func_84(30, iParam0);
}

bool func_63(int iParam0)//Position - 0x65A3
{
	if (iParam0 == 8)
	{
		return func_64(129, 4294967295, 4294967295);
	}
	if (iParam0 == 9)
	{
		return func_64(135, 4294967295, 4294967295);
	}
	if (iParam0 == 10)
	{
		return func_64(136, 4294967295, 4294967295);
	}
	if (iParam0 == 11)
	{
		return func_64(137, 4294967295, 4294967295);
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_5038.f_1D7, iParam0);
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_200000[func_59() /*12745*/].f_1FF2.f_A, iParam0);
}

int func_64(int iParam0, int iParam1, int iParam2)//Position - 0x6627
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_61();
	}
	iVar1 = func_66(iParam0, iParam1);
	uVar2 = func_65(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_65(int iParam0)//Position - 0x6664
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

int func_66(int iParam0, int iParam1)//Position - 0x697C
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_61();
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

int func_67(bool bParam0)//Position - 0x6C74
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
		func_82(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_68(27, 1);
	return 1;
}

int func_68(int iParam0, int iParam1)//Position - 0x6D2B
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_69(iParam0, iParam1);
}

int func_69(int iParam0, int iParam1)//Position - 0x6D46
{
	if (func_81(14) && !func_80(iParam0))
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
	if (func_79(&Global_412216))
	{
		if (func_77(&Global_412216, iParam0))
		{
			return 0;
		}
		if (func_70(&Global_412216, iParam0))
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

int func_70(var uParam0, int iParam1)//Position - 0x6DE3
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_81(14) && !func_80(iParam1))
	{
		return 0;
	}
	if (func_77(uParam0, iParam1))
	{
		return 0;
	}
	if (func_76(uParam0) < 0f)
	{
		func_75(uParam0, 0);
	}
	func_73(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_71(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_71(var uParam0, int iParam1)//Position - 0x6E94
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_81(14) && !func_80(iParam1))
	{
		return 0;
	}
	if (func_77(uParam0, iParam1))
	{
		return 0;
	}
	if (func_76(uParam0) < 0f)
	{
		func_75(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_72(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_72(var uParam0, int iParam1)//Position - 0x6F0F
{
	return (*uParam0)[iParam1] == 78;
}

void func_73(var uParam0)//Position - 0x6F20
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_74(uParam0, iVar0);
		iVar0++;
	}
	func_75(uParam0, (Global_412215 - 0.5f));
}

void func_74(var uParam0, int iParam1)//Position - 0x6F54
{
	(*uParam0)[iParam1] = 78;
}

void func_75(var uParam0, float fParam1)//Position - 0x6F64
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

float func_76(var uParam0)//Position - 0x6F81
{
	return uParam0->f_50;
}

bool func_77(var uParam0, int iParam1)//Position - 0x6F8D
{
	return func_78(uParam0, iParam1) != 4294967295;
}

int func_78(var uParam0, int iParam1)//Position - 0x6F9F
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

bool func_79(var uParam0)//Position - 0x6FCC
{
	return uParam0->f_4F == 1;
}

int func_80(int iParam0)//Position - 0x6FDA
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

bool func_81(int iParam0)//Position - 0x702A
{
	return Global_8D15 == iParam0;
}

int func_82(int iParam0, int iParam1)//Position - 0x7038
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

void func_83(int iParam0, int iParam1)//Position - 0x7089
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, 4294967295);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_84(int iParam0, int iParam1)//Position - 0x70AC
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

void func_85()//Position - 0x7109
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

int func_86()//Position - 0x717E
{
	func_87();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_87()//Position - 0x7197
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_89(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_493(AUDIO::_0x0626A247D2405330());
			if (func_88(iVar0) && (!func_81(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_88(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_88(int iParam0)//Position - 0x7294
{
	return iParam0 < 3;
}

int func_89(int iParam0)//Position - 0x72A0
{
	if (func_88(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_90(var uParam0)//Position - 0x72CA
{
	if (uParam0->f_231 || uParam0->f_23C <= uParam0->f_22E)
	{
		uParam0->f_231 = 0;
		uParam0->f_22E = (uParam0->f_23C - 1);
	}
}

void func_91(var uParam0, int iParam1)//Position - 0x72FD
{
	if (uParam0->f_4 != 0)
	{
		func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
	}
	if ((((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0) || iParam1 == 1)
	{
		func_97(uParam0);
		func_96(uParam0);
		func_95(&Global_1C126B);
	}
	if (Global_1C0180.f_A94 != 0 || Global_1C0180.f_C70)
	{
		func_93();
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("LEADERBOARD_SCENE");
	}
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_92(&(Global_1C171C.f_31));
	}
	Global_26862F.f_F72 = 0;
}

void func_92(var uParam0)//Position - 0x73A8
{
	uParam0->f_1 = 0;
}

void func_93()//Position - 0x73B5
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_3C = 6;
	Var2.f_43 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1C0180[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_1C0180.f_A90[iVar0] = 0;
		iVar0++;
	}
	Global_1C0180.f_A94 = 0;
	Global_1C0180.f_A95 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1C0180.f_A96[iVar0] = 0;
		StringCopy(&(Global_1C0180.f_A9D[iVar0 /*6*/]), "", 24);
		Global_1C0180.f_AC2[iVar0] = 0;
		Global_1C0180.f_AC9[iVar0] = 0;
		iVar0++;
	}
	Global_1C0180.f_AD0 = 0;
	Global_1C0180.f_AD1 = 0;
	Global_1C0180.f_AD2 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1C0180.f_AD3[iVar0] = 0;
		Global_1C0180.f_AD7[iVar0] = 0;
		iVar0++;
	}
	Global_1C0180.f_ADB = 0;
	func_94(&(Global_1C0180.f_ADC));
	func_92(&(Global_1C0180.f_B07));
	Global_1C0180.f_B09 = 4294967295;
	Global_1C0180.f_B0A = 0;
	func_92(&(Global_1C0180.f_B0B));
	Global_1C0180.f_B0D = 0;
	func_92(&(Global_1C0180.f_B0E));
	Global_1C0180.f_B10 = 0;
	Global_1C0180.f_ADC.f_1C = 0;
	Global_1C0180.f_ADC.f_1B = 0;
	Global_1C0180.f_C70 = 0;
}

void func_94(var uParam0)//Position - 0x7521
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_19 = 1;
	uParam0->f_1A = 0;
	uParam0->f_1B = 0;
	uParam0->f_1C = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1D[iVar0] = 0;
		uParam0->f_24[iVar0] = 0;
		iVar0++;
	}
}

void func_95(var uParam0)//Position - 0x7579
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 12)
	{
		StringCopy(uParam0[iVar1 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar1 /*100*/])->f_10), "", 64);
		(uParam0[iVar1 /*100*/])->f_20 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_2D = { Var0 };
		(uParam0[iVar1 /*100*/])->f_3A = 0;
		(uParam0[iVar1 /*100*/])->f_3B = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			(uParam0[iVar1 /*100*/])->f_3C[iVar2] = 0f;
			(uParam0[iVar1 /*100*/])->f_43[iVar2] = 0;
			iVar2++;
		}
		(uParam0[iVar1 /*100*/])->f_4B = 0;
		(uParam0[iVar1 /*100*/])->f_4A = 0;
		(uParam0[iVar1 /*100*/])->f_4C = 0;
		(uParam0[iVar1 /*100*/])->f_4D = 0;
		(uParam0[iVar1 /*100*/])->f_4E = 0;
		(uParam0[iVar1 /*100*/])->f_4F = 0;
		StringCopy(&((uParam0[iVar1 /*100*/])->f_50), "", 16);
		iVar1++;
	}
	func_92(&(Global_1C0180.f_B0E));
}

void func_96(var uParam0)//Position - 0x765B
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_F6 = 0;
	uParam0->f_F6.f_1 = 4294967295;
	uParam0->f_F6.f_2 = 0;
	func_92(&(uParam0->f_F6.f_3));
	uParam0->f_F6.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_F6.f_6[iVar0 /*15*/] = 4294967295;
		uParam0->f_F6.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_F6.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_F6.f_BB[iVar0] = 0;
		iVar0++;
	}
}

void func_97(var uParam0)//Position - 0x76E3
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_2A = 0;
	uParam0->f_2B = 0;
	uParam0->f_2C = 0;
	uParam0->f_2C.f_1 = 0;
	uParam0->f_2C.f_2 = 0;
	uParam0->f_2C.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_2C.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_2C.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_71[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_71[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_71[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

void func_98(var uParam0, var uParam1, var uParam2)//Position - 0x77B1
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1C0000 = 0;
	func_92(&(Global_1C0000.f_1));
	STATS::LEADERBOARDS_READ_CLEAR(*uParam2, uParam2->f_1, 4294967295);
}

void func_99()//Position - 0x77DD
{
	struct<68> Var0;
	
	Global_1C0005 = 0;
	Global_1C0005.f_1 = 0;
	Global_1C0005.f_2 = 0;
	Global_1C0005.f_3 = 0;
	Global_1C0005.f_4 = 0;
	func_101(&(Global_1C0005.f_49));
	func_101(&(Global_1C0005.f_8E));
	func_101(&(Global_1C0005.f_D3));
	func_101(&(Global_1C0005.f_118));
	StringCopy(&(Global_1C0005.f_15D), "", 24);
	StringCopy(&(Global_1C0005.f_163), "", 24);
	func_100(&(Global_1C0005.f_169));
	Global_1C0005.f_176 = 4294967295;
	Global_1C017C = 0;
	Global_1C017D = 0;
	Var0.f_2.f_1 = 4;
	Global_1C0005.f_5 = { Var0 };
}

void func_100(var uParam0)//Position - 0x7881
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 0;
}

void func_101(var uParam0)//Position - 0x78C9
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_24[iVar0] = 0;
		iVar0++;
	}
}

void func_102(var uParam0)//Position - 0x7904
{
	func_45(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

void func_103()//Position - 0x792E
{
	CAM::SET_CAM_ACTIVE(iLocal_81, true);
}

int func_104(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x793D
{
	if (!func_3(&(uParam0->f_29A), 7))
	{
		if (!func_3(&(uParam0->f_29A), 9))
		{
			func_36(1);
			func_115(&(uParam0->f_1FD), 0, 0, 1, 1);
			func_114(&(uParam0->f_1FD), "DARTS_CONT", 2, 215, 1, 1, 0);
			if (!bParam2)
			{
				func_114(&(uParam0->f_1FD), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			}
			else
			{
				func_114(&(uParam0->f_1FD), "DARTS_REPLAY", 2, 216, 1, 1, 0);
			}
			if (iParam3 || !PLAYER::IS_PLAYER_ONLINE())
			{
				func_114(&(uParam0->f_1FD), "HUD_LBD_LBD", 2, 211, 1, 1, 0);
			}
			func_111(&(uParam0->f_1FD), 1);
			func_326(&(uParam0->f_29A), 8, 0);
			func_326(&(uParam0->f_29A), 9, 1);
		}
		if (!func_3(&(uParam0->f_29A), 14))
		{
			if (bParam1)
			{
				if (!bParam2)
				{
					func_107(func_110(uParam0->f_29C < uParam0->f_29D, uParam0->f_29C, uParam0->f_29D), func_109(uParam0->f_29C < uParam0->f_29D, &(uParam0->f_288), &(uParam0->f_28E)), 4294967295, 1, 2, 1, 0, 1, 0, 0, 0, 0);
					func_107(func_110(uParam0->f_29C >= uParam0->f_29D, uParam0->f_29C, uParam0->f_29D), func_109(uParam0->f_29C >= uParam0->f_29D, &(uParam0->f_288), &(uParam0->f_28E)), 4294967295, 1, 2, 1, 0, 1, 0, 0, 0, 0);
				}
				else
				{
					func_107(uParam0->f_29C, &(uParam0->f_288), 4294967295, 1, 2, 1, 0, 1, 0, 0, 0, 0);
				}
				func_405(&(uParam0->f_39), 0, 0);
			}
			func_117(&(uParam0->f_1FD), 1128792064, 1, 0, 1, 1065353216);
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if ((MISC::GET_GAME_TIMER() - uParam0->f_29F) > 900)
			{
				if (PAD::IS_CONTROL_PRESSED(2, 216))
				{
					unk_0x1190AB7024CBD8CB(4294967295, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_326(&(uParam0->f_29A), 9, 0);
					return 1;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 215))
				{
					unk_0x1190AB7024CBD8CB(4294967295, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_106();
					func_105();
					return 2;
				}
			}
		}
	}
	else
	{
		func_2(uParam0);
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
		{
			return 2;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
		{
			func_326(&(uParam0->f_29A), 9, 0);
			func_326(&(uParam0->f_29A), 7, 0);
		}
	}
	return 0;
}

void func_105()//Position - 0x7B78
{
	if (Global_252F9E.f_A90[0 /*80*/].f_2 != 0)
	{
		Global_252F9E.f_A90[0 /*80*/].f_2 = 5;
	}
}

void func_106()//Position - 0x7B9D
{
	Global_6403 = 1;
}

void func_107(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x7BA9
{
	int iVar0;
	int iVar1;
	
	if (func_108(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_31(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_30(3, iVar0);
		Global_14E696.f_A4A[iVar0] = iParam0;
		StringCopy(&(Global_14E696.f_A4A.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14E696.f_A4A.f_B7[iVar0] = iParam3;
		Global_14E696.f_A4A.f_AC[iVar0] = iParam2;
		Global_14E696.f_A4A.f_CD[iVar0] = iParam4;
		Global_14E696.f_A4A.f_D8[iVar0] = iParam5;
		StringCopy(&(Global_14E696.f_A4A.f_103[iVar0 /*16*/]), sParam6, 64);
		Global_14E696.f_A4A.f_1A4[iVar0] = iParam7;
		Global_14E696.f_A4A.f_1C5[iVar0] = iParam8;
		Global_14E696.f_A4A.f_1AF[iVar0] = iParam9;
		Global_14E696.f_A4A.f_1BA[iVar0] = iParam10;
		Global_14E696.f_A4A.f_1D0[iVar0] = iParam11;
	}
}

int func_108(char* sParam0)//Position - 0x7CBB
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

char* func_109(bool bParam0, char* sParam1, char* sParam2)//Position - 0x7CF5
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_110(bool bParam0, int iParam1, int iParam2)//Position - 0x7D0C
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_111(var uParam0, bool bParam1)//Position - 0x7D23
{
	if (bParam1)
	{
		func_113(&(uParam0->f_1), 1024);
	}
	else
	{
		func_112(&(uParam0->f_1), 1024);
	}
}

void func_112(var uParam0, int iParam1)//Position - 0x7D49
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_113(var uParam0, int iParam1)//Position - 0x7D5E
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_114(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x7D6F
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
	iVar1 = uParam0->f_7B;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_C = 0;
		uParam0->f_2[iVar1 /*15*/].f_D = 0;
		uParam0->f_2[iVar1 /*15*/].f_E = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_2[iVar1 /*15*/].f_D), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_E++;
		uParam0->f_7B++;
		return 1;
	}
	return 0;
}

void func_115(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x7E38
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_7B = 0;
	if (bParam1)
	{
		func_113(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_113(&(uParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (bParam3)
		{
			func_113(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_113(&(uParam0->f_1), 8192);
	}
}

int func_116(var uParam0)//Position - 0x7EB2
{
	if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2A, 1) && Global_1C0180.f_A90[0] > 0) && uParam0->f_F6.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_117(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x7EE9
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || MISC::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_120(uParam0))
	{
		return;
	}
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	if (!func_119(uParam0->f_1, 256) || (func_119(uParam0->f_1, 8192) && PAD::_0x6CD79468A1E595C6(2)))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam1);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam5);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SET_SEETHROUGH(func_119(uParam0->f_1, 4096));
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_7B)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = PAD::_IS_INPUT_DISABLED(2);
					break;
				
				case 2:
					bVar4 = !PAD::_IS_INPUT_DISABLED(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_E)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2[iVar6 /*15*/].f_D, iVar7);
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2[iVar6 /*15*/].f_C, iVar7))
						{
							sVar3 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = PAD::_0x80C2FD58D720C801(iVar0, iVar1, bVar2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
						{
							func_13(sVar3);
						}
						iVar7++;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/]))
					{
						func_12(uParam0->f_2[iVar6 /*15*/]);
					}
					if (MISC::IS_PC_VERSION())
					{
						if (func_119(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								GRAPHICS::SET_SEETHROUGH(true);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								GRAPHICS::SET_SEETHROUGH(false);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4294967295);
							}
						}
					}
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
			}
			iVar6++;
		}
		fVar8 = func_118(bParam4, func_118(func_119(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fVar8);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(80f);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		func_113(&(uParam0->f_1), 256);
		func_112(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

float func_118(bool bParam0, float fParam1, float fParam2)//Position - 0x81AA
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_119(var uParam0, int iParam1)//Position - 0x81C1
{
	return (uParam0 && iParam1) != 0;
}

int func_120(var uParam0)//Position - 0x81D0
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_113(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_121(var uParam0, var uParam1)//Position - 0x81F7
{
	func_122(uParam1, uParam0);
}

void func_122(var uParam0, var uParam1)//Position - 0x8207
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	int iVar3;
	bool bVar4;
	bool bVar5;
	struct<8> Var6;
	char[] cVar7[8];
	int iVar8[3];
	int iVar9;
	struct<13> Var10;
	var uVar11;
	vector3 vVar12;
	vector3 vVar13;
	bool bVar14;
	
	func_198(&(Global_1C171C.f_31), 1, 0);
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_197();
	func_38(0);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_195(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	func_194(1);
	func_193(1);
	if (!func_190())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("LEADERBOARD_SCENE");
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_2A, 3))
	{
		*uParam0 = func_189();
		MISC::SET_BIT(&(uParam1->f_2A), 3);
	}
	Var10 = { func_23(CAM::_0xDC9DA9E8789F5246()) };
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (((!NETWORK::_NETWORK_ARE_ROS_AVAILABLE() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_0x1353F87E89946207())) || Global_1C0180.f_B10 != 0)
		{
			if (!PLAYER::IS_PLAYER_ONLINE())
			{
				if (Global_1C0180.f_B0D != 2)
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_2A), 1);
					Global_1C0180.f_B0D = 2;
				}
			}
			else if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_0x1353F87E89946207())
			{
				if (Global_1C0180.f_B0D != 3)
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_2A), 1);
					Global_1C0180.f_B0D = 3;
				}
			}
			else if (!NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
			{
				if (Global_1C0180.f_B0D != 4)
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_2A), 1);
					Global_1C0180.f_B0D = 4;
				}
			}
			else if (Global_1C0180.f_B10 != 0)
			{
				if (Global_1C0180.f_B0D != 5)
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_2A), 1);
					Global_1C0180.f_B0D = 5;
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_2A, 1))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				func_188(*uParam0, Global_1C0180.f_ADC);
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1C0180.f_ADC.f_1)))
				{
					if (!func_187(uParam1->f_2C))
					{
						if (Global_1C0180.f_ADC.f_1A > 0)
						{
							Var6 = { Global_1C0180.f_ADC.f_9 };
							func_186(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &Var6, Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
						}
						else
						{
							func_186(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
						}
					}
					else if (!Global_1C0180.f_ADC.f_1B)
					{
						StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
						if (Global_1C0180.f_ADC.f_1A > 0)
						{
							func_186(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
						}
						else
						{
							func_186(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
						}
					}
					else
					{
						StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
						if (Global_1C0180.f_ADC.f_1A > 0)
						{
							func_186(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
						}
						else
						{
							func_186(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
						}
					}
					func_185(*uParam0, "SCLB_C_RANK", &(Global_1C0180.f_A9D), Global_1C0180.f_A94);
				}
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 4);
				func_184(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 5);
				func_184(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 6);
				func_184(*uParam0, &iVar3, iVar9, 1, 1);
				MISC::SET_BIT(&(uParam1->f_2A), 1);
				func_183(*uParam0);
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_2A), 2);
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			}
			else
			{
				func_183(*uParam0);
			}
		}
		else
		{
			if (Global_1C0180.f_B0D != 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_2A), 1);
				Global_1C0180.f_B0D = 1;
			}
			if (!func_148(uParam1))
			{
				uParam1->f_F6.f_1 = 4294967295;
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_2A), 1);
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_2A, 0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					func_188(*uParam0, Global_1C0180.f_ADC);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1C0180.f_ADC.f_1)))
					{
						if (!func_187(uParam1->f_2C))
						{
							if (Global_1C0180.f_ADC.f_1A > 0)
							{
								Var6 = { Global_1C0180.f_ADC.f_9 };
								func_186(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &Var6, 1, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_186(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
							}
						}
						else if (!Global_1C0180.f_ADC.f_1B)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1C0180.f_ADC.f_1A > 0)
							{
								func_186(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_186(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1C0180.f_ADC.f_1A > 0)
							{
								func_186(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_186(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
							}
						}
						func_185(*uParam0, "SCLB_C_RANK", &(Global_1C0180.f_A9D), Global_1C0180.f_A94);
					}
					MISC::SET_BIT(&(uParam1->f_2A), 0);
					GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_2A), 2);
				}
				iVar3 = 0;
				iVar0 = 0;
				if (Global_1C0180.f_B09 == 4294967295)
				{
					StringCopy(&vVar12, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 4);
							func_184(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 5);
							func_184(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 6);
							func_184(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 7);
						func_147(*uParam0, iVar3, iVar9, &vVar12);
						iVar3++;
						iVar0++;
					}
					Global_1C0180.f_B09 = 1;
					func_92(&(Global_1C0180.f_B07));
				}
				else if (func_145(&(Global_1C0180.f_B07), 300, 0))
				{
					StringCopy(&vVar13, "SC_LB_DL", 24);
					StringIntConCat(&vVar13, Global_1C0180.f_B09, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 4);
							func_184(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 5);
							func_184(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 6);
							func_184(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 7);
						func_147(*uParam0, iVar3, iVar9, &vVar13);
						iVar3++;
						iVar0++;
					}
					Global_1C0180.f_B09++;
					if (Global_1C0180.f_B09 > 3)
					{
						Global_1C0180.f_B09 = 0;
					}
					func_92(&(Global_1C0180.f_B07));
				}
				func_183(*uParam0);
			}
			else
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_2A), 0);
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_2A, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_F6.f_BB[iVar0] = 0;
						iVar0++;
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					func_188(*uParam0, Global_1C0180.f_ADC);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1C0180.f_ADC.f_1)))
					{
						if (!func_187(uParam1->f_2C))
						{
							if (Global_1C0180.f_ADC.f_1A > 0)
							{
								Var6 = { Global_1C0180.f_ADC.f_9 };
								func_186(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &Var6, 1, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_186(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
							}
						}
						else if (!Global_1C0180.f_ADC.f_1B)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1C0180.f_ADC.f_1A > 0)
							{
								func_186(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_186(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1C0180.f_ADC.f_1A > 0)
							{
								func_186(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_186(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
							}
						}
						func_185(*uParam0, "SCLB_C_RANK", &(Global_1C0180.f_A9D), Global_1C0180.f_A94);
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_2A, 6))
					{
						func_95(&Global_1C126B);
						func_141(uParam1, &Global_1C126B);
						func_140(uParam1, &Global_1C126B);
					}
					iVar3 = 0;
					uParam1->f_F6.f_2 = 0;
					if ((Global_1C0180.f_A90[0] > 1 || (Global_1C0180.f_A90[0] > 0 && Global_1C0180.f_AD7[0] != 4294967295)) || (((Global_1C0180.f_A90[0] > 0 && Global_1C0180.f_ADC.f_1B) && func_187(uParam1->f_2C)) && Global_1C0180.f_AD7[0] != 4294967295))
					{
						uParam1->f_F6.f_1 = 4294967295;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar14 = false;
							if (Global_1C126B[iVar0 /*100*/].f_4B == 1)
							{
								if (!iVar8[0])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 4);
									func_184(*uParam0, &iVar3, iVar9, 0, 0);
									iVar8[0] = 1;
								}
							}
							else if (Global_1C126B[iVar0 /*100*/].f_4B == 2)
							{
								if (!iVar8[1])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 5);
									if ((Global_1C0180.f_A90[1] < 1 && Global_1C0180.f_AD7[1] == 4294967295) && !(((Global_1C0180.f_A90[1] > 0 && Global_1C0180.f_ADC.f_1B) && func_187(uParam1->f_2C)) && Global_1C0180.f_AD7[1] != 4294967295))
									{
										func_184(*uParam0, &iVar3, iVar9, 1, 0);
										bVar14 = true;
									}
									else
									{
										func_184(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[1] = 1;
								}
							}
							else if (Global_1C126B[iVar0 /*100*/].f_4B == 3)
							{
								if (!iVar8[2])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 6);
									if (!NETWORK::_0x67A5589628E0CFF6())
									{
										bVar14 = true;
									}
									else if (!NETWORK::_0xBA9775570DB788CF())
									{
										bVar14 = true;
									}
									if ((Global_1C0180.f_A90[2] < 2 && Global_1C0180.f_AD7[2] == 4294967295) && !(((Global_1C0180.f_A90[2] > 0 && Global_1C0180.f_ADC.f_1B) && func_187(uParam1->f_2C)) && Global_1C0180.f_AD7[2] != 4294967295))
									{
										bVar14 = true;
									}
									if (bVar14)
									{
										func_184(*uParam0, &iVar3, iVar9, 1, 0);
									}
									else
									{
										func_184(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[2] = 1;
								}
							}
							if (func_139(Global_1C126B[iVar0 /*100*/].f_20))
							{
								if (func_187(uParam1->f_2C))
								{
									NETWORK::NETWORK_PLAYER_GET_USERID(CAM::_0xDC9DA9E8789F5246(), &uVar11);
									if (!Global_1C126B[iVar0 /*100*/].f_4A && MISC::ARE_STRINGS_EQUAL(&(uParam1->f_2C.f_3.f_1[1 /*16*/].f_8), &uVar11))
									{
										bVar14 = true;
									}
								}
								if (!bVar14)
								{
									iVar9 = 0;
									if (!Global_1C0180.f_ADC.f_1B)
									{
										if (func_138(&(Global_1C126B[iVar0 /*100*/].f_20), &Var10))
										{
											MISC::SET_BIT(&iVar9, 1);
											if (uParam1->f_F6.f_1 == 4294967295)
											{
												bVar4 = true;
												uParam1->f_F6.f_1 = iVar0;
												MISC::SET_BIT(&iVar9, 3);
											}
										}
									}
									if (func_187(uParam1->f_2C))
									{
										Var6 = { Global_1C126B[iVar0 /*100*/] };
										if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1C126B[iVar0 /*100*/].f_54)) && !MISC::ARE_STRINGS_EQUAL(&(Global_1C126B[iVar0 /*100*/].f_54), ""))
										{
											StringConCat(&Var6, "/", 64);
											StringConCat(&Var6, &(Global_1C126B[iVar0 /*100*/].f_54), 64);
										}
										func_137(*uParam0, iVar3, iVar9, Global_1C126B[iVar0 /*100*/].f_3B, &Var6, &(Global_1C126B[iVar0 /*100*/].f_50));
										uParam1->f_F6.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_2 = { Global_1C126B[iVar0 /*100*/].f_20 };
										uParam1->f_F6.f_2++;
									}
									else
									{
										func_137(*uParam0, iVar3, iVar9, Global_1C126B[iVar0 /*100*/].f_3B, &(Global_1C126B[iVar0 /*100*/]), &(Global_1C126B[iVar0 /*100*/].f_50));
										uParam1->f_F6.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_2 = { Global_1C126B[iVar0 /*100*/].f_20 };
										uParam1->f_F6.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1C0180.f_A94)
									{
										bVar5 = false;
										if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD2, iVar1))
										{
											if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD0, iVar1))
											{
												if (Global_1C0180.f_AC2[iVar1] == Global_1C126B[iVar0 /*100*/].f_43[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_131(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_43[iVar1], 0, Global_1C126B[iVar0 /*100*/].f_3A);
											}
											else
											{
												func_131(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_43[iVar1], Global_1C126B[iVar0 /*100*/].f_4A, Global_1C126B[iVar0 /*100*/].f_3A);
											}
										}
										else
										{
											if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD0, iVar1))
											{
												if (Global_1C0180.f_AC9[iVar1] == Global_1C126B[iVar0 /*100*/].f_43[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_128(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_3C[iVar1], 0);
											}
											else
											{
												func_128(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_3C[iVar1], Global_1C126B[iVar0 /*100*/].f_4A);
											}
										}
										iVar1++;
									}
									func_127();
									uVar2[(Global_1C126B[iVar0 /*100*/].f_4B - 1)]++;
									if (uVar2[(Global_1C126B[iVar0 /*100*/].f_4B - 1)] == 2)
									{
										if (Global_1C126B[iVar0 /*100*/].f_3B > 2)
										{
											MISC::SET_BIT(&iVar9, 2);
											MISC::SET_BIT(&(uParam1->f_F6.f_6[0 /*15*/].f_1), 2);
											func_126(*uParam0, (iVar3 - 1), iVar9);
										}
									}
									iVar3++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_F6.f_BB[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 4);
						func_184(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 5);
						func_184(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 6);
						func_184(*uParam0, &iVar3, iVar9, 1, 0);
					}
					MISC::SET_BIT(&(uParam1->f_2A), 1);
					GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_2A), 2);
					func_183(*uParam0);
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
					if (uParam1->f_F6.f_1 == 4294967295 && !bVar4 == 1)
					{
						if (Global_1C0180.f_A90[0] > 1)
						{
							uParam1->f_F6.f_1 = 0;
							MISC::SET_BIT(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1), 3);
							func_126(*uParam0, uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/], uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_183(*uParam0);
					func_123(uParam0, uParam1);
				}
			}
		}
	}
}

void func_123(var uParam0, var uParam1)//Position - 0x91E5
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iVar1 = uParam1->f_F6.f_1;
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		HUD::_SHOW_CURSOR_THIS_FRAME();
		PAD::SET_INPUT_EXCLUSIVE(2, 239);
		PAD::SET_INPUT_EXCLUSIVE(2, 240);
		PAD::SET_INPUT_EXCLUSIVE(2, 237);
		PAD::SET_INPUT_EXCLUSIVE(2, 238);
		PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
		if (unk_0xE11F00B4AC919F45(2, 241))
		{
			PAD::_SET_CONTROL_NORMAL(2, 188, 1f);
		}
		if (unk_0xE11F00B4AC919F45(2, 242))
		{
			PAD::_SET_CONTROL_NORMAL(2, 187, 1f);
		}
		if (HUD::_0x632B2940C67F4EA9(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_F6.f_BB[0])
				{
					if (iVar3 <= (uParam1->f_F6.f_BB[0] + uParam1->f_F6.f_BB[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_F6.f_1 != iVar3)
				{
					uParam1->f_F6.f_1 = iVar3;
					unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					PAD::_SET_CONTROL_NORMAL(2, 217, 1f);
				}
			}
		}
	}
	if (!PAD::_IS_INPUT_DISABLED(2))
	{
		func_125(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_F6.f_2 > 0)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_F6, 0))
		{
			if ((PAD::IS_CONTROL_PRESSED(2, 188) || unk_0xE11F00B4AC919F45(2, 188)) || iVar6 < 4294967196)
			{
				unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_F6.f_1 = (uParam1->f_F6.f_1 + 4294967295);
				MISC::SET_BIT(&(uParam1->f_F6), 0);
				func_92(&(uParam1->f_F6.f_3));
				bVar0 = true;
			}
		}
		else if (func_124(uParam1, 188))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_F6), 0);
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_F6, 1))
		{
			if ((PAD::IS_CONTROL_PRESSED(2, 187) || unk_0xE11F00B4AC919F45(2, 187)) || iVar6 > 100)
			{
				unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_F6.f_1++;
				MISC::SET_BIT(&(uParam1->f_F6), 1);
				func_92(&(uParam1->f_F6.f_3));
				bVar0 = true;
			}
		}
		else if (func_124(uParam1, 187))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_F6), 1);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_F6.f_1 < 0)
		{
			uParam1->f_F6.f_1 = (uParam1->f_F6.f_2 - 1);
		}
		if (uParam1->f_F6.f_1 >= uParam1->f_F6.f_2)
		{
			uParam1->f_F6.f_1 = 0;
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_F6, 3))
	{
		if ((PAD::IS_CONTROL_PRESSED(2, 204) || NETWORK::_0x5C497525F803486B(2, 204)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
		{
			MISC::SET_BIT(&(uParam1->f_F6), 3);
			func_92(&(uParam1->f_F6.f_3));
			bVar0 = true;
		}
	}
	else if (func_124(uParam1, 204))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_F6), 3);
	}
	if (uParam1->f_F6.f_1 >= 0)
	{
		if (uParam1->f_F6.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_F6.f_6[iVar1 /*15*/].f_1), 3);
				func_126(*uParam0, uParam1->f_F6.f_6[iVar1 /*15*/], uParam1->f_F6.f_6[iVar1 /*15*/].f_1);
			}
			MISC::SET_BIT(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1), 3);
			func_126(*uParam0, uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/], uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1);
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_2A), 2);
		}
		if (func_139(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_2))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_F6, 2))
			{
				if (PAD::IS_CONTROL_PRESSED(2, 217) || NETWORK::_0x5C497525F803486B(2, 217))
				{
					if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						unk_0x1190AB7024CBD8CB(4294967295, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						MISC::SET_BIT(&(uParam1->f_F6), 2);
						NETWORK::NETWORK_SHOW_PROFILE_UI(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!PAD::IS_CONTROL_PRESSED(2, 217))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_F6), 2);
			}
		}
	}
}

int func_124(var uParam0, int iParam1)//Position - 0x9587
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_125(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !unk_0xE11F00B4AC919F45(2, iParam1)) && (iVar1 < 75 && iVar1 > 4294967221)) || func_145(&(uParam0->f_F6.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !unk_0xE11F00B4AC919F45(2, iParam1)) || func_145(&(uParam0->f_F6.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_125(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x9626
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

void func_126(int iParam0, int iParam1, int iParam2)//Position - 0x96FB
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT_STATE");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_127()//Position - 0x971E
{
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_128(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, float fParam15, bool bParam16)//Position - 0x972A
{
	switch (Param0.f_1D[iParam14])
	{
		case 4:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_FLOAT(fParam15, 2);
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 12:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(SYSTEM::FLOOR(fParam15));
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 18 || Param0.f_1D[iParam14] == 20)
				{
					fParam15 = (fParam15 * -1f);
				}
				if (!MISC::SHOULD_USE_METRIC_MEASUREMENTS())
				{
					if (Param0.f_1D[iParam14] == 19 || Param0.f_1D[iParam14] == 20)
					{
						fParam15 = func_130(fParam15);
					}
					else
					{
						fParam15 = func_129(fParam15);
					}
				}
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_FLOAT(fParam15, 2);
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 0:
			break;
	}
}

float func_129(float fParam0)//Position - 0x984C
{
	return (fParam0 / 0.3048f);
}

float func_130(float fParam0)//Position - 0x985C
{
	return (fParam0 / 1609.344f);
}

void func_131(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)//Position - 0x986C
{
	struct<4> Var0;
	
	if (iParam15 == 2147483647 || iParam15 == 2147483649)
	{
		bParam16 = false;
	}
	StringCopy(&Var0, "", 16);
	switch (Param0.f_1D[iParam14])
	{
		case 5:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(iParam15);
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 7:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(-iParam15);
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 11 && iParam15 < 0)
				{
					iParam15 = (iParam15 * 4294967295);
				}
				if (iParam15 >= 3600000 || iParam15 <= 4291367296)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (Param0.f_1D[iParam14] == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 6);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 6:
			if (bParam16)
			{
				if (iParam15 == 2147483647)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (iParam15 >= 3600000 || iParam15 <= 4291367296)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 2:
		case 10:
			if (bParam16)
			{
				iParam15 = (iParam15 * 4294967295);
				if (iParam15 >= 3600000 || iParam15 <= 4291367296)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (Param0.f_1D[iParam14] == 10)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 6);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 3:
			if (bParam17)
			{
				if (STREAMING::IS_MODEL_IN_CDIMAGE(iParam15))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SCLB_VEH_CUST");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam15));
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
			}
			else if (STREAMING::IS_MODEL_IN_CDIMAGE(iParam15))
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam15));
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 8:
			if (func_136(iParam15) != 0)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(func_133(func_136(iParam15), 0));
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 14 || Param0.f_1D[iParam14] == 16)
				{
					iParam15 = (iParam15 * 4294967295);
				}
				if (!MISC::SHOULD_USE_METRIC_MEASUREMENTS())
				{
					if (Param0.f_1D[iParam14] == 15 || Param0.f_1D[iParam14] == 16)
					{
						iParam15 = SYSTEM::FLOOR(func_130(SYSTEM::TO_FLOAT(iParam15)));
					}
					else
					{
						iParam15 = SYSTEM::FLOOR(func_129(SYSTEM::TO_FLOAT(iParam15)));
					}
				}
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(iParam15);
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 21:
			if (iParam15 > 20)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			else
			{
				Var0 = { func_132(iParam15) };
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Var0);
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 0:
			break;
	}
}

struct<4> func_132(int iParam0)//Position - 0x9C41
{
	struct<4> Var0;
	
	StringCopy(&Var0, "ARENA_C_SL", 16);
	if (iParam0 > 20)
	{
		StringCopy(&Var0, "**INVALID**", 16);
		return Var0;
	}
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

char* func_133(int iParam0, bool bParam1)//Position - 0x9C7A
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case 1742569970:
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case 2820358688:
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case 527765612:
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case 4129609738:
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case 2922292364:
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case 317205821:
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case 3441901897:
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case 125959754:
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case 3173288789:
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case 3125143736:
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case 2484171525:
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case 419712736:
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case 4135006721:
			return "WT_VEH_WEP";
			break;
		
		case 3219281620:
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case 2024373456:
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case 177293209:
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case 3686625920:
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case 961495388:
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case 4208062921:
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case 1432025498:
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case 2526821735:
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case 2285322324:
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case 1785463520:
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case 3415619887:
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case 2228681469:
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case 2548703416:
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case 940833800:
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case 2939590305:
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case 1198256469:
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case 3056410471:
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		
		default:
			if (func_135(iParam0, &Var0) != 4294967295)
			{
				if (bParam1)
				{
					return func_134(&(Var0.f_1F));
				}
				else
				{
					return func_134(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_134(var uParam0)//Position - 0xA8F6
{
	return uParam0;
}

int func_135(int iParam0, var uParam1)//Position - 0xA900
{
	int iVar0;
	int iVar1;
	
	iVar1 = FILE::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILE::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_136(int iParam0)//Position - 0xA93B
{
	if (iParam0 == 600)
	{
		return joaat("weapon_railgun");
	}
	else if (iParam0 == 500)
	{
		return joaat("weapon_minigun");
	}
	else if (iParam0 == 400)
	{
		return joaat("weapon_mg");
	}
	else if (iParam0 == 401)
	{
		return joaat("weapon_combatmg");
	}
	else if (iParam0 == 402)
	{
		return 3722617468;
	}
	else if (iParam0 == 300)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (iParam0 == 301)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 302)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (iParam0 == 303)
	{
		return 3347935668;
	}
	else if (iParam0 == 200)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (iParam0 == 201)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (iParam0 == 202)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (iParam0 == 203)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (iParam0 == 100)
	{
		return joaat("weapon_microsmg");
	}
	else if (iParam0 == 101)
	{
		return joaat("weapon_smg");
	}
	else if (iParam0 == 102)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (iParam0 == 0)
	{
		return joaat("weapon_pistol");
	}
	else if (iParam0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iParam0 == 2)
	{
		return joaat("weapon_appistol");
	}
	else if (iParam0 == 3)
	{
		return joaat("weapon_pistol50");
	}
	return 0;
}

void func_137(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)//Position - 0xAAAE
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
	if (iParam3 > 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam4);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam5);
}

int func_138(var uParam0, var uParam1)//Position - 0xAB00
{
	if (!func_139(*uParam0))
	{
		return 0;
	}
	if (!func_139(*uParam1))
	{
		return 0;
	}
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_139(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0xAB3A
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_140(var uParam0, var uParam1)//Position - 0xAB4A
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar3;
	
	Var2.f_3C = 6;
	Var2.f_43 = 6;
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2A, 5) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2A, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_4B != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_4B != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_4B < (uParam1[iVar0 /*100*/])->f_4B)
						{
							uVar3 = (uParam1[iVar1 /*100*/])->f_4B;
							(uParam1[iVar1 /*100*/])->f_4B = (uParam1[iVar0 /*100*/])->f_4B;
							(uParam1[iVar0 /*100*/])->f_4B = uVar3;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_4B == (uParam1[iVar0 /*100*/])->f_4B)
						{
							if ((uParam1[iVar1 /*100*/])->f_3B != 4294967295)
							{
								if ((uParam1[iVar1 /*100*/])->f_3B < (uParam1[iVar0 /*100*/])->f_3B || (uParam1[iVar0 /*100*/])->f_3B == 4294967295)
								{
									uVar3 = (uParam1[iVar1 /*100*/])->f_4B;
									(uParam1[iVar1 /*100*/])->f_4B = (uParam1[iVar0 /*100*/])->f_4B;
									(uParam1[iVar0 /*100*/])->f_4B = uVar3;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_141(var uParam0, var uParam1)//Position - 0xACBB
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2A, 5) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2A, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_144(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_144(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_144(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_142(uParam1);
	}
}

void func_142(var uParam0)//Position - 0xAD70
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1C0180.f_A90[iVar0] = 0;
		Global_1C0180.f_AD7[iVar0] = 4294967295;
		iVar0++;
	}
	Var3 = { func_23(CAM::_0xDC9DA9E8789F5246()) };
	if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1C0180.f_B0A))
	{
		iVar4 = STATS::_0x58A651CD201D89AD(Global_1C0180.f_B0A);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			if (iVar0 < 12)
			{
				func_143(&Global_1C11E9);
				iVar2 = 0;
				STATS::LEADERBOARDS_GET_CACHE_DATA_ROW(Global_1C0180.f_B0A, iVar0, &Global_1C11E9);
				*(uParam0[iVar0 /*100*/]) = { Global_1C11E9.f_1 };
				(uParam0[iVar0 /*100*/])->f_10 = { Global_1C11E9.f_11 };
				(uParam0[iVar0 /*100*/])->f_20 = { Global_1C11E9.f_21 };
				(uParam0[iVar0 /*100*/])->f_2D = { Global_1C11E9.f_2E };
				(uParam0[iVar0 /*100*/])->f_3A = Global_1C11E9.f_3B;
				(uParam0[iVar0 /*100*/])->f_3B = Global_1C11E9.f_3C;
				Global_1C0180.f_A94 = Global_1C11E9.f_3E;
				Global_1C0180.f_AD1 = Global_1C11E9.f_3F;
				iVar2 = 0;
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C11E9.f_3D, 1))
				{
					iVar2 = 1;
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C11E9.f_3D, 2))
				{
					iVar2 = 2;
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C11E9.f_3D, 3))
				{
					iVar2 = 3;
				}
				Global_1C0180.f_A90[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_4B = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_3B != 4294967295)
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C11E9.f_3D, 0))
					{
						(uParam0[iVar0 /*100*/])->f_4A = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_4A = 0;
					}
					if (func_138(&((uParam0[iVar0 /*100*/])->f_20), &Var3))
					{
						Global_1C0180.f_AD7[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1C11E9.f_3E)
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C11E9.f_3F, iVar1))
					{
						(uParam0[iVar0 /*100*/])->f_43[iVar1] = Global_1C11E9.f_61[iVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_3C[iVar1] = Global_1C11E9.f_40[iVar1];
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_143(var uParam0)//Position - 0xAF90
{
	struct<13> Var0;
	int iVar1;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_11), "", 64);
	uParam0->f_21 = { Var0 };
	uParam0->f_2E = { Var0 };
	uParam0->f_3B = 0;
	uParam0->f_3C = 0;
	uParam0->f_3D = 0;
	uParam0->f_3E = 0;
	uParam0->f_3F = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		uParam0->f_40[iVar1] = 0f;
		uParam0->f_61[iVar1] = 0;
		iVar1++;
	}
}

int func_144(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0xB006
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_1C0180[iParam3 /*901*/][0 /*75*/].f_3B > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1C0180[iParam3 /*901*/][0 /*75*/] };
			Global_1C11B0[iParam3 /*16*/] = { Global_1C0180[iParam3 /*901*/][0 /*75*/] };
			Global_1C11B0.f_31[iParam3] = Global_1C0180[iParam3 /*901*/][0 /*75*/].f_43[Global_1C0180.f_ADB];
			Global_1C11B0.f_35[iParam3] = Global_1C0180[iParam3 /*901*/][0 /*75*/].f_3C[Global_1C0180.f_ADB];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1C0180.f_AD7[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1C0180[iParam3 /*901*/][Global_1C0180.f_AD7[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_1C0180.f_AD7[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], PLAYER::GET_PLAYER_NAME(CAM::_0xDC9DA9E8789F5246()), 64);
				(uParam0[iParam1 /*100*/])->f_20 = { func_23(CAM::_0xDC9DA9E8789F5246()) };
				(uParam0[iParam1 /*100*/])->f_3B = 4294967295;
				(uParam0[iParam1 /*100*/])->f_43[0] = 4294967295;
				(uParam0[iParam1 /*100*/])->f_43[1] = 4294967295;
				(uParam0[iParam1 /*100*/])->f_43[2] = 4294967295;
				(uParam0[iParam1 /*100*/])->f_43[3] = 4294967295;
				(uParam0[iParam1 /*100*/])->f_3C[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1C0180.f_AD7[iParam3] - iVar0) >= 1)
		{
			if (Global_1C0180[iParam3 /*901*/][(Global_1C0180.f_AD7[iParam3] - iVar0) /*75*/].f_3B > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1C0180[iParam3 /*901*/][(Global_1C0180.f_AD7[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((*uParam2 / 2)));
		if ((Global_1C0180.f_AD7[iParam3] + iVar0) < 12 && (Global_1C0180.f_AD7[iParam3] + iVar0) > 0)
		{
			if (Global_1C0180[iParam3 /*901*/][(Global_1C0180.f_AD7[iParam3] + iVar0) /*75*/].f_3B > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1C0180[iParam3 /*901*/][(Global_1C0180.f_AD7[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

int func_145(var uParam0, int iParam1, bool bParam2)//Position - 0xB2AF
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_146(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_146(var uParam0, bool bParam1, bool bParam2)//Position - 0xB30D
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = HUD::_0x13C4B962653A5280();
			}
			else
			{
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_147(int iParam0, int iParam1, int iParam2, char* sParam3)//Position - 0xB352
{
	MISC::SET_BIT(&iParam2, 7);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

int func_148(var uParam0)//Position - 0xB386
{
	if (!Global_1C017C)
	{
		if (!func_182(&(Global_1C0180.f_B0B)))
		{
			func_146(&(Global_1C0180.f_B0B), 1, 0);
			return 0;
		}
		else if (!func_145(&(Global_1C0180.f_B0B), 1000, 1))
		{
			return 0;
		}
	}
	if (((!NETWORK::_NETWORK_ARE_ROS_AVAILABLE() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_0x1353F87E89946207())) || Global_1C0180.f_B10 != 0)
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_2A), 4);
		return 1;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2A, 4))
	{
		func_181(uParam0);
		MISC::SET_BIT(&(uParam0->f_2A), 4);
		return 0;
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2A, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_179(uParam0))
	{
		return 0;
	}
	if (!func_177(uParam0))
	{
		return 0;
	}
	if (!func_164(uParam0))
	{
		return 0;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2A, 6))
	{
		func_95(&Global_1C126B);
		func_141(uParam0, &Global_1C126B);
		func_140(uParam0, &Global_1C126B);
		MISC::SET_BIT(&(uParam0->f_2A), 6);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2A, 7))
	{
		if (!func_182(&(Global_1C0180.f_B0E)))
		{
			func_146(&(Global_1C0180.f_B0E), 1, 0);
		}
		else if (func_145(&(Global_1C0180.f_B0E), 30000, 1))
		{
			MISC::SET_BIT(&(uParam0->f_2A), 7);
		}
		if (func_161(&Global_1C126B))
		{
		}
		else
		{
			return 0;
		}
		if (func_158(&Global_1C126B))
		{
		}
		else
		{
			return 0;
		}
		if (func_153(&Global_1C126B))
		{
			func_149(&Global_1C126B);
			MISC::SET_BIT(&(uParam0->f_2A), 7);
			func_149(&Global_1C126B);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_149(var uParam0)//Position - 0xB54B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_152(Global_1C0180.f_B0A);
	if (Global_1C0DF1.f_51[iVar2] != 0)
	{
		func_151(4294967295, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_143(&Global_1C11E9);
		if ((uParam0[iVar0 /*100*/])->f_4B != 0)
		{
			Global_1C11E9 = Global_1C0180.f_B0A;
			Global_1C11E9.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*100*/])->f_10), ""))
			{
				Global_1C11E9.f_11 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1C11E9.f_11 = { (uParam0[iVar0 /*100*/])->f_10 };
			}
			Global_1C11E9.f_21 = { (uParam0[iVar0 /*100*/])->f_20 };
			if (func_139((uParam0[iVar0 /*100*/])->f_2D))
			{
				Global_1C11E9.f_2E = { (uParam0[iVar0 /*100*/])->f_2D };
			}
			else
			{
				Global_1C11E9.f_2E = { (uParam0[iVar0 /*100*/])->f_20 };
			}
			Global_1C11E9.f_3B = (uParam0[iVar0 /*100*/])->f_3A;
			Global_1C11E9.f_3C = (uParam0[iVar0 /*100*/])->f_3B;
			Global_1C11E9.f_3E = Global_1C0180.f_A94;
			Global_1C11E9.f_3F = Global_1C0180.f_AD2;
			if ((uParam0[iVar0 /*100*/])->f_4A)
			{
				MISC::SET_BIT(&(Global_1C11E9.f_3D), 0);
			}
			else
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C11E9.f_3D), 0);
			}
			MISC::SET_BIT(&(Global_1C11E9.f_3D), (uParam0[iVar0 /*100*/])->f_4B);
			iVar1 = 0;
			while (iVar1 < Global_1C11E9.f_3E)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C11E9.f_3F, iVar1))
				{
					Global_1C11E9.f_61[iVar1] = (uParam0[iVar0 /*100*/])->f_43[iVar1];
				}
				else
				{
					Global_1C11E9.f_40[iVar1] = (uParam0[iVar0 /*100*/])->f_3C[iVar1];
				}
				iVar1++;
			}
			Global_1C0DF1.f_51[iVar2] = Global_1C0180.f_B0A;
			STATS::LEADERBOARDS_CACHE_DATA_ROW(&Global_1C11E9);
		}
		iVar0++;
	}
	Global_1C0DF1.f_57[iVar2 /*3*/] = { func_150(CAM::_0xDC9DA9E8789F5246()) };
}

Vector3 func_150(int iParam0)//Position - 0xB735
{
	return unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_151(int iParam0, int iParam1)//Position - 0xB748
{
	int iVar0;
	
	if (iParam1 != 4294967295)
	{
		if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1C0DF1.f_51[iParam1]))
		{
			STATS::_0x8EC74CEB042E7CFF(Global_1C0DF1.f_51[iParam1]);
		}
		Global_1C0DF1.f_51[iParam1] = 0;
	}
	else if (iParam0 != 4294967295)
	{
		if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(iParam0))
		{
			STATS::_0x8EC74CEB042E7CFF(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1C0DF1.f_51[iVar0] == iParam0)
			{
				Global_1C0DF1.f_51[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_152(int iParam0)//Position - 0xB7C4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1C0DF1.f_51[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1C0DF1.f_51[iVar0] == 0)
		{
			return iVar0;
		}
		else if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1C0DF1.f_51[iVar0]))
		{
			iVar3 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_1C0DF1.f_51[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_153(var uParam0)//Position - 0xB857
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_4C)
	{
		case 0:
			func_157(uParam0);
			if (MISC::IS_ORBIS_VERSION() && !NETWORK::_0x72D918C99BCACC54(0))
			{
				(uParam0[0 /*100*/])->f_4C = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_139((uParam0[iVar0 /*100*/])->f_20))
				{
					if (!func_156(&((uParam0[iVar0 /*100*/])->f_20), &Global_1C177E))
					{
						Global_1C177E[Global_1C177E.f_CE /*13*/] = { (uParam0[iVar0 /*100*/])->f_20 };
						Global_1C177E.f_CE++;
					}
				}
				iVar0++;
			}
			if (Global_1C177E.f_CE > 0)
			{
				(uParam0[0 /*100*/])->f_4C = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_4C = 3;
			}
			break;
		
		case 1:
			if (func_154(&((uParam0[1 /*100*/])->f_4C), &(Global_1C177E.f_CE), &Global_1C177E, &(Global_1C177E.f_9D)))
			{
				(uParam0[0 /*100*/])->f_4C = 2;
			}
			break;
		
		case 2:
			if (Global_1C177E.f_CE > 12)
			{
				Global_1C177E.f_CE = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1C177E.f_CE)
				{
					if (func_139((uParam0[iVar0 /*100*/])->f_20) && func_139(Global_1C177E[iVar1 /*13*/]))
					{
						if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&((uParam0[iVar0 /*100*/])->f_20), &(Global_1C177E[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_50 = { Global_1C177E.f_9D[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_4C = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_154(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xB9FA
{
	var uVar0;
	int iVar1;
	
	switch (*uParam0)
	{
		case 0:
			if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
			}
			else
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_START(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
				if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar1 = 0;
			while (iVar1 < *uParam1)
			{
				if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_NEW(uParam2[iVar1 /*13*/], &uVar0))
				{
					func_155(&uVar0, uParam3[iVar1 /*4*/]);
				}
				iVar1++;
			}
			if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
			}
			else
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_155(var uParam0, char* sParam1)//Position - 0xBAB3
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

int func_156(var uParam0, var uParam1)//Position - 0xBAC5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_139(*(uParam1[iVar0 /*13*/])))
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_157(var uParam0)//Position - 0xBB04
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_100(&(Global_1C177E[iVar0 /*13*/]));
		StringCopy(&(Global_1C177E.f_9D[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_4C > 0)
	{
		(uParam0[0 /*100*/])->f_4C = 0;
		(uParam0[1 /*100*/])->f_4C = 0;
		if (!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
		{
			NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
		}
	}
	if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
	{
		NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
	}
	Global_1C177E.f_CE = 0;
}

int func_158(var uParam0)//Position - 0xBB75
{
	int iVar0;
	
	if (MISC::IS_PC_VERSION())
	{
		return 1;
	}
	else if (MISC::IS_DURANGO_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		if (!func_160(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_159(&((uParam0[iVar0 /*100*/])->f_4E), &((uParam0[iVar0 /*100*/])->f_20), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_159(var uParam0, var uParam1, char* sParam2)//Position - 0xBBE3
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_139(*uParam1))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
				{
					if (MISC::IS_DURANGO_VERSION() || MISC::IS_ORBIS_VERSION())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (MISC::IS_XBOX360_VERSION())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam1), 64);
						if (MISC::IS_PS3_VERSION())
						{
						}
						else if (MISC::IS_ORBIS_VERSION())
						{
						}
						else if (MISC::IS_PC_VERSION())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
			{
				if (!NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
					{
						StringCopy(sParam2, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_160(var uParam0)//Position - 0xBCF4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!MISC::IS_DURANGO_VERSION() && !MISC::IS_ORBIS_VERSION())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_4E == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_4E)
	{
		case 0:
			Global_1C0180.f_C6F = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1C0180.f_B11[iVar1 /*16*/]), "", 64);
				func_100(&(Global_1C0180.f_BD2[iVar1 /*13*/]));
				if (func_139((uParam0[iVar1 /*100*/])->f_20))
				{
					Global_1C0180.f_BD2[Global_1C0180.f_C6F /*13*/] = { (uParam0[iVar1 /*100*/])->f_20 };
					Global_1C0180.f_C6F++;
				}
				iVar1++;
			}
			if (Global_1C0180.f_C6F > 0)
			{
				(uParam0[0 /*100*/])->f_4F = NETWORK::_0xD66C9E72B3CC4982(&(Global_1C0180.f_BD2), Global_1C0180.f_C6F);
				(uParam0[0 /*100*/])->f_4E = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_4E = 2;
			}
			break;
		
		case 1:
			iVar0 = NETWORK::_0x58CC181719256197((uParam0[0 /*100*/])->f_4F, &(Global_1C0180.f_B11), Global_1C0180.f_C6F);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_139((uParam0[iVar1 /*100*/])->f_20))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_1C0180.f_B11[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_4E = 2;
			}
			else if (iVar0 == 4294967295)
			{
				(uParam0[0 /*100*/])->f_4E = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_4F = 4294967295;
			return 1;
			break;
	}
	return 0;
}

int func_161(var uParam0)//Position - 0xBE8A
{
	int iVar0;
	
	if (MISC::IS_DURANGO_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_163(&((uParam0[iVar0 /*100*/])->f_4D), &((uParam0[iVar0 /*100*/])->f_10), &((uParam0[iVar0 /*100*/])->f_54), &(Global_1C0180.f_B11), &((uParam0[iVar0 /*100*/])->f_4F)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_162(&((uParam0[iVar0 /*100*/])->f_4D), (uParam0[iVar0 /*100*/])->f_10, &((uParam0[iVar0 /*100*/])->f_54)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_162(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)//Position - 0xBF27
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	NETWORK::NETWORK_HANDLE_FROM_USER_ID(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_139(Var0))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
				{
					if ((MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION()) || MISC::IS_ORBIS_VERSION())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 64);
						if (MISC::IS_PS3_VERSION())
						{
						}
						else if (MISC::IS_ORBIS_VERSION())
						{
						}
						else if (MISC::IS_PC_VERSION())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
			{
				if (!NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
					{
						StringCopy(sParam17, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_163(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)//Position - 0xC04A
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!MISC::IS_DURANGO_VERSION() && !MISC::IS_ORBIS_VERSION())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	NETWORK::NETWORK_HANDLE_FROM_USER_ID(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_139(Var1[0 /*13*/]))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Var1[0 /*13*/])))
				{
					*uParam4 = NETWORK::_0xD66C9E72B3CC4982(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = NETWORK::_0x58CC181719256197(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == 4294967295)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = 4294967295;
			return 1;
			break;
	}
	return 0;
}

int func_164(var uParam0)//Position - 0xC150
{
	struct<97> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	struct<13> Var12;
	
	Var0.f_13.f_1 = 4;
	iVar5 = 4294967295;
	iVar9 = 2;
	Var12 = { func_23(CAM::_0xDC9DA9E8789F5246()) };
	switch ((*uParam0)[iVar9])
	{
		case 0:
			Global_1C0180.f_AD7[iVar9] = 4294967295;
			Global_1C0180.f_A90[iVar9] = 0;
			Global_1C0005.f_176 = 4294967295;
			if (GRAPHICS::_DRAW_SHOWROOM())
			{
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var12))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&(uParam0->f_7), 35, &Var12))
					{
						uParam0->f_2C.f_2 = uParam0->f_7;
						uParam0->f_2C.f_1 = 3;
						(*uParam0)[iVar9] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar9] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar9] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_2C.f_1 = 3;
			Var1 = uParam0->f_2C;
			Var1.f_1 = uParam0->f_2C.f_1;
			if (func_175(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 11, &Var12, func_176(), 0, 0, 0))
			{
				func_174(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar7 = 0;
						iVar2 = 0;
						if (func_176())
						{
							iVar7 = 0;
							while (iVar7 < Var1.f_3)
							{
								STATS::_0x34770B9CE0E03B91(iVar7, &Var0);
								if (Global_1C0005.f_176 < 0)
								{
									if (func_138(&Var0, &Var12) || func_138(&Var0, &(Global_1C0005.f_169)))
									{
										Global_1C0005.f_176 = Var0.f_60;
									}
								}
								if (iVar5 < 0)
								{
									if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0005.f_8E.f_2, 0))
									{
										if (Global_1C0005.f_D3.f_24[0] >= STATS::_0x88578F6EC36B4A3A(iVar7, 0))
										{
											iVar5 = iVar7;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0] >= STATS::_0x38491439B6BA7F7D(iVar7, 0))
									{
										iVar5 = iVar7;
									}
								}
								func_173(&Var0);
								iVar7++;
							}
							if (iVar5 < 0)
							{
								iVar5 = Var1.f_3;
							}
						}
						iVar7 = 0;
						STATS::_0x34770B9CE0E03B91(0, &Var0);
						if (Var0.f_60 <= 1)
						{
							if (Global_1C0180.f_A90[iVar9] < 12)
							{
								if (func_176() && iVar5 == 0)
								{
									func_172(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Var0.f_60);
									Global_1C0180.f_AD7[iVar9] = 0;
									Global_1C0180.f_A90[iVar9]++;
								}
								if (func_176() && (func_138(&Var0, &Var12) || func_138(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else
								{
									if (func_138(&Var0, &Var12))
									{
										iVar5 = 0;
										Global_1C0180.f_AD7[iVar9] = 0;
									}
									MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_20 = { Var0 };
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
									if (func_171(uParam0->f_2C))
									{
										iVar4 = STATS::_0x88578F6EC36B4A3A(0, Global_1C0180.f_A95);
										if (iVar4 == 1)
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 0;
										}
									}
									if (func_187(uParam0->f_2C))
									{
										MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_4A = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1C0180.f_A94)
									{
										if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar3]))
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_43[iVar3] = STATS::_0x88578F6EC36B4A3A(0, Global_1C0180.f_A96[iVar3]);
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3C[iVar3] = STATS::_0x38491439B6BA7F7D(0, Global_1C0180.f_A96[iVar3]);
										}
										iVar3++;
									}
									Global_1C0180.f_A90[iVar9]++;
								}
								bVar8 = true;
							}
						}
						if (!bVar8)
						{
							Global_1C0180.f_A90[iVar9]++;
						}
						if (!func_176())
						{
							iVar5 = Var1.f_5;
						}
						if (iVar5 > 6)
						{
							iVar6 = (iVar5 - 6);
						}
						else if (bVar8)
						{
							iVar6 = 1;
						}
						else
						{
							iVar6 = 0;
						}
						iVar7 = iVar6;
						func_173(&Var0);
						iVar7 = iVar6;
						while (iVar7 <= (Var1.f_3 - 1))
						{
							STATS::_0x34770B9CE0E03B91(iVar7, &Var0);
							if (Global_1C0180.f_A90[iVar9] < 12 && Var0.f_60 > 1)
							{
								if (func_176() && iVar5 == iVar7)
								{
									if (!func_138(&(Global_1C0180[iVar9 /*901*/][0 /*75*/].f_20), &Var12))
									{
										func_172(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Var0.f_60);
										Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
										Global_1C0180.f_A90[iVar9]++;
									}
								}
								if (func_176() && (func_138(&Var0, &Var12) || func_138(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C0180.f_A90[iVar9] < 12)
								{
									if (func_139(Var0) && !func_138(&Var0, &(Global_1C0180[iVar9 /*901*/][0 /*75*/].f_20)))
									{
										if (func_138(&Var0, &Var12))
										{
											if (Global_1C0180.f_AD7[iVar9] < 0)
											{
												Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
											}
										}
										MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
										Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_20 = { Var0 };
										Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
										Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_4A = 1;
										if (func_171(uParam0->f_2C))
										{
											iVar4 = STATS::_0x88578F6EC36B4A3A(iVar7, Global_1C0180.f_A95);
											if (iVar4 == 1)
											{
												Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 0;
											}
										}
										if (func_187(uParam0->f_2C))
										{
											MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										iVar2 = 0;
										while (iVar2 < Global_1C0180.f_A94)
										{
											if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar2]))
											{
												Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_43[iVar2] = STATS::_0x88578F6EC36B4A3A(iVar7, Global_1C0180.f_A96[iVar2]);
											}
											else
											{
												Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3C[iVar2] = STATS::_0x38491439B6BA7F7D(iVar7, Global_1C0180.f_A96[iVar2]);
											}
											iVar2++;
										}
										Global_1C0180.f_A90[iVar9]++;
									}
								}
							}
							func_173(&Var0);
							iVar7++;
						}
						STATS::_0x71B008056E5692D6();
						func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						if (bVar8)
						{
							if (Global_1C0180.f_AD7[iVar9] == 4294967295 && func_176())
							{
								if (Global_1C0180.f_A90[iVar9] >= 1)
								{
									func_172(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_172(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 1);
								}
								Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
								Global_1C0180.f_A90[iVar9]++;
							}
							(*uParam0)[iVar9] = 3;
						}
						else
						{
							(*uParam0)[iVar9] = 2;
						}
					}
					else
					{
						if (!bVar8)
						{
							Global_1C0180.f_A90[iVar9]++;
						}
						STATS::_0x71B008056E5692D6();
						func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C0180.f_AD7[iVar9] = 4294967295;
						(*uParam0)[iVar9] = 2;
					}
				}
				else
				{
					func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C0180.f_AD7[iVar9] = 4294967295;
					(*uParam0)[iVar9] = 2;
					MISC::SET_BIT(&(Global_1C0180.f_B10), iVar9);
				}
			}
			break;
		
		case 2:
			if (Global_1C0180.f_AD7[iVar9] == 4294967295)
			{
				iVar11 = 11;
			}
			else
			{
				iVar11 = 1;
			}
			uParam0->f_2C.f_1 = 3;
			Var1 = uParam0->f_2C;
			Var1.f_1 = uParam0->f_2C.f_1;
			if (func_166(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, iVar11))
			{
				func_174(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar2 = 0;
						while (iVar2 < Var1.f_3)
						{
							STATS::_0x34770B9CE0E03B91(iVar2, &Var0);
							bVar10 = false;
							if (Global_1C0180[iVar9 /*901*/][0 /*75*/].f_3B > 1 || Global_1C0180[iVar9 /*901*/][0 /*75*/].f_3B <= 0)
							{
								bVar10 = true;
							}
							if (Global_1C0180.f_A90[iVar9] < 12 || bVar10)
							{
								if (func_176() && (func_138(&Var0, &Var12) || func_138(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (iVar2 == 0 || bVar10)
								{
									MemCopy(&(Global_1C0180[iVar9 /*901*/][0 /*75*/]), {Var0.f_D}, 16);
									Global_1C0180[iVar9 /*901*/][0 /*75*/].f_20 = { Var0 };
									Global_1C0180[iVar9 /*901*/][0 /*75*/].f_3B = Var0.f_60;
									if (func_171(uParam0->f_2C))
									{
										iVar4 = STATS::_0x88578F6EC36B4A3A(0, Global_1C0180.f_A95);
										if (iVar4 == 1)
										{
											Global_1C0180[iVar9 /*901*/][0 /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][0 /*75*/].f_3A = 0;
										}
									}
									if (func_187(uParam0->f_2C))
									{
										MemCopy(&(Global_1C0180[iVar9 /*901*/][0 /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C0180[iVar9 /*901*/][0 /*75*/].f_4A = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1C0180.f_A94)
									{
										if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar3]))
										{
											Global_1C0180[iVar9 /*901*/][0 /*75*/].f_43[iVar3] = STATS::_0x88578F6EC36B4A3A(0, Global_1C0180.f_A96[iVar3]);
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][0 /*75*/].f_3C[iVar3] = STATS::_0x38491439B6BA7F7D(0, Global_1C0180.f_A96[iVar3]);
										}
										iVar3++;
									}
									if (Global_1C0180.f_A90[iVar9] == 0)
									{
										if (bVar10)
										{
										}
										else
										{
											Global_1C0180.f_A90[iVar9]++;
										}
									}
								}
								else if (Global_1C0180.f_A90[iVar9] < 12)
								{
									MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_20 = { Var0 };
									if (func_171(uParam0->f_2C))
									{
										iVar4 = STATS::_0x88578F6EC36B4A3A(iVar2, Global_1C0180.f_A95);
										if (iVar4 == 1)
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 0;
										}
									}
									if (func_187(uParam0->f_2C))
									{
										MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_4A = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1C0180.f_A94)
									{
										if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar3]))
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_43[iVar3] = STATS::_0x88578F6EC36B4A3A(iVar2, Global_1C0180.f_A96[iVar3]);
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3C[iVar3] = STATS::_0x38491439B6BA7F7D(iVar2, Global_1C0180.f_A96[iVar3]);
										}
										iVar3++;
									}
									if (iVar2 != 0)
									{
										Global_1C0180.f_A90[iVar9]++;
									}
								}
							}
							func_173(&Var0);
							iVar2++;
						}
					}
					STATS::_0x71B008056E5692D6();
					func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					(*uParam0)[iVar9] = 3;
				}
				else
				{
					STATS::_0x71B008056E5692D6();
					func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					MISC::SET_BIT(&(Global_1C0180.f_B10), iVar9);
					Global_1C0180.f_A90[iVar9] = 0;
					(*uParam0)[iVar9] = 3;
				}
				if (Global_1C0180.f_AD7[iVar9] == 4294967295 && func_176())
				{
					if (Global_1C0180.f_A90[iVar9] >= 1)
					{
						func_172(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
					}
					else
					{
						func_172(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 1);
					}
					Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
					Global_1C0180.f_A90[iVar9]++;
				}
			}
			break;
		
		case 3:
			func_165(iVar9, Global_1C0005.f_176);
			(*uParam0)[iVar9] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_165(int iParam0, int iParam1)//Position - 0xCF83
{
	int iVar0;
	
	if ((func_176() && Global_1C0180.f_A90[iParam0] > Global_1C0180.f_AD7[iParam0]) && Global_1C0180.f_AD7[iParam0] >= 0)
	{
		if (iParam1 != Global_1C0180[iParam0 /*901*/][Global_1C0180.f_AD7[iParam0] /*75*/].f_3B)
		{
			iVar0 = 0;
			while (iVar0 < Global_1C0180.f_A90[iParam0])
			{
				if (iVar0 != Global_1C0180.f_AD7[iParam0])
				{
					if (Global_1C0180[iParam0 /*901*/][iVar0 /*75*/].f_3B >= Global_1C0180[iParam0 /*901*/][Global_1C0180.f_AD7[iParam0] /*75*/].f_3B)
					{
						if (Global_1C0180[iParam0 /*901*/][iVar0 /*75*/].f_3B < iParam1 || iParam1 == 4294967295)
						{
							Global_1C0180[iParam0 /*901*/][iVar0 /*75*/].f_3B++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_176())
		{
		}
		if (Global_1C0180.f_A90[iParam0] <= Global_1C0180.f_AD7[iParam0])
		{
		}
		if (Global_1C0180.f_AD7[iParam0] < 0)
		{
		}
	}
}

int func_166(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0xD0A8
{
	switch (*uParam0)
	{
		case 0:
			if (!func_169() && !func_168())
			{
				func_167(*uParam2);
				if (STATS::LEADERBOARDS2_READ_BY_RANK(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, 4294967295))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_167(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67)//Position - 0xD15E
{
	Global_1C0000 = 1;
	func_198(&(Global_1C0000.f_1), 1, 0);
	Global_1C0000.f_3 = Param0;
	Global_1C0000.f_4 = Param0.f_1;
}

int func_168()//Position - 0xD189
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() && !func_190())
	{
		return 1;
	}
	return 0;
}

int func_169()//Position - 0xD1A7
{
	if (STATS::_0xA31FD15197B192BD() || Global_1C0000)
	{
		func_170();
		return 1;
	}
	return 0;
}

void func_170()//Position - 0xD1C9
{
	if (func_145(&(Global_1C0000.f_1), 120000, 1))
	{
		STATS::LEADERBOARDS_READ_CLEAR(Global_1C0000.f_3, Global_1C0000.f_4, 4294967295);
		Global_1C0000 = 0;
		func_92(&(Global_1C0000.f_1));
	}
}

int func_171(int iParam0)//Position - 0xD204
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_172(var uParam0, char* sParam1, int iParam2)//Position - 0xD262
{
	int iVar0;
	int iVar1;
	
	if (func_187(uParam0->f_2C))
	{
		MemCopy(sParam1, {Global_1C0005.f_163}, 16);
		sParam1->f_20 = { Global_1C0005.f_169 };
		MemCopy(&(sParam1->f_10), {Global_1C0005.f_15D}, 16);
	}
	else
	{
		StringCopy(sParam1, PLAYER::GET_PLAYER_NAME(CAM::_0xDC9DA9E8789F5246()), 64);
		sParam1->f_20 = { func_23(CAM::_0xDC9DA9E8789F5246()) };
	}
	sParam1->f_3B = iParam2;
	if (func_171(uParam0->f_2C))
	{
		iVar0 = Global_1C0005.f_D3.f_24[Global_1C0180.f_A95];
		if (iVar0 == 1)
		{
			sParam1->f_3A = 1;
		}
		else
		{
			sParam1->f_3A = 0;
		}
	}
	sParam1->f_4A = 1;
	iVar1 = 0;
	while (iVar1 < Global_1C0180.f_A94)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0005.f_8E.f_2, Global_1C0180.f_A96[iVar1]))
		{
			sParam1->f_43[iVar1] = Global_1C0005.f_D3.f_24[Global_1C0180.f_A96[iVar1]];
		}
		else
		{
			sParam1->f_3C[iVar1] = Global_1C0005.f_D3.f_3[Global_1C0180.f_A96[iVar1]];
		}
		iVar1++;
	}
}

void func_173(var uParam0)//Position - 0xD36F
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 0;
	StringCopy(&(uParam0->f_D), "", 24);
	uParam0->f_13 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_13.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_13.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_55 = 0;
	StringCopy(&(uParam0->f_56), "", 32);
	StringCopy(&(uParam0->f_5E), "", 8);
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
}

void func_174(var uParam0, var uParam1)//Position - 0xD41D
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_175(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0xD438
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1C0005.f_D3.f_24[0];
	uVar1 = Global_1C0005.f_D3.f_3[0];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_169() && !func_168())
			{
				func_167(*uParam2);
				if (bParam5)
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0005.f_8E.f_2, 0))
					{
						if (STATS::LEADERBOARDS2_READ_BY_SCORE_INT(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (STATS::LEADERBOARDS2_READ_BY_SCORE_FLOAT(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (STATS::LEADERBOARDS2_READ_BY_RADIUS(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, 4294967295))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_176()//Position - 0xD570
{
	if (Global_1C017C && Global_1C017D)
	{
		return 1;
	}
	return 0;
}

int func_177(var uParam0)//Position - 0xD58D
{
	struct<20> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<13> Var10;
	
	Var0.f_13.f_1 = 4;
	iVar4 = 4294967295;
	iVar9 = 1;
	Var10 = { func_23(CAM::_0xDC9DA9E8789F5246()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar3 = NETWORK::NETWORK_GET_FRIEND_COUNT();
			Global_1C0180.f_AD7[1] = 4294967295;
			Global_1C0005.f_176 = 4294967295;
			Global_1C0180.f_A90[iVar9] = 0;
			if (iVar3 > 0)
			{
				if (func_176())
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (func_178(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), &(uParam0->f_71), uParam0->f_71[0 /*66*/], iVar8, 0, 100))
				{
					func_174(&Var1, &(uParam0->f_2C));
					if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
					{
						if (func_176())
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < Var1.f_3)
							{
								if (iVar4 < 0)
								{
									STATS::_0x34770B9CE0E03B91(iVar6, &Var0);
									if (func_187(uParam0->f_2C))
									{
										if (Global_1C0005.f_176 < 0)
										{
											if (func_138(&Var0, &(Global_1C0005.f_169)))
											{
												Global_1C0005.f_176 = Var0.f_60;
											}
										}
									}
									if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0005.f_8E.f_2, 0))
									{
										if (Global_1C0005.f_D3.f_24[0] >= STATS::_0x88578F6EC36B4A3A(iVar6, 0))
										{
											iVar4 = iVar6;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0] >= STATS::_0x38491439B6BA7F7D(iVar6, 0))
									{
										iVar4 = iVar6;
									}
									func_173(&Var0);
								}
								iVar6++;
							}
							if (iVar4 < 0)
							{
								iVar4 = Var1.f_3;
							}
						}
						iVar6 = 0;
						if (func_176() && iVar4 == 0)
						{
							if (Global_1C0180.f_A90[iVar9] < 12)
							{
								func_172(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 1);
								Global_1C0180.f_AD7[iVar9] = 0;
								Global_1C0180.f_A90[iVar9]++;
							}
						}
						if (Var1.f_3 > 0)
						{
							STATS::_0x34770B9CE0E03B91(0, &Var0);
							if (func_176() && (func_138(&Var0, &Var10) || func_138(&Var0, &(Global_1C0005.f_169))))
							{
							}
							else if (func_139(Var0) && Global_1C0180.f_A90[iVar9] < 12)
							{
								if (func_138(&Var0, &Var10))
								{
									iVar4 = 0;
									Global_1C0180.f_AD7[1] = 0;
								}
								MemCopy(&(Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
								Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_20 = { Var0 };
								Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3B = 1;
								if (func_171(uParam0->f_2C))
								{
									iVar7 = STATS::_0x88578F6EC36B4A3A(0, Global_1C0180.f_A95);
									if (iVar7 == 1)
									{
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 1;
									}
									else
									{
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 0;
									}
								}
								if (func_187(uParam0->f_2C))
								{
									MemCopy(&(Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_4A = 1;
								iVar2 = 0;
								while (iVar2 < Global_1C0180.f_A94)
								{
									if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar2]))
									{
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_43[iVar2] = STATS::_0x88578F6EC36B4A3A(0, Global_1C0180.f_A96[iVar2]);
									}
									else
									{
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3C[iVar2] = STATS::_0x38491439B6BA7F7D(0, Global_1C0180.f_A96[iVar2]);
									}
									iVar2++;
								}
								Global_1C0180.f_A90[1]++;
							}
							else
							{
								func_173(&Var0);
								STATS::_0x71B008056E5692D6();
								func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
								Global_1C0180.f_A90[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1C0180.f_AD7[iVar9] == 4294967295 && func_176())
								{
									if (Global_1C0180.f_A90[iVar9] >= 1)
									{
										func_172(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
									}
									else
									{
										func_172(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 1);
									}
									Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
									Global_1C0180.f_A90[iVar9]++;
								}
								return 0;
							}
							func_173(&Var0);
						}
						else
						{
							Global_1C0180.f_A90[1] = 0;
							func_173(&Var0);
							STATS::_0x71B008056E5692D6();
							func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
							if (Global_1C0180.f_AD7[iVar9] == 4294967295 && func_176())
							{
								if (Global_1C0180.f_A90[iVar9] >= 1)
								{
									func_172(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_172(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 1);
								}
								Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
								Global_1C0180.f_A90[iVar9]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_176())
						{
							iVar4 = Var1.f_5;
						}
						if (iVar4 > 6)
						{
							iVar5 = (iVar4 - 6);
						}
						else
						{
							iVar5 = 1;
						}
						iVar6 = iVar5;
						iVar6 = iVar5;
						while (iVar6 <= (Var1.f_3 - 1))
						{
							STATS::_0x34770B9CE0E03B91(iVar6, &Var0);
							if (Global_1C0180.f_A90[iVar9] < 12 && Var0.f_60 > 1)
							{
								if (func_176() && iVar4 == iVar6)
								{
									if (!func_138(&(Global_1C0180[iVar9 /*901*/][0 /*75*/].f_20), &Var10))
									{
										func_172(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Var0.f_60);
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_3B = iVar6 + 1;
										Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
										Global_1C0180.f_A90[iVar9]++;
									}
								}
								if (func_176() && (func_138(&Var0, &Var10) || func_138(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C0180.f_A90[1] < 12)
								{
									if (func_139(Var0) && !func_138(&Var0, &(Global_1C0180[iVar9 /*901*/][0 /*75*/].f_20)))
									{
										if (func_138(&Var0, &Var10))
										{
											if (Global_1C0180.f_AD7[1] < 0)
											{
												Global_1C0180.f_AD7[1] = Global_1C0180.f_A90[1];
											}
										}
										MemCopy(&(Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/]), {Var0.f_D}, 16);
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_20 = { Var0 };
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_3B = iVar6 + 1;
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_4A = 1;
										if (func_171(uParam0->f_2C))
										{
											iVar7 = STATS::_0x88578F6EC36B4A3A(iVar6, Global_1C0180.f_A95);
											if (iVar7 == 1)
											{
												Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_3A = 0;
											}
										}
										if (func_187(uParam0->f_2C))
										{
											MemCopy(&(Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										while (iVar2 < Global_1C0180.f_A94)
										{
											if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar2]))
											{
												Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_43[iVar2] = STATS::_0x88578F6EC36B4A3A(iVar6, Global_1C0180.f_A96[iVar2]);
											}
											else
											{
												Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_3C[iVar2] = STATS::_0x38491439B6BA7F7D(iVar6, Global_1C0180.f_A96[iVar2]);
											}
											iVar2++;
										}
										Global_1C0180.f_A90[1]++;
									}
								}
							}
							func_173(&Var0);
							iVar6++;
						}
						STATS::_0x71B008056E5692D6();
						func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						(*uParam0)[1] = 1;
						if (Global_1C0180.f_AD7[iVar9] == 4294967295 && func_176())
						{
							if (Global_1C0180.f_A90[iVar9] >= 1)
							{
								func_172(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
							}
							else
							{
								func_172(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 1);
							}
							Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
							Global_1C0180.f_A90[iVar9]++;
						}
						return 0;
					}
					else
					{
						func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C0180.f_A90[1] = 0;
						(*uParam0)[1] = 1;
						MISC::SET_BIT(&(Global_1C0180.f_B10), 1);
						return 0;
					}
				}
			}
			else
			{
				func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
				Global_1C0180.f_A90[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_165(iVar9, Global_1C0005.f_176);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_178(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)//Position - 0xDF90
{
	switch (*uParam0)
	{
		case 0:
			if (!func_169() && !func_168())
			{
				func_167(*uParam2);
				if (STATS::LEADERBOARDS2_READ_FRIENDS_BY_ROW(uParam2, uParam3, uParam4, iParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, 4294967295))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_179(var uParam0)//Position - 0xE04C
{
	struct<13> Var0;
	struct<97> Var1;
	struct<6> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	
	Var1.f_13.f_1 = 4;
	iVar6 = 4294967295;
	iVar10 = 0;
	Var0 = { func_23(CAM::_0xDC9DA9E8789F5246()) };
	switch ((*uParam0)[iVar10])
	{
		case 0:
			Global_1C0180.f_AD7[iVar10] = 4294967295;
			Global_1C0180.f_A90[iVar10] = 0;
			Global_1C0005.f_176 = 4294967295;
			Global_1C017D = 0;
			if (func_180(uParam0->f_2C))
			{
				if (!Global_1C017D)
				{
					Global_1C017D = 1;
				}
			}
			else if (Global_1C017D)
			{
				Global_1C017D = 0;
			}
			if (!Global_1C017D)
			{
			}
			if (func_175(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 11, &Var0, func_176(), 0, 0, 0))
			{
				func_174(&Var2, &(uParam0->f_2C));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar8 = 0;
						iVar3 = 0;
						if (func_176())
						{
							iVar8 = 0;
							while (iVar8 < Var2.f_3)
							{
								STATS::_0x34770B9CE0E03B91(iVar8, &Var1);
								if (Global_1C0005.f_176 < 0)
								{
									if (func_138(&Var1, &Var0) || func_138(&Var1, &(Global_1C0005.f_169)))
									{
										Global_1C0005.f_176 = Var1.f_60;
									}
								}
								if (iVar6 < 0)
								{
									if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0005.f_8E.f_2, 0))
									{
										if (Global_1C0005.f_D3.f_24[0] >= STATS::_0x88578F6EC36B4A3A(iVar8, 0))
										{
											iVar6 = iVar8;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0] >= STATS::_0x38491439B6BA7F7D(iVar8, 0))
									{
										iVar6 = iVar8;
									}
								}
								func_173(&Var1);
								iVar8++;
							}
							if (iVar6 < 0)
							{
								iVar6 = Var2.f_3;
							}
						}
						iVar8 = 0;
						STATS::_0x34770B9CE0E03B91(0, &Var1);
						if (Var1.f_60 <= 1)
						{
							if (Global_1C0180.f_A90[iVar10] < 12)
							{
								if (func_176() && iVar6 == 0)
								{
									func_172(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Var1.f_60);
									Global_1C0180.f_AD7[iVar10] = 0;
									Global_1C0180.f_A90[iVar10]++;
								}
								if (func_176() && (func_138(&Var1, &Var0) || func_138(&Var1, &(Global_1C0005.f_169))))
								{
								}
								else
								{
									if (func_138(&Var1, &Var0))
									{
										iVar6 = 0;
										Global_1C0180.f_AD7[iVar10] = 0;
									}
									MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), {Var1.f_D}, 16);
									Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_20 = { Var1 };
									Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
									if (func_171(uParam0->f_2C))
									{
										iVar5 = STATS::_0x88578F6EC36B4A3A(0, Global_1C0180.f_A95);
										if (iVar5 == 1)
										{
											Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 0;
										}
									}
									if (func_187(uParam0->f_2C))
									{
										MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_4A = 1;
									iVar3 = 0;
									while (iVar3 < Global_1C0180.f_A94)
									{
										if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar3]))
										{
											Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_43[iVar3] = STATS::_0x88578F6EC36B4A3A(0, Global_1C0180.f_A96[iVar3]);
										}
										else
										{
											Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3C[iVar3] = STATS::_0x38491439B6BA7F7D(0, Global_1C0180.f_A96[iVar3]);
										}
										iVar3++;
									}
									Global_1C0180.f_A90[iVar10]++;
								}
								bVar9 = true;
							}
						}
						if (!bVar9)
						{
							Global_1C0180.f_A90[iVar10]++;
						}
						if (!func_176())
						{
							iVar6 = Var2.f_5;
						}
						if (iVar6 > 6)
						{
							iVar7 = (iVar6 - 6);
						}
						else if (bVar9)
						{
							iVar7 = 1;
						}
						else
						{
							iVar7 = 0;
						}
						iVar8 = iVar7;
						func_173(&Var1);
						iVar8 = iVar7;
						while (iVar8 <= (Var2.f_3 - 1))
						{
							STATS::_0x34770B9CE0E03B91(iVar8, &Var1);
							if (Global_1C0180.f_A90[iVar10] < 12 && Var1.f_60 > 1)
							{
								if (func_176() && iVar6 == iVar8)
								{
									if (!func_138(&(Global_1C0180[iVar10 /*901*/][0 /*75*/].f_20), &Var1))
									{
										func_172(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Var1.f_60);
										Global_1C0180.f_AD7[iVar10] = Global_1C0180.f_A90[iVar10];
										Global_1C0180.f_A90[iVar10]++;
									}
								}
								if (func_176() && (func_138(&Var1, &Var0) || func_138(&Var1, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C0180.f_A90[iVar10] < 12)
								{
									if (func_139(Var1) && !func_138(&(Global_1C0180[iVar10 /*901*/][0 /*75*/].f_20), &Var1))
									{
										if (func_138(&Var1, &Var0))
										{
											if (Global_1C0180.f_AD7[iVar10] < 0)
											{
												Global_1C0180.f_AD7[iVar10] = Global_1C0180.f_A90[iVar10];
											}
										}
										MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), {Var1.f_D}, 16);
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_20 = { Var1 };
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_4A = 1;
										if (func_171(uParam0->f_2C))
										{
											iVar5 = STATS::_0x88578F6EC36B4A3A(iVar8, Global_1C0180.f_A95);
											if (iVar5 == 1)
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 0;
											}
										}
										if (func_187(uParam0->f_2C))
										{
											MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										iVar3 = 0;
										iVar3 = 0;
										while (iVar3 < Global_1C0180.f_A94)
										{
											if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar3]))
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_43[iVar3] = STATS::_0x88578F6EC36B4A3A(iVar8, Global_1C0180.f_A96[iVar3]);
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3C[iVar3] = STATS::_0x38491439B6BA7F7D(iVar8, Global_1C0180.f_A96[iVar3]);
											}
											iVar3++;
										}
										Global_1C0180.f_A90[iVar10]++;
									}
								}
							}
							func_173(&Var1);
							iVar8++;
						}
						STATS::_0x71B008056E5692D6();
						func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						if (bVar9)
						{
							if (Global_1C0180.f_AD7[iVar10] == 4294967295 && func_176())
							{
								if (Global_1C0180.f_A90[iVar10] >= 1)
								{
									func_172(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Global_1C0180[iVar10 /*901*/][(Global_1C0180.f_A90[iVar10] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_172(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), 1);
								}
								Global_1C0180.f_AD7[iVar10] = Global_1C0180.f_A90[iVar10];
								Global_1C0180.f_A90[iVar10]++;
							}
							(*uParam0)[iVar10] = 2;
						}
						else
						{
							(*uParam0)[iVar10] = 1;
						}
					}
					else
					{
						if (!bVar9)
						{
							Global_1C0180.f_A90[iVar10]++;
						}
						STATS::_0x71B008056E5692D6();
						func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C0180.f_AD7[iVar10] = 4294967295;
						(*uParam0)[iVar10] = 1;
					}
				}
				else
				{
					func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C0180.f_AD7[iVar10] = 4294967295;
					(*uParam0)[iVar10] = 1;
					MISC::SET_BIT(&(Global_1C0180.f_B10), iVar10);
				}
			}
			break;
		
		case 1:
			if (Global_1C0180.f_AD7[iVar10] == 4294967295)
			{
				iVar12 = 11;
			}
			else
			{
				iVar12 = 1;
			}
			if (func_166(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, iVar12))
			{
				func_174(&Var2, &(uParam0->f_2C));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar3 = 0;
						while (iVar3 < Var2.f_3)
						{
							STATS::_0x34770B9CE0E03B91(iVar3, &Var1);
							if (func_176() && (func_138(&Var1, &Var0) || func_138(&Var1, &(Global_1C0005.f_169))))
							{
							}
							else
							{
								bVar11 = false;
								if (Global_1C0180[iVar10 /*901*/][0 /*75*/].f_3B > 1 || Global_1C0180[iVar10 /*901*/][0 /*75*/].f_3B <= 0)
								{
									bVar11 = true;
								}
								if (Global_1C0180.f_A90[iVar10] < 12 || bVar11)
								{
									if (iVar3 == 0 || bVar11)
									{
										MemCopy(&(Global_1C0180[iVar10 /*901*/][0 /*75*/]), {Var1.f_D}, 16);
										Global_1C0180[iVar10 /*901*/][0 /*75*/].f_20 = { Var1 };
										Global_1C0180[iVar10 /*901*/][0 /*75*/].f_3B = Var1.f_60;
										if (func_171(uParam0->f_2C))
										{
											iVar5 = STATS::_0x88578F6EC36B4A3A(0, Global_1C0180.f_A95);
											if (iVar5 == 1)
											{
												Global_1C0180[iVar10 /*901*/][0 /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][0 /*75*/].f_3A = 0;
											}
										}
										if (func_187(uParam0->f_2C))
										{
											MemCopy(&(Global_1C0180[iVar10 /*901*/][0 /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1C0180[iVar10 /*901*/][0 /*75*/].f_4A = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1C0180.f_A94)
										{
											if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar4]))
											{
												Global_1C0180[iVar10 /*901*/][iVar3 /*75*/].f_43[iVar4] = STATS::_0x88578F6EC36B4A3A(iVar3, Global_1C0180.f_A96[iVar4]);
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][iVar3 /*75*/].f_3C[iVar4] = STATS::_0x38491439B6BA7F7D(iVar3, Global_1C0180.f_A96[iVar4]);
											}
											iVar4++;
										}
										if (Global_1C0180.f_A90[iVar10] == 0)
										{
											if (bVar11)
											{
											}
											else
											{
												Global_1C0180.f_A90[iVar10]++;
											}
										}
										else if (Global_1C0180.f_A90[iVar10] == 1 && Global_1C0180.f_AD7[iVar10] == 4294967295)
										{
											Global_1C0180.f_A90[iVar10]++;
										}
									}
									else if (Global_1C0180.f_A90[iVar10] < 12)
									{
										MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), {Var1.f_D}, 16);
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_20 = { Var1 };
										if (func_171(uParam0->f_2C))
										{
											iVar5 = STATS::_0x88578F6EC36B4A3A(iVar3, Global_1C0180.f_A95);
											if (iVar5 == 1)
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 0;
											}
										}
										if (func_187(uParam0->f_2C))
										{
											MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_4A = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1C0180.f_A94)
										{
											if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar4]))
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_43[iVar4] = STATS::_0x88578F6EC36B4A3A(iVar3, Global_1C0180.f_A96[iVar4]);
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3C[iVar4] = STATS::_0x38491439B6BA7F7D(iVar3, Global_1C0180.f_A96[iVar4]);
											}
											iVar4++;
										}
										if (iVar3 != 0)
										{
											Global_1C0180.f_A90[iVar10]++;
										}
									}
								}
							}
							func_173(&Var1);
							iVar3++;
						}
					}
					STATS::_0x71B008056E5692D6();
					func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					(*uParam0)[iVar10] = 2;
				}
				else
				{
					MISC::SET_BIT(&(Global_1C0180.f_B10), iVar10);
					func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C0180.f_A90[iVar10] = 0;
					(*uParam0)[iVar10] = 2;
					Global_1C0180.f_A90[1] = 0;
					(*uParam0)[1] = 1;
					Global_1C0180.f_A90[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1C0180.f_AD7[iVar10] == 4294967295 && func_176())
			{
				if (Global_1C0180.f_A90[iVar10] >= 1)
				{
					func_172(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Global_1C0180[iVar10 /*901*/][(Global_1C0180.f_A90[iVar10] - 1) /*75*/].f_3B + 1);
				}
				else
				{
					func_172(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), 1);
				}
				Global_1C0180.f_AD7[iVar10] = Global_1C0180.f_A90[iVar10];
				Global_1C0180.f_A90[iVar10]++;
			}
			break;
		
		case 2:
			func_165(iVar10, Global_1C0005.f_176);
			(*uParam0)[iVar10] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_180(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65)//Position - 0xEE87
{
	int iVar0;
	
	if (Global_1C017C)
	{
		if (Global_1C0005.f_5 != 0)
		{
			if (Global_1C0005.f_5 == Param0)
			{
				if (Global_1C0005.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(Global_1C0005.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_1C0005.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_181(var uParam0)//Position - 0xEF1F
{
	int iVar0;
	
	if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1C0180.f_B0A))
	{
		iVar0 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_1C0180.f_B0A);
		if (iVar0 < 300000)
		{
			MISC::SET_BIT(&(uParam0->f_2A), 5);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_2A), 5);
			func_151(Global_1C0180.f_B0A, 4294967295);
		}
	}
}

bool func_182(var uParam0)//Position - 0xEF6F
{
	return uParam0->f_1;
}

void func_183(int iParam0)//Position - 0xEF7B
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0))
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, 255, 255, 255, 0, 0);
	}
}

void func_184(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xEF9B
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var2;
	bool bVar3;
	struct<13> Var4;
	int iVar5;
	struct<13> Var6;
	int iVar7;
	
	sVar0 = "";
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam2, 6))
	{
		*iParam1++;
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && GRAPHICS::_DRAW_SHOWROOM())
		{
			if (MISC::IS_ORBIS_VERSION() && !NETWORK::_0x72D918C99BCACC54(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var4 = { func_23(CAM::_0xDC9DA9E8789F5246()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var4))
				{
					NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var4);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var2 = { Var1.f_1 };
						bVar3 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(*iParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
	if (bVar3)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&Var2);
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	*iParam1++;
	if (bParam4)
	{
		iVar5 = 0;
		MISC::SET_BIT(&iVar5, 7);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(*iParam1);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar5);
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1C0180.f_B10 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam2, 5))
		{
			if (NETWORK::NETWORK_GET_FRIEND_COUNT() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam2, 6))
		{
			if (NETWORK::_0x67A5589628E0CFF6())
			{
				if (NETWORK::_0xBA9775570DB788CF())
				{
					if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && GRAPHICS::_DRAW_SHOWROOM())
					{
						if (MISC::IS_ORBIS_VERSION() && !NETWORK::_0x72D918C99BCACC54(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var6 = { func_23(CAM::_0xDC9DA9E8789F5246()) };
							if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var6))
							{
								NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var6);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var2 = { Var1.f_1 };
									bVar3 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar7 = 0;
		MISC::SET_BIT(&iVar7, 7);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(*iParam1);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar7);
		if (bVar3)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
			HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&Var2);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		*iParam1++;
	}
}

void func_185(int iParam0, char* sParam1, var uParam2, int iParam3)//Position - 0xF271
{
	int iVar0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_TITLE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam2[iVar0 /*6*/]);
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		iVar0++;
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_186(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0xF2B3
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_MULTIPLAYER_TITLE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	if (iParam5 == 4294967295)
	{
		if (bParam4)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				HUD::_ADD_TEXT_COMPONENT_SCALEFORM(sParam3);
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				HUD::_ADD_TEXT_COMPONENT_SCALEFORM(sParam3);
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
	}
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

int func_187(int iParam0)//Position - 0xF343
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_188(int iParam0, int iParam1)//Position - 0xF365
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DISPLAY_TYPE");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

int func_189()//Position - 0xF382
{
	return unk_0x9934FEFB3B8C6DB8("SC_LEADERBOARD");
}

bool func_190()//Position - 0xF392
{
	return func_191(CAM::_0xDC9DA9E8789F5246());
}

int func_191(int iParam0)//Position - 0xF3A2
{
	switch (func_192(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 40:
		case 35:
		case 38:
		case 41:
			return 0;
		
		default:
	}
	return 1;
}

int func_192(int iParam0)//Position - 0xF402
{
	return Global_1841F3[iParam0 /*790*/].f_C4;
}

void func_193(int iParam0)//Position - 0xF415
{
	Global_141370 = iParam0;
}

void func_194(int iParam0)//Position - 0xF423
{
	Global_14E696.f_437 = iParam0;
}

void func_195(bool bParam0)//Position - 0xF434
{
	if (bParam0)
	{
		func_197();
	}
	func_196(4, 4294967295);
	func_196(6, 4294967295);
	func_196(7, 4294967295);
	func_196(3, 4294967295);
	func_196(1, 4294967295);
	func_196(2, 4294967295);
	func_196(11, 4294967295);
	func_196(13, 4294967295);
	func_196(14, 4294967295);
	func_196(16, 4294967295);
}

void func_196(int iParam0, int iParam1)//Position - 0xF485
{
	MISC::SET_BIT(&(Global_14E0B5.f_417), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > 4294967295)
			{
				Global_14E0B5.f_AA[iParam1] = 1;
			}
			break;
	}
}

void func_197()//Position - 0xF4BB
{
	Global_26862F.f_11A7 = 0;
}

void func_198(var uParam0, bool bParam1, bool bParam2)//Position - 0xF4CB
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = HUD::_0x13C4B962653A5280();
		}
		else
		{
			*uParam0 = NETWORK::_0x89023FBBF9200E9F();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

int func_199(int iParam0, bool bParam1)//Position - 0xF508
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1C171C.f_2 + 5 < MISC::GET_FRAME_COUNT() && Global_1C171C.f_2 > 0)
	{
		func_92(&Global_1C171C);
		func_92(&(Global_1C171C.f_31));
		*iParam0 = 0;
		Global_1C171C.f_2 = 0;
		func_207(0);
	}
	Global_1C171C.f_2 = MISC::GET_FRAME_COUNT();
	iVar1 = 4294967295;
	if (MISC::IS_ORBIS_VERSION())
	{
		if (NETWORK::_0xBD545D44CCE70597() == 0)
		{
			iVar1 = NETWORK::_0x74FB3E29E6D10FA9();
		}
	}
	if ((MISC::IS_ORBIS_VERSION() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_205() && NETWORK::NETWORK_IS_SIGNED_ONLINE()))
	{
		if (NETWORK::_NETWORK_IS_PSN_AVAILABLE())
		{
			func_202(&(Global_1C171C.f_3), func_204(&(Global_1C171C.f_3)));
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4))
			{
				MISC::SET_BIT(iParam0, 4);
				StringCopy(&(Global_1C171C.f_3.f_1), "", 64);
				func_200(&(Global_1C171C.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
			}
			else if (iVar1 == 2)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
			}
			else if (iVar1 == 1)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
			}
			else if (iVar1 == 5)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
			}
			else if (!func_205())
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 0))
			{
				if (!PAD::IS_CONTROL_PRESSED(2, 201))
				{
					MISC::SET_BIT(iParam0, 0);
				}
			}
			else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
			{
				func_92(&(Global_1C171C.f_31));
				func_92(&Global_1C171C);
				*iParam0 = 0;
				Global_1C171C.f_2 = 0;
				func_207(0);
				return 1;
			}
		}
	}
	else
	{
		func_202(&(Global_1C171C.f_3), func_204(&(Global_1C171C.f_3)));
		if ((func_182(&(Global_1C171C.f_31)) && !func_145(&(Global_1C171C.f_31), 2000, 1)) && !NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			MISC::SET_BIT(iParam0, 3);
			StringCopy(&(Global_1C171C.f_3.f_1), "", 64);
			func_200(&(Global_1C171C.f_3), 0);
		}
		else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 3))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 1))
			{
				PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(0);
				MISC::SET_BIT(iParam0, 1);
				StringCopy(&(Global_1C171C.f_3.f_1), "", 64);
				func_200(&(Global_1C171C.f_3), 0);
			}
		}
		if (func_182(&Global_1C171C))
		{
			if (!func_145(&Global_1C171C, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
				{
					if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
					}
					else
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
					}
					if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 0))
						{
							if (!PAD::IS_CONTROL_PRESSED(2, 201))
							{
								MISC::SET_BIT(iParam0, 0);
							}
						}
						else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
						{
							func_92(&Global_1C171C);
							*iParam0 = 0;
							Global_1C171C.f_2 = 0;
							func_207(0);
							return 1;
						}
					}
				}
				else
				{
					func_92(&Global_1C171C);
					*iParam0 = 0;
					Global_1C171C.f_2 = 0;
					func_207(0);
					return 1;
				}
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 3))
			{
				if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 0))
				{
					if (!PAD::IS_CONTROL_PRESSED(2, 201))
					{
						MISC::SET_BIT(iParam0, 0);
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
				{
					func_92(&(Global_1C171C.f_31));
					func_92(&Global_1C171C);
					*iParam0 = 0;
					Global_1C171C.f_2 = 0;
					func_207(0);
					return 1;
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
				}
				if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 0))
					{
						if (!PAD::IS_CONTROL_PRESSED(2, 201))
						{
							MISC::SET_BIT(iParam0, 0);
						}
					}
					else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
					{
						func_92(&(Global_1C171C.f_31));
						func_92(&Global_1C171C);
						*iParam0 = 0;
						Global_1C171C.f_2 = 0;
						func_207(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_200(var uParam0, bool bParam1)//Position - 0xF97F
{
	func_201(uParam0);
	if (bParam1)
	{
		func_207(0);
	}
	uParam0->f_23 = 1;
}

void func_201(var uParam0)//Position - 0xF99C
{
	struct<46> Var0;
	
	Var0.f_29 = 1;
	*uParam0 = { Var0 };
}

void func_202(var uParam0, int iParam1)//Position - 0xF9B7
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_203(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_24)
		{
			HUD::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_21);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22);
			HUD::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_29);
		}
		else if (uParam0->f_25)
		{
			HUD::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_21);
			HUD::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_29);
		}
		else if (uParam0->f_27)
		{
			HUD::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_11));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_21);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22);
			HUD::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_29);
		}
		else if (uParam0->f_26)
		{
			HUD::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_11));
			HUD::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_29);
		}
		else if (uParam0->f_28)
		{
			HUD::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam0->f_21, 70);
			HUD::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_29);
		}
		else
		{
			HUD::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			HUD::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_29);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_203(var uParam0)//Position - 0xFAB5
{
	uParam0->f_23 = 0;
}

int func_204(var uParam0)//Position - 0xFAC2
{
	return uParam0->f_23;
}

int func_205()//Position - 0xFACE
{
	if (func_206())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_206()//Position - 0xFAEE
{
	return Global_258443;
}

void func_207(bool bParam0)//Position - 0xFAFA
{
	HUD::_REMOVE_LOADING_PROMPT();
	if (bParam0)
	{
		unk_0xDC1A2868428162E5();
	}
}

int func_208(var uParam0, bool bParam1, bool bParam2)//Position - 0xFB0F
{
	if (!iLocal_166)
	{
		func_220(&(uParam0->f_48), bParam1);
		iLocal_166 = 1;
		func_326(&(uParam0->f_29A), 9, 0);
	}
	else
	{
		if (Global_1C0005.f_1 && !Global_1C0005.f_2)
		{
			func_217(190, bParam1);
			Global_1C0005.f_2 = 1;
			*bParam2 = 1;
		}
		if (func_209(&(uParam0->f_48)))
		{
			Global_1C017C = 1;
			return 1;
		}
	}
	return 0;
}

int func_209(var uParam0)//Position - 0xFB78
{
	struct<98> Var0;
	struct<4> Var1;
	struct<37> Var2;
	struct<13> Var3;
	int iVar4;
	
	Var0.f_13.f_1 = 4;
	Var2.f_3 = 32;
	Var2.f_24 = 32;
	if (func_187(uParam0->f_2C))
	{
		Var3 = { Global_1C0005.f_169 };
	}
	else
	{
		Var3 = { func_23(CAM::_0xDC9DA9E8789F5246()) };
	}
	switch (Global_1C0005)
	{
		case 0:
			if (func_216(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), &Var3))
			{
				func_174(&Var1, &(uParam0->f_2C));
				Global_1C0005.f_8E = uParam0->f_2C;
				Global_1C0005.f_8E.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(uParam0->f_2C, 0);
				iVar4 = 0;
				while (iVar4 < Global_1C0005.f_8E.f_1)
				{
					if (!func_215(uParam0->f_2C, iVar4))
					{
						if (func_214(uParam0->f_2C, 4, iVar4))
						{
							MISC::SET_BIT(&(Global_1C0005.f_8E.f_2), iVar4);
						}
						else
						{
							GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0005.f_8E.f_2), iVar4);
						}
					}
					iVar4++;
				}
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						STATS::_0x34770B9CE0E03B91(0, &Var0);
						if (Var0.f_61 != Global_1C0005.f_8E.f_1)
						{
						}
						if (!func_139(Var0))
						{
							Global_1C0005.f_4 = 1;
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < Global_1C0005.f_8E.f_1)
							{
								if (!func_215(uParam0->f_2C, iVar4))
								{
									if (func_214(uParam0->f_2C, 4, iVar4))
									{
										Global_1C0005.f_49.f_24[iVar4] = STATS::_0x88578F6EC36B4A3A(0, iVar4);
										if (Global_1C0005.f_49.f_24[iVar4] == 4294967295)
										{
											if (iVar4 > Var0.f_61)
											{
												Global_1C0005.f_49.f_24[iVar4] = 0;
											}
										}
									}
									else
									{
										Global_1C0005.f_49.f_3[iVar4] = STATS::_0x38491439B6BA7F7D(0, iVar4);
										if (Global_1C0005.f_49.f_3[iVar4] == -1f)
										{
											if (iVar4 > Var0.f_61)
											{
												Global_1C0005.f_49.f_3[iVar4] = 0f;
											}
										}
									}
								}
								iVar4++;
							}
						}
					}
					else
					{
						Global_1C0005.f_4 = 1;
					}
					STATS::_0x71B008056E5692D6();
				}
				else
				{
					Global_1C0005.f_4 = 1;
				}
				Global_1C0005 = 1;
				func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
			}
			break;
		
		case 1:
			Global_1C0005.f_1 = 1;
			if (Global_1C0005.f_2)
			{
				func_213();
				if (Global_1C0005.f_4)
				{
					if (func_212(uParam0->f_2C))
					{
						Global_1C0005 = 3;
					}
					else
					{
						Global_1C0005 = 2;
					}
				}
				else
				{
					Global_1C0005 = 2;
				}
			}
			break;
		
		case 2:
			STATS::_0xC38DC1E90D22547C(&(Global_1C0005.f_49), &(Global_1C0005.f_8E), &(Global_1C0005.f_D3));
			Global_1C0005 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_1C0005.f_D3 = { Global_1C0005.f_8E };
			Global_1C0005 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_211())
			{
				if (func_210())
				{
					Global_1C0005 = 99;
				}
				else
				{
					Global_1C0005 = 999;
					return 1;
				}
			}
			else
			{
				Global_1C0005 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_212(uParam0->f_2C))
			{
				Global_1C0005.f_118 = { Global_1C0005.f_8E };
			}
			else
			{
				Var2 = Global_1C0005.f_8E;
				Var2.f_1 = Global_1C0005.f_8E.f_1;
				Var2.f_2 = Global_1C0005.f_8E.f_2;
				STATS::_0xC38DC1E90D22547C(&Var2, &(Global_1C0005.f_8E), &(Global_1C0005.f_118));
			}
			Global_1C0005 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_175(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, &Var3, 1, 1, Global_1C0005.f_118.f_24[0], Global_1C0005.f_118.f_3[0]))
			{
				func_174(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						STATS::_0x34770B9CE0E03B91(0, &Var0);
						if (MISC::ARE_STRINGS_EQUAL(&(Var0.f_D), ""))
						{
							Global_EC5D3.f_1 = 4294967295;
						}
						else
						{
							Global_EC5D3.f_1 = Var0.f_60;
						}
					}
					else
					{
						Global_EC5D3.f_1 = 4294967295;
					}
					STATS::_0x71B008056E5692D6();
				}
				else
				{
					Global_EC5D3.f_1 = 4294967295;
				}
				Global_1C0005 = 999;
				func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_210()//Position - 0xFF9C
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_EA450.f_8, 1);
}

var func_211()//Position - 0xFFAF
{
	return Global_257B9F.f_3;
}

int func_212(int iParam0)//Position - 0xFFBD
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_213()//Position - 0x100CA
{
	Global_1C0005.f_49 = Global_1C0005.f_8E;
	Global_1C0005.f_49.f_1 = Global_1C0005.f_8E.f_1;
	Global_1C0005.f_49.f_2 = Global_1C0005.f_8E.f_2;
	Global_1C0005.f_D3 = Global_1C0005.f_8E;
	Global_1C0005.f_D3.f_1 = Global_1C0005.f_8E.f_1;
	Global_1C0005.f_D3.f_2 = Global_1C0005.f_8E.f_2;
}

int func_214(int iParam0, int iParam1, int iParam2)//Position - 0x1012A
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = STATS::LEADERBOARDS_GET_COLUMN_TYPE(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_215(int iParam0, int iParam1)//Position - 0x1022C
{
	if (STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_216(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x10287
{
	switch (*uParam0)
	{
		case 0:
			if (!func_169() && !func_168())
			{
				func_167(*uParam2);
				if (STATS::LEADERBOARDS2_READ_BY_HANDLE(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, 4294967295))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_217(int iParam0, bool bParam1)//Position - 0x1033B
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	if (!PLAYER::IS_PLAYER_ONLINE())
	{
		return;
	}
	StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_219(iParam0, &Var0, &Var1, 1, 4294967295, 1, 0))
	{
		func_218(190, 131, 0, 0f, 1);
		func_218(190, 103, iLocal_106[1], 0f, 0);
		func_218(190, 99, iLocal_106[2], 0f, 0);
		func_218(190, 109, iLocal_106[3], 0f, 0);
		func_218(190, 106, iLocal_106[5], 0f, 0);
		func_218(190, 2, iLocal_106[10], 0f, 0);
		func_218(190, 107, iLocal_106[8], 0f, 0);
		func_218(190, 116, iLocal_106[6], 0f, 0);
		iLocal_106[1] = 0;
		iLocal_106[2] = 0;
		iLocal_106[3] = 0;
		iLocal_106[5] = 0;
		iLocal_106[10] = 0;
		iLocal_106[8] = 0;
		iLocal_106[6] = 0;
	}
}

void func_218(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)//Position - 0x1042B
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		STATS::_0x0BCA1D2C47B0D269(iParam1, iParam2, fParam3);
	}
	if (!Global_1C0005.f_3)
	{
		Global_1C0005.f_8E = iParam0;
		Global_1C0005.f_8E.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(Global_1C0005.f_8E, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1C0005.f_8E.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_214(iParam0, 4, iVar1))
				{
					MISC::SET_BIT(&(Global_1C0005.f_8E.f_2), iVar1);
				}
				else
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0005.f_8E.f_2), iVar1);
				}
			}
			else
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0005.f_8E.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1C0005.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_1C0005.f_8E.f_24[iVar0] = iParam2;
	Global_1C0005.f_8E.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		MISC::SET_BIT(&(Global_1C0005.f_8E.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0005.f_8E.f_2), iVar0);
	}
}

int func_219(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x10546
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
		Var0 = uParam0;
		if (iParam4 == 4294967295)
		{
			if (GRAPHICS::_DRAW_SHOWROOM())
			{
				Var2 = { func_23(CAM::_0xDC9DA9E8789F5246()) };
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

void func_220(var uParam0, bool bParam1)//Position - 0x1067A
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 4294967295;
	}
	func_221(uParam0, 14, "DartsLB", "", iVar0, 4294967295, 0, 0);
}

void func_221(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0x106A2
{
	struct<8> Var0;
	struct<8> Var1;
	int iVar2;
	struct<6> Var3;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1C0180.f_AD1 = 0;
	Global_1C0180.f_AD2 = 0;
	Global_1C0180.f_AD0 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_230())
				{
					uParam0->f_2C = 826;
				}
				else
				{
					uParam0->f_2C = 815;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_230())
				{
					uParam0->f_2C.f_3 = 2;
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1C0180.f_ADC.f_1A = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1C0180.f_ADC.f_1A = 4294967295;
				}
				Global_1C0180.f_ADC = 1;
				if (iParam5 <= 0 || func_230())
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 3;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A95 = 4;
					Global_1C0180.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					Global_1C0180.f_ADC.f_1C = 4;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 3;
					Global_1C0180.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 2;
					Global_1C0180.f_A96[1] = 1;
					Global_1C0180.f_A96[2] = 3;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A95 = 4;
					Global_1C0180.f_A94 = 3;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					Global_1C0180.f_ADC.f_1C = 5;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 1;
					Global_1C0180.f_ADC.f_1D[2] = 3;
					Global_1C0180.f_ADC.f_1D[3] = 5;
				}
				Global_1C0180.f_ADB = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_230())
				{
					uParam0->f_2C = 827;
				}
				else
				{
					uParam0->f_2C = 824;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_230())
				{
					uParam0->f_2C.f_3 = 2;
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1C0180.f_ADC.f_1A = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C0180.f_ADC.f_1A = 4294967295;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1C0180.f_ADC = 1;
				if (iParam5 <= 0 || func_230())
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 5;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A95 = 6;
					Global_1C0180.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					Global_1C0180.f_ADC.f_1C = 4;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 3;
					Global_1C0180.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 2;
					Global_1C0180.f_A96[1] = 1;
					Global_1C0180.f_A96[2] = 5;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A94 = 3;
					Global_1C0180.f_A95 = 6;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					Global_1C0180.f_ADC.f_1C = 5;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 1;
					Global_1C0180.f_ADC.f_1D[2] = 3;
					Global_1C0180.f_ADC.f_1D[3] = 5;
				}
				Global_1C0180.f_ADB = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_230())
				{
					uParam0->f_2C = 828;
				}
				else
				{
					uParam0->f_2C = 825;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 2;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					NETWORK::NETWORK_PLAYER_GET_USERID(CAM::_0xDC9DA9E8789F5246(), &Var3);
					MemCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), {Var3}, 8);
					Global_1C0180.f_ADC.f_1B = 1;
				}
				if (iParam5 > 0 && !func_230())
				{
					uParam0->f_2C.f_3 = 3;
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[2 /*16*/].f_8 = { Var1 };
					Global_1C0180.f_ADC.f_1A = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C0180.f_ADC.f_1A = 4294967295;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_230())
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 3;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A95 = 4;
					Global_1C0180.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					Global_1C0180.f_ADC.f_1C = 4;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 3;
					Global_1C0180.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 2;
					Global_1C0180.f_A96[1] = 1;
					Global_1C0180.f_A96[2] = 3;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A94 = 3;
					Global_1C0180.f_A95 = 4;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					Global_1C0180.f_ADC.f_1C = 5;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 1;
					Global_1C0180.f_ADC.f_1D[2] = 3;
					Global_1C0180.f_ADC.f_1D[3] = 5;
				}
				Global_1C0180.f_ADB = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_230())
				{
					uParam0->f_2C = 928;
				}
				else
				{
					uParam0->f_2C = 849;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_230())
				{
					uParam0->f_2C.f_3 = 2;
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1C0180.f_ADC.f_1A = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C0180.f_ADC.f_1A = 4294967295;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1C0180.f_ADC = 1;
				if (iParam5 <= 0 || func_230())
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 0;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A95 = 0;
					Global_1C0180.f_A94 = 1;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					Global_1C0180.f_ADC.f_1C = 4;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 2;
					Global_1C0180.f_A96[1] = 1;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					Global_1C0180.f_ADC.f_1C = 5;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 1;
					Global_1C0180.f_ADC.f_1D[2] = 5;
				}
				Global_1C0180.f_ADB = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_230())
				{
					uParam0->f_2C = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_2C = 975;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_230())
				{
					Global_1C0180.f_ADC.f_1A = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1C0180.f_ADC.f_1A = 4294967295;
				}
				Global_1C0180.f_ADC = 1;
				if (iParam5 <= 0 || func_230())
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 3;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A95 = 4;
					Global_1C0180.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					Global_1C0180.f_ADC.f_1C = 4;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 3;
					Global_1C0180.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 2;
					Global_1C0180.f_A96[1] = 1;
					Global_1C0180.f_A96[2] = 3;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A95 = 4;
					Global_1C0180.f_A94 = 3;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					Global_1C0180.f_ADC.f_1C = 5;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 1;
					Global_1C0180.f_ADC.f_1D[2] = 3;
					Global_1C0180.f_ADC.f_1D[3] = 5;
				}
				Global_1C0180.f_ADB = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0)
			{
				uParam0->f_2C = 762;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C0180.f_A9D[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C0180.f_A96[0] = 0;
				Global_1C0180.f_A96[1] = 4;
				Global_1C0180.f_A96[2] = 6;
				Global_1C0180.f_A96[3] = 3;
				Global_1C0180.f_A96[4] = 1;
				Global_1C0180.f_A96[5] = 2;
				Global_1C0180.f_A94 = 6;
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[5]);
				Global_1C0180.f_ADC.f_1C = 5;
				Global_1C0180.f_ADC.f_1D[0] = 4;
				Global_1C0180.f_ADC.f_1D[1] = 5;
				Global_1C0180.f_ADC.f_1D[2] = 5;
				Global_1C0180.f_ADC.f_1D[3] = 4;
				Global_1C0180.f_ADC.f_1D[4] = 5;
				Global_1C0180.f_ADC.f_1D[5] = 5;
			}
			else if (iParam4 == 1)
			{
				uParam0->f_2C = 822;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C0180.f_A9D[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C0180.f_A96[0] = 0;
				Global_1C0180.f_A96[1] = 4;
				Global_1C0180.f_A96[2] = 6;
				Global_1C0180.f_A96[3] = 3;
				Global_1C0180.f_A96[4] = 1;
				Global_1C0180.f_A96[5] = 2;
				Global_1C0180.f_A94 = 6;
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[5]);
				Global_1C0180.f_ADC.f_1C = 5;
				Global_1C0180.f_ADC.f_1D[0] = 4;
				Global_1C0180.f_ADC.f_1D[1] = 5;
				Global_1C0180.f_ADC.f_1D[2] = 5;
				Global_1C0180.f_ADC.f_1D[3] = 4;
				Global_1C0180.f_ADC.f_1D[4] = 5;
				Global_1C0180.f_ADC.f_1D[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_2C = 823;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C0180.f_A9D[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C0180.f_A96[0] = 0;
				Global_1C0180.f_A96[1] = 4;
				Global_1C0180.f_A96[2] = 6;
				Global_1C0180.f_A96[3] = 3;
				Global_1C0180.f_A96[4] = 1;
				Global_1C0180.f_A96[5] = 2;
				Global_1C0180.f_A94 = 6;
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[5]);
				Global_1C0180.f_ADC.f_1C = 5;
				Global_1C0180.f_ADC.f_1D[0] = 4;
				Global_1C0180.f_ADC.f_1D[1] = 5;
				Global_1C0180.f_ADC.f_1D[2] = 5;
				Global_1C0180.f_ADC.f_1D[3] = 4;
				Global_1C0180.f_ADC.f_1D[4] = 5;
				Global_1C0180.f_ADC.f_1D[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_2C = 193;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 1;
			Global_1C0180.f_A96[2] = 3;
			Global_1C0180.f_A96[3] = 0;
			Global_1C0180.f_A94 = 3;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 7;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 94:
			uParam0->f_2C = 193;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 1;
			Global_1C0180.f_A96[2] = 3;
			Global_1C0180.f_A96[3] = 0;
			Global_1C0180.f_A94 = 3;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 7;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 92:
			uParam0->f_2C = 811;
			uParam0->f_2C.f_1 = 1;
			uParam0->f_2C.f_3 = 0;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_9), "CMSW", 64);
			Global_1C0180.f_ADC.f_19 = 0;
			Global_1C0180.f_ADC = 0;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 5;
			Global_1C0180.f_A96[2] = 2;
			Global_1C0180.f_A96[3] = 4;
			Global_1C0180.f_A96[4] = 6;
			Global_1C0180.f_A94 = 5;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
			Global_1C0180.f_ADC.f_1C = 6;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 6;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			Global_1C0180.f_ADC.f_1D[4] = 5;
			break;
		
		case 15:
			uParam0->f_2C = 749;
			uParam0->f_2C.f_1 = 1;
			uParam0->f_2C.f_3 = 0;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_ARM", 32);
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C0180.f_A96[0] = 2;
			Global_1C0180.f_A96[1] = 5;
			Global_1C0180.f_A96[2] = 0;
			Global_1C0180.f_A96[3] = 0;
			Global_1C0180.f_A94 = 3;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 4;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 14:
			uParam0->f_2C = 190;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == 4294967295)
			{
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_DARTS", 32);
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 7;
			Global_1C0180.f_A96[2] = 5;
			Global_1C0180.f_A96[3] = 0;
			Global_1C0180.f_A94 = 3;
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 4;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 12:
			uParam0->f_2C = 283;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1C0180.f_ADC.f_9), iParam4 + 1, 64);
			}
			Global_1C0180.f_ADC.f_19 = 0;
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 9;
			Global_1C0180.f_A96[2] = 7;
			Global_1C0180.f_A96[3] = 5;
			Global_1C0180.f_A96[4] = 2;
			Global_1C0180.f_A94 = 5;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			Global_1C0180.f_ADC.f_1D[4] = 5;
			break;
		
		case 87:
			uParam0->f_2C = 283;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			Global_1C0180.f_ADC.f_19 = 0;
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 9;
			Global_1C0180.f_A96[2] = 7;
			Global_1C0180.f_A96[3] = 5;
			Global_1C0180.f_A96[4] = 2;
			Global_1C0180.f_A94 = 5;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			Global_1C0180.f_ADC.f_1D[4] = 5;
			break;
		
		case 13:
			uParam0->f_2C = 912;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1C0180.f_ADC.f_19 = 0;
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_ACC", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 2;
			Global_1C0180.f_A96[2] = 1;
			Global_1C0180.f_A96[3] = 3;
			Global_1C0180.f_A94 = 4;
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			Global_1C0180.f_ADC.f_1C = 4;
			Global_1C0180.f_ADC.f_1D[0] = 4;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_2C = 203;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1C0180.f_ADC.f_9), {func_229(iParam1)}, 16);
			Global_1C0180.f_ADC.f_19 = 0;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 7;
			Global_1C0180.f_A94 = 2;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			Global_1C0180.f_ADC.f_1C = 4;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_2C = 202;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			Global_1C0180.f_ADC.f_19 = 0;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 0;
			Global_1C0180.f_A96[2] = 0;
			Global_1C0180.f_A96[3] = 0;
			Global_1C0180.f_A94 = 1;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			Global_1C0180.f_ADC.f_1C = 3;
			Global_1C0180.f_ADC.f_1D[0] = 2;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 0;
			Global_1C0180.f_ADC.f_1D[3] = 0;
			break;
		
		case 80:
			uParam0->f_2C = 817;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 3;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_1C0180.f_ADC.f_19 = 0;
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1C0180.f_A96[0] = 3;
			Global_1C0180.f_A94 = 1;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			Global_1C0180.f_ADC.f_1C = 3;
			Global_1C0180.f_ADC.f_1D[0] = 1;
			break;
		
		case 3:
			uParam0->f_2C = 791;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 1;
			Global_1C0180.f_A96[2] = 2;
			Global_1C0180.f_A96[3] = 3;
			Global_1C0180.f_A94 = 4;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_2C = 1200;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1C0180.f_A96[0] = 0;
				Global_1C0180.f_A96[1] = 1;
				Global_1C0180.f_A96[2] = 4;
				Global_1C0180.f_A96[3] = 5;
				Global_1C0180.f_A96[4] = 6;
				Global_1C0180.f_A94 = 3;
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
				Global_1C0180.f_ADC.f_1C = 6;
				Global_1C0180.f_ADC.f_1D[0] = 5;
				Global_1C0180.f_ADC.f_1D[1] = 11;
				Global_1C0180.f_ADC.f_1D[2] = 4;
				Global_1C0180.f_ADC.f_1D[3] = 5;
				Global_1C0180.f_ADC.f_1D[4] = 5;
			}
			else if (Global_440000.f_3D == 1)
			{
				uParam0->f_2C = 777;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (Global_440000.f_2 == 5)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else if (Global_440000.f_2 == 5)
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1C0180.f_A96[0] = 0;
				Global_1C0180.f_A96[1] = 1;
				Global_1C0180.f_A96[2] = 2;
				Global_1C0180.f_A96[3] = 0;
				Global_1C0180.f_A94 = 3;
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
				Global_1C0180.f_ADC.f_1C = 5;
				Global_1C0180.f_ADC.f_1D[0] = 2;
				Global_1C0180.f_ADC.f_1D[1] = 5;
				Global_1C0180.f_ADC.f_1D[2] = 5;
				Global_1C0180.f_ADC.f_1D[3] = 5;
			}
			else
			{
				uParam0->f_2C = 780;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (Global_440000.f_2 == 5)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else if (Global_440000.f_2 == 5)
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_228(Global_440000.f_2559E) || func_225(Global_440000.f_2559E))
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 0;
					Global_1C0180.f_A96[1] = 2;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					Global_1C0180.f_ADC.f_1C = 4;
					Global_1C0180.f_ADC.f_1D[0] = 5;
					Global_1C0180.f_ADC.f_1D[1] = 5;
					Global_1C0180.f_ADC.f_1D[2] = 5;
				}
				else if (func_224(Global_440000.f_2559E))
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 0;
					Global_1C0180.f_A96[1] = 2;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					Global_1C0180.f_ADC.f_1C = 4;
					Global_1C0180.f_ADC.f_1D[0] = 5;
					Global_1C0180.f_ADC.f_1D[1] = 5;
					Global_1C0180.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 0;
					Global_1C0180.f_A96[1] = 1;
					Global_1C0180.f_A96[2] = 2;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A94 = 3;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					Global_1C0180.f_ADC.f_1C = 5;
					Global_1C0180.f_ADC.f_1D[0] = 5;
					Global_1C0180.f_ADC.f_1D[1] = 5;
					Global_1C0180.f_ADC.f_1D[2] = 5;
					Global_1C0180.f_ADC.f_1D[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_2C = 795;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 1;
			MISC::SET_BIT(&(Global_1C0180.f_AD0), 1);
			Global_1C0180.f_AC2[1] = 4294967295;
			Global_1C0180.f_A96[2] = 2;
			Global_1C0180.f_A96[3] = 0;
			Global_1C0180.f_A94 = 3;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 11;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 85:
			uParam0->f_2C = 274;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			Global_1C0180.f_ADC.f_19 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 3;
			Global_1C0180.f_A94 = 2;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			Global_1C0180.f_ADC.f_1C = 3;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_2C = 965;
							break;
						
						case 9:
							uParam0->f_2C = 966;
							break;
						
						case 4:
							uParam0->f_2C = 967;
							break;
						
						case 8:
							uParam0->f_2C = 968;
							break;
					}
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C0180.f_ADC = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 4;
					Global_1C0180.f_A96[2] = 3;
					Global_1C0180.f_A96[3] = 2;
					Global_1C0180.f_A94 = 4;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 5;
					Global_1C0180.f_ADC.f_1D[2] = 5;
					Global_1C0180.f_ADC.f_1D[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_2C = 969;
							break;
						
						case 2:
							uParam0->f_2C = 970;
							break;
						
						case 3:
							uParam0->f_2C = 973;
							break;
					}
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C0180.f_ADC = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 4;
					Global_1C0180.f_A96[2] = 3;
					Global_1C0180.f_A96[3] = 2;
					Global_1C0180.f_A94 = 4;
					GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
					Global_1C0180.f_ADC.f_1D[0] = 4;
					Global_1C0180.f_ADC.f_1D[1] = 5;
					Global_1C0180.f_ADC.f_1D[2] = 5;
					Global_1C0180.f_ADC.f_1D[3] = 5;
					break;
				
				case 7:
					uParam0->f_2C = 971;
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C0180.f_ADC = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 4;
					Global_1C0180.f_A96[2] = 3;
					Global_1C0180.f_A96[3] = 2;
					Global_1C0180.f_A94 = 4;
					GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
					Global_1C0180.f_ADC.f_1D[0] = 4;
					Global_1C0180.f_ADC.f_1D[1] = 5;
					Global_1C0180.f_ADC.f_1D[2] = 5;
					Global_1C0180.f_ADC.f_1D[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_2C = 972;
							break;
						
						case 5:
							uParam0->f_2C = 974;
							break;
					}
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C0180.f_ADC = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C0180.f_A96[0] = 0;
					Global_1C0180.f_A96[1] = 3;
					Global_1C0180.f_A96[2] = 2;
					Global_1C0180.f_A96[3] = 1;
					Global_1C0180.f_A94 = 4;
					GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
					Global_1C0180.f_ADC.f_1D[0] = 12;
					Global_1C0180.f_ADC.f_1D[1] = 5;
					Global_1C0180.f_ADC.f_1D[2] = 5;
					Global_1C0180.f_ADC.f_1D[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_2C = 192;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C0180.f_A96[0] = 2;
			Global_1C0180.f_A96[1] = 5;
			Global_1C0180.f_A96[2] = 4;
			Global_1C0180.f_A96[3] = 3;
			Global_1C0180.f_A94 = 4;
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			Global_1C0180.f_ADC.f_1D[0] = 17;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 82:
			uParam0->f_2C = 850;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			Global_1C0180.f_ADC.f_19 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 4;
			Global_1C0180.f_A96[2] = 3;
			Global_1C0180.f_A96[3] = 2;
			Global_1C0180.f_A94 = 4;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			Global_1C0180.f_ADC.f_1D[0] = 10;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 84:
			uParam0->f_2C = 820;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			Global_1C0180.f_ADC.f_19 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 1;
			Global_1C0180.f_A96[2] = 2;
			Global_1C0180.f_A96[3] = 5;
			Global_1C0180.f_A96[4] = 4;
			Global_1C0180.f_A96[5] = 3;
			Global_1C0180.f_A94 = 6;
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[5]);
			Global_1C0180.f_ADC.f_1D[0] = 4;
			Global_1C0180.f_ADC.f_1D[1] = 9;
			Global_1C0180.f_ADC.f_1D[2] = 4;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			Global_1C0180.f_ADC.f_1D[4] = 5;
			Global_1C0180.f_ADC.f_1D[5] = 5;
			break;
		
		case 86:
			uParam0->f_2C = 817;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 3;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_1C0180.f_ADC = 1;
			Global_1C0180.f_ADC.f_19 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1C0180.f_A96[0] = 2;
			Global_1C0180.f_A94 = 1;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			Global_1C0180.f_ADC.f_1C = 3;
			Global_1C0180.f_ADC.f_1D[0] = 1;
			break;
		
		case 91:
			uParam0->f_2C = 817;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 3;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1C0180.f_ADC = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "", 24);
				StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
				Global_1C0180.f_A96[0] = 3;
				Global_1C0180.f_A96[1] = 4;
				Global_1C0180.f_A96[2] = 1;
				Global_1C0180.f_A96[3] = 0;
				Global_1C0180.f_A95 = 6;
				Global_1C0180.f_A94 = 2;
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
				Global_1C0180.f_ADC.f_1C = 4;
				Global_1C0180.f_ADC.f_1D[0] = 1;
				Global_1C0180.f_ADC.f_1D[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
				Global_1C0180.f_A96[0] = 3;
				Global_1C0180.f_A96[1] = 2;
				Global_1C0180.f_A96[2] = 4;
				Global_1C0180.f_A96[3] = 1;
				Global_1C0180.f_A95 = 4;
				Global_1C0180.f_A94 = 3;
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
				Global_1C0180.f_ADC.f_1C = 5;
				Global_1C0180.f_ADC.f_1D[0] = 1;
				Global_1C0180.f_ADC.f_1D[1] = 1;
				Global_1C0180.f_ADC.f_1D[2] = 3;
			}
			Global_1C0180.f_ADB = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
		
		case 888:
			uParam0->f_2C = 1201;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "ArenaMode", 32);
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_GAMES", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 1;
			Global_1C0180.f_A96[2] = 2;
			Global_1C0180.f_A96[3] = 3;
			MemCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), {func_223(iParam4)}, 8);
			Global_1C0180.f_A94 = 4;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			switch (iParam4)
			{
				case 1:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_BUZZ", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1C0180.f_ADC.f_1D[3] = 9;
					break;
				
				case 2:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_CARN", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 3:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_FLAGW", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_FLAGS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 4:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_WRECK", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 5:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_BOMBB", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_POINTS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_GOALS", 24);
					break;
				
				case 6:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_GAMEM", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_CPOINTS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 7:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_MNSTR", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 8:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_HOTB", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_PASSES", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1C0180.f_ADC.f_1D[3] = 9;
					break;
				
				case 9:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_TAGT", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_TAGS", 24);
					break;
			}
			Global_1C0180.f_ADC = 1;
			Global_1C0180.f_A94 = 4;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 889:
			uParam0->f_2C = 1202;
			uParam0->f_2C.f_1 = 1;
			uParam0->f_2C.f_3 = 0;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_CAREER", 32);
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_CARPT", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_MATCHES", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_TITLE", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 1;
			Global_1C0180.f_A96[2] = 3;
			Global_1C0180.f_A96[3] = 4;
			Global_1C0180.f_ADC = 1;
			Global_1C0180.f_A94 = 4;
			Global_1C0180.f_ADC.f_1C = 5;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 4;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 21;
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_1C0180.f_A94)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar2]))
		{
			MISC::SET_BIT(&(Global_1C0180.f_AD2), iVar2);
		}
		iVar2++;
	}
	Global_1C0180.f_B0A = func_222(Var0, uParam0->f_2C, iParam1, iParam4, iParam5, bParam6);
}

int func_222(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x15193
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_187(iParam1))
	{
		if (bParam5)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam2, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam3, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam4, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

struct<6> func_223(int iParam0)//Position - 0x15205
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "BuzzerBeater", 24);
			break;
		
		case 2:
			StringCopy(&Var0, "Carnage", 24);
			break;
		
		case 3:
			StringCopy(&Var0, "FlagWar", 24);
			break;
		
		case 4:
			StringCopy(&Var0, "WreckIt", 24);
			break;
		
		case 5:
			StringCopy(&Var0, "BombBall", 24);
			break;
		
		case 6:
			StringCopy(&Var0, "GamesMasters", 24);
			break;
		
		case 7:
			StringCopy(&Var0, "Monsters", 24);
			break;
		
		case 8:
			StringCopy(&Var0, "HotBomb", 24);
			break;
		
		case 9:
			StringCopy(&Var0, "TagTeam", 24);
			break;
		
		default:
			break;
	}
	return Var0;
}

bool func_224(int iParam0)//Position - 0x152B4
{
	return iParam0 == 74;
}

var func_225(int iParam0)//Position - 0x152C1
{
	return (func_227(iParam0) || func_226(iParam0));
}

bool func_226(int iParam0)//Position - 0x152DB
{
	return iParam0 == 44;
}

bool func_227(int iParam0)//Position - 0x152E8
{
	return iParam0 == 45;
}

bool func_228(int iParam0)//Position - 0x152F5
{
	return iParam0 == 12;
}

struct<6> func_229(int iParam0)//Position - 0x15302
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_230()//Position - 0x1548B
{
	if ((((((((((Global_440000.f_CFE4 == 1 || Global_440000.f_CFE4 == 3) || Global_440000.f_CFE4 == 5) || Global_440000.f_CFE4 == 7) || Global_440000.f_CFE4 == 19) || Global_440000.f_CFE4 == 8) || Global_440000.f_CFE4 == 9) || Global_440000.f_CFE4 == 11) || Global_440000.f_CFE4 == 13) || Global_440000.f_CFE4 == 21) || Global_440000.f_CFE4 == 23)
	{
		return 1;
	}
	return 0;
}

int func_231(var uParam0, int iParam1)//Position - 0x15562
{
	if (!func_415(&(uParam0->f_2)))
	{
		func_429(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || uParam0->f_8)
		{
			if (!func_415(&(uParam0->f_5)))
			{
				func_429(&(uParam0->f_5));
				func_232(uParam0, 1051260355);
			}
		}
		if (func_415(&(uParam0->f_5)))
		{
			if (func_7(&(uParam0->f_5)) > 0.33f)
			{
				func_416(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == 4294967295)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_415(&(uParam0->f_5)))
		{
			func_429(&(uParam0->f_5));
			func_232(uParam0, 1051260355);
		}
		else if (func_7(&(uParam0->f_5)) > 0.33f)
		{
			func_416(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_232(var uParam0, float fParam1)//Position - 0x15665
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_9);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam1);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_233(int iParam0)//Position - 0x1568B
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 40)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_LOSE", 0, 4);
		}
	}
	else if (iVar0 < 70)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "GAME_LOSE_SELF", 1, 4);
		}
	}
	else if (!PED::IS_PED_INJURED((*iParam0)[1]))
	{
		func_4((*iParam0)[1], "GAME_WIN_SELF", 0, 4);
	}
}

void func_234(int iParam0, int iParam1)//Position - 0x15704
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 30)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "DARTS_LOSE", 1, 4);
		}
	}
	else if (iVar0 < 50)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_WIN", 0, 4);
		}
	}
	else if (iVar0 < 75 && iParam1)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_LOSING_BADLY", 0, 4);
		}
	}
	else if (iVar0 < 88)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "GAME_WIN_SELF", 1, 4);
		}
	}
	else if (!PED::IS_PED_INJURED((*iParam0)[1]))
	{
		func_4((*iParam0)[1], "GAME_LOSE_SELF", 0, 4);
	}
}

int func_235()//Position - 0x157D1
{
	int iVar0;
	
	if (!bLocal_187)
	{
		iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
	}
	else
	{
		iLocal_201++;
		iVar0 = (iLocal_201 % 2);
	}
	return iVar0;
}

void func_236(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x15801
{
	char* sVar0;
	
	sVar0 = func_237(iParam4);
	if (iParam4 != 5)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "RESET_MOVIE");
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	func_12(sParam2);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	func_429(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
	uParam0->f_9 = iParam5;
}

char* func_237(int iParam0)//Position - 0x15861
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_SHARD_CENTERED_MP_MESSAGE";
		
		case 1:
			return "SHOW_SHARD_CENTERED_TOP_MP_MESSAGE";
		
		case 2:
			return "SHOW_SHARD_WASTED_MP_MESSAGE";
		
		case 3:
			return "SHOW_SHARD_RANKUP_MP_MESSAGE";
		
		case 4:
			return "SHOW_SHARD_CREW_RANKUP_MP_MESSAGE";
		
		case 5:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return "SHOW_COND_SHARD_MESSAGE";
			}
			return "SHOW_SHARD_MIDSIZED_MESSAGE";
		
		default:
	}
	return "SHOW_SHARD_CENTERED_MP_MESSAGE";
}

void func_238(var uParam0, int iParam1)//Position - 0x158D0
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_SCORES");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

int func_239(int iParam0)//Position - 0x158EE
{
	iParam0->f_2 = { 0f, -2.3685f, -0.2f };
	iParam0->f_5 = { 0f, 0f, 0f };
	iParam0->f_8 = { 0f, 0f, 0f };
	iParam0->f_14 = 0;
	iParam0->f_17 = 0;
	iParam0->f_18 = 0;
	iParam0->f_19 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
	}
	return 1;
}

void func_240(int iParam0)//Position - 0x1593E
{
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_77, iLocal_75, 1500, 1, 1);
	CAM::SET_CAM_ACTIVE(iLocal_78, true);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_77, iLocal_78, 8000, 1, 1);
	CAM::ATTACH_CAM_TO_ENTITY(iLocal_80, iParam0, -0.0301f, 1.498f, 0.7435f, 1);
	CAM::POINT_CAM_AT_ENTITY(iLocal_80, iParam0, 0.0557f, -1.4905f, 0.4958f, 1);
	CAM::SET_CAM_FOV(iLocal_80, 35f);
}

void func_241(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x159A2
{
	bool bVar0;
	
	if (!CAM::IS_CAM_INTERPOLATING(iLocal_75))
	{
		bVar0 = false;
		func_322(uParam0);
		if (!bLocal_179)
		{
			if (uParam0->f_1 == 5)
			{
				if (uParam3->f_2A0)
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
					uParam3->f_2A0 = 0;
				}
			}
			else if (!bLocal_107)
			{
				if (func_3(&(uParam3->f_29A), 18))
				{
					if (!func_3(&(uParam3->f_29A), 21))
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E2F, 3))
						{
							func_413("DARTS_INSTR_W", 4294967295);
							MISC::SET_BIT(&Global_19E2F, 3);
						}
						func_326(&(uParam3->f_29A), 21, 1);
					}
					else if (!func_3(&(uParam3->f_29A), 20) && func_3(&(uParam3->f_29A), 19))
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E2F, 4))
						{
							func_413("DARTS_INSTR_B", 4294967295);
							MISC::SET_BIT(&Global_19E2F, 4);
						}
						func_326(&(uParam3->f_29A), 20, 1);
					}
				}
				uParam3->f_2A0 = 1;
			}
			else if (uParam3->f_2A0)
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				uParam3->f_2A0 = 0;
			}
		}
		if (uParam0->f_1 == 1)
		{
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_84) && uParam0->f_3 == 2)
			{
				func_321(uParam3);
			}
		}
		else
		{
			func_319(uParam3, iLocal_30);
		}
		func_318(&(uParam0->f_1));
	}
	else
	{
		bVar0 = true;
	}
	func_315(uParam3);
	switch (uParam0->f_1)
	{
		case 1:
			if (!func_307(&(uParam0->f_3)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 0:
			if (func_300(uParam0->f_1A6[iLocal_30], &(uParam0->f_F3), &(uParam0->f_4), &(uParam0->f_1CD)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			if (PAD::IS_CONTROL_PRESSED(2, 228) && iLocal_30 == 0)
			{
				uParam0->f_1 = 1;
			}
			if (iLocal_30 == 0)
			{
				func_299(iLocal_31, 0);
				if (((((!func_298("DARTS_SHT_USE") && !func_298("DARTS_INSTR_W")) && !func_298("DARTS_INSTR_B")) && !func_298("DARTS_AIM_HLP")) && !func_298("DARTS_STD_HLP")) && !func_298("DARTS_FST_HLP"))
				{
					if (func_3(&(uParam3->f_29A), 24))
					{
						func_413("DARTS_LEVEL", 4294967295);
						MISC::SET_BIT(&(Global_19E56.f_49FE.f_6), iLocal_199);
						func_326(&(uParam3->f_29A), 24, 0);
					}
				}
				if ((((uParam0->f_1A6[iLocal_30] % 2) == 0 && uParam0->f_1A6[iLocal_30] < 41) && iLocal_31 == 0) && !iLocal_177)
				{
					if (!func_3(&(uParam3->f_29A), 6))
					{
						func_326(&(uParam3->f_29A), 6, 1);
					}
					iLocal_177 = 1;
				}
				else if (uParam0->f_1A6[iLocal_30] == 50 && !iLocal_177)
				{
					if (!func_3(&(uParam3->f_29A), 6))
					{
						func_326(&(uParam3->f_29A), 6, 1);
					}
					iLocal_177 = 1;
				}
				else if (func_288(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_F3), uParam1, bVar0, 0, 0, uParam0->f_F8))
				{
					HUD::CLEAR_PRINTS();
					uParam3->f_29E = (uParam3->f_29E - 1);
					uParam0->f_1 = 3;
				}
				else if (!iLocal_174)
				{
					if (!func_415(iParam4))
					{
						func_286(iParam4);
					}
					else if (func_7(iParam4) > 20f)
					{
						func_285(iLocal_170[(1 - iLocal_30)]);
						func_416(iParam4);
						iLocal_174 = 1;
					}
				}
			}
			else if (iLocal_31 == 0)
			{
				iLocal_197 = 0;
				func_284(&(uParam0->f_1A6), &(uParam0->f_F9));
				func_281(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_F3), &(uParam0->f_1), &(uParam0->f_F9), 0);
			}
			else if (SYSTEM::TIMERA() > MISC::GET_RANDOM_INT_IN_RANGE(1250, 2500))
			{
				func_284(&(uParam0->f_1A6), &(uParam0->f_F9));
				func_281(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_F3), &(uParam0->f_1), &(uParam0->f_F9), 0);
			}
			break;
		
		case 3:
			if (func_268(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_F3), uParam0->f_F8, 0))
			{
				uParam0->f_1B4++;
				uParam0->f_1C7 = func_267(uParam0);
				uParam0->f_1 = 4;
			}
			break;
		
		case 4:
			if (!func_3(&(uParam3->f_29A), 5))
			{
				func_265(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_F3), uParam0->f_1C7);
			}
			func_250(uParam0, uParam3);
			break;
		
		case 5:
			func_243(uParam0, uParam2, uParam3);
			if (func_415(iParam4))
			{
				func_416(iParam4);
			}
			break;
		
		case 6:
			func_242(uParam0, uParam3);
			break;
	}
}

void func_242(var uParam0, var uParam1)//Position - 0x15E02
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	
	iLocal_197++;
	iLocal_30 = 1;
	iLocal_31 = 0;
	iLocal_181 = 1;
	while (iLocal_31 < 3 && uParam0->f_1 == 6)
	{
		if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_19)
			{
				iLocal_31++;
			}
			else
			{
				func_265(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_F3), 0);
				func_250(uParam0, uParam1);
			}
		}
		else if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_18)
		{
			if (bLocal_180)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]));
				}
			}
			else
			{
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17 = 1;
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_18 = 0;
				vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_F3.f_1, uParam0->f_F3.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_B, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_B.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_B.f_2) };
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], vVar0, 1, 0, 0, 1);
				}
			}
			func_265(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_F3), 0);
			func_250(uParam0, uParam1);
			if (bLocal_180)
			{
				if (iLocal_182)
				{
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/] = OBJECT::CREATE_OBJECT(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_1, vLocal_40, 1, true, 0);
					vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_F3.f_1, uParam0->f_F3.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_B, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_B.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_B.f_2) };
					ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], vVar0, 1, 0, 0, 1);
					fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11 = { 90f, fVar1, uParam0->f_F3.f_4 };
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, 0, 1);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17 = 1;
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_18 = 0;
				}
			}
		}
		else
		{
			func_284(&(uParam0->f_1A6), &(uParam0->f_F9));
			func_281(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_F3), &(uParam0->f_1), &(uParam0->f_F9), 0);
			uParam0->f_1B4++;
			func_265(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_F3), 0);
			if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_15 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14 == 50) && uParam0->f_1A6[iLocal_30] == 0)
			{
				if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14 == 50)
				{
					uParam0->f_1B0[iLocal_30]++;
				}
				func_326(&(uParam1->f_29A), 2, 0);
				func_326(&(uParam1->f_29A), 3, 0);
				func_326(&(uParam1->f_29A), 4, 0);
				func_326(&(uParam1->f_29A), 5, 1);
				SYSTEM::SETTIMERB(0);
			}
			func_250(uParam0, uParam1);
			if (bLocal_180)
			{
				if (iLocal_182)
				{
					iVar2 = 0;
					while (iVar2 < iLocal_31 + 1)
					{
						if (!uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_17)
						{
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/] = OBJECT::CREATE_OBJECT(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_1, vLocal_40, 1, true, 0);
							vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_F3.f_1, uParam0->f_F3.f_4, uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_B, (uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_B.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_B.f_2) };
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/]))
							{
								ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/], vVar0, 1, 0, 0, 1);
							}
							fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11 = { 90f, fVar3, uParam0->f_F3.f_4 };
							ENTITY::SET_ENTITY_ROTATION(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11, 0, 1);
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_17 = 1;
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_18 = 0;
						}
						iVar2++;
					}
				}
			}
		}
	}
	uParam0->f_1 = 5;
	if (iLocal_197 > 2)
	{
		uParam0->f_1 = 5;
	}
}

void func_243(var uParam0, var uParam1, var uParam2)//Position - 0x1628B
{
	vector3 vVar0;
	int iVar1;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (uParam0->f_F8 == 1)
			{
				func_249();
			}
			if (iLocal_30 == 0)
			{
				if (func_3(&(uParam2->f_29A), 3))
				{
					func_248("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14, 5000, 0);
				}
				else if (func_3(&(uParam2->f_29A), 4))
				{
					func_247("DARTS_ONE_PT", 5000, 0);
				}
				else if (func_3(&(uParam2->f_29A), 2))
				{
					func_248("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14, 5000, 0);
				}
				else
				{
					func_248("DARTS_SWITCH_C", uParam0->f_1A6[iLocal_30], 5000, 0);
				}
			}
			else if (func_3(&(uParam2->f_29A), 3))
			{
				func_248("DARTS_OPP_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14, 5000, 0);
			}
			else if (func_3(&(uParam2->f_29A), 4))
			{
				func_247("DARTS_ONE_PT", 5000, 0);
			}
			else if (func_3(&(uParam2->f_29A), 2))
			{
				func_248("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14, 5000, 0);
			}
			else
			{
				func_248("DARTS_SWITCH_B", uParam0->f_1A6[iLocal_30], 5000, 0);
			}
			SYSTEM::SETTIMERB(0);
			uParam0->f_2 = 2;
			break;
		
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
			{
				iLocal_195++;
				if (iLocal_195 >= uParam0->f_1B4)
				{
					iLocal_195 = 0;
				}
				vVar0 = { unk_0x8000C77B5F336760(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], true) };
				func_50(vVar0);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
			{
				iLocal_195 = (iLocal_195 - 1);
				if (iLocal_195 < 0)
				{
					iLocal_195 = (uParam0->f_1B4 - 1);
				}
				vVar0 = { unk_0x8000C77B5F336760(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], true) };
				func_50(vVar0);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
			{
				vVar0 = { unk_0x8000C77B5F336760(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], true) };
				func_52(vVar0, 0, 0);
				uParam0->f_2 = 2;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
			{
				iLocal_171 = 1;
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || (iLocal_181 && bLocal_180))
			{
				iLocal_171 = 1;
			}
			if ((PAD::IS_CONTROL_JUST_PRESSED(2, 189) || PAD::IS_CONTROL_JUST_PRESSED(2, 190)) && uParam0->f_F8 == 1)
			{
				vVar0 = { unk_0x8000C77B5F336760(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], true) };
				func_52(vVar0, 1, 0);
				uParam0->f_2 = 1;
			}
			if (!func_3(&(uParam2->f_29A), 6))
			{
				if (!iLocal_176)
				{
					if (func_246(iLocal_30 == 0, &(iLocal_170[1]), (uParam0->f_1A9[iLocal_30] - uParam0->f_1A6[iLocal_30]), uParam0->f_1A6[0], uParam0->f_1A6[1]))
					{
						iLocal_176 = 1;
					}
				}
				else if ((MISC::GET_GAME_TIMER() % 500) < 50)
				{
				}
			}
			else if (!iLocal_176)
			{
				if (func_245(iLocal_30 == 0, &(iLocal_170[1]), (uParam0->f_1A9[iLocal_30] - uParam0->f_1A6[iLocal_30]), uParam0->f_1A6[0], uParam0->f_1A6[1]))
				{
					iLocal_176 = 1;
				}
			}
			else if ((MISC::GET_GAME_TIMER() % 500) < 50)
			{
			}
			if (iLocal_171 || SYSTEM::TIMERB() > 2000)
			{
				iLocal_181 = 0;
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_239(&(uParam0->f_5[iLocal_30 /*79*/][iVar1 /*26*/]));
					iVar1++;
				}
				if (uParam0->f_1A9[iLocal_30] != uParam0->f_1A6[iLocal_30])
				{
					func_244(uParam1, iLocal_30, uParam0->f_1A6[iLocal_30]);
					AUDIO::PLAY_SOUND_FROM_COORD(4294967295, "DARTS_SCOREBOARD_MASTER", uParam0->f_F3.f_1, 0, 0, 0, 0);
				}
				uParam0->f_1A9[iLocal_30] = uParam0->f_1A6[iLocal_30];
				iLocal_31 = 0;
				uParam0->f_1AC = 0;
				if (iLocal_30 == 0)
				{
					iLocal_30 = 1;
				}
				else
				{
					iLocal_30 = 0;
				}
				func_428(uParam1, iLocal_30);
				iLocal_54 = 0;
				func_408();
				if (!bLocal_180)
				{
					HUD::CLEAR_SMALL_PRINTS();
				}
				iLocal_48 = 0;
				uParam2->f_29E = 3;
				iLocal_177 = 0;
				iLocal_174 = 0;
				iLocal_176 = 0;
				iLocal_171 = 0;
				iLocal_195 = 0;
				uParam0->f_1B4 = 0;
				uParam0->f_1 = 2;
				uParam0->f_2 = 0;
			}
			break;
	}
}

void func_244(var uParam0, int iParam1, int iParam2)//Position - 0x166A4
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_DARTS_SCORE");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

int func_245(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x166C8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 30 && bParam0) || iParam3 < 20)
		{
			MISC::SET_BIT(&iVar0, 0);
		}
		if ((iParam2 <= 30 && bParam0) || iParam3 >= 20)
		{
			MISC::SET_BIT(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 20 && !bParam0) || iParam4 < 30)
		{
			MISC::SET_BIT(&iVar0, 1);
		}
		if ((iParam2 <= 20 && !bParam0) || iParam4 >= 30)
		{
			MISC::SET_BIT(&iVar0, 3);
		}
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar2 < 85)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 0))
		{
			if (iVar1 < 50)
			{
				func_4(AUDIO::_0x0626A247D2405330(), "GAME_GOOD_SELF", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(AUDIO::_0x0626A247D2405330(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68)
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 1))
		{
			if (iVar1 < 50)
			{
				func_4(AUDIO::_0x0626A247D2405330(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 3))
		{
			if (iVar1 < 50)
			{
				func_4(AUDIO::_0x0626A247D2405330(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_246(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x168C5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 100 && bParam0) || (iParam4 - iParam3) > 75)
		{
			MISC::SET_BIT(&iVar0, 0);
		}
		if ((iParam2 < 70 && bParam0) || (iParam3 - iParam4) < 50)
		{
			MISC::SET_BIT(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 75 && !bParam0) || (iParam3 - iParam4) > 50)
		{
			MISC::SET_BIT(&iVar0, 1);
		}
		if ((iParam2 < 40 && !bParam0) || (iParam4 - iParam3) < 30)
		{
			MISC::SET_BIT(&iVar0, 3);
		}
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar2 < 75)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 0))
		{
			if (iVar1 < 35)
			{
				func_4(AUDIO::_0x0626A247D2405330(), "DARTS_HAPPY", 1, 4);
			}
			else if (iVar1 < 70)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 85)
			{
				func_4(AUDIO::_0x0626A247D2405330(), "GAME_GOOD_SELF", 1, 4);
			}
			else
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(AUDIO::_0x0626A247D2405330(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68 && !ENTITY::DOES_ENTITY_EXIST(func_491()))
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 1))
		{
			if (iVar1 < 40)
			{
				func_4(AUDIO::_0x0626A247D2405330(), "DARTS_PLAYING_WELL", 1, 4);
			}
			else if (iVar1 < 60)
			{
				func_4(AUDIO::_0x0626A247D2405330(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 80)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 3))
		{
			if (iVar1 < 33)
			{
				func_4(AUDIO::_0x0626A247D2405330(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 66)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(AUDIO::_0x0626A247D2405330(), "GAME_HECKLE", 1, 4);
			}
			return 1;
		}
	}
	return 0;
}

void func_247(char* sParam0, int iParam1, int iParam2)//Position - 0x16B1E
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

void func_248(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x16B37
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, 1);
}

void func_249()//Position - 0x16B56
{
	CAM::SET_CAM_ACTIVE(iLocal_84, true);
	CAM::SET_CAM_ACTIVE(iLocal_75, false);
}

void func_250(var uParam0, var uParam1)//Position - 0x16B6C
{
	uParam0->f_1C7 = 0;
	if (!func_3(&(uParam1->f_29A), 5))
	{
		uParam0->f_1A6[iLocal_30] = (uParam0->f_1A6[iLocal_30] - uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14);
		uParam0->f_1AC = (uParam0->f_1AC + uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14);
	}
	if (func_3(&(uParam1->f_29A), 5))
	{
		func_262(uParam0);
		func_326(&(uParam1->f_29A), 5, 0);
	}
	else
	{
		uParam0->f_1AD[iLocal_30]++;
		if (iLocal_30 == 0)
		{
			func_260(4);
			iLocal_106[10]++;
		}
		if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_15 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14 == 50) && uParam0->f_1A6[iLocal_30] == 0)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14 == 50)
			{
				uParam0->f_1B0[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_260(0);
					iLocal_106[1]++;
				}
			}
			func_326(&(uParam1->f_29A), 2, 0);
			func_326(&(uParam1->f_29A), 3, 0);
			func_326(&(uParam1->f_29A), 4, 0);
			func_326(&(uParam1->f_29A), 5, 1);
			func_262(uParam0);
			func_326(&(uParam1->f_29A), 5, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if ((uParam0->f_1A6[iLocal_30] == 1 || uParam0->f_1A6[iLocal_30] < 0) || (uParam0->f_1A6[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_15 != 2))
		{
			if (uParam0->f_1A6[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_15 != 2)
			{
				func_248("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14, 5000, 0);
				func_326(&(uParam1->f_29A), 3, 1);
			}
			else if (uParam0->f_1A6[iLocal_30] == 1)
			{
				func_326(&(uParam1->f_29A), 4, 1);
			}
			else if (iLocal_30 == 1)
			{
				func_248("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14, 5000, 0);
			}
			else
			{
				func_248("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14, 5000, 0);
			}
			if (!iLocal_176)
			{
				if (func_259(iLocal_170[(1 - iLocal_30)]))
				{
					iLocal_176 = 1;
				}
			}
			uParam0->f_1A6[iLocal_30] = uParam0->f_1A9[iLocal_30];
			if (uParam0->f_1 == 6)
			{
			}
			SYSTEM::SETTIMERA(0);
			uParam0->f_1 = 5;
			if (iLocal_30 == 0)
			{
				uParam0->f_1B3++;
			}
			func_326(&(uParam1->f_29A), 2, 1);
		}
		else
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14 == 50)
			{
				uParam0->f_1B0[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_258(uParam1, 1);
					func_260(0);
					iLocal_106[1]++;
				}
				if (!iLocal_176 && !iLocal_181)
				{
					if (func_257(iLocal_170[iLocal_30]))
					{
						iLocal_176 = 1;
					}
				}
			}
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14 == 0)
			{
				if (!iLocal_176 && !iLocal_181)
				{
					func_256(iLocal_170[(1 - iLocal_30)]);
					iLocal_176 = 1;
				}
			}
			if (uParam0->f_1AC == 180)
			{
				if (!iLocal_176 && !iLocal_181)
				{
					if (func_255(iLocal_170[1], iLocal_30 == 0))
					{
						iLocal_176 = 1;
					}
				}
				if (iLocal_30 == 0)
				{
					func_258(uParam1, 0);
					func_260(1);
					iLocal_106[2]++;
				}
			}
			if (uParam0->f_1AC == 140)
			{
				if (!iLocal_176 && !iLocal_181)
				{
					if (func_253(iLocal_170[iLocal_30], iLocal_30 == 0))
					{
						iLocal_176 = 1;
					}
				}
			}
			if (iLocal_30 == 0)
			{
				if (iLocal_31 < 2)
				{
					if (uParam0->f_1A6[iLocal_30] <= 170 && !func_3(&(uParam1->f_29A), 18))
					{
						func_326(&(uParam1->f_29A), 18, 1);
					}
					if (!func_3(&(uParam1->f_29A), 19) && func_3(&(uParam1->f_29A), 21))
					{
						func_326(&(uParam1->f_29A), 19, 1);
					}
					if (((uParam0->f_1A6[iLocal_30] < 41 && uParam0->f_1A6[iLocal_30] > 0) && (uParam0->f_1A6[iLocal_30] % 2) == 0) || uParam0->f_1A6[iLocal_30] == 50)
					{
						if (uParam0->f_1A6[iLocal_30] == 50)
						{
						}
						if (!iLocal_175)
						{
							func_252(iLocal_170[1]);
							iLocal_175 = 1;
						}
						if (!uParam0->f_1C8)
						{
							uParam0->f_1C8 = 1;
						}
						if (!func_3(&(uParam1->f_29A), 6))
						{
							func_326(&(uParam1->f_29A), 6, 1);
						}
					}
					else if (uParam0->f_1C8)
					{
						uParam0->f_1C8 = 0;
					}
				}
			}
			if (iLocal_30 == 0 && iLocal_31 < 2)
			{
				func_251("DARTS_REMAIN", (uParam0->f_1A9[iLocal_30] - uParam0->f_1A6[iLocal_30]), uParam0->f_1A6[iLocal_30], 7500, 0);
			}
			else if (iLocal_30 == 1 && iLocal_31 == 2)
			{
			}
			else if (uParam0->f_1 != 6)
			{
				func_318(&(uParam0->f_1));
			}
			uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_19 = 1;
			iLocal_31++;
			SYSTEM::SETTIMERA(0);
			if (uParam0->f_1 != 6)
			{
				if (uParam0->f_1C8 && uParam0->f_F8 == 1)
				{
					uParam0->f_1 = 0;
				}
				else
				{
					uParam0->f_1 = 2;
				}
			}
			if (iLocal_31 == 3)
			{
				iLocal_31 = 2;
				uParam0->f_1 = 5;
			}
			if (iLocal_30 == 0)
			{
				uParam0->f_1B3 = 0;
			}
			func_326(&(uParam1->f_29A), 3, 0);
			func_326(&(uParam1->f_29A), 2, 0);
			func_326(&(uParam1->f_29A), 4, 0);
		}
	}
}

void func_251(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x17109
{
	iParam4 = iParam4;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_PRINT(iParam3, 1);
}

void func_252(int iParam0)//Position - 0x1712E
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_4(iParam0, "DARTS_1_DART_AWAY", 0, 4);
	}
}

int func_253(int iParam0, bool bParam1)//Position - 0x1714C
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 75)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_491()))
		{
			if (bParam1)
			{
				func_4(AUDIO::_0x0626A247D2405330(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(func_491(), "DARTS_140", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_254())
			{
				func_4(AUDIO::_0x0626A247D2405330(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_140", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_254()//Position - 0x171CB
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_255(int iParam0, bool bParam1)//Position - 0x171EC
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 75)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_491()))
		{
			if (bParam1)
			{
				func_4(AUDIO::_0x0626A247D2405330(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(func_491(), "DARTS_180", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_254())
			{
				func_4(AUDIO::_0x0626A247D2405330(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_180", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_256(int iParam0)//Position - 0x1726B
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 75)
	{
		if (iParam0 == AUDIO::_0x0626A247D2405330())
		{
			iVar1 = 1;
		}
		if (!PED::IS_PED_INJURED(iParam0))
		{
			func_4(iParam0, "DARTS_MISS_BOARD", iVar1, 4);
		}
		return 1;
	}
	return 0;
}

int func_257(int iParam0)//Position - 0x172AE
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 100)
	{
		func_4(iParam0, "DARTS_BULLSEYE", 0, 4);
		return 1;
	}
	return 0;
}

void func_258(var uParam0, int iParam1)//Position - 0x172DA
{
	uParam0->f_2A7 = 1;
	uParam0->f_2AA = iParam1;
}

int func_259(int iParam0)//Position - 0x172EF
{
	int iVar0;
	
	if (iParam0 == AUDIO::_0x0626A247D2405330())
	{
		iVar0 = 1;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_4(iParam0, "DARTS_BUST", iVar0, 4);
	}
	return 1;
}

void func_260(int iParam0)//Position - 0x1731B
{
	switch (iParam0)
	{
		case 0:
			Global_19E56.f_49FE++;
			func_261("DARTS_STAT_NUM_BULLSEYES", Global_19E56.f_49FE);
			break;
		
		case 1:
			Global_19E56.f_49FE.f_1++;
			func_261("DARTS_STAT_NUM_180S", Global_19E56.f_49FE.f_1);
			break;
		
		case 2:
			Global_19E56.f_49FE.f_2++;
			func_261("DARTS_STAT_NUM_WINS", Global_19E56.f_49FE.f_2);
			break;
		
		case 3:
			Global_19E56.f_49FE.f_3++;
			func_261("DARTS_STAT_NUM_LOSS", Global_19E56.f_49FE.f_3);
			break;
		
		case 4:
			Global_19E56.f_49FE.f_4++;
			func_261("DARTS_STAT_DARTS_THROWN", Global_19E56.f_49FE.f_4);
			break;
		
		case 5:
			Global_19E56.f_49FE.f_5++;
			func_261("DARTS_STAT_NUM_GAMES", Global_19E56.f_49FE.f_5);
			break;
		
		case 7:
			Global_19E56.f_49FE.f_7 = (SYSTEM::TO_FLOAT(Global_19E56.f_49FE.f_2) / SYSTEM::TO_FLOAT(Global_19E56.f_49FE.f_5));
			break;
		
		case 8:
			Global_19E56.f_49FE.f_8 = (SYSTEM::TO_FLOAT(Global_19E56.f_49FE.f_4) / SYSTEM::TO_FLOAT(Global_19E56.f_49FE.f_5));
			break;
	}
}

void func_261(char* sParam0, var uParam1)//Position - 0x17492
{
}

void func_262(var uParam0)//Position - 0x1749A
{
	if (!uParam0->f_1CC)
	{
		uParam0->f_1CC = 1;
	}
	func_260(5);
	HUD::CLEAR_SMALL_PRINTS();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_409(2)))
	{
		AUDIO::STOP_AUDIO_SCENE(func_409(2));
	}
	if (uParam0->f_F8 == 1)
	{
		func_249();
	}
	if (iLocal_30 == 0)
	{
		uParam0->f_1C6 = 1;
		iLocal_185 = 1;
		uParam0->f_1BE[iLocal_30]++;
		uParam0->f_1B5[iLocal_30]++;
		func_260(2);
		iLocal_106[8]++;
	}
	else
	{
		uParam0->f_1C6 = 0;
		uParam0->f_1BE[iLocal_30]++;
		uParam0->f_1B5[iLocal_30]++;
		func_260(3);
		iLocal_106[9]++;
	}
	func_260(7);
	func_429(&(uParam0->f_FE));
	if (func_264(uParam0))
	{
		uParam0->f_1C1[0] = 0;
		uParam0->f_1C1[1] = 0;
		uParam0->f_1BE[0] = 0;
		uParam0->f_1BE[1] = 0;
		uParam0->f_1BB[iLocal_30]++;
		if (!uParam0->f_1CA)
		{
			if (uParam0->f_1C6)
			{
				func_263(1);
			}
			uParam0->f_1CA = 1;
		}
		if (uParam0->f_1C6)
		{
			iLocal_106[3]++;
			iLocal_203 = 0;
		}
		else
		{
			iLocal_106[5]++;
			iLocal_203 = 3;
		}
		*uParam0 = 12;
	}
	else
	{
		*uParam0 = 11;
	}
	uParam0->f_1 = 2;
	AUDIO::START_AUDIO_SCENE(func_409(3));
	iLocal_182 = 1;
	uParam0->f_1AC = 0;
	iLocal_54 = 0;
	uParam0->f_1A9[0] = 301;
	uParam0->f_1A9[1] = 301;
}

void func_263(bool bParam0)//Position - 0x17643
{
	char* sVar0;
	
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	switch (func_86())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	AUDIO::PLAY_MISSION_COMPLETE_AUDIO(sVar0);
}

int func_264(var uParam0)//Position - 0x176B6
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_110(uParam0->f_1C6, 0, 1);
	switch (uParam0->f_1C4)
	{
		case 1:
			iVar1 = 1;
			break;
		
		case 3:
			iVar1 = 2;
			break;
		
		case 5:
			iVar1 = 3;
			break;
	}
	if (uParam0->f_1BE[iVar0] == iVar1)
	{
		uParam0->f_1C1[iVar0]++;
		uParam0->f_1B8[iVar0]++;
		uParam0->f_1BE[0] = 0;
		uParam0->f_1BE[1] = 0;
		uParam0->f_1CB = 1;
		if (iVar0 == 0)
		{
			iLocal_106[6]++;
		}
		if (uParam0->f_1C1[iVar0] == uParam0->f_1C5)
		{
			uParam0->f_1CB = 0;
			return 1;
		}
	}
	return 0;
}

void func_265(var uParam0, var uParam1, bool bParam2)//Position - 0x17778
{
	float fVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	int iVar4;
	int iVar5;
	
	vVar3 = { uParam0->f_8 };
	vVar3.x = (vVar3.x + 0.0041f);
	vVar3.z = (vVar3.z + 0.0002f);
	fVar1 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(0f, 1f, vVar3.x, vVar3.z);
	fVar0 = func_266(vVar3);
	uParam0->f_16 = fVar0;
	if (bParam2)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(4294967295, "DARTS_HIT_DART_MASTER", uParam1->f_1, 0, 0, 0, 0);
	}
	if (fVar0 < 0.009f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(4294967295, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_14 = 50;
	}
	else if (fVar0 < 0.021f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(4294967295, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_14 = 25;
	}
	else if (fVar0 > 0.3f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(4294967295, "DARTS_HIT_WALL_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_14 = 0;
	}
	else if (fVar0 >= 0.226f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(4294967295, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_14 = 0;
	}
	else
	{
		if (fVar0 > 0.1285f && fVar0 < 0.1405f)
		{
			uParam0->f_15 = 3;
			AUDIO::PLAY_SOUND_FROM_COORD(4294967295, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else if (fVar0 > 0.2132f && fVar0 < 0.226f)
		{
			uParam0->f_15 = 2;
			AUDIO::PLAY_SOUND_FROM_COORD(4294967295, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else
		{
			uParam0->f_15 = 1;
			AUDIO::PLAY_SOUND_FROM_COORD(4294967295, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		if (uParam0->f_8 < 0f)
		{
			fVar1 = (360f - fVar1);
		}
		fVar2 = 0f;
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 21)
		{
			if (fVar1 >= (fVar2 - 9f) && fVar1 < (fVar2 + 9f))
			{
				if ((fVar1 <= (fVar2 - 8.1f) && fVar1 >= (fVar2 - 9.9f)) || (fVar1 >= (fVar2 + 8.1f) && fVar1 <= (fVar2 + 9.9f)))
				{
					AUDIO::PLAY_SOUND_FROM_COORD(4294967295, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, 0, 0, 0, 0);
				}
				iVar5 = (iLocal_33[iVar4] * uParam0->f_15);
				uParam0->f_14 = iVar5;
			}
			fVar2 = (fVar2 + 18f);
			iVar4++;
		}
	}
}

float func_266(vector3 vParam0)//Position - 0x179AC
{
	return SYSTEM::SQRT(((vParam0.x * vParam0.x) + (vParam0.z * vParam0.z)));
}

int func_267(var uParam0)//Position - 0x179C7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_31)
	{
		if (((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 - 0.008f) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 + 0.008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 - 0.008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 + 0.008f))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_268(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x17A8D
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (iLocal_30 == 0 && iParam2 == 1)
	{
		func_269("Darts", "Dart_Reticules", &Local_39, 1, 0, 4, 0);
	}
	fVar2 = MISC::GET_FRAME_TIME();
	vVar1 = { uParam0->f_5 * Vector(fVar2, fVar2, fVar2) * Vector(8.5f, 8.5f, 8.5f) };
	uParam0->f_2 = { uParam0->f_2 - vVar1 };
	if (uParam0->f_2.f_1 > (uParam0->f_8.f_1 - 0.04f))
	{
		uParam0->f_17 = 1;
		uParam0->f_18 = 0;
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_B, (uParam0->f_B.f_1 + fLocal_34), uParam0->f_B.f_2) };
		ENTITY::SET_ENTITY_COORDS(*uParam0, vVar0, 1, 0, 0, 1);
		return 1;
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_34), uParam0->f_2.f_2) };
	ENTITY::SET_ENTITY_COORDS(*uParam0, vVar0, 1, 0, 0, 1);
	uParam0->f_11.f_1 = (uParam0->f_11.f_1 + (1000f * fVar2));
	ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_11, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (bParam3)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_269(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x17BAD
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_280(&Var0);
			break;
		
		case 1:
			func_279(&Var0);
			break;
		
		case 5:
			func_278(&Var0);
			break;
		
		case 6:
			func_277(&Var0);
			break;
		
		case 7:
			func_276(&Var0);
			break;
		
		case 8:
			func_275(&Var0);
			break;
		
		case 9:
			func_274(&Var0);
			break;
	}
	if (func_272())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		if (iParam3 == 1)
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_271(Var0), func_270(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_271(Var0), func_270(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

float func_270(float fParam0)//Position - 0x17CB2
{
	return (fParam0 + fLocal_13);
}

float func_271(float fParam0)//Position - 0x17CBF
{
	return (fParam0 + fLocal_12);
}

int func_272()//Position - 0x17CCC
{
	if (func_273())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_273()//Position - 0x17D0B
{
	return Global_1406B6;
}

void func_274(var uParam0)//Position - 0x17D17
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_275(var uParam0)//Position - 0x17D31
{
	uParam0->f_7 = 2;
}

void func_276(var uParam0)//Position - 0x17D3E
{
	uParam0->f_7 = 5;
}

void func_277(var uParam0)//Position - 0x17D4B
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_278(var uParam0)//Position - 0x17D68
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_279(var uParam0)//Position - 0x17D85
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_280(var uParam0)//Position - 0x17DAE
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

void func_281(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x17DD6
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	
	if (*uParam3 == 50)
	{
		fVar3 = 0f;
		fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else if (*uParam3 == 25)
	{
		fVar3 = 0.14f;
		fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else
	{
		if (uParam3->f_1 == 3)
		{
			fVar3 = 0.1345f;
		}
		else if (uParam3->f_1 == 2)
		{
			fVar3 = 0.218f;
		}
		else
		{
			fVar3 = 0.18f;
		}
		fVar9 = 0f;
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < 21)
		{
			if (*uParam3 == iLocal_33[iVar5])
			{
				fVar4 = fVar9;
			}
			fVar9 = (fVar9 + 18f);
			iVar5++;
		}
	}
	if (!bParam4 && uParam3->f_3 < 30)
	{
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(func_283(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-35f, 35f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-80f, 80f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > 4294967156)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-60f, 60f);
		}
		else
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-200f, -60f);
			}
			else
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(60f, 200f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar4 = (fVar4 + fVar0);
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(func_283(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.25f, 0.25f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.07f, 0.07f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > 4294967156)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.15f, 0.15f);
		}
		else
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, -0.3f);
			}
			else
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 1f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar3 = (fVar3 + fVar0);
	}
	uParam0->f_8 = (SYSTEM::SIN(fVar4) * fVar3);
	uParam0->f_8.f_1 = -0.23f;
	uParam0->f_8.f_2 = (SYSTEM::COS(fVar4) * fVar3);
	uParam0->f_8 = (uParam0->f_8 - 0.0035f);
	uParam0->f_8.f_2 = (uParam0->f_8.f_2 - 0.0002f);
	if (*uParam2 == 6)
	{
		func_282(uParam0);
	}
	else
	{
		uParam0->f_17 = 0;
		uParam0->f_18 = 1;
		func_282(uParam0);
		*uParam0 = OBJECT::CREATE_OBJECT(uParam0->f_1, vLocal_40, 0, false, 0);
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
		vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, vLocal_41) };
		vVar8 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_34), uParam0->f_8.f_2) };
		fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D((vVar7.x - vVar8.x), (vVar7.y - vVar8.y));
		fVar2 = (fVar2 - 180f);
		uParam0->f_11 = { 90f, fVar1, fVar2 };
		ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_11, 0, 1);
		uParam0->f_2 = { vLocal_41 };
		*uParam2 = 3;
		AUDIO::PLAY_SOUND_FROM_ENTITY(4294967295, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
	}
}

void func_282(var uParam0)//Position - 0x18133
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar4 = 0.08f;
	uParam0->f_8.f_1 = -0.213f;
	vVar0 = { vLocal_41 - uParam0->f_8 };
	fVar1 = SYSTEM::VMAG(vVar0);
	uParam0->f_5 = { vVar0 / Vector(fVar1, fVar1, fVar1) };
	fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_11.f_2 = (fVar2 - 180f);
	fVar3 = (MISC::TAN(uParam0->f_11.f_2) * fVar4);
	uParam0->f_B = { uParam0->f_8 };
	uParam0->f_B = (uParam0->f_B + fVar3);
	vVar0 = { vLocal_41 - uParam0->f_B };
	fVar1 = SYSTEM::VMAG(vVar0);
	uParam0->f_5 = { vVar0 / Vector(fVar1, fVar1, fVar1) };
}

int func_283(var uParam0)//Position - 0x181DF
{
	switch (uParam0->f_4)
	{
		case 0:
			return 25;
		
		case 1:
			return 75;
		
		case 2:
			return 90;
		
		default:
	}
	return 25;
}

void func_284(var uParam0, var uParam1)//Position - 0x18213
{
	int iVar0;
	
	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = ((*uParam0)[1] - (*uParam0)[0]);
	uParam1->f_3++;
	if ((*uParam0)[iLocal_30] > 121)
	{
		*uParam1 = 20;
		uParam1->f_1 = 3;
	}
	else if ((*uParam0)[iLocal_30] > 60)
	{
		if (((*uParam0)[iLocal_30] % 2) == 1)
		{
			if (func_254())
			{
				*uParam1 = 19;
			}
			else
			{
				*uParam1 = 17;
			}
			uParam1->f_1 = 3;
		}
		else
		{
			*uParam1 = 20;
			uParam1->f_1 = 3;
		}
	}
	else if ((*uParam0)[iLocal_30] < 61)
	{
		if ((*uParam0)[iLocal_30] == 50)
		{
			*uParam1 = 50;
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_30] > 52)
		{
			*uParam1 = ((*uParam0)[iLocal_30] - 40);
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_30] > 40)
		{
			*uParam1 = ((*uParam0)[iLocal_30] - 32);
			uParam1->f_1 = 1;
		}
		else if (((*uParam0)[iLocal_30] % 2) == 0)
		{
			iVar0 = 1;
			iVar0 = 0;
			while (iVar0 < 20)
			{
				*uParam1 = ((*uParam0)[iLocal_30] / 2);
				uParam1->f_1 = 2;
				iVar0++;
			}
		}
		else
		{
			iVar0 = 32;
			while (*uParam1 == 0 && iVar0 > 1)
			{
				if ((*uParam0)[iLocal_30] > iVar0)
				{
					*uParam1 = ((*uParam0)[iLocal_30] - iVar0);
					uParam1->f_1 = 1;
				}
				iVar0 = (iVar0 / 2);
			}
		}
	}
}

int func_285(int iParam0)//Position - 0x18365
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 33)
	{
		func_4(iParam0, "DARTS_BORED", 0, 4);
		return 1;
	}
	return 0;
}

void func_286(int iParam0)//Position - 0x18391
{
	func_287(iParam0, 0f);
}

void func_287(int iParam0, float fParam1)//Position - 0x183A0
{
	iParam0->f_1 = (func_8(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) + fParam1);
	MISC::SET_BIT(iParam0, 1);
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_288(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x183CE
{
	float fVar0;
	int iVar1;
	
	switch (iParam6)
	{
		case 0:
			if (iLocal_52)
			{
				if (SYSTEM::TIMERB() > 50)
				{
					iLocal_53 = 0;
					iLocal_54 = 0;
					iLocal_56 = 0;
					if (func_297(uParam0, uParam1, 0))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(4294967295, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_52 = 0;
						return 1;
					}
				}
			}
			else if (!bParam3)
			{
				if (!(PAD::IS_CONTROL_JUST_PRESSED(2, 223) && iLocal_56) && !bParam4)
				{
					iLocal_53 = 1;
					iLocal_54 = 1;
					if (!iLocal_55)
					{
						func_296(uParam0, *uParam2);
						iLocal_55 = 1;
					}
					else
					{
						if (!bParam5)
						{
							func_295();
						}
						func_294(uParam0, iParam6);
						func_293(uParam0, uParam1, bParam3, 0);
					}
				}
				else
				{
					if (bParam4)
					{
						fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.02f, 0.1f);
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8 + fVar0) < 0.33f)
							{
								uParam0->f_8 = (uParam0->f_8 + fVar0);
							}
							else
							{
								uParam0->f_8 = (uParam0->f_8 - fVar0);
							}
						}
						else if ((uParam0->f_8 - fVar0) > -0.33f)
						{
							uParam0->f_8 = (uParam0->f_8 - fVar0);
						}
						else
						{
							uParam0->f_8 = (uParam0->f_8 + fVar0);
						}
						fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.02f, 0.1f);
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8.f_2 + fVar0) < 0.29f)
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
							}
							else
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
							}
						}
						else if ((uParam0->f_8.f_2 - fVar0) > -0.29f)
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
						}
						else
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
						}
						uParam0->f_2 = { vLocal_41 };
						iLocal_53 = 1;
						iLocal_54 = 1;
					}
					if (iLocal_53 && iLocal_54)
					{
						if (!iLocal_52)
						{
							HUD::CLEAR_PRINTS();
							iLocal_52 = 1;
							SYSTEM::SETTIMERB(0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_52)
			{
				func_269("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
				if (SYSTEM::TIMERB() > 25)
				{
					if (func_297(uParam0, uParam1, 1))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(4294967295, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_52 = 0;
						return 1;
					}
				}
			}
			else if (!func_289(uParam0))
			{
				if (!iLocal_55)
				{
					func_296(uParam0, *uParam2);
				}
				else
				{
					func_295();
					func_294(uParam0, iParam6);
					func_293(uParam0, uParam1, bParam3, 0);
				}
			}
			else if (!iLocal_52)
			{
				iLocal_52 = 1;
				SYSTEM::SETTIMERB(0);
			}
			break;
	}
	return 0;
}

int func_289(var uParam0)//Position - 0x18643
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = PAD::GET_CONTROL_NORMAL(2, 220);
	fVar2 = PAD::GET_CONTROL_NORMAL(2, 221);
	iLocal_91 = SYSTEM::ROUND(fVar2);
	switch (iLocal_90)
	{
		case 0:
			if (iLocal_91 > 120)
			{
				iLocal_92 = MISC::GET_GAME_TIMER();
				iLocal_90 = 1;
			}
			if (iLocal_91 < 4294967196)
			{
				iLocal_96 = SYSTEM::ROUND(fVar1);
			}
			break;
		
		case 1:
			if (iLocal_91 > 120)
			{
				iLocal_92 = MISC::GET_GAME_TIMER();
			}
			else if ((iLocal_91 < 120 && iLocal_91 > 4294967176) && (MISC::GET_GAME_TIMER() - iLocal_92) > 500)
			{
				iLocal_90 = 0;
			}
			else if (iLocal_91 < 4294967196)
			{
				iLocal_93 = MISC::GET_GAME_TIMER();
				if ((iLocal_93 - iLocal_92) < 500)
				{
					iLocal_96 = SYSTEM::ROUND(fVar1);
					iLocal_94 = (iLocal_93 - iLocal_92);
					iLocal_90 = 2;
				}
			}
			break;
		
		case 2:
			if (iLocal_94 > iLocal_95)
			{
				if (iLocal_94 > 100 && iLocal_94 < 150)
				{
					fLocal_99 = 0.066477f;
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_99);
				}
				else
				{
					fLocal_98 = (SYSTEM::TO_FLOAT(iLocal_95) / SYSTEM::TO_FLOAT(iLocal_94));
					fLocal_99 = ((1f - fLocal_98) * fLocal_102);
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_99);
				}
			}
			else
			{
				fLocal_99 = 0f;
			}
			if (iLocal_96 > 7)
			{
				fLocal_100 = (SYSTEM::TO_FLOAT(iLocal_96) / fLocal_105);
				fLocal_101 = (fLocal_103 * fLocal_100);
				uParam0->f_8 = (uParam0->f_8 + fLocal_101);
			}
			else if (iLocal_96 < 4294967289)
			{
				fLocal_100 = (SYSTEM::TO_FLOAT(iLocal_96) / fLocal_104);
				fLocal_101 = (fLocal_103 * fLocal_100);
				uParam0->f_8 = (uParam0->f_8 - fLocal_101);
			}
			else
			{
				fLocal_101 = 0f;
			}
			if (fLocal_99 < 0.066477f && fLocal_101 == 0f)
			{
				func_292();
			}
			else if (fLocal_99 <= 0.066477f && fLocal_101 < 0.06f)
			{
				func_291();
			}
			else
			{
				func_290();
			}
			iVar0 = 1;
			iLocal_90 = 0;
			break;
	}
	return iVar0;
}

void func_290()//Position - 0x18801
{
	Local_39.f_4 = 210;
	Local_39.f_5 = 23;
	Local_39.f_6 = 19;
}

void func_291()//Position - 0x1881B
{
	Local_39.f_4 = 183;
	Local_39.f_5 = 137;
	Local_39.f_6 = 0;
}

void func_292()//Position - 0x18834
{
	Local_39.f_4 = 16;
	Local_39.f_5 = 184;
	Local_39.f_6 = 10;
}

void func_293(var uParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x1884E
{
	vector3 vVar0;
	
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_E, (uParam0->f_E.f_1 + fLocal_34), uParam0->f_E.f_2) };
	if (iParam3 == 1)
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_E, (uParam0->f_E.f_1 + fLocal_34), uParam0->f_E.f_2) };
	}
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar0, &Local_38, &(Local_38.f_1));
	if ((MISC::GET_GAME_TIMER() % 1000) < 50)
	{
	}
	if (!bParam2)
	{
		if (bLocal_49)
		{
			func_269("Darts", "Dart_Reticules_Zoomed", &Local_38, 1, 0, 4, 0);
		}
		else
		{
			func_269("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
		}
		if (!iLocal_56)
		{
			iLocal_56 = 1;
		}
	}
}

void func_294(var uParam0, int iParam1)//Position - 0x188FD
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	
	fVar0 = 0.033367f;
	bVar7 = false;
	fVar3 = PAD::_0x5B84D09CEC5209C5(2, 218);
	fVar4 = PAD::_0x5B84D09CEC5209C5(2, 219);
	fVar5 = PAD::GET_CONTROL_NORMAL(2, 220);
	fVar6 = PAD::GET_CONTROL_NORMAL(2, 221);
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (MISC::ABSF(fVar5) > MISC::ABSF(fVar3) || MISC::ABSF(fVar6) > MISC::ABSF(fVar4))
		{
			fVar3 = fVar5;
			fVar4 = fVar6;
			bVar7 = false;
		}
		else
		{
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (PAD::IS_LOOK_INVERTED())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (PAD::IS_CONTROL_PRESSED(2, 227))
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.06f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.06f));
			}
			else
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.03f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.03f));
			}
			uParam0->f_8 = func_14(uParam0->f_8, -0.33f, 0.33f);
			uParam0->f_8.f_2 = func_14(uParam0->f_8.f_2, -0.29f, 0.29f);
			bVar7 = true;
		}
	}
	if (!bVar7)
	{
		if (PAD::_IS_INPUT_DISABLED(2))
		{
			if (fVar5 != 0f || fVar6 != 0f)
			{
				fVar3 = fVar5;
				fVar4 = fVar6;
			}
		}
		if (fVar3 > 0f)
		{
			if ((uParam0->f_8 + (fLocal_47 * fVar0)) < 0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 + (fLocal_47 * fVar0));
			}
		}
		else if (fVar3 < 0f)
		{
			if ((uParam0->f_8 - (fLocal_47 * fVar0)) > -0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 - (fLocal_47 * fVar0));
			}
		}
		if (fVar4 > 0f)
		{
			if ((uParam0->f_8.f_2 - (fLocal_47 * fVar0)) > -0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fLocal_47 * fVar0));
			}
		}
		else if (fVar4 < 0f)
		{
			if ((uParam0->f_8.f_2 + (fLocal_47 * fVar0)) < 0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fLocal_47 * fVar0));
			}
		}
	}
	uParam0->f_E = { uParam0->f_8 };
	if (iParam1 == 0)
	{
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_44), (0f + fLocal_44));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_43), (0f + fLocal_43));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_E = uParam0->f_8;
			uParam0->f_E = (uParam0->f_E + (fVar1 * fVar0));
		}
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_44), (0f + fLocal_44));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_43), (0f + fLocal_43));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.29f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.29f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_E.f_2 = uParam0->f_8.f_2;
			uParam0->f_E.f_2 = (uParam0->f_E.f_2 + (fVar1 * fVar0));
		}
	}
	if (iParam1 == 1)
	{
		fLocal_47 = 0.5f;
		if (iLocal_90 == 1)
		{
			fVar8 = 0.06f;
			fVar9 = 0.08f;
		}
		else
		{
			fVar8 = 0.02f;
			fVar9 = 0.03f;
		}
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar9), (0f + fVar9));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_E = uParam0->f_8;
			uParam0->f_E = (uParam0->f_E + (fVar1 * fVar0));
		}
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar9), (0f + fVar9));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_E.f_2 = uParam0->f_8.f_2;
			uParam0->f_E.f_2 = (uParam0->f_E.f_2 + (fVar1 * fVar0));
		}
	}
}

void func_295()//Position - 0x18CEF
{
	if (PAD::IS_CONTROL_PRESSED(2, 227))
	{
		fLocal_47 = 0.3f;
	}
	else
	{
		fLocal_47 = 0.1f;
	}
	if (PAD::IS_CONTROL_PRESSED(2, 229))
	{
		if (bLocal_49)
		{
			if (SYSTEM::TIMERA() > iLocal_97)
			{
				fLocal_43 = fLocal_45;
				fLocal_44 = fLocal_46;
				fLocal_47 = 0.1f;
				bLocal_49 = false;
			}
		}
		else if (iLocal_48 < 1)
		{
			fLocal_43 = 0.03f;
			fLocal_44 = 0.05f;
			fLocal_47 = 0.1f;
			SYSTEM::SETTIMERA(0);
			bLocal_49 = true;
			iLocal_48++;
		}
		else if ((((((!func_298("DARTS_FST_HLP") && !func_298("DARTS_AIM_HLP")) && !func_298("DARTS_CLOCK")) && !func_298("DARTS_STD_HLP")) && !func_298("DARTS_INSTR_W")) && !func_298("DARTS_INSTR_B")) && !iLocal_50)
		{
			iLocal_50 = 1;
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E2F, 1))
			{
				func_413("DARTS_SHT_USE", 4294967295);
				MISC::SET_BIT(&Global_19E2F, 1);
			}
		}
	}
	else if (bLocal_49)
	{
		fLocal_43 = fLocal_45;
		fLocal_44 = fLocal_46;
		fLocal_47 = 0.1f;
		bLocal_49 = false;
	}
}

void func_296(var uParam0, struct<4> Param1, var uParam2, var uParam3)//Position - 0x18E01
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	vVar0.x = (vVar0.x + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f));
	vVar0.z = (vVar0.z + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f));
	uParam0->f_8 = { Param1.f_3 + vVar0 };
	uParam0->f_2 = { vLocal_41 };
}

int func_297(var uParam0, var uParam1, bool bParam2)//Position - 0x18E55
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_COORDS(*uParam0, vLocal_40, 1, 0, 0, 1);
	}
	else
	{
		*uParam0 = OBJECT::CREATE_OBJECT(uParam0->f_1, vLocal_40, 0, false, 0);
	}
	bLocal_49 = false;
	fLocal_47 = 0.1f;
	fLocal_43 = fLocal_45;
	fLocal_44 = fLocal_46;
	uParam0->f_17 = 0;
	uParam0->f_18 = 1;
	func_282(uParam0);
	fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, vLocal_41) };
	vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, (uParam0->f_E + 0.0035f), (uParam0->f_E.f_1 + fLocal_34), uParam0->f_E.f_2) };
	fVar5 = MISC::GET_HEADING_FROM_VECTOR_2D((vVar1.x - vVar2.x), (vVar1.y - vVar2.y));
	fVar5 = (fVar5 - 180f);
	fVar3 = 90f;
	uParam0->f_11 = { fVar3, fVar4, fVar5 };
	ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_11, 0, 1);
	iLocal_53 = 0;
	iLocal_55 = 0;
	if (bParam2)
	{
		func_269("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_34), uParam0->f_8.f_2) };
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar0, &Local_39, &(Local_39.f_1));
	return 1;
}

int func_298(char* sParam0)//Position - 0x18F8C
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_299(int iParam0, int iParam1)//Position - 0x18F9F
{
	if (iParam0 == 0)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E2F, 9))
		{
			if ((!func_298("DARTS_SHT_USE") && !func_298("DARTS_INSTR_W")) && !func_298("DARTS_INSTR_B"))
			{
				func_413("DARTS_AIM_HLP", 4294967295);
				MISC::SET_BIT(&Global_19E2F, 9);
			}
		}
		else if (iParam1 && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E2F, 7))
		{
			if ((!func_298("DARTS_AIM_HLP") && !func_298("DARTS_INSTR_W")) && !func_298("DARTS_INSTR_B"))
			{
				func_413("DARTS_CLOCK", 4294967295);
				MISC::SET_BIT(&Global_19E2F, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E2F, 8))
		{
			if ((!func_298("DARTS_SHT_USE") && !func_298("DARTS_INSTR_W")) && !func_298("DARTS_INSTR_B"))
			{
				func_413("DARTS_STD_HLP", 4294967295);
				MISC::SET_BIT(&Global_19E2F, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!iLocal_51 && !func_298("DARTS_SHT_USE")) && !func_298("DARTS_INSTR_W")) && !func_298("DARTS_INSTR_B"))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E2F, 2))
			{
				func_413("DARTS_FST_HLP", 4294967295);
				MISC::SET_BIT(&Global_19E2F, 2);
			}
			iLocal_51 = 1;
		}
	}
}

int func_300(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x190F4
{
	vector3 vVar0;
	
	switch (*uParam2)
	{
		case 0:
			vVar0 = { func_303(iParam0) };
			*uParam3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, vVar0) };
			func_302(*uParam3);
			SYSTEM::SETTIMERB(0);
			*uParam2 = 1;
			break;
		
		case 1:
			if (SYSTEM::TIMERB() > 3000 || PAD::IS_CONTROL_JUST_PRESSED(2, 201))
			{
				func_301();
				*uParam2 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_301()//Position - 0x19165
{
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_75, iLocal_87, 2000, 1, 1);
	CAM::DESTROY_CAM(iLocal_87, 0);
}

void func_302(vector3 vParam0)//Position - 0x19181
{
	vector3 vVar0;
	
	vVar0 = { -5.5606f, -0.0106f, -131.6781f };
	iLocal_87 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vParam0, vVar0, 65f, 0, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_87, iLocal_75, 2000, 1, 1);
}

Vector3 func_303(int iParam0)//Position - 0x191C3
{
	float fVar0;
	vector3 vVar1;
	
	if (iParam0 == 50)
	{
		vVar1 = { 0f, -0.5f, 0f };
	}
	else
	{
		fVar0 = func_306(iParam0);
		vVar1.y = -0.5f;
		vVar1.x = func_305(fVar0);
		vVar1.z = func_304(fVar0);
	}
	return vVar1;
}

float func_304(float fParam0)//Position - 0x19207
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (SYSTEM::COS(fParam0) * fVar0);
	return fVar1;
}

float func_305(float fParam0)//Position - 0x19223
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (SYSTEM::SIN(fParam0) * fVar0);
	return fVar1;
}

var func_306(int iParam0)//Position - 0x1923F
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	
	iVar1 = (iParam0 / 2);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar1 == iLocal_33[iVar0])
		{
			uVar3 = fVar2;
		}
		fVar2 = (fVar2 + 18f);
		iVar0++;
	}
	return uVar3;
}

int func_307(var uParam0)//Position - 0x1927B
{
	switch (*uParam0)
	{
		case 0:
			if (PAD::IS_CONTROL_PRESSED(2, 228))
			{
				func_314(1);
				*uParam0 = 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (PAD::IS_CONTROL_PRESSED(2, 228))
			{
				if (!CAM::IS_CAM_INTERPOLATING(iLocal_84))
				{
					func_312();
					func_311(&iLocal_208, vLocal_239, vLocal_240, 30f, 10, 10, 3, 15f, 0, 0, -1f, 1);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			if (!PAD::IS_CONTROL_PRESSED(2, 228))
			{
				*uParam0 = 3;
			}
			else
			{
				func_308(&iLocal_208, 1, 1, 0, 0, 1045220557, 0, 1065353216, 0);
			}
			break;
		
		case 3:
			func_314(0);
			func_492();
			if (CAM::DOES_CAM_EXIST(iLocal_208))
			{
				if (CAM::IS_CAM_ACTIVE(iLocal_208))
				{
					CAM::SET_CAM_ACTIVE(iLocal_208, false);
				}
				CAM::DESTROY_CAM(iLocal_208, 0);
			}
			*uParam0 = 0;
			return 0;
			break;
	}
	return 1;
}

void func_308(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)//Position - 0x1936E
{
	int iVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	
	PAD::_DISABLE_INPUT_GROUP(2);
	func_310(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (PAD::IS_LOOK_INVERTED())
	{
		iVar0[3] = (iVar0[3] * 4294967295);
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		fVar1 = PAD::_0x5B84D09CEC5209C5(2, 239);
		fVar2 = PAD::_0x5B84D09CEC5209C5(2, 240);
		fVar3 = (fVar1 - uParam0->f_1D);
		fVar4 = (fVar2 - uParam0->f_1E);
		uParam0->f_1D = fVar1;
		uParam0->f_1E = fVar2;
		if (bParam4)
		{
			iVar0[2] = -SYSTEM::ROUND(((fVar3 * fParam5) * 127f));
			iVar0[3] = -SYSTEM::ROUND(((fVar4 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = SYSTEM::ROUND(((PAD::_0x5B84D09CEC5209C5(2, 290) * fParam5) * 127f));
			iVar0[3] = SYSTEM::ROUND(((PAD::_0x5B84D09CEC5209C5(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_309((iVar0[2] + uParam0->f_18), 4294967169, 127);
		iVar0[3] = func_309((iVar0[3] + uParam0->f_19), 4294967169, 127);
	}
	if (uParam0->f_18 == iVar0[2] && uParam0->f_19 == iVar0[3])
	{
		if (uParam0->f_1B < MISC::GET_GAME_TIMER())
		{
			uParam0->f_18 = 0;
			uParam0->f_19 = 0;
			if (PAD::_IS_INPUT_DISABLED(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_1C = 1;
			}
		}
	}
	else
	{
		uParam0->f_18 = iVar0[2];
		uParam0->f_19 = iVar0[3];
		uParam0->f_1B = MISC::GET_GAME_TIMER() + 4000;
		uParam0->f_1C = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(SYSTEM::TO_FLOAT(iVar0[2]) / 127f) * IntToFloat(uParam0->f_14));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_16)) / IntToFloat(uParam0->f_14));
		uParam0->f_8 = (-(SYSTEM::TO_FLOAT(iVar0[3]) / 127f) * IntToFloat(uParam0->f_15));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
	}
	fVar5 = (30f * SYSTEM::TIMESTEP());
	vVar6 = { uParam0->f_8 + uParam0->f_B };
	if ((PAD::_IS_INPUT_DISABLED(2) && bParam2) && !uParam0->f_1C)
	{
		uParam0->f_E = vVar6.x;
		uParam0->f_E.f_1 = vVar6.y;
		uParam0->f_E.f_2 = vVar6.z;
	}
	else
	{
		uParam0->f_E = (uParam0->f_E + func_14(((((vVar6.x - uParam0->f_E) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_E.f_1 = (uParam0->f_E.f_1 + func_14(((((vVar6.y - uParam0->f_E.f_1) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_E.f_2 = (uParam0->f_E.f_2 + func_14(((((vVar6.z - uParam0->f_E.f_2) * 0.05f) * fVar5) * fParam7), -3f, 3f));
	}
	if (uParam0->f_1A)
	{
		uParam0->f_E = func_14(uParam0->f_E, SYSTEM::TO_FLOAT(-uParam0->f_15), SYSTEM::TO_FLOAT(uParam0->f_15));
		uParam0->f_E.f_1 = func_14(uParam0->f_E.f_1, SYSTEM::TO_FLOAT(-uParam0->f_16), SYSTEM::TO_FLOAT(uParam0->f_16));
		uParam0->f_E.f_2 = func_14(uParam0->f_E.f_2, SYSTEM::TO_FLOAT(-uParam0->f_14), SYSTEM::TO_FLOAT(uParam0->f_14));
	}
	if (PAD::_IS_INPUT_DISABLED(0) && bParam1)
	{
		if (uParam0->f_1C)
		{
			uParam0->f_11 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_11 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (PAD::_IS_INPUT_DISABLED(0))
		{
			iVar7 = 40;
			iVar8 = 41;
			if (bParam6)
			{
				iVar7 = 241;
				iVar8 = 242;
			}
			if (NETWORK::_0x5C497525F803486B(0, iVar7))
			{
				uParam0->f_11 = (uParam0->f_11 - 5f);
				uParam0->f_1B = MISC::GET_GAME_TIMER() + 4000;
				uParam0->f_1C = 0;
			}
			else if (NETWORK::_0x5C497525F803486B(0, iVar8))
			{
				uParam0->f_11 = (uParam0->f_11 + 5f);
				uParam0->f_1B = MISC::GET_GAME_TIMER() + 4000;
				uParam0->f_1C = 0;
			}
			if (bParam3)
			{
				uParam0->f_11 = func_14(uParam0->f_11, (uParam0->f_7 - uParam0->f_13), uParam0->f_7);
			}
			else
			{
				uParam0->f_11 = func_14(uParam0->f_11, (uParam0->f_7 - uParam0->f_13), (uParam0->f_7 + uParam0->f_13));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = PAD::GET_CONTROL_VALUE(2, 207);
			iVar0[3] = PAD::GET_CONTROL_VALUE(2, 208);
			if (bParam3)
			{
				if (SYSTEM::TO_FLOAT(iVar0[3]) > 127f)
				{
					uParam0->f_11 = (uParam0->f_11 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * (uParam0->f_13 / 2f)))));
				}
			}
			else
			{
				uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_13))));
				uParam0->f_11 = (uParam0->f_11 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * uParam0->f_13))));
			}
		}
		else if (bParam3)
		{
			if (SYSTEM::TO_FLOAT(iVar0[1]) < 0f)
			{
				uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_13))));
			}
		}
		else
		{
			uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_13))));
		}
	}
	uParam0->f_12 = (uParam0->f_12 + (((uParam0->f_11 - uParam0->f_12) * 0.06f) * fVar5));
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_E, uParam0->f_12, 0, 1, 1, 2);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			if (CAM::IS_CAM_RENDERING(*uParam0))
			{
				RECORDING::_0xAF66DCEE6609B148();
			}
		}
	}
}

int func_309(int iParam0, int iParam1, int iParam2)//Position - 0x198C2
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_310(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x198E7
{
	*uParam0 = SYSTEM::FLOOR((PAD::_0x5B84D09CEC5209C5(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::_0x5B84D09CEC5209C5(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::_0x5B84D09CEC5209C5(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::_0x5B84D09CEC5209C5(2, 221) * 127f));
	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((PAD::_0x4F8A26A890FD62FB(2, 218) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((PAD::_0x4F8A26A890FD62FB(2, 219) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((PAD::_0x4F8A26A890FD62FB(2, 220) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((PAD::_0x4F8A26A890FD62FB(2, 221) * 127f));
		}
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * 4294967295);
			}
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				*uParam3 = (*uParam3 * 4294967295);
			}
		}
	}
}

void func_311(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, float fParam10, bool bParam11)//Position - 0x199EB
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam2 };
	uParam0->f_7 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_B = { 0f, 0f, 0f };
	uParam0->f_E = { 0f, 0f, 0f };
	uParam0->f_11 = fParam3;
	uParam0->f_12 = fParam3;
	uParam0->f_17 = iParam8;
	uParam0->f_13 = fParam7;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
	if (fParam10 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam10);
	}
	if (uParam0->f_17)
	{
		HUD::LOCK_MINIMAP_ANGLE(iParam9);
	}
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_1D = 0f;
	uParam0->f_1E = 0f;
	uParam0->f_1A = 0;
	uParam0->f_1C = 0;
	uParam0->f_1B = 0;
}

void func_312()//Position - 0x19AE3
{
	if (iLocal_168)
	{
		return;
	}
	func_313();
	PAD::_0x3D42B92563939375("Darts Zoom");
	iLocal_168 = 1;
}

void func_313()//Position - 0x19B05
{
	if (iLocal_167 || iLocal_168)
	{
		PAD::_0x643ED62D5EA3BEBD();
		iLocal_167 = 0;
		iLocal_168 = 0;
	}
}

void func_314(bool bParam0)//Position - 0x19B28
{
	if (bParam0)
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_84, iLocal_75, 1000, 1, 1);
	}
	else
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_75, iLocal_84, 1000, 1, 1);
	}
}

void func_315(var uParam0)//Position - 0x19B52
{
	if (uParam0->f_2A7)
	{
		if (uParam0->f_2A9 == 2)
		{
			uParam0->f_2A9 = 0;
		}
		uParam0->f_2A7 = 0;
	}
	switch (uParam0->f_2A9)
	{
		case 0:
			func_236(&(uParam0->f_3E), func_317(uParam0->f_2AA), "", 2000, 5, 1);
			uParam0->f_2A9 = 1;
			break;
		
		case 1:
			if (!func_231(&(uParam0->f_3E), 0))
			{
				func_316(&(uParam0->f_3E));
				uParam0->f_2A9 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_316(var uParam0)//Position - 0x19BD7
{
	uParam0->f_8 = 0;
	func_416(&(uParam0->f_2));
	func_416(&(uParam0->f_5));
}

char* func_317(int iParam0)//Position - 0x19BF4
{
	switch (iParam0)
	{
		case 0:
			return "DARTS_180_SPLSH";
		
		case 1:
			return "DARTS_BE_SPLSH";
		
		default:
	}
	return "DARTS_BE_SPLSH";
}

void func_318(var uParam0)//Position - 0x19C21
{
	if (!iLocal_54)
	{
		if (!PAD::IS_CONTROL_PRESSED(2, 201))
		{
			iLocal_54 = 1;
		}
	}
	if ((iLocal_30 == 1 && iLocal_31 < 3) && *uParam0 != 5)
	{
		if ((PAD::IS_CONTROL_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 223)) && iLocal_54)
		{
			*uParam0 = 6;
		}
	}
}

void func_319(var uParam0, int iParam1)//Position - 0x19C79
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (iParam1 == 0)
		{
			if (!func_3(&(uParam0->f_29A), 15) && !iLocal_48 > 0)
			{
				func_115(&(uParam0->f_1FD), 0, 0, 0, 1);
				func_114(&(uParam0->f_1FD), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_114(&(uParam0->f_1FD), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_320(&(uParam0->f_1FD), "DARTS_AIM", 2, 20, 1, 0);
				func_114(&(uParam0->f_1FD), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				func_114(&(uParam0->f_1FD), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_114(&(uParam0->f_1FD), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_111(&(uParam0->f_1FD), 1);
				func_326(&(uParam0->f_29A), 8, 0);
				func_326(&(uParam0->f_29A), 16, 0);
				func_326(&(uParam0->f_29A), 23, 0);
			}
			else if (iLocal_48 > 0 && !func_3(&(uParam0->f_29A), 17))
			{
				func_115(&(uParam0->f_1FD), 0, 0, 0, 1);
				func_114(&(uParam0->f_1FD), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_114(&(uParam0->f_1FD), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_320(&(uParam0->f_1FD), "DARTS_AIM", 2, 20, 1, 0);
				func_114(&(uParam0->f_1FD), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_114(&(uParam0->f_1FD), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_111(&(uParam0->f_1FD), 1);
				func_326(&(uParam0->f_29A), 8, 0);
				func_326(&(uParam0->f_29A), 16, 0);
				func_326(&(uParam0->f_29A), 23, 0);
			}
		}
		else if (!func_3(&(uParam0->f_29A), 16))
		{
			func_115(&(uParam0->f_1FD), 1, 0, 0, 1);
			func_114(&(uParam0->f_1FD), "DARTS_SKIP", 2, 223, 1, 1, 0);
			func_114(&(uParam0->f_1FD), "DARTS_END_QT", 2, 235, 1, 1, 0);
			func_111(&(uParam0->f_1FD), 1);
			func_326(&(uParam0->f_29A), 16, 1);
			func_326(&(uParam0->f_29A), 8, 0);
			func_326(&(uParam0->f_29A), 15, 0);
			func_326(&(uParam0->f_29A), 17, 0);
			func_326(&(uParam0->f_29A), 23, 0);
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		func_194(func_110(func_3(&(uParam0->f_29A), 16), 1, 2));
		func_117(&(uParam0->f_1FD), 200f, 1, 0, 0, 1065353216);
	}
	else if ((func_3(&(uParam0->f_29A), 15) || func_3(&(uParam0->f_29A), 16)) || func_3(&(uParam0->f_29A), 23))
	{
		func_326(&(uParam0->f_29A), 15, 0);
		func_326(&(uParam0->f_29A), 16, 0);
		func_326(&(uParam0->f_29A), 23, 0);
	}
}

int func_320(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x19F35
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = uParam0->f_7B;
	if (iVar0 < 8)
	{
		uParam0->f_2[iVar0 /*15*/] = sParam1;
		uParam0->f_2[iVar0 /*15*/].f_1 = 0;
		uParam0->f_2[iVar0 /*15*/].f_2 = iParam5;
		uParam0->f_2[iVar0 /*15*/].f_C = 0;
		uParam0->f_2[iVar0 /*15*/].f_D = 0;
		uParam0->f_2[iVar0 /*15*/].f_E = 0;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		MISC::SET_BIT(&(uParam0->f_2[iVar0 /*15*/].f_C), 0);
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_2[iVar0 /*15*/].f_D), 0);
		}
		uParam0->f_2[iVar0 /*15*/].f_E++;
		uParam0->f_7B++;
		return 1;
	}
	return 0;
}

void func_321(var uParam0)//Position - 0x1A000
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (!func_3(&(uParam0->f_29A), 23))
		{
			func_115(&(uParam0->f_1FD), 0, 0, 0, 1);
			func_320(&(uParam0->f_1FD), "IB_MAPMOVE", 2, 21, 1, 0);
			func_114(&(uParam0->f_1FD), "IB_ZOOM", 2, 39, 1, 1, 0);
			func_111(&(uParam0->f_1FD), 1);
			func_326(&(uParam0->f_29A), 23, 1);
			func_326(&(uParam0->f_29A), 8, 0);
			func_326(&(uParam0->f_29A), 16, 0);
			func_326(&(uParam0->f_29A), 15, 0);
			func_326(&(uParam0->f_29A), 17, 0);
		}
		func_117(&(uParam0->f_1FD), 1128792064, 1, 0, 1, 1065353216);
	}
	else if ((func_3(&(uParam0->f_29A), 15) || func_3(&(uParam0->f_29A), 16)) || func_3(&(uParam0->f_29A), 23))
	{
		func_326(&(uParam0->f_29A), 15, 0);
		func_326(&(uParam0->f_29A), 16, 0);
		func_326(&(uParam0->f_29A), 23, 0);
		func_326(&(uParam0->f_29A), 17, 0);
	}
}

void func_322(var uParam0)//Position - 0x1A112
{
	bool bVar0;
	
	bVar0 = false;
	if (!iLocal_54)
	{
		if (!PAD::IS_CONTROL_PRESSED(2, 201) && !PAD::IS_CONTROL_PRESSED(2, 202))
		{
			iLocal_54 = 1;
		}
		else
		{
			iLocal_54 = 0;
		}
	}
	if (*uParam0 != 13)
	{
		if (bVar0)
		{
			if (iLocal_54 && iLocal_53 == 0)
			{
				iLocal_54 = 0;
				bVar0 = false;
				bLocal_179 = false;
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			}
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 235) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 235))
		{
			if (!bLocal_179)
			{
				*uParam0 = 14;
				bLocal_179 = true;
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			}
		}
		else if (func_298("DARTS_QUIT"))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
			bLocal_179 = false;
		}
	}
}

void func_323(int iParam0)//Position - 0x1A1B5
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_4(iParam0, "DARTS_BOAST", 0, 4);
	}
}

float func_324(int iParam0)//Position - 0x1A1D3
{
	if (iParam0 < 10)
	{
		return 0.107f;
	}
	if (iParam0 < 25)
	{
		return 0.096f;
	}
	if (iParam0 < 50)
	{
		return 0.085f;
	}
	if (iParam0 < 70)
	{
		return 0.075f;
	}
	return 0.064f;
}

float func_325(int iParam0)//Position - 0x1A228
{
	if (iParam0 < 10)
	{
		return 0.08f;
	}
	if (iParam0 < 25)
	{
		return 0.072f;
	}
	if (iParam0 < 50)
	{
		return 0.064f;
	}
	if (iParam0 < 70)
	{
		return 0.056f;
	}
	return 0.048f;
}

void func_326(int iParam0, int iParam1, bool bParam2)//Position - 0x1A27D
{
	if (bParam2)
	{
		MISC::SET_BIT(iParam0, iParam1);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(iParam0, iParam1);
	}
}

int func_327(int iParam0, var uParam1)//Position - 0x1A29D
{
	if (iParam0 >= 10)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_49FE.f_6, 12))
		{
			*uParam1 = 12;
			return 1;
		}
	}
	return 0;
}

int func_328(int iParam0, var uParam1, var uParam2)//Position - 0x1A2C9
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iParam0->f_1A6[iVar0] = 301;
		iParam0->f_1A9[iVar0] = 301;
		iVar0++;
	}
	iParam0->f_1C6 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_239(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		func_238(uParam1, iVar0);
		func_244(uParam1, iVar0, 301);
		iVar0++;
	}
	iLocal_30 = 0;
	iLocal_31 = 0;
	iParam0->f_1AC = 0;
	iParam0->f_F9.f_3 = 0;
	iLocal_195 = 0;
	iParam0->f_1B4 = 0;
	iLocal_48 = 0;
	iLocal_172 = 1;
	iLocal_173 = 0;
	iLocal_175 = 0;
	iLocal_50 = 0;
	iParam0->f_1CA = 0;
	iParam0->f_1C8 = 0;
	iLocal_181 = 0;
	func_326(&(uParam2->f_29A), 6, 0);
	func_334();
	func_332(uParam2);
	if (iParam0->f_1C9)
	{
		func_329(iParam0->f_1C9);
		iParam0->f_1C9 = 0;
	}
	return 1;
}

void func_329(bool bParam0)//Position - 0x1A3B5
{
	HUD::DISPLAY_RADAR(false);
	if (CAM::IS_CAM_ACTIVE(iLocal_77))
	{
		CAM::SET_CAM_ACTIVE(iLocal_77, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_81))
	{
		CAM::SET_CAM_ACTIVE(iLocal_81, false);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_331();
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
		CAM::DO_SCREEN_FADE_IN(500);
	}
	func_330(bParam0);
}

void func_330(bool bParam0)//Position - 0x1A406
{
	if (bParam0)
	{
		CAM::SET_CAM_ACTIVE(iLocal_75, true);
	}
}

void func_331()//Position - 0x1A41A
{
	CAM::SET_CAM_ACTIVE(iLocal_77, true);
}

void func_332(var uParam0)//Position - 0x1A429
{
	func_333();
	uParam0->f_29E = 3;
	func_326(&(uParam0->f_29A), 15, 0);
	func_326(&(uParam0->f_29A), 16, 0);
	func_326(&(uParam0->f_29A), 17, 0);
}

void func_333()//Position - 0x1A45F
{
	int iVar0;
	
	Local_108.f_42 = 4294967295;
	Local_108.f_43 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_108.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_108.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_108.f_9[iVar0 /*7*/].f_5 = 0;
		Local_108.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_108.f_5 = 0;
	Local_108.f_5.f_1 = -1f;
	Local_108.f_5.f_2 = 0;
	Local_108 = 0;
	Local_108.f_1 = 0;
}

void func_334()//Position - 0x1A4CF
{
	SYSTEM::SETTIMERA(0);
	iLocal_54 = 0;
	HUD::CLEAR_SMALL_PRINTS();
}

void func_335(bool bParam0, int iParam1)//Position - 0x1A4E3
{
	int iVar0;
	
	if (!func_337(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_43D7.f_1F9B)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_43D7.f_1F9B = 0;
	}
	HUD::_CLEAR_NOTIFICATIONS_POS(0f);
	if (Global_43D7.f_15FA[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_43D7.f_15FA[iVar0] = 0;
	}
	if (Global_43D7.f_15EC[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_43D7.f_15EC[iVar0] = 0;
	}
	if (Global_43D7.f_15F3[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_43D7.f_15F3[iVar0] = 0;
	}
	if (bParam0)
	{
		func_336(&(Global_43D7.f_161A[iVar0 /*10*/]));
		Global_43D7.f_1657[iVar0] = 0;
	}
	else
	{
		Global_43D7.f_1657[iVar0] = 0;
	}
}

void func_336(int iParam0)//Position - 0x1A5A1
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_337(var uParam0, bool bParam1, int iParam2)//Position - 0x1A5CA
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == 4294967295)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar3 = 4294967295;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_43D7.f_1657[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_43D7.f_1657[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != 4294967295)
		{
			Global_43D7.f_1657[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_338(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1A667
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam4);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

int func_339(var uParam0, var uParam1, var uParam2)//Position - 0x1A697
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
	if (!func_3(&(uParam0->f_29A), 7))
	{
		func_396(0, 0, 0, 1);
		func_395(0, 4294967295, 1);
		if (func_394())
		{
			if (Global_411C36 == uParam0->f_294)
			{
				iVar1 = 1;
			}
			else
			{
				uParam0->f_294 = Global_411C36;
				func_393(uParam0->f_294, 1, 1);
				unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				switch (uParam0->f_294)
				{
					case 0:
						sVar0 = "DARTS_LEGD";
						break;
					
					case 1:
						sVar0 = "DARTS_SETD";
						break;
					
					case 2:
						sVar0 = "";
						break;
				}
				if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
				{
					func_392(sVar0, 0, 0);
				}
			}
			Global_411C37 = MISC::GET_GAME_TIMER() + 300;
		}
		else if (func_391() && MISC::GET_GAME_TIMER() > Global_411C37)
		{
			if (Global_411C36 == uParam0->f_294)
			{
				iVar2 = func_390(0);
				if (iVar2 == 4294967295 || iVar2 == 1)
				{
					iVar1 = 1;
				}
			}
			Global_411C37 = MISC::GET_GAME_TIMER() + 300;
		}
		if (func_389(&(uParam0->f_27F)))
		{
			uParam0->f_294 = (uParam0->f_294 - 1);
			if (uParam0->f_294 < 0)
			{
				uParam0->f_294 = (uParam0->f_295 - 1);
			}
			func_393(uParam0->f_294, 1, 1);
			unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_294)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				func_392(sVar0, 0, 0);
			}
		}
		if (func_388(&(uParam0->f_282)))
		{
			uParam0->f_294++;
			if (uParam0->f_294 > (uParam0->f_295 - 1))
			{
				uParam0->f_294 = 0;
			}
			func_393(uParam0->f_294, 1, 1);
			unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_294)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				func_392(sVar0, 0, 0);
			}
		}
		if (func_387(&(uParam0->f_279)) || func_386(&(uParam0->f_279), uParam0->f_294, iVar1))
		{
			if (uParam0->f_294 == 0)
			{
				uParam0->f_296 = (uParam0->f_296 - 1);
				if (uParam0->f_296 < 0)
				{
					uParam0->f_296 = (uParam0->f_297 - 1);
				}
			}
			else if (uParam0->f_294 == 1)
			{
				uParam0->f_298 = (uParam0->f_298 - 1);
				if (uParam0->f_298 < 0)
				{
					uParam0->f_298 = (uParam0->f_299 - 1);
				}
			}
			unk_0x1190AB7024CBD8CB(4294967295, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_368(uParam0);
		}
		if (func_367(&(uParam0->f_27C)) || func_365(&(uParam0->f_27C), uParam0->f_294, iVar1))
		{
			if (uParam0->f_294 == 0)
			{
				uParam0->f_296++;
				if (uParam0->f_296 > (uParam0->f_297 - 1))
				{
					uParam0->f_296 = 0;
				}
			}
			else if (uParam0->f_294 == 1)
			{
				uParam0->f_298++;
				if (uParam0->f_298 > (uParam0->f_299 - 1))
				{
					uParam0->f_298 = 0;
				}
			}
			unk_0x1190AB7024CBD8CB(4294967295, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_368(uParam0);
		}
		if ((PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar1 == 1) && uParam0->f_294 == 2)
		{
			*uParam1 = func_364(uParam0->f_296 + 1, 1);
			*uParam2 = func_364(uParam0->f_298 + 1, 0);
			unk_0x1190AB7024CBD8CB(4294967295, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			return 1;
		}
		func_342(1, 4294967295, 1, 0, 1, 3212836864, 0, 0, 4294967295);
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 202) || func_341())
		{
			func_340(0, 0);
			func_326(&(uParam0->f_29A), 8, 0);
			func_326(&(uParam0->f_29A), 7, 1);
		}
	}
	else
	{
		func_2(uParam0);
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
		{
			func_36(0);
			*uParam1 = 4294967295;
			return 1;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
		{
			func_368(uParam0);
			func_326(&(uParam0->f_29A), 7, 0);
		}
	}
	return 0;
}

void func_340(bool bParam0, bool bParam1)//Position - 0x1AAA7
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_43D7.f_49[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_43D7.f_84C[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_25846A[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_43D7.f_F4E[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_43D7.f_104F[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_43D7.f_1151[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_43D7.f_13DF[iVar0] = 0;
		Global_43D7.f_1469[iVar0] = 0;
		Global_43D7.f_14EA[iVar0] = 0;
		Global_43D7.f_16F2[iVar0] = 0f;
		Global_43D7.f_156B[iVar0] = 0;
		Global_43D7.f_166C[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_43D7.f_13BE[iVar0] = 0;
		Global_43D7.f_13CA[iVar0] = 0f;
		Global_43D7.f_13C4[iVar0] = -1f;
		Global_43D7.f_13D1[iVar0] = 0;
		Global_43D7.f_13D9[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_43D7.f_1362[iVar0 /*4*/]), "", 16);
		Global_43D7.f_1393[iVar0] = 4294967295;
		Global_43D7.f_13A0[iVar0] = 358;
		Global_43D7.f_13AD[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 53)
	{
		StringCopy(&(Global_43D7.f_177E[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_43D7.f_1ACF[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_43D7.f_64A[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_411BEA.f_10), "", 16);
	Global_411BEA.f_14 = 4294967295;
	Global_43D7 = 0;
	Global_43D7.f_1460 = 0;
	Global_43D7.f_1461 = 0;
	Global_43D7.f_1462 = 0;
	Global_43D7.f_1464 = 0;
	Global_43D7.f_1465 = 0;
	Global_43D7.f_1466 = 0;
	Global_43D7.f_1463 = 0;
	Global_43D7.f_16ED = 0;
	Global_43D7.f_1666 = 0;
	Global_43D7.f_1665 = 0;
	Global_43D7.f_1667 = 0;
	StringCopy(&(Global_43D7.f_1252), "", 16);
	Global_43D7.f_1298 = 0;
	Global_43D7.f_1299 = 0;
	Global_43D7.f_129A = 0;
	Global_43D7.f_129B = 0;
	Global_43D7.f_129C = 0;
	Global_43D7.f_129D = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43D7.f_1256[iVar0] = 0;
		iVar0++;
	}
	Global_43D7.f_129E = 0;
	StringCopy(&(Global_411BEA.f_15), "", 16);
	Global_411BEA.f_3D = 0;
	Global_411BEA.f_3E = 0;
	Global_411BEA.f_3F = 0;
	Global_411BEA.f_40 = 0;
	Global_411BEA.f_41 = 0;
	Global_411BEA.f_42 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_411BEA.f_19[iVar0] = 0;
		iVar0++;
	}
	Global_411BEA.f_43 = 0;
	StringCopy(&(Global_43D7.f_1), "", 16);
	Global_43D7.f_13D0 = 0f;
	Global_43D7.f_44 = 0;
	Global_43D7.f_45 = 0;
	Global_43D7.f_46 = 0;
	Global_43D7.f_47 = 0;
	Global_43D7.f_48 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43D7.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_43D7.f_166B = 0;
	Global_43D7.f_166A = 0;
	Global_43D7.f_1668 = 0;
	Global_43D7.f_1669 = 0;
	Global_43D7.f_129F = 0;
	Global_43D7.f_12A0 = 0;
	Global_43D7.f_1467 = 10;
	Global_43D7.f_1468 = 0;
	Global_43D7.f_16EF = 0f;
	Global_43D7.f_16F0 = 0f;
	Global_43D7.f_165E = 0;
	Global_43D7.f_165F = 0;
	Global_43D7.f_1660 = 0f;
	Global_43D7.f_1661 = 0;
	Global_43D7.f_1663 = 0;
	Global_43D7.f_1662 = 0;
	Global_43D7.f_1664 = 0;
	Global_43D7.f_1F97 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_43D7.f_1773[iVar0] = 4294967295;
		Global_43D7.f_1776[iVar0] = 4294967295;
		iVar0++;
	}
	Global_43D7.f_13D7 = 0f;
	Global_43D7.f_13BA = 0;
	Global_43D7.f_13D8 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43D7.f_1779)
	{
		Global_43D7.f_1779[iVar0] = 0;
		iVar0++;
	}
	Global_43D7.f_1F82 = 0;
	Global_43D7.f_1F7D = 0;
	Global_43D7.f_1F87 = 0;
	Global_43D7.f_1F8C = 0;
	Global_43D7.f_1F91 = 0;
	Global_43D7.f_1F93 = 0;
	Global_43D7.f_1F99 = 0;
	Global_43D4 = 0.05f;
	Global_43D5 = 0.05f;
	Global_43D6 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (bParam0)
	{
		Global_43D6 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_43D6 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_43D6 = 0.225f;
	}
}

int func_341()//Position - 0x1AF8A
{
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

void func_342(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x1AFA9
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
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	int iVar53;
	bool bVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar65[64];
	float fVar66;
	int iVar67;
	float fVar68;
	float fVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_337(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == 4294967295)
	{
	}
	if (!func_361(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_43D7)
	{
		if (func_18(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = fVar37;
			fVar57 = fVar36;
			fVar56 = (fVar56 + 0f);
		}
		else
		{
			Global_43D7 = 0;
		}
	}
	if (MISC::GET_HASH_KEY(&(Global_43D7.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar58 = Global_43D5;
	}
	else
	{
		fVar58 = (((Global_43D5 + fVar56) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_43D6;
	}
	fVar61 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar59, &iVar60);
		fVar62 = GRAPHICS::_GET_ASPECT_RATIO(0);
		if (func_20())
		{
			iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) * fVar62));
		}
		fVar63 = (SYSTEM::TO_FLOAT(iVar59) / SYSTEM::TO_FLOAT(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_20())
		{
			fVar61 = 1f;
		}
		iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) / fVar61));
		iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) / fVar61));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_43D7.f_165E)
		{
			if (MISC::GET_HASH_KEY(&(Global_43D7.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar49 = Global_43D5;
			}
			else
			{
				if (Global_43D7)
				{
					StringCopy(&cVar64, func_24(29), 64);
					StringCopy(&cVar65, func_21(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_43D7.f_1ACF[29 /*16*/])) == 2807284209)
					{
						func_360(Global_43D4, Global_43D5, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar64, &cVar65, (Global_43D4 + (fParam5 * 0.5f)), (Global_43D5 + ((fVar56 - 0f) * 0.5f)), fVar57, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar64, &cVar65, (Global_43D4 + (fParam5 * 0.5f)), (Global_43D5 + ((fVar56 - 0f) * 0.5f)), fParam5, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_43D7.f_1F7D)
				{
					iVar1 = Global_43D7.f_1F79;
					iVar2 = Global_43D7.f_1F7A;
					iVar3 = Global_43D7.f_1F7B;
					iVar4 = Global_43D7.f_1F7C;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_360(Global_43D4, (Global_43D5 + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_43D5 + fVar56) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_43D7.f_1)) != 0)
				{
					func_359();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_43D7.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_43D7.f_44)
					{
						if (Global_43D7.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_43D7.f_A[iVar15]);
							iVar15++;
						}
						else if (Global_43D7.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_43D7.f_E[iVar16], Global_43D7.f_12[iVar16]);
							iVar16++;
						}
						else if (Global_43D7.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_43D7.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_43D7.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_43D7.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_43D7.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_43D7.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_43D4 + 0.00390625f), ((Global_43D5 + fVar56) + 0.00416664f), 0);
				}
				if (Global_43D7.f_1661 > Global_43D7.f_1467)
				{
					if (Global_43D7.f_1664 != 0)
					{
						func_359();
						func_357((((Global_43D4 + fParam5) - 0.00390625f) - func_358("CM_ITEM_COUNT", Global_43D7.f_1664, Global_43D7.f_1663)), ((Global_43D5 + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_43D7.f_1664, Global_43D7.f_1663);
					}
				}
			}
			iVar6 = Global_43D7.f_1665;
			iVar9 = 0;
			fVar66 = fVar49;
			if (Global_43D7.f_1F87)
			{
				iVar1 = Global_43D7.f_1F83;
				iVar2 = Global_43D7.f_1F84;
				iVar3 = Global_43D7.f_1F85;
				iVar4 = Global_43D7.f_1F86;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_43D7.f_1467 && iVar6 <= Global_43D7.f_1460)
			{
				if (iVar6 >= 0)
				{
					if (Global_43D7.f_156B[iVar6])
					{
						if (Global_43D7.f_14EA[iVar6] && iVar6 != Global_43D7.f_1665)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar55 = 0.034722f;
						if (Global_43D7.f_166C[iVar6] != 0f)
						{
							fVar55 = Global_43D7.f_166C[iVar6];
						}
						fVar49 = (fVar49 + fVar55);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar55 = 0.034722f;
					fVar49 = (fVar49 + fVar55);
					iVar9++;
					if (Global_43D7.f_1460 <= 1)
					{
						Global_43D7.f_1460++;
					}
					iVar53 = 1;
				}
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_43D4 + (fParam5 * 0.5f)), ((fVar66 + ((fVar49 - fVar66) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar66), 0f, 255, 255, 255, 255, 0);
			if (Global_43D7.f_1661 > Global_43D7.f_1467)
			{
				if (Global_43D7.f_1F8C)
				{
					iVar1 = Global_43D7.f_1F88;
					iVar2 = Global_43D7.f_1F89;
					iVar3 = Global_43D7.f_1F8A;
					iVar4 = Global_43D7.f_1F8B;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_360(Global_43D4, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar61));
				vVar38.y = (vVar38.y * (0.5f / fVar61));
				if (Global_43D7.f_1F99)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_43D4 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar61), ((vVar38.y / 720f) * fVar61), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_43D7.f_1252)) != 0 && Global_43D7.f_129C != 4294967295)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_43D4 + 0.0046875f);
				if (Global_43D7.f_129E != 0)
				{
					func_18(Global_43D7.f_129E, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_43D4 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_356(fVar40);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_43D7.f_1252));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_43D7.f_1298)
				{
					if (Global_43D7.f_1256[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_43D7.f_125B[iVar15]);
						iVar15++;
					}
					else if (Global_43D7.f_1256[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_43D7.f_125F[iVar16], Global_43D7.f_1263[iVar16]);
						iVar16++;
					}
					else if (Global_43D7.f_1256[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_GET_TEXT_SCREEN_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_360(Global_43D4, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_43D7.f_1F91)
				{
					iVar1 = Global_43D7.f_1F8D;
					iVar2 = Global_43D7.f_1F8E;
					iVar3 = Global_43D7.f_1F8F;
					iVar4 = Global_43D7.f_1F90;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_43D4 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_356(fVar40);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_43D7.f_1252));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_43D7.f_1298)
				{
					if (Global_43D7.f_1256[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_43D7.f_125B[iVar15]);
						iVar15++;
					}
					else if (Global_43D7.f_1256[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_43D7.f_125F[iVar16], Global_43D7.f_1263[iVar16]);
						iVar16++;
					}
					else if (Global_43D7.f_1256[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_43D7.f_129E != 0)
				{
					func_18(Global_43D7.f_129E, 1, 1, &fVar36, &fVar37, bParam7);
					func_355(Global_43D7.f_129E, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_24(Global_43D7.f_129E), func_21(Global_43D7.f_129E, 1), ((Global_43D4 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_43D7.f_129C > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_43D7.f_129D) > Global_43D7.f_129C)
					{
						StringCopy(&(Global_43D7.f_1252), "", 16);
						Global_43D7.f_129C = 4294967295;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_411BEA.f_15)) != 0 && Global_411BEA.f_41 != 4294967295)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_43D4 + 0.0046875f);
				if (Global_411BEA.f_43 != 0)
				{
					func_18(Global_411BEA.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_43D4 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_356(fVar40);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_411BEA.f_15));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_411BEA.f_3D)
				{
					if (Global_411BEA.f_19[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_411BEA.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_411BEA.f_19[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_411BEA.f_22[iVar16], Global_411BEA.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_411BEA.f_19[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_GET_TEXT_SCREEN_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_360(Global_43D4, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_43D7.f_1F91)
				{
					iVar1 = Global_43D7.f_1F8D;
					iVar2 = Global_43D7.f_1F8E;
					iVar3 = Global_43D7.f_1F8F;
					iVar4 = Global_43D7.f_1F90;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_43D4 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_356(fVar40);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_411BEA.f_15));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_411BEA.f_3D)
				{
					if (Global_411BEA.f_19[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_411BEA.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_411BEA.f_19[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_411BEA.f_22[iVar16], Global_411BEA.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_411BEA.f_19[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_411BEA.f_43 != 0)
				{
					func_18(Global_411BEA.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					func_355(Global_411BEA.f_43, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_24(Global_411BEA.f_43), func_21(Global_411BEA.f_43, 1), ((Global_43D4 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_411BEA.f_41 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_411BEA.f_42) > Global_411BEA.f_41)
					{
						StringCopy(&(Global_411BEA.f_15), "", 16);
						Global_411BEA.f_41 = 4294967295;
					}
				}
			}
			func_350(iVar59, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_43D7.f_165E)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar67 = Global_43D7.f_1460;
			if (Global_43D7.f_165F)
			{
				iVar67 = (Global_43D7.f_1662 - 1);
			}
			fVar68 = 0f;
			fVar69 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar67)
			{
				fVar55 = 0.034722f;
				if (Global_43D7.f_166C[iVar6] != 0f)
				{
					fVar55 = Global_43D7.f_166C[iVar6];
				}
				if (Global_43D7.f_165F)
				{
					iVar6 = Global_43D7.f_1E20[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_43D7.f_1665 && iVar9 < Global_43D7.f_1467)
				{
					bVar33 = true;
					if (Global_43D7.f_1666 == iVar6)
					{
						fVar69 = fVar68;
					}
					if (Global_43D7.f_14EA[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar58 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_43D7.f_16F2[iVar6] = fVar35;
				fVar34 = (Global_43D4 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_43D7.f_1666 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_43D7.f_1F93)
					{
						HUD::GET_HUD_COLOUR(Global_43D7.f_1F92, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_43D4 + (fParam5 * 0.5f)), (((fVar58 + fVar69) + (0.00277776f * IntToFloat(iVar12))) + (fVar55 * 0.5f)), fParam5, fVar55, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_43D7.f_16F0 = fVar35;
				}
				if (iVar53 && iVar7 == iVar67)
				{
					func_348(bVar32, 1, 0, 0, 0, 0, 0);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("DFLT_MNU_OPT");
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar34, fVar35, 0);
					bVar39 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_43D7.f_1468)
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_43D7.f_13DF[iVar6], iVar8) || Global_43D7.f_13BE[iVar8] == 5)
						{
							if (Global_43D7.f_165F)
							{
								iVar19 = Global_43D7.f_1E30[((iVar9 * Global_43D7.f_1468) + iVar8)];
								iVar20 = Global_43D7.f_1E59[((iVar9 * Global_43D7.f_1468) + iVar8)];
								iVar21 = Global_43D7.f_1E82[((iVar9 * Global_43D7.f_1468) + iVar8)];
								iVar22 = Global_43D7.f_1EAB[((iVar9 * Global_43D7.f_1468) + iVar8)];
								iVar23 = Global_43D7.f_1ED4[((iVar9 * Global_43D7.f_1468) + iVar8)];
							}
							else
							{
								Global_43D7.f_1E30[((iVar9 * Global_43D7.f_1468) + iVar8)] = iVar19;
								Global_43D7.f_1E59[((iVar9 * Global_43D7.f_1468) + iVar8)] = iVar20;
								Global_43D7.f_1E82[((iVar9 * Global_43D7.f_1468) + iVar8)] = iVar21;
								Global_43D7.f_1EAB[((iVar9 * Global_43D7.f_1468) + iVar8)] = iVar22;
								Global_43D7.f_1ED4[((iVar9 * Global_43D7.f_1468) + iVar8)] = iVar23;
							}
							iVar74 = 0;
							bVar54 = false;
							if (Global_43D7.f_1776[0] != 4294967295)
							{
								if ((iVar6 * 5 + iVar8) == Global_43D7.f_1773[0])
								{
									bVar54 = true;
									iVar74 = 0;
								}
							}
							if (Global_43D7.f_1776[1] != 4294967295)
							{
								if ((iVar6 * 5 + iVar8) == Global_43D7.f_1773[1])
								{
									bVar54 = true;
									iVar74 = 1;
								}
							}
							if (Global_43D7.f_13C4[iVar8] != -1f)
							{
								fVar34 = ((Global_43D4 + 0.0046875f) + Global_43D7.f_13C4[iVar8]);
							}
							if ((iVar8 < 4 && Global_43D7.f_13C4[iVar8 + 1] != -1f) && fVar34 < Global_43D7.f_13C4[iVar8 + 1])
							{
								fVar44 = (Global_43D7.f_13C4[iVar8 + 1] - fVar34);
							}
							else
							{
								fVar44 = (((Global_43D4 + Global_43D6) - 0.0046875f) - fVar34);
							}
							if ((Global_43D7.f_13D1[iVar8] && Global_43D7.f_16ED) && bVar32)
							{
								bVar52 = true;
							}
							else
							{
								bVar52 = false;
							}
							switch (Global_43D7.f_13BE[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43D7.f_165F)
										{
											fVar41 = 0f;
											fVar42 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												bVar51 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 5 || Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 8)
													{
														bVar51 = true;
													}
													else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 9)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_348(bVar32, Global_43D7.f_64A[iVar24], Global_43D7.f_74B[iVar24], bVar54, iVar74, bVar51, bVar50);
												HUD::_BEGIN_TEXT_COMMAND_WIDTH(&(Global_43D7.f_49[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_49[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_49[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 5)
												{
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 6)
												{
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 7)
												{
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 9)
												{
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 2)
												{
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_INTEGER(Global_43D7.f_F4E[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 3)
												{
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_FLOAT(Global_43D7.f_104F[(iVar21 + iVar27)], Global_43D7.f_10D0[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
											{
												fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_18(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + fVar36);
														if (iVar14 > 0)
														{
															fVar42 = (fVar42 - (0.00078125f * 4f));
														}
														if (Global_43D7.f_1151[(iVar22 + iVar14)] == 2 || Global_43D7.f_1151[(iVar22 + iVar14)] == 48)
														{
															fVar42 = (fVar42 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar40 = 0f;
											if (Global_43D7.f_13D9[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
											}
											else if (Global_43D7.f_13D9[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
											}
											Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar40;
											Global_43D7.f_1F26[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar41;
											Global_43D7.f_1F4F[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)];
											fVar41 = Global_43D7.f_1F26[((iVar9 * Global_43D7.f_1468) + iVar8)];
											fVar42 = Global_43D7.f_1F4F[((iVar9 * Global_43D7.f_1468) + iVar8)];
										}
										if (bVar52)
										{
											if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_43D7.f_13D9[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_355(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_355(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar31 = 0;
										if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 5 || Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_348(bVar32, Global_43D7.f_64A[iVar24], Global_43D7.f_74B[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_43D7.f_1F97 && Global_43D7.f_1F98 == iVar6)
											{
												func_347(bVar32);
											}
											HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_43D7.f_49[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_49[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 1;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_49[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 8;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 5;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 6;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 7;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 9;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_43D7.f_F4E[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar31 = 2;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_43D7.f_104F[(iVar21 + iVar27)], Global_43D7.f_10D0[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar31 = 3;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_43D7.f_1151[(iVar22 + iVar28)] == 2 || Global_43D7.f_1151[(iVar22 + iVar28)] == 48)
												{
													if (func_18(Global_43D7.f_1151[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_18(Global_43D7.f_1151[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_355(Global_43D7.f_1151[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_43D7.f_13D9[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_24(Global_43D7.f_1151[(iVar22 + iVar28)]), func_21(Global_43D7.f_1151[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_24(Global_43D7.f_1151[(iVar22 + iVar28)]), func_21(Global_43D7.f_1151[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															fVar40 = (fVar40 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar31 = 4;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
										{
											if (iVar31 == 4 && Global_43D7.f_13D9[iVar8] == 2)
											{
												HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
											}
											else
											{
												HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar40), fVar35, 0);
												if (func_346() && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_348(0, Global_43D7.f_64A[iVar24], Global_43D7.f_74B[iVar24], bVar54, 0, bVar51, bVar50);
														StringCopy(&cVar75, "TEST_LABEL", 16);
														fVar76 = 0f;
														fVar77 = 55f;
														fVar78 = 0.0185f;
														fVar79 = 0.004f;
														fVar80 = 0.02f;
														HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
														HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
														GRAPHICS::DRAW_RECT((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar77), 0);
														HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar75);
														HUD::ADD_TEXT_COMPONENT_INTEGER((Global_43D7.f_1665 + iVar30));
														HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar80), (fVar35 + fVar79), 0);
														iVar30++;
													}
												}
											}
										}
										if (iVar28 > 0)
										{
											fVar40 = (fVar40 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_43D7.f_1151[(iVar22 + iVar14)] != 2 && Global_43D7.f_1151[(iVar22 + iVar14)] != 48)
												{
													if (func_18(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_18(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_355(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_43D7.f_1151[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_24(Global_43D7.f_1151[(iVar22 + iVar14)]), func_21(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32), (Global_43D4 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_43D7.f_13D9[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_24(Global_43D7.f_1151[(iVar22 + iVar14)]), func_21(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_24(Global_43D7.f_1151[(iVar22 + iVar14)]), func_21(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar39 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43D7.f_165F)
										{
											func_348(bVar32, Global_43D7.f_64A[iVar24], Global_43D7.f_74B[iVar24], bVar54, 0, 0, 0);
											if (Global_43D7.f_1F97 && Global_43D7.f_1F98 == iVar6)
											{
												func_347(bVar32);
											}
											HUD::_BEGIN_TEXT_COMMAND_WIDTH("NUMBER");
											HUD::ADD_TEXT_COMPONENT_INTEGER(Global_43D7.f_F4E[iVar20]);
											fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar40 = 0f;
											if (Global_43D7.f_13D9[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
											}
											else if (Global_43D7.f_13D9[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
											}
											Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar40;
											Global_43D7.f_1F26[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)];
											fVar41 = Global_43D7.f_1F26[((iVar9 * Global_43D7.f_1468) + iVar8)];
										}
										if (bVar52)
										{
											if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_43D7.f_13D9[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_355(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_355(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_348(bVar32, Global_43D7.f_64A[iVar24], Global_43D7.f_74B[iVar24], bVar54, 0, 0, 0);
										func_345((fVar34 + fVar40), fVar35, "NUMBER", Global_43D7.f_F4E[iVar20], 0);
									}
									bVar39 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43D7.f_165F)
										{
											func_348(bVar32, Global_43D7.f_64A[iVar24], Global_43D7.f_74B[iVar24], bVar54, 0, 0, 0);
											if (Global_43D7.f_1F97 && Global_43D7.f_1F98 == iVar6)
											{
												func_347(bVar32);
											}
											HUD::_BEGIN_TEXT_COMMAND_WIDTH("NUMBER");
											HUD::ADD_TEXT_COMPONENT_FLOAT(Global_43D7.f_104F[iVar21], Global_43D7.f_10D0[iVar21]);
											fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar40 = 0f;
											if (Global_43D7.f_13D9[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
											}
											else if (Global_43D7.f_13D9[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
											}
											Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar40;
											Global_43D7.f_1F26[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)];
											fVar41 = Global_43D7.f_1F26[((iVar9 * Global_43D7.f_1468) + iVar8)];
										}
										if (bVar52)
										{
											if (func_18(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_43D7.f_13D9[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_355(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_355(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_348(bVar32, Global_43D7.f_64A[iVar24], Global_43D7.f_74B[iVar24], bVar54, 0, 0, 0);
										func_344((fVar34 + fVar40), fVar35, "NUMBER", Global_43D7.f_104F[iVar21], Global_43D7.f_10D0[iVar21]);
									}
									bVar39 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_18(Global_43D7.f_1151[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
										{
											if (!Global_43D7.f_165F)
											{
												fVar42 = fVar36;
												fVar40 = 0f;
												if (Global_43D7.f_13D9[iVar8] == 2)
												{
													fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
												}
												else if (Global_43D7.f_13D9[iVar8] == 0)
												{
													fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
												}
												Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar40;
												Global_43D7.f_1F4F[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar42;
											}
											else
											{
												fVar40 = Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)];
												fVar42 = Global_43D7.f_1F4F[((iVar9 * Global_43D7.f_1468) + iVar8)];
											}
											if (bVar52)
											{
												if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_43D7.f_13D9[iVar8] == 2)
													{
														fVar40 = (fVar40 - (fVar36 * 2f));
													}
													fVar43 = (fVar36 * 0.5f);
													if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_355(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														GRAPHICS::DRAW_SPRITE(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
												if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + fVar36);
													fVar43 = (fVar36 * 0.5f);
													if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_355(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														GRAPHICS::DRAW_SPRITE(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_18(Global_43D7.f_1151[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_355(Global_43D7.f_1151[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												GRAPHICS::DRAW_SPRITE(func_24(Global_43D7.f_1151[iVar22]), func_21(Global_43D7.f_1151[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), (fVar36 * func_343(Global_43D7.f_1151[iVar22])), (fVar37 * func_343(Global_43D7.f_1151[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
									bVar39 = true;
									iVar22++;
									break;
								
								case 5:
									bVar39 = true;
									break;
							}
							if (Global_43D7.f_13BE[iVar8] == 5)
							{
								if (Global_43D7.f_13CA[iVar8] > 0.05f)
								{
									fVar34 = (fVar34 + Global_43D7.f_13CA[iVar8]);
								}
								else
								{
									fVar34 = (fVar34 + 0.05f);
								}
							}
							else
							{
								fVar34 = (fVar34 + Global_43D7.f_13CA[iVar8]);
								if (Global_43D7.f_13D1[iVar8])
								{
									if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
									{
										fVar34 = (fVar34 - fVar36);
									}
								}
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_43D7.f_13CA[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_43D7.f_1E20[iVar9] = iVar6;
						Global_43D7.f_1667 = iVar6;
						iVar9++;
						if (Global_43D7.f_14EA[iVar6])
						{
							iVar13++;
						}
						if (Global_43D7.f_166C[iVar6] != 0f)
						{
							fVar68 = (fVar68 + Global_43D7.f_166C[iVar6]);
						}
						else
						{
							fVar68 = (fVar68 + 0.034722f);
						}
					}
					if (!Global_43D7.f_165E)
					{
						Global_43D7.f_156B[iVar6] = 1;
						if (Global_43D7.f_1469[iVar6])
						{
							if (bVar32)
							{
								Global_43D7.f_1664 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_43D7.f_1664 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_43D7.f_165E)
			{
				Global_43D7.f_1660 = ((fVar58 + fVar68) + (0.00277776f * IntToFloat(iVar12)));
				Global_43D7.f_1663 = iVar11;
				Global_43D7.f_1661 = iVar10;
				Global_43D7.f_165E = 1;
			}
		}
		iVar5++;
	}
	if (!Global_43D7.f_165F)
	{
		Global_43D7.f_1662 = iVar9;
		Global_43D7.f_165F = 1;
	}
	Global_43D7.f_16EF = fVar49;
	Global_43D7.f_16F1 = MISC::GET_GAME_TIMER();
	HUD::_CLEAR_NOTIFICATIONS_POS(Global_43D7.f_16EF);
	if (!Global_43D7.f_1F78)
	{
		func_38(0);
	}
	Global_43D7.f_1F78 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_194(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

float func_343(int iParam0)//Position - 0x1DC0F
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 50:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_344(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x1DC7E
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_345(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x1DC9D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_346()//Position - 0x1DCBB
{
	return DLC::IS_DLC_PRESENT(2532323046);
}

void func_347(bool bParam0)//Position - 0x1DCCC
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_43D7.f_1F94[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_43D7.f_1F94[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_348(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1DD12
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_349(Global_43D7.f_1776[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_349(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1DEC0
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_350(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x1E14A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_337(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_361(bParam4, bParam8))
	{
		return;
	}
	if (func_353())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_351(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_43D7.f_129F != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_43D7.f_129F)
			{
				if (Global_43D7.f_13A0[iVar1] != 358)
				{
					StringCopy(&(Global_43D7.f_12A1[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_43D7.f_13A0[iVar1], true), 64);
				}
				else if (Global_43D7.f_13AD[iVar1] != 32)
				{
					StringCopy(&(Global_43D7.f_12A1[iVar1 /*16*/]), PAD::_0x80C2FD58D720C801(2, Global_43D7.f_13AD[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_43D7.f_12A0 = 0;
		}
		if (!Global_43D7.f_12A0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "CLEAR_ALL");
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT((1f - (Global_43D7.f_13D7 / 100f)));
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SET_SEETHROUGH(true);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
			iVar1 = 0;
			while (iVar1 < Global_43D7.f_129F)
			{
				if (MISC::GET_HASH_KEY(&(Global_43D7.f_1362[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar1);
					func_13(&(Global_43D7.f_12A1[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_43D7.f_1362[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_13(&(Global_43D7.f_12A1[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_43D7.f_1393[iVar1] == 4294967295)
					{
						func_12(&(Global_43D7.f_1362[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_43D7.f_1393[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_43D7.f_1362[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_43D7.f_13A0[iVar1] != 358 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_43D7.f_13BA, iVar1))
						{
							GRAPHICS::SET_SEETHROUGH(true);
							GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_43D7.f_13A0[iVar1]);
						}
						else
						{
							GRAPHICS::SET_SEETHROUGH(false);
							GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(358);
						}
					}
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_411BEA.f_10)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_43D7.f_129F);
				func_13(&Global_411BEA);
				if (Global_411BEA.f_14 == 4294967295)
				{
					func_12(&(Global_411BEA.f_10));
				}
				else
				{
					iVar4 = Global_43D7.f_1393[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_411BEA.f_10));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(80);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_43D7.f_13D8)
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
			}
			else
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
			}
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			Global_43D7.f_12A0 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_43D7.f_129F)
		{
			if (Global_43D7.f_1393[iVar1] != 4294967295)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_43D7.f_1362[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
			}
			iVar1++;
		}
		if (Global_411BEA.f_14 != 4294967295)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_411BEA.f_10));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_43D7.f_1F9B)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_43D7.f_1F9B = 1;
			}
		}
		else if (Global_43D7.f_1F9B)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_43D7.f_1F9B = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_43D7.f_13BD)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_43D7.f_161A[iVar0 /*10*/], Global_43D7.f_13BB, Global_43D7.f_13BC, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_43D7.f_161A[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

bool func_351(int iParam0, int iParam1)//Position - 0x1E652
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_352(4294967295, 0) == 8;
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

int func_352(int iParam0, bool bParam1)//Position - 0x1E69D
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_61();
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

int func_353()//Position - 0x1E6DE
{
	vector3 vVar0;
	
	if (Global_38B1.f_1 > 3)
	{
		return 1;
	}
	if (func_354())
	{
		vVar0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&vVar0);
		if (Global_387A == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
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

int func_354()//Position - 0x1E74C
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_355(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1E766
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 50:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 51:
			*iParam5 = 100;
			break;
		
		case 52:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_356(float fParam0)//Position - 0x1E855
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_43D4 + Global_43D6) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_357(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x1E8B4
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_358(char* sParam0, int iParam1, int iParam2)//Position - 0x1E8D7
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_359();
	HUD::_BEGIN_TEXT_COMMAND_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_359()//Position - 0x1E919
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_43D7.f_1F82)
	{
		iVar0 = Global_43D7.f_1F7E;
		iVar1 = Global_43D7.f_1F7F;
		iVar2 = Global_43D7.f_1F80;
		iVar3 = Global_43D7.f_1F81;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_43D4 + 0.0046875f), ((Global_43D4 + Global_43D6) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_360(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1E9A3
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

int func_361(bool bParam0, bool bParam1)//Position - 0x1E9D2
{
	if (Global_252F9E.f_761.f_2B0 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_363(8, 4294967295) && func_362() != 64)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::_0x2EAC52B4019E2782()) || Global_11729) || Global_43D7.f_1F9A) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_16C64.f_571)
	{
		return 0;
	}
	return 1;
}

int func_362()//Position - 0x1EA6F
{
	return Global_140818;
}

bool func_363(int iParam0, int iParam1)//Position - 0x1EA7B
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

int func_364(int iParam0, bool bParam1)//Position - 0x1EAB6
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 6;
			
			case 4:
				return 9;
			
			case 5:
				return 11;
			
			case 6:
				return 13;
			
			case 7:
				return 15;
			}
		
		default:
	}
	return 0;
}

int func_365(int iParam0, int iParam1, int iParam2)//Position - 0x1EB3D
{
	if (!PAD::_IS_INPUT_DISABLED(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_390(0) == 1 && Global_411C36 == iParam1)
	{
		if (!func_415(iParam0))
		{
			func_366(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_429(iParam0);
			return 1;
		}
	}
	else if (func_415(iParam0))
	{
		func_416(iParam0);
	}
	return 0;
}

void func_366(int iParam0)//Position - 0x1EBB5
{
	if (!func_415(iParam0))
	{
		func_429(iParam0);
	}
}

int func_367(int iParam0)//Position - 0x1EBCD
{
	float fVar0;
	
	fVar0 = 0f;
	if (!PAD::_IS_INPUT_DISABLED(2))
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(2, 218);
	}
	if ((fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2, 190)) || unk_0xE11F00B4AC919F45(2, 190))
	{
		if (!func_415(iParam0))
		{
			func_366(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_429(iParam0);
			return 1;
		}
	}
	else if (func_415(iParam0))
	{
		func_416(iParam0);
	}
	return 0;
}

void func_368(var uParam0)//Position - 0x1EC52
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	func_340(0, 0);
	HUD::GET_HUD_COLOUR(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_385(uVar0, uVar1, uVar2, uVar3, 1);
	func_384(1, 2, 0, 0, 0);
	func_383(1, 2, 1, 1, 1);
	func_382(0, 1, 0, 0, 0);
	func_381("DARTS_TITLE");
	func_379(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_375(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_372(0, func_364(uParam0->f_296 + 1, 1), 0);
	func_375(1, "DARTS_SETS", 0, 1, 0, 0);
	func_372(1, func_364(uParam0->f_298 + 1, 0), 0);
	func_371(2, 141, 141, 1);
	func_375(2, "DARTS_START", 0, 1, 0, 0);
	func_370(0);
	func_393(uParam0->f_294, 1, 1);
	if (uParam0->f_294 != 2)
	{
		func_392(func_109(uParam0->f_294 == 0, "DARTS_LEGD", "DARTS_SETD"), 0, 0);
	}
	func_369(201, "ITEM_SELECT", 4294967295, 0);
	func_369(202, "IB_QUIT", 4294967295, 0);
}

void func_369(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x1ED49
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, true);
	if (Global_43D7.f_129F >= 12)
	{
		StringCopy(&Global_411BEA, sVar0, 64);
		StringCopy(&(Global_411BEA.f_10), sParam1, 16);
		Global_411BEA.f_14 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_43D7.f_13BA), Global_43D7.f_129F);
	}
	StringCopy(&(Global_43D7.f_12A1[Global_43D7.f_129F /*16*/]), sVar0, 64);
	StringCopy(&(Global_43D7.f_1362[Global_43D7.f_129F /*4*/]), sParam1, 16);
	Global_43D7.f_1393[Global_43D7.f_129F] = iParam2;
	Global_43D7.f_13A0[Global_43D7.f_129F] = iParam0;
	Global_43D7.f_13AD[Global_43D7.f_129F] = 32;
	Global_43D7.f_129F++;
}

void func_370(int iParam0)//Position - 0x1EDFE
{
	Global_43D7.f_1665 = iParam0;
}

void func_371(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1EE0E
{
	Global_43D7.f_1F97 = iParam3;
	Global_43D7.f_1F94[0] = iParam1;
	Global_43D7.f_1F94[1] = iParam2;
	Global_43D7.f_1F98 = iParam0;
}

void func_372(int iParam0, int iParam1, bool bParam2)//Position - 0x1EE3C
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_43D7.f_1460 > iParam0)
	{
		return;
	}
	if (Global_43D7.f_1460 >= 128)
	{
		return;
	}
	if (Global_43D7.f_1464 >= 256)
	{
		return;
	}
	if (Global_43D7.f_166A < Global_43D7.f_1668)
	{
		return;
	}
	if (Global_43D7.f_1460 != iParam0)
	{
		Global_43D7.f_1460 = iParam0;
		Global_43D7.f_1461 = 0;
	}
	iVar0 = Global_43D7.f_13BE[Global_43D7.f_1461];
	if (iVar0 != 2)
	{
		while (Global_43D7.f_1461 < 4 && iVar0 != 2)
		{
			Global_43D7.f_1461++;
			iVar0 = Global_43D7.f_13BE[Global_43D7.f_1461];
		}
		if (iVar0 != 2)
		{
			return;
		}
	}
	Global_43D7.f_F4E[Global_43D7.f_1464] = iParam1;
	Global_43D7.f_1464++;
	fVar1 = func_374("NUMBER", iParam1);
	if (Global_43D7.f_13D1[Global_43D7.f_1461])
	{
		func_18(26, 1, 0, &fVar2, &uVar3, 0);
		fVar1 = (fVar1 + (fVar2 * 2f));
	}
	if (fVar1 > Global_43D7.f_13CA[Global_43D7.f_1461])
	{
		Global_43D7.f_13CA[Global_43D7.f_1461] = fVar1;
	}
	if (bParam2)
	{
		fVar4 = func_373("NUMBER", iParam1);
		if (fVar4 > Global_43D7.f_166C[iParam0])
		{
			Global_43D7.f_166C[iParam0] = fVar4;
		}
	}
	MISC::SET_BIT(&(Global_43D7.f_13DF[iParam0]), Global_43D7.f_1461);
	Global_43D7.f_1461++;
	Global_43D7.f_166B = 2;
}

float func_373(char* sParam0, int iParam1)//Position - 0x1EFBB
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	if (iParam1 == 0)
	{
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_374(char* sParam0, int iParam1)//Position - 0x1EFDD
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0f;
	}
	func_348(1, 1, 0, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_375(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x1F00F
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_43D7.f_1460 > iParam0)
	{
		return;
	}
	if (Global_43D7.f_1460 >= 128)
	{
		return;
	}
	if (Global_43D7.f_1462 >= 256)
	{
		return;
	}
	if (Global_43D7.f_166A < Global_43D7.f_1668)
	{
		return;
	}
	if (Global_43D7.f_1460 != iParam0)
	{
		Global_43D7.f_1460 = iParam0;
		Global_43D7.f_1461 = 0;
	}
	iVar0 = Global_43D7.f_13BE[Global_43D7.f_1461];
	if (iVar0 != 1)
	{
		while (Global_43D7.f_1461 < 4 && iVar0 != 1)
		{
			Global_43D7.f_1461++;
			iVar0 = Global_43D7.f_13BE[Global_43D7.f_1461];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_43D7.f_49[Global_43D7.f_1462 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_43D7.f_64A[Global_43D7.f_1462] = bParam3;
	Global_43D7.f_74B[Global_43D7.f_1462] = iParam4;
	Global_43D7.f_1462++;
	if (!bParam3)
	{
		func_378(Global_43D7.f_1460, 1);
	}
	else
	{
		func_378(Global_43D7.f_1460, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_377(&(Global_43D7.f_49[Global_43D7.f_1462 /*6*/]));
		if (Global_43D7.f_13D1[Global_43D7.f_1461])
		{
			func_18(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_43D7.f_13CA[Global_43D7.f_1461])
		{
			Global_43D7.f_13CA[Global_43D7.f_1461] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_376(&(Global_43D7.f_49[Global_43D7.f_1462 /*6*/]));
			if (fVar4 > Global_43D7.f_166C[iParam0])
			{
				Global_43D7.f_166C[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_43D7.f_13DF[iParam0]), Global_43D7.f_1461);
	Global_43D7.f_1461++;
	Global_43D7.f_166B = 1;
	Global_43D7.f_1669 = (Global_43D7.f_1462 - 1);
	Global_43D7.f_166A = 0;
	Global_43D7.f_1668 = iParam2;
}

float func_376(char* sParam0)//Position - 0x1F21B
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_377(char* sParam0)//Position - 0x1F237
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_348(0, 1, 0, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_378(int iParam0, bool bParam1)//Position - 0x1F274
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_43D7.f_1779[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_43D7.f_1779[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_379(int iParam0, char* sParam1, char* sParam2)//Position - 0x1F2C0
{
	Global_43D7 = iParam0;
	func_380(29, sParam1, sParam2);
}

void func_380(int iParam0, char* sParam1, char* sParam2)//Position - 0x1F2D7
{
	StringCopy(&(Global_43D7.f_177E[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_43D7.f_1ACF[iParam0 /*16*/]), sParam2, 64);
}

void func_381(char* sParam0)//Position - 0x1F2FB
{
	int iVar0;
	
	StringCopy(&(Global_43D7.f_1), sParam0, 16);
	Global_43D7.f_44 = 0;
	Global_43D7.f_45 = 0;
	Global_43D7.f_46 = 0;
	Global_43D7.f_47 = 0;
	Global_43D7.f_48 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43D7.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_382(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1F346
{
	Global_43D7.f_13D1[0] = iParam0;
	Global_43D7.f_13D1[1] = iParam1;
	Global_43D7.f_13D1[2] = iParam2;
	Global_43D7.f_13D1[3] = iParam3;
	Global_43D7.f_13D1[4] = iParam4;
}

void func_383(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1F385
{
	Global_43D7.f_13D9[0] = iParam0;
	Global_43D7.f_13D9[1] = iParam1;
	Global_43D7.f_13D9[2] = iParam2;
	Global_43D7.f_13D9[3] = iParam3;
	Global_43D7.f_13D9[4] = iParam4;
}

void func_384(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1F3C4
{
	Global_43D7.f_13BE[0] = iParam0;
	Global_43D7.f_13BE[1] = iParam1;
	Global_43D7.f_13BE[2] = iParam2;
	Global_43D7.f_13BE[3] = iParam3;
	Global_43D7.f_13BE[4] = iParam4;
	Global_43D7.f_1468 = 0;
	if (iParam0 != 0)
	{
		Global_43D7.f_1468++;
	}
	if (iParam1 != 0)
	{
		Global_43D7.f_1468++;
	}
	if (iParam2 != 0)
	{
		Global_43D7.f_1468++;
	}
	if (iParam3 != 0)
	{
		Global_43D7.f_1468++;
	}
	if (iParam4 != 0)
	{
		Global_43D7.f_1468++;
	}
}

void func_385(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x1F46E
{
	Global_43D7.f_1F7D = iParam4;
	Global_43D7.f_1F79 = uParam0;
	Global_43D7.f_1F7A = uParam1;
	Global_43D7.f_1F7B = uParam2;
	Global_43D7.f_1F7C = uParam3;
}

int func_386(int iParam0, int iParam1, int iParam2)//Position - 0x1F49E
{
	if (!PAD::_IS_INPUT_DISABLED(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_390(0) == 4294967295 && Global_411C36 == iParam1)
	{
		if (!func_415(iParam0))
		{
			func_366(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_429(iParam0);
			return 1;
		}
	}
	else if (func_415(iParam0))
	{
		func_416(iParam0);
	}
	return 0;
}

int func_387(int iParam0)//Position - 0x1F516
{
	float fVar0;
	
	fVar0 = 0f;
	if (!PAD::_IS_INPUT_DISABLED(2))
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(2, 218);
	}
	if (fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2, 189))
	{
		if (!func_415(iParam0))
		{
			func_366(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_429(iParam0);
			return 1;
		}
	}
	else if (func_415(iParam0))
	{
		func_416(iParam0);
	}
	return 0;
}

int func_388(int iParam0)//Position - 0x1F58E
{
	float fVar0;
	
	fVar0 = 0f;
	if (!PAD::_IS_INPUT_DISABLED(2))
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	}
	if (fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2, 187))
	{
		if (!func_415(iParam0))
		{
			func_366(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_429(iParam0);
			return 1;
		}
	}
	else if (func_415(iParam0))
	{
		func_416(iParam0);
	}
	return 0;
}

int func_389(int iParam0)//Position - 0x1F606
{
	float fVar0;
	
	fVar0 = 0f;
	if (!PAD::_IS_INPUT_DISABLED(2))
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	}
	if (fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2, 188))
	{
		if (!func_415(iParam0))
		{
			func_366(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_429(iParam0);
			return 1;
		}
	}
	else if (func_415(iParam0))
	{
		func_416(iParam0);
	}
	return 0;
}

int func_390(float fParam0)//Position - 0x1F67E
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0.02f;
	fVar0 = 0.05f;
	fVar2 = (fVar0 + Global_43D6);
	fVar1 = (Global_43D7.f_1660 - (IntToFloat(Global_43D7.f_1662) * 0.034722f));
	fVar5 = (fVar0 + fParam0);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	fVar4 = (fVar2 - fVar6);
	if (fParam0 > 0f)
	{
		if (Global_411C30 >= fVar0 && Global_411C30 < fVar5)
		{
			return 4294966297;
		}
	}
	if (Global_411C30 >= fVar0 && Global_411C30 < fVar4)
	{
		return 4294967295;
	}
	if (Global_411C30 >= fVar4 && Global_411C30 <= fVar2)
	{
		return 1;
	}
	return 0;
}

int func_391()//Position - 0x1F74B
{
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		return unk_0xE11F00B4AC919F45(2, 237);
	}
	return 0;
}

void func_392(char* sParam0, int iParam1, int iParam2)//Position - 0x1F766
{
	int iVar0;
	
	StringCopy(&(Global_43D7.f_1252), sParam0, 16);
	Global_43D7.f_1298 = 0;
	Global_43D7.f_1299 = 0;
	Global_43D7.f_129A = 0;
	Global_43D7.f_129B = 0;
	Global_43D7.f_129C = iParam1;
	Global_43D7.f_129D = MISC::GET_GAME_TIMER();
	Global_43D7.f_129E = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43D7.f_1256[iVar0] = 0;
		iVar0++;
	}
}

void func_393(int iParam0, bool bParam1, int iParam2)//Position - 0x1F7CB
{
	int iVar0;
	int iVar1;
	
	Global_43D7.f_1666 = iParam0;
	Global_43D7.f_16ED = iParam2;
	if (Global_43D7.f_1666 < Global_43D7.f_1665)
	{
		Global_43D7.f_1665 = Global_43D7.f_1666;
	}
	else if ((Global_43D7.f_165F && Global_43D7.f_1666 > Global_43D7.f_1667) || (!Global_43D7.f_165F && Global_43D7.f_1666 >= (Global_43D7.f_1665 + Global_43D7.f_1467)))
	{
		iVar0 = Global_43D7.f_1665;
		while (iVar0 <= Global_43D7.f_1666)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_43D7.f_13DF[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_43D7.f_1467 && Global_43D7.f_1665 < 128)
		{
			Global_43D7.f_1665++;
			iVar1 = 0;
			iVar0 = Global_43D7.f_1665;
			while (iVar0 <= Global_43D7.f_1666)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_43D7.f_13DF[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_43D7.f_165E = 0;
	Global_43D7.f_165F = 0;
	if (bParam1)
	{
		StringCopy(&(Global_43D7.f_1252), "", 16);
		StringCopy(&(Global_411BEA.f_15), "", 16);
	}
}

int func_394()//Position - 0x1F91D
{
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (Global_411C36 > 4294967295)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_395(int iParam0, int iParam1, bool bParam2)//Position - 0x1F944
{
	if (!PAD::_IS_INPUT_DISABLED(2))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (bParam2)
	{
		HUD::_SHOW_CURSOR_THIS_FRAME();
	}
	if (Global_411C36 == 4294967290)
	{
		HUD::_SET_CURSOR_SPRITE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_411C36 = 4294967295;
			return 0;
		}
	}
	if (((Global_411C36 > 4294967295 || Global_411C36 == 4294967293) || Global_411C36 == 4294967294) || HUD::_0x3D9ACB1EB139E702())
	{
		HUD::_SET_CURSOR_SPRITE(1);
		return 0;
	}
	if (Global_411C36 == 4294967295 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 237))
		{
			HUD::_SET_CURSOR_SPRITE(4);
			Global_411C36 = 4294967290;
			return 1;
		}
		else
		{
			HUD::_SET_CURSOR_SPRITE(3);
			return 0;
		}
	}
	HUD::_SET_CURSOR_SPRITE(1);
	return 0;
}

void func_396(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x1FA24
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = 4294967295;
	if (!PAD::_IS_INPUT_DISABLED(2))
	{
		Global_411C36 = 4294967295;
		return;
	}
	unk_0xA561536D61421F90(1);
	fVar0 = Global_43D4;
	fVar2 = (fVar0 + Global_43D6);
	fVar3 = Global_43D7.f_1660;
	fVar1 = (Global_43D7.f_1660 - (IntToFloat(Global_43D7.f_1662) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_43D7.f_1662 < 1)
	{
		fVar1 = (Global_43D7.f_1660 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_398();
	if (Global_411C36 == 4294967290)
	{
		return;
	}
	Global_411C36 = 4294967295;
	fVar7 = Global_411C30;
	fVar8 = Global_411C31;
	if (Global_43D7.f_1663 > Global_43D7.f_1662)
	{
		if (((Global_411C30 >= fVar0 && Global_411C30 <= fVar2) && Global_411C31 >= fVar3) && Global_411C31 < (fVar3 + fVar6))
		{
			Global_411C36 = 4294967294;
			if (bParam3)
			{
				func_397(0);
			}
			return;
		}
		if (((Global_411C30 >= fVar0 && Global_411C30 <= fVar2) && Global_411C31 >= (fVar3 + fVar6)) && Global_411C31 < (fVar3 + 0.034722f))
		{
			Global_411C36 = 4294967293;
			if (bParam3)
			{
				func_397(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_43D7.f_1663 == 4294967295)
		{
			Global_411C36 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_43D7.f_1662);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_360(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_43D6, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_411C36 = Global_43D7.f_1E20[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_411C36 = 4294967292;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_411C36 = 4294967291;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_411C36 = 4294967292;
		return;
	}
	Global_411C36 = 4294967295;
}

void func_397(bool bParam0)//Position - 0x1FCD0
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_43D4;
	fVar1 = Global_43D7.f_1660;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_411C36 == 4294967294)
	{
		func_360(fVar0, fVar1, Global_43D6, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_411C36 == 4294967293)
	{
		func_360(fVar0, (fVar1 + fVar2), Global_43D6, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_398()//Position - 0x1FD59
{
	Global_411C32 = Global_411C30;
	Global_411C33 = Global_411C31;
	Global_411C30 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_411C31 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_411C34 = (Global_411C30 - Global_411C32);
	Global_411C35 = (Global_411C31 - Global_411C33);
}

float func_399(float fParam0)//Position - 0x1FDA1
{
	if (fParam0 < 1.3f)
	{
		return 35f;
	}
	else if (fParam0 < 1.35f)
	{
		return 33f;
	}
	return 30f;
}

void func_400(var uParam0)//Position - 0x1FDD7
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	uParam0->f_294 = 0;
	uParam0->f_295 = 3;
	uParam0->f_296 = 0;
	uParam0->f_297 = 3;
	uParam0->f_298 = 0;
	uParam0->f_299 = 7;
	func_340(0, 0);
	HUD::GET_HUD_COLOUR(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_385(uVar0, uVar1, uVar2, uVar3, 1);
	func_384(1, 2, 0, 0, 0);
	func_383(1, 2, 1, 1, 1);
	func_382(0, 1, 0, 0, 0);
	func_381("DARTS_TITLE");
	func_379(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_375(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_372(0, 1, 0);
	func_375(1, "DARTS_SETS", 0, 1, 0, 0);
	func_372(1, 1, 0);
	func_375(2, "DARTS_START", 0, 1, 0, 0);
	func_371(2, 141, 141, 1);
	func_370(0);
	func_393(0, 1, 1);
	func_392("DARTS_LEGD", 0, 0);
	func_401();
	func_369(201, "ITEM_SELECT", 4294967295, 0);
	func_369(202, "IB_QUIT", 4294967295, 0);
}

void func_401()//Position - 0x1FEC4
{
	if (MISC::IS_PC_VERSION())
	{
		PAD::_SET_CURSOR_LOCATION(0.325f, 0.3f);
	}
}

int func_402(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)//Position - 0x1FEE2
{
	int iVar0;
	int iVar1;
	
	if ((func_425() && MISC::GET_GAME_TIMER() >= iLocal_196 + 1000) && *iParam0 != 8)
	{
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT() && *iParam0 != 8)
	{
		*iParam0 = 8;
	}
	switch (*iParam0)
	{
		case 2:
			switch (iLocal_31)
			{
				case 0:
					if (*uParam3 == 2)
					{
						iLocal_196 = MISC::GET_GAME_TIMER();
						func_410(uParam1->f_1, uParam1->f_4, func_412(2), func_411(0), 0, 1);
						*uParam2 = 20;
						uParam2->f_1 = 2;
						func_281(uParam4[0 /*26*/], uParam1, uParam3, uParam2, 1);
					}
					if (*uParam3 == 3)
					{
						if (func_268(uParam4[0 /*26*/], uParam1, 0, 0))
						{
							AUDIO::PLAY_SOUND_FROM_COORD(4294967295, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
							iLocal_31++;
							func_429(iParam5);
							*uParam3 = 2;
						}
					}
					break;
				
				case 1:
					if (func_418(iParam5) > 1f && !func_298("DARTS_DOUBLE_T"))
					{
						func_413("DARTS_DOUBLE_T", 4294967295);
					}
					if (func_418(iParam5) > 5f)
					{
						func_429(iParam5);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
						func_404(uParam1->f_1, uParam1->f_4, func_412(3), func_411(0), 1000);
						iLocal_31 = 0;
						*iParam0 = 3;
					}
					break;
			}
			break;
		
		case 3:
			switch (iLocal_31)
			{
				case 0:
					if (!CAM::IS_CAM_INTERPOLATING(iLocal_83))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 3;
							func_281(uParam4[1 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_268(uParam4[1 /*26*/], uParam1, 0, 0))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(4294967295, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_429(iParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_418(iParam5) > 1f && !func_298("DARTS_TRIPLE_T"))
					{
						func_413("DARTS_TRIPLE_T", 4294967295);
					}
					if (func_418(iParam5) > 5f)
					{
						func_429(iParam5);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
						func_410(uParam1->f_1, uParam1->f_4, func_412(4), func_411(0), 1000, 0);
						iLocal_31 = 0;
						*iParam0 = 4;
					}
					break;
			}
			break;
		
		case 4:
			switch (iLocal_31)
			{
				case 0:
					if (!CAM::IS_CAM_INTERPOLATING(iLocal_82))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 50;
							uParam2->f_1 = 1;
							func_281(uParam4[2 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_268(uParam4[2 /*26*/], uParam1, 0, 0))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(4294967295, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_429(iParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_418(iParam5) > 1f && !func_298("DARTS_BULL_T"))
					{
						func_413("DARTS_BULL_T", 4294967295);
					}
					if (func_418(iParam5) > 5f)
					{
						func_429(iParam5);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
						unk_0x1190AB7024CBD8CB(4294967295, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
						func_404(uParam1->f_1, uParam1->f_4, func_412(5), func_411(1), 1500);
						iLocal_31 = 0;
						*iParam0 = 5;
					}
					break;
			}
			break;
		
		case 5:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_83) && !func_298("DARTS_DBL_WIN"))
			{
				func_413("DARTS_DBL_WIN", 4294967295);
			}
			if (func_418(iParam5) > 6f)
			{
				func_429(iParam5);
				*iParam0 = 6;
			}
			break;
		
		case 6:
			unk_0x1190AB7024CBD8CB(4294967295, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_75, iLocal_83, 1500, 1, 1);
			*iParam0 = 7;
			break;
		
		case 7:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_75))
			{
				iLocal_31 = 0;
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				HUD::CLEAR_PRINTS();
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_403(uParam4[iVar0 /*26*/]);
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 8:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				iLocal_31 = 0;
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				HUD::CLEAR_PRINTS();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_403(uParam4[iVar1 /*26*/]);
					iVar1++;
				}
				CAM::SET_CAM_ACTIVE(iLocal_75, true);
				CAM::DO_SCREEN_FADE_IN(500);
				return 1;
			}
			break;
	}
	return 0;
}

void func_403(int iParam0)//Position - 0x202FF
{
	vector3 vVar0;
	
	vVar0 = { -1668.044f, -1056.45f, 13.1063f };
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::SET_ENTITY_COORDS(*iParam0, vVar0, 1, 0, 0, 1);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		OBJECT::DELETE_OBJECT(iParam0);
	}
}

void func_404(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, int iParam4)//Position - 0x2033F
{
	CAM::STOP_CAM_POINTING(iLocal_83);
	CAM::SET_CAM_FOV(iLocal_83, 35f);
	CAM::SET_CAM_COORD(iLocal_83, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam1, vParam2));
	CAM::SET_CAM_ROT(iLocal_83, Vector(fParam1, 0f, 0f) - vParam3, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_83, iLocal_82, iParam4, 1, 1);
}

int func_405(var uParam0, bool bParam1, bool bParam2)//Position - 0x20388
{
	if (!func_415(&(uParam0->f_2)))
	{
		func_429(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	if (!bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == 4294967295)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_416(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_406(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, float fParam7)//Position - 0x2041A
{
	char* sVar0;
	
	sVar0 = func_407(iParam5);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "RESET_MOVIE");
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam4);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		func_12(sParam2);
	}
	if (bParam6)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(100);
		GRAPHICS::SET_SEETHROUGH(true);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	if (bParam6)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam7);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
	func_429(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
}

char* func_407(int iParam0)//Position - 0x204A9
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_408()//Position - 0x20524
{
	CAM::SET_CAM_ACTIVE(iLocal_75, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
	if (CAM::IS_CAM_ACTIVE(iLocal_82))
	{
		CAM::SET_CAM_ACTIVE(iLocal_82, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_77))
	{
		CAM::SET_CAM_ACTIVE(iLocal_77, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_78))
	{
		CAM::SET_CAM_ACTIVE(iLocal_78, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_79))
	{
		CAM::SET_CAM_ACTIVE(iLocal_79, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_80))
	{
		CAM::SET_CAM_ACTIVE(iLocal_80, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_81))
	{
		CAM::SET_CAM_ACTIVE(iLocal_81, false);
	}
}

char* func_409(int iParam0)//Position - 0x2059F
{
	if (iLocal_207 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_BAR";
			
			case 1:
				return "DARTS_MENU_BAR";
			
			case 2:
				return "DARTS_START_MATCH_BAR";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_BAR";
			
			default:
		}
	}
	else if (iLocal_207 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_ROCK";
			
			case 1:
				return "DARTS_MENU_ROCK";
			
			case 2:
				return "DARTS_START_MATCH_ROCK";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_ROCK";
			}
		
		default:
	}
	return "";
}

void func_410(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, int iParam4, bool bParam5)//Position - 0x20632
{
	CAM::STOP_CAM_POINTING(iLocal_82);
	CAM::SET_CAM_FOV(iLocal_82, 35f);
	CAM::SET_CAM_COORD(iLocal_82, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam1, vParam2));
	CAM::SET_CAM_ROT(iLocal_82, Vector(fParam1, 0f, 0f) - vParam3, 2);
	if (bParam5)
	{
		CAM::SET_CAM_ACTIVE(iLocal_82, true);
	}
	else
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_82, iLocal_83, iParam4, 1, 1);
	}
}

Vector3 func_411(bool bParam0)//Position - 0x2068A
{
	if (bParam0)
	{
		return -4.7411f, 0f, -15.32f;
	}
	return 4.9918f, 0f, 4.3916f;
}

Vector3 func_412(int iParam0)//Position - 0x206B3
{
	switch (iParam0)
	{
		case 0:
			return -0.0588f, -1.6075f, 0.1336f;
		
		case 2:
			return -0.0944f, -1.2308f, 0.3468f;
		
		case 3:
			return -0.0948f, -1.243f, 0.2067f;
		
		case 4:
			return -0.0955f, -1.2524f, 0.1006f;
		
		case 5:
			return -0.0951f, -1.2526f, 0.0895f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_413(char* sParam0, int iParam1)//Position - 0x2073D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_414(int iParam0)//Position - 0x20754
{
	if (!ENTITY::IS_ENTITY_DEAD(func_491(), 0))
	{
		func_4(func_491(), "GENERIC_YES", 0, 6);
	}
	else
	{
		func_4(iParam0, "GENERIC_AGREE", 0, 6);
	}
	return 1;
}

bool func_415(int iParam0)//Position - 0x20787
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 1);
}

void func_416(int iParam0)//Position - 0x20797
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

void func_417(int iParam0, char* sParam1, int iParam2)//Position - 0x207AD
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_6(iParam2), 1);
}

float func_418(int iParam0)//Position - 0x207C4
{
	if (func_415(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_419(int iParam0)//Position - 0x20800
{
	if (!func_415(iParam0))
	{
		func_366(iParam0);
	}
	else
	{
		func_429(iParam0);
	}
}

void func_420()//Position - 0x20821
{
	Global_3960 = 0;
	func_421();
}

void func_421()//Position - 0x20831
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

void func_422(int iParam0)//Position - 0x20888
{
	if (func_40())
	{
		return;
	}
	if (Global_3959)
	{
		func_424(0, 0);
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
	if (!func_423())
	{
		Global_38B1.f_1 = 3;
	}
}

int func_423()//Position - 0x20902
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_424(bool bParam0, bool bParam1)//Position - 0x20929
{
	if (bParam0)
	{
		if (func_39(0))
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

int func_425()//Position - 0x2099D
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

int func_426(var uParam0)//Position - 0x209CF
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_427(iVar0))
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && ENTITY::IS_ENTITY_AT_ENTITY(iVar0, AUDIO::_0x0626A247D2405330(), vLocal_169, 0, 1, 0))
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

int func_427(int iParam0)//Position - 0x20A42
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

void func_428(var uParam0, int iParam1)//Position - 0x20A85
{
	iParam1++;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_PLAYER_HIGHLIGHT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_429(int iParam0)//Position - 0x20AA9
{
	func_430(iParam0, 0f);
}

void func_430(int iParam0, float fParam1)//Position - 0x20AB8
{
	iParam0->f_1 = (func_8(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_431(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x20AE6
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

void func_432(var uParam0, char* sParam1, char* sParam2)//Position - 0x20B81
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DARTS_PLAYER_NAMES");
	func_34(sParam1);
	func_34(sParam2);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_433(float fParam0, struct<4> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x20BA5
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(func_491()) && !PED::IS_PED_INJURED(func_491()))
	{
		PED::REMOVE_PED_FROM_GROUP(func_491());
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam5->f_5) && !PED::IS_PED_INJURED(uParam5->f_5))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam5->f_5, true, 1);
			iLocal_170[1] = uParam5->f_5;
			NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_170[1]);
		}
		else if (func_435(uParam4))
		{
			NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_170[1]);
		}
		else
		{
			iLocal_170[1] = PED::CREATE_PED(26, iLocal_204, Param1.f_3, fParam0, 1, true);
		}
		if (DECORATOR::DECOR_EXIST_ON(iLocal_170[1], "Darts_name"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iLocal_170[1], "Darts_name");
			if (954610991 == iVar0)
			{
				sLocal_252 = func_438("RAYMOND");
				iLocal_253 = 954610991;
			}
			else if (94453331 == iVar0)
			{
				sLocal_252 = func_438("JOHAN");
				iLocal_253 = 94453331;
			}
			else if (1891555423 == iVar0)
			{
				sLocal_252 = func_438("STAN");
				iLocal_253 = 1891555423;
			}
			else if (3227336947 == iVar0)
			{
				sLocal_252 = func_438("VINCE");
				iLocal_253 = 3227336947;
			}
			else if (885327384 == iVar0)
			{
				sLocal_252 = func_438("KRISTY");
				iLocal_253 = 885327384;
			}
			else if (2503966302 == iVar0)
			{
				sLocal_252 = func_438("MARLENE");
				iLocal_253 = 2503966302;
			}
			else if (1954368234 == iVar0)
			{
				sLocal_252 = func_438("LORIE");
				iLocal_253 = 1954368234;
			}
			else if (3431748392 == iVar0)
			{
				sLocal_252 = func_438("SHELLEY");
				iLocal_253 = 3431748392;
			}
		}
		DECORATOR::DECOR_SET_INT(iLocal_170[1], "Darts_name", iLocal_253);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iLocal_170[1]);
	func_434(iVar1);
	BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_170[1], iLocal_170[0], 0);
	BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_170[0], iLocal_170[1], 0);
}

void func_434(int iParam0)//Position - 0x20D9E
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iParam0)
	{
		case joaat("a_f_m_salton_01"):
			switch (iVar0)
			{
				case 0:
					sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_03";
					break;
				
				case 1:
					sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_02";
					break;
			}
			break;
		
		case joaat("a_f_o_salton_01"):
			sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_01"):
			sLocal_57 = "G_M_Y_LOST_01_BLACK_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_03"):
			sLocal_57 = "G_M_Y_LOST_02_LATINO_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_04"):
			sLocal_57 = "G_M_Y_LOST_01_BLACK_FULL_02";
			break;
		
		case joaat("a_m_y_stlat_01"):
			sLocal_57 = "G_M_Y_LOST_02_LATINO_FULL_02";
			break;
		
		case joaat("a_m_y_stwhi_02"):
			sLocal_57 = "G_M_Y_LOST_01_WHITE_FULL_01";
			break;
	}
}

int func_435(var uParam0)//Position - 0x20E3D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < PED::GET_PED_NEARBY_PEDS(AUDIO::_0x0626A247D2405330(), uParam0, 4294967295))
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if ((((((ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_f_m_salton_01") || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_f_o_salton_01")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_01")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_m_y_stlat_01")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_04")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_m_y_stwhi_02")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_03"))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam0)[iVar0], true, 1);
				iLocal_170[1] = (*uParam0)[iVar0];
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_436(int iParam0)//Position - 0x20F26
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 3;
		while (iVar0 <= (157 - 1))
		{
			if (func_437(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_437(int iParam0)//Position - 0x20F66
{
	if (!func_88(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

char* func_438(char* sParam0)//Position - 0x20F91
{
	if (UNK::_GET_CURRENT_LANGUAGE_ID() == 7)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, "MICHAEL"))
		{
			return "??????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "FRANKLIN"))
		{
			return "????????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "TREVOR"))
		{
			return "????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "LAMAR"))
		{
			return "??????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "JIMMY"))
		{
			return "????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "KRISTY"))
		{
			return "????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "MARLENE"))
		{
			return "????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "LORIE"))
		{
			return "????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SHELLEY"))
		{
			return "??????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "RAYMOND"))
		{
			return "??????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "JOHAN"))
		{
			return "??????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "STAN"))
		{
			return "????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "VINCE"))
		{
			return "????????";
		}
	}
	return sParam0;
}

void func_439(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x210CB
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		uParam0->f_4 = ENTITY::GET_ENTITY_HEADING(*uParam0);
	}
	if (!bParam3)
	{
		func_441(uParam1, uParam0);
	}
	vLocal_41 = { 0f, (-2.3685f + fLocal_34), 0.1f };
	vLocal_41 = { vLocal_41 + vLocal_35 };
	vLocal_40 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_1, uParam0->f_4, vLocal_41) };
	func_440(uParam2, uParam0);
}

void func_440(var uParam0, var uParam1)//Position - 0x21133
{
	uParam0->f_3 = { 0f, -0.15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + vLocal_35 };
	*uParam0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
}

void func_441(var uParam0, var uParam1)//Position - 0x2116E
{
	*uParam0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, -0.4f, (-2.4f + fLocal_34), -1.7272f) };
	uParam0->f_3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, 0.5f, (-2.4f + fLocal_34), -1.7272f) };
}

int func_442(var uParam0, var uParam1)//Position - 0x211C0
{
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\DARTS", false, 4294967295))
	{
		return 0;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FAMILY1_2", false, 4294967295))
	{
		return 0;
	}
	if ((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_28) || !STREAMING::HAS_MODEL_LOADED(iLocal_29)) || !STREAMING::HAS_MODEL_LOADED(iLocal_37)) || !STREAMING::HAS_MODEL_LOADED(iLocal_204)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_285)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_39)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_3E)) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(3)) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Darts")) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_254)) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_255)) || !func_443(0, 4294967295, 0))
	{
		return 0;
	}
	return 1;
}

bool func_443(char* sParam0, int iParam1, bool bParam2)//Position - 0x212A4
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_337(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_43D7.f_1601[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_43D7.f_1601[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_43D7.f_1601[iVar0 /*4*/]), 9);
		Global_43D7.f_15FA[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_43D7.f_1601[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xE2BBD32891C18569("CommonMenu", false);
	Global_43D7.f_15EC[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xE2BBD32891C18569("MPShopSale", false);
		Global_43D7.f_15F3[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_43D7.f_161A[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_444(&(Global_43D7.f_161A[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_444(var uParam0)//Position - 0x2139A
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = unk_0x9934FEFB3B8C6DB8(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_445(var uParam0, var uParam1)//Position - 0x2143C
{
	STREAMING::REQUEST_MODEL(iLocal_28);
	STREAMING::REQUEST_MODEL(iLocal_29);
	STREAMING::REQUEST_MODEL(iLocal_37);
	STREAMING::REQUEST_MODEL(iLocal_204);
	unk_0xE2BBD32891C18569("Darts", false);
	unk_0xE2BBD32891C18569("ShopUI_Title_Darts", false);
	STREAMING::REQUEST_ANIM_DICT(sLocal_254);
	STREAMING::REQUEST_ANIM_DICT(sLocal_255);
	*uParam0 = unk_0x9934FEFB3B8C6DB8("darts_scoreboard");
	uParam1->f_285 = func_189();
	uParam1->f_39 = func_447();
	uParam1->f_3E = func_446();
	HUD::REQUEST_ADDITIONAL_TEXT("DARTS", 3);
}

int func_446()//Position - 0x214AA
{
	return unk_0x9934FEFB3B8C6DB8("MIDSIZED_MESSAGE");
}

int func_447()//Position - 0x214BA
{
	return unk_0x9934FEFB3B8C6DB8("MP_BIG_MESSAGE_FREEMODE");
}

void func_448(var uParam0, int iParam1, vector3 vParam2, float fParam3)//Position - 0x214CA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			uParam0->f_1[iVar0 /*8*/][iVar1] = 1;
			iVar1++;
		}
		iVar0++;
	}
	if (iParam1 == 0)
	{
		uParam0->f_12 = { 989.399f, -99.674f, 75.925f };
		uParam0->f_15 = { 180f, 0f, 252.555f };
		uParam0->f_18 = { 1.82f, 1.328f, 1f };
	}
	else
	{
		uParam0->f_12 = { 1992.223f, 3049.814f, 48.333f };
		uParam0->f_15 = { 180f, 0f, 87.77f };
		uParam0->f_18 = { 1.82f, 1.328f, 1f };
	}
	if (!func_449(vParam2) && fParam3 != 0f)
	{
		uParam0->f_12 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam2, fParam3, -0.687645f, -0.350352f, 0.343273f) };
		uParam0->f_15 = { 180f, 0f, (fParam3 - -29.98685f) };
	}
	uParam0->f_1B = 0.885f;
	uParam0->f_1C = 0.244f;
	uParam0->f_1D = 0.17f;
	uParam0->f_1E = 0.415f;
}

int func_449(vector3 vParam0)//Position - 0x215E6
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_450(int iParam0)//Position - 0x21610
{
	int iVar0;
	
	iVar0 = iParam0 + 1;
	Local_38 = 0.5f;
	Local_38.f_1 = 0.5f;
	if (GRAPHICS::GET_IS_WIDESCREEN())
	{
		Local_38.f_2 = 0.05f;
		Local_38.f_3 = 0.095f;
	}
	else
	{
		Local_38.f_2 = 0.065f;
		Local_38.f_3 = 0.09f;
	}
	Local_38.f_4 = 255;
	Local_38.f_5 = 250;
	Local_38.f_6 = 255;
	Local_38.f_7 = 123;
	if (iVar0 == 1)
	{
		Local_38.f_4 = 255;
		Local_38.f_5 = 255;
		Local_38.f_6 = 255;
	}
	else if (iVar0 == 2)
	{
		Local_38.f_4 = 255;
		Local_38.f_5 = 255;
		Local_38.f_6 = 255;
	}
	Local_38.f_8 = 0f;
	Local_39 = 0f;
	Local_39.f_1 = 0f;
	Local_39.f_2 = 0.061f;
	Local_39.f_3 = 0.105f;
	Local_39.f_4 = 200;
	Local_39.f_5 = 45;
	Local_39.f_6 = 40;
	Local_39.f_7 = 255;
	Local_39.f_8 = 0f;
}

void func_451(var uParam0, int iParam1)//Position - 0x216E3
{
	if (iParam1 == 0)
	{
		uParam0->f_1 = iLocal_28;
	}
	else
	{
		uParam0->f_1 = iLocal_29;
	}
	uParam0->f_18 = 0;
	uParam0->f_17 = 0;
}

void func_452()//Position - 0x2170A
{
	int iVar0;
	
	STATS::LEADERBOARDS_CLEAR_CACHE_DATA();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1C0DF1.f_51[iVar0] = 0;
		iVar0++;
	}
}

void func_453(vector3 vParam0, float fParam1)//Position - 0x21733
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	vector3 vVar8;
	float fVar9;
	float fVar10;
	vector3 vVar11;
	float fVar12;
	float fVar13;
	vector3 vVar14;
	vector3 vVar15;
	vector3 vVar16;
	
	fLocal_89 = GRAPHICS::_GET_ASPECT_RATIO(0);
	fVar7 = 30f;
	fVar7 = func_399(fLocal_89);
	vVar8 = { -0.192784f, -1.73287f, 0.0262985f };
	fVar9 = 1.7939f;
	fVar10 = -1.3346f;
	if (GRAPHICS::GET_IS_WIDESCREEN())
	{
		vVar11 = { -0.0974819f, -1.65968f, 0.335098f };
		fVar12 = -1.3023f;
		fVar13 = -12.4139f;
	}
	else
	{
		vVar11 = { -0.112635f, -1.86963f, 0.45417f };
		fVar12 = -3.7542f;
		fVar13 = -14.4576f;
	}
	vVar14 = { 0.261599f, -0.750354f, -0.392929f };
	vVar16 = { 0.281314f, -0.573735f, -0.39603f };
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam1, vVar8) };
	vVar3 = { fVar10, 0f, (fParam1 - fVar9) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam1, vVar11) };
	vVar2 = { fVar13, 0f, (fParam1 - fVar12) };
	vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam1, vVar14) };
	vVar5 = { 0.8351f, -0.0048f, (fParam1 - 186.5073f) };
	vVar15 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam1, vVar16) };
	vVar6 = { 0.8351f, -0.0048f, (fParam1 - 186.5073f) };
	iLocal_75 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar0, vVar2, fVar7, 0, 2);
	iLocal_76 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar1, vVar3, fVar7, 0, 2);
	iLocal_77 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar4, vVar5, 65f, 0, 2);
	iLocal_78 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar15, vVar6, 65f, 0, 2);
	iLocal_79 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_80 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_82 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_83 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_81 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1996.235f, 3048.456f, 48.0237f, -3.4831f, 0.0223f, 60.6925f, 38.1f, 0, 2);
	CAM::SET_CAM_FOV(iLocal_77, 43.35f);
	CAM::SET_CAM_FOV(iLocal_78, 42.35f);
	CAM::SHAKE_CAM(iLocal_77, "HAND_SHAKE", 0.1f);
	CAM::SHAKE_CAM(iLocal_78, "HAND_SHAKE", 0.1f);
}

void func_454(var uParam0, var uParam1)//Position - 0x21996
{
	uParam0->f_1 = { *uParam1 };
	uParam0->f_4 = uParam1->f_3;
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_4))
	{
		*uParam0 = uParam1->f_4;
	}
	iLocal_33[0] = 20;
	iLocal_33[10] = 3;
	iLocal_33[1] = 1;
	iLocal_33[11] = 19;
	iLocal_33[2] = 18;
	iLocal_33[12] = 7;
	iLocal_33[3] = 4;
	iLocal_33[13] = 16;
	iLocal_33[4] = 13;
	iLocal_33[14] = 8;
	iLocal_33[5] = 6;
	iLocal_33[15] = 11;
	iLocal_33[6] = 10;
	iLocal_33[16] = 14;
	iLocal_33[7] = 15;
	iLocal_33[17] = 9;
	iLocal_33[8] = 2;
	iLocal_33[18] = 12;
	iLocal_33[9] = 17;
	iLocal_33[19] = 5;
	iLocal_33[20] = 20;
}

void func_455()//Position - 0x21A52
{
	Global_434C.f_6 = 1;
}

void func_456(int iParam0, bool bParam1)//Position - 0x21A60
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

var func_457(int iParam0, int iParam1)//Position - 0x21A82
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_458(iParam0, iParam1);
	STATS::STAT_GET_INT(iVar1, &uVar0, 4294967295);
	return uVar0;
}

var func_458(int iParam0, int iParam1)//Position - 0x21AA0
{
	var uVar0;
	var uVar1;
	
	func_459(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_459(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x21AB6
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_460(bool bParam0)//Position - 0x21D0D
{
	if (bParam0)
	{
		func_461();
		if (Global_38B1.f_1 == 10 || Global_38B1.f_1 == 9)
		{
			MISC::SET_BIT(&Global_950, 16);
		}
		Global_38B1.f_1 = 1;
		if (func_39(0))
		{
			func_422(0);
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

void func_461()//Position - 0x21D70
{
	if (Global_38B1.f_1 == 9 || Global_38B1.f_1 == 10)
	{
		Global_3E03 = 0;
		Global_3DFF = 1;
	}
}

void func_462(int iParam0, var uParam1, var uParam2)//Position - 0x21D99
{
	int iVar0;
	int iVar1;
	
	unk_0x0FD8C89650533D97(1);
	func_260(8);
	func_313();
	if (bLocal_178)
	{
		func_479(&uLocal_194);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_403(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_28);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_29);
	if (!PED::IS_PED_INJURED(iLocal_170[0]) && !PED::IS_PED_INJURED(iLocal_170[1]))
	{
		BRAIN::TASK_CLEAR_LOOK_AT(iLocal_170[0]);
		BRAIN::TASK_CLEAR_LOOK_AT(iLocal_170[1]);
	}
	func_478();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_37);
	func_477();
	func_476(uParam1->f_285);
	func_475(&(uParam1->f_39));
	if (!ENTITY::IS_ENTITY_DEAD(func_491(), 0))
	{
		PED::SET_PED_AS_GROUP_MEMBER(func_491(), func_474());
		func_473(iLocal_202, iLocal_203);
	}
	else
	{
		func_471(&(iLocal_170[1]));
	}
	func_460(0);
	func_470(uParam2);
	func_36(0);
	HUD::RESET_HUD_COMPONENT_VALUES(15);
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (iParam0->f_1CC && !iLocal_192)
		{
			func_469(190, 0);
		}
	}
	func_99();
	func_452();
	func_91(&(uParam1->f_48), 0);
	SYSTEM::WAIT(200);
	if (iLocal_185)
	{
		func_466(130, 0, 0);
		func_463();
	}
	func_456(23, 0);
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_463()//Position - 0x21EE7
{
	func_464();
}

int func_464()//Position - 0x21EF4
{
	if (func_465(0))
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

bool func_465(bool bParam0)//Position - 0x21F3F
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

void func_466(int iParam0, int iParam1, int iParam2)//Position - 0x21F6A
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
		func_467();
	}
}

void func_467()//Position - 0x22052
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
		func_82(13, SYSTEM::FLOOR(Global_19E56.f_27B6.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_11625)
		{
			if (func_468() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_19D4C = 0;
				}
				if (!Global_DB75)
				{
					func_464();
				}
			}
		}
	}
}

int func_468()//Position - 0x22513
{
	return Global_6373;
}

void func_469(int iParam0, bool bParam1)//Position - 0x2251E
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	if (!PLAYER::IS_PLAYER_ONLINE())
	{
		return;
	}
	StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_219(iParam0, &Var0, &Var1, 1, 4294967295, 0, 0))
	{
		STATS::_0x0BCA1D2C47B0D269(103, iLocal_106[1], 0f);
		STATS::_0x0BCA1D2C47B0D269(99, iLocal_106[2], 0f);
		STATS::_0x0BCA1D2C47B0D269(109, iLocal_106[3], 0f);
		STATS::_0x0BCA1D2C47B0D269(106, iLocal_106[5], 0f);
		STATS::_0x0BCA1D2C47B0D269(2, iLocal_106[10], 0f);
		STATS::_0x0BCA1D2C47B0D269(107, iLocal_106[8], 0f);
		STATS::_0x0BCA1D2C47B0D269(116, iLocal_106[6], 0f);
	}
}

void func_470(var uParam0)//Position - 0x225C9
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_232 && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SET_SEETHROUGH(false);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_234)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_234 = 0;
	}
	if (!Global_11731)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_11732)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_465(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_36(0);
}

void func_471(var uParam0)//Position - 0x22670
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !PED::IS_PED_INJURED(*uParam0))
	{
		BRAIN::CLEAR_SEQUENCE_TASK(&uLocal_205);
		BRAIN::OPEN_SEQUENCE_TASK(&uLocal_205);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_170[0]))
		{
			BRAIN::TASK_LOOK_AT_ENTITY(0, iLocal_170[0], 8000, 2049, 3);
		}
		BRAIN::TASK_STAND_STILL(0, 1000);
		if (bLocal_183)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E2F, 10))
			{
				BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_472(iLocal_207 == 2, vLocal_242, vLocal_244), 1f, 20000, 0.25f, 0, func_118(iLocal_207 == 2, fLocal_246, fLocal_248));
			}
			else
			{
				BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_472(iLocal_207 == 2, vLocal_241, vLocal_243), 1f, 20000, 0.25f, 0, func_118(iLocal_207 == 2, fLocal_245, fLocal_247));
			}
			BRAIN::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
		}
		else
		{
			BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_472(iLocal_207 == 2, vLocal_241, vLocal_243), 1f, 20000, 0.25f, 0, func_118(iLocal_207 == 2, 172.6813f, 142.6717f));
			BRAIN::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
		}
		CUTSCENE::_0x8D9DF6ECA8768583(uLocal_205);
		BRAIN::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_205);
		PED::SET_PED_KEEP_TASK(*uParam0, true);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_204);
}

Vector3 func_472(bool bParam0, vector3 vParam1, vector3 vParam2)//Position - 0x227AB
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam2;
}

void func_473(int iParam0, var uParam1)//Position - 0x227C6
{
	if (Global_15C41 == iParam0)
	{
		Global_15C42 = Global_15C41;
		Global_15C43 = uParam1;
		Global_15C41 = 23;
	}
}

var func_474()//Position - 0x227EE
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_475(int iParam0)//Position - 0x227FE
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		*iParam0 = 0;
	}
}

void func_476(var uParam0)//Position - 0x2281A
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uParam0);
}

void func_477()//Position - 0x22828
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	CAM::DESTROY_ALL_CAMS(0);
	PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
	HUD::DISPLAY_RADAR(true);
}

void func_478()//Position - 0x22849
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
	{
		OBJECT::DELETE_OBJECT(&iLocal_36);
	}
}

void func_479(var uParam0)//Position - 0x22860
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_427(iVar0))
		{
			ENTITY::SET_ENTITY_COLLISION(iVar0, true, 0);
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, 0);
			unk_0x346478B12F69D4E3(iVar0, false);
		}
	}
}

void func_480()//Position - 0x22897
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_19E56.f_2361 || func_465(0))
	{
		if (!func_488())
		{
			iVar0 = func_487();
			if (iVar0 != 4294967295)
			{
				if (!func_482(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_1486F[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_481();
		}
	}
}

void func_481()//Position - 0x22908
{
	Global_16C53 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_1170D))
		{
			switch (func_86())
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
			switch (func_86())
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

int func_482(int iParam0)//Position - 0x229F7
{
	int iVar0;
	int iVar1;
	
	func_481();
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_1486F[iParam0 /*5*/];
	iVar1 = Global_11732.f_6D[iVar0 /*4*/];
	func_486(iVar1, 1);
	PLAYER::_0xC9A763D8FE87436A(CAM::_0xDC9DA9E8789F5246());
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(CAM::_0xDC9DA9E8789F5246());
	func_483(&(Global_19E56.f_933.f_21B), iVar1);
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

void func_483(var uParam0, int iParam1)//Position - 0x22B0E
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
			if (!func_485(Global_19E56.f_4849[iVar0], &vVar2, &fVar3))
			{
				Global_19E56.f_4849[iVar0] = 318;
				func_484(&(uParam0->f_8E4[iVar0]));
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

void func_484(var uParam0)//Position - 0x22CD7
{
	*uParam0 = 4294967281;
}

int func_485(int iParam0, var uParam1, float fParam2)//Position - 0x22CE5
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
			return func_485(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_485(8, uParam1, fParam2);
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

void func_486(int iParam0, bool bParam1)//Position - 0x23654
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

int func_487()//Position - 0x23692
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

int func_488()//Position - 0x236C7
{
	if (((Global_16C30 == 13 || Global_16C30 == 10) || Global_16C30 == 11) || Global_16C30 == 12)
	{
		return 0;
	}
	return 1;
}

void func_489(int iParam0, bool bParam1)//Position - 0x23705
{
	if (PED::IS_PED_INJURED(func_491()))
	{
		return;
	}
	if (bParam1)
	{
		if (!PED::IS_PED_GROUP_MEMBER(func_491(), func_474()))
		{
			return;
		}
		if (!PED::IS_PED_INJURED(func_490()))
		{
			if (!PED::IS_PED_GROUP_MEMBER(func_490(), func_474()))
			{
				return;
			}
		}
	}
	if (Global_15C41 == 23)
	{
		Global_15C43 = 10;
		Global_15C41 = iParam0;
	}
}

var func_490()//Position - 0x2376A
{
	return Global_15C48;
}

int func_491()//Position - 0x23776
{
	return Global_15C47;
}

void func_492()//Position - 0x23782
{
	if (iLocal_167 == 1)
	{
		return;
	}
	func_313();
	PAD::_0x3D42B92563939375("Darts");
	iLocal_167 = 1;
}

int func_493(int iParam0)//Position - 0x237A5
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_89(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

