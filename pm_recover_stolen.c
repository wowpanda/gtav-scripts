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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	struct<28> Local_37 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786468, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 16;
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
	var uLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	char[] cLocal_240[8] = 0;
	var uLocal_241 = 0;
	int iLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = -1;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 1000;
	var uLocal_264 = 1000;
	var uLocal_265 = 0;
#endregion

void __EntryFunction__()
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
	iLocal_17 = -1;
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_67 = -1;
	iLocal_238 = -1;
	iLocal_239 = -1;
	StringCopy(&cLocal_240, "PMRAUD", 8);
	iLocal_252 = -1;
	iLocal_253 = -1;
	SET_MISSION_FLAG(1);
	if (HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_89(2);
		func_88();
	}
	func_82();
	while (true)
	{
		WAIT(0);
		if (func_81())
		{
			iLocal_239 = -1;
		}
		else if (iLocal_239 == -1)
		{
			iLocal_239 = GET_GAME_TIMER();
		}
		func_1();
	}
}

void func_1()
{
	char cVar0[32];
	vector3 vVar8;
	int iVar11;
	
	switch (iLocal_36)
	{
		case 0:
			REQUEST_MODEL(Local_37.f_10);
			if (Local_37.f_11 != 0)
			{
				REQUEST_MODEL(Local_37.f_11);
			}
			REQUEST_ADDITIONAL_TEXT("PRECOV", 0);
			if (HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				if (DOES_ENTITY_EXIST(Global_105275.f_222[0]) && IS_VEHICLE_DRIVEABLE(Global_105275.f_222[0], 0))
				{
					uLocal_244 = Global_105275.f_222[0];
					Global_105275.f_222[0] = 0;
					SET_ENTITY_AS_MISSION_ENTITY(uLocal_244, 1, 1);
					Local_37.f_7 = GET_ENTITY_MODEL(uLocal_244);
					SET_MODEL_AS_NO_LONGER_NEEDED(Local_37.f_7);
					SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_37.f_7, 1);
				}
				if (DOES_ENTITY_EXIST(Global_105275.f_225[0]))
				{
					uLocal_245 = Global_105275.f_225[0];
					Global_105275.f_225[0] = 0;
					SET_ENTITY_AS_MISSION_ENTITY(uLocal_245, 1, 1);
					Local_37.f_8 = GET_ENTITY_MODEL(uLocal_245);
					SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_245, uLocal_251);
					SET_PED_MONEY(uLocal_245, 0);
					SET_PED_ACCURACY(uLocal_245, 5);
					SET_PED_KEEP_TASK(uLocal_245, 1);
					SET_PED_COMBAT_ATTRIBUTES(uLocal_245, 23, 1);
					if (IS_THIS_MODEL_A_BIKE(Local_37.f_7))
					{
						if (Local_37.f_26)
						{
							SET_PED_HELMET(uLocal_245, 1);
							GIVE_PED_HELMET(uLocal_245, 1, 4096, -1);
						}
						else
						{
							SET_PED_HELMET(uLocal_245, 0);
						}
					}
					if (Local_37.f_20)
					{
						GIVE_WEAPON_TO_PED(uLocal_245, joaat("weapon_pistol"), 120, 0, 0);
						GIVE_WEAPON_TO_PED(uLocal_245, joaat("weapon_microsmg"), 120, 1, 1);
					}
					SET_MODEL_AS_NO_LONGER_NEEDED(Local_37.f_8);
					SET_ENTITY_PROOFS(uLocal_245, 0, 0, 0, Local_37.f_27, 0, 0, 0, 0);
					func_80(&uLocal_73, 3, uLocal_245, "ABIGAIL", 0, 1);
				}
				if (DOES_ENTITY_EXIST(Global_105275.f_225[1]))
				{
					uLocal_246 = Global_105275.f_225[1];
					Global_105275.f_225[1] = 0;
					SET_ENTITY_AS_MISSION_ENTITY(uLocal_246, 1, 1);
					Local_37.f_9 = GET_ENTITY_MODEL(uLocal_246);
					SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_246, uLocal_251);
					SET_PED_MONEY(uLocal_246, 0);
					SET_PED_ACCURACY(uLocal_246, 5);
					SET_PED_KEEP_TASK(uLocal_246, 1);
					SET_PED_COMBAT_ATTRIBUTES(uLocal_246, 23, 1);
					if (IS_THIS_MODEL_A_BIKE(Local_37.f_7))
					{
						if (Local_37.f_26)
						{
							SET_PED_HELMET(uLocal_246, 1);
							GIVE_PED_HELMET(uLocal_246, 1, 4096, -1);
						}
						else
						{
							SET_PED_HELMET(uLocal_246, 0);
						}
					}
					SET_MODEL_AS_NO_LONGER_NEEDED(Local_37.f_9);
					SET_ENTITY_PROOFS(uLocal_246, 0, 0, 0, Local_37.f_27, 0, 0, 0, 0);
				}
				if ((!DOES_ENTITY_EXIST(uLocal_245) || !IS_PED_INJURED(uLocal_245)) && (!DOES_ENTITY_EXIST(uLocal_246) || !IS_PED_INJURED(uLocal_246)))
				{
					uLocal_249 = func_79(uLocal_244, 1, 0);
					StringCopy(&cVar0, "STOP_THIEF_", 32);
					StringConCat(&cVar0, &(Local_37.f_12), 32);
					func_78(&cVar0, 7500, 1);
					func_77(&(Local_37.f_22), 10000);
					iLocal_238 = 0;
					iLocal_68 = 0;
					iLocal_69 = 0;
					if (Local_37.f_19 != -1)
					{
						iLocal_67 = (GET_GAME_TIMER() + Local_37.f_19);
					}
				}
				iLocal_36++;
			}
			break;
		
		case 1:
			if (((((DOES_ENTITY_EXIST(uLocal_245) && IS_PED_INJURED(uLocal_245)) || (DOES_ENTITY_EXIST(uLocal_246) && IS_PED_INJURED(uLocal_246))) || ((Local_37.f_17 && IS_THIS_MODEL_A_BIKE(Local_37.f_7)) && !IS_PED_IN_VEHICLE(uLocal_245, uLocal_244, 0))) || ((Local_37.f_17 && IS_THIS_MODEL_A_BIKE(Local_37.f_7)) && !IS_PED_IN_VEHICLE(uLocal_246, uLocal_244, 0))) || ((Local_37.f_18 && !IS_PED_IN_VEHICLE(uLocal_245, uLocal_244, 0)) && func_76(uLocal_245)))
			{
				if (Local_37.f_17 && IS_THIS_MODEL_A_BIKE(Local_37.f_7))
				{
					if (!IS_PED_INJURED(uLocal_245) && IS_PED_IN_VEHICLE(uLocal_245, uLocal_244, 0))
					{
						KNOCK_PED_OFF_VEHICLE(uLocal_245);
					}
					if (!IS_PED_INJURED(uLocal_246) && IS_PED_IN_VEHICLE(uLocal_246, uLocal_244, 0))
					{
						KNOCK_PED_OFF_VEHICLE(uLocal_246);
					}
				}
				if (IS_MESSAGE_BEING_DISPLAYED())
				{
					CLEAR_PRINTS();
				}
				if (IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					CLEAR_HELP(1);
				}
				if (func_81())
				{
					func_74();
				}
				iLocal_238 = -1;
				if (HAS_MODEL_LOADED(Local_37.f_10) && (Local_37.f_11 == 0 || HAS_MODEL_LOADED(Local_37.f_11)))
				{
					if (DOES_ENTITY_EXIST(uLocal_245))
					{
						vVar8 = { GET_DEAD_PED_PICKUP_COORDS(uLocal_245, 1067030938, 1069547520) };
						uLocal_247 = CREATE_PICKUP(joaat("pickup_money_med_bag"), vVar8, Local_37.f_28, -1, 1, Local_37.f_10);
						SET_MODEL_AS_NO_LONGER_NEEDED(Local_37.f_10);
						if (DOES_BLIP_EXIST(uLocal_249))
						{
							REMOVE_BLIP(&uLocal_249);
						}
						uLocal_249 = func_73(uLocal_247);
					}
					if (DOES_ENTITY_EXIST(uLocal_246) && Local_37.f_11 != 0)
					{
						vVar8 = { GET_DEAD_PED_PICKUP_COORDS(uLocal_246, 1067030938, 1069547520) };
						uLocal_248 = CREATE_PICKUP(joaat("pickup_money_med_bag"), vVar8, Local_37.f_29, -1, 1, Local_37.f_11);
						SET_MODEL_AS_NO_LONGER_NEEDED(Local_37.f_11);
						if (DOES_BLIP_EXIST(uLocal_250))
						{
							REMOVE_BLIP(&uLocal_250);
						}
						uLocal_250 = func_73(uLocal_248);
					}
					func_72(&uLocal_254, 0, 0);
					iLocal_242 = 1;
					iLocal_36++;
				}
			}
			else
			{
				if (IS_PED_IN_ANY_VEHICLE(uLocal_245, 0))
				{
					if (DOES_BLIP_EXIST(uLocal_250))
					{
						REMOVE_BLIP(&uLocal_250);
					}
					if (!DOES_BLIP_EXIST(uLocal_249))
					{
						uLocal_249 = func_79(GET_VEHICLE_PED_IS_IN(uLocal_245, 0), 1, 0);
					}
				}
				else
				{
					if (DOES_BLIP_EXIST(uLocal_249))
					{
						REMOVE_BLIP(&uLocal_249);
					}
					if (!DOES_BLIP_EXIST(uLocal_250))
					{
						uLocal_250 = func_69(uLocal_245, 1, 145);
					}
				}
				func_40(&uLocal_254, uLocal_245, 0, 0, 1, 1, 1);
				if (iLocal_67 != -1)
				{
					if (GET_GAME_TIMER() > iLocal_67)
					{
						func_39();
					}
					else
					{
						iVar11 = func_38(ABSI((iLocal_67 - GET_GAME_TIMER())), 0, Local_37.f_19);
						if (iVar11 <= 10000)
						{
							func_34((Local_37.f_19 - iVar11), Local_37.f_19, "UPLOAD", 9, 10000, 1, 2);
						}
						else
						{
							func_34((Local_37.f_19 - iVar11), Local_37.f_19, "UPLOAD", 9, 0, 1, 2);
						}
					}
				}
				if (DOES_ENTITY_EXIST(uLocal_245))
				{
					if (func_33(PLAYER_PED_ID(), uLocal_245, 1) > 500f)
					{
						func_39();
					}
					else if (DOES_BLIP_EXIST(uLocal_249))
					{
						func_32(uLocal_249, uLocal_245, 500f, 0.8f, 0);
					}
				}
				if (DOES_ENTITY_EXIST(uLocal_246))
				{
					if (func_33(PLAYER_PED_ID(), uLocal_246, 1) > 500f)
					{
						func_39();
					}
					else if (DOES_BLIP_EXIST(uLocal_250))
					{
						func_32(uLocal_250, uLocal_246, 500f, 0.8f, 0);
					}
				}
			}
			break;
		
		case 2:
			if (!DOES_PICKUP_EXIST(uLocal_247) || HAS_PICKUP_BEEN_COLLECTED(uLocal_247))
			{
				if (DOES_PICKUP_EXIST(uLocal_247))
				{
					REMOVE_PICKUP(uLocal_247);
				}
				if (DOES_BLIP_EXIST(uLocal_249))
				{
					REMOVE_BLIP(&uLocal_249);
				}
			}
			if (!DOES_PICKUP_EXIST(uLocal_248) || HAS_PICKUP_BEEN_COLLECTED(uLocal_248))
			{
				if (DOES_PICKUP_EXIST(uLocal_248))
				{
					REMOVE_PICKUP(uLocal_248);
				}
				if (DOES_BLIP_EXIST(uLocal_250))
				{
					REMOVE_BLIP(&uLocal_250);
				}
			}
			if (!DOES_BLIP_EXIST(uLocal_249) && !DOES_BLIP_EXIST(uLocal_250))
			{
				if (IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER_ID(), 0))
				{
					if (!iLocal_71)
					{
						func_78("LOSE_WANTED", 7500, 1);
						iLocal_71 = 1;
					}
				}
				else
				{
					CLEAR_PRINTS();
					func_31();
				}
			}
			else if ((DOES_PICKUP_EXIST(uLocal_247) && func_30(PLAYER_PED_ID(), GET_PICKUP_COORDS(uLocal_247), 1) > 500f) || (DOES_PICKUP_EXIST(uLocal_248) && func_30(PLAYER_PED_ID(), GET_PICKUP_COORDS(uLocal_248), 1) > 500f))
			{
				func_39();
			}
			else if (iLocal_242 && func_28())
			{
				CLEAR_PRINTS();
				StringCopy(&cVar0, "PKUP_", 32);
				StringConCat(&cVar0, &(Local_37.f_12), 32);
				func_78(&cVar0, 7500, 1);
				iLocal_242 = 0;
			}
			break;
	}
	if (DOES_ENTITY_EXIST(uLocal_245) && !IS_PED_INJURED(uLocal_245))
	{
		if ((DOES_ENTITY_EXIST(uLocal_244) && IS_VEHICLE_DRIVEABLE(uLocal_244, 0)) && !iLocal_68)
		{
			if (!func_27(uLocal_245, 242628503, 1))
			{
				OPEN_SEQUENCE_TASK(&uLocal_243);
				TASK_VEHICLE_TEMP_ACTION(0, uLocal_244, 31, 10000);
				TASK_VEHICLE_MISSION_PED_TARGET(0, uLocal_244, PLAYER_PED_ID(), 8, 30f, Local_37.f_16, 1000f, 0f, 1);
				CLOSE_SEQUENCE_TASK(uLocal_243);
				TASK_PERFORM_SEQUENCE(uLocal_245, uLocal_243);
				CLEAR_SEQUENCE_TASK(&uLocal_243);
				iLocal_68 = 1;
			}
		}
		else if (((func_27(uLocal_245, 242628503, 1) && GET_SEQUENCE_PROGRESS(uLocal_245) < 1) && !iLocal_69) && (((((IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), Local_37, Local_37.f_3, Local_37.f_6, 0, 1, 0) || HAS_PED_RECEIVED_EVENT(uLocal_245, 122)) || HAS_PED_RECEIVED_EVENT(uLocal_245, 123)) || HAS_PED_RECEIVED_EVENT(uLocal_245, 124)) || HAS_PED_RECEIVED_EVENT(uLocal_245, 23)) || func_26(Global_105275.f_35, 134217728)))
		{
			TASK_VEHICLE_MISSION_PED_TARGET(uLocal_245, uLocal_244, PLAYER_PED_ID(), 8, 30f, Local_37.f_16, 1000f, 0f, 1);
			iLocal_69 = 1;
		}
		else if ((!func_27(uLocal_245, 242628503, 1) && !func_27(uLocal_245, -1273030092, 1)) || !IS_PED_IN_ANY_VEHICLE(uLocal_245, 0))
		{
			if (!func_27(uLocal_245, 1805844857, 1))
			{
				TASK_SMART_FLEE_PED(uLocal_245, PLAYER_PED_ID(), 1000f, -1, 0, 1);
			}
		}
		else if (IS_PED_IN_VEHICLE(uLocal_245, uLocal_244, 1) && (((IS_VEHICLE_STUCK_TIMER_UP(uLocal_244, 0, 3000) || IS_VEHICLE_STUCK_TIMER_UP(uLocal_244, 1, 3000)) || IS_VEHICLE_STUCK_TIMER_UP(uLocal_244, 2, 8000)) || IS_VEHICLE_STUCK_TIMER_UP(uLocal_244, 3, 8000)))
		{
			if (!func_27(uLocal_245, 451360105, 1))
			{
				TASK_LEAVE_VEHICLE(uLocal_245, uLocal_244, 0);
			}
		}
		if (Local_37.f_20)
		{
			if (!bLocal_70)
			{
				if ((((HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_245, PLAYER_PED_ID(), 1) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_244, PLAYER_PED_ID(), 1)) || HAS_PED_RECEIVED_EVENT(uLocal_245, 122)) || HAS_PED_RECEIVED_EVENT(uLocal_245, 123)) || HAS_PED_RECEIVED_EVENT(uLocal_245, 124))
				{
					bLocal_70 = true;
				}
			}
			if (bLocal_70)
			{
				if ((GET_SCRIPT_TASK_STATUS(uLocal_245, 242628503) == 1 && GET_SEQUENCE_PROGRESS(uLocal_245) == 1) || GET_SCRIPT_TASK_STATUS(uLocal_245, -1273030092) == 1)
				{
					if (!IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(uLocal_245))
					{
						SET_CURRENT_PED_VEHICLE_WEAPON(uLocal_245, joaat("weapon_microsmg"));
						TASK_DRIVE_BY(uLocal_245, PLAYER_PED_ID(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
					}
				}
			}
		}
		if (DOES_ENTITY_EXIST(uLocal_244) && IS_VEHICLE_DRIVEABLE(uLocal_244, 0))
		{
			if (!iLocal_72)
			{
				if ((func_27(uLocal_245, 242628503, 1) && GET_SEQUENCE_PROGRESS(uLocal_245) == 1) || func_27(uLocal_245, -1273030092, 1))
				{
					if (REQUEST_SCRIPT_AUDIO_BANK("TAKINGS", 0, -1))
					{
						PLAY_SOUND_FROM_ENTITY(-1, "TAKINGS_TIRES_PEELAWAY_master", uLocal_244, 0, 0, 0);
						iLocal_72 = 1;
					}
				}
			}
		}
	}
	if (DOES_ENTITY_EXIST(uLocal_246) && !IS_PED_INJURED(uLocal_246))
	{
		if (!IS_PED_IN_ANY_VEHICLE(uLocal_246, 0) && !func_27(uLocal_246, 1805844857, 1))
		{
			TASK_SMART_FLEE_PED(uLocal_246, PLAYER_PED_ID(), 1000f, -1, 0, 1);
		}
	}
	if (DOES_ENTITY_EXIST(uLocal_245) && !IS_PED_INJURED(uLocal_245))
	{
		if (IS_ENTITY_IN_AIR(uLocal_245) && !IS_PED_IN_ANY_VEHICLE(uLocal_245, 0))
		{
			if (func_81())
			{
				func_74();
			}
		}
		else if (func_33(PLAYER_PED_ID(), uLocal_245, 1) < 15f)
		{
			switch (iLocal_238)
			{
				case 0:
					if (func_25())
					{
						MemCopy(&cVar0, {Local_37.f_12}, 8);
						StringConCat(&cVar0, "_1", 32);
						MemCopy(&cVar0, {func_24(&cVar0)}, 8);
						if (func_7(&uLocal_73, &cLocal_240, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 1:
					if (func_25())
					{
						if (!IS_AMBIENT_SPEECH_PLAYING(uLocal_245))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							func_3(uLocal_245, &cVar0, 10);
							iLocal_239 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 2:
					if (func_25() && (GET_GAME_TIMER() - iLocal_239) > 3500)
					{
						MemCopy(&cVar0, {Local_37.f_12}, 8);
						StringConCat(&cVar0, "_3", 32);
						MemCopy(&cVar0, {func_24(&cVar0)}, 8);
						if (func_7(&uLocal_73, &cLocal_240, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 3:
					if (func_25() && (GET_GAME_TIMER() - iLocal_239) > 1500)
					{
						if (!IS_AMBIENT_SPEECH_PLAYING(uLocal_245))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							func_3(uLocal_245, &cVar0, 10);
							iLocal_239 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_238 = (iLocal_238 - 1);
						}
					}
					break;
				}
			}
	}
	if (DOES_ENTITY_EXIST(uLocal_245))
	{
		if (IS_PED_INJURED(uLocal_245))
		{
			if (Local_37.f_21)
			{
				func_2(1);
				func_39();
			}
		}
		else if (Local_37.f_27)
		{
			if (iLocal_252 == -1)
			{
				if (!IS_ENTITY_IN_AIR(uLocal_245))
				{
					iLocal_252 = GET_GAME_TIMER();
				}
			}
			else if ((GET_GAME_TIMER() - iLocal_252) > 2000)
			{
				SET_ENTITY_PROOFS(uLocal_245, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
	if (DOES_ENTITY_EXIST(uLocal_246))
	{
		if (IS_PED_INJURED(uLocal_246))
		{
			if (Local_37.f_21)
			{
				func_2(1);
				func_39();
			}
		}
		else if (Local_37.f_27)
		{
			if (iLocal_253 == -1)
			{
				if (!IS_ENTITY_IN_AIR(uLocal_246))
				{
					iLocal_253 = GET_GAME_TIMER();
				}
			}
			else if ((GET_GAME_TIMER() - iLocal_253) > 2000)
			{
				SET_ENTITY_PROOFS(uLocal_246, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_2(int iParam0)
{
	Global_105275.f_220 = iParam0;
}

void func_3(var uParam0, char[4] cParam1, int iParam2)
{
	_PLAY_AMBIENT_SPEECH1(uParam0, cParam1, func_4(iParam2), 1);
}

int func_4(int iParam0)
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

int func_5()
{
	return func_6(Global_105275.f_20, Global_105275.f_29);
}

int func_6(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
		case 5:
		case 7:
			return 0;
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
	}
	return iParam1;
}

bool func_7(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_23(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_8(sParam2, iParam3, 0);
}

int func_8(char* sParam0, int iParam1, bool bParam2)
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
					func_22();
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
		if (func_21(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_20();
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
				func_13();
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
				if (func_12())
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
			if (func_11())
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
			func_10();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_9();
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
		func_22();
	}
	return 0;
}

void func_9()
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

void func_10()
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

int func_11()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_12()
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

void func_13()
{
	if (func_19(14))
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
		Global_14553 = func_14();
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

int func_14()
{
	func_15();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_15()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		if (func_18(Global_106565.f_2357.f_539.f_4321) != GET_ENTITY_MODEL(PLAYER_PED_ID()))
		{
			iVar0 = func_17(PLAYER_PED_ID());
			if (func_16(iVar0) && (!func_19(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_16(Global_106565.f_2357.f_539.f_4321))
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

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

int func_17(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_18(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_18(int iParam0)
{
	if (func_16(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_19(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_20()
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

bool func_21(int iParam0, int iParam1)
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

void func_22()
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

void func_23(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

struct<4> func_24(char* sParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam0, 16);
	switch (func_14())
	{
		case 0:
			StringConCat(&Var0, "_M", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "_F", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "_T", 16);
			break;
	}
	return Var0;
}

int func_25()
{
	if (func_81())
	{
		return 0;
	}
	if (IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (IS_MESSAGE_BEING_DISPLAYED())
		{
			return 0;
		}
	}
	return 1;
}

bool func_26(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_27(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = GET_SCRIPT_TASK_STATUS(uParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_28()
{
	if (IS_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (func_81() && !func_29())
		{
			return 0;
		}
	}
	return 1;
}

int func_29()
{
	if (Global_16877 == 1)
	{
		return 1;
	}
	return 0;
}

float func_30(var uParam0, vector3 vParam1, int iParam4)
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

void func_31()
{
	func_89(1);
	func_88();
}

void func_32(var uParam0, var uParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (DOES_BLIP_EXIST(uParam0))
	{
		if ((DOES_ENTITY_EXIST(uParam1) && DOES_ENTITY_EXIST(PLAYER_PED_ID())) && !IS_PED_INJURED(PLAYER_PED_ID()))
		{
			if (IS_ENTITY_A_VEHICLE(uParam1))
			{
				if (IS_VEHICLE_DRIVEABLE(GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1), 0))
				{
					fVar1 = GET_DISTANCE_BETWEEN_COORDS(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), GET_ENTITY_COORDS(uParam1, 1), 1);
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
			else if (IS_ENTITY_A_PED(uParam1))
			{
				if (!IS_PED_INJURED(GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1)))
				{
					fVar1 = GET_DISTANCE_BETWEEN_COORDS(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), GET_ENTITY_COORDS(uParam1, 1), 1);
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

float func_33(var uParam0, var uParam1, int iParam2)
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

void func_34(int iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_35(iParam0, uParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1);
}

void func_35(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_37(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_36(0, iVar0);
		Global_1373453.f_1114[iVar0] = uParam0;
		Global_1373453.f_1114.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1373453.f_1114.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1373453.f_1114.f_194[iVar0] = uParam3;
		Global_1373453.f_1114.f_183[iVar0] = uParam4;
		Global_1373453.f_1114.f_216[iVar0] = uParam5;
		Global_1373453.f_1114.f_227[iVar0 /*3*/] = fParam6;
		Global_1373453.f_1114.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1373453.f_1114.f_258[iVar0] = iParam8;
		Global_1373453.f_1114.f_269[iVar0] = uParam9;
		Global_1373453.f_1114.f_312[iVar0] = iParam10;
		Global_1373453.f_1114.f_323[iVar0] = iParam11;
		Global_1373453.f_1114.f_334[iVar0] = iParam12;
		Global_1373453.f_1114.f_345[iVar0] = iParam13;
		Global_1373453.f_1109 = 1;
		Global_1373453.f_1114.f_356[iVar0] = iParam14;
		Global_1373453.f_1114.f_367[iVar0] = iParam15;
		Global_1373453.f_1114.f_378[iVar0] = iParam16;
		Global_1373453.f_1114.f_389[iVar0] = iParam17;
		Global_1373453.f_1114.f_400[iVar0] = iParam18;
		Global_1373453.f_1114.f_411[iVar0] = iParam19;
		Global_1373453.f_1114.f_422[iVar0] = iParam20;
		Global_1373453.f_1114.f_433[iVar0] = iParam21;
		Global_1373453.f_1114.f_444[iVar0] = iParam22;
		Global_1373453.f_1114.f_455[iVar0] = iParam23;
		Global_1373453.f_1114.f_466[iVar0] = iParam24;
		Global_1373453.f_1114.f_205[iVar0] = iParam25;
	}
}

void func_36(int iParam0, int iParam1)
{
	SET_BIT(&(Global_1373453.f_6184[iParam0]), iParam1);
}

int func_37(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1373453.f_6184[iParam0], iParam1);
}

int func_38(int iParam0, int iParam1, int iParam2)
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

void func_39()
{
	func_89(2);
	func_88();
}

void func_40(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_41(uParam0, uParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_41(var uParam0, var uParam1, vector3 vParam2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
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
	if (func_68(iVar0))
	{
		func_67();
	}
	if (func_66(uParam1) && IS_ENTITY_VISIBLE(uParam1))
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
			if (func_61(uParam0, bParam7, bParam9, 0))
			{
				func_57(uParam0, uParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_45(iVar0))
				{
					if ((IS_STRING_NULL(uParam0->f_3) && !IS_STRING_NULL(iVar0)) && IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!func_68(iVar0))
							{
								func_77(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_44(1);
								}
							}
						}
					}
				}
			}
			else if (func_45(iVar0))
			{
				if (IS_STRING_NULL(uParam0->f_3) && !IS_STRING_NULL(iVar0))
				{
					if (((IS_ENTITY_ON_SCREEN(uParam1) && iVar1) && !IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!func_68(iVar0))
						{
							func_77(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_44(1);
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
				if (func_68(sParam5))
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
						func_72(uParam0, iVar0, 1);
					}
				}
				else if (IS_PED_IN_ANY_HELI(PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
					{
						func_72(uParam0, iVar0, 1);
					}
				}
				else if (IS_PED_IN_ANY_PLANE(PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
					{
						func_72(uParam0, iVar0, 1);
					}
				}
				else if (IS_PED_IN_ANY_SUB(PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
					{
						func_72(uParam0, iVar0, 1);
					}
				}
				else if (IS_PED_ON_ANY_BIKE(PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
					{
						func_72(uParam0, iVar0, 1);
					}
				}
				else if (GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_72(uParam0, iVar0, 1);
				}
			}
			if (!func_61(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_43(uParam0))
				{
					func_42(uParam0);
				}
			}
		}
	}
	else
	{
		func_72(uParam0, iVar0, 0);
	}
}

void func_42(var uParam0)
{
	if (func_66(PLAYER_PED_ID()))
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

int func_43(var uParam0)
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

int func_44(bool bParam0)
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

int func_45(char* sParam0)
{
	if (!func_46(1, 1, 0))
	{
		if ((!IS_STRING_NULL_OR_EMPTY(sParam0) && func_68(sParam0)) || func_68("CMN_HINT"))
		{
			CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_36425)
	{
		case 0:
		case 3:
			if (func_44(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_44(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_44(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_46(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_56(0))
	{
		return 0;
	}
	if (func_55())
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
	if ((func_54() || func_53(Global_4456448.f_161209)) || func_52())
	{
		if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
		{
			uVar0 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
			iVar1 = func_51(PLAYER_PED_ID(), 0);
			if (((_0xE33FFA906CE74880(uVar0, iVar1) || (GET_ENTITY_MODEL(uVar0) == joaat("apc") && iVar1 != -1)) || (GET_ENTITY_MODEL(uVar0) == joaat("akula") && iVar1 != -1)) || (((GET_ENTITY_MODEL(uVar0) == joaat("riot2") && iVar1 == 0) && func_50(uVar0, 10)) && GET_VEHICLE_MOD(uVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1680665)
	{
		return 0;
	}
	if (func_47(PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_47(int iParam0)
{
	if (iParam0 != func_49())
	{
		if (func_48(iParam0, 1, 1))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
		else if ((Global_1312867 && iParam0 == PLAYER_ID()) && func_48(iParam0, 1, 0))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
	}
	return 0;
}

int func_48(int iParam0, bool bParam1, bool bParam2)
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

int func_49()
{
	return -1;
}

int func_50(var uParam0, int iParam1)
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

int func_51(int iParam0, int iParam1)
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

var func_52()
{
	return Global_2448756.f_16;
}

bool func_53(int iParam0)
{
	return iParam0 == 51;
}

var func_54()
{
	return Global_2448756.f_15;
}

bool func_55()
{
	return GET_GAME_TIMER() <= Global_17411.f_5878 + 100;
}

int func_56(int iParam0)
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

void func_57(var uParam0, var uParam1, vector3 vParam2, int iParam5)
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
		func_72(uParam0, 0, 0);
	}
	if (func_60(vParam2, 0f, 0f, 0f, 0))
	{
		if (IS_ENTITY_A_PED(uParam1))
		{
			uVar0 = GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1);
			if (!IS_PED_IN_ANY_VEHICLE(uVar0, 0))
			{
				if (IS_PED_A_PLAYER(uVar0))
				{
					if (!func_58())
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

bool func_58()
{
	return func_59(PLAYER_ID());
}

int func_59(var uParam0)
{
	if (GET_ENTITY_MODEL(GET_PLAYER_PED(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_60(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_61(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_65(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_64(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_64(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_65(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_43(uParam0))
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
						if (!func_65(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_64(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_64(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_65(bParam1, bParam2, bParam3))
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
					if (!func_65(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_64(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_64(bParam1, bParam2, bParam3) || IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1))
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
				else if (!func_65(bParam1, bParam2, bParam3))
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
						if (func_63(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_62(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1) || func_62(bParam1, bParam2, bParam3))
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
					else if (func_63(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_43(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_46(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_67();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_62(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
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

int func_63(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
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

int func_64(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
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

int func_65(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
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

int func_66(var uParam0)
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

void func_67()
{
	SET_BIT(&Global_2424, 4);
}

bool func_68(char* sParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

var func_69(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_70(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && DOES_BLIP_EXIST(uVar0)) && DOES_TEXT_LABEL_EXIST(&(Global_106565.f_28044[iParam2 /*29*/].f_3)))
	{
		SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_106565.f_28044[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_70(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = ADD_BLIP_FOR_ENTITY(uParam0);
	if (IS_ENTITY_A_VEHICLE(uParam0))
	{
		SET_BLIP_SCALE(uVar0, func_71(NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		SET_BLIP_SCALE(uVar0, func_71(NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (IS_ENTITY_AN_OBJECT(uParam0))
	{
		SET_BLIP_SCALE(uVar0, func_71(NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_71(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_72(var uParam0, int iParam1, int iParam2)
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
		if (func_68(uParam0->f_3))
		{
			CLEAR_HELP(1);
		}
	}
	if (!IS_STRING_NULL(sVar0))
	{
		if (func_68(sVar0))
		{
			CLEAR_HELP(1);
		}
	}
}

int func_73(var uParam0)
{
	var uVar0;
	
	if (!DOES_PICKUP_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = ADD_BLIP_FOR_PICKUP(uParam0);
	SET_BLIP_SCALE(uVar0, func_71(NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return uVar0;
}

void func_74()
{
	Global_14732 = 0;
	func_75();
}

void func_75()
{
	RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(0);
		Global_15866 = 6;
	}
}

int func_76(var uParam0)
{
	if (((((HAS_PED_RECEIVED_EVENT(uParam0, 122) || HAS_PED_RECEIVED_EVENT(uParam0, 123)) || HAS_PED_RECEIVED_EVENT(uParam0, 124)) || HAS_PED_RECEIVED_EVENT(uParam0, 41)) || (_CAN_PED_SEE_PED(uParam0, PLAYER_PED_ID()) && HAS_PED_RECEIVED_EVENT(uParam0, 29))) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0, PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	else
	{
		CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0);
	}
	return 0;
}

void func_77(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_78(char[4] cParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	BEGIN_TEXT_COMMAND_PRINT(cParam0);
	END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_79(var uParam0, bool bParam1, bool bParam2)
{
	return func_70(uParam0, !bParam1, bParam2);
}

void func_80(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
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

int func_81()
{
	if (Global_15866 != 0 || IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_82()
{
	func_83(&Local_37);
	ADD_RELATIONSHIP_GROUP("relThief", &uLocal_251);
	SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, uLocal_251);
	SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_251, 1862763509);
	switch (func_14())
	{
		case 0:
			func_80(&uLocal_73, 0, PLAYER_PED_ID(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_80(&uLocal_73, 1, PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_80(&uLocal_73, 2, PLAYER_PED_ID(), "TREVOR", 0, 1);
			break;
	}
	SET_WANTED_LEVEL_MULTIPLIER(0.1f);
}

void func_83(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	
	vVar0 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 0) };
	vVar0.z = 0f;
	iVar3 = 0;
	iVar4 = 0;
	SET_BIT(&iVar3, 3);
	SET_BIT(&iVar3, 4);
	SET_BIT(&iVar4, 3);
	SET_BIT(&iVar4, 4);
	SET_BIT(&iVar4, 8);
	switch (func_5())
	{
		case 0:
			uParam0->f_8 = joaat("a_m_m_eastsa_02");
			uParam0->f_10 = joaat("prop_cs_duffel_01b");
			uParam0->f_16 = 572;
			StringCopy(&(uParam0->f_12), "MON", 16);
			uParam0->f_20 = 1;
			uParam0->f_28 = iVar3;
			break;
		
		case 1:
			uParam0->f_8 = joaat("a_m_m_paparazzi_01");
			uParam0->f_9 = joaat("a_m_m_paparazzi_01");
			uParam0->f_10 = joaat("prop_pap_camera_01");
			uParam0->f_11 = joaat("prop_npc_phone");
			uParam0->f_16 = 60;
			uParam0->f_17 = 1;
			uParam0->f_18 = 1;
			StringCopy(&(uParam0->f_12), "PAP", 16);
			uParam0->f_19 = 60000;
			uParam0->f_21 = 1;
			StringCopy(&(uParam0->f_22), "PAP_HLP", 16);
			uParam0->f_26 = 0;
			uParam0->f_27 = 1;
			uParam0->f_28 = iVar4;
			uParam0->f_29 = iVar3;
			break;
	}
	switch (func_87())
	{
		case 5:
			*uParam0 = { 178.0117f, 202.3507f, 102.9037f };
			uParam0->f_3 = { 514.5839f, 78.78811f, 111.1864f };
			uParam0->f_6 = 131.0625f;
			break;
		
		case 6:
			*uParam0 = { 418.5796f, -636.2899f, 25.43758f };
			uParam0->f_3 = { 400.2468f, -826.1611f, 44.10468f };
			uParam0->f_6 = 95.375f;
			break;
		
		case 7:
			*uParam0 = { -1368.458f, -238.4543f, 40.36241f };
			uParam0->f_3 = { -1475.669f, -127.621f, 65.65466f };
			uParam0->f_6 = 158.25f;
			break;
		
		case 11:
			if (func_84(func_87(), vVar0))
			{
				*uParam0 = { -602.3785f, 258.2744f, 79.0293f };
				uParam0->f_3 = { -469.064f, 244.8735f, 97.88577f };
				uParam0->f_6 = 70.125f;
			}
			else
			{
				*uParam0 = { -621.5889f, 262.0915f, 78.67405f };
				uParam0->f_3 = { -494.7666f, 248.2196f, 97.88564f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 12:
			if (func_84(func_87(), vVar0))
			{
				*uParam0 = { 137.2073f, 392.7482f, 110.9443f };
				uParam0->f_3 = { 297.2104f, 336.0269f, 120.3525f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { 191.3225f, 364.9949f, 104.5153f };
				uParam0->f_3 = { 320.3688f, 325.2877f, 120.2689f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 13:
			if (func_84(func_87(), vVar0))
			{
				*uParam0 = { -221.6586f, 6310.131f, 28.40555f };
				uParam0->f_3 = { -319.8287f, 6211.665f, 46.19521f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { -260.2809f, 6273.981f, 28.42822f };
				uParam0->f_3 = { -371.5657f, 6164.586f, 46.1894f };
				uParam0->f_6 = 95.375f;
			}
			break;
		
		case 14:
			*uParam0 = { -2313.765f, 4159.022f, 29.59011f };
			uParam0->f_3 = { -2140.887f, 4437.057f, 72.619f };
			uParam0->f_6 = 113.5f;
			break;
	}
}

int func_84(int iParam0, vector3 vParam1)
{
	switch (iParam0)
	{
		case 5:
			if (func_85(func_86(vParam1 - Vector(0f, 174.58f, 335.5574f)), func_86(Vector(0f, 174.8707f, 334.8261f) - Vector(0f, 174.58f, 335.5574f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			if (func_85(func_86(vParam1 - Vector(0f, -711.023f, 393.0992f)), func_86(Vector(0f, -715.4372f, 393.1879f) - Vector(0f, -711.023f, 393.0992f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 7:
			if (func_85(func_86(vParam1 - Vector(0f, -215.2002f, -1423.254f)), func_86(Vector(0f, -215.1443f, -1420.71f) - Vector(0f, -215.2002f, -1423.254f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 11:
			if (func_85(func_86(vParam1 - Vector(0f, 274.9096f, -564.5655f)), func_86(Vector(0f, 275.0867f, -567.1105f) - Vector(0f, 274.9096f, -564.5655f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 12:
			if (func_85(func_86(vParam1 - Vector(0f, 338.8084f, 225.5057f)), func_86(Vector(0f, 338.4193f, 226.8374f) - Vector(0f, 338.8084f, 225.5057f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 13:
			if (func_85(func_86(vParam1 - Vector(0f, 6256.5f, -299.9329f)), func_86(Vector(0f, 6255.179f, -301.1977f) - Vector(0f, 6256.5f, -299.9329f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 14:
			if (func_85(func_86(vParam1 - Vector(0f, 4287.951f, -2200.204f)), func_86(Vector(0f, 4289.739f, -2199.26f) - Vector(0f, 4287.951f, -2200.204f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

float func_85(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_86(vector3 vParam0)
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

int func_87()
{
	return Global_105275.f_20;
}

void func_88()
{
	if (DOES_ENTITY_EXIST(uLocal_245))
	{
		if (!IS_PED_INJURED(uLocal_245))
		{
			TASK_SMART_FLEE_PED(uLocal_245, PLAYER_PED_ID(), 1000f, -1, 0, 1);
		}
		SET_PED_AS_NO_LONGER_NEEDED(&uLocal_245);
	}
	if (DOES_ENTITY_EXIST(uLocal_246))
	{
		if (!IS_PED_INJURED(uLocal_246))
		{
			TASK_SMART_FLEE_PED(uLocal_246, PLAYER_PED_ID(), 1000f, -1, 0, 1);
		}
		SET_PED_AS_NO_LONGER_NEEDED(&uLocal_246);
	}
	if (DOES_ENTITY_EXIST(uLocal_244))
	{
		SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_244);
	}
	if (DOES_PICKUP_EXIST(uLocal_247))
	{
		REMOVE_PICKUP(uLocal_247);
	}
	if (DOES_PICKUP_EXIST(uLocal_248))
	{
		REMOVE_PICKUP(uLocal_248);
	}
	if (DOES_BLIP_EXIST(uLocal_249))
	{
		REMOVE_BLIP(&uLocal_249);
	}
	if (DOES_BLIP_EXIST(uLocal_250))
	{
		REMOVE_BLIP(&uLocal_250);
	}
	SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_37.f_7, 0);
	SET_WANTED_LEVEL_MULTIPLIER(1f);
	REMOVE_RELATIONSHIP_GROUP(uLocal_251);
	TERMINATE_THIS_THREAD();
}

void func_89(int iParam0)
{
	Global_105275.f_22 = iParam0;
}

