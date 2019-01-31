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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
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
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115[130] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_116[130] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120[4] = { 0, 0, 0, 0 };
	var uLocal_121[4] = { 0, 0, 0, 0 };
	int iLocal_122[4] = { 0, 0, 0, 0 };
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	vector3 vLocal_132[130] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	int iLocal_143[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_144 = 0;
	int iLocal_145[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	struct<2> Local_148 = { -1, -1 } ;
	struct<730> Local_149 = { 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	struct<535> Local_170 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_171 = -1;
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
	var uLocal_193 = -1082130432;
	var uLocal_194 = 3;
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
	var uLocal_210 = -1;
	var uLocal_211 = 0;
	var uLocal_212 = -1;
	var uLocal_213 = -1;
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
	var uLocal_235 = -1082130432;
	var uLocal_236 = 3;
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
	var uLocal_252 = -1;
	var uLocal_253 = 0;
	var uLocal_254 = -1;
	var uLocal_255 = -1;
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
	var uLocal_277 = -1082130432;
	var uLocal_278 = 3;
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
	var uLocal_294 = -1;
	var uLocal_295 = 0;
	var uLocal_296 = -1;
	var uLocal_297 = -1;
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
	var uLocal_319 = -1082130432;
	var uLocal_320 = 3;
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
	var uLocal_336 = -1;
	var uLocal_337 = 0;
	var uLocal_338 = -1;
	var uLocal_339 = -1;
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
	var uLocal_361 = -1082130432;
	var uLocal_362 = 3;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = -1;
	var uLocal_379 = 0;
	var uLocal_380 = -1;
	var uLocal_381 = -1;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = -1082130432;
	var uLocal_404 = 3;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = -1;
	var uLocal_421 = 0;
	var uLocal_422 = -1;
	var uLocal_423 = -1;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = -1082130432;
	var uLocal_446 = 3;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = -1;
	var uLocal_463 = 0;
	var uLocal_464 = -1;
	var uLocal_465 = -1;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = -1082130432;
	var uLocal_488 = 3;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = -1;
	var uLocal_505 = 0;
	var uLocal_506 = -1;
	var uLocal_507 = -1;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = -1082130432;
	var uLocal_530 = 3;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = -1;
	var uLocal_547 = 0;
	var uLocal_548 = -1;
	var uLocal_549 = -1;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = -1082130432;
	var uLocal_572 = 3;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = -1;
	var uLocal_589 = 0;
	var uLocal_590 = -1;
	var uLocal_591 = -1;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = -1082130432;
	var uLocal_614 = 3;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = -1;
	var uLocal_631 = 0;
	var uLocal_632 = -1;
	var uLocal_633 = -1;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = -1082130432;
	var uLocal_656 = 3;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = -1;
	var uLocal_673 = 0;
	var uLocal_674 = -1;
	var uLocal_675 = -1;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = -1082130432;
	var uLocal_698 = 3;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = -1;
	var uLocal_715 = 0;
	var uLocal_716 = -1;
	var uLocal_717 = -1;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = -1082130432;
	var uLocal_740 = 3;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = -1;
	var uLocal_757 = 0;
	var uLocal_758 = -1;
	var uLocal_759 = -1;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = -1082130432;
	var uLocal_782 = 3;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = -1;
	var uLocal_799 = 0;
	var uLocal_800 = -1;
	var uLocal_801 = -1;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = -1082130432;
	var uLocal_824 = 3;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = -1;
	var uLocal_841 = 0;
	var uLocal_842 = -1;
	var uLocal_843 = -1;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = -1082130432;
	var uLocal_866 = 3;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = -1;
	var uLocal_883 = 0;
	var uLocal_884 = -1;
	var uLocal_885 = -1;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = -1082130432;
	var uLocal_908 = 3;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = -1;
	var uLocal_925 = 0;
	var uLocal_926 = -1;
	var uLocal_927 = -1;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = -1082130432;
	var uLocal_950 = 3;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = -1;
	var uLocal_967 = 0;
	var uLocal_968 = -1;
	var uLocal_969 = -1;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = -1082130432;
	var uLocal_992 = 3;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = -1;
	var uLocal_1009 = 0;
	var uLocal_1010 = -1;
	var uLocal_1011 = -1;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = -1082130432;
	var uLocal_1034 = 3;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = -1;
	var uLocal_1051 = 0;
	var uLocal_1052 = -1;
	var uLocal_1053 = -1;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = -1082130432;
	var uLocal_1076 = 3;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = -1;
	var uLocal_1093 = 0;
	var uLocal_1094 = -1;
	var uLocal_1095 = -1;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = -1082130432;
	var uLocal_1118 = 3;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = -1;
	var uLocal_1135 = 0;
	var uLocal_1136 = -1;
	var uLocal_1137 = -1;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = -1082130432;
	var uLocal_1160 = 3;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = -1;
	var uLocal_1177 = 0;
	var uLocal_1178 = -1;
	var uLocal_1179 = -1;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = -1082130432;
	var uLocal_1202 = 3;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = -1;
	var uLocal_1219 = 0;
	var uLocal_1220 = -1;
	var uLocal_1221 = -1;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = -1082130432;
	var uLocal_1244 = 3;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = -1;
	var uLocal_1261 = 0;
	var uLocal_1262 = -1;
	var uLocal_1263 = -1;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = -1082130432;
	var uLocal_1286 = 3;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = -1;
	var uLocal_1303 = 0;
	var uLocal_1304 = -1;
	var uLocal_1305 = -1;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = -1082130432;
	var uLocal_1328 = 3;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = -1;
	var uLocal_1345 = 0;
	var uLocal_1346 = -1;
	var uLocal_1347 = -1;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = -1082130432;
	var uLocal_1370 = 3;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = -1;
	var uLocal_1387 = 0;
	var uLocal_1388 = -1;
	var uLocal_1389 = -1;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = -1082130432;
	var uLocal_1412 = 3;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = -1;
	var uLocal_1429 = 0;
	var uLocal_1430 = -1;
	var uLocal_1431 = -1;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = -1082130432;
	var uLocal_1454 = 3;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = -1;
	var uLocal_1471 = 0;
	var uLocal_1472 = -1;
	var uLocal_1473 = -1;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = -1082130432;
	var uLocal_1496 = 3;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = -1;
	var uLocal_1513 = 0;
	var uLocal_1514 = -1;
	struct<12> Local_1515 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_1516[32];
	struct<21> Local_1517 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_696(ScriptParam_1517))
		{
			func_659();
		}
	}
	while (true)
	{
		func_658();
		if (func_651() || func_649())
		{
			func_659();
		}
		func_622();
		switch (func_621(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_620() == 1)
				{
					if (func_619())
					{
						func_618(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 1);
					}
				}
				break;
			
			case 1:
				if (func_620() == 1)
				{
					func_129();
					func_117();
				}
				else if (func_620() == 3)
				{
					func_618(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 3);
				}
				break;
			
			case 3:
				func_659();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_620())
			{
				case 0:
					if (func_100())
					{
						func_99(1);
					}
					break;
				
				case 1:
					if (Local_149.f_8 == 6)
					{
						func_99(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_130, 1000, 0))
					{
						func_99(3);
					}
					break;
				
				case 3:
					func_659();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)//Position - 0x195
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_2(uParam0, bParam2, 0);
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

void func_2(var uParam0, bool bParam1, bool bParam2)//Position - 0x1F3
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

void func_3()//Position - 0x238
{
	if (func_33(2, 0, 0, 0, 0))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_149.f_2, 2))
		{
			Local_149.f_1 = HUD::_0x13C4B962653A5280();
			MISC::SET_BIT(&(Local_149.f_2), 2);
		}
	}
	switch (Local_149.f_8)
	{
		case 0:
			if (func_32())
			{
				if (func_24())
				{
					func_23(1);
				}
			}
			else
			{
				func_23(1);
			}
			break;
		
		case 1:
			if (func_1(&(Local_149.f_29B), Global_40001.f_2AF9, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_149.f_2, 2))
			{
				func_23(2);
			}
			func_24();
			break;
		
		case 2:
			Local_149.f_9 = HUD::_0x13C4B962653A5280();
			func_23(3);
			break;
		
		case 3:
			if ((func_22() || func_1(&(Local_149.f_295), Global_40001.f_2AF8, 0)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_149.f_2, 2))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_149.f_2, 1) && func_21())
				{
					func_20(&(Local_149.f_295), 0, 0);
					MISC::SET_BIT(&(Local_149.f_2), 1);
				}
				else
				{
					func_23(4);
					Local_149.f_1 = HUD::_0x13C4B962653A5280();
				}
			}
			func_8();
			iLocal_111++;
			if (iLocal_111 >= Local_149.f_2C5)
			{
				iLocal_111 = 0;
			}
			func_24();
			break;
		
		case 4:
			if (func_1(&(Local_149.f_297), 20000, 0) || func_5())
			{
				if (func_32())
				{
					func_20(&(Local_149.f_29D), 0, 0);
					func_23(5);
				}
				else
				{
					func_23(6);
				}
			}
			func_24();
			break;
		
		case 5:
			if (func_4())
			{
				func_23(6);
			}
			break;
		
		case 6:
			break;
	}
}

int func_4()//Position - 0x3E4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_149.f_2D9[iVar0 /*2*/].f_1) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_149.f_2D9[iVar0 /*2*/].f_1), 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_5()//Position - 0x432
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (!func_6(iVar1))
			{
				if ((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_1516[iVar0 /*5*/].f_2, 0) || Local_1516[iVar0 /*5*/].f_3 != 6) || (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_149.f_2, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_1516[iVar0 /*5*/].f_2, 1)))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_6(int iParam0)//Position - 0x4BE
{
	if (func_7(iParam0))
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 8);
}

bool func_7(int iParam0)//Position - 0x4E4
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 2);
}

void func_8()//Position - 0x4FC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 0;
	while (iVar2 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
		{
			MISC::SET_BIT(&iVar3, iVar2);
		}
		else
		{
			func_19(iVar2);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar3, iVar2))
		{
			if (func_18(iVar2))
			{
				iVar1++;
			}
			iVar0++;
			func_15(iVar2);
			func_9(iVar2);
			MISC::SET_BIT(&(Local_149.f_2A1), iVar2);
		}
		iVar2++;
	}
	if (iVar0 > Local_149.f_2D7)
	{
		Local_149.f_2D7 = iVar0;
	}
	else
	{
		Local_149.f_2D6 = (Local_149.f_2D7 - iVar0);
	}
	if (iVar1 > Local_149.f_2D8)
	{
		Local_149.f_2D8 = iVar1;
	}
}

void func_9(int iParam0)//Position - 0x5BC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Local_1516[iParam0 /*5*/].f_4;
	iVar2 = 4294967294;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (Local_149.f_2A2[iVar1] == iParam0)
		{
			iVar1 = 32;
		}
		else if (iVar2 >= 4294967295)
		{
			if (iVar2 >= 0)
			{
				func_14(&(Local_149.f_2A2[iVar1]), &iVar2);
			}
		}
		else if (Local_149.f_2A2[iVar1] < 0 || iVar0 > Local_1516[Local_149.f_2A2[iVar1] /*5*/].f_4)
		{
			iVar2 = Local_149.f_2A2[iVar1];
			if (iVar0 != 0)
			{
				func_10(Local_149.f_2A2[iVar1], iParam0, iVar1);
			}
			Local_149.f_2A2[iVar1] = iParam0;
			iVar3 = iVar1 + 1;
			while (iVar3 <= 31)
			{
				if (Local_149.f_2A2[iVar3] == iParam0)
				{
					Local_149.f_2A2[iVar3] = 4294967295;
				}
				iVar3++;
			}
		}
		iVar1++;
	}
}

void func_10(var uParam0, int iParam1, int iParam2)//Position - 0x6A5
{
	struct<14> Var0;
	int iVar1;
	
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
	if (iParam2 == 0)
	{
		Var0.f_2 = 1826587727;
		Var0.f_A = iVar1;
		func_11(Var0, func_12(1));
	}
}

void func_11(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x6DC
{
	Param0 = 713068249;
	Param0.f_1 = CAM::_0xDC9DA9E8789F5246();
	if (!iParam13 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_12(int iParam0)//Position - 0x709
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_13(iVar2, 0, 0))
			{
				if (iVar2 != CAM::_0xDC9DA9E8789F5246() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_13(int iParam0, bool bParam1, bool bParam2)//Position - 0x766
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

void func_14(var uParam0, int iParam1)//Position - 0x7B0
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_15(int iParam0)//Position - 0x7D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
	iVar0 = iVar3;
	if (Global_26862F.f_127B.f_26[iVar0] >= 0)
	{
		iVar4 = Global_26862F.f_127B.f_26[iVar0];
		iVar1 = Global_26862F.f_127B.f_5[iVar0];
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_149.f_3[func_17(iVar4)], func_16(iVar4)))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_127B[func_17(iVar4)], func_16(iVar4)))
			{
				if (func_1(&uLocal_128, 750, 0))
				{
					if (iVar1 != 0)
					{
						if (iVar1 < iVar2 || iVar2 == 0)
						{
							iVar2 = iVar1;
							Local_149.f_A[iVar4 /*5*/].f_3 = iParam0;
							Global_26862F.f_127B.f_26[iVar0] = 4294967295;
							MISC::SET_BIT(&(Local_149.f_3[func_17(iVar4)]), func_16(iVar4));
							Local_149.f_2C4 = (Local_149.f_2C4 - 1);
						}
					}
				}
			}
		}
	}
}

int func_16(int iParam0)//Position - 0x8BE
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_17(iParam0) * 31);
}

int func_17(int iParam0)//Position - 0x8EF
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_18(int iParam0)//Position - 0x915
{
	if (iParam0 >= 0 && iParam0 < 32)
	{
		return Local_1516[iParam0 /*5*/].f_4 > 0;
	}
	return 0;
}

void func_19(int iParam0)//Position - 0x93D
{
	int iVar0;
	int iVar1;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_149.f_2A1, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_149.f_2A2[iVar0] == iParam0)
			{
				Local_149.f_2A2[iVar0] = 4294967295;
				iVar0 = 32;
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_149.f_2C5)
		{
			if (Local_149.f_A[iVar1 /*5*/].f_3 == iParam0)
			{
				Local_149.f_A[iVar1 /*5*/].f_3 = 4294967295;
			}
			iVar1++;
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&(Local_149.f_2A1), iParam0);
	}
}

void func_20(var uParam0, bool bParam1, bool bParam2)//Position - 0x9C4
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

int func_21()//Position - 0xA01
{
	return 0;
}

int func_22()//Position - 0xA0A
{
	if (Local_149.f_2C4 > 0)
	{
		return 0;
	}
	if (func_1(&(Local_149.f_29F), 750, 0))
	{
		MISC::SET_BIT(&(Local_149.f_2), 0);
		return 1;
	}
	return 0;
}

void func_23(int iParam0)//Position - 0xA40
{
	Local_149.f_8 = iParam0;
}

int func_24()//Position - 0xA4F
{
	struct<2> Var0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	
	if (func_32())
	{
		Var0 = { Local_149.f_2D9[iLocal_113 /*2*/] };
		if (func_31(Var0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1))
			{
				if (func_30(iLocal_113, &vVar1, &fVar2))
				{
					Local_149.f_2C9[iLocal_113] = func_27(iLocal_113);
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_1516[Local_149.f_2C9[iLocal_113] /*5*/].f_1, iLocal_113))
					{
						if (func_26(&(Local_149.f_2D9[iLocal_113 /*2*/].f_1), Var0, vVar1, fVar2, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_149.f_2D9[iLocal_113 /*2*/].f_1), 1);
							ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_149.f_2D9[iLocal_113 /*2*/].f_1), 1);
							VEHICLE::_0x0AD9E8F87FF7C16F(NETWORK::NET_TO_VEH(Local_149.f_2D9[iLocal_113 /*2*/].f_1), 0);
							func_25(NETWORK::NET_TO_VEH(Local_149.f_2D9[iLocal_113 /*2*/].f_1), 1);
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
							{
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_149.f_2D9[iLocal_113 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
							{
								if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_149.f_2D9[iLocal_113 /*2*/].f_1), "MPBitset"))
								{
									iVar3 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_149.f_2D9[iLocal_113 /*2*/].f_1), "MPBitset");
								}
								MISC::SET_BIT(&iVar3, 10);
								MISC::SET_BIT(&iVar3, 11);
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_149.f_2D9[iLocal_113 /*2*/].f_1), "MPBitset", iVar3);
							}
							Local_149.f_2C9[iLocal_113] = 4294967295;
						}
					}
				}
			}
			iLocal_113++;
			if (iLocal_113 >= 10)
			{
				iLocal_113 = 0;
				return 1;
			}
		}
		return 0;
	}
	return 1;
}

void func_25(int iParam0, bool bParam1)//Position - 0xBE4
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, 13);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, 13);
		}
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

int func_26(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0xC32
{
	float fVar0;
	int iVar1;
	
	if (!NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("BOMBUSHKA"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = unk_0xD3495809C4827891(iVar1);
		Global_26862F.f_1822 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam13)
			{
				unk_0x03C1DBD85D4F7482(iVar1, 1);
			}
			ENTITY::_SET_ENTITY_SOMETHING(iVar1, iParam8);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam6)
				{
					unk_0xF2A50F5F6E7737D8(*uParam0, 1);
				}
				else
				{
					unk_0xF2A50F5F6E7737D8(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0xE106CB3E79DC85D6(*uParam0, CAM::_0xDC9DA9E8789F5246(), 1);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam7);
			unk_0x9E9094D4A850A6F4(iVar1, 1);
			if (bParam10)
			{
				unk_0x64B0385195B407FC(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)//Position - 0xD2C
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	var uVar5;
	int iVar6;
	
	fVar2 = 1000000f;
	if (func_30(iParam0, &vVar4, &uVar5))
	{
		iVar0 = 0;
		while (iVar0 <= (NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				if (func_13(iVar6, 1, 1))
				{
					fVar3 = func_28(func_29(iVar6), vVar4);
					if (fVar3 < fVar2)
					{
						fVar2 = fVar3;
						iVar1 = iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

float func_28(vector3 vParam0, vector3 vParam1)//Position - 0xDA5
{
	vParam0.z = 0f;
	vParam1.z = 0f;
	return SYSTEM::VDIST(vParam0, vParam1);
}

Vector3 func_29(int iParam0)//Position - 0xDC3
{
	return unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_30(int iParam0, var uParam1, var uParam2)//Position - 0xDD6
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1729.582f, -2943.77f, 12.9443f };
			*uParam2 = 300.078f;
			break;
		
		case 1:
			*uParam1 = { 677.2984f, 769.7758f, 204.6846f };
			*uParam2 = 82.8903f;
			break;
		
		case 2:
			*uParam1 = { 1073.972f, 3003.889f, 40.5508f };
			*uParam2 = 333.2717f;
			break;
		
		case 3:
			*uParam1 = { 1928.635f, 4702.327f, 40.1958f };
			*uParam2 = 327.9112f;
			break;
		
		case 4:
			*uParam1 = { 1278.65f, 6579.366f, 1.505f };
			*uParam2 = 84.26f;
			break;
		
		case 5:
			*uParam1 = { -1700.407f, -829.8932f, 8.2542f };
			*uParam2 = 70.1811f;
			break;
		
		case 6:
			*uParam1 = { -2733.589f, 2925.563f, 1.2152f };
			*uParam2 = 176.5378f;
			break;
		
		case 7:
			*uParam1 = { 1493.418f, -2442.99f, 64.9693f };
			*uParam2 = 52.9918f;
			break;
		
		case 8:
			*uParam1 = { 569.0449f, -772.5692f, 10.4088f };
			*uParam2 = 179.3501f;
			break;
		
		case 9:
			*uParam1 = { -905.1526f, 5548.172f, 5.5251f };
			*uParam2 = 95.8361f;
			break;
		
		default:
			return 0;
	}
	return 1;
}

bool func_31(int iParam0)//Position - 0xF52
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_32()//Position - 0xF70
{
	return Local_149.f_2C3;
}

int func_33(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0xF7E
{
	if (func_98(CAM::_0xDC9DA9E8789F5246(), 0) || func_95(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if (func_94(CAM::_0xDC9DA9E8789F5246()) || func_92(CAM::_0xDC9DA9E8789F5246()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::_0xCF61D4B4702EE9EB() < iParam0)
	{
		if (bParam2)
		{
			func_41(sParam3, sParam4, 1);
		}
		if (func_40(26, 4294967295))
		{
			func_37(26, 4294967295);
		}
		return 1;
	}
	if (func_36(&(Global_1806E7.f_12)))
	{
		if (!func_1(&(Global_1806E7.f_12), 7500, 0))
		{
			return 0;
		}
		func_35(&(Global_1806E7.f_12));
	}
	if (func_34())
	{
		if (bParam2)
		{
			func_41(sParam3, sParam4, 0);
		}
		if (func_40(26, 4294967295))
		{
			func_37(26, 4294967295);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_41(sParam3, sParam4, 1);
		}
		if (func_40(26, 4294967295))
		{
			func_37(26, 4294967295);
		}
		return 1;
	}
	return 0;
}

bool func_34()//Position - 0x1075
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 0);
}

void func_35(var uParam0)//Position - 0x1088
{
	uParam0->f_1 = 0;
}

bool func_36(var uParam0)//Position - 0x1095
{
	return uParam0->f_1;
}

void func_37(int iParam0, int iParam1)//Position - 0x10A1
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_39();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_38(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, iParam0))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_38(int iParam0)//Position - 0x10FD
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_39();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

int func_39()//Position - 0x1160
{
	return Global_1407E0;
}

bool func_40(int iParam0, int iParam1)//Position - 0x116C
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_39();
	}
	iVar0 = func_38(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar1, iParam0);
}

void func_41(char* sParam0, char* sParam1, bool bParam2)//Position - 0x1198
{
	if ((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 2) && !func_7(CAM::_0xDC9DA9E8789F5246())) && !func_6(CAM::_0xDC9DA9E8789F5246()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_42(66, sParam0, sParam1, 1, 4294967295, 2, 1);
		MISC::SET_BIT(&(Global_1806E7.f_1), 2);
	}
}

int func_42(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x120E
{
	struct<80> Var0;
	
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 3212836864;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = 4294967295;
	func_91(iParam0, &Var0, 4294967295, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	return func_43(&Var0);
}

int func_43(var uParam0)//Position - 0x127E
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_252F9E.f_BD2)
		{
			return 0;
		}
	}
	func_57(uParam0, uParam0->f_11);
	func_54(uParam0);
	if (func_53())
	{
		func_54(uParam0);
	}
	if (func_52(uParam0->f_1))
	{
		func_45();
		if (Global_252F9E.f_A90[0 /*80*/].f_2 == 0)
		{
			Global_252F9E.f_A90[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_252F9E.f_A90[0 /*80*/].f_1 == 13 || Global_252F9E.f_A90[0 /*80*/].f_1 == 53) || Global_252F9E.f_A90[0 /*80*/].f_1 == 54) || Global_252F9E.f_A90[0 /*80*/].f_1 == 58)
		{
			Global_252F9E.f_A90[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_252F9E.f_A90[iVar0 + 1 /*80*/] = { Global_252F9E.f_A90[iVar0 /*80*/] };
			iVar0 = (iVar0 + 4294967295);
		}
		Global_252F9E.f_A90[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_252F9E.f_A90[iVar0 /*80*/].f_2 == 0)
		{
			Global_252F9E.f_A90[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_45();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				MISC::SET_BIT(&(Global_252F9E.f_A90[iVar0 /*80*/].f_45), 1);
				Global_252F9E.f_A90[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_45, 7))
			{
				if (func_44(Global_252F9E.f_A90[iVar0 /*80*/].f_1))
				{
					Global_252F9E.f_A90[iVar0 /*80*/].f_2 = 5;
					MISC::SET_BIT(&(Global_252F9E.f_A90[iVar0 /*80*/].f_45), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0)//Position - 0x144F
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

void func_45()//Position - 0x14CF
{
	bool bVar0;
	
	if (Global_252F9E.f_BD3)
	{
		return;
	}
	if (!Global_11731)
	{
		Global_11731 = 1;
		bVar0 = true;
	}
	func_46();
	if (bVar0)
	{
		Global_11731 = 0;
	}
}

void func_46()//Position - 0x1502
{
	Global_252F9E.f_BD4 = 0;
	Global_252F9E.f_BD4.f_242 = 0;
	func_50(&(Global_252F9E.f_BD4.f_1));
	Global_252F9E.f_BD4.f_1.f_1 = 0;
	func_47(&(Global_252F9E.f_BD4.f_1));
}

void func_47(var uParam0)//Position - 0x1543
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
		SCRIPT::SET_NO_LOADING_SCREEN(0);
		uParam0->f_234 = 0;
	}
	if (!Global_11731)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_11732)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_49(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_48(0);
}

void func_48(int iParam0)//Position - 0x15E9
{
	Global_11729 = iParam0;
	Global_1172A = iParam0;
}

bool func_49(bool bParam0)//Position - 0x15FD
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

void func_50(var uParam0)//Position - 0x1628
{
	func_51(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

void func_51(var uParam0)//Position - 0x1652
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

int func_52(int iParam0)//Position - 0x16D1
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

bool func_53()//Position - 0x17D3
{
	return Global_255C02.f_10;
}

void func_54(var uParam0)//Position - 0x17E1
{
	if (func_56(uParam0->f_1))
	{
		uParam0->f_48 = func_55();
	}
}

int func_55()//Position - 0x17FC
{
	return 21;
}

int func_56(int iParam0)//Position - 0x1806
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_57(var uParam0, int iParam1)//Position - 0x1898
{
	if (func_56(uParam0->f_1))
	{
		uParam0->f_49 = 1;
	}
	if (iParam1 == func_90() || !func_13(iParam1, 0, 1))
	{
		return;
	}
	if (func_44(uParam0->f_1))
	{
		if (uParam0->f_47 == 1)
		{
			uParam0->f_49 = func_58(iParam1, 4294967294, 0, 0, 0);
		}
	}
}

int func_58(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x18EF
{
	int iVar0;
	int iVar1;
	
	if (func_86(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == 4294967294)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > 4294967295 && iVar0 < 4)
		{
			if (Global_440000.f_1EBA3[iVar0] != 4294967295)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_86(CAM::_0xDC9DA9E8789F5246()) || (func_85() && func_84())) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11E1, 31)) && !bParam4)
	{
		iVar1 = func_83();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != 4294967295)
				{
					if (func_13(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_440000.f_1EBA3[iParam1] != 4294967295)
							{
								return func_81(iParam1, iParam0, 0);
							}
							else
							{
								return func_69(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_69(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_440000.f_1EBA3[iParam1] != 4294967295)
				{
					return func_81(iParam1, iParam0, 0);
				}
				else
				{
					return func_59(0, 4294967295, 0);
				}
			}
			else
			{
				return func_59(0, 4294967295, 0);
			}
		}
	}
	if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_440000.f_1EBA3[iParam1] != 4294967295)
		{
			return func_81(iParam1, iParam0, 0);
		}
		else
		{
			return func_69(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
		}
	}
	return func_69(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
}

int func_59(bool bParam0, int iParam1, bool bParam2)//Position - 0x1ACF
{
	return func_60(CAM::_0xDC9DA9E8789F5246(), bParam0, iParam1, bParam2);
}

int func_60(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1AE5
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (func_67() && Global_150AAC.f_1)
	{
		if (bParam1)
		{
			return func_66(iParam2, iVar0);
		}
		else
		{
			return func_66(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 4294967295)
		{
			if (func_65(iVar0, iParam2, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_64(1);
				}
				else
				{
					return func_64(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 20))
			{
				return func_61(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_61(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == 4294967295)
	{
		return func_64(1);
	}
	return func_64(0);
}

int func_61(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1BD9
{
	int iVar0;
	
	iVar0 = func_63(iParam0, iParam1, iParam3);
	if (func_62(Global_440000.f_1FEDE, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_62(int iParam0, bool bParam1)//Position - 0x1CF1
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_440000.f_2559E == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_40001.f_22CA[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0, int iParam1, int iParam2)//Position - 0x1D42
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_65(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_64(bool bParam0)//Position - 0x1D89
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_65(int iParam0, int iParam1, int iParam2)//Position - 0x1DA0
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > 4294967295 && iParam1 > 4294967295) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 0);
				
				case 1:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 1);
				
				case 2:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 2);
				
				case 3:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 4);
				
				case 1:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 5);
				
				case 2:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 6);
				
				case 3:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 8);
				
				case 1:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 9);
				
				case 2:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 10);
				
				case 3:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 12);
				
				case 1:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 13);
				
				case 2:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 14);
				
				case 3:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_66(int iParam0, int iParam1)//Position - 0x1F6B
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_63(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_67()//Position - 0x1FB9
{
	if (func_68() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

bool func_68()//Position - 0x1FD6
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_23D58, 12);
}

int func_69(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1FEE
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == 4294967294)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > 4294967295)
	{
		if (Global_1841F3[iVar2 /*790*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != 4294967295)
		{
			if (func_78(1))
			{
				iVar3 = func_74(iParam0);
				if (!iVar3 == 4294967295)
				{
					return func_72(iVar3);
				}
			}
			if ((func_71(iParam1, iParam0, iVar0, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)) || ((func_65(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 23)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)))
			{
				return func_64(1);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26))
			{
				return func_70(1);
			}
			else
			{
				return func_60(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1805F9 || Global_1805F0) || Global_1841F3[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1805F9 == 1 && Global_180603 == 0))
			{
				return func_64(1);
			}
			else
			{
				return func_60(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1805F4 && Global_1803FE.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_74(iParam0);
	if (!iVar4 == 4294967295)
	{
		return func_72(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_70(bool bParam0)//Position - 0x2192
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_71(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x21A9
{
	if (iParam2 == 4294967294)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == 4294967295 && PLAYER::GET_PLAYER_TEAM(iParam1) == 4294967295)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == 4294967295 && iParam2 == 4294967295)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_72(int iParam0)//Position - 0x2221
{
	int iVar0;
	
	if (iParam0 > 4294967295)
	{
		iVar0 = func_73(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_73(int iParam0)//Position - 0x22E4
{
	return Global_24E392.f_817.f_2C[iParam0 /*2*/].f_1;
}

int func_74(int iParam0)//Position - 0x22FB
{
	if (!iParam0 == func_90())
	{
		if (func_76(iParam0, 1))
		{
			return Global_24E392.f_817.f_B[func_75(iParam0)];
		}
	}
	return 4294967295;
}

int func_75(int iParam0)//Position - 0x232D
{
	if (iParam0 != func_90())
	{
		return Global_18CD5B[iParam0 /*560*/].f_B;
	}
	return func_90();
}

bool func_76(int iParam0, bool bParam1)//Position - 0x2350
{
	if (!bParam1)
	{
		if (func_77(iParam0))
		{
			return 0;
		}
	}
	return Global_18CD5B[iParam0 /*560*/].f_B != func_90();
}

int func_77(int iParam0)//Position - 0x237B
{
	if (iParam0 != func_90())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_90())
		{
			return Global_18CD5B[iParam0 /*560*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_78(int iParam0)//Position - 0x23B0
{
	if ((func_80() || func_79()) || (func_53() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_79()//Position - 0x23DF
{
	return Global_255C02.f_F;
}

var func_80()//Position - 0x23ED
{
	return Global_255C02.f_E;
}

int func_81(int iParam0, int iParam1, bool bParam2)//Position - 0x23FB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC93F.f_D[iParam0];
	if (func_78(1))
	{
		iVar2 = func_74(iParam1);
		if (!iVar2 == 4294967295)
		{
			return func_72(iVar2);
		}
	}
	if (iVar1 > 4294967295 && iVar1 < 17)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_68[iParam0 /*10693*/].f_159C[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > 4294967295 && iParam1 != func_90())
	{
		if (Global_440000.f_1EBA3[iParam0] != 4294967295 && Global_440000.f_1EBA3[iParam0] <= 4)
		{
			if (Global_440000.f_1EBA3[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_440000.f_1EBA3[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_440000.f_1EBA3[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_440000.f_1EBA3[iParam0] == 4)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_440000.f_1EBA3[iParam0];
			}
		}
		else
		{
			iVar0 = func_60(iParam1, !bParam2, iParam0, 0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_15, 13))
		{
			iVar0 = func_82(iParam0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_18, 29))
		{
			iVar0 = 0;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26) && !func_65(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_70(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_82(int iParam0)//Position - 0x2589
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_440000.f_255C9;
			break;
		
		case 1:
			iVar0 = Global_440000.f_255CA;
			break;
		
		case 2:
			iVar0 = Global_440000.f_255CB;
			break;
		
		case 3:
			iVar0 = Global_440000.f_255CC;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_83()//Position - 0x265E
{
	return Global_240006.f_2;
}

bool func_84()//Position - 0x266C
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 4);
}

bool func_85()//Position - 0x267D
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 14);
}

int func_86(int iParam0)//Position - 0x269A
{
	if (func_88(iParam0, 0))
	{
		return 1;
	}
	if (func_87())
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

bool func_87()//Position - 0x26DC
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

bool func_88(int iParam0, int iParam1)//Position - 0x26ED
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_89(4294967295, 0) == 8;
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

int func_89(int iParam0, bool bParam1)//Position - 0x2738
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_39();
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

int func_90()//Position - 0x2779
{
	return 4294967295;
}

void func_91(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x2782
{
	uParam1->f_11 = func_90();
	uParam1->f_12 = func_90();
	uParam1->f_13 = func_90();
	uParam1->f_14 = func_90();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_15), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_10 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_47 = 1;
	uParam1->f_4A = 1;
	uParam1->f_4B = 1;
	uParam1->f_4C = 0;
	uParam1->f_4D = 0;
	uParam1->f_49 = 0;
	StringCopy(&(uParam1->f_19), "", 64);
	StringCopy(&(uParam1->f_29), "", 64);
}

bool func_92(int iParam0)//Position - 0x2800
{
	return func_93(iParam0, 20);
}

bool func_93(int iParam0, int iParam1)//Position - 0x2810
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_B.f_4, iParam1);
}

int func_94(int iParam0)//Position - 0x282B
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return func_93(iParam0, 9);
	}
	return 0;
}

int func_95(int iParam0, int iParam1)//Position - 0x2849
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 && func_96(Global_18CD5B[iParam0 /*560*/].f_B.f_21))
	{
		return 1;
	}
	if (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295)
	{
		if (func_96(Global_18CD5B[iParam0 /*560*/].f_B.f_20))
		{
			return 1;
		}
	}
	return 0;
}

int func_96(int iParam0)//Position - 0x28AF
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_97(iParam0, 0);
	return 0;
}

int func_97(int iParam0, int iParam1)//Position - 0x2909
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_98(int iParam0, int iParam1)//Position - 0x295E
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 || (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295))
	{
		return 1;
	}
	return 0;
}

void func_99(int iParam0)//Position - 0x2999
{
	Local_149 = iParam0;
}

int func_100()//Position - 0x29A6
{
	int iVar0;
	
	if (func_1(&(Local_149.f_299), 750, 0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_149.f_2A2[iVar0] = 4294967295;
			iVar0++;
		}
		func_35(&(Local_149.f_295));
		func_103();
		if (func_32())
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				Local_149.f_2C9[iVar0] = func_27(iVar0);
				iVar0++;
			}
			func_101();
		}
		return 1;
	}
	return 0;
}

void func_101()//Position - 0x2A1E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Local_149.f_2D9[iVar0 /*2*/] = func_102();
		iVar0++;
	}
}

int func_102()//Position - 0x2A47
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("MAVERICK");
		
		case 1:
			return joaat("MAMMATUS");
		
		default:
	}
	return 0;
}

void func_103()//Position - 0x2A7B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Local_149.f_2C5 = func_116();
	Local_149.f_2C4 = Local_149.f_2C5;
	Local_149.f_2C8 = func_112();
	Local_149.f_2C3 = func_109();
	iVar0 = func_108();
	if (Local_149.f_2C3)
	{
		iVar1 = 1;
	}
	func_105(func_107(132, Local_149.f_2C8, iVar1, 0));
	if (Local_149.f_2C8 == 1 && !Local_149.f_2C3)
	{
		Local_149.f_2C6 = 1;
	}
	iVar2 = 0;
	while (iVar2 < Local_149.f_2C5)
	{
		Local_149.f_A[iVar2 /*5*/].f_4 = iVar2;
		Local_149.f_A[iVar2 /*5*/] = { func_104(Local_149.f_2C8, Local_149.f_2C3, iVar0, iVar2) };
		iVar2++;
	}
}

Vector3 func_104(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2B33
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 623.5349f, 1614.651f, 283.748f;
							
							case 1:
								return 742.6324f, 1271.099f, 388.9925f;
							
							case 2:
								return 682.1757f, 1204.295f, 350.0934f;
							
							case 3:
								return 1779.28f, 668.7821f, 276.3788f;
							
							case 4:
								return 1927.214f, 129.7589f, 174.4281f;
							
							case 5:
								return 1056.943f, -699.1728f, 78.8831f;
							
							case 6:
								return 2026.536f, -1594.874f, 262.0831f;
							
							case 7:
								return 2139.424f, -2613.58f, 20.5914f;
							
							case 8:
								return 1041.685f, -2882.901f, 27.0959f;
							
							case 9:
								return 796.1402f, -2624.645f, 95.127f;
							
							case 10:
								return 504.6169f, -3311.801f, 22.9858f;
							
							case 11:
								return 416.9175f, -2684.419f, 10.1246f;
							
							case 12:
								return 561.767f, -2100.675f, 60.143f;
							
							case 13:
								return 872.454f, -1929.237f, 104.4083f;
							
							case 14:
								return 636.6328f, -1429.945f, 15.5f;
							
							case 15:
								return 591.386f, -852.2912f, 50.7211f;
							
							case 16:
								return 471.2209f, -102.4007f, 149.7505f;
							
							case 17:
								return 533.762f, 143.6576f, 125.7511f;
							
							case 18:
								return 1112.19f, 74.8892f, 117.7713f;
							
							case 19:
								return 683.9346f, 570.1795f, 165.7115f;
							
							case 20:
								return 1453.832f, 1113.675f, 134.9644f;
							
							case 21:
								return 1539.314f, 1716.172f, 125.0574f;
							
							case 22:
								return 1875.192f, 1698.918f, 109.9103f;
							
							case 23:
								return 2320.32f, 1669.402f, 86.7663f;
							
							case 24:
								return 2337.891f, 1358.536f, 100.8737f;
							
							case 25:
								return 2727.786f, 1558.729f, 83.66f;
							
							case 26:
								return 3112.177f, 1153.66f, 25.3827f;
							
							case 27:
								return 2580.817f, 476.8322f, 121.7549f;
							
							case 28:
								return 2458.7f, -384.0464f, 127.5513f;
							
							case 29:
								return 2381.206f, -939.2949f, 185.6516f;
							
							case 30:
								return 1669.294f, -1652.948f, 154.2478f;
							
							case 31:
								return 1096.793f, -1141.693f, 96.1055f;
							
							case 32:
								return 3042.9f, -291.4662f, 22.8304f;
							
							case 33:
								return 2645.351f, -1492.043f, 30.646f;
							
							case 34:
								return 1214.374f, -2353.274f, 66.8f;
							
							case 35:
								return 1841.616f, -2497.971f, 101.8039f;
							
							case 36:
								return 1872.035f, -761.149f, 105f;
							
							case 37:
								return 1657.665f, -413.7629f, 228.448f;
							
							case 38:
								return 1589.229f, -1981.901f, 161.2293f;
							
							case 39:
								return 991.7729f, -1477.064f, 60.0276f;
							
							case 40:
								return 2609.912f, -2096.358f, 35.0044f;
							
							case 41:
								return 1121.19f, 725.4341f, 170.3273f;
							
							case 42:
								return 2117.316f, 1024.085f, 197f;
							
							case 43:
								return 727.6708f, -452.6442f, 25f;
							
							case 44:
								return 1211.964f, -3285.54f, 19.5936f;
							
							case 45:
								return 1499.883f, -1276.207f, 131.5493f;
							
							case 46:
								return 3381.442f, -826.2608f, 42.8967f;
							
							case 47:
								return 1562.097f, 292.1506f, 494.2574f;
							
							case 48:
								return 2021.578f, -1993.689f, 120f;
							
							case 49:
								return 757.5558f, -1196.363f, 232.0553f;
							
							case 50:
								return 1887.774f, -3474.97f, 77.8727f;
							
							case 51:
								return 1083.224f, -229.6182f, 68.6364f;
							
							case 52:
								return 2344.084f, -406.1672f, 91f;
							
							case 53:
								return 2184.821f, 529.1252f, 241.1723f;
							
							case 54:
								return 1251.541f, -1883.809f, 50f;
							
							case 55:
								return 847.74f, 1781.903f, 160.9508f;
							
							case 56:
								return 288.3698f, -1601.346f, 52f;
							
							case 57:
								return 2648.131f, -731.5316f, 99.7f;
							
							case 58:
								return 1937.117f, 1337.446f, 529.8608f;
							
							case 59:
								return 1512.681f, -2539.276f, 208.3091f;
							
							case 60:
								return 2352.986f, -1763.908f, 136.1568f;
							
							case 61:
								return 2099.732f, -1212.728f, 178.3343f;
							
							case 62:
								return 1945.16f, -957.8221f, 96.04f;
							
							case 63:
								return 1872.81f, -830.1746f, 171.44f;
							
							case 64:
								return 1256.392f, -1571.629f, 90.566f;
							
							case 65:
								return 1818.023f, -244.6768f, 305.9837f;
							
							case 66:
								return 2839.051f, -748.0399f, 21.5008f;
							
							case 67:
								return 1268.646f, -2126.072f, 60.6975f;
							
							case 68:
								return 1088.679f, -1982.82f, 84.1204f;
							
							case 69:
								return 1597.218f, -2817.042f, 19.0498f;
							
							case 70:
								return 356.3379f, -2319.226f, 67.6058f;
							
							case 71:
								return 692.5012f, -2330.583f, 60.7022f;
							
							case 72:
								return 1070.4f, -1835.148f, 100.8235f;
							
							case 73:
								return 478.3501f, -1682.318f, 59.7763f;
							
							case 74:
								return 845.2267f, -2186.32f, 46.5743f;
							
							case 75:
								return 2651.639f, -1230.85f, 40.5824f;
							
							case 76:
								return 461.851f, -1460.173f, 65.7889f;
							
							case 77:
								return 775.8362f, -852.0386f, 31f;
							
							case 78:
								return 913.9593f, -976.4005f, 81.0321f;
							
							case 79:
								return 970.9194f, -2510.112f, 64f;
							
							case 80:
								return 1096.666f, 1222.327f, 202.4859f;
							
							case 81:
								return 1978.543f, 690.4552f, 174.2517f;
							
							case 82:
								return 1571.993f, -36.6251f, 140.5239f;
							
							case 83:
								return 918.2688f, -675.462f, 76.6019f;
							
							case 84:
								return 798.097f, -1194.02f, 32f;
							
							case 85:
								return 382.4527f, -31.8431f, 143.6312f;
							
							case 86:
								return 672.1725f, -1745.012f, 16f;
							
							case 87:
								return 620.2905f, -588.2725f, 22.6129f;
							
							case 88:
								return 1204.318f, 196.6229f, 79.9329f;
							
							case 89:
								return 2028.402f, -2179.396f, 105.5733f;
							
							case 90:
								return 1131.183f, -2929.769f, 33.2799f;
							
							case 91:
								return 654.5255f, -2634.736f, 26.063f;
							
							case 92:
								return 757.272f, -30.6019f, 66.9464f;
							
							case 93:
								return 262.5532f, -1046.969f, 73.6448f;
							
							case 94:
								return 638.4819f, -1021f, 43.5236f;
							
							case 95:
								return 351.6616f, -2758.046f, 29.2267f;
							
							case 96:
								return 1613.985f, -2243.761f, 136f;
							
							case 97:
								return 2947.746f, 792.9475f, 45f;
							
							case 98:
								return 2608.733f, 822.9318f, 118.6201f;
							
							case 99:
								return 1357.208f, 674.4443f, 100f;
							
							case 100:
								return 978.4934f, -2073.071f, 1000f;
							
							case 101:
								return 2848.513f, -2701.795f, 547.5851f;
							
							case 102:
								return 2322.219f, -2129.611f, 13.6809f;
							
							case 103:
								return 1248.603f, -2675.042f, 145.6704f;
							
							case 104:
								return 2052.692f, -252.931f, 228.334f;
							
							case 105:
								return 2394.902f, 388.1578f, 194.5342f;
							
							case 106:
								return 3337.711f, 56.3844f, 764.684f;
							
							case 107:
								return 1573.049f, 1472.569f, 179.2061f;
							
							case 108:
								return 1898.354f, 1020.671f, 277.9648f;
							
							case 109:
								return 745.1586f, 232.868f, 177.0828f;
							
							case 110:
								return 1551.579f, -685.6392f, 126f;
							
							case 111:
								return 2734.234f, 61.798f, 25.1296f;
							
							case 112:
								return 2404.63f, -1485.806f, 86.3959f;
							
							case 113:
								return 3033.16f, 321.8385f, 908.0805f;
							
							case 114:
								return 1353.323f, 373.6808f, 184.937f;
							
							case 115:
								return 1317.262f, -737.488f, 125.2729f;
							
							case 116:
								return 1737.696f, -966.1904f, 119.8332f;
							
							case 117:
								return 923.2643f, 978.5736f, 605.3384f;
							
							case 118:
								return 2823.777f, -1483.905f, 26.8193f;
							
							case 119:
								return 1333.475f, -275.2598f, 1000f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 2360.429f, 1273.094f, 63.9814f;
							
							case 1:
								return 2545.422f, 342.8004f, 107.4641f;
							
							case 2:
								return 2483.171f, -363.0696f, 92.7352f;
							
							case 3:
								return 1491.835f, -1005.532f, 50.5682f;
							
							case 4:
								return 1078.853f, -688.3618f, 56.6151f;
							
							case 5:
								return 657.7627f, -1500.858f, 8.6817f;
							
							case 6:
								return 1216.266f, -2907.278f, 4.8661f;
							
							case 7:
								return 958.6841f, -3079.094f, 13.3327f;
							
							case 8:
								return 459.5267f, -2429.235f, 4.7518f;
							
							case 9:
								return 1130.214f, -2082.811f, 30.0089f;
							
							case 10:
								return 1506.701f, -2135.637f, 75.4567f;
							
							case 11:
								return 1759.277f, -1579.97f, 117.9f;
							
							case 12:
								return 2510.45f, -1219.332f, 1.89f;
							
							case 13:
								return 2855.604f, -1339.602f, 14.7183f;
							
							case 14:
								return 2826.41f, -743.3448f, 0.3071f;
							
							case 15:
								return 1236.599f, -83.0057f, 58.7636f;
							
							case 16:
								return 1660.534f, 0.3033f, 172.7744f;
							
							case 17:
								return 1917.608f, 301.6851f, 161.8848f;
							
							case 18:
								return 2145.003f, 146.688f, 224.1061f;
							
							case 19:
								return 1456.737f, 1111.848f, 113.334f;
							
							case 20:
								return 1135.62f, 58.6667f, 79.7561f;
							
							case 21:
								return 680.794f, 559.0409f, 128.0462f;
							
							case 22:
								return 716.7936f, 141.21f, 79.7545f;
							
							case 23:
								return 875.606f, -476.7556f, 29.0746f;
							
							case 24:
								return 536.7303f, -2817.502f, 5.0421f;
							
							case 25:
								return 984.1771f, -2410.686f, 29.4333f;
							
							case 26:
								return 863.2344f, -2151.808f, 29.4816f;
							
							case 27:
								return 1002.942f, -1918.75f, 30.1432f;
							
							case 28:
								return 1183.313f, -1550.946f, 38.5953f;
							
							case 29:
								return 694.0918f, 1283.059f, 359.296f;
							
							case 30:
								return 745.2003f, 1199.09f, 325.4016f;
							
							case 31:
								return 887.6219f, 873.548f, 178.5657f;
							
							case 32:
								return 1828.967f, 1571.725f, 99.7219f;
							
							case 33:
								return 2805.81f, 1676.1f, 23.5193f;
							
							case 34:
								return 1405.691f, -601.7893f, 73.3473f;
							
							case 35:
								return 1710.367f, -464.7253f, 169.8001f;
							
							case 36:
								return 1946.392f, 1331.992f, 160.1707f;
							
							case 37:
								return 2271.38f, 1711.949f, 67.0413f;
							
							case 38:
								return 2307.003f, -1750.421f, 133.7737f;
							
							case 39:
								return 2172.226f, -1069.367f, 176.0087f;
							
							case 40:
								return 595.0312f, -851.27f, 40.4327f;
							
							case 41:
								return 456.9577f, -752.8668f, 26.3578f;
							
							case 42:
								return 531.9203f, -1034.797f, 27.2597f;
							
							case 43:
								return 1289.908f, -3341.78f, 4.9016f;
							
							case 44:
								return 533.8767f, -1969.171f, 23.9846f;
							
							case 45:
								return 689.5218f, -1774.186f, 8.6f;
							
							case 46:
								return 848.6605f, -1211.77f, 30.3237f;
							
							case 47:
								return 1874.741f, -2202.331f, 166.2907f;
							
							case 48:
								return 1458.76f, -2623.696f, 47.69f;
							
							case 49:
								return 1538.907f, 784.3685f, 76.4501f;
							
							case 50:
								return 800.149f, -109.5107f, 79.533f;
							
							case 51:
								return 2687.09f, 889.5835f, 76.4359f;
							
							case 52:
								return 939.7744f, -1496.824f, 29.1156f;
							
							case 53:
								return 547.5936f, -455.3327f, 23.7304f;
							
							case 54:
								return 709.3f, -2285f, 33.8f;
							
							case 55:
								return 454.0637f, -2177.92f, 4.9177f;
							
							case 56:
								return 1468.104f, -1759.198f, 78.3022f;
							
							case 57:
								return 1239.343f, -1097.545f, 37.5256f;
							
							case 58:
								return 851.4936f, -956.856f, 25.2824f;
							
							case 59:
								return 512.4025f, 221.9917f, 103.7442f;
							
							case 60:
								return 1545.082f, 1701.081f, 108.769f;
							
							case 61:
								return 1188.11f, 1556.979f, 107.8028f;
							
							case 62:
								return 1033.948f, -273.4799f, 49.8443f;
							
							case 63:
								return 743.4129f, -591.6385f, 26.0061f;
							
							case 64:
								return 1975.484f, -749.9232f, 96.2513f;
							
							case 65:
								return 1968.117f, 708.8224f, 161.8571f;
							
							case 66:
								return 2296.027f, 1152.222f, 64.0942f;
							
							case 67:
								return 2474.09f, 1484.103f, 35.2029f;
							
							case 68:
								return 482.1839f, 664.4731f, 195.1235f;
							
							case 69:
								return 1505.106f, -1271.169f, 121.655f;
							
							case 70:
								return 1220.729f, -1865.861f, 37.4982f;
							
							case 71:
								return 476.6311f, -1283.433f, 28.5393f;
							
							case 72:
								return 952.6752f, -2248.219f, 29.5831f;
							
							case 73:
								return 1434.707f, -2315.042f, 65.927f;
							
							case 74:
								return 1882.254f, -1873.208f, 191.477f;
							
							case 75:
								return 2014.572f, -1591.406f, 249.303f;
							
							case 76:
								return 1969.748f, -992.8931f, 79.6204f;
							
							case 77:
								return 2267.432f, -331.317f, 92.9784f;
							
							case 78:
								return 1205.465f, 336.8802f, 80.9909f;
							
							case 79:
								return 531.8229f, -27.4548f, 69.6295f;
							
							case 80:
								return 304.7162f, 262.4799f, 104.337f;
							
							case 81:
								return 572.4857f, -2147.293f, 7.9233f;
							
							case 82:
								return 1223.13f, -2338.621f, 59.8673f;
							
							case 83:
								return 1747.151f, -2679.91f, 1.4587f;
							
							case 84:
								return 939.6769f, -1342.533f, 11.4778f;
							
							case 85:
								return 1435.646f, -1476.472f, 62.2245f;
							
							case 86:
								return 2273.048f, -539.2752f, 102.9436f;
							
							case 87:
								return 1522.075f, -381.5488f, 200.3996f;
							
							case 88:
								return 2778.579f, 1073.328f, 0.6607f;
							
							case 89:
								return 609.4634f, -1333.589f, 20.7017f;
							
							case 90:
								return 1360.928f, -946.584f, 55.9209f;
							
							case 91:
								return 1147.373f, -431.5072f, 65.9987f;
							
							case 92:
								return 2391.644f, -932.7006f, 151.3306f;
							
							case 93:
								return 2897.51f, -314.7418f, 17.1346f;
							
							case 94:
								return 2963.361f, 513.4398f, 35.0981f;
							
							case 95:
								return 2415.814f, 763.4792f, 124.8302f;
							
							case 96:
								return 2054.985f, 953.5229f, 218.5845f;
							
							case 97:
								return 1522.831f, 461.3894f, 224.2793f;
							
							case 98:
								return 1301.596f, 1445.471f, 98.4293f;
							
							case 99:
								return 1071.843f, -1841.304f, 36.3069f;
							
							case 100:
								return 1133.087f, -2602.795f, 17.3834f;
							
							case 101:
								return 484.4286f, -3064.647f, 5.084f;
							
							case 102:
								return 1610.912f, -2385.55f, 90.6982f;
							
							case 103:
								return 695.2822f, -2534.997f, 17.6967f;
							
							case 104:
								return 554.7129f, -1634.238f, 26.9479f;
							
							case 105:
								return 1723.686f, -1038.606f, 129.0783f;
							
							case 106:
								return 2637.012f, -1863.213f, 17.7764f;
							
							case 107:
								return 2638.077f, 1346.641f, 25.4338f;
							
							case 108:
								return 1910.663f, 29.3172f, 159.5f;
							
							case 109:
								return 2952.967f, 797.8872f, 0.1f;
							
							case 110:
								return 2937.12f, 1471.532f, 0f;
							
							case 111:
								return 2348.98f, -2281.005f, 0.1697f;
							
							case 112:
								return 2681.416f, -1560.354f, -0.0123f;
							
							case 113:
								return 2812.644f, -27.1503f, 0.7016f;
							
							case 114:
								return 3201.036f, -102.7169f, 0.2f;
							
							case 115:
								return 651.1428f, -3112.596f, 0.0233f;
							
							case 116:
								return 2313.423f, -2194.061f, 0.025f;
							
							case 117:
								return 3055.192f, 185.0506f, 0.4391f;
							
							case 118:
								return 2729.46f, -1073.702f, 0.6712f;
							
							case 119:
								return 1423.506f, -2790.912f, 0.7109f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -915.445f, -2520.007f, 58f;
							
							case 1:
								return -1343.719f, -3336.795f, 30.5601f;
							
							case 2:
								return -1336.239f, -3044.059f, 300.803f;
							
							case 3:
								return -1833.852f, -1191.057f, 41.1411f;
							
							case 4:
								return -1955.78f, 1776.57f, 195.8577f;
							
							case 5:
								return -2166.629f, 1607.567f, 260f;
							
							case 6:
								return -417.0685f, 1153.347f, 347.5894f;
							
							case 7:
								return -2503.341f, 754.9435f, 342.9515f;
							
							case 8:
								return -2626.127f, 136.1493f, 118.1611f;
							
							case 9:
								return -2246.804f, 266.7578f, 194.8923f;
							
							case 10:
								return -1364.038f, 56.9618f, 70.9416f;
							
							case 11:
								return -94.2512f, 880.448f, 265f;
							
							case 12:
								return -162.3738f, -999.6118f, 286.6717f;
							
							case 13:
								return 140.5345f, -698.5123f, 92.6658f;
							
							case 14:
								return -104.079f, -755.4847f, 59.1614f;
							
							case 15:
								return -284.6401f, -446.2669f, 91.5901f;
							
							case 16:
								return -795.1664f, -736.1061f, 78.6788f;
							
							case 17:
								return -971.361f, -1305.368f, 50f;
							
							case 18:
								return -1357.973f, -1476.396f, 40.9274f;
							
							case 19:
								return -2004.334f, -556.4324f, 20.3771f;
							
							case 20:
								return -1034.381f, 640.7464f, 163.7504f;
							
							case 21:
								return -1238.563f, -848.6133f, 89.7682f;
							
							case 22:
								return -1169.283f, -467.3812f, 69.0157f;
							
							case 23:
								return -324.4008f, -1968.694f, 71.7904f;
							
							case 24:
								return -269.9813f, -2425.728f, 95.05f;
							
							case 25:
								return 247.3292f, -3308.082f, 59.9012f;
							
							case 26:
								return 219.492f, -2318.923f, 43.917f;
							
							case 27:
								return 18.8233f, -1504f, 54.686f;
							
							case 28:
								return 8.9788f, 1715.057f, 249.4028f;
							
							case 29:
								return -667.7844f, 404.7751f, 125.5105f;
							
							case 30:
								return 216.2372f, 236.2603f, 125.7443f;
							
							case 31:
								return -3079.696f, 766.6476f, 33.988f;
							
							case 32:
								return -1105.589f, 1428.968f, 238.1016f;
							
							case 33:
								return -474.9906f, 1529.526f, 500.0109f;
							
							case 34:
								return -1621.841f, 929.212f, 193.8022f;
							
							case 35:
								return -767.9827f, -21.7202f, 69.0007f;
							
							case 36:
								return -472.9492f, -1444.143f, 92.8559f;
							
							case 37:
								return -1879.575f, -2634.001f, 11.491f;
							
							case 38:
								return -1459.734f, -2141.965f, 23.7189f;
							
							case 39:
								return -75.0934f, -818.6606f, 599.9617f;
							
							case 40:
								return -230.7478f, -241.4196f, 76.4557f;
							
							case 41:
								return -1608.013f, -537.3172f, 73.1431f;
							
							case 42:
								return -1806.964f, -125.5317f, 118.0094f;
							
							case 43:
								return -3170.222f, 1543.227f, 33.8091f;
							
							case 44:
								return -2753.087f, 1229.005f, 140.7239f;
							
							case 45:
								return -306.4009f, 202.0892f, 180.3099f;
							
							case 46:
								return 396.1246f, -1528.24f, 46.6041f;
							
							case 47:
								return 389.6704f, -356.0437f, 61.5436f;
							
							case 48:
								return 324.4086f, -988.9622f, 92.2799f;
							
							case 49:
								return -657.5551f, -1105.199f, 67.647f;
							
							case 50:
								return -439.2123f, -1003.071f, 58.7819f;
							
							case 51:
								return -208.3349f, -1800.983f, 12.0207f;
							
							case 52:
								return 104.7709f, -1940.293f, 33.3786f;
							
							case 53:
								return -80.1589f, 364.0139f, 180.4526f;
							
							case 54:
								return -1064.813f, 7.4781f, 69.6885f;
							
							case 55:
								return -1997.443f, 722.7387f, 175.1271f;
							
							case 56:
								return -254.3736f, -3074.535f, 75.4412f;
							
							case 57:
								return -830.1344f, -1880.055f, 33.9615f;
							
							case 58:
								return -2775.497f, -788.6588f, 36.447f;
							
							case 59:
								return 43.0406f, -413.7074f, 89.5811f;
							
							case 60:
								return -3209.421f, 1110.18f, 37.6606f;
							
							case 61:
								return -2256.718f, -339.6835f, 43.3005f;
							
							case 62:
								return -1957.094f, 1330.48f, 236.7105f;
							
							case 63:
								return -1030.221f, 996.1059f, 182.364f;
							
							case 64:
								return -1529.428f, 441.7661f, 134.8705f;
							
							case 65:
								return 145.6732f, 1154.994f, 253.3341f;
							
							case 66:
								return -520.5256f, 659.5372f, 177.0043f;
							
							case 67:
								return 18.1044f, 638.951f, 224.5906f;
							
							case 68:
								return 128.1127f, -27.8183f, 91.0755f;
							
							case 69:
								return -634.6116f, -367.6195f, 56.3093f;
							
							case 70:
								return -402.9568f, -655.0366f, 60.6586f;
							
							case 71:
								return -1034.505f, -1070.038f, 21.0905f;
							
							case 72:
								return -1013.909f, -1763.924f, 20.6112f;
							
							case 73:
								return -734.4069f, -1448.061f, 26.2766f;
							
							case 74:
								return -202.7723f, -1322.269f, 53.6863f;
							
							case 75:
								return 388.6693f, -1368.068f, 50.7767f;
							
							case 76:
								return -7.0116f, -2230.674f, 39.1959f;
							
							case 77:
								return 33.8391f, -2745.649f, 33.5782f;
							
							case 78:
								return -1100.793f, -2846.705f, 53.132f;
							
							case 79:
								return -1274.324f, -2448.849f, 99.9299f;
							
							case 80:
								return -473.7719f, -2675.318f, 19.2771f;
							
							case 81:
								return -727.3944f, -3494.9f, 23.1103f;
							
							case 82:
								return -1907.151f, -3034.577f, 39.2742f;
							
							case 83:
								return 416.2226f, -2912.834f, 5.0678f;
							
							case 84:
								return 414.82f, -2616.128f, 22.3517f;
							
							case 85:
								return 233.9356f, -1474.491f, 45.7138f;
							
							case 86:
								return 93.563f, -1189.746f, 51.969f;
							
							case 87:
								return -607.8086f, -2189.156f, 76.1713f;
							
							case 88:
								return -1106.939f, -2019.405f, 33.3166f;
							
							case 89:
								return -1210.83f, -1806.382f, 246.2572f;
							
							case 90:
								return -1309.448f, -1043.763f, 29.6876f;
							
							case 91:
								return -1618.367f, -827.8159f, 42.3072f;
							
							case 92:
								return -2257.555f, -9.0938f, 121.4433f;
							
							case 93:
								return -777.472f, -376.5067f, 72.7751f;
							
							case 94:
								return -1371.512f, -172.8742f, 99.1525f;
							
							case 95:
								return -1842.798f, 302.3257f, 105.5376f;
							
							case 96:
								return -1165.458f, 367.7476f, 95.3869f;
							
							case 97:
								return -3107.359f, 276.277f, 56.9633f;
							
							case 98:
								return -2548.786f, 1441.129f, 190.8976f;
							
							case 99:
								return -2644.523f, 1868.621f, 168.2627f;
							
							case 100:
								return -3029.234f, 1883.871f, 35.4705f;
							
							case 101:
								return -1119.207f, 1736.032f, 195.1095f;
							
							case 102:
								return -644.2039f, 1743.748f, 227.7433f;
							
							case 103:
								return -577.6026f, 2038.995f, 209.9244f;
							
							case 104:
								return -302.0078f, 1871.026f, 196.7599f;
							
							case 105:
								return 351.8685f, 1748.149f, 260.866f;
							
							case 106:
								return -11.935f, 1320.348f, 288.0058f;
							
							case 107:
								return 295.5885f, 753.7887f, 200.7135f;
							
							case 108:
								return 305.6451f, 501.4699f, 350.4832f;
							
							case 109:
								return 353.2237f, 58.5094f, 119.2648f;
							
							case 110:
								return 377.5104f, -695.2125f, 102.9432f;
							
							case 111:
								return 392.4507f, -1204.239f, 50f;
							
							case 112:
								return 397.6461f, -1929.781f, 43.4559f;
							
							case 113:
								return 470.8737f, -2451.431f, 30f;
							
							case 114:
								return -418.7521f, -2424.396f, 20.0582f;
							
							case 115:
								return -2440.527f, -1654.13f, 6.3248f;
							
							case 116:
								return -888.3994f, -2938.026f, 26.3869f;
							
							case 117:
								return -1374.637f, -2647.817f, 26.4425f;
							
							case 118:
								return -1082.177f, -620.1375f, 27.491f;
							
							case 119:
								return -1471.09f, 1324.141f, 193.4433f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -2303.138f, 218.8738f, 166.6017f;
							
							case 1:
								return -2994.291f, 39.7167f, 7.4636f;
							
							case 2:
								return -3410.2f, 967.5133f, 7.3517f;
							
							case 3:
								return -3041.96f, 1209.59f, 13.7743f;
							
							case 4:
								return -2502.529f, 756.2985f, 301.2459f;
							
							case 5:
								return -1352.546f, 120.6978f, 55.2388f;
							
							case 6:
								return -1729.21f, -193.1235f, 57.5038f;
							
							case 7:
								return -1635.4f, -1054.226f, 12.1522f;
							
							case 8:
								return -1268.607f, -1915.845f, 4.8616f;
							
							case 9:
								return -18.3427f, -1297.615f, 28.3575f;
							
							case 10:
								return -145.3585f, 930.7858f, 234.6711f;
							
							case 11:
								return -424.3762f, 1587.798f, 355.2649f;
							
							case 12:
								return -112.2256f, 354.4933f, 111.6961f;
							
							case 13:
								return 67.6185f, -673.5317f, 28.7056f;
							
							case 14:
								return 338.3054f, -1394.279f, 31.5093f;
							
							case 15:
								return -19.2884f, -1426.187f, 29.6575f;
							
							case 16:
								return -251.9772f, -2029.258f, 28.946f;
							
							case 17:
								return -432.7254f, -2440.489f, 5.0008f;
							
							case 18:
								return -956.3549f, -3053.302f, 12.9451f;
							
							case 19:
								return -1662.76f, -3177.918f, 12.9914f;
							
							case 20:
								return -457.7008f, -1507.786f, 12.0586f;
							
							case 21:
								return 188.8895f, 300.349f, 104.515f;
							
							case 22:
								return 3.4946f, -2452.885f, 13.4665f;
							
							case 23:
								return -966.3007f, -973.4243f, 2.876f;
							
							case 24:
								return -1536.435f, 868.5392f, 180.16f;
							
							case 25:
								return -1521.53f, 1493.765f, 110.5947f;
							
							case 26:
								return -1173.264f, -2037.82f, 12.776f;
							
							case 27:
								return -0.4394f, -1037.738f, 37.152f;
							
							case 28:
								return 137.7382f, -3092.8f, 4.8963f;
							
							case 29:
								return -1177.272f, -507.6518f, 34.5662f;
							
							case 30:
								return -575.4523f, -142.0386f, 36.2353f;
							
							case 31:
								return -723.2367f, 655.733f, 154.5475f;
							
							case 32:
								return -455.0906f, -999.9053f, 22.8657f;
							
							case 33:
								return -1133.934f, -1447.037f, 4f;
							
							case 34:
								return -231.0999f, -242.6378f, 49.0062f;
							
							case 35:
								return 69.8444f, -62.9348f, 67.8751f;
							
							case 36:
								return -1981.162f, -296.7468f, 47.1062f;
							
							case 37:
								return 98.9504f, -1979.664f, 19.6635f;
							
							case 38:
								return 324.168f, -2758.195f, 5.0028f;
							
							case 39:
								return 219.5919f, -2310.078f, 7.4018f;
							
							case 40:
								return -693.2001f, -592.6827f, 30.5552f;
							
							case 41:
								return -1044.535f, 500.5195f, 83.1617f;
							
							case 42:
								return -1792.464f, 395.7471f, 111.7909f;
							
							case 43:
								return -425.5935f, 1123.605f, 324.8547f;
							
							case 44:
								return -523.835f, -2902.068f, 5.0004f;
							
							case 45:
								return -1213.84f, -2724.547f, 12.9541f;
							
							case 46:
								return -656.7547f, -1708.686f, 23.8153f;
							
							case 47:
								return -1024.89f, 1012.239f, 159.6649f;
							
							case 48:
								return -850.8826f, 1708.716f, 193.9906f;
							
							case 49:
								return -2253.348f, 1324.29f, 291.0074f;
							
							case 50:
								return -876.7352f, -210.6213f, 38.2135f;
							
							case 51:
								return -309.9497f, -609.0406f, 32.5568f;
							
							case 52:
								return -743.9313f, -2283.372f, 12.06f;
							
							case 53:
								return -2971.731f, 584.4294f, 19.423f;
							
							case 54:
								return 288.4228f, -1601.137f, 30.2709f;
							
							case 55:
								return 97.6932f, -348.3357f, 41.3071f;
							
							case 56:
								return -1065.912f, -12.7356f, 49.4423f;
							
							case 57:
								return -388.1416f, -2283.256f, 6.6082f;
							
							case 58:
								return -1213.121f, -945.0177f, 1.1502f;
							
							case 59:
								return -1605.807f, -588.1375f, 32.1103f;
							
							case 60:
								return -1573.01f, 400.7232f, 106.194f;
							
							case 61:
								return -2751.19f, 1185.782f, 93.6924f;
							
							case 62:
								return 287.3323f, -3014.992f, 8.8106f;
							
							case 63:
								return -96.4867f, -2744.17f, 5.1062f;
							
							case 64:
								return -1350.788f, -1435.002f, 3.325f;
							
							case 65:
								return -156.4393f, -979.7114f, 20.2769f;
							
							case 66:
								return -671.3023f, 399.0416f, 101.68f;
							
							case 67:
								return 169.03f, 667.5479f, 205.7125f;
							
							case 68:
								return -726.8502f, -410.5149f, 34.5413f;
							
							case 69:
								return -671.4555f, -891.9421f, 23.4991f;
							
							case 70:
								return -190.4528f, 1299.355f, 302.9701f;
							
							case 71:
								return -1284.425f, -3403.299f, 12.9452f;
							
							case 72:
								return -825.6949f, -3337.779f, 12.9445f;
							
							case 73:
								return -1368.524f, -2335.062f, 12.9446f;
							
							case 74:
								return -1098.009f, -2415.526f, 12.9452f;
							
							case 75:
								return -1336.274f, -3044.103f, 12.9444f;
							
							case 76:
								return -821.012f, -1992.519f, 9.6439f;
							
							case 77:
								return -350.2334f, -2640.808f, 5.0003f;
							
							case 78:
								return -219.3889f, -2386.881f, 5.0014f;
							
							case 79:
								return 109.4531f, -2816.037f, 9.7899f;
							
							case 80:
								return 208.6273f, -3327.894f, 4.8177f;
							
							case 81:
								return 370.2768f, -2128.437f, 15.2365f;
							
							case 82:
								return -53.6978f, -1688.638f, 28.4917f;
							
							case 83:
								return -1009.052f, -1759.302f, 5.5498f;
							
							case 84:
								return -988.1508f, -2106.591f, 10.5382f;
							
							case 85:
								return -708.1929f, -1517.804f, 4.4121f;
							
							case 86:
								return -228.0423f, -1514.504f, 30.4622f;
							
							case 87:
								return 297.5852f, -1204.386f, 28.1985f;
							
							case 88:
								return 383.1396f, -904.1862f, 28.4376f;
							
							case 89:
								return -630.6f, -1071.2f, 21.7f;
							
							case 90:
								return -1207.432f, -1796.611f, 2.9086f;
							
							case 91:
								return -876.3531f, -1501.708f, 4.1775f;
							
							case 92:
								return -1271.531f, -1099.613f, 6.5852f;
							
							case 93:
								return -1730.83f, -725.0892f, 9.3941f;
							
							case 94:
								return -1431.005f, -271.0002f, 45.2077f;
							
							case 95:
								return -1966.816f, 182.3251f, 85.7706f;
							
							case 96:
								return -2293.777f, 371.4213f, 173.6017f;
							
							case 97:
								return -2156.688f, 1551.647f, 272.9088f;
							
							case 98:
								return -2780.149f, 1423.379f, 99.9284f;
							
							case 99:
								return -2587.936f, 1930.876f, 166.0052f;
							
							case 100:
								return -3017.571f, 1860.058f, 28.4173f;
							
							case 101:
								return 142.7543f, 1689.097f, 233.0739f;
							
							case 102:
								return 186.6585f, 1162.86f, 224.5946f;
							
							case 103:
								return -461.6094f, 640.4639f, 143.1886f;
							
							case 104:
								return -440.1514f, 184.2777f, 74.2476f;
							
							case 105:
								return -186.476f, 25.015f, 63.554f;
							
							case 106:
								return 26.7096f, -660.0318f, 30.6286f;
							
							case 107:
								return 156.6823f, -565.1396f, 42.893f;
							
							case 108:
								return -1834.908f, -1221.919f, 0.8054f;
							
							case 109:
								return -707.5134f, -1340.225f, -0.0558f;
							
							case 110:
								return -544.5794f, -2580.831f, 0.2096f;
							
							case 111:
								return 103.7708f, -2461.292f, 0.1193f;
							
							case 112:
								return -3046.133f, 1570.539f, -0.3275f;
							
							case 113:
								return -2241.345f, -530.6988f, -0.3275f;
							
							case 114:
								return 44.8316f, 844.4984f, 195.5816f;
							
							case 115:
								return -1894.231f, -2724.314f, -0.3275f;
							
							case 116:
								return -1029.441f, -1778.107f, -0.3275f;
							
							case 117:
								return -95.1061f, -2313.997f, 0.4963f;
							
							case 118:
								return -1546.054f, -1509.913f, 0.409f;
							
							case 119:
								return -1678.194f, -2238.986f, 0.9841f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 2:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -1874.714f, 2055.242f, 164.0655f;
							
							case 1:
								return -2398.244f, 2197.323f, 103.0324f;
							
							case 2:
								return -2470.967f, 2693.007f, 16.093f;
							
							case 3:
								return -1417.126f, 2634.235f, 3.8116f;
							
							case 4:
								return -1617.519f, 3185.984f, 52.4819f;
							
							case 5:
								return -1187.536f, 3851.927f, 510.4073f;
							
							case 6:
								return -1243.21f, 4536.333f, 198.2652f;
							
							case 7:
								return -766.5436f, 4335.334f, 181.1521f;
							
							case 8:
								return -515.496f, 4425.549f, 56.3238f;
							
							case 9:
								return -210.6103f, 3651.887f, 80.5153f;
							
							case 10:
								return 90.0834f, 3766.962f, 52.4048f;
							
							case 11:
								return 267.8927f, 2866.58f, 81.5228f;
							
							case 12:
								return 180.018f, 2272.227f, 109.032f;
							
							case 13:
								return -618.2112f, 2031.457f, 238.4183f;
							
							case 14:
								return -1185.328f, 2439.395f, 110.052f;
							
							case 15:
								return -2881.416f, 3363.437f, 44.4458f;
							
							case 16:
								return -2188.789f, 4395.888f, 71.8569f;
							
							case 17:
								return -2166.268f, 5204.997f, 32.4229f;
							
							case 18:
								return 239.3275f, 5576.022f, 610.5799f;
							
							case 19:
								return -549.4456f, 5308.46f, 118.8087f;
							
							case 20:
								return -686.6255f, 5674.634f, 64.1394f;
							
							case 21:
								return 25.1643f, 7643.369f, 32.4106f;
							
							case 22:
								return -162.8882f, 6422.088f, 46.3268f;
							
							case 23:
								return 269.3018f, 5863.51f, 425.1252f;
							
							case 24:
								return 158.6423f, 4622.624f, 213.8925f;
							
							case 25:
								return 31.6062f, 4328.141f, 56.7127f;
							
							case 26:
								return -959.6198f, 4843.202f, 317.838f;
							
							case 27:
								return -1179.401f, 4926.922f, 230.3542f;
							
							case 28:
								return -1801.77f, 4513.373f, 40.2242f;
							
							case 29:
								return -2146.721f, 3964.171f, 111.159f;
							
							case 30:
								return -668.1703f, 3607.985f, 305.8568f;
							
							case 31:
								return -409.327f, 2963.414f, 38.182f;
							
							case 32:
								return -290.9469f, 2533.475f, 92.1749f;
							
							case 33:
								return -3029.401f, 1883.96f, 35.4066f;
							
							case 34:
								return -2597.654f, 1922.071f, 179.5395f;
							
							case 35:
								return 80.7072f, 5032.946f, 490.6172f;
							
							case 36:
								return -899.8328f, 6042.451f, 53.0212f;
							
							case 37:
								return -1576.676f, 5160.763f, 26.8806f;
							
							case 38:
								return 145.5836f, 6866.114f, 38.7097f;
							
							case 39:
								return -50.5306f, 6236.916f, 79.3327f;
							
							case 40:
								return -368.4536f, 6104.72f, 53f;
							
							case 41:
								return -1599.971f, 2104.185f, 80.8163f;
							
							case 42:
								return -1626.487f, 2585.598f, 12.1104f;
							
							case 43:
								return -2064f, 3361.181f, 48.6443f;
							
							case 44:
								return -2357.318f, 3250.916f, 117.4892f;
							
							case 45:
								return -2684.946f, 2304.948f, 39.1557f;
							
							case 46:
								return -772.2781f, 4704.552f, 242.9476f;
							
							case 47:
								return 125.5518f, 3365.379f, 35.8003f;
							
							case 48:
								return -113.0094f, 2803.876f, 67.1096f;
							
							case 49:
								return -179.3538f, 1907.562f, 221.1006f;
							
							case 50:
								return -1235.554f, 1879.036f, 150.8745f;
							
							case 51:
								return 341.9869f, 3569.314f, 63.2875f;
							
							case 52:
								return 391.3682f, 5485.655f, 1000f;
							
							case 53:
								return 311.9317f, 6432.635f, 80.2925f;
							
							case 54:
								return -292.9588f, 5839.533f, 129.366f;
							
							case 55:
								return -1502.468f, 5984.955f, 34.7383f;
							
							case 56:
								return -3449.053f, 2645.437f, 55.2519f;
							
							case 57:
								return -1096.963f, 3225.607f, 147.7444f;
							
							case 58:
								return -278.2971f, 6637.778f, 45.611f;
							
							case 59:
								return 297.8872f, 4013.252f, 33.872f;
							
							case 60:
								return -271.6442f, 5586.137f, 250.6218f;
							
							case 61:
								return -821f, 5419.5f, 58.4f;
							
							case 62:
								return -1734.6f, 3968.5f, 302.8f;
							
							case 63:
								return -2664.1f, 2594f, 3.8f;
							
							case 64:
								return -897.3f, 2797.5f, 28.3f;
							
							case 65:
								return -1158.6f, 4625.5f, 156.7f;
							
							case 66:
								return 618f, 6426.7f, 103.2f;
							
							case 67:
								return 435.1f, 6772.9f, 18.9f;
							
							case 68:
								return -677.8f, 6035f, 27.3f;
							
							case 69:
								return -1445.2f, 5428.6f, 53.5f;
							
							case 70:
								return -384.2f, 4711.1f, 278.4f;
							
							case 71:
								return 911.8f, 4338.1f, 61.8f;
							
							case 72:
								return 518.5f, 5944.8f, 525.2f;
							
							case 73:
								return -1631.5f, 4741.2f, 66.9f;
							
							case 74:
								return -1352.5f, 4147.1f, 125.1f;
							
							case 75:
								return -1138.5f, 2807.2f, 250.4f;
							
							case 76:
								return -540.3f, 4190.5f, 203.6f;
							
							case 77:
								return -166.9f, 4250.2f, 61.7f;
							
							case 78:
								return -88.2f, 4579f, 135.4f;
							
							case 79:
								return -3051.213f, 4178.12f, 72.7681f;
							
							case 80:
								return -2606.26f, 2993.814f, 30.4219f;
							
							case 81:
								return -2302.76f, 2011.211f, 153.3448f;
							
							case 82:
								return -2254.314f, 1680.506f, 298.8981f;
							
							case 83:
								return -1955.917f, 1772.408f, 201.629f;
							
							case 84:
								return -1751.763f, 1998.548f, 129.1121f;
							
							case 85:
								return -1453.889f, 2069.22f, 65.2848f;
							
							case 86:
								return -1479.386f, 2405.98f, 37.5402f;
							
							case 87:
								return -1041.601f, 3963.552f, 344.3259f;
							
							case 88:
								return -775.5471f, 4048.385f, 310.1201f;
							
							case 89:
								return -883.0366f, 4411.045f, 29.2546f;
							
							case 90:
								return -1215.23f, 4370.065f, 38.5217f;
							
							case 91:
								return -1269.523f, 4386.938f, 1000f;
							
							case 92:
								return -1508.03f, 4446.546f, 59.4166f;
							
							case 93:
								return -1449.331f, 4602.479f, 336.1419f;
							
							case 94:
								return -1640.183f, 5440.63f, 43.1539f;
							
							case 95:
								return -891.0049f, 5157.28f, 187.01f;
							
							case 96:
								return 724.7438f, 5251.831f, 586.2138f;
							
							case 97:
								return 537.1121f, 4647.938f, 274.9371f;
							
							case 98:
								return 64.3661f, 4022.363f, 575.3698f;
							
							case 99:
								return 907.8411f, 3627.435f, 53.8748f;
							
							case 100:
								return 591.9018f, 2977.436f, 82.2499f;
							
							case 101:
								return 259.6137f, 1788.459f, 256.6769f;
							
							case 102:
								return -2092.081f, 2518.016f, 800f;
							
							case 103:
								return -2536.684f, 1678.45f, 196.0372f;
							
							case 104:
								return 52.1855f, 7343.64f, 518.5611f;
							
							case 105:
								return -521.5972f, 6960.141f, 172.8203f;
							
							case 106:
								return -684.2739f, 6467.878f, 165.8478f;
							
							case 107:
								return -1060.232f, 5711.063f, 333.8782f;
							
							case 108:
								return -1786.052f, 5471.512f, 614.6761f;
							
							case 109:
								return -1501.189f, 3295.095f, 245.8079f;
							
							case 110:
								return -2149.145f, 3521.295f, 186.103f;
							
							case 111:
								return 887.6612f, 5610.092f, 697.7338f;
							
							case 112:
								return 451.4696f, 5020.989f, 610.8222f;
							
							case 113:
								return 693.6552f, 4097.276f, 53.8927f;
							
							case 114:
								return -99.6831f, 3960.636f, 80.8691f;
							
							case 115:
								return -579.6645f, 3979.675f, 136.2872f;
							
							case 116:
								return -996.2939f, 4194.288f, 151.0646f;
							
							case 117:
								return -1542.398f, 2886.044f, 1000f;
							
							case 118:
								return -3004.988f, 2333.1f, 209.9484f;
							
							case 119:
								return -3622.204f, 4740.62f, 19.17f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -2200.786f, 3429.213f, 31.6018f;
							
							case 1:
								return -1873.915f, 2090.595f, 139.9944f;
							
							case 2:
								return -1674.252f, 2301.497f, 59.0047f;
							
							case 3:
								return -506.3776f, 4358.938f, 66.4342f;
							
							case 4:
								return -83.7414f, 4580.993f, 122.1646f;
							
							case 5:
								return -207.3853f, 3598.517f, 60.323f;
							
							case 6:
								return 233.0533f, 3547.927f, 30.2697f;
							
							case 7:
								return 93.7029f, 3597.86f, 38.7393f;
							
							case 8:
								return 327f, 2858f, 42.4386f;
							
							case 9:
								return 158.1294f, 3136.305f, 42.4573f;
							
							case 10:
								return -210.5036f, 2955.358f, 28.941f;
							
							case 11:
								return -288.922f, 2524.722f, 73.6685f;
							
							case 12:
								return -734.5254f, 5594.983f, 34.288f;
							
							case 13:
								return 88.2503f, 6368.129f, 30.2271f;
							
							case 14:
								return -344.4945f, 6242.846f, 30.4877f;
							
							case 15:
								return -267.3751f, 6639.444f, 6.3939f;
							
							case 16:
								return -1444.47f, 5418.419f, 22.2866f;
							
							case 17:
								return -1611.041f, 5258.685f, 2.9791f;
							
							case 18:
								return -1823.203f, 4464.67f, 37.4717f;
							
							case 19:
								return -2488.111f, 2740.839f, 1.8909f;
							
							case 20:
								return -1626.549f, 2587.924f, 1.6362f;
							
							case 21:
								return -1575.299f, 2105.205f, 66.0545f;
							
							case 22:
								return -543.6063f, 1983.754f, 126.0263f;
							
							case 23:
								return -563.8864f, 1886.811f, 122.0349f;
							
							case 24:
								return -592.4536f, 2076.64f, 130.3709f;
							
							case 25:
								return -2497.361f, 2307.194f, 33.1315f;
							
							case 26:
								return -2584.923f, 1931.11f, 166.3129f;
							
							case 27:
								return -1618.161f, 3184.126f, 31.8513f;
							
							case 28:
								return -913.2203f, 2562.701f, 57.2099f;
							
							case 29:
								return -1163.923f, 2408.993f, 92.402f;
							
							case 30:
								return 188.3494f, 2295.03f, 92.7443f;
							
							case 31:
								return -96.8265f, 2224.75f, 159.4986f;
							
							case 32:
								return -834.779f, 4178.558f, 214.3525f;
							
							case 33:
								return -790.3221f, 2901.125f, 18.2471f;
							
							case 34:
								return -799.6998f, 3478.014f, 172.9345f;
							
							case 35:
								return -1347.726f, 4127.416f, 61.6295f;
							
							case 36:
								return -1364.709f, 4848.779f, 144.9459f;
							
							case 37:
								return -2168.336f, 5186.728f, 14.9725f;
							
							case 38:
								return -987.1982f, 5075.115f, 186.5395f;
							
							case 39:
								return 231.926f, 5246.831f, 601.2042f;
							
							case 40:
								return -1.0985f, 5029.458f, 446.6905f;
							
							case 41:
								return -134.3454f, 4916.509f, 353.0826f;
							
							case 42:
								return -434.7882f, 4885.861f, 189.7331f;
							
							case 43:
								return -592.1419f, 5361.79f, 69.3186f;
							
							case 44:
								return 64.7121f, 7052.296f, 15.7854f;
							
							case 45:
								return -577.7616f, 5954.945f, 25.1362f;
							
							case 46:
								return -945.8056f, 4613.758f, 238.1628f;
							
							case 47:
								return -2228.817f, 4218.248f, 45.7951f;
							
							case 48:
								return -2493.361f, 4193.219f, 1.0754f;
							
							case 49:
								return -3073.088f, 3200.413f, 0.9527f;
							
							case 50:
								return 376.4925f, 6630.836f, 27.7626f;
							
							case 51:
								return -1692.925f, 4597.169f, 46.8227f;
							
							case 52:
								return -2587.798f, 3193.551f, 12.9622f;
							
							case 53:
								return -922.5162f, 6131.097f, 6.1891f;
							
							case 54:
								return -112.5477f, 7285.785f, 16.1674f;
							
							case 55:
								return -170.1744f, 6049.716f, 30.1726f;
							
							case 56:
								return 57.7188f, 6673.076f, 30.9499f;
							
							case 57:
								return -501.3606f, 5567.93f, 70.0852f;
							
							case 58:
								return -292.4363f, 5839.495f, 120.8191f;
							
							case 59:
								return -436.1143f, 5707.903f, 61.0179f;
							
							case 60:
								return -494.1112f, 5290.479f, 79.6187f;
							
							case 61:
								return -421.0542f, 5187.812f, 122.5195f;
							
							case 62:
								return -835.7191f, 5261.788f, 79.1947f;
							
							case 63:
								return -873.3408f, 4786.007f, 299.4599f;
							
							case 64:
								return -299.7797f, 4676.5f, 245.6817f;
							
							case 65:
								return -903.4214f, 5176.086f, 153.3577f;
							
							case 66:
								return -869.6852f, 5553.71f, 1.4216f;
							
							case 67:
								return -1210.241f, 5228.673f, 88.4579f;
							
							case 68:
								return -1224.511f, 3854.173f, 488.3926f;
							
							case 69:
								return -688.3312f, 3764.984f, 272.5302f;
							
							case 70:
								return -1829.375f, 3982.997f, 271.9911f;
							
							case 71:
								return -2432.337f, 3535.94f, 33.3233f;
							
							case 72:
								return -1440.526f, 5106.688f, 62.4016f;
							
							case 73:
								return -2258.899f, 3831.759f, 118.1093f;
							
							case 74:
								return -1577.494f, 5162.519f, 18.6627f;
							
							case 75:
								return -2046.334f, 4525.601f, 27.6239f;
							
							case 76:
								return -2189.855f, 4616.937f, 0.5382f;
							
							case 77:
								return 423.4926f, 5613.09f, 765.7494f;
							
							case 78:
								return 501.2704f, 5598.329f, 795.0286f;
							
							case 79:
								return 625.9471f, 5675.894f, 747.5628f;
							
							case 80:
								return -555.5328f, 5321.449f, 72.5996f;
							
							case 81:
								return -685.9285f, 5233.738f, 92.4703f;
							
							case 82:
								return -213.783f, 6348.989f, 30.5355f;
							
							case 83:
								return -391.0858f, 6341.175f, 25.425f;
							
							case 84:
								return 0.9189f, 3691.594f, 38.5039f;
							
							case 85:
								return -225.4021f, 3664.75f, 63.4125f;
							
							case 86:
								return 714.1616f, 4136.578f, 34.7842f;
							
							case 87:
								return 825.1304f, 4223.49f, 50.8188f;
							
							case 88:
								return 858.3134f, 4423.847f, 30.2196f;
							
							case 89:
								return 335.1393f, 4373.471f, 63.3434f;
							
							case 90:
								return -1474.287f, 2687.972f, 16.6437f;
							
							case 91:
								return -1183.146f, 4927.809f, 222.0748f;
							
							case 92:
								return -892.4783f, 4529.449f, 113.9803f;
							
							case 93:
								return 761.0254f, 6455.407f, 30.7286f;
							
							case 94:
								return 370.5299f, 5453.183f, 691.2834f;
							
							case 95:
								return -376.5987f, 3840.778f, 73.9626f;
							
							case 96:
								return -2077.635f, 3390.068f, 30.1962f;
							
							case 97:
								return -2317.722f, 3398.114f, 29.7812f;
							
							case 98:
								return -2686.153f, 3554.439f, 1.0289f;
							
							case 99:
								return -1869.387f, 4649.492f, 56.0019f;
							
							case 100:
								return -1854.183f, 4809.846f, 1.9984f;
							
							case 101:
								return -683.5417f, 5823.635f, 16.3313f;
							
							case 102:
								return -790.6581f, 5479.023f, 25.889f;
							
							case 103:
								return 482.4343f, 6486.61f, 29.0864f;
							
							case 104:
								return 183.3372f, 7008.858f, 11.2392f;
							
							case 105:
								return 50.2346f, 4325.231f, 43.3996f;
							
							case 106:
								return -28.0941f, 4430.794f, 57.1619f;
							
							case 107:
								return -187.3603f, 4019.421f, 30.6801f;
							
							case 108:
								return -1804.935f, 5315.242f, 0.8688f;
							
							case 109:
								return 81.2546f, 4050.058f, 29.4f;
							
							case 110:
								return -1191.056f, 4389.15f, 4.3f;
							
							case 111:
								return -2188.334f, 2590.943f, -0.4f;
							
							case 112:
								return -2825.633f, 2358.091f, 0.5703f;
							
							case 113:
								return -2047.696f, 4852.304f, 0.6241f;
							
							case 114:
								return -2664.615f, 2597.589f, -0.4f;
							
							case 115:
								return 271.9201f, 7512.879f, -0.5084f;
							
							case 116:
								return -215.5849f, 4284.967f, 29.5257f;
							
							case 117:
								return -2879.157f, 2879.604f, 0.4205f;
							
							case 118:
								return -920.2339f, 5871.843f, 0.4382f;
							
							case 119:
								return -34.7086f, 7618.572f, 0.4933f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 3:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 867.3339f, 4198.743f, 75f;
							
							case 1:
								return 1254.176f, 4848.075f, 247.0701f;
							
							case 2:
								return 1676.777f, 5140.256f, 160.2494f;
							
							case 3:
								return 1995.339f, 5021.67f, 68.695f;
							
							case 4:
								return 2599.952f, 5032.021f, 112.432f;
							
							case 5:
								return 2967.309f, 5197.417f, 148.5921f;
							
							case 6:
								return 2876.992f, 5911.252f, 378.2234f;
							
							case 7:
								return 3438.904f, 6144.417f, 10.0202f;
							
							case 8:
								return 3431.106f, 5174.187f, 46.1572f;
							
							case 9:
								return 4080.091f, 4476.533f, 17.0407f;
							
							case 10:
								return 3492.801f, 4619.894f, 65f;
							
							case 11:
								return 3378.036f, 4079.524f, 229.1767f;
							
							case 12:
								return 3944.403f, 3729.657f, 19.5046f;
							
							case 13:
								return 3556.383f, 3684.987f, 67.2346f;
							
							case 14:
								return 3296.121f, 3365.198f, 125f;
							
							case 15:
								return 3290f, 3140.437f, 275.7202f;
							
							case 16:
								return 2948.726f, 2791.748f, 48.6755f;
							
							case 17:
								return 1597.427f, 2599.171f, 95f;
							
							case 18:
								return 1397.009f, 2116.503f, 137.1597f;
							
							case 19:
								return 723.7358f, 2322.695f, 64.6875f;
							
							case 20:
								return 753.2642f, 2581.414f, 161f;
							
							case 21:
								return 564.4257f, 3392.354f, 96.1353f;
							
							case 22:
								return 1191.005f, 3400.265f, 78.9779f;
							
							case 23:
								return 1279.739f, 3100.26f, 53.8507f;
							
							case 24:
								return 1415.487f, 3833.477f, 52.6619f;
							
							case 25:
								return 1488.657f, 3946.224f, 305.2148f;
							
							case 26:
								return 2065.697f, 6451.615f, 149.8928f;
							
							case 27:
								return 2559.717f, 6155.792f, 171f;
							
							case 28:
								return 1502.546f, 6159.08f, 230.8224f;
							
							case 29:
								return 1163.891f, 5965.097f, 413.3012f;
							
							case 30:
								return 772.3428f, 5523.894f, 600f;
							
							case 31:
								return 501.8089f, 5604.274f, 1000.598f;
							
							case 32:
								return 1002.141f, 4786.271f, 185.7696f;
							
							case 33:
								return 587.414f, 5114.912f, 405f;
							
							case 34:
								return 1345.87f, 6384.963f, 52.4688f;
							
							case 35:
								return 754.4042f, 6466f, 49f;
							
							case 36:
								return 1042.216f, 6799.529f, 40.2945f;
							
							case 37:
								return 1779.115f, 5662.172f, 274f;
							
							case 38:
								return 2898.098f, 4327.457f, 107.9208f;
							
							case 39:
								return 2634.35f, 3661.461f, 111.1731f;
							
							case 40:
								return 2045.418f, 3429.524f, 56.3868f;
							
							case 41:
								return 1563.065f, 3572.822f, 41f;
							
							case 42:
								return 2276.492f, 1955.542f, 146.9525f;
							
							case 43:
								return 2379.747f, 2604.982f, 89.7836f;
							
							case 44:
								return 543.5116f, 3080.709f, 63f;
							
							case 45:
								return 2264.604f, 4455.955f, 62.2539f;
							
							case 46:
								return 2410.187f, 2908.336f, 373.9144f;
							
							case 47:
								return 3510.479f, 2569.052f, 16.1615f;
							
							case 48:
								return 3073.721f, 2084.079f, 30f;
							
							case 49:
								return 3319.34f, 2272.217f, 14.2949f;
							
							case 50:
								return 2822.12f, 4977.335f, 70f;
							
							case 51:
								return 1299.971f, 4219.281f, 41f;
							
							case 52:
								return 503.1913f, 4450.17f, 112f;
							
							case 53:
								return 2489.62f, 3760.053f, 53f;
							
							case 54:
								return 1824.499f, 2031.218f, 60.1953f;
							
							case 55:
								return 1153.765f, 2384.4f, 75.2003f;
							
							case 56:
								return 1339.664f, 2747.617f, 79.0765f;
							
							case 57:
								return 542.5154f, 2488.194f, 84.9932f;
							
							case 58:
								return 2767.542f, 2047.162f, 126.1494f;
							
							case 59:
								return 2061.36f, 3941.451f, 200f;
							
							case 60:
								return 873.5367f, 2867.737f, 73.5925f;
							
							case 61:
								return 1752.141f, 3052.542f, 78.6478f;
							
							case 62:
								return 2100.787f, 2339.885f, 133.921f;
							
							case 63:
								return 2738.826f, 3476.466f, 81.564f;
							
							case 64:
								return 2285.089f, 3289.129f, 86.2814f;
							
							case 65:
								return 1745.899f, 3756.127f, 53.8457f;
							
							case 66:
								return 2504.338f, 4418.758f, 55f;
							
							case 67:
								return 1552.003f, 2186.406f, 96f;
							
							case 68:
								return 2716.376f, 4132.656f, 63.7827f;
							
							case 69:
								return 3809.813f, 4462.08f, 36.1286f;
							
							case 70:
								return 3257.82f, 4308.541f, 140f;
							
							case 71:
								return 2268.876f, 5381.432f, 328.4639f;
							
							case 72:
								return 2236.389f, 5604.683f, 71.034f;
							
							case 73:
								return 1986.657f, 6201.739f, 66.4804f;
							
							case 74:
								return 3356.059f, 5696.29f, 20f;
							
							case 75:
								return 2457.263f, 6684.452f, 63.14f;
							
							case 76:
								return 1914.983f, 6702.233f, 14.7976f;
							
							case 77:
								return 2149.811f, 3844.999f, 88.0922f;
							
							case 78:
								return 1880.169f, 4244.354f, 80.3363f;
							
							case 79:
								return 1791.897f, 4595.955f, 48.6224f;
							
							case 80:
								return 1181.133f, 5151.417f, 772.3138f;
							
							case 81:
								return 431.2495f, 4768.536f, 665.041f;
							
							case 82:
								return 1410.651f, 6569.377f, 26.5039f;
							
							case 83:
								return 1522.466f, 6617.973f, 8f;
							
							case 84:
								return 2316.162f, 6378.738f, 143.7605f;
							
							case 85:
								return 3127.772f, 5566.866f, 317.7646f;
							
							case 86:
								return 3684.367f, 4916.152f, 618.67f;
							
							case 87:
								return 3941.761f, 4652.369f, 92.7624f;
							
							case 88:
								return 3900.581f, 4262.104f, 887.18f;
							
							case 89:
								return 3535.166f, 3778.242f, 46.4187f;
							
							case 90:
								return 3638.854f, 3108.953f, 8.7037f;
							
							case 91:
								return 931.8565f, 2446.375f, 59f;
							
							case 92:
								return 1052.214f, 2277.729f, 95.5547f;
							
							case 93:
								return 411.0964f, 4298.822f, 40.8556f;
							
							case 94:
								return 970.339f, 5647.13f, 650.7467f;
							
							case 95:
								return 2137.105f, 4785.519f, 59.9326f;
							
							case 96:
								return 2333.533f, 4801.554f, 467.9726f;
							
							case 97:
								return 2800.744f, 4745.392f, 370.3547f;
							
							case 98:
								return 2721.061f, 1556.416f, 101.1161f;
							
							case 99:
								return 1855.284f, 1600.665f, 116.8989f;
							
							case 100:
								return 1623.469f, 1518.122f, 294.3194f;
							
							case 101:
								return 923.4011f, 1635.348f, 218.3212f;
							
							case 102:
								return 829.6124f, 1892.871f, 135.5203f;
							
							case 103:
								return 1294.051f, 5675.865f, 472.5645f;
							
							case 104:
								return 1716.85f, 6416.637f, 81.5075f;
							
							case 105:
								return 2140.929f, 5892.89f, 161.9607f;
							
							case 106:
								return 1604.4f, 5793.905f, 429.8526f;
							
							case 107:
								return 1589.65f, 4160.215f, 883.122f;
							
							case 108:
								return 2191.156f, 4208.336f, 477.8802f;
							
							case 109:
								return 1427.64f, 4515.944f, 85.3721f;
							
							case 110:
								return 1206.398f, 4546.814f, 83.0875f;
							
							case 111:
								return 222.2962f, 4746.207f, 280.8666f;
							
							case 112:
								return 287.655f, 5361.114f, 659.2646f;
							
							case 113:
								return 194.6948f, 7393.709f, 1000f;
							
							case 114:
								return 469.5136f, 6745.105f, 14.1624f;
							
							case 115:
								return 537.5068f, 6663.253f, 447.8182f;
							
							case 116:
								return 3227.793f, 6940.11f, 111.4631f;
							
							case 117:
								return 3614.231f, 5883.145f, 9.5207f;
							
							case 118:
								return 3010.254f, 5697.739f, 463.4349f;
							
							case 119:
								return 2874.324f, 6196.489f, 1000f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 1581.963f, 2200.244f, 78.0226f;
							
							case 1:
								return 1104.104f, 2399.396f, 53.529f;
							
							case 2:
								return 1089.489f, 2132.943f, 57.0757f;
							
							case 3:
								return 932.5687f, 2434.264f, 49.6778f;
							
							case 4:
								return 586.3744f, 2935.313f, 39.9577f;
							
							case 5:
								return 437.5278f, 3537.285f, 32.3159f;
							
							case 6:
								return 917.2156f, 3648.117f, 35.1053f;
							
							case 7:
								return 1528.585f, 3916.301f, 30.6709f;
							
							case 8:
								return 1924.4f, 3468.064f, 50.6772f;
							
							case 9:
								return 2482.272f, 3761.54f, 40.6483f;
							
							case 10:
								return 2722.307f, 2895.323f, 46.873f;
							
							case 11:
								return 3021.258f, 2881.75f, 85.959f;
							
							case 12:
								return 2096.643f, 2504.604f, 89.6423f;
							
							case 13:
								return 2974.657f, 3485.959f, 70.4429f;
							
							case 14:
								return 3390.08f, 3704.603f, 34.9975f;
							
							case 15:
								return 2908.214f, 4342.968f, 49.3031f;
							
							case 16:
								return 1796.101f, 4920.626f, 47.3851f;
							
							case 17:
								return 2241.987f, 5382.81f, 144.0017f;
							
							case 18:
								return 2218.899f, 5946.263f, 49.634f;
							
							case 19:
								return 1601.463f, 6624.76f, 14.7707f;
							
							case 20:
								return 1406.928f, 6568.621f, 19.3763f;
							
							case 21:
								return 439.5467f, 6459.866f, 34.8699f;
							
							case 22:
								return 1503.687f, 6360.855f, 15.6193f;
							
							case 23:
								return 3316.647f, 5190.359f, 17.4152f;
							
							case 24:
								return 3632.89f, 5003.482f, 11.6053f;
							
							case 25:
								return 3057.659f, 5064.144f, 17.7153f;
							
							case 26:
								return 2822.534f, 4978.232f, 62.4826f;
							
							case 27:
								return 3930.095f, 4399.015f, 15.6116f;
							
							case 28:
								return 3859.284f, 4226.905f, 2.7151f;
							
							case 29:
								return 3692.684f, 4570.595f, 24.1191f;
							
							case 30:
								return 1830.916f, 2542.005f, 44.8856f;
							
							case 31:
								return 2424.308f, 3131.437f, 47.2055f;
							
							case 32:
								return 1340.228f, 2988.934f, 45.0809f;
							
							case 33:
								return 817.1245f, 3379.468f, 76.9467f;
							
							case 34:
								return 563.2202f, 2456.984f, 58.1331f;
							
							case 35:
								return 2041.713f, 2002.479f, 84.9881f;
							
							case 36:
								return 2431.854f, 1986.869f, 82.1812f;
							
							case 37:
								return 1190.872f, 3401.189f, 67.3338f;
							
							case 38:
								return 1943.983f, 3817.853f, 31.0619f;
							
							case 39:
								return 1977.679f, 3054.874f, 49.3235f;
							
							case 40:
								return 452.5827f, 5587.175f, 780.1891f;
							
							case 41:
								return 807.1406f, 5701.082f, 696.9146f;
							
							case 42:
								return 1600.868f, 5804.83f, 414.5815f;
							
							case 43:
								return 1412.016f, 5558.528f, 459.5185f;
							
							case 44:
								return 2279.983f, 5788.728f, 154.1637f;
							
							case 45:
								return 2346.173f, 4997.547f, 41.5868f;
							
							case 46:
								return 2391.918f, 4296.647f, 34.1954f;
							
							case 47:
								return 1364.943f, 4385.975f, 43.3491f;
							
							case 48:
								return 998.6568f, 4453.989f, 59.924f;
							
							case 49:
								return 1058.949f, 4219.405f, 34.273f;
							
							case 50:
								return 870.7486f, 6627.962f, 1.1131f;
							
							case 51:
								return 2721.632f, 4513.5f, 41.1966f;
							
							case 52:
								return 1219.444f, 2744.531f, 37.0054f;
							
							case 53:
								return 2564.32f, 2578.493f, 36.9367f;
							
							case 54:
								return 2827.744f, 5963.866f, 350.6364f;
							
							case 55:
								return 2946.397f, 5326.474f, 100.269f;
							
							case 56:
								return 2211.154f, 3593.324f, 55.1756f;
							
							case 57:
								return 3079.837f, 6027.145f, 129.2854f;
							
							case 58:
								return 3345.3f, 5555.332f, 17.907f;
							
							case 59:
								return 528.5965f, 3092.785f, 39.4652f;
							
							case 60:
								return 2184.891f, 3724.368f, 37.4901f;
							
							case 61:
								return 1471.091f, 4948.712f, 75.0594f;
							
							case 62:
								return 2713.996f, 4141.762f, 42.8723f;
							
							case 63:
								return 2476.558f, 5783.607f, 68.702f;
							
							case 64:
								return 2647.75f, 3281.402f, 54.2127f;
							
							case 65:
								return 2210.976f, 5610.793f, 52.8602f;
							
							case 66:
								return 2898.328f, 2389.586f, 170.4231f;
							
							case 67:
								return 2728.33f, 2616.292f, 95.3074f;
							
							case 68:
								return 1844.478f, 4591.953f, 29.6629f;
							
							case 69:
								return 2432.128f, 4616.881f, 28.1137f;
							
							case 70:
								return 2574.294f, 4653.86f, 33.0768f;
							
							case 71:
								return 1574.009f, 3591.066f, 34.3615f;
							
							case 72:
								return 2008.265f, 4986.431f, 40.3378f;
							
							case 73:
								return 1975.059f, 5182.086f, 46.8906f;
							
							case 74:
								return 1955.895f, 4620.182f, 39.6384f;
							
							case 75:
								return 2279.756f, 4846.217f, 39.2283f;
							
							case 76:
								return 2418.292f, 4784.674f, 33.6784f;
							
							case 77:
								return 2005.109f, 3765.983f, 31.1808f;
							
							case 78:
								return 1719.677f, 3692.743f, 33.513f;
							
							case 79:
								return 1530.711f, 3076.231f, 39.9815f;
							
							case 80:
								return 1686.366f, 3301.007f, 40.1368f;
							
							case 81:
								return 3481.603f, 3740.488f, 35.6427f;
							
							case 82:
								return 2392.425f, 3334.924f, 46.3672f;
							
							case 83:
								return 2192.154f, 3168.942f, 50.5572f;
							
							case 84:
								return 2354.496f, 2577.063f, 45.6677f;
							
							case 85:
								return 640.7736f, 2777.938f, 40.9601f;
							
							case 86:
								return 2768.528f, 1701.819f, 23.6943f;
							
							case 87:
								return 3239.663f, 3501.223f, 67.723f;
							
							case 88:
								return 2672.952f, 3516.45f, 51.712f;
							
							case 89:
								return 2619.962f, 3661.864f, 100.2808f;
							
							case 90:
								return 2437.504f, 4069.23f, 37.0001f;
							
							case 91:
								return 1685.598f, 6435.691f, 31.3515f;
							
							case 92:
								return 1417.653f, 3818.394f, 31.1351f;
							
							case 93:
								return 3300.7f, 5941.647f, 93.3217f;
							
							case 94:
								return 870.0084f, 2870.564f, 55.9249f;
							
							case 95:
								return 1352.413f, 6401.655f, 32.4101f;
							
							case 96:
								return 1960.858f, 5376.274f, 185.2074f;
							
							case 97:
								return 1974.847f, 6219.958f, 41.2546f;
							
							case 98:
								return 3684.152f, 3795.969f, 15.0641f;
							
							case 99:
								return 2625.796f, 2809.979f, 32.439f;
							
							case 100:
								return 1302.932f, 4234.541f, 32.9137f;
							
							case 101:
								return 577.5187f, 4169.561f, 37.8946f;
							
							case 102:
								return 1069.311f, 2259.363f, 43.4741f;
							
							case 103:
								return 1381.487f, 3633.717f, 34.0073f;
							
							case 104:
								return 3046.249f, 6219.229f, 111.0105f;
							
							case 105:
								return 985.3563f, 5642.3f, 627.7075f;
							
							case 106:
								return 2504.378f, 5178.088f, 67.6632f;
							
							case 107:
								return 2537.341f, 4476.488f, 36.1789f;
							
							case 108:
								return 1291.73f, 4112.564f, 29.6645f;
							
							case 109:
								return 2176.232f, 4605.335f, 29.194f;
							
							case 110:
								return 3456.624f, 5135.376f, -0.3837f;
							
							case 111:
								return 4054.226f, 4518.386f, 0.4f;
							
							case 112:
								return 1074.313f, 6738.594f, 1.3817f;
							
							case 113:
								return 409.7385f, 4290.737f, 29.5f;
							
							case 114:
								return 2551.275f, 6151.57f, 161.1609f;
							
							case 115:
								return 3646.335f, 2977.049f, 0.6928f;
							
							case 116:
								return 1938.372f, 4287.003f, 29.6693f;
							
							case 117:
								return 3630.215f, 5625.841f, 1.2201f;
							
							case 118:
								return 1582.613f, 6753.431f, 0.4436f;
							
							case 119:
								return 3449.314f, 2677.52f, 0.0895f;
							
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_105(var uParam0)//Position - 0x863C
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 2975243204;
	vVar0.y = CAM::_0xDC9DA9E8789F5246();
	vVar0.z = uParam0;
	iVar1 = func_106(1, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iVar1);
	}
}

var func_106(int iParam0, bool bParam1)//Position - 0x8676
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_13(iVar2, 0, 0))
		{
			if (iVar2 != CAM::_0xDC9DA9E8789F5246() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_88(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_107(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x86DB
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	return 4294967295;
}

int func_108()//Position - 0x8F40
{
	return MISC::GET_RANDOM_INT_IN_RANGE(0, 1);
}

bool func_109()//Position - 0x8F4E
{
	if (func_111(Local_149.f_2C8))
	{
		return 0;
	}
	else if (func_110(Local_149.f_2C8))
	{
		return 1;
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1;
}

int func_110(int iParam0)//Position - 0x8F83
{
	switch (iParam0)
	{
		case 0:
			return (Global_40001.f_2B04 || Global_40001.f_2AFC);
		
		case 1:
			return (Global_40001.f_2B03 || Global_40001.f_2AFC);
		
		case 2:
			return (Global_40001.f_2B01 || Global_40001.f_2AFC);
		
		case 3:
			return (Global_40001.f_2B02 || Global_40001.f_2AFC);
		
		default:
	}
	return 0;
}

int func_111(int iParam0)//Position - 0x9007
{
	switch (iParam0)
	{
		case 0:
			return (Global_40001.f_2B00 || Global_40001.f_2AFB);
		
		case 1:
			return (Global_40001.f_2AFF || Global_40001.f_2AFB);
		
		case 2:
			return (Global_40001.f_2AFD || Global_40001.f_2AFB);
		
		case 3:
			return (Global_40001.f_2AFE || Global_40001.f_2AFB);
		
		default:
	}
	return 0;
}

int func_112()//Position - 0x908B
{
	var uVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iLocal_124 = 1;
	switch (iLocal_124)
	{
		case 0:
			return MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			break;
		
		case 1:
			iVar1 = func_113(&uVar0);
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (iVar2 >= iVar4 && iVar2 < (uVar0[iVar3] + iVar4))
				{
					return iVar3;
				}
				iVar4 = (iVar4 + uVar0[iVar3]);
				iVar3++;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
}

int func_113(var uParam0)//Position - 0x9123
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (func_13(iVar6, 1, 1))
			{
				iVar7 = PLAYER::GET_PLAYER_PED(iVar6);
				if (!PED::IS_PED_INJURED(iVar7))
				{
					iVar5 = 0;
					while (iVar5 < 4)
					{
						if (!func_115(iVar5))
						{
							if (func_114(iVar5, &vVar2, &vVar3))
							{
								if (ENTITY::IS_ENTITY_IN_AREA(iVar7, vVar2, vVar3, 0, 0, 0))
								{
									bVar4 = false;
									(*uParam0)[iVar5]++;
									iVar1++;
								}
							}
						}
						iVar5++;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar4)
	{
		iVar5 = 0;
		while (iVar5 < 4)
		{
			if (!func_115(iVar5))
			{
				(*uParam0)[iVar5] = 1;
			}
			iVar5++;
		}
	}
	return iVar1;
}

int func_114(int iParam0, var uParam1, var uParam2)//Position - 0x91F7
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 283f, -3946f, 0f };
			*uParam2 = { 4500f, 1924f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { -3747f, -3946f, 0f };
			*uParam2 = { 550f, 1868f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { -3747f, 1540f, 0f };
			*uParam2 = { 452.5f, 8022f, 0f };
			return 1;
		
		case 3:
			*uParam1 = { 268f, 1946f, 0f };
			*uParam2 = { 4500f, 8022f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

bool func_115(int iParam0)//Position - 0x92A7
{
	return (func_111(iParam0) && func_110(iParam0));
}

var func_116()//Position - 0x92C0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= Global_40001.f_2B09)
	{
		return Global_40001.f_2A97;
	}
	if (iVar1 >= Global_40001.f_2B08)
	{
		return Global_40001.f_2A96;
	}
	if (iVar1 >= Global_40001.f_2B07)
	{
		return Global_40001.f_2762;
	}
	return Global_40001.f_2762;
}

void func_117()//Position - 0x9346
{
	int iVar0;
	
	if (func_32())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Local_149.f_2C9[iVar0] == NETSHOP::_NETWORK_SHOP_BASKET_START())
			{
				if (func_118(iVar0))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_1, iVar0))
					{
						MISC::SET_BIT(&(Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_1), iVar0);
					}
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_1, iVar0))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_1), iVar0);
				}
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_1, iVar0))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_1), iVar0);
			}
			iVar0++;
		}
	}
}

int func_118(int iParam0)//Position - 0x93F8
{
	vector3 vVar0;
	var uVar1;
	
	if (func_30(iParam0, &vVar0, &uVar1))
	{
		if (func_119(vVar0, 10f, 1065353216, 5f, 1084227584, 1, 1, 1, 1123024896, 0, 4294967295, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_119(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x943D
{
	Global_24B2CE.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (fParam12 > 0f)
	{
		if (func_124(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_120(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_24B2CE.f_2++;
	return 1;
}

int func_120(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x954E
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_13(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_122(CAM::_0xDC9DA9E8789F5246()), vParam0, 1) <= (fVar2 + fParam1))
				{
					if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_13(iVar1, 1, 1))
		{
			if (!func_88(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != CAM::_0xDC9DA9E8789F5246()))
				{
					if ((func_121(iVar1) || !bParam8) && !Global_24FBF9[iVar1 /*413*/].f_103)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_122(iVar1), vParam0, 1) <= (fVar2 + fParam1))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_122(iVar1), vParam0, 1) <= (fVar2 + fParam1))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_121(int iParam0)//Position - 0x9706
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_24FBF9[iParam0 /*413*/].f_F5)
	{
		return 1;
	}
	return 0;
}

Vector3 func_122(int iParam0)//Position - 0x9731
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_53() && Global_1841F3[iVar0 /*790*/].f_2F9) && !func_123(Global_1841F3[iVar0 /*790*/].f_2FA))
	{
		return Global_1841F3[iVar0 /*790*/].f_2FA;
	}
	return func_29(iParam0);
}

int func_123(vector3 vParam0)//Position - 0x9784
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_124(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x97AE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && CAM::_0xDC9DA9E8789F5246() != iVar1) || iParam6 == 0)
		{
			if (func_13(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_121(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295)
						{
							if (((PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && uParam7) && bParam4) && func_125(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_29(iVar1), vParam0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_125(int iParam0)//Position - 0x98AA
{
	if (func_128(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	Global_2633E1 = { func_127(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2633E1))
	{
		return 1;
	}
	if (func_126(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_126(int iParam0, int iParam1)//Position - 0x98F1
{
	int iVar0;
	
	iVar0 = func_75(iParam0);
	if (!iVar0 == func_90())
	{
		if (iVar0 == func_75(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_127(int iParam0)//Position - 0x991C
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_128(int iParam0, int iParam1)//Position - 0x9933
{
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		Global_2633E1 = { func_127(iParam0) };
		Global_2633EE = { func_127(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2633E1))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2633EE))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_26339B, 35, &Global_2633E1);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2633BE, 35, &Global_2633EE);
				if (Global_26339B == Global_2633BE)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_129()//Position - 0x99A0
{
	int iVar0;
	int iVar1;
	
	func_615();
	if (func_613())
	{
		func_498();
	}
	if (func_497(CAM::_0xDC9DA9E8789F5246()) || func_496(CAM::_0xDC9DA9E8789F5246()))
	{
		func_495();
	}
	if ((!func_6(CAM::_0xDC9DA9E8789F5246()) && !func_494(0)) && !func_494(func_493(132)))
	{
		if (func_470(0, 1, 1))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 3))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_114, 3);
			}
			switch (Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_3)
			{
				case 0:
					if (Local_149.f_8 == 1)
					{
						func_469(1);
						func_468(1);
					}
					else if (Local_149.f_8 >= 2)
					{
						func_468(1);
					}
					break;
				
				case 1:
					func_464(6);
					if (Local_149.f_8 >= 2)
					{
						func_468(2);
					}
					func_464(2);
					func_462(0);
					func_460((Global_40001.f_2AF9 - func_461(&(Local_149.f_29B), 0, 0)));
					func_457(func_459((Global_40001.f_2AF9 - func_461(&(Local_149.f_29B), 0, 0)), 0), func_458(4294967295));
					func_437();
					break;
				
				case 2:
					if (Local_149.f_8 > 2)
					{
						func_469(0);
						func_419(132, 1065353216, 1065353216, 0, 0, 0, 0);
						if (!func_6(CAM::_0xDC9DA9E8789F5246()))
						{
							func_418();
						}
						else
						{
							MISC::SET_BIT(&iLocal_114, 5);
						}
						if (Local_149.f_2C6)
						{
							func_417();
						}
						if (Local_149.f_2C3)
						{
							Global_26862F.f_12C2 = 1;
						}
						else
						{
							Global_26862F.f_12C2 = 0;
						}
						func_416();
						if (!func_6(CAM::_0xDC9DA9E8789F5246()))
						{
							if (func_32())
							{
								func_401(678f, 794f, 206f, 8f, 0);
								func_401(1911.3f, 4714.6f, 41.1f, 8f, 0);
								func_401(688.5021f, 735.4581f, 181.296f, 8f, 0);
							}
						}
						func_468(3);
					}
					break;
				
				case 3:
					if (Local_149.f_8 > 3)
					{
						func_468(4);
					}
					else
					{
						if (!iLocal_134)
						{
							if (func_400())
							{
								iLocal_134 = 1;
							}
						}
						iVar1 = 0;
						while (iVar1 < Local_149.f_2C5)
						{
							if (uLocal_116[iVar1] || iLocal_134)
							{
								func_308(iVar1);
							}
							iVar1++;
						}
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uLocal_116[iLocal_110] = func_307(iLocal_110);
							uLocal_115[iLocal_110] = func_305(iLocal_110);
							if (!uLocal_115[iLocal_110])
							{
								func_308(iLocal_110);
							}
							iLocal_110++;
							if (iLocal_110 >= Local_149.f_2C5)
							{
								iLocal_110 = 0;
							}
							iVar0++;
						}
						func_462(0);
						func_464(4);
						func_464(5);
						if (func_303(0) && !func_302(0))
						{
							func_301();
						}
						if ((!func_300(CAM::_0xDC9DA9E8789F5246()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
						{
							func_299();
						}
						func_298();
					}
					func_295();
					func_294();
					func_418();
					func_276();
					func_437();
					break;
				
				case 4:
					func_183();
					func_167();
					func_166();
					func_462(1);
					func_165();
					func_276();
					if (func_154(&uLocal_136, !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_149.f_2, 2)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_149.f_2, 2))
					{
						if (func_32())
						{
							func_468(5);
						}
						else
						{
							func_468(6);
						}
					}
					break;
				
				case 5:
					if (Local_149.f_8 > 5)
					{
						func_468(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_149();
		}
	}
	else
	{
		func_495();
		func_149();
	}
	func_136();
	func_131();
	func_130();
}

void func_130()//Position - 0x9D33
{
	struct<2> Var0;
	int iVar1;
	
	if (func_32())
	{
		Var0 = { Local_149.f_2D9[iLocal_125 /*2*/] };
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1))
		{
			iVar1 = NETWORK::NET_TO_VEH(Var0.f_1);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar1, 0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
				}
			}
		}
		iLocal_125++;
		if (iLocal_125 >= 10)
		{
			iLocal_125 = 0;
			iLocal_147 = iLocal_146;
			iLocal_146 = 0;
		}
	}
}

void func_131()//Position - 0x9DA0
{
	if (Local_149.f_8 == 5)
	{
		if (func_36(&(Local_149.f_29D)))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_149.f_2D9[iLocal_125 /*2*/].f_1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_149.f_2D9[iLocal_125 /*2*/].f_1), 0))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_144, iLocal_125))
					{
						MISC::SET_BIT(&iLocal_144, iLocal_125);
						iLocal_145[iLocal_125] = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_145[iLocal_125], "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_149.f_2D9[iLocal_125 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(iLocal_145[iLocal_125], "Time", 30f);
					}
					if ((30000 - func_461(&(Local_149.f_29D), 0, 0)) >= 0)
					{
						if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_149.f_2D9[iLocal_125 /*2*/].f_1), 0))
						{
							func_464(3);
							iLocal_146 = 1;
						}
					}
					else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_149.f_2D9[iLocal_125 /*2*/].f_1))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(NETWORK::NET_TO_VEH(Local_149.f_2D9[iLocal_125 /*2*/].f_1));
						NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_149.f_2D9[iLocal_125 /*2*/].f_1), 1, 0, 4294967295);
					}
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_144, iLocal_125) && !AUDIO::HAS_SOUND_FINISHED(iLocal_145[iLocal_125]))
				{
					AUDIO::STOP_SOUND(iLocal_145[iLocal_125]);
				}
			}
			if (iLocal_147)
			{
				if (!func_86(CAM::_0xDC9DA9E8789F5246()))
				{
					func_133(func_459((30000 - func_461(&(Local_149.f_29D), 0, 0)), 0), "HTV_DESTR", 0, 1, 4294967295, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
					func_132();
				}
			}
		}
	}
}

void func_132()//Position - 0x9F37
{
	Global_14E696.f_440 = 1;
}

void func_133(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x9F47
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_135(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_134(7, iVar0);
		Global_14E696.f_112F[iVar0] = uParam0;
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

void func_134(int iParam0, int iParam1)//Position - 0xA095
{
	MISC::SET_BIT(&(Global_14E696.f_17F2[iParam0]), iParam1);
}

bool func_135(int iParam0, int iParam1)//Position - 0xA0AE
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E696.f_17F2[iParam0], iParam1);
}

void func_136()//Position - 0xA0C7
{
	char* sVar0;
	
	if (((func_13(CAM::_0xDC9DA9E8789F5246(), 1, 1) && !func_6(CAM::_0xDC9DA9E8789F5246())) && !func_496(CAM::_0xDC9DA9E8789F5246())) && func_470(0, 1, 1))
	{
		if (Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_3 == 1)
		{
			if (Local_149.f_2C3)
			{
				sVar0 = "CPC_TILELA";
			}
			else
			{
				sVar0 = "CPC_TILEL";
			}
			if (func_32() && !PED::IS_PED_IN_FLYING_VEHICLE(AUDIO::_0x0626A247D2405330()))
			{
				func_137("CPC_PREPAIR", sVar0, func_148(), 0);
			}
			else
			{
				func_137("CPC_PREP", sVar0, func_148(), 0);
			}
		}
		else
		{
			func_416();
		}
	}
	else
	{
		func_416();
	}
}

int func_137(char* sParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0xA16D
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam1) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam2) > 23)
	{
		return 0;
	}
	if (func_147(sParam0, sParam1, sParam2))
	{
		return 0;
	}
	func_141();
	Global_140740 = 4;
	StringCopy(&(Global_140740.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_140740.f_9 = MISC::GET_HASH_KEY(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	StringCopy(&(Global_140740.f_10), sParam1, 64);
	StringCopy(&(Global_140740.f_20), sParam2, 64);
	func_140();
	func_139(bParam3);
	func_138();
	return 1;
}

void func_138()//Position - 0xA22C
{
	MISC::SET_BIT(&(Global_140740.f_3B), 1);
}

void func_139(bool bParam0)//Position - 0xA23F
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_140740.f_3B), 0);
		return;
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_140740.f_3B), 0);
}

void func_140()//Position - 0xA265
{
	Global_140740.f_A = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), 86400000);
	Global_140740.f_B = HUD::_0x13C4B962653A5280();
}

void func_141()//Position - 0xA28A
{
	func_143();
	func_142(0);
}

void func_142(bool bParam0)//Position - 0xA29B
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_140740 = 20;
	StringCopy(&(Global_140740.f_1), "", 32);
	Global_140740.f_9 = 0;
	if (bVar0)
	{
		Global_140740.f_A = HUD::_0x13C4B962653A5280();
		Global_140740.f_B = HUD::_0x13C4B962653A5280();
	}
	StringCopy(&(Global_140740.f_C), "", 16);
	StringCopy(&(Global_140740.f_10), "", 64);
	StringCopy(&(Global_140740.f_20), "", 64);
	Global_140740.f_34 = 0;
	Global_140740.f_35 = 0;
	Global_140740.f_36 = 0;
	Global_140740.f_37 = 4294967295;
	Global_140740.f_38 = 0;
	Global_140740.f_3B = 0;
	if (bParam0)
	{
		return;
	}
}

void func_143()//Position - 0xA32D
{
	if (!func_146())
	{
	}
	if (func_145())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_140740.f_C));
		func_144();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_144()//Position - 0xA356
{
	switch (Global_140740)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_140740.f_34);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_140740.f_34);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_140740.f_35);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			return;
		
		case 6:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			return;
		
		case 8:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			return;
		
		case 9:
			HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_140740.f_10));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_20));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 13:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_39);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 11:
			HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_140740.f_10));
			return;
		
		case 14:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 15:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_39);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_20));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_30));
			return;
		
		case 16:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			return;
		
		case 19:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_30));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_20));
			return;
		
		default:
	}
}

int func_145()//Position - 0xA5C8
{
	if (Global_140740 == 20)
	{
		return 0;
	}
	return 1;
}

int func_146()//Position - 0xA5DE
{
	if (!func_145())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_140740.f_C));
	func_144();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_147(char* sParam0, char* sParam1, char* sParam2)//Position - 0xA604
{
	if (!func_145())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_C)))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_140740.f_10)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam2) == MISC::GET_HASH_KEY(&(Global_140740.f_20));
}

char* func_148()//Position - 0xA682
{
	switch (Local_149.f_2C8)
	{
		case 0:
			return "CPC_WARN0";
			break;
		
		case 1:
			return "CPC_WARN1";
			break;
		
		case 2:
			return "CPC_WARN2";
			break;
		
		case 3:
			return "CPC_WARN3";
			break;
	}
	return "";
}

void func_149()//Position - 0xA6D4
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 3))
	{
		iLocal_134 = 1;
		func_166();
		HUD::CLEAR_ALL_HELP_MESSAGES();
		func_462(1);
		func_153();
		func_151();
		MISC::SET_BIT(&iLocal_114, 3);
		func_150();
	}
}

void func_150()//Position - 0xA70B
{
	Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_7 = 0;
}

void func_151()//Position - 0xA721
{
	if (Global_24D471.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_152();
	}
}

void func_152()//Position - 0xA73A
{
	struct<28> Var0;
	
	if (SCRIPT::IS_THREAD_ACTIVE(Global_24D471.f_6))
	{
		if (!Global_24D471.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_15 = 1115815936;
	Var0.f_1B = 3212836864;
	Global_24D471 = { Var0 };
	Global_24D471.f_6 = 4294967295;
}

void func_153()//Position - 0xA797
{
	struct<6> Var0;
	
	if (Global_24B2CE.f_1E4.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_24B2CE.f_1E4 = { Var0 };
	}
}

int func_154(var uParam0, bool bParam1)//Position - 0xA7BC
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_164()) && !(func_98(CAM::_0xDC9DA9E8789F5246(), 0) && (func_94(CAM::_0xDC9DA9E8789F5246()) || func_163(CAM::_0xDC9DA9E8789F5246())))) && !func_161(CAM::_0xDC9DA9E8789F5246()))
	{
		func_160();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_36(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0, 0);
			}
			else if (func_1(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1806E7.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_26862F.f_11DE), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_159(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_36(&(uParam0->f_5)))
			{
				if (func_1(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_156();
				func_159(uParam0, 2);
			}
			break;
		
		case 2:
			func_156();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_155("AMEV_LBD_HELP"))
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				}
				func_159(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DE), 1);
				func_159(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DE), 1);
			return 1;
	}
	return 0;
}

bool func_155(char* sParam0)//Position - 0xA937
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_156()//Position - 0xA94A
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 0))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_310, 2)) && func_13(CAM::_0xDC9DA9E8789F5246(), 1, 1)) && !Global_10B8E) && !Global_D072) && !CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_26862F.f_11DE), 1);
			func_158("AMEV_LBD_HELP", 4294967295);
			func_157(1);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DE), 0);
		}
	}
}

void func_157(int iParam0)//Position - 0xA9CC
{
	unk_0x652B3075D0E58C13(3, 21, 200, 0, 0);
	if (iParam0 && !func_164())
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_158(char* sParam0, int iParam1)//Position - 0xA9F9
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam1);
}

void func_159(var uParam0, int iParam1)//Position - 0xAA10
{
	*uParam0 = iParam1;
}

void func_160()//Position - 0xAA1D
{
	Global_258852 = 1;
}

int func_161(int iParam0)//Position - 0xAA2A
{
	if (iParam0 != func_90())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_162(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 2;
			}
		}
	}
	return 0;
}

int func_162(int iParam0)//Position - 0xAA70
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
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
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
	}
	return 4294967295;
}

bool func_163(int iParam0)//Position - 0xADCA
{
	return func_93(iParam0, 19);
}

bool func_164()//Position - 0xADDA
{
	return Global_252F9E.f_A90[0 /*80*/].f_1 != 0;
}

void func_165()//Position - 0xADF0
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1270, 1))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1270), 1);
	}
	if (Global_26862F.f_1270 > 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
		AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
		Global_26862F.f_1270 = 0;
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
		AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
		if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "am_pi_menu"))
		{
			if (Global_26862F.f_127A > 4294967295)
			{
				AUDIO::RELEASE_SOUND_ID(Global_26862F.f_127A);
				Global_26862F.f_127A = 4294967295;
			}
		}
	}
}

void func_166()//Position - 0xAE8E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_149.f_2C5)
	{
		if (HUD::DOES_BLIP_EXIST(vLocal_132[iVar0 /*3*/]))
		{
			HUD::REMOVE_BLIP(&(vLocal_132[iVar0 /*3*/]));
			GRAPHICS::DELETE_CHECKPOINT(vLocal_132[iVar0 /*3*/].f_1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_122[iVar0] = 0;
		iVar0++;
	}
}

void func_167()//Position - 0xAEED
{
	char* sVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2, 0) && (func_182() || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_149.f_2, 2)))
	{
		if (func_56(func_181()))
		{
			func_180();
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_149.f_2, 2))
		{
			if (func_303(0))
			{
				if (func_302(0))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_149.f_2, 0))
					{
						sVar0 = "CPC_END";
					}
					else
					{
						sVar0 = "CPC_ENDBONUS";
					}
					func_179(64, Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_4, sVar0, "AMCH_WIN", 1, 15000, 3212836864, 2);
				}
				else
				{
					iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_149.f_2A2[0]);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
					{
						iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
						if (func_302(1))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_149.f_2, 0))
							{
								sVar0 = "CPC_2ND";
							}
							else
							{
								sVar0 = "CPC_2NDBONUS";
							}
							func_179(67, Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_4, sVar0, "CPC_OVER", 1, 15000, 3212836864, 2);
						}
						else if (func_302(2))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_149.f_2, 0))
							{
								sVar0 = "CPC_3RD";
							}
							else
							{
								sVar0 = "CPC_3RDBONUS";
							}
							func_179(67, Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_4, sVar0, "CPC_OVER", 1, 15000, 3212836864, 2);
						}
						else
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_149.f_2, 0) && Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_4 >= Global_40001.f_2B99)
							{
								sVar0 = "CPC_LOSEBONUS";
							}
							else
							{
								sVar0 = "CPC_LOSE";
							}
							sVar3 = PLAYER::GET_PLAYER_NAME(iVar2);
							if (func_76(iVar2, 1))
							{
								sVar3 = func_170(iVar2);
							}
							func_169(66, Local_1516[Local_149.f_2A2[0] /*5*/].f_4, sVar0, sVar3, "CPC_OVER", 1, 15000, 2);
						}
					}
				}
			}
			else
			{
				func_42(66, "CPC_OVER", "CPC_NOWIN", 1, 15000, 2, 1);
			}
		}
		else
		{
			func_41("", "", 1);
		}
		MISC::SET_BIT(&(Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2), 0);
		func_168(132);
	}
}

void func_168(int iParam0)//Position - 0xB0F3
{
	if (iParam0 == iParam0)
	{
	}
}

int func_169(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)//Position - 0xB102
{
	struct<80> Var0;
	
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 3212836864;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = 4294967295;
	func_91(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_19), sParam3, 64);
	Var0.f_47 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_48 = iParam7;
	return func_43(&Var0);
}

char* func_170(int iParam0)//Position - 0xB175
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		sVar0 = func_178(&(Global_18CD5B[iParam0 /*560*/].f_B.f_63));
		return sVar0;
	}
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_73 != Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_73)
	{
		sVar0 = func_173(iParam0, 0);
		return sVar0;
	}
	if (((func_93(iParam0, 28) || func_93(CAM::_0xDC9DA9E8789F5246(), 28)) || func_172(iParam0)) && !func_171(iParam0))
	{
		return func_173(iParam0, 0);
	}
	iVar1 = func_75(iParam0);
	if (iVar1 != func_90())
	{
		if (iVar1 != CAM::_0xDC9DA9E8789F5246())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, 4294967295, 1))
			{
				return func_173(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_90())
	{
		sVar0 = func_178(&(Global_18CD5B[iVar1 /*560*/].f_B.f_63));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_173(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_171(int iParam0)//Position - 0xB27B
{
	struct<13> Var0;
	
	Var0 = { func_127(iParam0) };
	if (MISC::IS_DURANGO_VERSION())
	{
		if (NETWORK::_0x72D918C99BCACC54(0))
		{
			if (NETWORK::_0xB57A49545BA53CE7(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_172(int iParam0)//Position - 0xB2AB
{
	struct<13> Var0;
	
	if (iParam0 != func_90())
	{
		Var0 = { func_127(iParam0) };
		if (MISC::IS_ORBIS_VERSION() || MISC::IS_PC_VERSION())
		{
			if (NETWORK::_0x72D918C99BCACC54(0))
			{
				return 0;
			}
		}
		else if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::_0x72D918C99BCACC54(0))
			{
				if (NETWORK::_0xB57A49545BA53CE7(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_173(int iParam0, bool bParam1)//Position - 0xB304
{
	if (!bParam1)
	{
		if (func_175(iParam0, 1))
		{
			return func_174();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_174()//Position - 0xB32B
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

bool func_175(int iParam0, bool bParam1)//Position - 0xB33B
{
	return func_176(iParam0, bParam1, 1);
}

int func_176(int iParam0, bool bParam1, int iParam2)//Position - 0xB34C
{
	int iVar0;
	
	if (iParam0 == func_90())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_177(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18CD5B[iParam0 /*560*/].f_B;
	if (iVar0 != func_90() && Global_18CD5B[iVar0 /*560*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_177(int iParam0, int iParam1)//Position - 0xB3A8
{
	if (iParam0 != func_90())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_90())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B == iParam0 && Global_18CD5B[iParam0 /*560*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_178(var uParam0)//Position - 0xB3F7
{
	return uParam0;
}

int func_179(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xB401
{
	struct<80> Var0;
	
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 3212836864;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = 4294967295;
	func_91(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_47 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_48 = iParam7;
	return func_43(&Var0);
}

void func_180()//Position - 0xB472
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_252F9E.f_A90[iVar0 /*80*/].f_2 != 0)
		{
			Global_252F9E.f_A90[iVar0 /*80*/].f_2 = 5;
			MISC::SET_BIT(&(Global_252F9E.f_A90[iVar0 /*80*/].f_45), 0);
		}
		iVar0++;
	}
}

int func_181()//Position - 0xB4BD
{
	return Global_252F9E.f_A90[0 /*80*/].f_1;
}

bool func_182()//Position - 0xB4D1
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 25);
}

void func_183()//Position - 0xB4E5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2, 1))
	{
		if (func_6(CAM::_0xDC9DA9E8789F5246()))
		{
			MISC::SET_BIT(&(Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2), 1);
			return;
		}
		if (func_496(CAM::_0xDC9DA9E8789F5246()))
		{
			MISC::SET_BIT(&(Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2), 1);
			return;
		}
		if (Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_4 >= Global_40001.f_2B99)
		{
			iVar3 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT((Local_149.f_1 - iLocal_112)) / 60f) / 1000f));
			if (iVar3 > Global_40001.f_2C3A)
			{
				iVar3 = Global_40001.f_2C3A;
			}
			else if (iVar3 < 1)
			{
				iVar3 = 1;
			}
			iVar2 = (func_275() * iVar3);
			iVar1 = (func_274() * iVar3);
		}
		else
		{
			func_272(0);
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_149.f_2, 2))
		{
			if (Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_4 >= Global_40001.f_2B99)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_149.f_2, 0))
				{
					iVar0 = (iVar0 + SYSTEM::ROUND((IntToFloat(func_271()) * Global_40001.f_2C45)));
				}
			}
			if (func_302(0))
			{
				Local_1515.f_5 = 1;
				iVar1 = (iVar1 + SYSTEM::ROUND((IntToFloat(func_270()) * Global_40001.f_2C46)));
			}
			if ((Local_149.f_2A2[0] != NETSHOP::_NETWORK_SHOP_BASKET_START() && Local_149.f_2A2[1] != NETSHOP::_NETWORK_SHOP_BASKET_START()) && Local_149.f_2A2[2] != NETSHOP::_NETWORK_SHOP_BASKET_START())
			{
				if (Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_4 >= Global_40001.f_2B99)
				{
					func_272(1);
				}
			}
		}
		func_251(&iVar0, 1);
		iVar0 = (iVar0 + iVar2);
		if (iVar0 > 0)
		{
			if (func_250())
			{
				func_238(4235299214, iVar0, &uVar4, 0, 1, 0);
			}
			else
			{
				NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_CP_COLLECTION", &uVar5);
			}
		}
		Local_1515.f_6 = iVar0;
		if (!Global_40001.f_2C7A)
		{
			if (Local_1515.f_6 > 0)
			{
				func_237(8, Local_1515.f_6);
			}
		}
		Global_258AE3 = iVar0;
		func_236();
		func_184(0, AUDIO::_0x0626A247D2405330(), "", 2658791846, 3041509490, iVar1, 1, 4294967295, 0, 0, 0);
		Local_1515.f_7 = (Local_1515.f_7 + iVar1);
		MISC::SET_BIT(&(Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2), 1);
	}
}

int func_184(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xB70B
{
	return func_185(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_185(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xB72D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_195(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == 3702944691 || iParam4 == 2379775567)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_191(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_186(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_186(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0xB7A6
{
	vector3 vVar0;
	
	vVar0 = { func_189(iParam0, 1) };
	if (iParam0 == func_188(AUDIO::_0x0626A247D2405330()))
	{
		func_187(1);
	}
	func_191(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_187(int iParam0)//Position - 0xB7DA
{
	Global_252F9E.f_75E = iParam0;
}

int func_188(int iParam0)//Position - 0xB7EB
{
	return iParam0;
}

Vector3 func_189(int iParam0, bool bParam1)//Position - 0xB7F5
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		vVar1 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_190(AUDIO::_0x0626A247D2405330()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_190(int iParam0)//Position - 0xB8B9
{
	return iParam0;
}

void func_191(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xB8C3
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = 4294967295;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_252F9E.f_505[iVar0 /*30*/].f_6 == 0 || Global_252F9E.f_505[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != 4294967295)
		{
			Global_252F9E.f_505[iVar1 /*30*/] = { vParam0 };
			Global_252F9E.f_505[iVar1 /*30*/].f_6 = 1;
			Global_252F9E.f_505[iVar1 /*30*/].f_4 = func_194(Global_252F9E.f_505[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_252F9E.f_505[iVar1 /*30*/].f_7 = HUD::_0x13C4B962653A5280();
			Global_252F9E.f_505[iVar1 /*30*/].f_3 = iParam1;
			Global_252F9E.f_505[iVar1 /*30*/].f_8 = iParam2;
			Global_252F9E.f_505[iVar1 /*30*/].f_9 = func_193();
			Global_252F9E.f_505[iVar1 /*30*/].f_A = func_192();
			StringCopy(&(Global_252F9E.f_505[iVar1 /*30*/].f_16), sParam3, 16);
			Global_252F9E.f_505[iVar1 /*30*/].f_1A = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), iParam4);
		}
	}
}

int func_192()//Position - 0xB9DA
{
	if (Global_252F9E.f_75E)
	{
		Global_252F9E.f_75E = 0;
		return 1;
	}
	Global_252F9E.f_75E = 0;
	return 0;
}

var func_193()//Position - 0xBA04
{
	var uVar0;
	
	uVar0 = Global_252F9E.f_760;
	Global_252F9E.f_760 = 1;
	return uVar0;
}

float func_194(vector3 vParam0, var uParam1, var uParam2)//Position - 0xBA1F
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam0, 1);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_195(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xBAB8
{
	var uVar0;
	
	uVar0 = func_196(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_196(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xBADB
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_235(CAM::_0xDC9DA9E8789F5246()) || func_234(CAM::_0xDC9DA9E8789F5246()))
	{
		if (Global_40001.f_2532 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_40001.f_2532;
		}
	}
	else if (func_232() || func_229(CAM::_0xDC9DA9E8789F5246()))
	{
		if (Global_40001.f_5870 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_40001.f_5870;
		}
	}
	else if (Global_40001.f_197C > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_40001.f_197C;
	}
	if (func_228(sParam2))
	{
	}
	if (func_227())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_225(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_224(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_222(0, &iVar1);
					break;
				
				case 3:
					func_222(1, &iVar1);
					break;
				
				case 1:
					func_220(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_199937)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_217(1164, iVar1, 4294967295);
			if (iParam1 == 0)
			{
				func_206((func_216(CAM::_0xDC9DA9E8789F5246()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_2 != 4294967295)
				{
					func_217(1165, iVar1, 4294967295);
				}
				if (iParam1 == 0)
				{
					func_201(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == 4294967295)
			{
				func_197((func_199(CAM::_0xDC9DA9E8789F5246()) + iVar1));
			}
			else
			{
				func_197((func_199(CAM::_0xDC9DA9E8789F5246()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_197(int iParam0)//Position - 0xBCD9
{
	if (func_227())
	{
		Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_5 = iParam0;
		func_198(joaat("mpply_globalxp"), iParam0);
	}
}

void func_198(int iParam0, int iParam1)//Position - 0xBD04
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_199(int iParam0)//Position - 0xBD20
{
	if (iParam0 > 4294967295)
	{
		if (func_13(iParam0, 0, 1))
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return func_200(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_5;
			}
		}
		else
		{
			return func_200(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_200(int iParam0)//Position - 0xBD71
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

void func_201(int iParam0)//Position - 0xBD8F
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_127(CAM::_0xDC9DA9E8789F5246()) };
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_204(func_205(&Var0));
			if (iVar1 == 0)
			{
				func_203(&Global_150A08, iParam0);
				func_202(joaat("mpply_crew_local_xp_0"), Global_150A08);
			}
			else if (iVar1 == 1)
			{
				func_203(&Global_150A09, iParam0);
				func_202(joaat("mpply_crew_local_xp_1"), Global_150A09);
			}
			else if (iVar1 == 2)
			{
				func_203(&Global_150A0A, iParam0);
				func_202(joaat("mpply_crew_local_xp_2"), Global_150A0A);
			}
			else if (iVar1 == 3)
			{
				func_203(&Global_150A0B, iParam0);
				func_202(joaat("mpply_crew_local_xp_3"), Global_150A0B);
			}
			else if (iVar1 == 4)
			{
				func_203(&Global_150A0C, iParam0);
				func_202(joaat("mpply_crew_local_xp_4"), Global_150A0C);
			}
		}
	}
}

void func_202(int iParam0, int iParam1)//Position - 0xBE63
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_150A03 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_150A05 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_150A05 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_150A06 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_150A07 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_150A08 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_150A09 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_150A0A = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_150A0B = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_150A0C = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_150A0D = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_150A0E = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_150A0F = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_150A10 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_150A11 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_150A12 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_150A13 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_203(var uParam0, int iParam1)//Position - 0xBF88
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_204(int iParam0)//Position - 0xBF99
{
	if (iParam0 == Global_150A03)
	{
		return 0;
	}
	else if (iParam0 == Global_150A04)
	{
		return 1;
	}
	else if (iParam0 == Global_150A05)
	{
		return 2;
	}
	else if (iParam0 == Global_150A06)
	{
		return 3;
	}
	else if (iParam0 == Global_150A07)
	{
		return 4;
	}
	else
	{
		return 4294967295;
	}
	return 4294967295;
}

int func_205(var uParam0)//Position - 0xBFF6
{
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_258207;
		}
	}
	return Global_258207;
}

void func_206(int iParam0, int iParam1, int iParam2)//Position - 0xC01A
{
	if (func_227())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2512 == 0 && iParam1 != 3218036588)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_150A81[func_215(4294967295)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, 3771058946, iParam1);
					return;
				}
				else if (iParam0 == Global_150A81[func_215(4294967295)])
				{
					return;
				}
			}
		}
		if (Global_40001.f_2511 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, 3136273443, 2949543449);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_40001.f_2511 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, 2708045899, iParam1);
				return;
			}
		}
		if (func_214(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_1 = iParam0;
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_6 = func_212(iParam0, 1);
		}
		func_211(639, iParam0, 4294967295, 1);
		func_210(640, func_212(iParam0, 1), 4294967295, 1, 0);
		Global_150A81[func_215(4294967295)] = iParam0;
		func_207(7, 0);
	}
}

void func_207(int iParam0, int iParam1)//Position - 0xC13B
{
	int iVar0;
	
	if (func_209(iParam0, iParam1))
	{
		iVar0 = func_208();
		Global_2581E6[iVar0] = iParam0;
	}
}

int func_208()//Position - 0xC15E
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

int func_209(int iParam0, var uParam1)//Position - 0xC193
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

void func_210(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xC219
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_215(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_211(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC249
{
	int iVar0;
	
	iVar0 = Global_26B05F[iParam0 /*3*/][func_215(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_150A45[func_215(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_150A4B[func_215(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_150A51[func_215(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_150A57[func_215(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_150A2D[func_215(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_150A33[func_215(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_150A39[func_215(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_150A3F[func_215(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_150A15[func_215(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_150A1B[func_215(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_150A21[func_215(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_150A27[func_215(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_150A5D[func_215(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_150A63[func_215(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_150A69[func_215(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_150A6F[func_215(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_150A75[func_215(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_150A7B[func_215(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_150A81[func_215(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_150A87[func_215(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_272FA8[0 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_272FA8[1 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_272FA8[2 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_272FA8[3 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_273025[func_215(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_150A8D[func_215(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_150A93[func_215(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_150A99[func_215(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_150A9F[func_215(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_272FE5[0 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_272FE5[1 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_272FE5[2 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_272FE5[3 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_272FE5[4 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_273028[0 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_273028[1 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_273028[2 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_273028[3 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_273028[4 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_273038[0 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_273038[1 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_273038[2 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_273038[3 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_273038[4 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_272FE5[5 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_272FA8[4 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_273048[func_215(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_273051[func_215(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_27304B[func_215(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_273054[func_215(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_27304E[func_215(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_273057[func_215(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_27305A[func_215(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_272FE5[6 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_272FA8[5 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_272FE5[7 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_272FA8[6 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_272FE5[8 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_272FA8[7 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_272FE5[9 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_272FA8[8 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_272FE5[10 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_272FA8[9 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_272FE5[11 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_272FA8[10 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_272FE5[12 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_272FA8[11 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_272FE5[13 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_272FA8[12 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_272FE5[14 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_272FA8[13 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_272FE5[15 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_272FA8[14 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_272FE5[16 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_272FA8[15 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_272FE5[17 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_272FA8[16 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_272FA8[17 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_272FA8[18 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_272FA8[19 /*3*/][func_215(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_212(int iParam0, bool bParam1)//Position - 0xCA54
{
	if (bParam1)
	{
	}
	return func_213(iParam0, 0);
}

int func_213(int iParam0, int iParam1)//Position - 0xCA68
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_4646A[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_4646A[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_214(int iParam0)//Position - 0xCB27
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	else
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_252F9E.f_1, iParam0);
	}
	return 1;
}

int func_215(int iParam0)//Position - 0xCB4C
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_39();
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

int func_216(int iParam0)//Position - 0xCB80
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > 4294967295)
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return Global_150A81[func_215(4294967295)];
			}
			else if (func_214(iParam0))
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_150A81[func_215(4294967295)];
	}
	return 0;
}

void func_217(int iParam0, int iParam1, int iParam2)//Position - 0xCBDD
{
	int iVar0;
	
	iVar0 = func_219(iParam0, func_215(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_218(iParam0))
	{
		func_210(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_211(iParam0, iVar0, iParam2, 1);
	}
}

int func_218(int iParam0)//Position - 0xCC1F
{
	if (Global_150A02)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 8527:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
				return 1;
				break;
			}
	}
	return 0;
}

int func_219(int iParam0, int iParam1, int iParam2)//Position - 0xCE29
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_215(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

void func_220(int iParam0)//Position - 0xCE5B
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246());
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != 4294967295)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_65(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != CAM::_0xDC9DA9E8789F5246())
					{
						if (func_128(CAM::_0xDC9DA9E8789F5246(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_221(*iParam0, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_221(*iParam0, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_221(int iParam0, int iParam1)//Position - 0xCF46
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_222(bool bParam0, int iParam1)//Position - 0xCF67
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_13(iVar4, 0, 1))
				{
					if (iVar4 != CAM::_0xDC9DA9E8789F5246())
					{
						iVar1++;
						if (func_128(CAM::_0xDC9DA9E8789F5246(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_13(iVar4, 1, 1))
			{
				if (iVar4 != CAM::_0xDC9DA9E8789F5246())
				{
					if (func_223(CAM::_0xDC9DA9E8789F5246(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_128(CAM::_0xDC9DA9E8789F5246(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_221(*iParam1, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_221(*iParam1, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_223(int iParam0, int iParam1)//Position - 0xD07F
{
	return SYSTEM::VDIST(func_29(iParam0), func_29(iParam1));
	return 0f;
}

int func_224(int iParam0)//Position - 0xD09B
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_221(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_225(int iParam0)//Position - 0xD0D2
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_216(CAM::_0xDC9DA9E8789F5246()))
		{
			iParam0 = -func_216(CAM::_0xDC9DA9E8789F5246());
		}
	}
	if (func_226(8000, 0, 0) > 0)
	{
		if (func_226(8000, 0, 0) < (iParam0 + func_216(CAM::_0xDC9DA9E8789F5246())))
		{
			iParam0 = (func_226(8000, 0, 0) - func_216(CAM::_0xDC9DA9E8789F5246()));
		}
	}
	return iParam0;
}

int func_226(int iParam0, bool bParam1, int iParam2)//Position - 0xD136
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_4646A[iParam0];
}

int func_227()//Position - 0xD15E
{
	return 1;
}

int func_228(char* sParam0)//Position - 0xD167
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

int func_229(int iParam0)//Position - 0xD1A0
{
	return func_230(func_231(iParam0));
}

int func_230(int iParam0)//Position - 0xD1B2
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_231(int iParam0)//Position - 0xD1CC
{
	if (func_98(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_21;
	}
	return 4294967295;
}

bool func_232()//Position - 0xD1EF
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_53();
	}
	return func_233(Global_440000.f_1FEDE);
}

int func_233(int iParam0)//Position - 0xD213
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_40001.f_138A[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_234(int iParam0)//Position - 0xD24D
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 2;
}

bool func_235(int iParam0)//Position - 0xD262
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 7;
}

void func_236()//Position - 0xD277
{
	Global_258851 = 1;
}

void func_237(int iParam0, int iParam1)//Position - 0xD284
{
	if (iParam1 > 0)
	{
		if (Global_40001.f_5B34 == 0 || Global_40001.f_5B34 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_40001.f_5B34 == 1)
			{
				Global_26862F.f_110 = iParam0;
				if (iParam1 > Global_40001.f_1949)
				{
					iParam1 = Global_40001.f_1949;
				}
				Global_26862F.f_111 = iParam1;
				Global_26862F.f_112 = 0;
			}
		}
	}
}

void func_238(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xD2F6
{
	int iVar0;
	
	if (!func_250())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case 2649738075:
		case 3709248901:
		case 2935592169:
		case 454359403:
		case 3312573245:
		case 1643659499:
		case 2222677642:
		case 650665123:
		case 1654961868:
		case 3418119454:
		case 68030260:
		case 2172668013:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case 3778748250:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case 2905739390:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case 3395164992:
		case 3631022961:
		case 1208553146:
		case 3681746286:
		case 3623904420:
		case 3887766060:
		case 3540943093:
		case 2409522409:
		case 1931729587:
		case 1064954035:
		case 4114826223:
		case 2131324797:
		case 1612072658:
		case 3777519894:
		case 1948102096:
		case 1108628223:
		case 2460920732:
		case 3055958484:
		case 4072603454:
		case 3018288428:
		case 1564537328:
		case 4198373795:
		case 742499889:
		case 2050093329:
		case 2542479227:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case 2964212290:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case 3958163446:
		case 2882274531:
		case 618167454:
		case 980623936:
		case 437291904:
		case 4159154248:
		case 3364862819:
		case 2874057976:
		case 2561569253:
		case 2402207034:
		case 2749230248:
		case 2039302543:
		case 402505853:
		case 3151457114:
		case 1678112166:
		case 837955913:
		case 2762500152:
		case 1815541181:
			if (iParam1 > 0)
			{
				func_239(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 4263810419:
		case 3267748665:
		case 2896648878:
		case 1652884147:
		case 4237099040:
		case 3078478004:
		case 4248344981:
		case 3942610365:
		case 3304681061:
		case 563463121:
		case 1734805203:
		case 941287179:
		case 3108887451:
		case 2309817038:
		case 3167945912:
		case 4185766010:
		case 312105838:
		case 1982688246:
		case 3633936878:
		case 1301046174:
		case 2708796979:
		case 393059668:
		case 23796958:
		case 3217811126:
		case 1780666425:
		case 2251272238:
		case 2372412947:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case 4140234963:
		case 2932306805:
		case 645708827:
		case 767907967:
		case 2324815990:
		case 718859568:
		case 2339402525:
		case 892388724:
		case 2868046458:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case 4235299214:
		case 1736933716:
		case 2826443171:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case 3360501964:
		case 3100714174:
		case 4082360211:
		case 3479420741:
		case 1048226110:
		case 569170531:
		case 3438960429:
		case 848090538:
		case 4247420391:
		case 4001907056:
		case 463142405:
		case 1550217370:
		case 4193659516:
		case 3630369731:
		case 599804707:
		case 3967048882:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case 2164767625:
		case 3067312758:
		case 1864522104:
		case 215608230:
		case 3418954532:
		case 3572072971:
		case 1407278493:
		case 2715572802:
		case 4267523385:
		case 1179783540:
		case 923419301:
		case 3986141121:
		case 603298940:
		case 4282347442:
		case 3983854621:
		case 870439158:
		case 3320678556:
		case 4290828642:
		case 3114013174:
		case 2376916280:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case 3122066507:
		case 2279567963:
		case 2720171655:
		case 3333932415:
		case 1135468152:
		case 1265272476:
		case 3660240660:
		case 696556762:
		case 403506509:
		case 3411090882:
		case 3230816581:
		case 2907714241:
		case 3578004144:
		case 1138089938:
		case 3733955243:
			func_239(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case 2952902635:
		case 3696988851:
			if (iParam1 > 0)
			{
				func_239(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case 3194003497:
			func_239(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_239(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xD863
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_250())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_39()) || unk_0x64BE694244417BDA())
		{
			Global_410E36 = 1;
			return 0;
		}
		if (Global_2586D5)
		{
			if (iParam3 == 1067618600 || iParam3 == 2991135598)
			{
				Global_410E37 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_410C0F[iVar2 /*80*/].f_3D.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0xEC103C948D1D3BEF(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x93EA4BE98F3F425A(iVar4))
		{
			*uParam0 = func_246(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != 4294967295)
				{
					Global_410C0F[*uParam0 /*80*/].f_3D.f_8 = 1;
					Global_410C0F[*uParam0 /*80*/].f_3D.f_C = 1;
				}
			}
			Global_410E28 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_410E35 = 1;
			Global_410E38 = iParam4;
			Global_410E3A = iParam3;
			Global_410E3B = 1;
			Global_410E39 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_410E38 = iParam4;
			Global_410E3A = iParam3;
			Global_410E3B = 1;
			Global_410E39 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_245(1, iParam4);
			Global_410E35 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_240(4294967295, iParam4, iParam6, iParam5, 4294967295);
		}
	}
	return 0;
}

void func_240(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xDA0E
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_7A.f_47), 0);
			break;
	}
	if (iParam0 != 4294967295)
	{
		func_241(iParam0);
	}
}

void func_241(int iParam0)//Position - 0xDA46
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_250())
	{
		bVar0 = true;
	}
	if (iParam0 != 4294967295)
	{
		if (func_244(iParam0))
		{
			if (!bVar0)
			{
				unk_0x220FA7ABD5D740BF();
			}
		}
		else if (!bVar0)
		{
			unk_0xBDAA2C842F5C47BF(Global_410C0F[iParam0 /*80*/].f_3D);
		}
		func_242(&(Global_410C0F[iParam0 /*80*/]));
	}
}

void func_242(var uParam0)//Position - 0xDA9A
{
	uParam0->f_3D = 0;
	uParam0->f_3D = 2147483647;
	uParam0->f_3D.f_1 = 0;
	uParam0->f_3D.f_2 = 0;
	uParam0->f_3D.f_3 = 2701847856;
	uParam0->f_3D.f_4 = 2209654107;
	uParam0->f_3D.f_5 = 0;
	uParam0->f_3D.f_6 = 1227573907;
	uParam0->f_3D.f_7 = 3133133477;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_243(&(uParam0->f_D));
	func_243(&(uParam0->f_D.f_D));
	StringCopy(&(uParam0->f_D.f_1A), "", 32);
	StringCopy(&(uParam0->f_D.f_22), "", 24);
	StringCopy(&(uParam0->f_D.f_28), "", 16);
	StringCopy(&(uParam0->f_D.f_2C), "", 16);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_3D.f_8 = 0;
	uParam0->f_3D.f_9 = 0;
	uParam0->f_3D.f_A = 0;
	uParam0->f_3D.f_B = 0;
	uParam0->f_3D.f_D = 0;
	uParam0->f_3D.f_C = 0;
	uParam0->f_3D.f_E = 0;
	uParam0->f_3D.f_F = 0;
	uParam0->f_3D.f_10 = 0;
	uParam0->f_3D.f_12 = 0;
}

void func_243(var uParam0)//Position - 0xDBA1
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

int func_244(int iParam0)//Position - 0xDBE9
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_410C0F[iParam0 /*80*/].f_3D.f_5 == 1;
	}
	return 0;
}

void func_245(int iParam0, int iParam1)//Position - 0xDC13
{
	Global_258B69 = iParam1;
	Global_258B68 = iParam0;
}

int func_246(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0xDC27
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_410C0F[iVar0 /*80*/].f_3D.f_2 == 0)
		{
			if (!func_250())
			{
				iParam0 = iVar0 + 900;
			}
			Global_410C0F[iVar0 /*80*/].f_3D.f_2 = 1;
			Global_410C0F[iVar0 /*80*/].f_3D.f_1 = iParam5;
			Global_410C0F[iVar0 /*80*/].f_3D.f_3 = iParam1;
			Global_410C0F[iVar0 /*80*/].f_3D.f_4 = iParam2;
			Global_410C0F[iVar0 /*80*/].f_3D.f_7 = iParam3;
			Global_410C0F[iVar0 /*80*/].f_3D.f_5 = 0;
			Global_410C0F[iVar0 /*80*/].f_3D = iParam0;
			Global_410C0F[iVar0 /*80*/].f_3D.f_6 = iParam4;
			Global_410C0F[iVar0 /*80*/].f_3D.f_B = uParam8;
			Global_410C0F[iVar0 /*80*/].f_3D.f_A = iParam7;
			Global_410C0F[iVar0 /*80*/].f_3D.f_D = iParam9;
			Global_410C0F[iVar0 /*80*/].f_3D.f_C = 0;
			Global_410C0F[iVar0 /*80*/].f_3D.f_E = MISC::GET_FRAME_COUNT();
			Global_410C0F[iVar0 /*80*/].f_3D.f_12 = 0;
			Global_410E28 = 0;
			if (bParam6)
			{
				Global_410C0F[iVar0 /*80*/].f_3D.f_5 = 1;
			}
			if (iParam1 == 3159588365 && iParam10)
			{
				func_247(Global_410C0F[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_247(struct<62> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0xDD63
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 3981691983;
	vVar0.y = CAM::_0xDC9DA9E8789F5246();
	vVar0.f_2 = { Param0.f_3D };
	vVar0.f_2.f_20 = iParam19;
	iVar1 = func_249(vVar0.y);
	if ((Global_40001.f_5B83 && !Global_40001.f_5B84) && !Global_40001.f_5B85)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_248();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_248()//Position - 0xDDF5
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_249(int iParam0)//Position - 0xDE05
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_250()//Position - 0xDE17
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

void func_251(int iParam0, int iParam1)//Position - 0xDE2E
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_269())
		{
			if (func_268(0))
			{
				if (!func_267(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_266()))
					{
						if (func_265() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_265());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_263(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_256("GB_BCUT_TICK1", func_266(), iVar0, 0, 0, 1, 1);
						}
						func_255(20);
						func_252(func_266(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_252(int iParam0, int iParam1, int iParam2)//Position - 0xDECF
{
	struct<8> Var0;
	
	if (func_13(iParam0, 0, 1))
	{
		Var0 = 2084031113;
		Var0.f_1 = CAM::_0xDC9DA9E8789F5246();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_254(iParam0);
		func_253(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_249(iParam0));
	}
}

void func_253(var uParam0, var uParam1)//Position - 0xDF25
{
	*uParam0 = Global_19135D.f_9;
	*uParam1 = Global_19135D.f_A;
}

var func_254(int iParam0)//Position - 0xDF3F
{
	return Global_18CD5B[iParam0 /*560*/].f_1EB;
}

void func_255(int iParam0)//Position - 0xDF53
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_26862F.f_1313.f_7[iVar0]), iVar1);
}

int func_256(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0xDF7C
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 4294967295;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		HUD::_SET_NOTIFICATION_COLOR_NEXT(func_58(iParam1, 4294967294, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_261(&Var1));
		if (!iParam3 == 0)
		{
			HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		func_257(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_257(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xE014
{
	int iVar0;
	
	if ((!func_260() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_88(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		return;
	}
	iVar0 = func_258(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_196195.f_5[iVar0 /*53*/] = iParam0;
		Global_196195.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_196195.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_196195.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_196195.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_196195.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_196195.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_C), sParam3, 64);
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_1C[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_1C[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_1C[2 /*6*/]), sParam11, 24);
	}
}

int func_258(int iParam0)//Position - 0xE11C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_196195 - 1))
	{
		if (iParam0 > Global_196195.f_5[iVar0 /*53*/].f_1)
		{
			func_259(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_196195++;
	if (Global_196195 > 5)
	{
		Global_196195 = 5;
		return Global_196195;
	}
	return (Global_196195 - 1);
}

void func_259(int iParam0)//Position - 0xE17E
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_196195.f_5[iVar0 /*53*/] = { Global_196195.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + 4294967295);
	}
}

bool func_260()//Position - 0xE1B7
{
	return DLC::IS_DLC_PRESENT(2532323046);
}

var func_261(char* sParam0)//Position - 0xE1C8
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_262(&cVar0);
}

var func_262(char[4] cParam0)//Position - 0xE1EC
{
	return cParam0;
}

void func_263(int iParam0, bool bParam1)//Position - 0xE1F6
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_264(1);
	}
	else
	{
		iVar1 = func_264(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_264(bool bParam0)//Position - 0xE228
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_2FF5;
}

int func_265()//Position - 0xE24E
{
	return Global_40001.f_2FF4;
}

int func_266()//Position - 0xE25D
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B;
}

bool func_267(bool bParam0)//Position - 0xE272
{
	return func_175(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

bool func_268(bool bParam0)//Position - 0xE284
{
	return func_76(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

bool func_269()//Position - 0xE296
{
	return func_77(CAM::_0xDC9DA9E8789F5246());
}

int func_270()//Position - 0xE2A6
{
	return Global_40001.f_2B88;
}

int func_271()//Position - 0xE2B5
{
	return Global_40001.f_2B87;
}

void func_272(bool bParam0)//Position - 0xE2C4
{
	if (bParam0)
	{
		if (func_273(1))
		{
			MISC::SET_BIT(&Global_180700, 1);
		}
	}
	else if (func_273(2))
	{
		MISC::SET_BIT(&Global_180700, 2);
	}
}

int func_273(int iParam0)//Position - 0xE2F6
{
	int iVar0;
	
	iVar0 = func_219(2534, 4294967295, 0);
	if (iParam0 == 0)
	{
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 1)) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 3) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 4)) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 6) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 7)) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 9) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 10)) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_274()//Position - 0xE3C7
{
	return Global_40001.f_2B9B;
}

int func_275()//Position - 0xE3D6
{
	return Global_40001.f_2B9A;
}

void func_276()//Position - 0xE3E5
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 5))
	{
		func_277();
	}
	func_498();
}

void func_277()//Position - 0xE3FF
{
	int iVar0[3];
	int iVar1;
	var uVar2[3];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11[3];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (Local_149.f_2A2[0] > 4294967295)
	{
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < 3)
		{
			iVar0[iVar7] = func_90();
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Local_149.f_2A2[iVar7] > 4294967295)
			{
				iVar12 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_149.f_2A2[iVar7]);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar12))
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar12);
					if (func_13(iVar1, 0, 1))
					{
						if (!func_88(iVar1, 0))
						{
							iVar0[iVar7] = iVar1;
							uVar2[iVar7] = Local_1516[Local_149.f_2A2[iVar7] /*5*/].f_4;
							if (func_268(1))
							{
								if (func_76(iVar1, 1))
								{
									uVar11[iVar7] = func_58(iVar1, 4294967294, 0, 0, 0);
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
		iVar8 = NETSHOP::_NETWORK_SHOP_BASKET_START();
		if (func_86(CAM::_0xDC9DA9E8789F5246()))
		{
			iVar13 = func_292();
			iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar13);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar14))
			{
				iVar15 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar14);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar15))
				{
					iVar8 = iVar15;
				}
			}
		}
		iVar3 = func_459(0, Local_149.f_2C4);
		iVar4 = Local_149.f_2C5;
		iVar5 = func_459(0, Local_1516[iVar8 /*5*/].f_4);
		iVar6 = func_459(0, (Global_40001.f_2AF8 - func_461(&(Local_149.f_295), 0, 0)));
		func_291(iVar6);
		if (iVar6 > 30000)
		{
			iVar10 = 1;
		}
		else
		{
			iVar10 = 6;
		}
		func_278(iVar0[0], iVar0[1], iVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar3, iVar4, iVar5, iVar6, &iVar9, iVar10, func_288(), uVar11[0], uVar11[1], uVar11[2]);
	}
}

void func_278(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, var uParam13, var uParam14, var uParam15)//Position - 0xE5B1
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_285(0) == 0)
	{
		return;
	}
	func_284();
	iVar1 = 0;
	if (((Global_258679[0] != iParam0 || Global_258679[1] != iParam1) || Global_258679[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_258679[0] = iParam0;
	Global_258679[1] = iParam1;
	Global_258679[2] = iParam2;
	Global_258679[3] = 0;
	Global_258679[4] = 0;
	if (Global_258679[0] != func_90())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_258679[0]);
			Global_25867F[0 /*16*/] = { func_283(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_280(iParam3, &(Global_25867F[0 /*16*/]), 4294967295, 109, 8, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam13, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_258679[1] != func_90())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_258679[1]);
			Global_25867F[1 /*16*/] = { func_283(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_280(iParam4, &(Global_25867F[1 /*16*/]), 4294967295, 108, 7, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam14, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_258679[2] != func_90())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_258679[2]);
			Global_25867F[2 /*16*/] = { func_283(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_280(iParam5, &(Global_25867F[2 /*16*/]), 4294967295, 107, 6, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam15, 255, 0, 0, 0, 0, 1);
		}
	}
	func_279(iParam6, iParam7, "HUD_CHECKPOINTS", 4294967295, 1, 5, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	if (func_496(CAM::_0xDC9DA9E8789F5246()) == 0)
	{
		func_280(iParam8, "HUD_USCORE", 4294967295, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_228(sParam12))
	{
		sVar2 = sParam12;
	}
	func_133(iParam9, sVar2, 0, 0, 4294967295, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0);
	*iParam10 = 0;
	func_132();
}

void func_279(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)//Position - 0xE7CD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_135(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_134(4, iVar0);
		Global_14E696.f_C25[iVar0] = iParam0;
		Global_14E696.f_C25.f_AC[iVar0] = iParam1;
		StringCopy(&(Global_14E696.f_C25.f_B[iVar0 /*16*/]), sParam2, 64);
		Global_14E696.f_C25.f_B7[iVar0] = iParam3;
		Global_14E696.f_C25.f_D8[iVar0] = iParam5;
		Global_14E696.f_C25.f_C2[iVar0] = iParam4;
		Global_14E696.f_C25.f_E3[iVar0] = iParam6;
		Global_14E696.f_C25.f_10E[iVar0] = iParam7;
		Global_14E696.f_C25.f_119[iVar0] = iParam8;
		Global_14E696.f_C25.f_124[iVar0] = iParam9;
		Global_14E696.f_C25.f_12F[iVar0] = iParam10;
		Global_14E696.f_C25.f_13A[iVar0] = iParam11;
		Global_14E696.f_C25.f_145[iVar0] = iParam13;
		Global_14E696.f_C25.f_150[iVar0] = iParam14;
		Global_14E696.f_C25.f_15B[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && MISC::IS_PC_VERSION()) && iParam12)
		{
			Global_14E696.f_440 = 1;
		}
	}
}

void func_280(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)//Position - 0xE927
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_135(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_134(6, iVar0);
		Global_14E696.f_EC5[iVar0] = iParam0;
		StringCopy(&(Global_14E696.f_EC5.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14E696.f_EC5.f_B7[iVar0] = iParam3;
		Global_14E696.f_EC5.f_AC[iVar0] = iParam2;
		Global_14E696.f_EC5.f_104[iVar0] = iParam4;
		Global_14E696.f_EC5.f_10F[iVar0] = iParam5;
		StringCopy(&(Global_14E696.f_EC5.f_11A[iVar0 /*16*/]), sParam6, 64);
		Global_14E696.f_EC5.f_1BB[iVar0] = iParam7;
		Global_14E696.f_EC5.f_1C6[iVar0] = iParam8;
		Global_14E696.f_EC5.f_1F1[iVar0] = iParam9;
		Global_14E696.f_EC5.f_1FC[iVar0] = iParam10;
		Global_14E696.f_EC5.f_CD[iVar0] = iParam11;
		Global_14E696.f_EC5.f_D8[iVar0] = iParam12;
		Global_14E696.f_EC5.f_E3[iVar0] = iParam13;
		Global_14E696.f_EC5.f_EE[iVar0] = iParam14;
		Global_14E696.f_EC5.f_F9[iVar0] = iParam15;
		Global_14E696.f_EC5.f_207[iVar0] = iParam16;
		Global_14E696.f_EC5.f_212[iVar0] = iParam17;
		Global_14E696.f_EC5.f_21D[iVar0] = iParam18;
		Global_14E696.f_EC5.f_228[iVar0] = iParam19;
		Global_14E696.f_EC5.f_233[iVar0] = iParam20;
		Global_14E696.f_EC5.f_23E[iVar0] = iParam21;
		Global_14E696.f_EC5.f_249[iVar0] = iParam22;
		Global_14E696.f_EC5.f_254[iVar0] = iParam23;
		Global_14E696.f_EC5.f_25F[iVar0] = iParam24;
		if (iParam15 == 5 && func_282())
		{
			Global_14E696.f_440 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_14E696.f_444 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_14E696.f_443 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_14E696.f_440 = 1;
			}
			if (func_281())
			{
				Global_14E696.f_444 = 1;
			}
		}
	}
}

int func_281()//Position - 0xEB89
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_282()//Position - 0xEBAD
{
	if (((UNK::_GET_CURRENT_LANGUAGE_ID() == 8 || UNK::_GET_CURRENT_LANGUAGE_ID() == 9) || UNK::_GET_CURRENT_LANGUAGE_ID() == 10) || UNK::_GET_CURRENT_LANGUAGE_ID() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_283(int iParam0, char* sParam1)//Position - 0xEBEB
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_284()//Position - 0xEC8D
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_258855 = 1;
}

int func_285(bool bParam0)//Position - 0xECB0
{
	if (func_287())
	{
		return 0;
	}
	if (func_286())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_13(CAM::_0xDC9DA9E8789F5246(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_286()//Position - 0xECE7
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_C4 != 0;
}

bool func_287()//Position - 0xECFE
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 12);
}

char* func_288()//Position - 0xED10
{
	return "HUD_COUNTDOWN";
	switch (func_290(CAM::_0xDC9DA9E8789F5246()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_289())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_289()//Position - 0xEEBA
{
	if (func_290(CAM::_0xDC9DA9E8789F5246()) == 133)
	{
		return Global_26862F.f_12C4;
	}
	return 4294967295;
}

int func_290(int iParam0)//Position - 0xEEDD
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18CD5B[iVar0 /*560*/];
	}
	return 4294967295;
}

void func_291(int iParam0)//Position - 0xEEFC
{
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1270, 0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_26862F.f_1272)))
			{
				AUDIO::SET_RADIO_TO_STATION_NAME(&(Global_26862F.f_1272));
			}
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
			AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
			if (Global_26862F.f_127A > 4294967295)
			{
				AUDIO::RELEASE_SOUND_ID(Global_26862F.f_127A);
				Global_26862F.f_127A = 4294967295;
			}
			Global_26862F.f_1270 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1270, 0))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1270, 4))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1270, 2))
				{
					if (AUDIO::_0x109697E2FFBAC8A1())
					{
						if ((!MISC::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "OFF") && PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_26862F.f_1272)))
						{
							StringCopy(&(Global_26862F.f_1272), "", 32);
							AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
							AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
							AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
							AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
							MISC::SET_BIT(&(Global_26862F.f_1270), 2);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1270, 5))
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1270, 1))
			{
				if (iParam0 < 10000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_20S");
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S");
				}
				AUDIO::START_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
				MISC::SET_BIT(&(Global_26862F.f_1270), 1);
			}
			else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1270, 4))
			{
				if (iParam0 < 27500)
				{
					if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) && !unk_0xDACE091F91A7F74E())
						{
							StringCopy(&(Global_26862F.f_1272), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
							AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
						}
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						MISC::SET_BIT(&(Global_26862F.f_1270), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1270, 3))
				{
					Global_26862F.f_127A = AUDIO::GET_SOUND_ID();
					unk_0x1190AB7024CBD8CB(Global_26862F.f_127A, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					MISC::SET_BIT(&(Global_26862F.f_1270), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1270, 0))
			{
				Global_26862F.f_1270 = 0;
				Global_26862F.f_127A = 4294967295;
				AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
				AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
				MISC::SET_BIT(&(Global_26862F.f_1270), 0);
				if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1270, 2))
				{
					MISC::SET_BIT(&(Global_26862F.f_1270), 2);
					MISC::SET_BIT(&(Global_26862F.f_1270), 5);
				}
				else
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1270), 5);
					GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1270), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1270, 0))
		{
			Global_26862F.f_1270 = 0;
			Global_26862F.f_127A = 4294967295;
			AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
			MISC::SET_BIT(&(Global_26862F.f_1270), 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				MISC::SET_BIT(&(Global_26862F.f_1270), 2);
				MISC::SET_BIT(&(Global_26862F.f_1270), 5);
			}
			else
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1270), 2);
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1270), 5);
			}
		}
	}
}

var func_292()//Position - 0xF2DF
{
	if (ENTITY::DOES_ENTITY_EXIST(func_293()))
	{
		return func_293();
	}
	return func_83();
}

var func_293()//Position - 0xF2FD
{
	return Global_240006.f_3;
}

void func_294()//Position - 0xF30B
{
	int iVar0;
	struct<42> Var1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	Var1 = 4294967295;
	Var1.f_16 = 3212836864;
	Var1.f_17 = 3;
	Var1.f_27 = 4294967295;
	Var1.f_29 = 4294967295;
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		Local_170.f_216[iVar0 /*42*/] = { Var1 };
		Local_170.f_216[iVar0 /*42*/].f_1 = func_90();
		if (Local_149.f_2A2[iVar0] > 4294967295)
		{
			iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_149.f_2A2[iVar0]);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (!func_88(iVar2, 0))
				{
					Local_170.f_216[iVar0 /*42*/] = Local_149.f_2A2[iVar0];
					Local_170.f_216[iVar0 /*42*/].f_1 = iVar2;
					uVar4 = Local_1516[Local_149.f_2A2[iVar0] /*5*/].f_4;
					Local_170.f_216[iVar0 /*42*/].f_9 = uVar4;
					Local_170.f_216[iVar0 /*42*/].f_1F = 4294967295;
				}
			}
		}
		iVar0++;
	}
}

void func_295()//Position - 0xF3F7
{
	if (Local_148 != 4294967295 && Local_148.f_1 != 4294967295)
	{
		if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_297() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()))
		{
			func_296(Local_148.f_1, Local_148, func_249(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
			Local_148 = 4294967295;
			Local_148.f_1 = 4294967295;
		}
	}
}

void func_296(int iParam0, int iParam1, int iParam2)//Position - 0xF44E
{
	struct<4> Var0;
	
	Var0 = 455642653;
	Var0.f_1 = CAM::_0xDC9DA9E8789F5246();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 4, iParam2);
	}
}

int func_297()//Position - 0xF486
{
	return 4294967295;
}

void func_298()//Position - 0xF48F
{
	if (func_302(0))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 4))
		{
			if (func_267(1))
			{
				unk_0x1190AB7024CBD8CB(4294967295, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0x1190AB7024CBD8CB(4294967295, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			MISC::SET_BIT(&iLocal_114, 4);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 4))
	{
		if (func_267(1))
		{
			unk_0x1190AB7024CBD8CB(4294967295, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0x1190AB7024CBD8CB(4294967295, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_114, 4);
	}
}

void func_299()//Position - 0xF511
{
	MISC::SET_BIT(&(Global_26862F.f_6BB), 26);
}

int func_300(int iParam0)//Position - 0xF526
{
	if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_44.f_2, 9) && !(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_44.f_2, 6) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_44.f_2, 7))) || ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_44.f_2, 6) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_44.f_2, 7)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_44.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

void func_301()//Position - 0xF5C1
{
	MISC::SET_BIT(&(Global_26862F.f_6BB), 19);
}

int func_302(int iParam0)//Position - 0xF5D6
{
	if (iParam0 >= 0)
	{
		if (Local_149.f_2A2[iParam0] == NETSHOP::_NETWORK_SHOP_BASKET_START() && Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_4 > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_303(int iParam0)//Position - 0xF60D
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_149.f_2A2[iParam0];
		if (iVar0 >= 0)
		{
			if (func_304(Local_1516[iVar0 /*5*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_304(int iParam0, int iParam1)//Position - 0xF643
{
	return iParam0 > iParam1;
}

bool func_305(int iParam0)//Position - 0xF650
{
	return func_306(AUDIO::_0x0626A247D2405330(), Local_149.f_A[iParam0 /*5*/], 1) < 500f;
}

float func_306(int iParam0, vector3 vParam1, int iParam2)//Position - 0xF672
{
	vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, iParam2);
}

bool func_307(int iParam0)//Position - 0xF6AC
{
	return func_306(AUDIO::_0x0626A247D2405330(), Local_149.f_A[iParam0 /*5*/], 1) < 750f;
}

void func_308(int iParam0)//Position - 0xF6CE
{
	func_336(&(vLocal_132[iParam0 /*3*/]), Local_149.f_A[iParam0 /*5*/], iParam0);
	if (uLocal_115[iParam0])
	{
		func_331(Local_149.f_A[iParam0 /*5*/], iParam0);
		func_309(Local_149.f_A[iParam0 /*5*/], iParam0);
	}
}

void func_309(struct<4> Param0, var uParam1, int iParam2)//Position - 0xF719
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (Param0.f_3 == NETSHOP::_NETWORK_SHOP_BASKET_START() && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uLocal_121[func_17(iParam2)], func_16(iParam2)))
	{
		Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_4++;
		if (iLocal_112 == 0)
		{
			iLocal_112 = HUD::_0x13C4B962653A5280();
		}
		iVar0 = func_329(SYSTEM::CEIL((IntToFloat(Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_4) / func_330())));
		iVar1 = func_327(SYSTEM::CEIL((IntToFloat(Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_4) / func_328())));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * Global_40001.f_2C45));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * Global_40001.f_2C46));
		if (func_32())
		{
			iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * func_326()));
			iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * func_325()));
		}
		if (func_250())
		{
			func_238(4235299214, iVar0, &uVar2, 0, 1, 0);
		}
		else
		{
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_CP_COLLECTION", &uVar3);
		}
		func_236();
		func_184(0, AUDIO::_0x0626A247D2405330(), "", 3419251281, 1626430110, iVar1, 1, 4294967295, 0, 0, 0);
		iLocal_123 = (iLocal_123 + iVar0);
		Global_258AE3 = iVar0;
		Local_1515.f_7 = (Local_1515.f_7 + iVar1);
		MISC::SET_BIT(&(uLocal_121[func_17(iParam2)]), func_16(iParam2));
		if (Local_1515.f_B == 0)
		{
			Local_1515.f_B = NETWORK::_GET_POSIX_TIME();
		}
		func_310();
		unk_0x1190AB7024CBD8CB(4294967295, "Checkpoint_Cash_Hit", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_310()//Position - 0xF883
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2, 2))
	{
		MISC::SET_BIT(&(Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2), 2);
		func_311(1);
	}
}

void func_311(bool bParam0)//Position - 0xF8B4
{
	var uVar0;
	
	if (bParam0)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 7))
		{
			if ((!func_92(CAM::_0xDC9DA9E8789F5246()) && !func_6(CAM::_0xDC9DA9E8789F5246())) && !func_496(CAM::_0xDC9DA9E8789F5246()))
			{
				if (func_324())
				{
					func_317(0);
					func_316();
				}
				if (func_494(0))
				{
					uVar0 = func_219(2480, 4294967295, 0);
					GRAPHICS::_0x35FB78DC42B7BD21(&uVar0, 0);
					func_316();
				}
				if (func_494(func_493(func_290(CAM::_0xDC9DA9E8789F5246()))))
				{
					uVar0 = func_219(2480, 4294967295, 0);
					GRAPHICS::_0x35FB78DC42B7BD21(&uVar0, func_493(func_290(CAM::_0xDC9DA9E8789F5246())));
					func_316();
				}
				if (func_315())
				{
					func_316();
				}
				if (func_290(CAM::_0xDC9DA9E8789F5246()) > 4294967295)
				{
					MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 7);
					if (func_290(CAM::_0xDC9DA9E8789F5246()) == 236)
					{
						func_314();
					}
				}
			}
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 7))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 7);
		func_312();
	}
}

void func_312()//Position - 0xF9C9
{
	if (func_313())
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 17);
	}
}

bool func_313()//Position - 0xF9EB
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 17);
}

void func_314()//Position - 0xFA06
{
	if (!func_313())
	{
		Global_26862F.f_185A = HUD::_0x13C4B962653A5280();
		MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 17);
	}
}

int func_315()//Position - 0xFA34
{
	if (Global_252F9E.f_47F.f_5 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void func_316()//Position - 0xFA4E
{
	if (func_315())
	{
		Global_252F9E.f_47F.f_10 = 1;
	}
}

void func_317(int iParam0)//Position - 0xFA67
{
	if (func_324())
	{
		if (iParam0 == 1)
		{
			if (Global_26862F.f_111E == 4294967295)
			{
				Global_26862F.f_111E = 60000;
			}
			func_20(&(Global_26862F.f_111C), 0, 0);
			if (Global_26862F.f_1121 == 4294967295)
			{
				Global_26862F.f_1121 = 10000;
			}
			func_20(&(Global_26862F.f_111F), 0, 0);
		}
		else
		{
			Global_1406A0 = 0;
			Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_8 = 0;
			func_323(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_322()) && !func_318(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_EC6C8 = 0;
		}
	}
}

int func_318(int iParam0)//Position - 0xFB01
{
	if (func_319(iParam0, 1))
	{
		if (Global_1841F3[iParam0 /*790*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_319(int iParam0, bool bParam1)//Position - 0xFB25
{
	if (bParam1)
	{
		if (func_320(iParam0))
		{
			return 1;
		}
	}
	if (Global_1841F3[iParam0 /*790*/] == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool func_320(int iParam0)//Position - 0xFB51
{
	return func_321(iParam0);
}

bool func_321(int iParam0)//Position - 0xFB5F
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_D.f_1, 0);
}

bool func_322()//Position - 0xFB79
{
	return Global_255C02.f_2D9;
}

void func_323(bool bParam0)//Position - 0xFB88
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_324())
		{
			if (func_13(CAM::_0xDC9DA9E8789F5246(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(AUDIO::_0x0626A247D2405330(), 1);
				PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 342, false);
				PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(CAM::_0xDC9DA9E8789F5246(), 1f);
			unk_0x6CF2954DEC49C61F(0);
			unk_0xEF791AEFDDE09A3D(1);
			if (Global_1406A0.f_1 == 0 || Global_1406A0.f_2 == 1)
			{
				Global_1406A0.f_2 = 0;
				if (bParam0)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0, 0);
				}
			}
		}
		else
		{
			if (func_13(CAM::_0xDC9DA9E8789F5246(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(AUDIO::_0x0626A247D2405330(), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 342, true);
				PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(CAM::_0xDC9DA9E8789F5246(), 0.5f);
				if (Global_1406A0.f_1 == 0 || Global_1406A0.f_2 == 1)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(1, 0);
				}
			}
			unk_0x6CF2954DEC49C61F(1);
			unk_0xEF791AEFDDE09A3D(0);
		}
	}
}

bool func_324()//Position - 0xFC81
{
	return Global_1406A0;
}

float func_325()//Position - 0xFC8D
{
	return Global_40001.f_2B8A;
}

float func_326()//Position - 0xFC9C
{
	return Global_40001.f_2B89;
}

var func_327(int iParam0)//Position - 0xFCAB
{
	switch (iParam0)
	{
		case 1:
			return Global_40001.f_2B95;
		
		case 2:
			return Global_40001.f_2B96;
		
		case 3:
			return Global_40001.f_2B97;
		
		case 4:
			return Global_40001.f_2B98;
		
		default:
	}
	return Global_40001.f_2B98;
}

float func_328()//Position - 0xFD01
{
	return Global_40001.f_2A99;
}

var func_329(int iParam0)//Position - 0xFD10
{
	switch (iParam0)
	{
		case 1:
			return Global_40001.f_2B8B;
		
		case 2:
			return Global_40001.f_2B8C;
		
		case 3:
			return Global_40001.f_2B8D;
		
		case 4:
			return Global_40001.f_2B8E;
		
		case 5:
			return Global_40001.f_2B8F;
		
		case 6:
			return Global_40001.f_2B90;
		
		case 7:
			return Global_40001.f_2B91;
		
		case 8:
			return Global_40001.f_2B92;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return Global_40001.f_2B93;
		
		default:
	}
	return Global_40001.f_2B94;
}

float func_330()//Position - 0xFDC8
{
	return Global_40001.f_2A98;
}

void func_331(vector3 vParam0, var uParam1, var uParam2, int iParam3)//Position - 0xFDD7
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_149.f_3[func_17(iParam3)], func_16(iParam3)))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uLocal_120[func_17(iParam3)], func_16(iParam3)))
		{
			if (func_32())
			{
				fVar0 = 6f;
				fVar1 = 6f;
				fVar2 = 4f;
			}
			else
			{
				fVar0 = 3f;
				fVar1 = 2.5f;
				fVar2 = 2.8f;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vParam0 + Vector(fVar2, 0f, 0f), fVar1, fVar1, fVar0, 0, 1, 0))
			{
				if (func_332())
				{
					iLocal_119 = NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Local_149.f_9);
					if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_297() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()))
					{
						func_296(iLocal_119, iParam3, func_249(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
						Local_148 = 4294967295;
						Local_148.f_1 = 4294967295;
					}
					else
					{
						Local_148 = iParam3;
						Local_148.f_1 = iLocal_119;
					}
					MISC::SET_BIT(&(uLocal_120[func_17(iParam3)]), func_16(iParam3));
				}
			}
		}
		else if (func_1(&uLocal_126, 250, 0))
		{
			if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_297() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()))
			{
				func_296(iLocal_119, iParam3, func_249(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
				Local_148.f_1 = 4294967295;
				Local_148 = 4294967295;
			}
			else
			{
				Local_148 = iParam3;
				Local_148.f_1 = iLocal_119;
			}
			func_35(&uLocal_126);
		}
	}
}

int func_332()//Position - 0xFF27
{
	if (!func_13(CAM::_0xDC9DA9E8789F5246(), 1, 1))
	{
		return 0;
	}
	if (func_496(CAM::_0xDC9DA9E8789F5246()))
	{
		if ((func_324() && !func_335()) || func_334(CAM::_0xDC9DA9E8789F5246(), 21))
		{
			func_464(0);
		}
		else
		{
			func_464(7);
		}
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (func_333(AUDIO::_0x0626A247D2405330(), 0) != 4294967295)
		{
			return 0;
		}
	}
	if (func_88(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		return 0;
	}
	if (!func_32())
	{
		if (PED::IS_PED_IN_FLYING_VEHICLE(AUDIO::_0x0626A247D2405330()))
		{
			func_464(1);
			return 0;
		}
	}
	return 1;
}

int func_333(int iParam0, int iParam1)//Position - 0xFFC8
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

bool func_334(int iParam0, int iParam1)//Position - 0x1004E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_D0, iParam1);
}

bool func_335()//Position - 0x10067
{
	return Global_1406A0.f_1;
}

void func_336(int iParam0, vector3 vParam1, var uParam2, var uParam3, int iParam4)//Position - 0x10075
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	vVar0 = { vParam1 };
	HUD::GET_HUD_COLOUR(12, &uVar1, &uVar2, &uVar3, &uVar4);
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uLocal_120[func_17(iParam4)], func_16(iParam4)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_149.f_3[func_17(iParam4)], func_16(iParam4)))
	{
		if (!HUD::DOES_BLIP_EXIST(*iParam0))
		{
			if (!func_399(vVar0, 0f, 0f, 0f, 0) && !func_399(vVar0, 0f, 0f, -2000f, 0))
			{
				*iParam0 = HUD::ADD_BLIP_FOR_COORD(vVar0);
				HUD::SET_BLIP_SPRITE(*iParam0, 431);
				HUD::SET_BLIP_PRIORITY(*iParam0, 9);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "CPC_BLIP");
				func_343(*iParam0, 25, 1152319488, 1137180672);
				func_341(iParam0, 12);
				HUD::_0x75A16C3DA34F1245(*iParam0, 1);
			}
		}
		else if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::SET_BLIP_ALPHA(*iParam0, 255);
		}
		else
		{
			func_343(*iParam0, 25, 1152319488, 1137180672);
		}
		if (uLocal_116[iParam4])
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_122[func_17(iParam4)], func_16(iParam4)))
			{
				iVar5 = 52;
				if (func_32())
				{
					iParam0->f_1 = GRAPHICS::CREATE_CHECKPOINT(iVar5, vVar0 + Vector(4f, 0f, 0f), vVar0, 10f, uVar1, uVar2, uVar3, iParam0->f_2, 0);
					GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iParam0->f_1, 7.5f, 7.5f, 100f);
				}
				else
				{
					iParam0->f_1 = GRAPHICS::CREATE_CHECKPOINT(iVar5, vVar0 + Vector(2.8f, 0f, 0f), vVar0, 5f, uVar1, uVar2, uVar3, iParam0->f_2, 0);
					GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iParam0->f_1, 5f, 5f, 100f);
				}
				MISC::SET_BIT(&(iLocal_122[func_17(iParam4)]), func_16(iParam4));
			}
			else
			{
				func_340(&(iParam0->f_1), &(iParam0->f_2));
			}
			func_339(&vParam1);
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_122[func_17(iParam4)], func_16(iParam4)))
		{
			if (func_338(&(iParam0->f_1), &(iParam0->f_2)))
			{
				GRAPHICS::DELETE_CHECKPOINT(iParam0->f_1);
				GRAPHICS::_0x35FB78DC42B7BD21(&(iLocal_122[func_17(iParam4)]), func_16(iParam4));
			}
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_122[func_17(iParam4)], func_16(iParam4)))
	{
		func_337(&(iParam0->f_1), &(iParam0->f_2), iParam0, iParam4);
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_337(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x102C1
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (*uParam0 != 0)
	{
		*uParam1 = (*uParam1 - 25);
		if (*uParam1 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(*uParam0, uVar0, uVar1, uVar2, *uParam1);
			GRAPHICS::_SET_CHECKPOINT_ICON_RGBA(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(*iParam2))
			{
				HUD::REMOVE_BLIP(iParam2);
			}
			GRAPHICS::DELETE_CHECKPOINT(*uParam0);
			*uParam0 = 0;
			GRAPHICS::_0x35FB78DC42B7BD21(&(iLocal_122[func_17(iParam3)]), func_16(iParam3));
		}
	}
}

int func_338(var uParam0, var uParam1)//Position - 0x10343
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	*uParam1 = (*uParam1 - 10);
	if (*uParam1 > 0)
	{
		HUD::GET_HUD_COLOUR(12, &uVar0, &uVar1, &uVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		GRAPHICS::_SET_CHECKPOINT_ICON_RGBA(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_339(var uParam0)//Position - 0x10395
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	iVar0 = 239;
	iVar1 = 250;
	iVar2 = 187;
	fVar3 = 5f;
	fVar5 = 64f;
	if (func_32())
	{
		fVar4 = 40f;
	}
	else
	{
		fVar4 = 15f;
	}
	if (!func_123(*uParam0))
	{
		*uParam0 = { *uParam0 + Vector(1.7f, 1.7f, 1.7f) };
		GRAPHICS::_DRAW_LIGHT_WITH_RANGE_AND_SHADOW(*uParam0, iVar0, iVar1, iVar2, fVar4, fVar3, fVar5);
	}
}

int func_340(var uParam0, var uParam1)//Position - 0x103FA
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (*uParam1 < 175)
	{
		*uParam1 += 10;
		HUD::GET_HUD_COLOUR(12, &uVar0, &uVar1, &uVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		GRAPHICS::_SET_CHECKPOINT_ICON_RGBA(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_341(var uParam0, int iParam1)//Position - 0x1044C
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_342(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_342(int iParam0)//Position - 0x10472
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_343(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x106DA
{
	HUD::SET_BLIP_ALPHA(iParam0, func_344(iParam0, iParam1, fParam2, fParam3));
}

int func_344(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x106F4
{
	float fVar0;
	
	if (!func_300(Global_252F9E) && !func_67())
	{
		fVar0 = func_348(iParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_345();
		}
		return (SYSTEM::ROUND((SYSTEM::TO_FLOAT((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_345()//Position - 0x10742
{
	if (func_346(Global_252F9E, 1))
	{
		return 50;
	}
	return 0;
}

bool func_346(int iParam0, bool bParam1)//Position - 0x1075C
{
	if (Global_1406BF != 0)
	{
		return func_347(iParam0) != 0;
	}
	return func_319(iParam0, bParam1);
}

int func_347(int iParam0)//Position - 0x10782
{
	if (func_13(iParam0, 0, 1))
	{
		return Global_24FBF9[iParam0 /*413*/].f_1;
	}
	return 0;
}

float func_348(int iParam0, float fParam1, float fParam2)//Position - 0x107A4
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	iVar0 = Global_252F9E;
	vVar2 = { func_398(iParam0) };
	vVar2.z = 0f;
	if (Global_1417C1 || func_394())
	{
		if (func_393(iVar0))
		{
			vVar3 = { func_351(iVar0) };
		}
		else if (func_350(iVar0))
		{
			vVar3 = { func_349(iVar0) };
		}
	}
	else
	{
		vVar3 = { unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iVar0), 0) };
	}
	vVar3.z = 0f;
	fVar1 = SYSTEM::VMAG(vVar3 - vVar2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

Vector3 func_349(int iParam0)//Position - 0x10854
{
	int iVar0;
	
	if (func_350(iParam0))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0);
		}
	}
	return 0f, 0f, 0f;
}

int func_350(int iParam0)//Position - 0x10888
{
	int iVar0;
	
	if (iParam0 != func_90())
	{
		if (func_13(iParam0, 1, 1))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iVar0, 2056.204f, 2954.807f, -70.69892f, 110f, 90f, 15f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_351(int iParam0)//Position - 0x108E4
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
	
	if (iParam0 == func_90())
	{
	}
	if (func_392(iParam0))
	{
		iVar0 = func_391(iParam0);
		if (iVar0 != func_90())
		{
			if (!func_390(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_252F9E.f_290[iVar0 /*3*/][1]))
				{
					return unk_0x8000C77B5F336760(Global_252F9E.f_290[iVar0 /*3*/][1], 0);
				}
				else
				{
					return Global_24FBF9[func_391(iParam0) /*413*/].f_135.f_8;
				}
			}
			else
			{
				iVar1 = func_386(iVar0);
				if (!iVar1 == 4294967295)
				{
					return Global_197632.f_2A[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_385(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_26862F.f_126))
		{
			return unk_0x8000C77B5F336760(Global_26862F.f_126, 0);
		}
	}
	else if (func_384(iParam0) && !func_383(iParam0))
	{
		iVar2 = Global_24FBF9[iParam0 /*413*/].f_135.f_7;
		if (iVar2 != func_90())
		{
			iVar3 = func_386(iVar2);
			if (!iVar3 == 4294967295)
			{
				return Global_197632.f_2A[iVar3 /*3*/];
			}
		}
	}
	else if (func_382(iParam0) && !func_381(iParam0))
	{
		if (func_393(iParam0) && func_380())
		{
			return Global_197632.f_2A[Global_24FBF9[iParam0 /*413*/].f_135.f_4 /*3*/];
		}
		iVar4 = Global_24FBF9[iParam0 /*413*/].f_135.f_7;
		if (iVar4 != func_90())
		{
			if (func_379(iVar4))
			{
				iVar5 = func_375(iVar4);
				if (iVar5 != 4294967295)
				{
					return Global_197632.f_2A[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_374(iParam0))
	{
		iVar6 = func_373(iParam0);
		if (iVar6 != func_90())
		{
			if (!func_372(iVar6))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_252F9E.f_2F1[iVar6]))
				{
					return unk_0x8000C77B5F336760(Global_252F9E.f_2F1[iVar6], 0);
				}
				else
				{
					return Global_24FBF9[func_373(iParam0) /*413*/].f_135.f_F;
				}
			}
			else
			{
				iVar7 = func_375(iVar6);
				if (!iVar7 == 4294967295)
				{
					return Global_197632.f_2A[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_371(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_26862F.f_128))
		{
			return unk_0x8000C77B5F336760(Global_26862F.f_128, 0);
		}
	}
	else if (func_370(iParam0) && !func_369(iParam0))
	{
		iVar8 = Global_24FBF9[iParam0 /*413*/].f_135.f_7;
		if (iVar8 != func_90())
		{
			if (func_368(iVar8))
			{
				iVar9 = func_364(iVar8);
				if (iVar9 != 4294967295)
				{
					return func_363(iVar9);
				}
			}
		}
	}
	else if (func_362(iParam0) && !func_361(iParam0))
	{
		iVar10 = Global_24FBF9[iParam0 /*413*/].f_135.f_7;
		if (iVar10 != func_90())
		{
			if (func_360(iVar10))
			{
				iVar11 = func_356(iVar10);
				if (iVar11 != 4294967295)
				{
					return Global_197632.f_2A[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_355(iParam0, 0))
	{
		iVar12 = func_354(iParam0);
		if (iVar12 != func_90())
		{
			if (!func_353(iVar12))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_252F9E.f_312[iVar12]))
				{
					return unk_0x8000C77B5F336760(Global_252F9E.f_312[iVar12], 0);
				}
				else
				{
					return Global_18CD5B[func_354(iParam0) /*560*/].f_225;
				}
			}
			else
			{
				iVar13 = func_356(iVar12);
				if (!iVar13 == 4294967295)
				{
					return Global_197632.f_2A[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_352(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	if (func_370(iParam0))
	{
		return func_363(Global_24FBF9[iParam0 /*413*/].f_135.f_4);
	}
	return Global_197632.f_2A[Global_24FBF9[iParam0 /*413*/].f_135.f_4 /*3*/];
}

int func_352(int iParam0)//Position - 0x10CCF
{
	if (iParam0 != func_90())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_162(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_353(int iParam0)//Position - 0x10D16
{
	if (iParam0 != func_90())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_135.f_3, 4);
	}
	return 0;
}

int func_354(int iParam0)//Position - 0x10D3E
{
	if (iParam0 == func_90())
	{
		return iParam0;
	}
	return Global_24FBF9[iParam0 /*413*/].f_135.f_7;
}

int func_355(int iParam0, bool bParam1)//Position - 0x10D62
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("TERBYTE"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_90())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_90())
			{
				return func_162(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 12;
			}
		}
	}
	return 0;
}

int func_356(int iParam0)//Position - 0x10DF0
{
	int iVar0;
	
	if (iParam0 != func_90())
	{
		iVar0 = func_359(iParam0);
		if (iVar0 != 0)
		{
			return func_357(iVar0);
		}
	}
	return 4294967295;
}

int func_357(int iParam0)//Position - 0x10E19
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 123)
	{
		if (func_162(iVar0) == 11)
		{
			if (func_358(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_358(int iParam0)//Position - 0x10E50
{
	switch (iParam0)
	{
		case 102:
			return 1;
		
		case 103:
			return 2;
		
		case 104:
			return 3;
		
		case 105:
			return 4;
		
		case 106:
			return 5;
		
		case 107:
			return 6;
		
		case 108:
			return 7;
		
		case 109:
			return 8;
		
		case 110:
			return 9;
		
		case 111:
			return 10;
		
		default:
	}
	return 0;
}

int func_359(int iParam0)//Position - 0x10EC7
{
	if (iParam0 != func_90())
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_110;
	}
	return 0;
}

int func_360(int iParam0)//Position - 0x10EEB
{
	if (iParam0 != func_90())
	{
		if (Global_1841F3[iParam0 /*790*/].f_111.f_110 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_361(int iParam0)//Position - 0x10F14
{
	if (iParam0 != func_90())
	{
		if (func_362(iParam0) && Global_24FBF9[iParam0 /*413*/].f_135.f_7 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_362(int iParam0)//Position - 0x10F49
{
	if (iParam0 != func_90())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_162(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 11;
			}
		}
	}
	return 0;
}

Vector3 func_363(int iParam0)//Position - 0x10F90
{
	switch (iParam0)
	{
		case 102:
			return 750.5f, -1322.3f, 26.2802f;
		
		case 103:
			return 331.9f, -974.9f, 30f;
		
		case 104:
			return -146f, -1270f, 28.3088f;
		
		case 105:
			return -17.7f, 225.7f, 106.7566f;
		
		case 106:
			return 894.4f, -2106.4f, 29.4768f;
		
		case 107:
			return -668f, -2431.5f, 12.9444f;
		
		case 108:
			return 213.4f, -3166.6f, 4.7903f;
		
		case 109:
			return 366.6f, 237.6f, 104.9f;
		
		case 110:
			return -1275.3f, -666.8f, 25.6332f;
		
		case 111:
			return -1188.8f, -1156.9f, 4.6582f;
		
		default:
	}
	return Global_197632.f_2A[iParam0 /*3*/];
}

int func_364(int iParam0)//Position - 0x1109B
{
	int iVar0;
	
	if (iParam0 != func_90())
	{
		iVar0 = func_367(iParam0);
		if (iVar0 != 0)
		{
			return func_365(iVar0);
		}
	}
	return 4294967295;
}

int func_365(int iParam0)//Position - 0x110C4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 123)
	{
		if (func_162(iVar0) == 11)
		{
			if (func_366(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_366(int iParam0)//Position - 0x110FB
{
	switch (iParam0)
	{
		case 102:
			return 1;
		
		case 103:
			return 2;
		
		case 104:
			return 3;
		
		case 105:
			return 4;
		
		case 106:
			return 5;
		
		case 107:
			return 6;
		
		case 108:
			return 7;
		
		case 109:
			return 8;
		
		case 110:
			return 9;
		
		case 111:
			return 10;
		
		default:
	}
	return 0;
}

int func_367(int iParam0)//Position - 0x11172
{
	if (iParam0 != func_90())
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_139;
	}
	return 0;
}

int func_368(int iParam0)//Position - 0x11196
{
	if (iParam0 != func_90())
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_139 != 0;
	}
	return 0;
}

int func_369(int iParam0)//Position - 0x111BC
{
	if (iParam0 != func_90())
	{
		if (func_370(iParam0) && Global_24FBF9[iParam0 /*413*/].f_135.f_7 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_370(int iParam0)//Position - 0x111F1
{
	if (iParam0 != func_90())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_162(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_371(int iParam0)//Position - 0x11238
{
	if (iParam0 != func_90())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_162(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 10;
			}
		}
	}
	return 0;
}

int func_372(int iParam0)//Position - 0x1127F
{
	if (iParam0 != func_90())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_135.f_2, 6);
	}
	return 0;
}

int func_373(int iParam0)//Position - 0x112A7
{
	if (iParam0 == func_90())
	{
		return iParam0;
	}
	return Global_24FBF9[iParam0 /*413*/].f_135.f_7;
}

int func_374(int iParam0)//Position - 0x112CB
{
	if (iParam0 != func_90())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_90())
			{
				return func_162(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 8;
			}
		}
	}
	return 0;
}

int func_375(int iParam0)//Position - 0x1132B
{
	int iVar0;
	
	if (iParam0 == func_90())
	{
		return 4294967295;
	}
	iVar0 = func_378(iParam0);
	if (!iVar0 == 0)
	{
		return func_376(iVar0);
	}
	return 4294967295;
}

int func_376(int iParam0)//Position - 0x1135A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 123)
	{
		if (func_162(iVar0) == 9)
		{
			if (func_377(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_377(int iParam0)//Position - 0x11391
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_378(int iParam0)//Position - 0x11418
{
	if (iParam0 == func_90())
	{
		return 0;
	}
	return Global_1841F3[iParam0 /*790*/].f_111.f_106;
}

int func_379(int iParam0)//Position - 0x1143C
{
	if (iParam0 != func_90())
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_106 != 0;
	}
	return 0;
}

int func_380()//Position - 0x11462
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_197632.f_CED, 13) || Global_197632.f_882)
	{
		return 1;
	}
	return 0;
}

int func_381(int iParam0)//Position - 0x1148C
{
	if (iParam0 == func_90())
	{
		return 0;
	}
	if (func_382(iParam0) && Global_24FBF9[iParam0 /*413*/].f_135.f_7 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_382(int iParam0)//Position - 0x114C5
{
	if (iParam0 != func_90())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_162(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_383(int iParam0)//Position - 0x1150C
{
	if (iParam0 == func_90())
	{
		return 0;
	}
	if (func_384(iParam0) && Global_24FBF9[iParam0 /*413*/].f_135.f_7 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_384(int iParam0)//Position - 0x11545
{
	if (iParam0 != func_90())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_162(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 4;
			}
		}
	}
	return 0;
}

int func_385(int iParam0)//Position - 0x1158B
{
	if (iParam0 != func_90())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_162(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 6;
			}
		}
	}
	return 0;
}

int func_386(int iParam0)//Position - 0x115D1
{
	int iVar0;
	
	if (iParam0 == func_90())
	{
		return 4294967295;
	}
	iVar0 = func_389(iParam0);
	if (!iVar0 == 0)
	{
		return func_387(iVar0);
	}
	return 4294967295;
}

int func_387(int iParam0)//Position - 0x11600
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 123)
	{
		if (func_388(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_388(int iParam0)//Position - 0x1162C
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
			break;
		
		case 71:
			return 22;
			break;
		
		case 72:
			return 23;
			break;
		
		case 73:
			return 24;
			break;
		
		case 74:
			return 25;
			break;
		
		case 75:
			return 26;
			break;
		
		case 76:
			return 27;
			break;
		
		case 77:
			return 28;
			break;
		
		case 78:
			return 29;
			break;
		
		case 79:
			return 30;
			break;
		
		case 80:
			return 31;
			break;
	}
	return 0;
}

int func_389(int iParam0)//Position - 0x117E7
{
	if (iParam0 == func_90())
	{
		return 0;
	}
	return Global_1841F3[iParam0 /*790*/].f_111.f_AE[5 /*12*/];
}

int func_390(int iParam0)//Position - 0x1180D
{
	if (iParam0 != func_90())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_135, 6);
	}
	return 0;
}

int func_391(int iParam0)//Position - 0x11833
{
	if (iParam0 == func_90())
	{
		return iParam0;
	}
	return Global_24FBF9[iParam0 /*413*/].f_135.f_7;
}

int func_392(int iParam0)//Position - 0x11857
{
	if (iParam0 != func_90())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_90())
			{
				return func_162(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 5;
			}
		}
	}
	return 0;
}

int func_393(int iParam0)//Position - 0x118B6
{
	if (iParam0 != func_90())
	{
		if (func_13(iParam0, 1, 1))
		{
			return Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295;
		}
		else if ((Global_140859 && iParam0 == CAM::_0xDC9DA9E8789F5246()) && func_13(iParam0, 1, 0))
		{
			return Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295;
		}
	}
	return 0;
}

int func_394()//Position - 0x1191C
{
	if ((func_397() || func_396()) || func_395(CAM::_0xDC9DA9E8789F5246()))
	{
		return 1;
	}
	return 0;
}

bool func_395(int iParam0)//Position - 0x11948
{
	if (iParam0 == func_90())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18C89A[iParam0 /*38*/].f_1D, 20);
}

bool func_396()//Position - 0x1196D
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D00, 1);
}

bool func_397()//Position - 0x1197E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 5);
}

Vector3 func_398(int iParam0)//Position - 0x1198F
{
	int iVar0;
	
	if (HUD::GET_BLIP_INFO_ID_TYPE(iParam0) == 4)
	{
		return HUD::GET_BLIP_COORDS(iParam0);
	}
	else
	{
		iVar0 = HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return unk_0x8000C77B5F336760(iVar0, 0);
		}
	}
	return HUD::GET_BLIP_COORDS(iParam0);
}

bool func_399(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x119CE
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_400()//Position - 0x11A15
{
	if (func_300(CAM::_0xDC9DA9E8789F5246()))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 2))
		{
			MISC::SET_BIT(&iLocal_114, 2);
			return 1;
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 2))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_114, 2);
		return 1;
	}
	return 0;
}

int func_401(vector3 vParam0, float fParam1, int iParam2)//Position - 0x11A57
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (func_415() < 10)
	{
		iVar0 = func_414();
		func_402(vParam0, fParam1, iVar0, iParam2);
	}
	return iVar0;
}

void func_402(vector3 vParam0, var uParam1, int iParam2, var uParam3)//Position - 0x11A84
{
	func_403(vParam0, 0f, 0f, 0f, uParam1, 0, iParam2, uParam3);
}

void func_403(vector3 vParam0, vector3 vParam1, var uParam2, int iParam3, int iParam4, var uParam5)//Position - 0x11A9E
{
	struct<12> Var0;
	
	if (func_411(CAM::_0xDC9DA9E8789F5246()) || uParam5)
	{
		if (Var0.f_A == 1)
		{
			func_410(&vParam0, &vParam1);
		}
		Var0 = { vParam0 };
		Var0.f_3 = { vParam1 };
		Var0.f_6 = uParam2;
		Var0.f_A = iParam3;
		if (func_405(Var0))
		{
			Global_24B2CE.f_2C.f_40 = func_347(CAM::_0xDC9DA9E8789F5246());
			func_404(Var0, iParam4);
		}
	}
}

void func_404(struct<12> Param0, int iParam1)//Position - 0x11B14
{
	Global_24B2CE.f_16A[iParam1 /*12*/] = { Param0 };
	Global_24B2CE.f_16A[iParam1 /*12*/].f_9 = 1;
}

int func_405(struct<12> Param0)//Position - 0x11B3D
{
	struct<12> Var0[1];
	int iVar1;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_24B2CE.f_2C[iVar1 /*12*/].f_9 == 1)
		{
			if (!func_406(Global_24B2CE.f_2C[iVar1 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_406(vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)//Position - 0x11B9D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if ((uParam10[iVar0 /*12*/])->f_9)
		{
			switch ((uParam10[iVar0 /*12*/])->f_A)
			{
				case 0:
					switch (vParam0.f_A)
					{
						case 0:
							if (func_409(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_407(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (vParam0.f_A)
					{
						case 0:
							if (func_409(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_407(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (SYSTEM::VMAG(vParam0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_407(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x11CD6
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	fVar2 = (fParam3 * 0.7071068f);
	vVar0 = { vParam2 - Vector(fVar2, fVar2, fVar2) };
	vVar1 = { vParam2 + Vector(fVar2, fVar2, fVar2) };
	return func_408(vParam0, vParam1, vVar0, vVar1);
}

int func_408(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)//Position - 0x11D1A
{
	if (((((vParam0.x >= vParam2.x && vParam0.y >= vParam2.y) && vParam0.z >= vParam2.z) && vParam1.x <= vParam3.x) && vParam1.y <= vParam3.y) && vParam1.z <= vParam3.z)
	{
		return 1;
	}
	return 0;
}

int func_409(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)//Position - 0x11D71
{
	vector3 vVar0;
	
	vVar0 = { vParam2 - vParam0 };
	if ((SYSTEM::VMAG(vVar0) + fParam1) < fParam3)
	{
		return 1;
	}
	return 0;
}

void func_410(var uParam0, var uParam1)//Position - 0x11D9C
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (*uParam0 <= *uParam1)
	{
		vVar0.x = *uParam0;
		vVar1.x = *uParam1;
	}
	else
	{
		vVar0.x = *uParam1;
		vVar1.x = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		vVar0.y = uParam0->f_1;
		vVar1.y = uParam1->f_1;
	}
	else
	{
		vVar0.y = uParam1->f_1;
		vVar1.y = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		vVar0.z = uParam0->f_2;
		vVar1.z = uParam1->f_2;
	}
	else
	{
		vVar0.z = uParam1->f_2;
		vVar1.z = uParam0->f_2;
	}
	*uParam0 = { vVar0 };
	*uParam1 = { vVar1 };
}

int func_411(int iParam0)//Position - 0x11E33
{
	if (((func_346(iParam0, 1) || func_413(iParam0)) || func_98(iParam0, 0)) || func_412(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_412(int iParam0)//Position - 0x11E6F
{
	if (!func_13(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1841F3[iParam0 /*790*/].f_23;
}

int func_413(int iParam0)//Position - 0x11E92
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18CD5B[iVar0 /*560*/] != 4294967295;
	}
	return 0;
}

int func_414()//Position - 0x11EB3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_24B2CE.f_16A[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_415()//Position - 0x11EE5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_24B2CE.f_16A[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_416()//Position - 0x11F18
{
	if (!func_145())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_140740.f_9)
	{
		return;
	}
	func_141();
}

void func_417()//Position - 0x11F45
{
	Global_1964DE = 1;
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26A741, 0))
	{
		MISC::SET_BIT(&Global_26A741, 0);
		MISC::SET_BIT(&Global_1964DF, 0);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26A741, 1))
	{
		MISC::SET_BIT(&Global_26A741, 1);
		MISC::SET_BIT(&Global_1964DF, 1);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26A741, 5))
	{
		MISC::SET_BIT(&Global_26A741, 5);
		MISC::SET_BIT(&Global_1964DF, 5);
	}
	if (OBJECT::_DOES_DOOR_EXIST(3939230146))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(3939230146, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(3713987790))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(3713987790, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(2868514821))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(2868514821, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(745417724))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(745417724, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(2989662390))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(2989662390, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(2751792219))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(2751792219, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(3483196299))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(3483196299, 0, 0, 0);
	}
}

void func_418()//Position - 0x12057
{
	char* sVar0;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 5) && !HUD::IS_RADAR_HIDDEN())
	{
		if (Local_149.f_2C3)
		{
			sVar0 = "CPC_TITLEA";
		}
		else
		{
			sVar0 = "CPC_TITLE";
		}
		func_42(63, sVar0, "CPC_START", func_55(), 4294967295, func_55(), 1);
		HUD::FLASH_MINIMAP_DISPLAY();
		MISC::SET_BIT(&iLocal_114, 5);
	}
}

void func_419(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x120AE
{
	bool bVar0;
	
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
	}
	Global_26862F.f_127A = 4294967295;
	bVar0 = (func_98(CAM::_0xDC9DA9E8789F5246(), 0) && func_94(CAM::_0xDC9DA9E8789F5246()));
	if (bParam6)
	{
		func_436(21, 1);
	}
	else
	{
		func_435(iParam0, 4294967295);
		if (func_7(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_1806E7.f_3 = iParam0;
		}
		else
		{
			func_434(iParam0);
		}
		Global_1806E7.f_4 = 4294967295;
		if (func_7(CAM::_0xDC9DA9E8789F5246()))
		{
			MISC::SET_BIT(&(Global_1806E7.f_1), 5);
		}
		if ((func_324() && !func_335()) || func_334(CAM::_0xDC9DA9E8789F5246(), 21))
		{
			MISC::SET_BIT(&(Global_1806E7.f_1), 4);
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 17);
		MISC::SET_BIT(&(Global_1806E7.f_1), 20);
		if (func_433(iParam0))
		{
			func_432();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_429(fParam1);
		}
		if (fParam2 != 1f)
		{
			GRAPHICS::_0x54E22EA2C1956A8D(fParam2);
			if (iParam0 == 146)
			{
				HUD::_0x14621BB1DF14E2B2(0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), 0, 0);
				HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
			}
		}
		if (func_427(iParam0))
		{
			HUD::_0x14621BB1DF14E2B2(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), 0, 0);
			HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
			MISC::SET_BIT(&(Global_1806E7.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_247C05)
			{
				func_425(1);
				if (func_273(0))
				{
					MISC::SET_BIT(&(Global_1806E7.f_1), 9);
				}
				MISC::SET_BIT(&(Global_1806E7.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_423(1);
			MISC::SET_BIT(&(Global_1806E7.f_1), 12);
		}
		if (bParam5)
		{
			func_422();
			MISC::SET_BIT(&(Global_1806E7.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_420(iParam0))
			{
				MISC::SET_BIT(&(Global_1806E7.f_1), 21);
			}
		}
	}
	Global_263374 = 1;
}

int func_420(int iParam0)//Position - 0x12278
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
		case 236:
			return 1;
		
		default:
	}
	if (func_421())
	{
		return 1;
	}
	return 0;
}

int func_421()//Position - 0x122D3
{
	switch (func_289())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_422()//Position - 0x12301
{
	MISC::SET_BIT(&(Global_26862F.f_1271), 0);
}

void func_423(bool bParam0)//Position - 0x12315
{
	int iVar0;
	
	if (bParam0)
	{
		Global_16C64.f_8 = 1;
	}
	else
	{
		Global_16C64.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		func_424(iVar0);
		iVar0++;
	}
}

void func_424(int iParam0)//Position - 0x1234C
{
	Global_16C64.f_AC[iParam0] = 1;
	Global_16C64.f_AB = 1;
}

void func_425(int iParam0)//Position - 0x12366
{
	if (func_426() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_247C05)
	{
		return;
	}
	Global_247C05 = iParam0;
	Global_247C07 = 0;
	Global_247C08 = 0;
}

int func_426()//Position - 0x1239B
{
	if ((((Global_EC6C9 != 4294967295 && Global_EC6C9 != 33) && Global_EC6C9 != 35) && Global_EC6C9 != 37) && Global_EC6C9 != 21)
	{
		return 1;
	}
	return 0;
}

int func_427(int iParam0)//Position - 0x123E1
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_428(CAM::_0xDC9DA9E8789F5246()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_428(int iParam0)//Position - 0x1241F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

void func_429(float fParam0)//Position - 0x12445
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_430())
	{
		return;
	}
	fVar0 = (Global_26862F.f_130E - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_26862F.f_130F))
	{
		if (!Global_26862F.f_130F == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_26862F.f_130E = fParam0;
	Global_26862F.f_130F = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_430()//Position - 0x124B1
{
	switch (func_431())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_431()//Position - 0x124E5
{
	return Global_6373;
}

void func_432()//Position - 0x124F0
{
	Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_C8 = 0;
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11C4), 1);
}

int func_433(int iParam0)//Position - 0x12512
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_434(int iParam0)//Position - 0x1252C
{
	Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/] = iParam0;
}

void func_435(int iParam0, int iParam1)//Position - 0x12541
{
	int iVar0;
	
	if (iParam0 != 4294967295 || iParam1 != 4294967295)
	{
		iVar0 = iParam0;
		if (iVar0 == 4294967295)
		{
			iVar0 = iParam1;
		}
		if (func_494(0) || func_494(func_493(iVar0)))
		{
			MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 2);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 2);
		}
	}
}

void func_436(int iParam0, bool bParam1)//Position - 0x125A7
{
	if (bParam1)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_D0, iParam0))
		{
			MISC::SET_BIT(&(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_D0), iParam0);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_D0, iParam0))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_D0), iParam0);
	}
}

void func_437()//Position - 0x1260A
{
	vector3 vVar0;
	var uVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	var uVar5;
	vector3 vVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	vector3 vVar10;
	float fVar11;
	
	if (func_13(CAM::_0xDC9DA9E8789F5246(), 1, 1))
	{
		if ((!func_286() && !func_453(CAM::_0xDC9DA9E8789F5246(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) && !func_452(CAM::_0xDC9DA9E8789F5246()))
		{
			fVar3 = 2.147484E+09f;
			iVar4 = 4294967295;
			vVar6 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
			bVar7 = PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0);
			bVar8 = func_450();
			iVar2 = 0;
			while (iVar2 < 10)
			{
				uVar9 = Local_149.f_2D9[iVar2 /*2*/].f_1;
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar9) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(NETWORK::NET_TO_VEH(uVar9), 0))
				{
					if (!bVar8)
					{
						if (bVar7 && PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0) == NETWORK::NET_TO_VEH(uVar9))
						{
							func_311(1);
						}
					}
					if (func_30(iVar2, &vVar0, &uVar1))
					{
						vVar10 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_VEH(uVar9), 1) };
						if (SYSTEM::VDIST(vVar10, vVar0) <= 10f)
						{
							if (func_449(vVar10))
							{
								MISC::SET_BIT(&uVar5, iVar2);
							}
							if (func_447(vVar10, vVar6))
							{
								if (!func_445(vVar0, 100f))
								{
									fVar11 = SYSTEM::VDIST(vVar10, vVar6);
									if (fVar11 < fVar3)
									{
										fVar3 = fVar11;
										iVar4 = iVar2;
									}
								}
							}
						}
					}
				}
				iVar2++;
			}
			Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_7 = uVar5;
			if ((PED::IS_PED_IN_FLYING_VEHICLE(AUDIO::_0x0626A247D2405330()) || (ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330()) && !PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()))) || Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_4 > 0)
			{
				if ((fVar3 < 2.147484E+09f && iVar4 >= 0) && iVar4 < 10)
				{
					if (func_30(iVar4, &vVar0, &uVar1))
					{
						iLocal_135 = 1;
						func_444(vVar0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, 3212836864);
						func_443(vVar0, 1, 0);
						func_439(10, 0, 0, 0, 0);
					}
				}
			}
			else
			{
				func_438();
			}
		}
		else
		{
			func_438();
		}
	}
}

void func_438()//Position - 0x1281C
{
	if (iLocal_135)
	{
		func_153();
		func_151();
		iLocal_135 = 0;
	}
}

void func_439(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x12836
{
	if (Global_252F9E.f_761.f_2B2.f_10 != func_90())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[Global_252F9E.f_761.f_2B2.f_10 /*413*/].f_191, 0) && func_440())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_24CF98 = 0;
	}
	Global_24B2CE.f_1E4 = iParam0;
	Global_24B2CE.f_1E4.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_24B2CE.f_1E4.f_2 = iParam1;
	Global_24B2CE.f_1E4.f_3 = iParam2;
	Global_24B2CE.f_1E4.f_4 = iParam3;
	Global_24B2CE.f_1E4.f_5 = iParam4;
}

int func_440()//Position - 0x128D5
{
	if (((func_231(CAM::_0xDC9DA9E8789F5246()) == 229 || func_231(CAM::_0xDC9DA9E8789F5246()) == 191) || func_442()) || func_441())
	{
		return 0;
	}
	return 1;
}

bool func_441()//Position - 0x12915
{
	return Global_1805F4;
}

int func_442()//Position - 0x12921
{
	if (Global_440000 == 6)
	{
		return 1;
	}
	return 0;
}

void func_443(vector3 vParam0, int iParam1, int iParam2)//Position - 0x12936
{
	Global_24B2CE.f_2C.f_31 = { vParam0 };
	Global_24B2CE.f_2C.f_34 = iParam1;
	Global_24B2CE.f_2C.f_35 = iParam2;
}

void func_444(vector3 vParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x12960
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_15 = 1115815936;
	Var0.f_1B = 3212836864;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_24D471.f_6))
	{
		if (!Global_24D471.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(vParam0) == 0f)
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_24D471.f_6))
	{
		Global_24D471.f_6 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_24D471.f_6;
	Var0 = { vParam0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_A = 0;
	Var0.f_B = { 0f, 0f, 0f };
	Var0.f_E = { 0f, 0f, 0f };
	Var0.f_11 = 0f;
	Var0.f_15 = fParam7;
	Var0.f_16 = iParam8;
	if (func_411(CAM::_0xDC9DA9E8789F5246()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_17 = 1;
		}
		else
		{
			Var0.f_17 = 0;
		}
	}
	else
	{
		Var0.f_17 = 0;
	}
	if (Var0.f_15 < 1f)
	{
		Var0.f_15 = 1f;
	}
	Var0.f_18 = iParam9;
	Var0.f_1A = iParam10;
	Var0.f_1B = iParam12;
	Global_24D471 = { Var0 };
}

bool func_445(vector3 vParam0, float fParam1)//Position - 0x12A89
{
	return func_446(vParam0, fParam1, CAM::_0xDC9DA9E8789F5246(), 0, 0);
}

int func_446(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x12AA1
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_13(iVar1, 0, 1) && func_13(iParam2, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_13(iVar1, 0, 1) && func_13(iParam2, 0, 1))
				{
					if (Global_24E392.f_105[iVar0])
					{
						if (SYSTEM::VDIST(Global_24E392.f_83[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_29(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_24E392.f_105[iVar0])
				{
					if (SYSTEM::VDIST(Global_24E392.f_83[iVar0 /*3*/], vParam0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_13(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_29(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_447(vector3 vParam0, vector3 vParam1)//Position - 0x12BBE
{
	vector3 vVar0;
	
	if (Local_149.f_8 == 3)
	{
		vVar0 = { func_448(Local_149.f_2C8) };
		if (SYSTEM::VDIST(vParam1, vVar0) < 3500f)
		{
			if (SYSTEM::VDIST(vParam0, vVar0) > 3500f)
			{
				return 0;
			}
		}
	}
	return 1;
}

Vector3 func_448(int iParam0)//Position - 0x12C0C
{
	switch (iParam0)
	{
		case 0:
			return 1710.367f, -464.7253f, 169.8001f;
		
		case 1:
			return -966.3996f, -973.0624f, 2.8632f;
		
		case 2:
			return -1347.06f, 4123.072f, 62.2841f;
		
		case 3:
			return 1941.779f, 3847.167f, 34.3796f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_449(vector3 vParam0)//Position - 0x12C7E
{
	vector3 vVar0;
	
	if (Local_149.f_8 == 3)
	{
		vVar0 = { func_448(Local_149.f_2C8) };
		if (SYSTEM::VDIST(vParam0, vVar0) > 2500f)
		{
			return 0;
		}
	}
	return 1;
}

int func_450()//Position - 0x12CB7
{
	if (((((func_451(CAM::_0xDC9DA9E8789F5246()) || func_324()) || func_335()) || func_334(CAM::_0xDC9DA9E8789F5246(), 21)) || func_7(CAM::_0xDC9DA9E8789F5246())) || func_6(CAM::_0xDC9DA9E8789F5246()))
	{
		return 1;
	}
	return 0;
}

int func_451(int iParam0)//Position - 0x12D0F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iVar0 /*560*/].f_1, 7);
	}
	return 0;
}

int func_452(int iParam0)//Position - 0x12D35
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 14))
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 11))
	{
		return 1;
	}
	return 0;
}

int func_453(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)//Position - 0x12D74
{
	if (Global_1841F3[iParam0 /*790*/].f_111.f_18 > 0)
	{
		if (bParam1)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_456(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_161(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_455(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_384(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_454(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_382(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_374(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_370(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_362(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_355(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_352(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_454(int iParam0)//Position - 0x12E87
{
	if (iParam0 != func_90())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_162(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 7;
			}
		}
	}
	return 0;
}

int func_455(int iParam0)//Position - 0x12ECD
{
	if (iParam0 != func_90())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_162(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 1;
			}
		}
	}
	return 0;
}

int func_456(int iParam0)//Position - 0x12F13
{
	if (iParam0 != func_90())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_162(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 0;
			}
		}
	}
	return 0;
}

void func_457(var uParam0, char* sParam1)//Position - 0x12F59
{
	char* sVar0;
	
	if (func_285(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_228(sParam1))
	{
		sVar0 = sParam1;
	}
	func_133(uParam0, sVar0, 0, 0, 4294967295, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
}

char* func_458(int iParam0)//Position - 0x12F98
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	return "HUD_STARTING";
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_459(int iParam0, int iParam1)//Position - 0x131A1
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_460(int iParam0)//Position - 0x131B7
{
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		Global_26862F.f_1270 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1270, 1))
		{
			unk_0x1190AB7024CBD8CB(4294967295, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_26862F.f_1270 = 0;
			MISC::SET_BIT(&(Global_26862F.f_1270), 1);
		}
	}
}

int func_461(var uParam0, bool bParam1, bool bParam2)//Position - 0x1320E
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_462(bool bParam0)//Position - 0x13255
{
	int iVar0;
	vector3 vVar1;
	
	if (func_32())
	{
		if (func_13(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (((!bParam0 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_149.f_2D9[iVar0 /*2*/].f_1)) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(NETWORK::NET_TO_VEH(Local_149.f_2D9[iVar0 /*2*/].f_1), 0)) && VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_149.f_2D9[iVar0 /*2*/].f_1), 4294967295, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_143[iVar0]))
					{
						iLocal_143[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_149.f_2D9[iVar0 /*2*/].f_1));
						HUD::SET_BLIP_PRIORITY(iLocal_143[iVar0], 9);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_143[iVar0], "AMCH_AC");
						HUD::SET_BLIP_SPRITE(iLocal_143[iVar0], func_463(iVar0));
						func_341(&(iLocal_143[iVar0]), 9);
					}
					else
					{
						vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
						if (SYSTEM::VDIST(vVar1, unk_0x8000C77B5F336760(NETWORK::NET_TO_VEH(Local_149.f_2D9[iVar0 /*2*/].f_1), 1)) <= 150f)
						{
							HUD::_0x75A16C3DA34F1245(iLocal_143[iVar0], 1);
						}
						else
						{
							HUD::_0x75A16C3DA34F1245(iLocal_143[iVar0], 0);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_143[iVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_143[iVar0]));
				}
				iVar0++;
			}
		}
	}
}

int func_463(int iParam0)//Position - 0x133A5
{
	switch (Local_149.f_2D9[iParam0 /*2*/])
	{
		case joaat("MAVERICK"):
			return 64;
		
		case joaat("MAMMATUS"):
			return 423;
		
		default:
	}
	return 4294967295;
}

void func_464(int iParam0)//Position - 0x133D4
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	if (!HUD::IS_RADAR_HIDDEN())
	{
		switch (iParam0)
		{
			case 0:
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_133, iParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						func_467("CPC_PASSIVE", 30000);
						func_157(1);
						MISC::SET_BIT(&iLocal_133, iParam0);
					}
				}
				break;
			
			case 1:
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_133, iParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						func_467("CPC_NOAIR", 30000);
						func_157(1);
						MISC::SET_BIT(&iLocal_133, iParam0);
					}
				}
				break;
			
			case 2:
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_133, iParam0))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && func_32())
					{
						func_467("AMCH_AIRAV", 30000);
						func_157(1);
						MISC::SET_BIT(&iLocal_133, iParam0);
					}
				}
				break;
			
			case 3:
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_133, iParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						func_467("AMCH_BLOW", 30000);
						func_157(1);
						MISC::SET_BIT(&iLocal_133, iParam0);
					}
				}
				break;
			
			case 4:
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_133, iParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !func_466(63))
					{
						if (Local_149.f_2C3)
						{
							sVar0 = "CPC_HELPA";
						}
						else
						{
							sVar0 = "CPC_HELP";
						}
						func_467(sVar0, 30000);
						func_157(1);
						MISC::SET_BIT(&iLocal_133, iParam0);
					}
				}
				break;
			
			case 5:
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_133, iParam0))
				{
					if (((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_466(63)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_133, 4))
					{
						if (Local_149.f_2C3)
						{
							sVar1 = "CPC_HELPA2";
						}
						else
						{
							sVar1 = "CPC_HELP2";
						}
						func_467(sVar1, 30000);
						func_157(1);
						MISC::SET_BIT(&iLocal_133, iParam0);
					}
				}
				break;
			
			case 6:
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_133, iParam0))
				{
					if (((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_466(63)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_133, 5))
					{
						if (Local_149.f_2C3)
						{
							sVar2 = "CPC_WARNA";
						}
						else
						{
							sVar2 = "CPC_WARN";
						}
						func_465(sVar2, func_148(), 30000);
						func_157(1);
						unk_0x1190AB7024CBD8CB(4294967295, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						MISC::SET_BIT(&iLocal_133, iParam0);
					}
				}
				break;
			
			case 7:
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_133, iParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						func_467("CPC_PASSIV1", 30000);
						func_157(1);
						MISC::SET_BIT(&iLocal_133, iParam0);
					}
				}
				break;
			}
	}
}

void func_465(char* sParam0, int iParam1, int iParam2)//Position - 0x1365B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam2);
}

bool func_466(int iParam0)//Position - 0x13678
{
	return Global_252F9E.f_A90[0 /*80*/].f_1 == iParam0;
}

void func_467(char* sParam0, int iParam1)//Position - 0x1368F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_468(int iParam0)//Position - 0x136A6
{
	Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_3 = iParam0;
}

void func_469(bool bParam0)//Position - 0x136BB
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 4);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 4);
	}
}

int func_470(bool bParam0, bool bParam1, bool bParam2)//Position - 0x136EF
{
	if (func_492(CAM::_0xDC9DA9E8789F5246(), 29))
	{
		return 0;
	}
	if (func_334(CAM::_0xDC9DA9E8789F5246(), 21))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (bParam1)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_318(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_491())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_490(CAM::_0xDC9DA9E8789F5246()))
		{
			return 0;
		}
	}
	if (func_489())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_92(CAM::_0xDC9DA9E8789F5246()))
		{
			return 0;
		}
	}
	else if (func_482(CAM::_0xDC9DA9E8789F5246()) == 3)
	{
		return 0;
	}
	if (func_481(CAM::_0xDC9DA9E8789F5246()) != func_90() && func_481(CAM::_0xDC9DA9E8789F5246()) == func_75(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_480(func_181()) && func_290(CAM::_0xDC9DA9E8789F5246()) != 236)
	{
		return 0;
	}
	if (func_479())
	{
		return 0;
	}
	if (func_286())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_320(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (!func_477())
	{
		return 0;
	}
	if (func_334(CAM::_0xDC9DA9E8789F5246(), 0) || func_334(CAM::_0xDC9DA9E8789F5246(), 3))
	{
		return 0;
	}
	if ((func_334(CAM::_0xDC9DA9E8789F5246(), 12) || func_334(CAM::_0xDC9DA9E8789F5246(), 14)) || func_334(CAM::_0xDC9DA9E8789F5246(), 13))
	{
		return 0;
	}
	if (func_453(CAM::_0xDC9DA9E8789F5246(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) || func_392(CAM::_0xDC9DA9E8789F5246()))
	{
		if (!func_397() && !Global_2634E9)
		{
			return 0;
		}
	}
	if (func_476(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_475())
	{
		return 0;
	}
	if (Global_193F0F)
	{
		return 0;
	}
	if (func_412(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_474())
	{
		return 0;
	}
	if (func_472(CAM::_0xDC9DA9E8789F5246()) && Global_184094.f_AB)
	{
		return 0;
	}
	if (func_471())
	{
		return 0;
	}
	return 1;
}

bool func_471()//Position - 0x13909
{
	return Global_197632.f_1C;
}

int func_472(int iParam0)//Position - 0x13917
{
	if (func_473(Global_1841F3[iParam0 /*790*/].f_111.f_18))
	{
		return 1;
	}
	return 0;
}

int func_473(int iParam0)//Position - 0x13939
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_474()//Position - 0x13968
{
	if (Global_40EAC7.f_31D > 4294967295)
	{
		return 1;
	}
	return 0;
}

bool func_475()//Position - 0x13980
{
	return Global_16C64.f_148 > 0;
}

bool func_476(int iParam0)//Position - 0x13991
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 11);
}

int func_477()//Position - 0x139AD
{
	if (func_478() == 0)
	{
		return 1;
	}
	return 0;
}

int func_478()//Position - 0x139C2
{
	return Global_1406D2.f_12;
}

bool func_479()//Position - 0x139D0
{
	return Global_140859;
}

int func_480(int iParam0)//Position - 0x139DC
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_481(int iParam0)//Position - 0x13A20
{
	return Global_18CD5B[iParam0 /*560*/].f_B.f_23;
}

int func_482(int iParam0)//Position - 0x13A35
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_413(iParam0) && !func_7(iParam0)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 8));
	bVar2 = func_92(iParam0);
	uVar3 = func_324();
	uVar4 = func_483();
	if ((bVar1 && (func_451(iParam0) || func_428(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_94(iParam0)) && !func_163(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_26862F.f_1313.f_D2 != iVar0)
	{
		Global_26862F.f_1313.f_D2 = iVar0;
	}
	return iVar0;
}

int func_483()//Position - 0x13AF3
{
	if ((func_93(CAM::_0xDC9DA9E8789F5246(), 21) || func_93(CAM::_0xDC9DA9E8789F5246(), 22)) || func_487())
	{
		return 1;
	}
	if (func_485())
	{
		func_484(22);
		return 1;
	}
	return 0;
}

void func_484(int iParam0)//Position - 0x13B38
{
	MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_4), iParam0);
}

int func_485()//Position - 0x13B55
{
	if (func_98(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if ((func_324() && !func_335()) || func_334(CAM::_0xDC9DA9E8789F5246(), 21))
		{
			return 1;
		}
		else
		{
			func_486(27);
		}
	}
	return 0;
}

void func_486(int iParam0)//Position - 0x13B98
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_4), iParam0);
}

int func_487()//Position - 0x13BB5
{
	return func_488(306, 4294967295);
}

int func_488(int iParam0, int iParam1)//Position - 0x13BC5
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2727B6[iParam0 /*3*/][func_215(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

bool func_489()//Position - 0x13BF1
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 5;
}

int func_490(int iParam0)//Position - 0x13C06
{
	if (Global_24FBF9[iParam0 /*413*/].f_105.f_4 != 0 || Global_24FBF9[iParam0 /*413*/].f_105.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_491()//Position - 0x13C3A
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 0);
}

bool func_492(int iParam0, int iParam1)//Position - 0x13C56
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_B.f_5, iParam1);
}

int func_493(int iParam0)//Position - 0x13C71
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		case 236:
			return 12;
		
		default:
	}
	return Global_40001.f_5BC5;
}

bool func_494(int iParam0)//Position - 0x13D04
{
	int iVar0;
	
	iVar0 = func_219(2480, 4294967295, 0);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, iParam0);
}

void func_495()//Position - 0x13D1F
{
	if (Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_4 != 0)
	{
		Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_4 = 0;
	}
}

bool func_496(int iParam0)//Position - 0x13D42
{
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		if ((func_324() && !func_335()) || func_334(CAM::_0xDC9DA9E8789F5246(), 21))
		{
			return 1;
		}
		if (func_36(&(Global_1806E7.f_D)))
		{
			if (!func_1(&(Global_1806E7.f_D), Global_40001.f_E, 0))
			{
				return 1;
			}
			func_35(&(Global_1806E7.f_D));
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 10))
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 9);
}

bool func_497(int iParam0)//Position - 0x13DD4
{
	return func_88(iParam0, 0);
}

void func_498()//Position - 0x13DE3
{
	func_499(&(Local_170.f_216), &Local_170, 26, &(Local_170.f_1), &(Local_170.f_75), 4294967295, 0, 0);
}

void func_499(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x13E07
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
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
	struct<2> Var22;
	
	if (func_612(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = 4294967295;
	iVar12 = 4294967295;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_24 = 0;
	if (func_610() || iParam2 == 27)
	{
		if (func_566(uParam1, iParam2, uParam3, Global_180518, 0, func_613(), sParam7))
		{
			func_565(1);
			if ((!func_564() && !func_563()) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 1))
			{
				if (func_562())
				{
					func_561();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_1B == 0)
					{
						func_560(1);
						Global_180518 = 0;
						iVar19 = 4294967295;
						if (Global_1805F5 != 1)
						{
							func_559(uParam1, 0, 0);
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 7))
							{
								GRAPHICS::_0x35FB78DC42B7BD21(&(uParam3->f_21), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = 4294967295;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_13(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
									if (!func_88(iVar3, 0))
									{
										if ((func_558(iVar3) || Global_24FBF9[iVar3 /*413*/].f_EC != 4294967295) || func_557(iVar3))
										{
											iVar9 = iVar3;
											if (func_77(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_554(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_95(CAM::_0xDC9DA9E8789F5246(), 0) && func_231(CAM::_0xDC9DA9E8789F5246()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_553())
							{
								if (func_13(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
								}
								else
								{
									iVar3 = func_90();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_552(iVar3) && func_549(iVar3, iParam2)) && func_13(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1841F3[iVar9 /*790*/].f_D3.f_6;
								Var6 = { func_544(iVar3) };
								if (iVar3 == CAM::_0xDC9DA9E8789F5246())
								{
									uParam3->f_23 = iVar18;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_127(iVar3) };
								iVar5 = func_538(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
								}
								Global_180518++;
								if ((uParam0[iVar17 /*42*/])->f_16 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_16;
								}
								if ((uParam0[iVar17 /*42*/])->f_1F != 4294967295)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_1F;
								}
								if ((uParam0[iVar17 /*42*/])->f_29 != 4294967295)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_29;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != 4294967295 || (uParam0[iVar17 /*42*/])->f_16 != -1f) || (uParam0[iVar17 /*42*/])->f_1F != 4294967295)
								{
									if (!func_553())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != 4294967295)
								{
									func_533(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_68), func_532(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = 4294967294;
									}
								}
								iVar16 = func_531(iVar3, 0);
								if (bVar2)
								{
									if (func_76(iVar3, 1) && iVar1[iVar9] != 4294967295)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_27 != 4294967295)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_27, 16);
								}
								if (func_530(iParam5))
								{
									func_529(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								else
								{
									func_529(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								MISC::SET_BIT(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
							if (func_13(iVar3, 0, 1) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar14, iVar3))
							{
								iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
							}
							else
							{
								iVar3 = func_90();
							}
							if (func_552(iVar3))
							{
								if (func_13(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1841F3[iVar9 /*790*/].f_D3.f_6;
									Var6 = { func_544(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_127(iVar3) };
									iVar5 = func_538(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
									}
									Global_180518++;
									iVar16 = func_531(iVar3, 1);
									if (bVar2)
									{
										if (func_76(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
									func_512(iVar3, PLAYER::GET_PLAYER_NAME(iVar3), uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 11))
						{
							func_509(uParam3, uParam1);
						}
						func_35(&(uParam3->f_15));
						func_508();
						uParam3->f_1B = 2;
					}
					if (uParam3->f_1B == 2)
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 7))
						{
							func_507(uParam3, uParam1);
							func_506(uParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_21), 7);
						}
						func_507(uParam3, uParam1);
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 11))
						{
							MISC::SET_BIT(&(uParam3->f_21), 11);
						}
						if (func_502(uParam3))
						{
							Global_1805F5 = 1;
						}
						func_500(uParam3);
						if (Global_1805F5 == 1)
						{
							uParam3->f_1B = 0;
						}
						if (Global_1805F5 == 2)
						{
							uParam3->f_1B = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_1B = 0;
			func_508();
			func_560(0);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 7))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam3->f_21), 7);
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 10))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam3->f_21), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_500(var uParam0)//Position - 0x14459
{
	if (!func_36(&(uParam0->f_15)))
	{
		func_2(&(uParam0->f_15), 0, 0);
	}
	else if (func_1(&(uParam0->f_15), 250, 0))
	{
		func_35(&(uParam0->f_15));
		func_501(0);
	}
}

void func_501(bool bParam0)//Position - 0x14495
{
	if (bParam0)
	{
		if (Global_1805F5 != 2)
		{
			Global_1805F5 = 2;
		}
	}
	else
	{
		switch (Global_1805F5)
		{
			case 0:
				Global_1805F5 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_502(var uParam0)//Position - 0x144DB
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_25;
	iVar3 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_25);
	if (iVar3 != func_90() && func_13(iVar3, 0, 1))
	{
		Var2 = { func_127(iVar3) };
		iVar1 = func_505(uParam0, uParam0->f_25);
		if (func_504(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_503(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_503(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_503(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_503(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar4 = 1;
							func_503(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_503(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_25++;
	if (uParam0->f_25 >= 32)
	{
		uParam0->f_25 = 0;
	}
	return iVar4;
}

void func_503(var uParam0, int iParam1, int iParam2)//Position - 0x14608
{
	uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_504(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x1461A
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_505(var uParam0, int iParam1)//Position - 0x1462A
{
	return uParam0->f_26[iParam1 /*2*/];
}

void func_506(var uParam0, bool bParam1, int iParam2)//Position - 0x1463A
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "COLLAPSE"))
	{
		GRAPHICS::SET_SEETHROUGH(bParam1);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DISPLAY_VIEW"))
		{
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
	}
}

void func_507(var uParam0, var uParam1)//Position - 0x14672
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_21, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "SET_HIGHLIGHT");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_23);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		MISC::SET_BIT(&(uParam0->f_21), 10);
	}
}

void func_508()//Position - 0x146AA
{
	if (Global_1805F5 != 0)
	{
		Global_1805F5 = 0;
	}
}

void func_509(var uParam0, var uParam1)//Position - 0x146BF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_90())
		{
			if (func_13(iVar2, 0, 1))
			{
				if (uParam0->f_26[iVar0 /*2*/].f_1 != 4294967295)
				{
					iVar1 = func_511(uParam0->f_26[iVar0 /*2*/], 0);
					func_510(uParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_1841F3[iVar0 /*790*/].f_D3.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_510(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x14732
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
			}
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
	}
}

int func_511(int iParam0, bool bParam1)//Position - 0x1476F
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_512(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x147A3
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_528() && iParam4 < func_527())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_18051A)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1805F5 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, sVar1))
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam4);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 8) || uParam3->f_6C == 6)
			{
				func_526("");
			}
			else
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam10);
			}
			func_526(sParam1);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam11);
			if (uParam3->f_6C == 6)
			{
				func_526("");
			}
			else
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(65);
			}
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4294967295);
			func_526("");
			if (uParam3->f_6C == 6)
			{
				func_526("");
			}
			else
			{
				func_526(&sParam5);
			}
			func_517(uParam3, iParam0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			if (func_516(uParam3))
			{
				func_515("DPAD_FRIEND");
			}
			else if (func_514(uParam3))
			{
				func_515("DPAD_FRIEND");
			}
			else if (func_513(uParam3))
			{
				func_515("DPAD_CREW");
			}
			else
			{
				func_515("");
			}
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
	}
}

bool func_513(var uParam0)//Position - 0x148CD
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_21, 6);
}

bool func_514(var uParam0)//Position - 0x148DE
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_21, 5);
}

void func_515(char* sParam0)//Position - 0x148EF
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

int func_516(var uParam0)//Position - 0x14901
{
	if (func_514(uParam0) && func_513(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_517(var uParam0, int iParam1)//Position - 0x14922
{
	if (func_525(iParam1))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(121);
	}
	else if (func_521(iParam1))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(122);
	}
	else if (((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_1B, 15) && iParam1 > 4294967295) && iParam1 < 32) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam1 /*413*/].f_19A, 0))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(123);
	}
	else
	{
		if (func_518())
		{
			uParam0->f_24 = 0;
		}
		GRAPHICS::SET_SEETHROUGH(uParam0->f_24);
	}
}

int func_518()//Position - 0x149A3
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_519() || func_80())
		{
			return 1;
		}
	}
	return 0;
}

int func_519()//Position - 0x149C8
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_80();
	}
	return func_520(Global_440000.f_1FEDE);
}

int func_520(int iParam0)//Position - 0x149EC
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_40001.f_1378[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_521(int iParam0)//Position - 0x14A26
{
	if ((func_13(iParam0, 0, 1) && func_522()) && func_175(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_522()//Position - 0x14A53
{
	if (func_413(CAM::_0xDC9DA9E8789F5246()) || func_524())
	{
		if (!func_523(CAM::_0xDC9DA9E8789F5246(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_523(int iParam0, int iParam1)//Position - 0x14A83
{
	if (func_290(iParam0) == iParam1)
	{
		return func_451(iParam0);
	}
	return 0;
}

int func_524()//Position - 0x14AA0
{
	switch (func_231(CAM::_0xDC9DA9E8789F5246()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_525(int iParam0)//Position - 0x14ADE
{
	if (func_518())
	{
		if (func_13(iParam0, 0, 1))
		{
			return func_77(iParam0);
		}
	}
	if ((func_13(iParam0, 0, 1) && func_522()) && func_177(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_526(char* sParam0)//Position - 0x14B26
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

int func_527()//Position - 0x14B34
{
	int iVar0;
	
	if (Global_18051A)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_528()//Position - 0x14B50
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_18051A)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_529(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x14B68
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_528() && iParam3 < func_527())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_18051A)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == 4294967294)
			{
				iParam10 = 4294967295;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1805F5 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, sVar1))
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam2->f_21, 8) || uParam2->f_6C == 6)
				{
					func_526("");
				}
				else
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam9);
				}
				if (uParam2->f_6C == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_515(sParam16);
				}
				else
				{
					func_526(&(uParam2->f_1));
				}
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam11);
				if (uParam2->f_6C == 6)
				{
					func_526("");
				}
				else
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
				}
				else
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4294967295);
				}
				if (func_553())
				{
					func_526("");
				}
				else if (uParam2->f_6C == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (uParam2->f_6C == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (uParam2->f_6C == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (uParam2->f_6C == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_68)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != 4294967295)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_68));
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (uParam2->f_6C == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (uParam2->f_6C == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					}
				}
				else if (iParam15 > 4294967295)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_68)))
					{
						func_515(&(uParam2->f_68));
					}
					else
					{
						func_526("");
					}
				}
				else if (iParam14 != 4294967295)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (iParam10 != 4294967295)
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam10);
				}
				else
				{
					func_526("");
				}
				if (uParam2->f_6C == 6)
				{
					func_526("");
				}
				else
				{
					func_526(&sParam4);
				}
				func_517(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_526("");
					func_526("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
				}
				if (func_516(uParam2))
				{
					func_515("DPAD_FRIEND");
				}
				else if (func_514(uParam2))
				{
					func_515("DPAD_FRIEND");
				}
				else if (func_513(uParam2))
				{
					func_515("DPAD_CREW");
				}
				else
				{
					func_515("");
				}
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
		}
	}
}

int func_530(int iParam0)//Position - 0x14EC2
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_531(int iParam0, bool bParam1)//Position - 0x14EE6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_413(iParam0)) && !func_92(iParam0))
	{
		iVar0 = func_55();
	}
	iVar1 = func_74(iParam0);
	if (!iVar1 == 4294967295)
	{
		return func_72(iVar1);
	}
	return iVar0;
}

char* func_532(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x14F30
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_533(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x150BD
{
	if (func_537(iParam3))
	{
		*fParam1 = (func_534(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_530(iParam3))
	{
		*fParam1 = (func_534(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_534(int iParam0, int iParam1)//Position - 0x1510D
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_536(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_535(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_535(float fParam0)//Position - 0x151B0
{
	return (fParam0 / 1.609344f);
}

float func_536(float fParam0)//Position - 0x151C0
{
	return (fParam0 / 0.3048f);
}

int func_537(int iParam0)//Position - 0x151D0
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_538(int iParam0)//Position - 0x1522C
{
	int iVar0;
	
	iVar0 = func_541(iParam0);
	if (iVar0 == 4294967295)
	{
		func_539(iParam0, 1);
		return 0;
	}
	Global_150E71[iVar0 /*5*/].f_4 = 1;
	return Global_150E71[iVar0 /*5*/].f_2;
}

void func_539(int iParam0, bool bParam1)//Position - 0x15262
{
	if (!func_13(iParam0, 0, 1))
	{
		return;
	}
	if (func_541(iParam0) != 4294967295)
	{
		return;
	}
	if (Global_150F14)
	{
		if (iParam0 == Global_150F14.f_1)
		{
			return;
		}
	}
	if (func_540(iParam0))
	{
		return;
	}
	if (Global_150F3A >= 32)
	{
		return;
	}
	Global_150F19[Global_150F3A] = iParam0;
	Global_150F3A++;
	if (bParam1)
	{
	}
}

int func_540(int iParam0)//Position - 0x152CE
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_150F3A)
	{
		if (Global_150F19[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_541(int iParam0)//Position - 0x15300
{
	int iVar0;
	
	if (!func_13(iParam0, 0, 1))
	{
		return 4294967295;
	}
	if (Global_150F12 == 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_150F12)
	{
		if (Global_150E71[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_150E71[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_150E71[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_542(iVar0);
			return 4294967295;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_542(int iParam0)//Position - 0x1537F
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_150F12)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_150E71[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_150E71[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_150E71[iParam0 /*5*/].f_2), 64);
			HUD::_0x317EBA71D7543F52(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_150E71[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_150F12)
	{
		Global_150E71[iVar2 /*5*/] = { Global_150E71[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_543(&(Global_150E71[iVar2 /*5*/]));
	Global_150F12 = (Global_150F12 - 1);
}

void func_543(var uParam0)//Position - 0x15435
{
	*uParam0 = 0;
	uParam0->f_1 = func_90();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = HUD::_0x13C4B962653A5280();
	}
}

struct<4> func_544(int iParam0)//Position - 0x15462
{
	struct<4> Var0;
	
	if (func_13(iParam0, 0, 1))
	{
		Global_2633E1 = { func_127(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_504(Global_2633E1))
			{
				if (!NETWORK::_0xB57A49545BA53CE7(&Global_2633E1))
				{
					return Var0;
				}
			}
		}
		else if (!NETWORK::_0x72D918C99BCACC54(0))
		{
			return Var0;
		}
		if (func_548(&Global_2633E1))
		{
			Global_26339B = { func_546(iParam0) };
			func_545(&Global_26339B, &Var0);
		}
	}
	return Var0;
}

void func_545(var uParam0, var uParam1)//Position - 0x154E3
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, uParam1);
}

struct<35> func_546(int iParam0)//Position - 0x154F5
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_547(iParam0))
	{
		return Global_140879[CAM::_0xDC9DA9E8789F5246() /*35*/];
	}
	Var0 = { func_127(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_547(int iParam0)//Position - 0x15531
{
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		return 1;
	}
	return 0;
}

int func_548(var uParam0)//Position - 0x15547
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (GRAPHICS::_DRAW_SHOWROOM() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_549(int iParam0, int iParam1)//Position - 0x1556D
{
	if (iParam1 == 26)
	{
		if ((func_7(iParam0) || func_551(iParam0)) || func_6(iParam0))
		{
			return 0;
		}
	}
	if (!func_550(iParam0))
	{
		return 0;
	}
	if ((!func_558(iParam0) && Global_24FBF9[iParam0 /*413*/].f_EC == 4294967295) && !func_557(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_550(int iParam0)//Position - 0x155DC
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_8E, 22);
}

int func_551(int iParam0)//Position - 0x155F5
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 10) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 9));
	}
	return 0;
}

int func_552(int iParam0)//Position - 0x15633
{
	int iVar0;
	
	if (iParam0 == func_90())
	{
		return 0;
	}
	if (func_88(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iVar0 /*790*/].f_8E, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_553()//Position - 0x15678
{
	switch (func_231(CAM::_0xDC9DA9E8789F5246()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_290(CAM::_0xDC9DA9E8789F5246()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_92(CAM::_0xDC9DA9E8789F5246()))
	{
		switch (func_231(CAM::_0xDC9DA9E8789F5246()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_523(CAM::_0xDC9DA9E8789F5246(), 236))
	{
		return 1;
	}
	return 0;
}

void func_554(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x157B4
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_13(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_88(iVar1, 0))
			{
				if ((func_558(iVar1) || Global_24FBF9[iVar1 /*413*/].f_EC != 4294967295) || func_557(iVar1))
				{
					if (func_555(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_555(int iParam0, int iParam1, bool bParam2)//Position - 0x1583E
{
	if (iParam1 != func_90())
	{
		if (!bParam2)
		{
			if (func_556(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_90())
		{
			return iParam1 == Global_18CD5B[iParam0 /*560*/].f_B;
		}
	}
	return 0;
}

int func_556(int iParam0, int iParam1)//Position - 0x15888
{
	if (iParam1 != func_90())
	{
		if (iParam0 != func_90())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B != func_90())
			{
				if (Global_18CD5B[iParam0 /*560*/].f_B == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_557(int iParam0)//Position - 0x158CD
{
	return Global_1841F3[iParam0 /*790*/].f_C4 != 0;
}

int func_558(int iParam0)//Position - 0x158E2
{
	if (func_13(iParam0, 0, 1))
	{
		if (func_13(CAM::_0xDC9DA9E8789F5246(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, CAM::_0xDC9DA9E8789F5246()) || func_231(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_559(var uParam0, int iParam1, int iParam2)//Position - 0x15923
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

void func_560(bool bParam0)//Position - 0x15951
{
	if (bParam0)
	{
		if (Global_14E0B2.f_2 == 0)
		{
			Global_14E0B2.f_2 = 1;
		}
	}
	else if (Global_14E0B2.f_2 == 1)
	{
		Global_14E0B2.f_2 = 0;
	}
}

void func_561()//Position - 0x15983
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 1))
	{
		if (func_164())
		{
			func_180();
		}
	}
}

int func_562()//Position - 0x159A5
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 0) && func_164())
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 1) && func_164())
	{
		return 1;
	}
	return 0;
}

int func_563()//Position - 0x159E6
{
	if (func_164())
	{
		if (func_44(Global_252F9E.f_A90[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_564()//Position - 0x15A0D
{
	if (func_164())
	{
		if (func_56(Global_252F9E.f_A90[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_565(int iParam0)//Position - 0x15A34
{
	if (Global_14E0B2.f_1 != Global_14E0B2)
	{
		Global_14E0B2.f_1 = Global_14E0B2;
	}
	if (Global_14E0B2 != iParam0)
	{
		Global_14E0B2 = iParam0;
	}
}

int func_566(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0x15A62
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	char* sVar5;
	int iVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_609(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_608();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_607())
		{
			if (func_606() > 0 && Global_18051A)
			{
				HUD::_0x25F87B30C382FCA7();
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_596())
		{
			func_595(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11E1, 26))
	{
		func_595(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_36(&(uParam2->f_13)))
	{
		if (func_606() == 1)
		{
			func_594(bVar3, uParam0, 0);
			func_2(&(uParam2->f_13), 0, 0);
			func_595(uParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_26862F.f_11E2), 5);
		}
	}
	if (func_36(&(uParam2->f_13)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_1(&(uParam2->f_13), 10000, 0) || (func_606() == 0 && !bParam5))
		{
			func_595(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_593();
				if (iParam1 == 26 || iParam1 == 27)
				{
					HUD::_0x25F87B30C382FCA7();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam2->f_21, 0))
			{
				if (bVar2 == 0)
				{
					func_593();
					if (iParam1 == 26 || iParam1 == 27)
					{
						HUD::_0x25F87B30C382FCA7();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (func_594(bVar3, uParam0, 0))
				{
					func_559(uParam0, 0, 0);
					sVar1 = func_591(iParam1, &(Global_440000.f_1FEE5), bParam4);
					Var0 = { func_589(iParam1) };
					if (bParam4)
					{
						func_586(uParam0, sVar1, "", 0, 4294967295, 4294967295, 1);
					}
					else if (iParam1 == 26)
					{
						func_580(uParam0, func_583(uParam2), func_581(uParam2), 4294967295);
					}
					else if (iParam1 == 27)
					{
						sVar5 = func_574(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar5 = sParam6;
						}
						func_572(uParam0, sVar5, func_573(), 4294967295);
					}
					else if (func_518())
					{
						uParam2->f_22 = Global_180519;
						func_586(uParam0, sVar1, &Var0, 1, 4294967295, Global_180519, 1);
					}
					else if (bVar2)
					{
						uParam2->f_22 = Global_180519;
						func_586(uParam0, sVar1, "", 0, 4294967295, Global_180519, 1);
					}
					else
					{
						iVar6 = func_567(iParam1);
						func_586(uParam0, sVar1, &Var0, 1, iVar6, 4294967295, 1);
					}
					MISC::SET_BIT(&(uParam2->f_21), 0);
				}
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam2->f_21, 0))
			{
				Global_180518 = uParam3;
				Global_180517 = 1;
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (bVar2)
				{
					if (uParam2->f_22 != Global_180519)
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&(uParam2->f_21), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_567(int iParam0)//Position - 0x15D35
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (func_571())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
		case 30:
		case 29:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_570(CAM::_0xDC9DA9E8789F5246()))
			{
				iVar0 = 20;
			}
			if (func_569(CAM::_0xDC9DA9E8789F5246()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_568(CAM::_0xDC9DA9E8789F5246()))
	{
		iVar0 = 2;
	}
	if (func_232())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_568(int iParam0)//Position - 0x15E81
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 4;
}

bool func_569(int iParam0)//Position - 0x15E96
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 7;
}

bool func_570(int iParam0)//Position - 0x15EAB
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 2;
}

bool func_571()//Position - 0x15EC0
{
	return Global_440000.f_1 == 0;
}

void func_572(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x15ED0
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_515(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		func_515("");
		if (iParam3 != 4294967295)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

char* func_573()//Position - 0x15F2F
{
	switch (func_231(CAM::_0xDC9DA9E8789F5246()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_574(var uParam0)//Position - 0x15F87
{
	switch (uParam0->f_70)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_6E)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_231(CAM::_0xDC9DA9E8789F5246()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_576())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_267(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_267(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_575(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_B0))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_575(int iParam0)//Position - 0x163B3
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_576()//Position - 0x163E5
{
	return (func_579() && func_577(func_578()));
}

int func_577(int iParam0)//Position - 0x163FE
{
	return func_177(iParam0, 1);
}

int func_578()//Position - 0x1640D
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_23;
}

bool func_579()//Position - 0x16424
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 148;
}

void func_580(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x1643A
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_515(sParam1);
		}
		else if (func_290(CAM::_0xDC9DA9E8789F5246()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		func_515("");
		if (iParam3 != 4294967295)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

char* func_581(var uParam0)//Position - 0x164C1
{
	int iVar0;
	
	iVar0 = func_290(CAM::_0xDC9DA9E8789F5246());
	if (func_582())
	{
		if (uParam0->f_67 != 4294967295)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_289())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

bool func_582()//Position - 0x1666C
{
	return Global_184174;
}

char* func_583(var uParam0)//Position - 0x16678
{
	int iVar0;
	
	iVar0 = func_290(CAM::_0xDC9DA9E8789F5246());
	if (func_582())
	{
		if (uParam0->f_67 != 4294967295)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_585() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_585() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_289())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_584() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_584()//Position - 0x1686B
{
	return Global_26862F.f_12C7;
}

int func_585()//Position - 0x1687A
{
	if (func_290(CAM::_0xDC9DA9E8789F5246()) == 132)
	{
		return Global_26862F.f_12C2;
	}
	return 4294967295;
}

void func_586(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1689D
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_526(sParam1);
		}
		else if (iParam5 != 4294967295)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		else
		{
			func_515(sParam1);
		}
		if (func_607() && iParam6)
		{
			if (func_588())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		else
		{
			func_515(sParam2);
		}
		if (iParam4 != 4294967295)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam4);
			if (func_587(CAM::_0xDC9DA9E8789F5246()))
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(166);
			}
			else if (func_53())
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(220);
			}
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

int func_587(int iParam0)//Position - 0x1695E
{
	if (func_570(iParam0) || func_569(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_588()//Position - 0x16980
{
	return Global_18051A;
}

struct<4> func_589(int iParam0)//Position - 0x1698C
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_590(CAM::_0xDC9DA9E8789F5246()) || func_568(CAM::_0xDC9DA9E8789F5246()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_440000.f_26, 16);
			break;
	}
	if (func_518() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_440000.f_26, 16);
	}
	return Var0;
}

bool func_590(int iParam0)//Position - 0x16A27
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 5;
}

char* func_591(int iParam0, char* sParam1, bool bParam2)//Position - 0x16A3C
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_518() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_592();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_180607 == 0)
		{
			Global_180607 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_180607 == 1)
		{
			Global_180607 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_180607 == 0)
		{
			Global_180607 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 30:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_592()//Position - 0x16BA0
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_593()//Position - 0x16BE4
{
	Global_90A3 = 1;
}

bool func_594(bool bParam0, var uParam1, bool bParam2)//Position - 0x16BF0
{
	if (bParam0)
	{
		*uParam1 = unk_0x9934FEFB3B8C6DB8("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x9934FEFB3B8C6DB8("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x9934FEFB3B8C6DB8("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1);
}

void func_595(var uParam0, var uParam1, bool bParam2)//Position - 0x16C30
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_21), 7);
	Global_180518 = 0;
	func_508();
	Global_180517 = 0;
	uParam1->f_1B = 0;
	if (bParam2)
	{
		if (func_36(&(uParam1->f_13)))
		{
			func_35(&(uParam1->f_13));
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11E2), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_21, 0))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_21), 0);
	}
	HUD::_CLEAR_NOTIFICATIONS_POS(0f);
}

int func_596()//Position - 0x16CA2
{
	if (func_605())
	{
		return 0;
	}
	if (func_489())
	{
		return 0;
	}
	if (!func_603())
	{
		return 0;
	}
	if (!func_477())
	{
		return 0;
	}
	if (func_602(8, 4294967295))
	{
		return 0;
	}
	if (func_606() == 2)
	{
		return 0;
	}
	if (Global_26862F.f_11B2)
	{
		return 0;
	}
	if (func_286())
	{
		return 0;
	}
	else if (!func_319(CAM::_0xDC9DA9E8789F5246(), 1) && Global_1403E4[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_601(1) || func_599(1)) || Global_434C.f_7C) || Global_434C)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_598() && Global_19BACA == 2)
	{
		return 0;
	}
	if (func_86(CAM::_0xDC9DA9E8789F5246()) && !func_598())
	{
		return 0;
	}
	if (Global_193F0F)
	{
		return 0;
	}
	if (Global_193F15)
	{
		return 0;
	}
	if (func_597(0))
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 4))
	{
		return 0;
	}
	if (Global_14C619)
	{
		return 0;
	}
	if ((Global_19A0DD.f_2C1.f_5 || Global_19ABD8.f_2C1.f_5) || Global_199D20.f_2C1.f_5)
	{
		return 0;
	}
	return 1;
}

bool func_597(int iParam0)//Position - 0x16E0A
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_27, iParam0);
}

bool func_598()//Position - 0x16E21
{
	return (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_1E, 12) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19BACB, 0));
}

int func_599(bool bParam0)//Position - 0x16E43
{
	if (PAD::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			if (func_600(AUDIO::_0x0626A247D2405330()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_434C.f_82)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && unk_0xE11F00B4AC919F45(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xE11F00B4AC919F45(0, 166) || unk_0xE11F00B4AC919F45(0, 167)) || unk_0xE11F00B4AC919F45(0, 168)) || unk_0xE11F00B4AC919F45(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_600(int iParam0)//Position - 0x16F2E
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_601(bool bParam0)//Position - 0x16F8B
{
	if (bParam0)
	{
		return (Global_434C.f_4 && Global_434C.f_68 == 4);
	}
	return Global_434C.f_4;
}

bool func_602(int iParam0, int iParam1)//Position - 0x16FB4
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

int func_603()//Position - 0x16FEF
{
	if (func_604())
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

bool func_604()//Position - 0x1702E
{
	return Global_1406B6;
}

bool func_605()//Position - 0x1703A
{
	return MISC::GET_GAME_TIMER() <= Global_43D7.f_16F1 + 100;
}

int func_606()//Position - 0x1704F
{
	return Global_14E0B5.f_44;
}

int func_607()//Position - 0x1705D
{
	if (Global_180519 > 16)
	{
		return 1;
	}
	return 0;
}

float func_608()//Position - 0x17073
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_609(int iParam0)//Position - 0x17097
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
			return 1;
			break;
	}
	return 0;
}

int func_610()//Position - 0x170C0
{
	if (func_613())
	{
		return 1;
	}
	if (func_6(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_582())
	{
		return 1;
	}
	if (func_413(CAM::_0xDC9DA9E8789F5246()))
	{
		switch (func_290(CAM::_0xDC9DA9E8789F5246()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_611(CAM::_0xDC9DA9E8789F5246()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_611(CAM::_0xDC9DA9E8789F5246()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_611(CAM::_0xDC9DA9E8789F5246()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_611(int iParam0)//Position - 0x1719B
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 4);
}

int func_612(int iParam0)//Position - 0x171B3
{
	if (iParam0 == 27)
	{
		if ((func_413(CAM::_0xDC9DA9E8789F5246()) && !func_92(CAM::_0xDC9DA9E8789F5246())) && !func_523(CAM::_0xDC9DA9E8789F5246(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_98(CAM::_0xDC9DA9E8789F5246(), 0) && func_92(CAM::_0xDC9DA9E8789F5246()))
		{
			return 1;
		}
		if (func_482(CAM::_0xDC9DA9E8789F5246()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_613()//Position - 0x17224
{
	if (func_614(CAM::_0xDC9DA9E8789F5246()))
	{
		return Global_141784;
	}
	return 0;
}

int func_614(int iParam0)//Position - 0x1723F
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_88(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

void func_615()//Position - 0x17262
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_118)))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_118));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			func_616(iVar0, 2);
		}
	}
	iLocal_118++;
	if (iLocal_118 >= NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iLocal_118 = 0;
	}
}

void func_616(int iParam0, int iParam1)//Position - 0x172AB
{
	bool bVar0;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 0))
	{
		return;
	}
	if (func_36(&(Global_1806E7.f_12)))
	{
		return;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_2, iParam0))
	{
		if (Global_1806E7 < iParam1 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 1))
		{
			MISC::SET_BIT(&(Global_1806E7.f_1), 0);
			return;
		}
		if (Global_1806E7 != 0)
		{
			MISC::SET_BIT(&(Global_1806E7.f_1), 1);
		}
		Global_1806E7 = 0;
		Global_1806E7.f_2 = 0;
	}
	MISC::SET_BIT(&(Global_1806E7.f_2), iParam0);
	bVar0 = true;
	if (func_7(iParam0))
	{
		bVar0 = false;
	}
	if (func_617(iParam0))
	{
		bVar0 = false;
	}
	if (func_88(iParam0, 0))
	{
		bVar0 = false;
	}
	if (func_6(iParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1806E7++;
	}
}

bool func_617(int iParam0)//Position - 0x17379
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 10);
}

void func_618(int iParam0, int iParam1)//Position - 0x17392
{
	Local_1516[iParam0 /*5*/] = iParam1;
}

int func_619()//Position - 0x173A3
{
	struct<71> Var0;
	int iVar1;
	int iVar2;
	
	Var0 = 4;
	Var0.f_5 = 32;
	Var0.f_26 = 32;
	Global_26862F.f_127B = { Var0 };
	iVar1 = 0;
	while (iVar1 < 30)
	{
		Global_26862F.f_127B.f_26[iVar1] = 4294967295;
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		Local_170.f_216[iVar2 /*42*/].f_1 = func_90();
		iVar2++;
	}
	return 1;
}

int func_620()//Position - 0x17414
{
	return Local_149;
}

int func_621(int iParam0)//Position - 0x1741F
{
	return Local_1516[iParam0 /*5*/];
}

void func_622()//Position - 0x1742E
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 6))
	{
		func_646();
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 6);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 7))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 4) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_164()) && func_13(CAM::_0xDC9DA9E8789F5246(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1806E7.f_1), 7);
				func_158("FME_PASINT", 30000);
				func_157(1);
			}
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 17))
		{
			if (func_324() && !func_335())
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 17);
				MISC::SET_BIT(&(Global_1806E7.f_1), 16);
			}
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_310, 2)) && func_13(CAM::_0xDC9DA9E8789F5246(), 1, 1)) && !Global_10B8E) && !Global_D072) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_644())
			{
				func_158("AMEV_GA_RP", 4294967295);
				if (func_231(CAM::_0xDC9DA9E8789F5246()) != 200)
				{
					func_157(1);
				}
				MISC::SET_BIT(&(Global_1806E7.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_428(CAM::_0xDC9DA9E8789F5246()))
		{
			if (!unk_0x7922FBF86CF76430(1344549371))
			{
				HUD::_ADD_FRONTEND_MENU_CONTEXT(1344549371);
			}
		}
		else if (unk_0x7922FBF86CF76430(1344549371))
		{
			HUD::OBJECT_DECAL_TOGGLE(1344549371);
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 9))
	{
		if ((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_164()) && func_13(CAM::_0xDC9DA9E8789F5246(), 1, 1)) && !func_334(CAM::_0xDC9DA9E8789F5246(), 21))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 9);
			func_643(0);
			func_158("FME_TBL00", 4294967295);
			func_157(1);
		}
	}
	if (func_413(CAM::_0xDC9DA9E8789F5246()))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 18))
		{
			if ((func_334(CAM::_0xDC9DA9E8789F5246(), 21) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 20)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1806E7.f_1), 18);
			}
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_164()) && func_13(CAM::_0xDC9DA9E8789F5246(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !Global_26862F.f_12D0)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 18);
				MISC::SET_BIT(&(Global_1806E7.f_1), 19);
				func_158("AMTT_RPAS", 4294967295);
				func_157(1);
			}
		}
	}
	if (((((func_413(CAM::_0xDC9DA9E8789F5246()) && !func_7(CAM::_0xDC9DA9E8789F5246())) && func_290(CAM::_0xDC9DA9E8789F5246()) != 146) && !func_6(CAM::_0xDC9DA9E8789F5246())) && !func_496(CAM::_0xDC9DA9E8789F5246())) && !func_633())
	{
		if (func_427(func_290(CAM::_0xDC9DA9E8789F5246())))
		{
			unk_0x2C60B9CCB9A13F96(CAM::_0xDC9DA9E8789F5246());
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1806E7.f_1), 22);
		}
		if (func_451(CAM::_0xDC9DA9E8789F5246()) || func_421())
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 10))
			{
				if (func_631(func_290(CAM::_0xDC9DA9E8789F5246())))
				{
					if (func_273(0) && !Global_247C05)
					{
						MISC::SET_BIT(&(Global_1806E7.f_1), 9);
					}
					if (!Global_247C05)
					{
						func_425(1);
						MISC::SET_BIT(&(Global_1806E7.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1806E7.f_1), 10);
			}
		}
		if (func_428(CAM::_0xDC9DA9E8789F5246()))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 11))
			{
				if (!Global_16C64.f_8)
				{
					MISC::SET_BIT(&(Global_1806E7.f_1), 12);
					func_423(1);
				}
				if (!func_630())
				{
					MISC::SET_BIT(&(Global_1806E7.f_1), 13);
					func_422();
				}
				if (!Global_247C05)
				{
					MISC::SET_BIT(&(Global_1806E7.f_1), 14);
					if (func_273(0) && !Global_247C05)
					{
						MISC::SET_BIT(&(Global_1806E7.f_1), 9);
					}
					func_425(1);
				}
				MISC::SET_BIT(&(Global_1806E7.f_1), 11);
			}
		}
		else
		{
			func_628(0);
		}
	}
	else
	{
		func_628(1);
	}
	func_623();
	if (func_420(func_290(CAM::_0xDC9DA9E8789F5246())) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1806E7.f_1), 21);
	}
	if ((func_324() && !func_335()) || func_334(CAM::_0xDC9DA9E8789F5246(), 21))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 10))
		{
			MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 10);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 10))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 10);
	}
}

void func_623()//Position - 0x1794E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_164())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_466(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 26))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 26);
				}
				func_624(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 26))
	{
		func_35(&(Global_1806E7.f_16));
		MISC::SET_BIT(&(Global_1806E7.f_1), 26);
	}
}

void func_624(int iParam0, int iParam1)//Position - 0x179F1
{
	if (!func_36(&(Global_1806E7.f_16)))
	{
		func_2(&(Global_1806E7.f_16), 0, 0);
	}
	else if (func_1(&(Global_1806E7.f_16), iParam1, 0))
	{
		if (func_606() > 0)
		{
			func_627(iParam0);
			if (func_155("AMEV_LBD_HELP"))
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			}
			func_35(&(Global_1806E7.f_16));
		}
	}
	else
	{
		func_626(0);
		func_625();
	}
}

void func_625()//Position - 0x17A59
{
	Global_26862F.f_11A7 = 0;
}

void func_626(int iParam0)//Position - 0x17A69
{
	Global_14E0B5.f_44 = iParam0;
}

void func_627(int iParam0)//Position - 0x17A79
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_252F9E.f_A90[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_252F9E.f_A90[iVar0 /*80*/].f_2 = 5;
			MISC::SET_BIT(&(Global_252F9E.f_A90[iVar0 /*80*/].f_45), 0);
		}
		iVar0++;
	}
}

void func_628(int iParam0)//Position - 0x17AC5
{
	if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 11) || (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 10) && iParam0)) || (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 22) && iParam0))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 12))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 12);
			func_423(0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 13))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 13);
			func_629();
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 14) && !func_98(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 14);
			func_425(0);
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 11);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 10);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 22);
	}
}

void func_629()//Position - 0x17BA0
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1271), 0);
}

bool func_630()//Position - 0x17BB4
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1271, 0);
}

int func_631(int iParam0)//Position - 0x17BC8
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_428(CAM::_0xDC9DA9E8789F5246());
		
		case 133:
			return (func_421() || func_632(func_289()));
		
		default:
	}
	return 0;
}

int func_632(int iParam0)//Position - 0x17C38
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_633()//Position - 0x17C70
{
	if (((((((((func_642() || func_641()) || func_640()) || func_286()) || (func_639() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_636() && !func_635())) || Global_248A6D) || Global_248A6D.f_1 != 0) || Global_248AB7 != 0) || (func_634() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_634()//Position - 0x17D04
{
	return Global_EC6C9;
}

bool func_635()//Position - 0x17D10
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255C02.f_2, 27);
}

int func_636()//Position - 0x17D24
{
	if (func_638() || func_637())
	{
		return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_62 == 8;
	}
	return 0;
}

var func_637()//Position - 0x17D51
{
	return Global_255C02.f_270;
}

bool func_638()//Position - 0x17D60
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255C02.f_2, 11);
}

bool func_639()//Position - 0x17D74
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255C02, 5);
}

bool func_640()//Position - 0x17D85
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255C02, 2);
}

bool func_641()//Position - 0x17D96
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255C02, 20);
}

bool func_642()//Position - 0x17DA8
{
	return Global_255C02.f_24B;
}

void func_643(int iParam0)//Position - 0x17DB7
{
	int iVar0;
	
	iVar0 = func_219(2534, 4294967295, 0);
	if (iParam0 == 0)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 0))
		{
			MISC::SET_BIT(&iVar0, 0);
		}
		else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 1))
		{
			MISC::SET_BIT(&iVar0, 1);
		}
		else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 2))
		{
			MISC::SET_BIT(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 3))
		{
			MISC::SET_BIT(&iVar0, 3);
		}
		else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 4))
		{
			MISC::SET_BIT(&iVar0, 4);
		}
		else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 5))
		{
			MISC::SET_BIT(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 6))
		{
			MISC::SET_BIT(&iVar0, 6);
		}
		else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 7))
		{
			MISC::SET_BIT(&iVar0, 7);
		}
		else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 8))
		{
			MISC::SET_BIT(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 9))
		{
			MISC::SET_BIT(&iVar0, 9);
		}
		else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 10))
		{
			MISC::SET_BIT(&iVar0, 10);
		}
		else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 11))
		{
			MISC::SET_BIT(&iVar0, 11);
		}
	}
	func_210(2534, iVar0, 4294967295, 1, 0);
}

int func_644()//Position - 0x17EEF
{
	int iVar0;
	
	if (!func_36(&(Global_1806E7.f_F)))
	{
		func_2(&(Global_1806E7.f_F), 0, 0);
		Global_1806E7.f_11 = 0;
	}
	else if (func_1(&(Global_1806E7.f_F), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1806E7.f_11)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1806E7.f_11));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (func_13(iVar0, 1, 1) && func_645(iVar0, 6))
				{
					if (SYSTEM::VDIST(func_29(CAM::_0xDC9DA9E8789F5246()), func_29(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1806E7.f_11++;
		if (Global_1806E7.f_11 >= 32)
		{
			Global_1806E7.f_11 = 0;
			func_35(&(Global_1806E7.f_F));
		}
	}
	return 0;
}

int func_645(int iParam0, int iParam1)//Position - 0x17FB7
{
	int iVar0;
	
	if (Global_1406BF != 0)
	{
		return 0;
	}
	if (!func_214(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1841F3[iVar0 /*790*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_646()//Position - 0x17FF0
{
	HUD::_0x14621BB1DF14E2B2(5);
	func_648();
	GRAPHICS::_0x54E22EA2C1956A8D(1f);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 8);
	func_647();
}

void func_647()//Position - 0x18017
{
	if (Global_1964DE)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1964DF, 0))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_26A741, 0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1964DF, 1))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_26A741, 1);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1964DF, 5))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_26A741, 5);
		}
		if (OBJECT::_DOES_DOOR_EXIST(3939230146))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(3939230146, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(3713987790))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(3713987790, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(2868514821))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(2868514821, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(745417724))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(745417724, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(2989662390))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(2989662390, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(2751792219))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(2751792219, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(3483196299))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(3483196299, 1, 0, 0);
		}
		Global_1964DF = 0;
	}
	Global_1964DE = 0;
}

void func_648()//Position - 0x18117
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_26862F.f_130F))
	{
		if (!Global_26862F.f_130F == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_26862F.f_130E < 1f)
		{
			return;
		}
	}
	Global_26862F.f_130F = 4294967295;
	Global_26862F.f_130E = 1f;
}

int func_649()//Position - 0x1815E
{
	if (func_650())
	{
		return 1;
	}
	return 0;
}

bool func_650()//Position - 0x18172
{
	return Global_1806E7.f_18;
}

int func_651()//Position - 0x18180
{
	var uVar0;
	
	func_655(&uVar0);
	if (Global_140842 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_654())
	{
		return 1;
	}
	if (Global_258B0A)
	{
		return 1;
	}
	if (func_653())
	{
		return 1;
	}
	if (func_652(157))
	{
		if (!func_642())
		{
			return 1;
		}
	}
	if (func_652(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_430() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_430()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_652(int iParam0)//Position - 0x1820A
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_653()//Position - 0x18221
{
	return Global_25824F;
}

bool func_654()//Position - 0x1822D
{
	return Global_255C02.f_246;
}

void func_655(var uParam0)//Position - 0x1823C
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 171)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 3731680626:
					func_656(iVar0);
					break;
				
				case 566035618:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar3, 4);
					if (vVar3.z == 2305239146)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_656(int iParam0)//Position - 0x182AF
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_13(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_657(iVar2, &bVar3))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_657(int iParam0, var uParam1)//Position - 0x18330
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_658()//Position - 0x1838F
{
	SYSTEM::WAIT(0);
}

void func_659()//Position - 0x1839C
{
	var uVar0[4];
	int iVar1;
	var uVar2;
	
	func_166();
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_144, iVar1) && !AUDIO::HAS_SOUND_FINISHED(iLocal_145[iVar1]))
		{
			AUDIO::STOP_SOUND(iLocal_145[iVar1]);
			AUDIO::RELEASE_SOUND_ID(iLocal_145[iVar1]);
		}
		iVar1++;
	}
	func_416();
	func_469(0);
	func_662(132, 0, Local_149.f_8 == 6);
	func_436(22, 0);
	Global_26862F.f_12C2 = 4294967295;
	uVar0[0] = Local_149.f_3[0];
	uVar0[1] = Local_149.f_3[1];
	uVar0[2] = Local_149.f_3[2];
	uVar0[3] = Local_149.f_3[3];
	func_661(&(uVar0[0]));
	func_661(&(uVar0[1]));
	func_661(&(uVar0[2]));
	func_661(&(uVar0[3]));
	if (func_651())
	{
		Local_1515.f_5 = 5;
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_149.f_2, 2))
	{
		Local_1515.f_5 = 6;
	}
	else if (Local_1515.f_5 != 1)
	{
		Local_1515.f_5 = 2;
	}
	Local_1515 = Local_149.f_2D4;
	Local_1515.f_1 = Local_149.f_2D5;
	Local_1515.f_4 = Local_149.f_2D6;
	Local_1515.f_3 = Local_149.f_2D8;
	Local_1515.f_A = (NETWORK::_GET_POSIX_TIME() - Local_1515.f_9);
	uVar2 = Local_149.f_2C8;
	if (Local_149.f_2C3)
	{
		uVar2 = Local_149.f_2C8 + 4;
	}
	if (!Global_40001.f_2C7A)
	{
		if (Local_1515.f_6 > 0)
		{
		}
	}
	Local_1515.f_6 = (Local_1515.f_6 + iLocal_123);
	if (NETSHOP::_NETWORK_SHOP_BASKET_START() != 4294967295)
	{
		func_660(Local_1515, uVar2, Local_1516[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_4, uVar0[0], uVar0[1], uVar0[2], uVar0[3]);
	}
	func_462(1);
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_660(struct<12> Param0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x18558
{
	char* sVar0;
	struct<13> Var1;
	struct<14> Var2;
	struct<18> Var3;
	struct<14> Var4;
	struct<13> Var5;
	struct<14> Var6;
	struct<14> Var7;
	struct<16> Var8;
	struct<13> Var9;
	struct<14> Var10;
	struct<14> Var11;
	struct<13> Var12;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (Param0.f_9 == 0)
	{
		Param0.f_A = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_11625)
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_C = uParam1;
			unk_0x3F02404BB189D126(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "freemode"))
		{
			Var2 = { Param0 };
			Var2.f_C = uParam1;
			Var2.f_D = iParam2;
			unk_0x3F37A01E10EFBC82(&Var2);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
		{
			Var3 = { Param0 };
			Var3.f_C = uParam1;
			Var3.f_D = iParam2;
			Var3.f_E = iParam3;
			Var3.f_F = uParam4;
			Var3.f_10 = uParam5;
			Var3.f_11 = uParam6;
			unk_0x9D30E1D8E183CBC3(&Var3);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
		{
			Var4 = { Param0 };
			Var4.f_C = uParam1;
			Var4.f_D = SYSTEM::TO_FLOAT(iParam2);
			if (iParam3 == 1)
			{
				Var4.f_D = (Var4.f_D / 10f);
			}
			unk_0xC0312FB328DBF452(&Var4);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
		{
			unk_0x6B88EE97D205E33D(&Param0);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
		{
			Var5 = { Param0 };
			Var5.f_C = uParam1;
			unk_0x6188CC5679D9EC62(&Var5);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
		{
			Var6 = { Param0 };
			Var6.f_C = uParam1;
			Var6.f_D = iParam2;
			unk_0x0F05DB94C77F0394(&Var6);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
		{
			Var7 = { Param0 };
			Var7.f_C = uParam1;
			Var7.f_D = iParam2;
			unk_0xB4DF36A99D88AB30(&Var7);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
		{
			Var8 = { Param0 };
			Var8.f_C = uParam1;
			Var8.f_D = iParam2;
			Var8.f_E = iParam3;
			Var8.f_F = uParam4;
			unk_0x5D48D4D7FEF5F15D(&Var8);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var9 = { Param0 };
			Var9.f_C = uParam1;
			unk_0x72EF836BB244665D(&Var9);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
		{
			if (iParam3 == 0)
			{
				Var10 = { Param0 };
				Var10.f_C = uParam1;
				Var10.f_D = iParam2;
				unk_0x7A96074A38F0BFBD(&Var10);
			}
			else
			{
				Var11 = { Param0 };
				Var11.f_C = uParam1;
				Var11.f_D = iParam2;
				unk_0x71D1B9D601584712(&Var11);
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hunt_the_beast"))
		{
			Var12 = { Param0 };
			Var12.f_C = uParam1;
			unk_0x46BD47BFBC39CC53(&Var12);
		}
	}
}

void func_661(int iParam0)//Position - 0x187CD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, iVar0))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(iParam0, iVar0);
		}
		else
		{
			MISC::SET_BIT(iParam0, iVar0);
		}
		iVar0++;
	}
}

void func_662(int iParam0, bool bParam1, bool bParam2)//Position - 0x18807
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (CAM::_0xDC9DA9E8789F5246() != 4294967295)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 13))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 13);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 14))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 14);
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 21))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 21);
	}
	func_692();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_691(func_290(CAM::_0xDC9DA9E8789F5246()));
		func_436(21, 0);
	}
	else
	{
		if ((bParam2 && CAM::_0xDC9DA9E8789F5246() != 4294967295) && func_690(CAM::_0xDC9DA9E8789F5246()) >= 12)
		{
			func_689(2546, 4294967295);
			iVar1 = func_219(2546, 4294967295, 0);
			if (iVar1 == 2)
			{
				MISC::SET_BIT(&Global_180701, 0);
			}
			else if (iVar1 == 4)
			{
				MISC::SET_BIT(&Global_180701, 1);
			}
			else if (iVar1 == 6)
			{
				MISC::SET_BIT(&Global_180701, 2);
			}
			else if (iVar1 == 8)
			{
				MISC::SET_BIT(&Global_180701, 3);
			}
			else if (iVar1 == 10)
			{
				MISC::SET_BIT(&Global_180701, 4);
			}
			else if (iVar1 == 12)
			{
				MISC::SET_BIT(&Global_180701, 5);
			}
		}
		func_688();
		func_687();
		func_686();
		if ((!func_94(CAM::_0xDC9DA9E8789F5246()) && !func_163(CAM::_0xDC9DA9E8789F5246())) && !func_441())
		{
			func_670();
		}
		func_669();
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 1))
		{
			func_646();
		}
		func_668();
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6C5), 2);
		func_165();
		func_150();
	}
	if (unk_0x7922FBF86CF76430(1344549371))
	{
		HUD::OBJECT_DECAL_TOGGLE(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((CAM::_0xDC9DA9E8789F5246() != 4294967295 && !func_334(CAM::_0xDC9DA9E8789F5246(), 21)) && !func_98(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			func_425(0);
			func_423(0);
			func_667();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_40(26, 4294967295))
		{
			Global_258ACA = 4294967295;
			func_37(26, 4294967295);
		}
	}
	if (!func_663())
	{
		Global_263374 = 1;
	}
}

int func_663()//Position - 0x18A59
{
	if (((((!func_587(CAM::_0xDC9DA9E8789F5246()) && !func_568(CAM::_0xDC9DA9E8789F5246())) && func_290(CAM::_0xDC9DA9E8789F5246()) != 146) && !func_666()) && !func_665()) && !func_664(Global_440000.f_2559E))
	{
		return 0;
	}
	return 1;
}

bool func_664(int iParam0)//Position - 0x18ABB
{
	return iParam0 == 57;
}

int func_665()//Position - 0x18AC8
{
	if (Global_440000.f_1FEDE == Global_40001.f_250B)
	{
		return 1;
	}
	return 0;
}

int func_666()//Position - 0x18AE9
{
	if ((Global_440000 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_440000.f_5 != 0 || Global_440000.f_2559E > 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 15)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 18)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 19)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 29)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 28)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_667()//Position - 0x18B93
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1403FD)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2401A9[iVar0 /*26*/].f_C, 11))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2401A9[iVar0 /*26*/].f_D, 26))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_2401A9[iVar0 /*26*/].f_D), 26);
			}
		}
		iVar0++;
	}
}

void func_668()//Position - 0x18BE9
{
	struct<25> Var0;
	
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_15 = 4294967295;
	Global_1806E7 = { Var0 };
}

void func_669()//Position - 0x18C18
{
	var uVar0;
	
	Global_141784 = uVar0;
}

void func_670()//Position - 0x18C26
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_18), &Global_24C348, 2);
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_1A), &Global_24C34A, 18);
	func_684();
	func_673(1, 1, 0);
	func_671();
}

void func_671()//Position - 0x18C5C
{
	func_672(0, 0);
}

void func_672(int iParam0, int iParam1)//Position - 0x18C6A
{
	Global_24B2CE.f_16 = iParam0;
	Global_24B2CE.f_17 = iParam1;
}

void func_673(bool bParam0, bool bParam1, bool bParam2)//Position - 0x18C82
{
	if (bParam1)
	{
		unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_2C), &Global_24C35C, 318);
	}
	else
	{
		Global_24B2CE.f_2C = { Global_24C35C };
		Global_24B2CE.f_2C.f_31 = { Global_24C35C.f_31 };
		Global_24B2CE.f_2C.f_34 = Global_24C35C.f_34;
		Global_24B2CE.f_2C.f_35 = Global_24C35C.f_35;
	}
	if (bParam0)
	{
		func_683();
	}
	if (!bParam2)
	{
		func_675(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_674(0);
	func_153();
}

void func_674(bool bParam0)//Position - 0x18D21
{
	if (bParam0)
	{
		Global_24B2CE.f_2BE = 0;
	}
	else
	{
		Global_24B2CE.f_2BE = 1;
	}
}

void func_675(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x18D41
{
	if (bParam0)
	{
		if (func_682())
		{
			func_681();
		}
		Global_24B2CE.f_2BF.f_203 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_24B2CE.f_2BF.f_1F8 = iParam1;
		Global_24B2CE.f_2BF.f_1F9 = iParam2;
		Global_24B2CE.f_2BF.f_1FA = iParam10;
		func_679();
		func_439(8, 0, 0, 0, 0);
		Global_24B2CE.f_2BF.f_1FB = iParam11;
		Global_24B2CE.f_2BF.f_1FE = iParam3;
		Global_24B2CE.f_2BF.f_1FF = iParam4;
		Global_24B2CE.f_2BF.f_1FC = iParam5;
		Global_24B2CE.f_2BF.f_1FD = iParam6;
		Global_24B2CE.f_2BF.f_200 = iParam7;
		Global_24B2CE.f_2BF.f_201 = iParam8;
		Global_24B2CE.f_2BF.f_202 = iParam9;
		Global_24B2CE.f_6C8 = 1;
	}
	else
	{
		func_676();
	}
}

void func_676()//Position - 0x18E08
{
	if (func_682() && !func_678())
	{
		func_681();
	}
	if (func_678())
	{
		func_677();
	}
	else
	{
		func_679();
		func_439(0, 0, 0, 0, 0);
		Global_24B2CE.f_6C8 = 0;
		Global_24B2CE.f_6C7 = 0;
	}
}

void func_677()//Position - 0x18E50
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_2BF), &(Global_24B2CE.f_4C3), 516);
	Global_24B2CE.f_1E4 = { Global_24B2CE.f_1EA };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_2BF.f_203)
	{
		Global_24B2CE.f_6C7 = 0;
	}
}

int func_678()//Position - 0x18E98
{
	if ((Global_24B2CE.f_6C7 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_4C3.f_203) && SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_4C3.f_203))
	{
		return 1;
	}
	return 0;
}

void func_679()//Position - 0x18ED7
{
	if (func_682() && !func_678())
	{
		func_681();
	}
	func_680();
	Global_24B2CE.f_2BF = 0;
}

void func_680()//Position - 0x18F00
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_24B2CE.f_2BF.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_681()//Position - 0x18F3B
{
	if (func_678())
	{
		if (Global_24B2CE.f_2BF.f_203 == Global_24B2CE.f_4C3.f_203)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_2BF.f_203)
	{
		unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_4C3), &(Global_24B2CE.f_2BF), 516);
		Global_24B2CE.f_1EA = { Global_24B2CE.f_1E4 };
		Global_24B2CE.f_6C7 = 1;
	}
}

int func_682()//Position - 0x18FA9
{
	if ((Global_24B2CE.f_6C8 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_2BF.f_203) && SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_2BF.f_203))
	{
		return 1;
	}
	return 0;
}

void func_683()//Position - 0x18FE8
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_16A), &Global_24C49A, 121);
}

void func_684()//Position - 0x19001
{
	func_685();
	Global_24B2CE.f_8C5 = 0;
}

void func_685()//Position - 0x19015
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_24B2CE.f_8C6[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_686()//Position - 0x19041
{
	Global_26862F.f_1271 = 0;
}

void func_687()//Position - 0x19051
{
	if (CAM::_0xDC9DA9E8789F5246() != 4294967295)
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1 = 0;
	}
}

void func_688()//Position - 0x1906F
{
	int iVar0;
	
	iVar0 = CAM::_0xDC9DA9E8789F5246();
	if (iVar0 != 4294967295)
	{
		Global_18CD5B[iVar0 /*560*/] = 4294967295;
	}
}

void func_689(int iParam0, int iParam1)//Position - 0x1908D
{
	int iVar0;
	
	iVar0 = func_219(iParam0, func_215(iParam1), 0);
	iVar0++;
	if (!func_218(iParam0))
	{
		func_210(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_211(iParam0, iVar0, iParam1, 1);
	}
}

int func_690(int iParam0)//Position - 0x190CE
{
	return Global_1841F3[iParam0 /*790*/].f_D3.f_6;
}

int func_691(int iParam0)//Position - 0x190E3
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case 4294967295:
			return 1;
		
		case 146:
			if (func_428(CAM::_0xDC9DA9E8789F5246()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_692()//Position - 0x19145
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_6BC, 3) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_6BC, 4))
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_6BC, 5))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BC), 5);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_6BC, 3))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BC), 3);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_6BC, 4))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BC), 4);
	}
	func_695(0);
	func_694(0);
	func_693(0);
}

void func_693(int iParam0)//Position - 0x191E6
{
	if (Global_26862F.f_119B != iParam0)
	{
		Global_26862F.f_119B = iParam0;
	}
}

void func_694(bool bParam0)//Position - 0x19203
{
	if (Global_26862F.f_119A != bParam0)
	{
		if (bParam0)
		{
		}
		Global_26862F.f_119A = bParam0;
	}
}

void func_695(int iParam0)//Position - 0x19228
{
	if (Global_26862F.f_1198 != iParam0)
	{
		Global_26862F.f_1198 = iParam0;
	}
}

int func_696(struct<21> Param0)//Position - 0x19245
{
	func_704(func_705(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(0);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(func_703(8));
	func_700(0, 4294967295, 0);
	func_698(132);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_149, 750);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_1516, 161);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_697())
	{
		func_659();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		STATS::_0x6DEE77AFF8C21BD1(&(Local_149.f_2D4), &(Local_149.f_2D5));
	}
	Local_1515.f_2 = NETWORK::_0xCF61D4B4702EE9EB();
	Local_1515.f_9 = NETWORK::_GET_POSIX_TIME();
	Local_1515.f_8 = NETWORK::_GET_POSIX_TIME();
	func_436(22, 1);
	return 1;
}

int func_697()//Position - 0x192D8
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_654())
		{
			return 0;
		}
		if (func_652(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

void func_698(int iParam0)//Position - 0x19331
{
	func_668();
	func_699();
	func_686();
	Global_1806E7.f_4 = iParam0;
	Global_1806E7.f_5 = iParam0;
	func_435(iParam0, 4294967295);
	func_20(&(Global_1806E7.f_12), 0, 0);
	Global_26862F.f_11DE = 0;
	Global_258679[0] = func_90();
	Global_258679[1] = func_90();
	Global_258679[2] = func_90();
	Global_258679[3] = func_90();
	Global_258679[4] = func_90();
	func_150();
	if (!func_480(func_181()))
	{
		func_180();
	}
	if (func_324() && !func_335())
	{
		MISC::SET_BIT(&(Global_1806E7.f_1), 16);
	}
	else
	{
		MISC::SET_BIT(&(Global_1806E7.f_1), 17);
	}
}

void func_699()//Position - 0x193E7
{
	var uVar0;
	
	Global_180700 = uVar0;
}

int func_700(int iParam0, int iParam1, bool bParam2)//Position - 0x193F5
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_702();
			}
			else
			{
				return 0;
			}
		}
		if (!func_701())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_702();
					}
					else
					{
						return 0;
					}
				}
				if (func_654())
				{
					if (!bParam2)
					{
						func_702();
					}
					else
					{
						return 0;
					}
				}
				if (func_652(155))
				{
					if (!bParam2)
					{
						func_702();
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
					func_702();
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
				func_702();
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
			func_702();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_701()//Position - 0x1950A
{
	return Global_140842;
}

void func_702()//Position - 0x19516
{
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

int func_703(int iParam0)//Position - 0x19522
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 10;
		
		case 9:
			return 10;
		
		case 10:
			return 1;
		
		case 11:
			return 6;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		default:
	}
	return 0;
}

void func_704(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x195FC
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_702();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_10);
}

int func_705(int iParam0)//Position - 0x1961B
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 131:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 2;
		
		case 147:
			return 1;
		
		case 143:
			return 2;
		
		case 144:
			return 4;
		
		case 145:
			return 2;
		
		case 146:
			return 2;
		
		case 128:
			return 1;
		
		case 148:
			return 2;
		
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
			return 0;
		
		case 158:
			return 1;
		
		case 155:
			return 4;
		
		case 156:
			return 16;
		
		case 157:
			return 32;
		
		default:
	}
	return 0;
}

