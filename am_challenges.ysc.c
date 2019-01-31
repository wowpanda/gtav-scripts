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
	bool bLocal_112 = 0;
	bool bLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	vector3 vLocal_118 = { 0f, 0f, 0f };
	vector3 vLocal_119[65] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_120 = 0f;
	vector3 vLocal_121 = { 0f, 0f, 0f };
	vector3 vLocal_122 = { 0f, 0f, 0f };
	vector3 vLocal_123 = { 0f, 0f, 0f };
	vector3 vLocal_124 = { 0f, 0f, 0f };
	float fLocal_125 = 0f;
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
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	float fLocal_146 = 0f;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	int iLocal_159 = 0;
	vector3 vLocal_160[65] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_161[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_162[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	struct<68> Local_169 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	struct<535> Local_190 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_191 = -1;
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
	var uLocal_213 = -1082130432;
	var uLocal_214 = 3;
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
	var uLocal_230 = -1;
	var uLocal_231 = 0;
	var uLocal_232 = -1;
	var uLocal_233 = -1;
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
	var uLocal_255 = -1082130432;
	var uLocal_256 = 3;
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
	var uLocal_272 = -1;
	var uLocal_273 = 0;
	var uLocal_274 = -1;
	var uLocal_275 = -1;
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
	var uLocal_297 = -1082130432;
	var uLocal_298 = 3;
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
	var uLocal_314 = -1;
	var uLocal_315 = 0;
	var uLocal_316 = -1;
	var uLocal_317 = -1;
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
	var uLocal_339 = -1082130432;
	var uLocal_340 = 3;
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
	var uLocal_356 = -1;
	var uLocal_357 = 0;
	var uLocal_358 = -1;
	var uLocal_359 = -1;
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
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = -1082130432;
	var uLocal_382 = 3;
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
	var uLocal_398 = -1;
	var uLocal_399 = 0;
	var uLocal_400 = -1;
	var uLocal_401 = -1;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
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
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = -1082130432;
	var uLocal_424 = 3;
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
	var uLocal_440 = -1;
	var uLocal_441 = 0;
	var uLocal_442 = -1;
	var uLocal_443 = -1;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
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
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = -1082130432;
	var uLocal_466 = 3;
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
	var uLocal_482 = -1;
	var uLocal_483 = 0;
	var uLocal_484 = -1;
	var uLocal_485 = -1;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
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
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = -1082130432;
	var uLocal_508 = 3;
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
	var uLocal_524 = -1;
	var uLocal_525 = 0;
	var uLocal_526 = -1;
	var uLocal_527 = -1;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
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
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = -1082130432;
	var uLocal_550 = 3;
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
	var uLocal_566 = -1;
	var uLocal_567 = 0;
	var uLocal_568 = -1;
	var uLocal_569 = -1;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
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
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = -1082130432;
	var uLocal_592 = 3;
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
	var uLocal_608 = -1;
	var uLocal_609 = 0;
	var uLocal_610 = -1;
	var uLocal_611 = -1;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
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
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = -1082130432;
	var uLocal_634 = 3;
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
	var uLocal_650 = -1;
	var uLocal_651 = 0;
	var uLocal_652 = -1;
	var uLocal_653 = -1;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
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
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = -1082130432;
	var uLocal_676 = 3;
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
	var uLocal_692 = -1;
	var uLocal_693 = 0;
	var uLocal_694 = -1;
	var uLocal_695 = -1;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
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
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = -1082130432;
	var uLocal_718 = 3;
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
	var uLocal_734 = -1;
	var uLocal_735 = 0;
	var uLocal_736 = -1;
	var uLocal_737 = -1;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
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
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = -1082130432;
	var uLocal_760 = 3;
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
	var uLocal_776 = -1;
	var uLocal_777 = 0;
	var uLocal_778 = -1;
	var uLocal_779 = -1;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
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
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = -1082130432;
	var uLocal_802 = 3;
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
	var uLocal_818 = -1;
	var uLocal_819 = 0;
	var uLocal_820 = -1;
	var uLocal_821 = -1;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
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
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = -1082130432;
	var uLocal_844 = 3;
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
	var uLocal_860 = -1;
	var uLocal_861 = 0;
	var uLocal_862 = -1;
	var uLocal_863 = -1;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
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
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = -1082130432;
	var uLocal_886 = 3;
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
	var uLocal_902 = -1;
	var uLocal_903 = 0;
	var uLocal_904 = -1;
	var uLocal_905 = -1;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
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
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = -1082130432;
	var uLocal_928 = 3;
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
	var uLocal_944 = -1;
	var uLocal_945 = 0;
	var uLocal_946 = -1;
	var uLocal_947 = -1;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
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
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = -1082130432;
	var uLocal_970 = 3;
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
	var uLocal_986 = -1;
	var uLocal_987 = 0;
	var uLocal_988 = -1;
	var uLocal_989 = -1;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
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
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = -1082130432;
	var uLocal_1012 = 3;
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
	var uLocal_1028 = -1;
	var uLocal_1029 = 0;
	var uLocal_1030 = -1;
	var uLocal_1031 = -1;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
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
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = -1082130432;
	var uLocal_1054 = 3;
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
	var uLocal_1070 = -1;
	var uLocal_1071 = 0;
	var uLocal_1072 = -1;
	var uLocal_1073 = -1;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
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
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = -1082130432;
	var uLocal_1096 = 3;
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
	var uLocal_1112 = -1;
	var uLocal_1113 = 0;
	var uLocal_1114 = -1;
	var uLocal_1115 = -1;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
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
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = -1082130432;
	var uLocal_1138 = 3;
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
	var uLocal_1154 = -1;
	var uLocal_1155 = 0;
	var uLocal_1156 = -1;
	var uLocal_1157 = -1;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
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
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = -1082130432;
	var uLocal_1180 = 3;
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
	var uLocal_1196 = -1;
	var uLocal_1197 = 0;
	var uLocal_1198 = -1;
	var uLocal_1199 = -1;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
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
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = -1082130432;
	var uLocal_1222 = 3;
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
	var uLocal_1238 = -1;
	var uLocal_1239 = 0;
	var uLocal_1240 = -1;
	var uLocal_1241 = -1;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
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
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = -1082130432;
	var uLocal_1264 = 3;
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
	var uLocal_1280 = -1;
	var uLocal_1281 = 0;
	var uLocal_1282 = -1;
	var uLocal_1283 = -1;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
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
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = -1082130432;
	var uLocal_1306 = 3;
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
	var uLocal_1322 = -1;
	var uLocal_1323 = 0;
	var uLocal_1324 = -1;
	var uLocal_1325 = -1;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
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
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = -1082130432;
	var uLocal_1348 = 3;
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
	var uLocal_1364 = -1;
	var uLocal_1365 = 0;
	var uLocal_1366 = -1;
	var uLocal_1367 = -1;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
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
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = -1082130432;
	var uLocal_1390 = 3;
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
	var uLocal_1406 = -1;
	var uLocal_1407 = 0;
	var uLocal_1408 = -1;
	var uLocal_1409 = -1;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
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
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = -1082130432;
	var uLocal_1432 = 3;
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
	var uLocal_1448 = -1;
	var uLocal_1449 = 0;
	var uLocal_1450 = -1;
	var uLocal_1451 = -1;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
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
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = -1082130432;
	var uLocal_1474 = 3;
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
	var uLocal_1490 = -1;
	var uLocal_1491 = 0;
	var uLocal_1492 = -1;
	var uLocal_1493 = -1;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
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
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = -1082130432;
	var uLocal_1516 = 3;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = -1;
	var uLocal_1533 = 0;
	var uLocal_1534 = -1;
	struct<12> Local_1535[32];
	struct<12> Local_1536 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<21> Local_1537 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_120 = 40000f;
	iLocal_148 = AUDIO::GET_SOUND_ID();
	iLocal_149 = AUDIO::GET_SOUND_ID();
	iLocal_150 = 4294967295;
	iLocal_151 = 4294967295;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_746(ScriptParam_1537))
		{
			func_709();
		}
	}
	while (true)
	{
		func_708();
		if (func_701() || func_699())
		{
			func_709();
		}
		if (func_697())
		{
			func_709();
		}
		func_671();
		switch (func_670(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_669() == 1)
				{
					if (func_668())
					{
						func_667(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 1);
					}
				}
				break;
			
			case 1:
				if (func_669() == 1)
				{
					func_131();
					func_119();
				}
				else if (func_669() == 3)
				{
					func_667(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 3);
				}
				break;
			
			case 3:
				func_709();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_669())
			{
				case 0:
					if (func_106())
					{
						func_105(1);
					}
					break;
				
				case 1:
					if (Local_169.f_25 == 6)
					{
						func_105(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_126, 1000, 0))
					{
						func_105(3);
					}
					break;
				
				case 3:
					func_709();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)//Position - 0x1BE
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

void func_2(var uParam0, bool bParam1, bool bParam2)//Position - 0x21C
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

void func_3()//Position - 0x261
{
	bool bVar0;
	
	if (func_42(2, 0, 0, 0, 0))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_169.f_2, 0))
		{
			MISC::SET_BIT(&(Local_169.f_2), 0);
			Local_169.f_1 = HUD::_0x13C4B962653A5280();
		}
	}
	switch (Local_169.f_25)
	{
		case 0:
			if (func_41())
			{
				if (!func_31())
				{
					bVar0 = true;
				}
			}
			if (!bVar0)
			{
				func_30(1);
			}
			break;
		
		case 1:
			if (func_1(&(Local_169.f_2B), func_29(), 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_169.f_2, 0))
			{
				func_30(2);
			}
			func_31();
			break;
		
		case 2:
			Local_169.f_26 = HUD::_0x13C4B962653A5280();
			func_30(3);
			break;
		
		case 3:
			if (func_1(&(Local_169.f_27), func_28(0), 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_169.f_2, 0))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_169.f_2, 1))
				{
					Local_169.f_1 = HUD::_0x13C4B962653A5280();
					MISC::SET_BIT(&(Local_169.f_2), 1);
					func_27(&(Local_169.f_27), 0, 0);
				}
				else
				{
					func_30(4);
				}
			}
			func_13();
			func_9(&iLocal_151, &iLocal_150);
			func_31();
			break;
		
		case 4:
			if ((func_1(&(Local_169.f_29), 20000, 0) || Local_169.f_4[0] < 0) || func_6())
			{
				if (func_5(Local_169.f_3))
				{
					func_27(&(Local_169.f_2D), 0, 0);
					func_30(5);
				}
				else
				{
					func_30(6);
				}
			}
			else
			{
				func_31();
			}
			break;
		
		case 5:
			if (func_4())
			{
				func_30(6);
			}
			break;
		
		case 6:
			break;
	}
}

int func_4()//Position - 0x400
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_169.f_43[iVar0 /*2*/].f_1) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_169.f_43[iVar0 /*2*/].f_1), 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_5(int iParam0)//Position - 0x44C
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

int func_6()//Position - 0x484
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (!func_7(iVar2))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_1535[iVar1 /*12*/].f_1, 1) || Local_1535[iVar1 /*12*/].f_3 != 6)
				{
					return 0;
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_1535[iVar1 /*12*/].f_1, 0))
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_7(int iParam0)//Position - 0x50D
{
	if (func_8(iParam0))
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 8);
}

bool func_8(int iParam0)//Position - 0x533
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 2);
}

void func_9(int iParam0, int iParam1)//Position - 0x54B
{
	struct<14> Var0;
	int iVar1;
	
	if (*iParam0 >= 0 && *iParam1 >= 0)
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(*iParam0));
		if (*iParam1 == 0)
		{
			Var0.f_2 = 1826587727;
			Var0.f_A = iVar1;
			func_10(Var0, func_11(1));
		}
		*iParam0 = 4294967295;
		*iParam1 = 4294967295;
	}
}

void func_10(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x59E
{
	Param0 = 713068249;
	Param0.f_1 = CAM::_0xDC9DA9E8789F5246();
	if (!iParam13 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_11(int iParam0)//Position - 0x5CB
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
			if (func_12(iVar2, 0, 0))
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

int func_12(int iParam0, bool bParam1, bool bParam2)//Position - 0x628
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

void func_13()//Position - 0x672
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			MISC::SET_BIT(&iVar3, iVar0);
		}
		else
		{
			func_26(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar3, iVar0))
		{
			func_23(iVar0);
			MISC::SET_BIT(&(Local_169.f_2F), iVar0);
			iVar1++;
			if (func_17(iVar0, 0))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4) && !func_14(iVar4, 0))
				{
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > Local_169.f_32)
	{
		Local_169.f_32 = iVar1;
	}
	else
	{
		Local_169.f_42 = (Local_169.f_32 - iVar1);
	}
	if (iVar2 > Local_169.f_33)
	{
		Local_169.f_33 = iVar2;
	}
}

bool func_14(int iParam0, int iParam1)//Position - 0x748
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_15(4294967295, 0) == 8;
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

int func_15(int iParam0, bool bParam1)//Position - 0x793
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_16();
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

int func_16()//Position - 0x7D4
{
	return Global_1407E0;
}

int func_17(int iParam0, bool bParam1)//Position - 0x7E0
{
	float fVar0;
	
	if (iParam0 >= 0 && iParam0 < 32)
	{
		fVar0 = SYSTEM::TO_FLOAT(Local_1535[iParam0 /*12*/].f_4);
	}
	else if (iParam0 == 4294967295)
	{
		fVar0 = SYSTEM::TO_FLOAT(Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_4);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_19())
		{
			return 1;
		}
	}
	if (func_18())
	{
		fVar0 = (fVar0 / 10f);
	}
	switch (Local_169.f_3)
	{
		case 0:
			if (fVar0 >= Global_40001.f_2A4A)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_40001.f_2A4B)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_40001.f_2A4C)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_40001.f_2A4D)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_40001.f_2A4E)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_40001.f_2A4F)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_40001.f_2A50 && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_40001.f_2A51)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_40001.f_2A52)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_40001.f_2A53)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_40001.f_2A54)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_40001.f_2A55))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_40001.f_2A56))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_40001.f_2AC6)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_40001.f_2AC7)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_40001.f_2A59))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_40001.f_2A5B))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_40001.f_2A5C))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_40001.f_2A5D))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_18()//Position - 0xA52
{
	switch (Local_169.f_3)
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

int func_19()//Position - 0xAB1
{
	if ((func_20(0) || func_20(1)) || func_20(2))
	{
		return 1;
	}
	return 0;
}

int func_20(int iParam0)//Position - 0xADC
{
	if (iParam0 >= 0)
	{
		if (Local_169.f_4[iParam0] == NETSHOP::_NETWORK_SHOP_BASKET_START() && func_21(Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_4, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_21(int iParam0, int iParam1)//Position - 0xB15
{
	if (!func_22())
	{
		return iParam0 > iParam1;
	}
	if (iParam0 == 0)
	{
		iParam0 = 2147483647;
	}
	if (iParam1 == 0)
	{
		iParam1 = 2147483647;
	}
	return iParam0 < iParam1;
}

int func_22()//Position - 0xB4F
{
	switch (Local_169.f_3)
	{
		case 6:
			return 1;
		
		default:
	}
	return 0;
}

void func_23(int iParam0)//Position - 0xB6C
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = Local_1535[iParam0 /*12*/].f_4;
	iVar1 = Local_1535[iParam0 /*12*/].f_4.f_2;
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_169.f_30, iParam0))
	{
		fVar2 = SYSTEM::TO_FLOAT(Local_169.f_4[0]);
		if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_169.f_31++;
			MISC::SET_BIT(&(Local_169.f_30), iParam0);
		}
	}
	iVar3 = 4294967295;
	iVar4 = 4294967294;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_169.f_4[iVar3] == iParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= 4294967295)
		{
			if (iVar4 >= 0)
			{
				func_25(&(Local_169.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_169.f_4[iVar3] < 0 || func_21(iVar0, Local_1535[Local_169.f_4[iVar3] /*12*/].f_4)) || func_24(iVar0, Local_1535[Local_169.f_4[iVar3] /*12*/].f_4, iVar1, Local_1535[Local_169.f_4[iVar3] /*12*/].f_4.f_2))
		{
			iVar4 = Local_169.f_4[iVar3];
			if (func_21(iVar0, 0))
			{
				iLocal_150 = iVar3;
				iLocal_151 = iParam0;
			}
			Local_169.f_4[iVar3] = iParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_169.f_4[iVar5] == iParam0)
				{
					Local_169.f_4[iVar5] = 4294967295;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xCEC
{
	if (Local_169.f_3 == 2)
	{
		if (iParam0 == iParam1 && iParam2 > iParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_25(var uParam0, int iParam1)//Position - 0xD14
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_26(int iParam0)//Position - 0xD3A
{
	int iVar0;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_169.f_2F, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_169.f_4[iVar0] == iParam0)
			{
				Local_169.f_4[iVar0] = 4294967295;
				iVar0 = 32;
			}
			iVar0++;
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&(Local_169.f_30), iParam0);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Local_169.f_2F), iParam0);
	}
}

void func_27(var uParam0, bool bParam1, bool bParam2)//Position - 0xD95
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

int func_28(bool bParam0)//Position - 0xDD2
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_169.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_169.f_3)
	{
		case 0:
			return Global_40001.f_279F;
		
		case 8:
			return Global_40001.f_27A1;
		
		case 3:
			return Global_40001.f_27A2;
		
		case 1:
			return Global_40001.f_2AB8;
		
		case 6:
			return Global_40001.f_2AB9;
		
		case 10:
			return Global_40001.f_2ABB;
		
		case 11:
			return Global_40001.f_2ABD;
		
		case 12:
			return Global_40001.f_2ABE;
		
		case 15:
			return Global_40001.f_2AC2;
		
		case 16:
			return Global_40001.f_2AC3;
		
		case 17:
			return Global_40001.f_2AC4;
		
		case 18:
			return Global_40001.f_2AC5;
		
		case 13:
			return Global_40001.f_2ABC;
		
		case 14:
			return Global_40001.f_2ABF;
		
		case 2:
			return Global_40001.f_27A4;
		
		case 7:
			return Global_40001.f_2ABA;
		
		case 9:
			return Global_40001.f_2AC0;
		
		case 5:
			return Global_40001.f_27A5;
		
		case 4:
			return Global_40001.f_27A3;
		
		default:
	}
	return 4294967295;
}

int func_29()//Position - 0xF30
{
	return Global_40001.f_2A9A;
}

void func_30(int iParam0)//Position - 0xF3F
{
	Local_169.f_25 = iParam0;
}

int func_31()//Position - 0xF4E
{
	struct<2> Var0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	
	if (func_41() && ((Local_169.f_25 == 0 || func_5(Local_169.f_3)) || Local_169.f_36 < 10))
	{
		Var0 = { Local_169.f_43[iLocal_145 /*2*/] };
		if (func_40(Var0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1))
			{
				if (func_38(Local_169.f_3, iLocal_145, &vVar1, &fVar2))
				{
					Local_169.f_37[iLocal_145] = func_34(iLocal_145);
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_1535[Local_169.f_37[iLocal_145] /*12*/].f_2, iLocal_145))
					{
						if (func_33(&(Local_169.f_43[iLocal_145 /*2*/].f_1), Var0, vVar1, fVar2, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Local_169.f_43[iLocal_145 /*2*/].f_1), 1, 1);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_169.f_43[iLocal_145 /*2*/].f_1), 1);
							ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_169.f_43[iLocal_145 /*2*/].f_1), 1);
							VEHICLE::_0x0AD9E8F87FF7C16F(NETWORK::NET_TO_VEH(Local_169.f_43[iLocal_145 /*2*/].f_1), 0);
							func_32(NETWORK::NET_TO_VEH(Local_169.f_43[iLocal_145 /*2*/].f_1), 1);
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
							{
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_169.f_43[iLocal_145 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
							{
								if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_169.f_43[iLocal_145 /*2*/].f_1), "MPBitset"))
								{
									iVar3 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_169.f_43[iLocal_145 /*2*/].f_1), "MPBitset");
								}
								MISC::SET_BIT(&iVar3, 10);
								MISC::SET_BIT(&iVar3, 11);
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_169.f_43[iLocal_145 /*2*/].f_1), "MPBitset", iVar3);
							}
							Local_169.f_37[iLocal_145] = 4294967295;
							Local_169.f_36++;
						}
					}
				}
			}
		}
		iLocal_145++;
		if (iLocal_145 >= 10)
		{
			iLocal_145 = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_32(int iParam0, bool bParam1)//Position - 0x113D
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

int func_33(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x118B
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

int func_34(int iParam0)//Position - 0x1285
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	var uVar5;
	int iVar6;
	
	fVar2 = 1000000f;
	if (func_37(iParam0, &vVar4, &uVar5))
	{
		iVar0 = 0;
		while (iVar0 <= (NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				if (func_12(iVar6, 1, 1))
				{
					fVar3 = func_35(func_36(iVar6), vVar4);
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

float func_35(vector3 vParam0, vector3 vParam1)//Position - 0x12FE
{
	vParam0.z = 0f;
	vParam1.z = 0f;
	return SYSTEM::VDIST(vParam0, vParam1);
}

Vector3 func_36(int iParam0)//Position - 0x131C
{
	return unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_37(int iParam0, var uParam1, var uParam2)//Position - 0x132F
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

int func_38(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x14AB
{
	if (func_5(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -1729.582f, -2943.77f, 12.9443f };
				*uParam3 = 300.078f;
				break;
			
			case 1:
				*uParam2 = { 677.2984f, 769.7758f, 204.6846f };
				*uParam3 = 82.8903f;
				break;
			
			case 2:
				*uParam2 = { 1073.972f, 3003.889f, 40.5508f };
				*uParam3 = 333.2717f;
				break;
			
			case 3:
				*uParam2 = { 1928.635f, 4702.327f, 40.1958f };
				*uParam3 = 327.9112f;
				break;
			
			case 4:
				*uParam2 = { 1278.65f, 6579.366f, 1.505f };
				*uParam3 = 84.26f;
				break;
			
			case 5:
				*uParam2 = { -1700.407f, -829.8932f, 8.2542f };
				*uParam3 = 70.1811f;
				break;
			
			case 6:
				*uParam2 = { -2733.589f, 2925.563f, 1.2152f };
				*uParam3 = 173.6421f;
				break;
			
			case 7:
				*uParam2 = { 1493.418f, -2442.99f, 64.9693f };
				*uParam3 = 52.9918f;
				break;
			
			case 8:
				*uParam2 = { 569.0449f, -772.5692f, 10.4088f };
				*uParam3 = 179.3501f;
				break;
			
			case 9:
				*uParam2 = { -905.1526f, 5548.172f, 5.5251f };
				*uParam3 = 95.8361f;
				break;
			
			default:
				return 0;
		}
	}
	else if (func_39(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -3132.932f, 1130.534f, 19.683f };
				*uParam3 = 168.7723f;
				break;
			
			case 1:
				*uParam2 = { -1008.917f, -1640.027f, 3.4035f };
				*uParam3 = 235.1491f;
				break;
			
			case 2:
				*uParam2 = { 1075.063f, -2445.105f, 28.2896f };
				*uParam3 = 100.2369f;
				break;
			
			case 3:
				*uParam2 = { 1101.198f, -266.9387f, 68.3046f };
				*uParam3 = 359.2015f;
				break;
			
			case 4:
				*uParam2 = { 2658.878f, 1667.581f, 23.4886f };
				*uParam3 = 90.4833f;
				break;
			
			case 5:
				*uParam2 = { -399.1095f, 874.6328f, 230.2586f };
				*uParam3 = 107.5929f;
				break;
			
			case 6:
				*uParam2 = { 156.5429f, 3117.213f, 41.5677f };
				*uParam3 = 218.5338f;
				break;
			
			case 7:
				*uParam2 = { -2242.923f, 4315.749f, 46.7647f };
				*uParam3 = 236.8359f;
				break;
			
			case 8:
				*uParam2 = { -143.7363f, 6500.573f, 28.7366f };
				*uParam3 = 116.1312f;
				break;
			
			case 9:
				*uParam2 = { 1939.475f, 4628.652f, 39.3984f };
				*uParam3 = 350.0428f;
				break;
			
			default:
				return 0;
			}
	}
	return 1;
}

int func_39(int iParam0)//Position - 0x17AF
{
	switch (iParam0)
	{
		case 4:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

bool func_40(int iParam0)//Position - 0x17CF
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_41()//Position - 0x17ED
{
	return (func_5(Local_169.f_3) || func_39(Local_169.f_3));
}

int func_42(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0x180D
{
	if (func_104(CAM::_0xDC9DA9E8789F5246(), 0) || func_101(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if (func_100(CAM::_0xDC9DA9E8789F5246()) || func_98(CAM::_0xDC9DA9E8789F5246()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::_0xCF61D4B4702EE9EB() < iParam0)
	{
		if (bParam2)
		{
			func_49(sParam3, sParam4, 1);
		}
		if (func_48(26, 4294967295))
		{
			func_46(26, 4294967295);
		}
		return 1;
	}
	if (func_45(&(Global_1806E7.f_12)))
	{
		if (!func_1(&(Global_1806E7.f_12), 7500, 0))
		{
			return 0;
		}
		func_44(&(Global_1806E7.f_12));
	}
	if (func_43())
	{
		if (bParam2)
		{
			func_49(sParam3, sParam4, 0);
		}
		if (func_48(26, 4294967295))
		{
			func_46(26, 4294967295);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_49(sParam3, sParam4, 1);
		}
		if (func_48(26, 4294967295))
		{
			func_46(26, 4294967295);
		}
		return 1;
	}
	return 0;
}

bool func_43()//Position - 0x1904
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 0);
}

void func_44(var uParam0)//Position - 0x1917
{
	uParam0->f_1 = 0;
}

bool func_45(var uParam0)//Position - 0x1924
{
	return uParam0->f_1;
}

void func_46(int iParam0, int iParam1)//Position - 0x1930
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_16();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_47(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, iParam0))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_47(int iParam0)//Position - 0x198C
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_16();
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

bool func_48(int iParam0, int iParam1)//Position - 0x19EF
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_16();
	}
	iVar0 = func_47(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar1, iParam0);
}

void func_49(char* sParam0, char* sParam1, bool bParam2)//Position - 0x1A1B
{
	if ((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 2) && !func_8(CAM::_0xDC9DA9E8789F5246())) && !func_7(CAM::_0xDC9DA9E8789F5246()))
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
		func_50(66, sParam0, sParam1, 1, 4294967295, 2, 1);
		MISC::SET_BIT(&(Global_1806E7.f_1), 2);
	}
}

int func_50(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1A91
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
	func_97(iParam0, &Var0, 4294967295, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	return func_51(&Var0);
}

int func_51(var uParam0)//Position - 0x1B01
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_252F9E.f_BD2)
		{
			return 0;
		}
	}
	func_65(uParam0, uParam0->f_11);
	func_62(uParam0);
	if (func_61())
	{
		func_62(uParam0);
	}
	if (func_60(uParam0->f_1))
	{
		func_53();
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
				func_53();
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
				if (func_52(Global_252F9E.f_A90[iVar0 /*80*/].f_1))
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

int func_52(int iParam0)//Position - 0x1CD2
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

void func_53()//Position - 0x1D52
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
	func_54();
	if (bVar0)
	{
		Global_11731 = 0;
	}
}

void func_54()//Position - 0x1D85
{
	Global_252F9E.f_BD4 = 0;
	Global_252F9E.f_BD4.f_242 = 0;
	func_58(&(Global_252F9E.f_BD4.f_1));
	Global_252F9E.f_BD4.f_1.f_1 = 0;
	func_55(&(Global_252F9E.f_BD4.f_1));
}

void func_55(var uParam0)//Position - 0x1DC6
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
				if (CAM::IS_SCREEN_FADED_OUT() && !func_57(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_56(0);
}

void func_56(int iParam0)//Position - 0x1E6C
{
	Global_11729 = iParam0;
	Global_1172A = iParam0;
}

bool func_57(bool bParam0)//Position - 0x1E80
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

void func_58(var uParam0)//Position - 0x1EAB
{
	func_59(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

void func_59(var uParam0)//Position - 0x1ED5
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

int func_60(int iParam0)//Position - 0x1F54
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

bool func_61()//Position - 0x2056
{
	return Global_255C02.f_10;
}

void func_62(var uParam0)//Position - 0x2064
{
	if (func_64(uParam0->f_1))
	{
		uParam0->f_48 = func_63();
	}
}

int func_63()//Position - 0x207F
{
	return 21;
}

int func_64(int iParam0)//Position - 0x2089
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

void func_65(var uParam0, int iParam1)//Position - 0x211B
{
	if (func_64(uParam0->f_1))
	{
		uParam0->f_49 = 1;
	}
	if (iParam1 == func_96() || !func_12(iParam1, 0, 1))
	{
		return;
	}
	if (func_52(uParam0->f_1))
	{
		if (uParam0->f_47 == 1)
		{
			uParam0->f_49 = func_66(iParam1, 4294967294, 0, 0, 0);
		}
	}
}

int func_66(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x2172
{
	int iVar0;
	int iVar1;
	
	if (func_94(iParam0) && !bParam4)
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
	if (((func_94(CAM::_0xDC9DA9E8789F5246()) || (func_93() && func_92())) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11E1, 31)) && !bParam4)
	{
		iVar1 = func_91();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != 4294967295)
				{
					if (func_12(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_440000.f_1EBA3[iParam1] != 4294967295)
							{
								return func_89(iParam1, iParam0, 0);
							}
							else
							{
								return func_77(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_77(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_440000.f_1EBA3[iParam1] != 4294967295)
				{
					return func_89(iParam1, iParam0, 0);
				}
				else
				{
					return func_67(0, 4294967295, 0);
				}
			}
			else
			{
				return func_67(0, 4294967295, 0);
			}
		}
	}
	if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_440000.f_1EBA3[iParam1] != 4294967295)
		{
			return func_89(iParam1, iParam0, 0);
		}
		else
		{
			return func_77(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
		}
	}
	return func_77(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
}

int func_67(bool bParam0, int iParam1, bool bParam2)//Position - 0x2352
{
	return func_68(CAM::_0xDC9DA9E8789F5246(), bParam0, iParam1, bParam2);
}

int func_68(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x2368
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (func_75() && Global_150AAC.f_1)
	{
		if (bParam1)
		{
			return func_74(iParam2, iVar0);
		}
		else
		{
			return func_74(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 4294967295)
		{
			if (func_73(iVar0, iParam2, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_72(1);
				}
				else
				{
					return func_72(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 20))
			{
				return func_69(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_69(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == 4294967295)
	{
		return func_72(1);
	}
	return func_72(0);
}

int func_69(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x245C
{
	int iVar0;
	
	iVar0 = func_71(iParam0, iParam1, iParam3);
	if (func_70(Global_440000.f_1FEDE, 1))
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

int func_70(int iParam0, bool bParam1)//Position - 0x2574
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

int func_71(int iParam0, int iParam1, int iParam2)//Position - 0x25C5
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
			if (!func_73(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_72(bool bParam0)//Position - 0x260C
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_73(int iParam0, int iParam1, int iParam2)//Position - 0x2623
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

int func_74(int iParam0, int iParam1)//Position - 0x27EE
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_71(iParam1, iParam0, 4);
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

int func_75()//Position - 0x283C
{
	if (func_76() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

bool func_76()//Position - 0x2859
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_23D58, 12);
}

int func_77(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2871
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
			if (func_86(1))
			{
				iVar3 = func_82(iParam0);
				if (!iVar3 == 4294967295)
				{
					return func_80(iVar3);
				}
			}
			if ((func_79(iParam1, iParam0, iVar0, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)) || ((func_73(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 23)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)))
			{
				return func_72(1);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26))
			{
				return func_78(1);
			}
			else
			{
				return func_68(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1805F9 || Global_1805F0) || Global_1841F3[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1805F9 == 1 && Global_180603 == 0))
			{
				return func_72(1);
			}
			else
			{
				return func_68(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1805F4 && Global_1803FE.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_82(iParam0);
	if (!iVar4 == 4294967295)
	{
		return func_80(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_78(bool bParam0)//Position - 0x2A15
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_79(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2A2C
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

int func_80(int iParam0)//Position - 0x2AA4
{
	int iVar0;
	
	if (iParam0 > 4294967295)
	{
		iVar0 = func_81(iParam0);
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

var func_81(int iParam0)//Position - 0x2B67
{
	return Global_24E392.f_817.f_2C[iParam0 /*2*/].f_1;
}

int func_82(int iParam0)//Position - 0x2B7E
{
	if (!iParam0 == func_96())
	{
		if (func_84(iParam0, 1))
		{
			return Global_24E392.f_817.f_B[func_83(iParam0)];
		}
	}
	return 4294967295;
}

int func_83(int iParam0)//Position - 0x2BB0
{
	if (iParam0 != func_96())
	{
		return Global_18CD5B[iParam0 /*560*/].f_B;
	}
	return func_96();
}

bool func_84(int iParam0, bool bParam1)//Position - 0x2BD3
{
	if (!bParam1)
	{
		if (func_85(iParam0))
		{
			return 0;
		}
	}
	return Global_18CD5B[iParam0 /*560*/].f_B != func_96();
}

int func_85(int iParam0)//Position - 0x2BFE
{
	if (iParam0 != func_96())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_96())
		{
			return Global_18CD5B[iParam0 /*560*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_86(int iParam0)//Position - 0x2C33
{
	if ((func_88() || func_87()) || (func_61() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_87()//Position - 0x2C62
{
	return Global_255C02.f_F;
}

var func_88()//Position - 0x2C70
{
	return Global_255C02.f_E;
}

int func_89(int iParam0, int iParam1, bool bParam2)//Position - 0x2C7E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC93F.f_D[iParam0];
	if (func_86(1))
	{
		iVar2 = func_82(iParam1);
		if (!iVar2 == 4294967295)
		{
			return func_80(iVar2);
		}
	}
	if (iVar1 > 4294967295 && iVar1 < 17)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_68[iParam0 /*10693*/].f_159C[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > 4294967295 && iParam1 != func_96())
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
			iVar0 = func_68(iParam1, !bParam2, iParam0, 0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_15, 13))
		{
			iVar0 = func_90(iParam0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_18, 29))
		{
			iVar0 = 0;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26) && !func_73(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_78(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_90(int iParam0)//Position - 0x2E0C
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

var func_91()//Position - 0x2EE1
{
	return Global_240006.f_2;
}

bool func_92()//Position - 0x2EEF
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 4);
}

bool func_93()//Position - 0x2F00
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 14);
}

int func_94(int iParam0)//Position - 0x2F1D
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_95())
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

bool func_95()//Position - 0x2F5F
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

int func_96()//Position - 0x2F70
{
	return 4294967295;
}

void func_97(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x2F79
{
	uParam1->f_11 = func_96();
	uParam1->f_12 = func_96();
	uParam1->f_13 = func_96();
	uParam1->f_14 = func_96();
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

bool func_98(int iParam0)//Position - 0x2FF7
{
	return func_99(iParam0, 20);
}

bool func_99(int iParam0, int iParam1)//Position - 0x3007
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_B.f_4, iParam1);
}

int func_100(int iParam0)//Position - 0x3022
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return func_99(iParam0, 9);
	}
	return 0;
}

int func_101(int iParam0, int iParam1)//Position - 0x3040
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 && func_102(Global_18CD5B[iParam0 /*560*/].f_B.f_21))
	{
		return 1;
	}
	if (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295)
	{
		if (func_102(Global_18CD5B[iParam0 /*560*/].f_B.f_20))
		{
			return 1;
		}
	}
	return 0;
}

int func_102(int iParam0)//Position - 0x30A6
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
	return func_103(iParam0, 0);
	return 0;
}

int func_103(int iParam0, int iParam1)//Position - 0x3100
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

int func_104(int iParam0, int iParam1)//Position - 0x3155
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 || (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295))
	{
		return 1;
	}
	return 0;
}

void func_105(int iParam0)//Position - 0x3190
{
	Local_169 = iParam0;
}

int func_106()//Position - 0x319D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_169.f_4[iVar0] = 4294967295;
		iVar0++;
	}
	func_44(&(Local_169.f_27));
	func_111();
	if (func_41())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_169.f_37[iVar0] = func_34(iVar0);
			iVar0++;
		}
		func_107();
	}
	return 1;
}

void func_107()//Position - 0x31FD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_39(Local_169.f_3))
		{
			Local_169.f_43[iVar0 /*2*/] = func_110();
		}
		else
		{
			Local_169.f_43[iVar0 /*2*/] = func_108();
		}
		iVar0++;
	}
}

int func_108()//Position - 0x3241
{
	int iVar0;
	
	switch (Local_169.f_3)
	{
		case 12:
			return func_109();
			break;
	}
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

int func_109()//Position - 0x328F
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("STUNT");
		
		case 1:
			return joaat("BESRA");
		
		default:
	}
	return 0;
}

int func_110()//Position - 0x32C3
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("SANCHEZ");
		
		case 1:
			return joaat("PCJ");
		
		default:
	}
	return 0;
}

void func_111()//Position - 0x32F7
{
	int iVar0;
	
	iVar0 = func_115();
	Local_169.f_3 = iVar0;
	func_112(func_114(133, iVar0, 0, 0));
}

void func_112(int iParam0)//Position - 0x331A
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 2975243204;
	vVar0.y = CAM::_0xDC9DA9E8789F5246();
	vVar0.z = iParam0;
	iVar1 = func_113(1, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iVar1);
	}
}

var func_113(int iParam0, bool bParam1)//Position - 0x3354
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != CAM::_0xDC9DA9E8789F5246() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_14(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_114(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x33B9
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

int func_115()//Position - 0x3C1E
{
	int iVar0[19];
	float fVar1;
	int iVar2;
	float fVar3;
	
	iVar0[0] = Global_40001.f_2BE3;
	iVar0[1] = Global_40001.f_2A9C;
	iVar0[2] = Global_40001.f_2BE7;
	iVar0[3] = Global_40001.f_2BE5;
	iVar0[4] = Global_40001.f_2BE6;
	iVar0[5] = Global_40001.f_2BE8;
	iVar0[6] = Global_40001.f_2A9D;
	iVar0[7] = Global_40001.f_2A9E;
	iVar0[8] = Global_40001.f_2BE4;
	iVar0[9] = Global_40001.f_2AA4;
	iVar0[10] = Global_40001.f_2A9F;
	iVar0[11] = Global_40001.f_2AA1;
	iVar0[12] = Global_40001.f_2AA2;
	iVar0[13] = Global_40001.f_2AA0;
	iVar0[14] = Global_40001.f_2AA3;
	iVar0[15] = Global_40001.f_2AA6;
	iVar0[16] = Global_40001.f_2AA7;
	iVar0[17] = Global_40001.f_2AA8;
	iVar0[18] = Global_40001.f_2AA9;
	fVar1 = 0f;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (func_118(iVar2) || func_116(133, iVar2, 0, 0))
		{
			iVar0[iVar2] = 0f;
		}
		else
		{
			fVar1 = (fVar1 + iVar0[iVar2]);
		}
		iVar2++;
	}
	fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar1);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (fVar3 <= iVar0[iVar2])
		{
			return iVar2;
		}
		fVar3 = (fVar3 - iVar0[iVar2]);
		iVar2++;
	}
	return func_115();
}

int func_116(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3D9B
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
			return 0;
		
		default:
	}
	iVar1 = func_117(iParam0);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iVar0 < Global_40001.f_1F3F)
		{
			if (Global_261C61.f_82[iVar0 /*2*/] == iVar1 && Global_261C61.f_82[iVar0 /*2*/].f_1 == func_114(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_117(int iParam0)//Position - 0x3E1A
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		case 236:
			return 19;
		
		default:
	}
	return 4294967295;
}

int func_118(int iParam0)//Position - 0x3EAE
{
	switch (iParam0)
	{
		case 0:
			return Global_40001.f_2799;
		
		case 1:
			return Global_40001.f_2AAA;
		
		case 6:
			return Global_40001.f_2AAB;
		
		case 7:
			return Global_40001.f_2AAC;
		
		case 8:
			return Global_40001.f_279A;
		
		case 3:
			return Global_40001.f_279B;
		
		case 4:
			return Global_40001.f_279C;
		
		case 2:
			return Global_40001.f_279D;
		
		case 5:
			return Global_40001.f_279E;
		
		case 9:
			return Global_40001.f_2AB2;
		
		case 10:
			return Global_40001.f_2AAD;
		
		case 11:
			return Global_40001.f_2AAF;
		
		case 12:
			return Global_40001.f_2AB0;
		
		case 15:
			return Global_40001.f_2AB4;
		
		case 16:
			return Global_40001.f_2AB5;
		
		case 17:
			return Global_40001.f_2AB6;
		
		case 18:
			return Global_40001.f_2AB7;
		
		case 13:
			return Global_40001.f_2AAE;
		
		case 14:
			return Global_40001.f_2AB1;
		
		default:
	}
	return 1;
}

void func_119()//Position - 0x3FEE
{
	int iVar0;
	
	if (func_41())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Local_169.f_37[iVar0] == NETSHOP::_NETWORK_SHOP_BASKET_START())
			{
				if (func_120(iVar0))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_2, iVar0))
					{
						MISC::SET_BIT(&(Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_2), iVar0);
					}
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_2, iVar0))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_2), iVar0);
				}
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_2, iVar0))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_2), iVar0);
			}
			iVar0++;
		}
	}
}

int func_120(int iParam0)//Position - 0x40A0
{
	vector3 vVar0;
	var uVar1;
	
	if (func_37(iParam0, &vVar0, &uVar1))
	{
		if (func_121(vVar0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, 4294967295, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_121(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x40E5
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
		if (func_126(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_122(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_24B2CE.f_2++;
	return 1;
}

int func_122(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x41F6
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_124(CAM::_0xDC9DA9E8789F5246()), vParam0, 1) <= (fVar2 + fParam1))
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
		if (func_12(iVar1, 1, 1))
		{
			if (!func_14(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != CAM::_0xDC9DA9E8789F5246()))
				{
					if ((func_123(iVar1) || !bParam8) && !Global_24FBF9[iVar1 /*413*/].f_103)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_124(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_124(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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

int func_123(int iParam0)//Position - 0x43AE
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_24FBF9[iParam0 /*413*/].f_F5)
	{
		return 1;
	}
	return 0;
}

Vector3 func_124(int iParam0)//Position - 0x43D9
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_61() && Global_1841F3[iVar0 /*790*/].f_2F9) && !func_125(Global_1841F3[iVar0 /*790*/].f_2FA))
	{
		return Global_1841F3[iVar0 /*790*/].f_2FA;
	}
	return func_36(iParam0);
}

int func_125(vector3 vParam0)//Position - 0x442C
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_126(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x4456
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && CAM::_0xDC9DA9E8789F5246() != iVar1) || iParam6 == 0)
		{
			if (func_12(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_123(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295)
						{
							if (((PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && uParam7) && bParam4) && func_127(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_36(iVar1), vParam0, 1) < fParam1)
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

int func_127(int iParam0)//Position - 0x4552
{
	if (func_130(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	Global_2633E1 = { func_129(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2633E1))
	{
		return 1;
	}
	if (func_128(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0, int iParam1)//Position - 0x4599
{
	int iVar0;
	
	iVar0 = func_83(iParam0);
	if (!iVar0 == func_96())
	{
		if (iVar0 == func_83(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_129(int iParam0)//Position - 0x45C4
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_130(int iParam0, int iParam1)//Position - 0x45DB
{
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		Global_2633E1 = { func_129(iParam0) };
		Global_2633EE = { func_129(iParam1) };
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

void func_131()//Position - 0x4648
{
	float fVar0;
	float fVar1;
	
	func_664();
	func_663();
	if (func_661())
	{
		func_550();
	}
	if (!func_7(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_527(0, 1, 1))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 6))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 6);
			}
			switch (Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_3)
			{
				case 0:
					if (Local_169.f_25 < 2)
					{
						if (Local_169.f_25 > 0)
						{
							if (Local_169.f_3 != 4294967295)
							{
								func_526(1);
								func_525(1);
							}
						}
					}
					else
					{
						func_525(2);
					}
					break;
				
				case 1:
					func_519(9);
					if (Local_1536.f_8 == 0)
					{
						Local_1536.f_8 = NETWORK::_GET_POSIX_TIME();
					}
					if (Local_169.f_25 >= 2)
					{
						func_525(2);
						Local_1536.f_9 = NETWORK::_GET_POSIX_TIME();
					}
					if (func_41())
					{
						func_519(0);
					}
					func_517((func_29() - func_518(&(Local_169.f_2B), 0, 0)));
					func_514(func_516((func_29() - func_518(&(Local_169.f_2B), 0, 0)), 0), func_515(Local_169.f_3));
					func_455(0, func_513());
					func_433();
					func_410();
					if (func_409())
					{
						func_408();
					}
					break;
				
				case 2:
					if (Local_169.f_25 > 2)
					{
						func_526(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_407())
						{
							fVar0 = 0f;
							fVar1 = 0.25f;
						}
						func_390(133, fVar0, fVar1, 0, 0, 0, 0);
						func_389(Local_169.f_3, 1);
						func_388(23, 1);
						if (Local_1536.f_8 == 0)
						{
							Local_1536.f_8 = NETWORK::_GET_POSIX_TIME();
						}
						if (Local_1536.f_9 == 0)
						{
							Local_1536.f_9 = NETWORK::_GET_POSIX_TIME();
						}
						func_384();
						unk_0xA9F827A1B59E18D4(1);
						if (func_407())
						{
							GRAPHICS::_0x54E22EA2C1956A8D(0f);
							HUD::_0x14621BB1DF14E2B2(0);
						}
						if (Local_169.f_3 == 14)
						{
							func_383(&vLocal_160);
						}
						func_382();
						if (!func_7(CAM::_0xDC9DA9E8789F5246()))
						{
							func_50(63, "AMCH_STARTED", func_381(Local_169.f_3), func_63(), 4294967295, func_63(), 1);
							if (func_378("AMCH_WARN", func_380(Local_169.f_3), func_379(Local_169.f_3)))
							{
								GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
							}
						}
						if (func_41())
						{
							func_361(678f, 794f, 206f, 8f, 0);
							func_361(1911.3f, 4714.6f, 41.1f, 8f, 0);
							func_361(688.5021f, 735.4581f, 181.296f, 8f, 0);
						}
						func_525(3);
					}
					break;
				
				case 3:
					if (Local_169.f_25 > 3)
					{
						iLocal_142 = 0;
						func_525(4);
					}
					else
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_169.f_2, 1))
						{
							func_324();
							func_321();
							func_320();
						}
						if (func_319(0) && !func_20(0))
						{
							func_318();
						}
					}
					if (func_407())
					{
						unk_0x2C60B9CCB9A13F96(CAM::_0xDC9DA9E8789F5246());
					}
					func_317();
					func_294();
					func_550();
					func_455(0, 1);
					func_433();
					func_410();
					func_519(2);
					func_519(5);
					func_519(7);
					break;
				
				case 4:
					if (func_283(&uLocal_152, !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_169.f_2, 0)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_169.f_2, 0))
					{
						if (func_5(Local_169.f_3))
						{
							if (Local_169.f_25 == 5)
							{
								func_525(5);
							}
						}
						else
						{
							func_525(6);
						}
					}
					func_270();
					func_163();
					func_294();
					func_550();
					func_455(1, 1);
					func_382();
					break;
				
				case 5:
					if (Local_169.f_25 > 5)
					{
						func_525(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_158();
		}
	}
	else
	{
		func_158();
	}
	func_138();
	func_133();
	func_132();
}

void func_132()//Position - 0x49D6
{
	struct<2> Var0;
	int iVar1;
	
	if (func_41())
	{
		Var0 = { Local_169.f_43[iLocal_159 /*2*/] };
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
		iLocal_159++;
		if (iLocal_159 >= 10)
		{
			iLocal_159 = 0;
			iLocal_168 = iLocal_167;
			iLocal_167 = 0;
		}
	}
}

void func_133()//Position - 0x4A42
{
	if (Local_169.f_25 == 5)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_169.f_43[iLocal_159 /*2*/].f_1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_169.f_43[iLocal_159 /*2*/].f_1), 0))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_165, iLocal_159))
				{
					MISC::SET_BIT(&iLocal_165, iLocal_159);
					iLocal_166[iLocal_159] = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_166[iLocal_159], "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_169.f_43[iLocal_159 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_166[iLocal_159], "Time", 30f);
				}
				if ((30000 - func_518(&(Local_169.f_2D), 0, 0)) >= 0)
				{
					if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_169.f_43[iLocal_159 /*2*/].f_1), 0))
					{
						func_519(1);
						iLocal_167 = 1;
					}
				}
				else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_169.f_43[iLocal_159 /*2*/].f_1))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(NETWORK::NET_TO_VEH(Local_169.f_43[iLocal_159 /*2*/].f_1));
					NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_169.f_43[iLocal_159 /*2*/].f_1), 1, 0, 4294967295);
				}
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_165, iLocal_159) && !AUDIO::HAS_SOUND_FINISHED(iLocal_166[iLocal_159]))
			{
				AUDIO::STOP_SOUND(iLocal_166[iLocal_159]);
			}
		}
		if (iLocal_168)
		{
			if (!func_94(CAM::_0xDC9DA9E8789F5246()))
			{
				func_135(func_516((30000 - func_518(&(Local_169.f_2D), 0, 0)), 0), "HTV_DESTR", 0, 1, 4294967295, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
				func_134();
			}
		}
	}
}

void func_134()//Position - 0x4BC3
{
	Global_14E696.f_440 = 1;
}

void func_135(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x4BD3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_137(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_136(7, iVar0);
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

void func_136(int iParam0, int iParam1)//Position - 0x4D21
{
	MISC::SET_BIT(&(Global_14E696.f_17F2[iParam0]), iParam1);
}

bool func_137(int iParam0, int iParam1)//Position - 0x4D3A
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E696.f_17F2[iParam0], iParam1);
}

void func_138()//Position - 0x4D53
{
	if (((func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1) && !func_7(CAM::_0xDC9DA9E8789F5246())) && !func_154(CAM::_0xDC9DA9E8789F5246())) && func_527(0, 1, 1))
	{
		if (Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_3 == 1)
		{
			func_151(func_153(Local_169.f_3), func_380(Local_169.f_3), 0, 0);
		}
		else if (Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_3 == 3)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 10))
			{
				func_139(func_379(Local_169.f_3), 0);
			}
			else
			{
				func_139("AMCH_OBJLAND", 0);
			}
		}
		else
		{
			func_382();
		}
	}
	else
	{
		func_382();
	}
}

void func_139(char* sParam0, bool bParam1)//Position - 0x4DFE
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return;
	}
	if (func_149(sParam0))
	{
		return;
	}
	func_143();
	Global_140740 = 0;
	StringCopy(&(Global_140740.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_140740.f_9 = MISC::GET_HASH_KEY(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	func_142();
	func_141(bParam1);
	func_140();
}

void func_140()//Position - 0x4E69
{
	MISC::SET_BIT(&(Global_140740.f_3B), 1);
}

void func_141(bool bParam0)//Position - 0x4E7C
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_140740.f_3B), 0);
		return;
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_140740.f_3B), 0);
}

void func_142()//Position - 0x4EA2
{
	Global_140740.f_A = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), 86400000);
	Global_140740.f_B = HUD::_0x13C4B962653A5280();
}

void func_143()//Position - 0x4EC7
{
	func_145();
	func_144(0);
}

void func_144(bool bParam0)//Position - 0x4ED8
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

void func_145()//Position - 0x4F6A
{
	if (!func_148())
	{
	}
	if (func_147())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_140740.f_C));
		func_146();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_146()//Position - 0x4F93
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

int func_147()//Position - 0x5205
{
	if (Global_140740 == 20)
	{
		return 0;
	}
	return 1;
}

int func_148()//Position - 0x521B
{
	if (!func_147())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_140740.f_C));
	func_146();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_149(char* sParam0)//Position - 0x5241
{
	if (!func_147())
	{
		return 0;
	}
	if (Global_140740 == 11)
	{
		return func_150(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_C));
}

bool func_150(char* sParam0)//Position - 0x5285
{
	if (!func_147())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_10));
}

int func_151(char* sParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x52B7
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
	if (func_152(sParam0, sParam1) && Global_140740.f_38 == Global_140740.f_3A)
	{
		return 0;
	}
	func_143();
	Global_140740 = 3;
	StringCopy(&(Global_140740.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_140740.f_9 = MISC::GET_HASH_KEY(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	StringCopy(&(Global_140740.f_10), sParam1, 64);
	Global_140740.f_3A = iParam3;
	Global_140740.f_38 = iParam3;
	func_142();
	func_141(bParam2);
	func_140();
	return 1;
}

bool func_152(char* sParam0, char* sParam1)//Position - 0x5361
{
	if (!func_147())
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
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_C)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_140740.f_10));
}

char* func_153(int iParam0)//Position - 0x53B9
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) || PED::IS_PED_IN_ANY_HELI(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_BOAT(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_PLANE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_SUB(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_TRAIN(AUDIO::_0x0626A247D2405330()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			
			case 9:
				if ((((((!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) || PED::IS_PED_IN_ANY_HELI(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_BOAT(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_PLANE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_SUB(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_TRAIN(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_ON_ANY_BIKE(AUDIO::_0x0626A247D2405330()))
				{
					return "AMCH_PREPCAR";
				}
				break;
			
			case 3:
			case 4:
				if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					return "AMCH_PREPBIKE";
				}
				else
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330());
					iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1))
					{
						return "AMCH_PREPBIKE";
					}
				}
				break;
			
			case 12:
				if (!PED::IS_PED_IN_ANY_PLANE(AUDIO::_0x0626A247D2405330()))
				{
					return "AMCH_PREPPLANE";
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!PED::IS_PED_IN_FLYING_VEHICLE(AUDIO::_0x0626A247D2405330()))
				{
					return "AMCH_PREPAIR";
				}
				break;
			
			case 18:
				if ((!WEAPON::HAS_PED_GOT_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_sniperrifle"), 0) && !WEAPON::HAS_PED_GOT_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_heavysniper"), 0)) && !WEAPON::HAS_PED_GOT_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_marksmanrifle"), 0))
				{
					return "AMCH_PREPSNIPER";
				}
				break;
			
			case 16:
				if (((((!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) || PED::IS_PED_IN_ANY_HELI(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_BOAT(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_PLANE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_SUB(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_TRAIN(AUDIO::_0x0626A247D2405330()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			}
	}
	return "AMCH_PREPARE";
}

bool func_154(int iParam0)//Position - 0x5607
{
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		if ((func_157() && !func_156()) || func_155(CAM::_0xDC9DA9E8789F5246(), 21))
		{
			return 1;
		}
		if (func_45(&(Global_1806E7.f_D)))
		{
			if (!func_1(&(Global_1806E7.f_D), Global_40001.f_E, 0))
			{
				return 1;
			}
			func_44(&(Global_1806E7.f_D));
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 10))
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 9);
}

bool func_155(int iParam0, int iParam1)//Position - 0x5699
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_D0, iParam1);
}

bool func_156()//Position - 0x56B2
{
	return Global_1406A0.f_1;
}

bool func_157()//Position - 0x56C0
{
	return Global_1406A0;
}

void func_158()//Position - 0x56CC
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 6))
	{
		HUD::CLEAR_ALL_HELP_MESSAGES();
		func_455(1, 1);
		AUDIO::STOP_SOUND(iLocal_148);
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 4);
		func_162();
		func_160();
		HUD::_SET_MINIMAP_ATTITUDE_INDICATOR_LEVEL(0f, 0, 21);
		MISC::SET_BIT(&iLocal_140, 6);
		func_159();
	}
}

void func_159()//Position - 0x5715
{
	Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_7 = 0;
}

void func_160()//Position - 0x572B
{
	if (Global_24D471.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_161();
	}
}

void func_161()//Position - 0x5744
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

void func_162()//Position - 0x57A1
{
	struct<6> Var0;
	
	if (Global_24B2CE.f_1E4.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_24B2CE.f_1E4 = { Var0 };
	}
}

void func_163()//Position - 0x57C6
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_1, 0))
	{
		if (func_7(CAM::_0xDC9DA9E8789F5246()))
		{
			MISC::SET_BIT(&(Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_1), 0);
			return;
		}
		if (func_154(CAM::_0xDC9DA9E8789F5246()))
		{
			MISC::SET_BIT(&(Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_1), 0);
			return;
		}
		func_231(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_1536.f_6 = (Local_1536.f_6 + iVar0);
			if (!Global_40001.f_2C7B)
			{
				func_230(10, Local_1536.f_6);
			}
			Global_258AE3 = iVar0;
			if (func_229())
			{
				func_217(2826443171, iVar0, &uVar3, 0, 1, 0);
			}
			else
			{
				NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_1536.f_7 = (Local_1536.f_7 + iVar1);
			func_216();
			func_164(0, AUDIO::_0x0626A247D2405330(), "", 2658791846, 3041509490, iVar1, 1, 4294967295, 0, 0, 0);
		}
		MISC::SET_BIT(&(Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_1), 0);
	}
}

int func_164(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x58C0
{
	return func_165(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_165(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x58E2
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_175(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == 3702944691 || iParam4 == 2379775567)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_171(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_166(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_166(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x595B
{
	vector3 vVar0;
	
	vVar0 = { func_169(iParam0, 1) };
	if (iParam0 == func_168(AUDIO::_0x0626A247D2405330()))
	{
		func_167(1);
	}
	func_171(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_167(int iParam0)//Position - 0x598F
{
	Global_252F9E.f_75E = iParam0;
}

int func_168(int iParam0)//Position - 0x59A0
{
	return iParam0;
}

Vector3 func_169(int iParam0, bool bParam1)//Position - 0x59AA
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
	if (iParam0 == func_170(AUDIO::_0x0626A247D2405330()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
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

int func_170(int iParam0)//Position - 0x5A6E
{
	return iParam0;
}

void func_171(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x5A78
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
			Global_252F9E.f_505[iVar1 /*30*/].f_4 = func_174(Global_252F9E.f_505[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_252F9E.f_505[iVar1 /*30*/].f_7 = HUD::_0x13C4B962653A5280();
			Global_252F9E.f_505[iVar1 /*30*/].f_3 = iParam1;
			Global_252F9E.f_505[iVar1 /*30*/].f_8 = iParam2;
			Global_252F9E.f_505[iVar1 /*30*/].f_9 = func_173();
			Global_252F9E.f_505[iVar1 /*30*/].f_A = func_172();
			StringCopy(&(Global_252F9E.f_505[iVar1 /*30*/].f_16), sParam3, 16);
			Global_252F9E.f_505[iVar1 /*30*/].f_1A = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), iParam4);
		}
	}
}

int func_172()//Position - 0x5B8F
{
	if (Global_252F9E.f_75E)
	{
		Global_252F9E.f_75E = 0;
		return 1;
	}
	Global_252F9E.f_75E = 0;
	return 0;
}

var func_173()//Position - 0x5BB9
{
	var uVar0;
	
	uVar0 = Global_252F9E.f_760;
	Global_252F9E.f_760 = 1;
	return uVar0;
}

float func_174(vector3 vParam0, var uParam1, var uParam2)//Position - 0x5BD4
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

var func_175(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x5C6D
{
	var uVar0;
	
	uVar0 = func_176(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_176(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x5C90
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_215(CAM::_0xDC9DA9E8789F5246()) || func_214(CAM::_0xDC9DA9E8789F5246()))
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
	else if (func_212() || func_209(CAM::_0xDC9DA9E8789F5246()))
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
	if (func_208(sParam2))
	{
	}
	if (func_207())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_205(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_204(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_202(0, &iVar1);
					break;
				
				case 3:
					func_202(1, &iVar1);
					break;
				
				case 1:
					func_200(&iVar1);
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
			func_197(1164, iVar1, 4294967295);
			if (iParam1 == 0)
			{
				func_186((func_196(CAM::_0xDC9DA9E8789F5246()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_2 != 4294967295)
				{
					func_197(1165, iVar1, 4294967295);
				}
				if (iParam1 == 0)
				{
					func_181(iVar1);
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
				func_177((func_179(CAM::_0xDC9DA9E8789F5246()) + iVar1));
			}
			else
			{
				func_177((func_179(CAM::_0xDC9DA9E8789F5246()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_177(int iParam0)//Position - 0x5E8E
{
	if (func_207())
	{
		Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_5 = iParam0;
		func_178(joaat("mpply_globalxp"), iParam0);
	}
}

void func_178(int iParam0, int iParam1)//Position - 0x5EB9
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_179(int iParam0)//Position - 0x5ED5
{
	if (iParam0 > 4294967295)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return func_180(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_5;
			}
		}
		else
		{
			return func_180(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_180(int iParam0)//Position - 0x5F26
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

void func_181(int iParam0)//Position - 0x5F44
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_129(CAM::_0xDC9DA9E8789F5246()) };
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_184(func_185(&Var0));
			if (iVar1 == 0)
			{
				func_183(&Global_150A08, iParam0);
				func_182(joaat("mpply_crew_local_xp_0"), Global_150A08);
			}
			else if (iVar1 == 1)
			{
				func_183(&Global_150A09, iParam0);
				func_182(joaat("mpply_crew_local_xp_1"), Global_150A09);
			}
			else if (iVar1 == 2)
			{
				func_183(&Global_150A0A, iParam0);
				func_182(joaat("mpply_crew_local_xp_2"), Global_150A0A);
			}
			else if (iVar1 == 3)
			{
				func_183(&Global_150A0B, iParam0);
				func_182(joaat("mpply_crew_local_xp_3"), Global_150A0B);
			}
			else if (iVar1 == 4)
			{
				func_183(&Global_150A0C, iParam0);
				func_182(joaat("mpply_crew_local_xp_4"), Global_150A0C);
			}
		}
	}
}

void func_182(int iParam0, int iParam1)//Position - 0x6018
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

void func_183(var uParam0, int iParam1)//Position - 0x613D
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_184(int iParam0)//Position - 0x614E
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

int func_185(var uParam0)//Position - 0x61AB
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

void func_186(int iParam0, int iParam1, int iParam2)//Position - 0x61CE
{
	if (func_207())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2512 == 0 && iParam1 != 3218036588)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_150A81[func_195(4294967295)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, 3771058946, iParam1);
					return;
				}
				else if (iParam0 == Global_150A81[func_195(4294967295)])
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
		if (func_194(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_1 = iParam0;
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_6 = func_192(iParam0, 1);
		}
		func_191(639, iParam0, 4294967295, 1);
		func_190(640, func_192(iParam0, 1), 4294967295, 1, 0);
		Global_150A81[func_195(4294967295)] = iParam0;
		func_187(7, 0);
	}
}

void func_187(int iParam0, int iParam1)//Position - 0x62EF
{
	int iVar0;
	
	if (func_189(iParam0, iParam1))
	{
		iVar0 = func_188();
		Global_2581E6[iVar0] = iParam0;
	}
}

int func_188()//Position - 0x6312
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

int func_189(int iParam0, var uParam1)//Position - 0x6347
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

void func_190(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x63CD
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_195(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_191(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x63FD
{
	int iVar0;
	
	iVar0 = Global_26B05F[iParam0 /*3*/][func_195(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_150A45[func_195(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_150A4B[func_195(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_150A51[func_195(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_150A57[func_195(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_150A2D[func_195(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_150A33[func_195(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_150A39[func_195(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_150A3F[func_195(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_150A15[func_195(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_150A1B[func_195(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_150A21[func_195(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_150A27[func_195(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_150A5D[func_195(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_150A63[func_195(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_150A69[func_195(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_150A6F[func_195(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_150A75[func_195(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_150A7B[func_195(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_150A81[func_195(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_150A87[func_195(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_272FA8[0 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_272FA8[1 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_272FA8[2 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_272FA8[3 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_273025[func_195(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_150A8D[func_195(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_150A93[func_195(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_150A99[func_195(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_150A9F[func_195(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_272FE5[0 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_272FE5[1 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_272FE5[2 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_272FE5[3 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_272FE5[4 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_273028[0 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_273028[1 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_273028[2 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_273028[3 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_273028[4 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_273038[0 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_273038[1 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_273038[2 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_273038[3 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_273038[4 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_272FE5[5 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_272FA8[4 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_273048[func_195(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_273051[func_195(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_27304B[func_195(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_273054[func_195(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_27304E[func_195(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_273057[func_195(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_27305A[func_195(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_272FE5[6 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_272FA8[5 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_272FE5[7 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_272FA8[6 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_272FE5[8 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_272FA8[7 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_272FE5[9 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_272FA8[8 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_272FE5[10 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_272FA8[9 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_272FE5[11 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_272FA8[10 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_272FE5[12 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_272FA8[11 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_272FE5[13 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_272FA8[12 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_272FE5[14 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_272FA8[13 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_272FE5[15 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_272FA8[14 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_272FE5[16 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_272FA8[15 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_272FE5[17 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_272FA8[16 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_272FA8[17 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_272FA8[18 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_272FA8[19 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_192(int iParam0, bool bParam1)//Position - 0x6C08
{
	if (bParam1)
	{
	}
	return func_193(iParam0, 0);
}

int func_193(int iParam0, int iParam1)//Position - 0x6C1C
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

int func_194(int iParam0)//Position - 0x6CDB
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

int func_195(int iParam0)//Position - 0x6D00
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_16();
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

int func_196(int iParam0)//Position - 0x6D34
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > 4294967295)
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return Global_150A81[func_195(4294967295)];
			}
			else if (func_194(iParam0))
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_150A81[func_195(4294967295)];
	}
	return 0;
}

void func_197(int iParam0, int iParam1, int iParam2)//Position - 0x6D91
{
	int iVar0;
	
	iVar0 = func_199(iParam0, func_195(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_198(iParam0))
	{
		func_190(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_191(iParam0, iVar0, iParam2, 1);
	}
}

int func_198(int iParam0)//Position - 0x6DD3
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

int func_199(int iParam0, int iParam1, int iParam2)//Position - 0x6FDD
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_195(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

void func_200(int iParam0)//Position - 0x700F
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_73(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != CAM::_0xDC9DA9E8789F5246())
					{
						if (func_130(CAM::_0xDC9DA9E8789F5246(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_201(*iParam0, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_201(*iParam0, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_201(int iParam0, int iParam1)//Position - 0x70FA
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_202(bool bParam0, int iParam1)//Position - 0x711B
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
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != CAM::_0xDC9DA9E8789F5246())
					{
						iVar1++;
						if (func_130(CAM::_0xDC9DA9E8789F5246(), iVar4))
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
			if (func_12(iVar4, 1, 1))
			{
				if (iVar4 != CAM::_0xDC9DA9E8789F5246())
				{
					if (func_203(CAM::_0xDC9DA9E8789F5246(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_130(CAM::_0xDC9DA9E8789F5246(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_201(*iParam1, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_201(*iParam1, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_203(int iParam0, int iParam1)//Position - 0x7233
{
	return SYSTEM::VDIST(func_36(iParam0), func_36(iParam1));
	return 0f;
}

int func_204(int iParam0)//Position - 0x724F
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_201(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_205(int iParam0)//Position - 0x7286
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_196(CAM::_0xDC9DA9E8789F5246()))
		{
			iParam0 = -func_196(CAM::_0xDC9DA9E8789F5246());
		}
	}
	if (func_206(8000, 0, 0) > 0)
	{
		if (func_206(8000, 0, 0) < (iParam0 + func_196(CAM::_0xDC9DA9E8789F5246())))
		{
			iParam0 = (func_206(8000, 0, 0) - func_196(CAM::_0xDC9DA9E8789F5246()));
		}
	}
	return iParam0;
}

int func_206(int iParam0, bool bParam1, int iParam2)//Position - 0x72EA
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

int func_207()//Position - 0x7312
{
	return 1;
}

int func_208(char* sParam0)//Position - 0x731B
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

int func_209(int iParam0)//Position - 0x7354
{
	return func_210(func_211(iParam0));
}

int func_210(int iParam0)//Position - 0x7366
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_211(int iParam0)//Position - 0x7380
{
	if (func_104(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_21;
	}
	return 4294967295;
}

bool func_212()//Position - 0x73A3
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_61();
	}
	return func_213(Global_440000.f_1FEDE);
}

int func_213(int iParam0)//Position - 0x73C7
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

bool func_214(int iParam0)//Position - 0x7401
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 2;
}

bool func_215(int iParam0)//Position - 0x7416
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 7;
}

void func_216()//Position - 0x742B
{
	Global_258851 = 1;
}

void func_217(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x7438
{
	int iVar0;
	
	if (!func_229())
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
				func_218(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_218(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case 2952902635:
		case 3696988851:
			if (iParam1 > 0)
			{
				func_218(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case 3194003497:
			func_218(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_218(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x79A5
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_229())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_16()) || unk_0x64BE694244417BDA())
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
			*uParam0 = func_225(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_224(1, iParam4);
			Global_410E35 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_219(4294967295, iParam4, iParam6, iParam5, 4294967295);
		}
	}
	return 0;
}

void func_219(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x7B50
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_7A.f_47), 0);
			break;
	}
	if (iParam0 != 4294967295)
	{
		func_220(iParam0);
	}
}

void func_220(int iParam0)//Position - 0x7B88
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_229())
	{
		bVar0 = true;
	}
	if (iParam0 != 4294967295)
	{
		if (func_223(iParam0))
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
		func_221(&(Global_410C0F[iParam0 /*80*/]));
	}
}

void func_221(var uParam0)//Position - 0x7BDC
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
	func_222(&(uParam0->f_D));
	func_222(&(uParam0->f_D.f_D));
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

void func_222(var uParam0)//Position - 0x7CE3
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

int func_223(int iParam0)//Position - 0x7D2B
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_410C0F[iParam0 /*80*/].f_3D.f_5 == 1;
	}
	return 0;
}

void func_224(int iParam0, int iParam1)//Position - 0x7D55
{
	Global_258B69 = iParam1;
	Global_258B68 = iParam0;
}

int func_225(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x7D69
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_410C0F[iVar0 /*80*/].f_3D.f_2 == 0)
		{
			if (!func_229())
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
				func_226(Global_410C0F[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_226(struct<62> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x7EA5
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
	iVar1 = func_228(vVar0.y);
	if ((Global_40001.f_5B83 && !Global_40001.f_5B84) && !Global_40001.f_5B85)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_227();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_227()//Position - 0x7F37
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_228(int iParam0)//Position - 0x7F47
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_229()//Position - 0x7F59
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

void func_230(int iParam0, int iParam1)//Position - 0x7F70
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

void func_231(var uParam0, var uParam1)//Position - 0x7FE2
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (func_17(NETSHOP::_NETWORK_SHOP_BASKET_START(), 1))
	{
		iVar1 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT((Local_169.f_1 - iLocal_138)) / 60f) / 1000f));
		if (iVar1 > Global_40001.f_2C3A)
		{
			iVar1 = Global_40001.f_2C3A;
		}
		else if (iVar1 < 1)
		{
			iVar1 = 1;
		}
		iVar0 = (func_269() * iVar1);
		*uParam1 = (func_268() * iVar1);
		fVar2 = func_267();
		if (fVar2 > 0f && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_169.f_2, 0))
		{
			iVar3 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_28(1)) / 60f) / 1000f));
			if (iVar3 > func_266())
			{
				iVar3 = func_266();
			}
			iVar4 = Local_169.f_33;
			if (iVar4 > func_265())
			{
				iVar4 = func_265();
			}
			*uParam0 = (*uParam0 + SYSTEM::ROUND((IntToFloat(func_258(func_264(), func_263(), iVar3, fVar2, func_262(), func_261(), func_260(), iVar4)) * Global_40001.f_2C47)));
			*uParam1 = (*uParam1 + SYSTEM::ROUND((IntToFloat(func_258(func_257(), func_256(), iVar3, fVar2, func_262(), func_261(), func_260(), iVar4)) * Global_40001.f_2C48)));
		}
		else
		{
			func_254(1);
		}
	}
	else
	{
		func_254(0);
	}
	func_232(uParam0, 1);
	*uParam0 = (*uParam0 + iVar0);
}

void func_232(var uParam0, int iParam1)//Position - 0x812E
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_253())
		{
			if (func_252(0))
			{
				if (!func_248(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_247()))
					{
						if (func_246() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_246());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_244(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_237("GB_BCUT_TICK1", func_247(), iVar0, 0, 0, 1, 1);
						}
						func_236(20);
						func_233(func_247(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_233(int iParam0, int iParam1, int iParam2)//Position - 0x81CF
{
	struct<8> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Var0 = 2084031113;
		Var0.f_1 = CAM::_0xDC9DA9E8789F5246();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_235(iParam0);
		func_234(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_228(iParam0));
	}
}

void func_234(var uParam0, var uParam1)//Position - 0x8225
{
	*uParam0 = Global_19135D.f_9;
	*uParam1 = Global_19135D.f_A;
}

var func_235(int iParam0)//Position - 0x823F
{
	return Global_18CD5B[iParam0 /*560*/].f_1EB;
}

void func_236(int iParam0)//Position - 0x8253
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_26862F.f_1313.f_7[iVar0]), iVar1);
}

int func_237(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x827C
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
		HUD::_SET_NOTIFICATION_COLOR_NEXT(func_66(iParam1, 4294967294, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_242(&Var1));
		if (!iParam3 == 0)
		{
			HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		func_238(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_238(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x8314
{
	int iVar0;
	
	if ((!func_241() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_14(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		return;
	}
	iVar0 = func_239(iParam2);
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

int func_239(int iParam0)//Position - 0x841C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_196195 - 1))
	{
		if (iParam0 > Global_196195.f_5[iVar0 /*53*/].f_1)
		{
			func_240(iVar0);
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

void func_240(int iParam0)//Position - 0x847E
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_196195.f_5[iVar0 /*53*/] = { Global_196195.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + 4294967295);
	}
}

bool func_241()//Position - 0x84B7
{
	return DLC::IS_DLC_PRESENT(2532323046);
}

var func_242(char* sParam0)//Position - 0x84C8
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_243(&cVar0);
}

var func_243(char[4] cParam0)//Position - 0x84EC
{
	return cParam0;
}

void func_244(int iParam0, bool bParam1)//Position - 0x84F6
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_245(1);
	}
	else
	{
		iVar1 = func_245(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_245(bool bParam0)//Position - 0x8528
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_2FF5;
}

int func_246()//Position - 0x854E
{
	return Global_40001.f_2FF4;
}

int func_247()//Position - 0x855D
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B;
}

bool func_248(bool bParam0)//Position - 0x8572
{
	return func_249(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

int func_249(int iParam0, bool bParam1)//Position - 0x8584
{
	return func_250(iParam0, bParam1, 1);
}

int func_250(int iParam0, bool bParam1, int iParam2)//Position - 0x8595
{
	int iVar0;
	
	if (iParam0 == func_96())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_251(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18CD5B[iParam0 /*560*/].f_B;
	if (iVar0 != func_96() && Global_18CD5B[iVar0 /*560*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_251(int iParam0, int iParam1)//Position - 0x85F1
{
	if (iParam0 != func_96())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_96())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B == iParam0 && Global_18CD5B[iParam0 /*560*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_252(bool bParam0)//Position - 0x8640
{
	return func_84(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

bool func_253()//Position - 0x8652
{
	return func_85(CAM::_0xDC9DA9E8789F5246());
}

void func_254(bool bParam0)//Position - 0x8662
{
	if (bParam0)
	{
		if (func_255(1))
		{
			MISC::SET_BIT(&Global_180700, 1);
		}
	}
	else if (func_255(2))
	{
		MISC::SET_BIT(&Global_180700, 2);
	}
}

int func_255(int iParam0)//Position - 0x8694
{
	int iVar0;
	
	iVar0 = func_199(2534, 4294967295, 0);
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

int func_256()//Position - 0x8765
{
	return Global_40001.f_2A46;
}

int func_257()//Position - 0x8774
{
	return Global_40001.f_2A44;
}

int func_258(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)//Position - 0x8783
{
	return func_259(SYSTEM::ROUND(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_259(int iParam0, int iParam1, int iParam2)//Position - 0x87B4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam0 / iParam1);
	iVar0 = (iVar0 * iParam1);
	iVar1 = (iVar0 + iParam1);
	iVar2 = (iParam0 - iVar0);
	iVar3 = (iVar1 - iParam0);
	if (iVar2 >= iVar3)
	{
		if (iParam2 == 1)
		{
		}
		return iVar1;
	}
	if (iParam2 == 1)
	{
	}
	return iVar0;
}

float func_260()//Position - 0x87FC
{
	return Global_40001.f_2A49;
}

float func_261()//Position - 0x880B
{
	return Global_40001.f_2A48;
}

float func_262()//Position - 0x881A
{
	return Global_40001.f_2A47;
}

int func_263()//Position - 0x8829
{
	return Global_40001.f_2A45;
}

int func_264()//Position - 0x8838
{
	return Global_40001.f_2A43;
}

int func_265()//Position - 0x8847
{
	return Global_40001.f_2BDB;
}

int func_266()//Position - 0x8856
{
	return Global_40001.f_2BDA;
}

var func_267()//Position - 0x8865
{
	if (func_20(0))
	{
		return Global_40001.f_2A5E;
	}
	if (func_20(1))
	{
		return Global_40001.f_2A5F;
	}
	if (func_20(2))
	{
		return Global_40001.f_2A60;
	}
	return Global_40001.f_2A61;
}

int func_268()//Position - 0x88B3
{
	return Global_40001.f_2A42;
}

int func_269()//Position - 0x88C2
{
	return Global_40001.f_2A41;
}

void func_270()//Position - 0x88D1
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_1, 1) && (func_282() || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_169.f_2, 0)))
	{
		if (func_64(func_281()))
		{
			func_280();
		}
		if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_169.f_2, 0))
			{
				if (func_319(0))
				{
					iVar2 = Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_4;
					func_276(&iVar0, &fVar1, iVar2, 1);
					if (func_20(0))
					{
						if (func_18())
						{
							func_274(64, func_275(Local_169.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, 4294967295, fVar1, func_380(Local_169.f_3), 1, 2, 4294967295);
						}
						else if (func_273())
						{
							func_274(69, func_275(Local_169.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_380(Local_169.f_3), 1, 2, 4294967295);
						}
						else
						{
							func_274(64, func_275(Local_169.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_380(Local_169.f_3), 1, 2, 4294967295);
						}
					}
					else if (func_20(1))
					{
						if (func_18())
						{
							func_274(67, func_275(Local_169.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, 4294967295, fVar1, func_380(Local_169.f_3), 1, 2, 4294967295);
						}
						else if (func_273())
						{
							func_274(75, func_275(Local_169.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_380(Local_169.f_3), 1, 2, 4294967295);
						}
						else
						{
							func_274(67, func_275(Local_169.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_380(Local_169.f_3), 1, 2, 4294967295);
						}
					}
					else if (func_20(2))
					{
						if (func_18())
						{
							func_274(67, func_275(Local_169.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, 4294967295, fVar1, func_380(Local_169.f_3), 1, 2, 4294967295);
						}
						else if (func_273())
						{
							func_274(75, func_275(Local_169.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_380(Local_169.f_3), 1, 2, 4294967295);
						}
						else
						{
							func_274(67, func_275(Local_169.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_380(Local_169.f_3), 1, 2, 4294967295);
						}
					}
					else
					{
						iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_169.f_4[0]);
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
						{
							iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
							if (Local_1535[Local_169.f_4[0] /*12*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_1535[Local_169.f_4[0] /*12*/].f_4;
							func_276(&iVar0, &fVar1, iVar2, 1);
							sVar5 = "AMCH_LOSE";
							if (func_18())
							{
								func_272(76, func_96(), func_275(Local_169.f_3, 0, 0, 0), sVar5, "AMCH_OVER", 15000, func_380(Local_169.f_3), 4294967295, fVar1, 1, 2, PLAYER::GET_PLAYER_NAME(iVar4));
							}
							else if (func_273())
							{
								func_272(77, func_96(), func_275(Local_169.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_380(Local_169.f_3), iVar0, 3212836864, 1, 2, PLAYER::GET_PLAYER_NAME(iVar4));
							}
							else
							{
								func_272(76, func_96(), func_275(Local_169.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER", 15000, func_380(Local_169.f_3), iVar0, 3212836864, 1, 2, PLAYER::GET_PLAYER_NAME(iVar4));
							}
						}
					}
				}
				else
				{
					func_50(66, "AMCH_OVER", "AMCH_NOWIN", 1, 15000, 2, 1);
				}
			}
			else
			{
				func_49("", "", 1);
			}
			MISC::SET_BIT(&(Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_1), 1);
			func_271(133);
		}
	}
}

void func_271(int iParam0)//Position - 0x8C95
{
	if (iParam0 == iParam0)
	{
	}
}

int func_272(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)//Position - 0x8CA4
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
	func_97(iParam0, &Var0, iParam7, sParam3, sParam4);
	Var0.f_11 = iParam1;
	StringCopy(&(Var0.f_39), sParam2, 16);
	StringCopy(&(Var0.f_3D), sParam6, 16);
	StringCopy(&(Var0.f_19), sParam11, 64);
	Var0.f_6 = iParam5;
	Var0.f_7 = fParam8;
	Var0.f_47 = iParam9;
	Var0.f_48 = iParam10;
	return func_51(&Var0);
}

int func_273()//Position - 0x8D33
{
	return 0;
}

int func_274(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10)//Position - 0x8D3C
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
	func_97(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_39), sParam1, 16);
	StringCopy(&(Var0.f_3D), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_47 = iParam8;
	Var0.f_48 = iParam9;
	if (iParam10 != 4294967295)
	{
		MISC::SET_BIT(&(Var0.f_45), iParam10);
	}
	return func_51(&Var0);
}

char* func_275(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x8DCD
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

int func_276(int iParam0, float fParam1, int iParam2, bool bParam3)//Position - 0x8F5A
{
	if (func_18())
	{
		if (bParam3)
		{
			*fParam1 = (func_277(Local_169.f_3, iParam2) / 10f);
		}
		else
		{
			*fParam1 = (SYSTEM::TO_FLOAT(iParam2) / 10f);
		}
		return 1;
	}
	*iParam0 = iParam2;
	return 0;
}

float func_277(int iParam0, int iParam1)//Position - 0x8FA1
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
				return func_279(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_278(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_278(float fParam0)//Position - 0x9044
{
	return (fParam0 / 1.609344f);
}

float func_279(float fParam0)//Position - 0x9054
{
	return (fParam0 / 0.3048f);
}

void func_280()//Position - 0x9064
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

int func_281()//Position - 0x90AF
{
	return Global_252F9E.f_A90[0 /*80*/].f_1;
}

bool func_282()//Position - 0x90C3
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 25);
}

int func_283(var uParam0, bool bParam1)//Position - 0x90D7
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_293()) && !(func_104(CAM::_0xDC9DA9E8789F5246(), 0) && (func_100(CAM::_0xDC9DA9E8789F5246()) || func_292(CAM::_0xDC9DA9E8789F5246())))) && !func_290(CAM::_0xDC9DA9E8789F5246()))
	{
		func_289();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_45(&(uParam0->f_3)))
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
				func_288(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_45(&(uParam0->f_5)))
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
				func_285();
				func_288(uParam0, 2);
			}
			break;
		
		case 2:
			func_285();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_284("AMEV_LBD_HELP"))
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				}
				func_288(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DE), 1);
				func_288(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DE), 1);
			return 1;
	}
	return 0;
}

bool func_284(char* sParam0)//Position - 0x9253
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_285()//Position - 0x9266
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 0))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_310, 2)) && func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1)) && !Global_10B8E) && !Global_D072) && !CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_26862F.f_11DE), 1);
			func_287("AMEV_LBD_HELP", 4294967295);
			func_286(1);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DE), 0);
		}
	}
}

void func_286(int iParam0)//Position - 0x92E9
{
	unk_0x652B3075D0E58C13(3, 21, 200, 0, 0);
	if (iParam0 && !func_293())
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_287(char* sParam0, int iParam1)//Position - 0x9317
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam1);
}

void func_288(var uParam0, int iParam1)//Position - 0x932E
{
	*uParam0 = iParam1;
}

void func_289()//Position - 0x933B
{
	Global_258852 = 1;
}

int func_290(int iParam0)//Position - 0x9348
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_291(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 2;
			}
		}
	}
	return 0;
}

int func_291(int iParam0)//Position - 0x938E
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

bool func_292(int iParam0)//Position - 0x96E8
{
	return func_99(iParam0, 19);
}

bool func_293()//Position - 0x96F8
{
	return Global_252F9E.f_A90[0 /*80*/].f_1 != 0;
}

void func_294()//Position - 0x970E
{
	int iVar0[3];
	int iVar1;
	var uVar2[3];
	var uVar3[3];
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17[3];
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	if (Local_169.f_4[0] > 4294967295)
	{
		iVar11 = 0;
		bVar12 = (func_316() && !func_94(CAM::_0xDC9DA9E8789F5246()));
		iVar7 = 0;
		while (iVar7 < 3)
		{
			iVar0[iVar7] = func_96();
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Local_169.f_4[iVar7] > 4294967295)
			{
				iVar18 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_169.f_4[iVar7]);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar18))
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar18);
					if (func_12(iVar1, 0, 1))
					{
						if (!func_14(iVar1, 0))
						{
							if (Local_1535[Local_169.f_4[iVar7] /*12*/].f_4 != 0)
							{
								iVar0[iVar15] = iVar1;
								func_276(&(uVar2[iVar15]), &(uVar3[iVar15]), Local_1535[Local_169.f_4[iVar7] /*12*/].f_4, 1);
								iVar15++;
								if (func_252(1))
								{
									if (func_84(iVar1, 1))
									{
										uVar17[iVar7] = func_66(iVar1, 4294967294, 0, 0, 0);
									}
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
		iVar8 = NETSHOP::_NETWORK_SHOP_BASKET_START();
		if (func_94(CAM::_0xDC9DA9E8789F5246()))
		{
			iVar19 = func_314();
			iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar19);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar20))
			{
				iVar21 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar20);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar21))
				{
					iVar8 = iVar21;
				}
			}
		}
		func_276(&iVar4, &fVar9, iLocal_142, 1);
		func_276(&iVar5, &fVar10, Local_1535[iVar8 /*12*/].f_4, 1);
		iVar22 = func_28(0);
		iVar23 = func_518(&(Local_169.f_27), 0, 0);
		iVar6 = func_516(0, (iVar22 - iVar23));
		if (func_17(4294967295, 0))
		{
			func_313(iVar6);
		}
		if (iVar6 > 30000)
		{
			iVar13 = 1;
		}
		else
		{
			iVar13 = 6;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 2))
		{
			iVar14 = 2000;
		}
		else
		{
			iVar14 = 0;
		}
		if (func_316() || Local_169.f_3 == 6)
		{
			iVar16 = 2;
		}
		else
		{
			iVar16 = 1;
		}
		if (Local_169.f_25 >= 4)
		{
			iVar6 = 0;
		}
		if (func_18())
		{
			func_309(iVar0[0], iVar0[1], iVar0[2], uVar3[0], uVar3[1], uVar3[2], fVar9, fVar10, iVar6, func_275(Local_169.f_3, 0, 1, 0), &iVar11, iVar13, bVar12, iVar14, func_310(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		else if (func_273())
		{
			func_308(iVar0[0], iVar0[1], iVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar4, iVar5, iVar6, &iVar11, iVar13, bVar12, iVar14, func_310(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		else
		{
			func_299(iVar0[0], iVar0[1], iVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar4, iVar5, iVar6, func_275(Local_169.f_3, 0, 1, 0), &iVar11, iVar13, bVar12, iVar14, func_310(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		func_295();
	}
}

void func_295()//Position - 0x9A01
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = func_298();
	if (fVar0 >= 0f)
	{
		if (Local_169.f_25 == 3)
		{
			if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
			{
				if (PED::IS_PED_IN_ANY_PLANE(AUDIO::_0x0626A247D2405330()) || PED::IS_PED_IN_ANY_HELI(AUDIO::_0x0626A247D2405330()))
				{
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
					if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar1, 0))
					{
						func_297(iVar1, &fLocal_146);
						fVar2 = (fVar0 + fLocal_146);
						HUD::_SET_MINIMAP_ATTITUDE_INDICATOR_LEVEL(fVar2, 1, 21);
						func_296(fVar0);
						return;
					}
				}
			}
		}
		if (func_284("AMCH_FLYLOW"))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 4))
		{
			AUDIO::STOP_SOUND(iLocal_148);
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 4);
		}
		HUD::_SET_MINIMAP_ATTITUDE_INDICATOR_LEVEL(0f, 0, 21);
	}
}

void func_296(float fParam0)//Position - 0x9AB0
{
	float fVar0;
	
	if (unk_0xFB6A1A92F9B0EB9A(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_519(6);
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 4))
			{
				unk_0x1190AB7024CBD8CB(iLocal_148, "Altitude_Warning", "EXILE_1", 1);
				MISC::SET_BIT(&iLocal_140, 4);
			}
		}
		else
		{
			if (func_284("AMCH_FLYLOW"))
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 4))
			{
				AUDIO::STOP_SOUND(iLocal_148);
				GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 4);
			}
		}
	}
}

float func_297(int iParam0, var uParam1)//Position - 0x9B22
{
	float fVar0;
	vector3 vVar1;
	var uVar2;
	
	vVar1 = { unk_0x8000C77B5F336760(iParam0, 1) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, uParam1, 1, 0);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &uVar2, 0, 0);
	if (unk_0xC74F808C27B1BB64())
	{
		func_519(3);
		MISC::SET_BIT(&iLocal_140, 10);
		func_27(&uLocal_136, 0, 0);
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 10))
	{
		if (func_1(&uLocal_136, 2000, 0))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 10);
		}
	}
	if (*uParam1 < 0f)
	{
		*uParam1 = 0f;
	}
	fVar0 = (vVar1.z - *uParam1);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 * -1f);
	}
	return fVar0;
}

float func_298()//Position - 0x9BB8
{
	switch (Local_169.f_3)
	{
		case 11:
			return 20f;
		
		case 12:
			return 100f;
		
		default:
	}
	return -1f;
}

void func_299(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)//Position - 0x9BE7
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_305(0) == 0)
	{
		return;
	}
	func_304();
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
	if (Global_258679[0] != func_96())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_258679[0]);
			Global_25867F[0 /*16*/] = { func_303(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_300(iParam3, &(Global_25867F[0 /*16*/]), 4294967295, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_258679[1] != func_96())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_258679[1]);
			Global_25867F[1 /*16*/] = { func_303(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_300(iParam4, &(Global_25867F[1 /*16*/]), 4294967295, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_258679[2] != func_96())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_258679[2]);
			Global_25867F[2 /*16*/] = { func_303(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_300(iParam5, &(Global_25867F[2 /*16*/]), 4294967295, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1);
		}
	}
	if (bParam12)
	{
		func_300(iParam6, "HUD_ATTEMPTS", 4294967295, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	switch (iParam15)
	{
		case 0:
			if (CAM::_0xDC9DA9E8789F5246() != func_96())
			{
				if (func_154(CAM::_0xDC9DA9E8789F5246()) == 0)
				{
					func_300(iParam7, PLAYER::GET_PLAYER_NAME(CAM::_0xDC9DA9E8789F5246()), 4294967295, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (func_154(CAM::_0xDC9DA9E8789F5246()) == 0)
			{
				func_300(iParam7, "HUD_USCORE", 4294967295, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 2:
			if (func_154(CAM::_0xDC9DA9E8789F5246()) == 0)
			{
				func_300(iParam7, "HUD_UBEST", 4294967295, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_208(sParam14))
	{
		sVar2 = sParam14;
	}
	func_135(iParam8, sVar2, 0, 0, 4294967295, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0);
	*iParam10 = 0;
	func_134();
}

void func_300(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)//Position - 0x9EAE
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
			if (func_137(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_136(6, iVar0);
		Global_14E696.f_EC5[iVar0] = iParam0;
		StringCopy(&(Global_14E696.f_EC5.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14E696.f_EC5.f_B7[iVar0] = iParam3;
		Global_14E696.f_EC5.f_AC[iVar0] = iParam2;
		Global_14E696.f_EC5.f_104[iVar0] = iParam4;
		Global_14E696.f_EC5.f_10F[iVar0] = iParam5;
		StringCopy(&(Global_14E696.f_EC5.f_11A[iVar0 /*16*/]), sParam6, 64);
		Global_14E696.f_EC5.f_1BB[iVar0] = iParam7;
		Global_14E696.f_EC5.f_1C6[iVar0] = fParam8;
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
		if (iParam15 == 5 && func_302())
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
			if (func_301())
			{
				Global_14E696.f_444 = 1;
			}
		}
	}
}

int func_301()//Position - 0xA110
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

int func_302()//Position - 0xA134
{
	if (((UNK::_GET_CURRENT_LANGUAGE_ID() == 8 || UNK::_GET_CURRENT_LANGUAGE_ID() == 9) || UNK::_GET_CURRENT_LANGUAGE_ID() == 10) || UNK::_GET_CURRENT_LANGUAGE_ID() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_303(int iParam0, char* sParam1)//Position - 0xA172
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

void func_304()//Position - 0xA214
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_258855 = 1;
}

int func_305(bool bParam0)//Position - 0xA237
{
	if (func_307())
	{
		return 0;
	}
	if (func_306())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_306()//Position - 0xA26E
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_C4 != 0;
}

bool func_307()//Position - 0xA285
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 12);
}

void func_308(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0xA297
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_305(0) == 0)
	{
		return;
	}
	func_304();
	iVar1 = 0;
	if (((Global_258679[0] != iParam0 || Global_258679[1] != iParam1) || Global_258679[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_258679[0] = iParam0;
	Global_258679[1] = iParam1;
	Global_258679[2] = iParam2;
	Global_258679[3] = 0;
	Global_258679[4] = 0;
	if (Global_258679[0] != func_96())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_258679[0]);
			Global_25867F[0 /*16*/] = { func_303(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_135(iParam3, &(Global_25867F[0 /*16*/]), 0, 0, 4294967295, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15, 0, 0);
		}
	}
	if (Global_258679[1] != func_96())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_258679[1]);
			Global_25867F[1 /*16*/] = { func_303(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_135(iParam4, &(Global_25867F[1 /*16*/]), 0, 0, 4294967295, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16, 0, 0);
		}
	}
	if (Global_258679[2] != func_96())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_258679[2]);
			Global_25867F[2 /*16*/] = { func_303(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_135(iParam5, &(Global_25867F[2 /*16*/]), 0, 0, 4294967295, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17, 0, 0);
		}
	}
	if (bParam11)
	{
		func_135(iParam6, "HUD_ATTEMPTS", 0, 0, 4294967295, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0, 0, 0);
	}
	switch (iParam14)
	{
		case 0:
			if (CAM::_0xDC9DA9E8789F5246() != func_96())
			{
				if (func_154(CAM::_0xDC9DA9E8789F5246()) == 0)
				{
					func_135(iParam7, PLAYER::GET_PLAYER_NAME(CAM::_0xDC9DA9E8789F5246()), 0, 0, 4294967295, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_154(CAM::_0xDC9DA9E8789F5246()) == 0)
			{
				func_135(iParam7, "HUD_USCORE", 0, 0, 4294967295, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_154(CAM::_0xDC9DA9E8789F5246()) == 0)
			{
				func_135(iParam7, "HUD_UBEST", 0, 0, 4294967295, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_208(sParam13))
	{
		sVar2 = sParam13;
	}
	func_135(iParam8, sVar2, 0, 0, 4294967295, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0, 0, 0);
	*iParam9 = 0;
	func_134();
}

void func_309(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)//Position - 0xA519
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_305(0) == 0)
	{
		return;
	}
	func_304();
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
	if (Global_258679[0] != func_96())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_258679[0]);
			Global_25867F[0 /*16*/] = { func_303(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_300(4294967295, &(Global_25867F[0 /*16*/]), 4294967295, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_258679[1] != func_96())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_258679[1]);
			Global_25867F[1 /*16*/] = { func_303(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_300(4294967295, &(Global_25867F[1 /*16*/]), 4294967295, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_258679[2] != func_96())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_258679[2]);
			Global_25867F[2 /*16*/] = { func_303(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_300(4294967295, &(Global_25867F[2 /*16*/]), 4294967295, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18, 255, 0, 0, 0, 0, 1);
		}
	}
	if (bParam12)
	{
		func_300(4294967295, "HUD_ATTEMPTS", 4294967295, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	switch (iParam15)
	{
		case 0:
			if (CAM::_0xDC9DA9E8789F5246() != func_96())
			{
				if (func_154(CAM::_0xDC9DA9E8789F5246()) == 0)
				{
					func_300(4294967295, PLAYER::GET_PLAYER_NAME(CAM::_0xDC9DA9E8789F5246()), 4294967295, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (func_154(CAM::_0xDC9DA9E8789F5246()) == 0)
			{
				func_300(4294967295, "HUD_USCORE", 4294967295, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 2:
			if (func_154(CAM::_0xDC9DA9E8789F5246()) == 0)
			{
				func_300(4294967295, "HUD_UBEST", 4294967295, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_208(sParam14))
	{
		sVar2 = sParam14;
	}
	if (iParam8 != 4294967286)
	{
		func_135(iParam8, sVar2, 0, 0, 4294967295, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0);
	}
	*iParam10 = 0;
	func_134();
}

char* func_310()//Position - 0xA7EB
{
	return "HUD_COUNTDOWN";
	switch (func_312(CAM::_0xDC9DA9E8789F5246()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_311())
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

int func_311()//Position - 0xA995
{
	if (func_312(CAM::_0xDC9DA9E8789F5246()) == 133)
	{
		return Global_26862F.f_12C4;
	}
	return 4294967295;
}

int func_312(int iParam0)//Position - 0xA9B8
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18CD5B[iVar0 /*560*/];
	}
	return 4294967295;
}

void func_313(int iParam0)//Position - 0xA9D7
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

var func_314()//Position - 0xADBA
{
	if (ENTITY::DOES_ENTITY_EXIST(func_315()))
	{
		return func_315();
	}
	return func_91();
}

var func_315()//Position - 0xADD8
{
	return Global_240006.f_3;
}

int func_316()//Position - 0xADE6
{
	switch (Local_169.f_3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 8:
		case 9:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

void func_317()//Position - 0xAE3F
{
	int iVar0;
	struct<42> Var1;
	int iVar2;
	int iVar3;
	
	Var1 = 4294967295;
	Var1.f_16 = 3212836864;
	Var1.f_17 = 3;
	Var1.f_27 = 4294967295;
	Var1.f_29 = 4294967295;
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		Local_190.f_216[iVar0 /*42*/] = { Var1 };
		Local_190.f_216[iVar0 /*42*/].f_1 = func_96();
		if (Local_169.f_4[iVar0] > 4294967295)
		{
			iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_169.f_4[iVar0]);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (!func_14(iVar2, 0))
				{
					Local_190.f_216[iVar0 /*42*/] = Local_169.f_4[iVar0];
					Local_190.f_216[iVar0 /*42*/].f_1 = iVar2;
					Local_190.f_216[iVar0 /*42*/].f_9 = Local_1535[Local_169.f_4[iVar0] /*12*/].f_4;
					Local_190.f_216[iVar0 /*42*/].f_1F = 4294967295;
					Local_190.f_1.f_6C = 8;
				}
			}
		}
		iVar0++;
	}
}

void func_318()//Position - 0xAF2C
{
	MISC::SET_BIT(&(Global_26862F.f_6BB), 19);
}

int func_319(int iParam0)//Position - 0xAF41
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_169.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_21(Local_1535[iVar0 /*12*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_320()//Position - 0xAF76
{
}

void func_321()//Position - 0xAF7E
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	
	func_276(&iVar1, &fVar2, iLocal_142, 1);
	switch (Local_169.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_323(sVar0, fVar2 >= 70f);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sVar0))
			{
				fVar2 = func_322(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				AUDIO::SET_AUDIO_SCENE_VARIABLE(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = unk_0x620EBB593A8870CD();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_323(sVar0, bVar3);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sVar0))
			{
				fVar2 = SYSTEM::TO_FLOAT(iVar1);
				fVar2 = func_322(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_322(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				AUDIO::SET_AUDIO_SCENE_VARIABLE(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_147 != iLocal_142)
			{
				if (iLocal_142 > 0)
				{
					unk_0x1190AB7024CBD8CB(iLocal_149, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", 0);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_149, "Count", SYSTEM::TO_FLOAT(iVar1));
				}
				else
				{
					unk_0x1190AB7024CBD8CB(4294967295, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", 0);
				}
			}
			iLocal_147 = iLocal_142;
			break;
	}
	if (func_20(0))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 3))
		{
			if (func_248(1))
			{
				unk_0x1190AB7024CBD8CB(4294967295, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0x1190AB7024CBD8CB(4294967295, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			MISC::SET_BIT(&iLocal_140, 3);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 3))
	{
		if (func_248(1))
		{
			unk_0x1190AB7024CBD8CB(4294967295, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0x1190AB7024CBD8CB(4294967295, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 3);
	}
}

float func_322(float fParam0, float fParam1)//Position - 0xB13B
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_323(char* sParam0, bool bParam1)//Position - 0xB152
{
	if (bParam1)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
		{
			AUDIO::START_AUDIO_SCENE(sParam0);
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
}

void func_324()//Position - 0xB182
{
	int iVar0;
	
	if ((!func_154(CAM::_0xDC9DA9E8789F5246()) && !func_14(CAM::_0xDC9DA9E8789F5246(), 0)) && func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
	{
		iVar0 = func_345();
		if (iVar0 != Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_4)
		{
			if (func_21(iVar0, iLocal_139) || func_344(iVar0, iLocal_139))
			{
				if (!func_343() || func_1(&uLocal_128, 1000, 0))
				{
					func_27(&uLocal_128, 0, 0);
					iLocal_139 = iVar0;
					Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_4 = iVar0;
					func_327();
					if (iLocal_138 == 0)
					{
						iLocal_138 = HUD::_0x13C4B962653A5280();
					}
					if (Local_1536.f_B == 0)
					{
						Local_1536.f_B = NETWORK::_GET_POSIX_TIME();
					}
				}
			}
		}
		iLocal_142 = func_325();
	}
}

int func_325()//Position - 0xB244
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = 4294967295;
	switch (Local_169.f_3)
	{
		case 0:
			fVar1 = unk_0x0F30CB0CB143363C();
			break;
		
		case 1:
			fVar1 = unk_0xBBB5FC157865F9C1();
			break;
		
		case 2:
			fVar1 = unk_0x620EBB593A8870CD();
			break;
		
		case 3:
			fVar1 = unk_0xD94883910C97693D();
			break;
		
		case 4:
			fVar1 = unk_0x6DCAB01957D214DA();
			break;
		
		case 5:
			fVar1 = unk_0xE590435BD561E6BD();
			break;
		
		case 8:
			iVar0 = unk_0x66D4675AE7BFBE0D();
			break;
		
		case 9:
			fVar1 = unk_0xA94ACC327E57DC18();
			break;
		
		case 11:
			fVar1 = unk_0xB329D387ACC694DB();
			break;
		
		case 12:
			fVar1 = unk_0xB329D387ACC694DB();
			break;
		
		case 13:
			fVar1 = unk_0xB3BC59BEF9318F16();
			break;
	}
	if (func_18())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = SYSTEM::ROUND(fVar1);
	}
	iVar2 = MISC::ABSI(iVar0);
	func_326(&iVar2);
	if (iVar2 == iLocal_141)
	{
		if (func_21(iVar2, 0))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 1))
			{
				func_27(&uLocal_130, 0, 0);
				Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_4.f_2 = func_518(&uLocal_130, 0, 0);
				MISC::SET_BIT(&iLocal_140, 1);
			}
			else if ((func_518(&uLocal_130, 0, 0) % 1000) == 0)
			{
				Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_4.f_2 = func_518(&uLocal_130, 0, 0);
			}
		}
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 1);
	}
	if ((func_21(iLocal_141, 0) && !func_21(iVar2, 0)) && !func_1(&uLocal_132, 2000, 0))
	{
		iVar2 = iLocal_141;
		MISC::SET_BIT(&iLocal_140, 2);
	}
	else
	{
		iLocal_141 = iVar2;
		func_44(&uLocal_132);
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 2);
	}
	return iVar2;
}

void func_326(int iParam0)//Position - 0xB3F4
{
	switch (Local_169.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
					{
						if ((((PED::IS_PED_IN_ANY_BOAT(AUDIO::_0x0626A247D2405330()) || PED::IS_PED_IN_ANY_HELI(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_PLANE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_SUB(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_TRAIN(AUDIO::_0x0626A247D2405330()))
						{
							*iParam0 = 0;
						}
					}
					else
					{
						*iParam0 = 0;
					}
				}
			}
			break;
	}
}

void func_327()//Position - 0xB47D
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_1, 2))
	{
		MISC::SET_BIT(&(Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_1), 2);
		func_328(1);
	}
}

void func_328(bool bParam0)//Position - 0xB4AE
{
	var uVar0;
	
	if (bParam0)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 7))
		{
			if ((!func_98(CAM::_0xDC9DA9E8789F5246()) && !func_7(CAM::_0xDC9DA9E8789F5246())) && !func_154(CAM::_0xDC9DA9E8789F5246()))
			{
				if (func_157())
				{
					func_336(0);
					func_335();
				}
				if (func_334(0))
				{
					uVar0 = func_199(2480, 4294967295, 0);
					GRAPHICS::_0x35FB78DC42B7BD21(&uVar0, 0);
					func_335();
				}
				if (func_334(func_333(func_312(CAM::_0xDC9DA9E8789F5246()))))
				{
					uVar0 = func_199(2480, 4294967295, 0);
					GRAPHICS::_0x35FB78DC42B7BD21(&uVar0, func_333(func_312(CAM::_0xDC9DA9E8789F5246())));
					func_335();
				}
				if (func_332())
				{
					func_335();
				}
				if (func_312(CAM::_0xDC9DA9E8789F5246()) > 4294967295)
				{
					MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 7);
					if (func_312(CAM::_0xDC9DA9E8789F5246()) == 236)
					{
						func_331();
					}
				}
			}
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 7))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 7);
		func_329();
	}
}

void func_329()//Position - 0xB5C3
{
	if (func_330())
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 17);
	}
}

bool func_330()//Position - 0xB5E5
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 17);
}

void func_331()//Position - 0xB600
{
	if (!func_330())
	{
		Global_26862F.f_185A = HUD::_0x13C4B962653A5280();
		MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 17);
	}
}

int func_332()//Position - 0xB62E
{
	if (Global_252F9E.f_47F.f_5 == 4294967295)
	{
		return 0;
	}
	return 1;
}

int func_333(int iParam0)//Position - 0xB648
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

bool func_334(int iParam0)//Position - 0xB6DB
{
	int iVar0;
	
	iVar0 = func_199(2480, 4294967295, 0);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, iParam0);
}

void func_335()//Position - 0xB6F6
{
	if (func_332())
	{
		Global_252F9E.f_47F.f_10 = 1;
	}
}

void func_336(int iParam0)//Position - 0xB70F
{
	if (func_157())
	{
		if (iParam0 == 1)
		{
			if (Global_26862F.f_111E == 4294967295)
			{
				Global_26862F.f_111E = 60000;
			}
			func_27(&(Global_26862F.f_111C), 0, 0);
			if (Global_26862F.f_1121 == 4294967295)
			{
				Global_26862F.f_1121 = 10000;
			}
			func_27(&(Global_26862F.f_111F), 0, 0);
		}
		else
		{
			Global_1406A0 = 0;
			Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_8 = 0;
			func_342(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_341()) && !func_337(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_EC6C8 = 0;
		}
	}
}

int func_337(int iParam0)//Position - 0xB7A9
{
	if (func_338(iParam0, 1))
	{
		if (Global_1841F3[iParam0 /*790*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_338(int iParam0, bool bParam1)//Position - 0xB7CD
{
	if (bParam1)
	{
		if (func_339(iParam0))
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

bool func_339(int iParam0)//Position - 0xB7F9
{
	return func_340(iParam0);
}

bool func_340(int iParam0)//Position - 0xB807
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_D.f_1, 0);
}

bool func_341()//Position - 0xB821
{
	return Global_255C02.f_2D9;
}

void func_342(bool bParam0)//Position - 0xB830
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_157())
		{
			if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 0))
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
			if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
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

int func_343()//Position - 0xB929
{
	switch (Local_169.f_3)
	{
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

int func_344(int iParam0, int iParam1)//Position - 0xB988
{
	if (Local_169.f_3 == 17)
	{
		if (iParam0 < iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_345()//Position - 0xB9A6
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_360())
	{
		if (Local_169.f_3 == 14)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) && func_359(AUDIO::_0x0626A247D2405330(), 0) == 4294967295)
			{
				iVar2 = PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330());
				if ((!func_358(&iVar2, 0) || ENTITY::GET_ENTITY_MODEL(iVar2) != joaat("DODO")) && ENTITY::IS_ENTITY_IN_AIR(iVar2))
				{
					func_351(Local_169.f_3 != 14, 1, 0);
					if (func_350())
					{
						iVar3 = func_349();
						if (iVar3 >= 0)
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_8[func_348(iVar3)], func_347(iVar3)))
							{
								iLocal_143++;
								MISC::SET_BIT(&(Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_8[func_348(iVar3)]), func_347(iVar3));
							}
						}
					}
					iVar0 = iLocal_143;
				}
			}
		}
		else
		{
			iVar0 = func_346();
		}
	}
	else
	{
		unk_0x8C87D396610D1D7C(&fVar1);
		if (func_18())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = SYSTEM::ROUND(fVar1);
	}
	return MISC::ABSI(iVar0);
}

int func_346()//Position - 0xBAAF
{
	switch (Local_169.f_3)
	{
		case 14:
			return 0;
		
		case 4:
			return 0;
		
		default:
	}
	return 4294967295;
}

int func_347(int iParam0)//Position - 0xBAD6
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_348(iParam0) * 31);
}

int func_348(int iParam0)//Position - 0xBB07
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

int func_349()//Position - 0xBB2D
{
	return iLocal_110;
}

int func_350()//Position - 0xBB37
{
	if (iLocal_117 == 1)
	{
		iLocal_117 = 0;
		return 1;
	}
	return 0;
}

void func_351(bool bParam0, bool bParam1, int iParam2)//Position - 0xBB4D
{
	func_353(bParam0, iParam2);
	if (bParam1)
	{
		if (vLocal_121.z < vLocal_122.z)
		{
			vLocal_121.z = 0f;
		}
		else
		{
			vLocal_122.z = 0f;
		}
		if (vLocal_123.z < vLocal_124.z)
		{
			vLocal_123.z = 0f;
		}
		else
		{
			vLocal_124.z = 0f;
		}
	}
	switch (iLocal_111)
	{
		case 0:
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), vLocal_119[iLocal_110 /*3*/]) < fLocal_120)
				{
					if (PED::IS_PED_IN_ANY_HELI(AUDIO::_0x0626A247D2405330()) || PED::IS_PED_IN_ANY_PLANE(AUDIO::_0x0626A247D2405330()))
					{
						if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 0))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_121, vLocal_122, fLocal_125, 0, 1, 0))
							{
								bLocal_112 = true;
								iLocal_111 = 1;
							}
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_123, vLocal_124, fLocal_125, 0, 1, 0))
							{
								bLocal_113 = true;
								iLocal_111 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if (!PED::IS_PED_IN_ANY_HELI(AUDIO::_0x0626A247D2405330()) && !PED::IS_PED_IN_ANY_PLANE(AUDIO::_0x0626A247D2405330()))
				{
					func_352();
				}
				else if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 0))
				{
					func_352();
				}
				else if (!ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)) && !bParam1)
				{
					func_352();
				}
				if (bLocal_112)
				{
					if (iLocal_116)
					{
						if (iLocal_115)
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_121, vLocal_122, fLocal_125, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_123, vLocal_124, fLocal_125, 0, 1, 0))
							{
								func_352();
								iLocal_117 = 1;
							}
						}
						else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_121, vLocal_122, fLocal_125, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_123, vLocal_124, fLocal_125, 0, 1, 0))
						{
							iLocal_115 = 1;
						}
						else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_121, vLocal_122, fLocal_125, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_123, vLocal_124, fLocal_125, 0, 1, 0))
						{
							func_352();
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_121, vLocal_122, fLocal_125, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_123, vLocal_124, fLocal_125, 0, 1, 0))
					{
						iLocal_116 = 1;
					}
					else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_121, vLocal_122, fLocal_125, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_123, vLocal_124, fLocal_125, 0, 1, 0))
					{
						func_352();
					}
				}
				else if (bLocal_113)
				{
					if (iLocal_116)
					{
						if (iLocal_114)
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_121, vLocal_122, fLocal_125, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_123, vLocal_124, fLocal_125, 0, 1, 0))
							{
								func_352();
								iLocal_117 = 1;
							}
						}
						else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_121, vLocal_122, fLocal_125, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_123, vLocal_124, fLocal_125, 0, 1, 0))
						{
							iLocal_114 = 1;
						}
						else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_121, vLocal_122, fLocal_125, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_123, vLocal_124, fLocal_125, 0, 1, 0))
						{
							func_352();
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_121, vLocal_122, fLocal_125, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_123, vLocal_124, fLocal_125, 0, 1, 0))
					{
						iLocal_116 = 1;
					}
					else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_121, vLocal_122, fLocal_125, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vLocal_123, vLocal_124, fLocal_125, 0, 1, 0))
					{
						func_352();
					}
				}
			}
			break;
	}
}

void func_352()//Position - 0xBF4D
{
	bLocal_112 = false;
	bLocal_113 = false;
	iLocal_114 = 0;
	iLocal_115 = 0;
	iLocal_116 = 0;
	iLocal_111 = 0;
}

void func_353(var uParam0, var uParam1)//Position - 0xBF67
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	vLocal_118 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0) };
	fVar1 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_357(iVar0)) && (uParam1 || !func_356(iVar0)))
		{
			if (func_355(vLocal_118, vLocal_119[iVar0 /*3*/], 100f, 0))
			{
				fVar2 = SYSTEM::VDIST(vLocal_118, vLocal_119[iVar0 /*3*/]);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iLocal_110 = iVar0;
				}
			}
		}
		iVar0++;
	}
	func_354(iLocal_110);
}

void func_354(int iParam0)//Position - 0xBFFD
{
	switch (iParam0)
	{
		case 0:
			vLocal_121 = { 1103.014f, -233.0374f, 56.13004f };
			vLocal_122 = { 1073.191f, -214.8478f, 66.0593f };
			fLocal_125 = 30f;
			vLocal_123 = { 1093.589f, -248.5926f, 56.88639f };
			vLocal_124 = { 1063.774f, -230.1425f, 66.67847f };
			break;
		
		case 1:
			vLocal_121 = { 1044.182f, -324.5904f, 49.33408f };
			vLocal_122 = { 1016.71f, -307.7383f, 64.81343f };
			fLocal_125 = 30f;
			vLocal_123 = { 1007.983f, -320.6159f, 48.4543f };
			vLocal_124 = { 1036.007f, -337.4204f, 64.4808f };
			break;
		
		case 2:
			vLocal_121 = { 916.599f, -419.8782f, 35.62748f };
			vLocal_122 = { 910.3793f, -383.8826f, 47.54339f };
			fLocal_125 = 7f;
			vLocal_123 = { 912.1362f, -420.5161f, 35.38034f };
			vLocal_124 = { 906.8952f, -384.6779f, 47.24926f };
			break;
		
		case 3:
			vLocal_121 = { 757.7189f, -472.924f, 19.2535f };
			vLocal_122 = { 696.5936f, -420.2115f, 35.46084f };
			fLocal_125 = 20.75f;
			vLocal_123 = { 744.9114f, -480.7373f, 19.06514f };
			vLocal_124 = { 682.5614f, -429.5533f, 37.0266f };
			break;
		
		case 4:
			vLocal_121 = { 680.3677f, -581.1792f, 14.2145f };
			vLocal_122 = { 599.8101f, -528.3059f, 33.40958f };
			fLocal_125 = 45f;
			vLocal_123 = { 667.3692f, -610.5356f, 13.85401f };
			vLocal_124 = { 582.8433f, -556.7818f, 33.40335f };
			break;
		
		case 5:
			vLocal_121 = { 644.2497f, -844.7504f, 12.36707f };
			vLocal_122 = { 526.8608f, -845.2521f, 35.9896f };
			fLocal_125 = 25f;
			vLocal_123 = { 644.3659f, -859.3878f, 12.59677f };
			vLocal_124 = { 526.8615f, -857.5208f, 36.32857f };
			break;
		
		case 6:
			vLocal_121 = { 634.972f, -1011.64f, 10.92594f };
			vLocal_122 = { 539.6501f, -1024.017f, 35.95852f };
			fLocal_125 = 25f;
			vLocal_123 = { 634.9612f, -1029.123f, 10.61846f };
			vLocal_124 = { 543.4893f, -1038.261f, 35.9593f };
			break;
		
		case 7:
			vLocal_121 = { 645.7223f, -1191.215f, 10.45198f };
			vLocal_122 = { 524.3018f, -1197.167f, 39.61172f };
			fLocal_125 = 50f;
			vLocal_123 = { 645.7223f, -1228.966f, 10.98015f };
			vLocal_124 = { 521.9379f, -1217.607f, 39.47172f };
			break;
		
		case 8:
			vLocal_121 = { 642.1216f, -1295.73f, 9.005976f };
			vLocal_122 = { 568.1702f, -1375.351f, 20.12989f };
			fLocal_125 = 7f;
			vLocal_123 = { 644.7772f, -1298.168f, 9.128529f };
			vLocal_124 = { 571.6342f, -1378.644f, 20.35802f };
			break;
		
		case 9:
			vLocal_121 = { 686.5675f, -1444.71f, 9.065001f };
			vLocal_122 = { 598.9328f, -1444.438f, 25.68846f };
			fLocal_125 = 25f;
			vLocal_123 = { 682.3027f, -1429.872f, 9.890836f };
			vLocal_124 = { 593.8217f, -1432.995f, 25.60072f };
			break;
		
		case 10:
			vLocal_121 = { 718.7617f, -1734.313f, 9.082874f };
			vLocal_122 = { 615.0017f, -1725.897f, 27.54585f };
			fLocal_125 = 30f;
			vLocal_123 = { 717.5355f, -1748.646f, 9.363478f };
			vLocal_124 = { 614.218f, -1734.848f, 27.35708f };
			break;
		
		case 11:
			vLocal_121 = { 694.3165f, -2049.806f, 0.009695f };
			vLocal_122 = { 618.6845f, -2040.014f, 25.83412f };
			fLocal_125 = 30f;
			vLocal_123 = { 693.1836f, -2063.225f, 0.429037f };
			vLocal_124 = { 607.5944f, -2055.326f, 26.91816f };
			break;
		
		case 12:
			vLocal_121 = { 642.6671f, -2494.551f, 0.468485f };
			vLocal_122 = { 570.1807f, -2513.959f, 11.78794f };
			fLocal_125 = 20f;
			vLocal_123 = { 647.0339f, -2506.202f, 0.583701f };
			vLocal_124 = { 571.1415f, -2522.975f, 10.45045f };
			break;
		
		case 13:
			vLocal_121 = { 691.8235f, -2558.219f, 0.363352f };
			vLocal_122 = { 645.8863f, -2600.311f, 9.898791f };
			fLocal_125 = 10.25f;
			vLocal_123 = { 695.7928f, -2561.034f, 0.346731f };
			vLocal_124 = { 656.3919f, -2601.972f, 9.643657f };
			break;
		
		case 14:
			vLocal_121 = { 723.6254f, -2562.171f, 0.255647f };
			vLocal_122 = { 720.752f, -2619.77f, 15.73211f };
			fLocal_125 = 15f;
			vLocal_123 = { 735.765f, -2561.935f, 0.311182f };
			vLocal_124 = { 736.1214f, -2618.767f, 15.79061f };
			break;
		
		case 15:
			vLocal_121 = { 891.4387f, -2603.12f, 0f };
			vLocal_122 = { 704.4932f, -2634.793f, 45f };
			fLocal_125 = 20f;
			vLocal_123 = { 893.2578f, -2616.235f, 0f };
			vLocal_124 = { 707.7261f, -2647.696f, 45f };
			break;
		
		case 16:
			vLocal_121 = { -2669.587f, 2491.96f, 2.043799f };
			vLocal_122 = { -2617.765f, 2841.595f, 14.0822f };
			fLocal_125 = 26.5f;
			vLocal_123 = { -2687.606f, 2494.868f, 2.608733f };
			vLocal_124 = { -2637.085f, 2846.875f, 14.15988f };
			break;
		
		case 17:
			vLocal_121 = { -1986.173f, 4521.799f, 0f };
			vLocal_122 = { -1809.903f, 4699.551f, 53.5088f };
			fLocal_125 = 17f;
			vLocal_123 = { -1995.668f, 4531.259f, 0f };
			vLocal_124 = { -1817.543f, 4708.395f, 53.50917f };
			break;
		
		case 18:
			vLocal_121 = { -526.0265f, 4472.442f, 0f };
			vLocal_122 = { -505.5714f, 4335.725f, 86.73311f };
			fLocal_125 = 10f;
			vLocal_123 = { -519.9281f, 4476.346f, 0f };
			vLocal_124 = { -500.7313f, 4336.389f, 86.71289f };
			break;
		
		case 19:
			vLocal_121 = { 98.1615f, 3384.489f, 45.45169f };
			vLocal_122 = { 154.974f, 3350.694f, 30.03358f };
			fLocal_125 = 8f;
			vLocal_123 = { 152.6802f, 3346.793f, 45.02156f };
			vLocal_124 = { 95.57188f, 3380.091f, 30.43284f };
			break;
		
		case 20:
			vLocal_121 = { 147.8606f, 3406.796f, 38.03672f };
			vLocal_122 = { 126.1329f, 3416.927f, 30.02987f };
			fLocal_125 = 14.5f;
			vLocal_123 = { 130.0916f, 3425.417f, 38.05672f };
			vLocal_124 = { 151.8703f, 3415.391f, 30.0578f };
			break;
		
		case 21:
			vLocal_121 = { 2830.972f, 4967.14f, 34.56013f };
			vLocal_122 = { 2818.719f, 4992.298f, 51.2909f };
			fLocal_125 = 10f;
			vLocal_123 = { 2826.767f, 4964.185f, 34.10636f };
			vLocal_124 = { 2814.216f, 4989.983f, 51.21849f };
			break;
		
		case 22:
			vLocal_121 = { -151.5764f, 4264.417f, 31.04735f };
			vLocal_122 = { -193.1962f, 4224.604f, 43.87255f };
			fLocal_125 = 10f;
			vLocal_123 = { -148.3842f, 4261.071f, 31.57409f };
			vLocal_124 = { -190.4719f, 4222.076f, 43.95443f };
			break;
		
		case 23:
			vLocal_121 = { -426.6919f, 2964.272f, 14.848f };
			vLocal_122 = { -396.2298f, 2959.278f, 23.50637f };
			fLocal_125 = 7f;
			vLocal_123 = { -425.0283f, 2967.861f, 15.22699f };
			vLocal_124 = { -395.6073f, 2962.607f, 24.38079f };
			break;
		
		case 24:
			vLocal_121 = { -192.3414f, 2864.916f, 30.72595f };
			vLocal_122 = { -170.1509f, 2857.128f, 43.94182f };
			fLocal_125 = 10f;
			vLocal_123 = { -192.0129f, 2871.603f, 29.99943f };
			vLocal_124 = { -169.5957f, 2863.838f, 44.03251f };
			break;
		
		case 25:
			vLocal_121 = { 2539.185f, 2228.772f, 18.6102f };
			vLocal_122 = { 2574.373f, 2169.401f, 27.26598f };
			fLocal_125 = 10f;
			vLocal_123 = { 2543.708f, 2231.402f, 18.331f };
			vLocal_124 = { 2578.079f, 2171.584f, 27.26057f };
			break;
		
		case 26:
			vLocal_121 = { 2954.087f, 815.7209f, 0.037901f };
			vLocal_122 = { 2933.189f, 796.4688f, 12.98392f };
			fLocal_125 = 35f;
			vLocal_123 = { 2966.123f, 806.8889f, 0.544056f };
			vLocal_124 = { 2950.801f, 786.7816f, 11.74596f };
			break;
		
		case 27:
			vLocal_121 = { 2329.673f, -459.6648f, 70.24277f };
			vLocal_122 = { 2413.384f, -361.2188f, 91.77886f };
			fLocal_125 = 12f;
			vLocal_123 = { 2324.752f, -455.5238f, 70.25145f };
			vLocal_124 = { 2407.409f, -356.2003f, 91.43083f };
			break;
		
		case 28:
			vLocal_121 = { 1943.428f, -753.251f, 80.17905f };
			vLocal_122 = { 1850.365f, -760.9587f, 93.02522f };
			fLocal_125 = 7f;
			vLocal_123 = { 1943.366f, -758.287f, 80.32291f };
			vLocal_124 = { 1851.354f, -765.1807f, 92.93546f };
			break;
		
		case 29:
			vLocal_121 = { -271.2849f, -2414.993f, -10f };
			vLocal_122 = { -542.9096f, -2225.856f, 52.65004f };
			fLocal_125 = 30f;
			vLocal_123 = { -279.8399f, -2427.212f, -10f };
			vLocal_124 = { -551.2656f, -2237.791f, 52.64634f };
			break;
		
		case 30:
			vLocal_121 = { -1483f, 2691.428f, -10f };
			vLocal_122 = { -1377.168f, 2600.769f, 15.95528f };
			fLocal_125 = 12f;
			vLocal_123 = { -1478.152f, 2696.688f, -10f };
			vLocal_124 = { -1378.503f, 2608.698f, 15.60924f };
			break;
		
		case 31:
			vLocal_121 = { 222.1519f, -2343.487f, 0.039199f };
			vLocal_122 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_125 = 12f;
			vLocal_123 = { 216.959f, -2343.487f, 0.207734f };
			vLocal_124 = { 216.602f, -2295.445f, 7.424279f };
			break;
		
		case 32:
			vLocal_121 = { 346.4622f, -2244.374f, 0.159779f };
			vLocal_122 = { 346.8347f, -2389.591f, 7.852059f };
			fLocal_125 = 20f;
			vLocal_123 = { 359.609f, -2244.468f, 0.129684f };
			vLocal_124 = { 355.4054f, -2390.258f, 7.080691f };
			break;
		
		case 33:
			vLocal_121 = { -1859.68f, -322.6357f, 56.16368f };
			vLocal_122 = { -1836.614f, -335.4141f, 96.1161f };
			fLocal_125 = 7.5f;
			vLocal_123 = { -1860.27f, -327.8634f, 57.543f };
			vLocal_124 = { -1837.271f, -339.2227f, 95.69325f };
			break;
		
		case 34:
			vLocal_121 = { -680.2632f, -600.818f, 69.11289f };
			vLocal_122 = { -706.6613f, -600.7515f, 30.47604f };
			fLocal_125 = 31.5f;
			vLocal_123 = { -680.6077f, -618.3658f, 69.27496f };
			vLocal_124 = { -706.3596f, -618.2385f, 30.31235f };
			break;
		
		case 35:
			vLocal_121 = { -1468.096f, -591.7158f, 67.05518f };
			vLocal_122 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_125 = 11.75f;
			vLocal_123 = { -1474.903f, -591.1215f, 67.08091f };
			vLocal_124 = { -1457.173f, -568.1316f, 29.44059f };
			break;
		
		case 36:
			vLocal_121 = { -1544.958f, -537.1475f, 72.44347f };
			vLocal_122 = { -1564.616f, -551.1829f, 32.86163f };
			fLocal_125 = 11.75f;
			vLocal_123 = { -1541.008f, -541.5494f, 71.61972f };
			vLocal_124 = { -1561.219f, -555.868f, 32.9279f };
			break;
		
		case 37:
			vLocal_121 = { 333.2108f, -2727.274f, 20.71663f };
			vLocal_122 = { 333.4297f, -2791.609f, 41.99023f };
			fLocal_125 = 20f;
			vLocal_123 = { 343.1127f, -2727.236f, 20.23613f };
			vLocal_124 = { 343.6678f, -2791.602f, 41.37928f };
			break;
		
		case 38:
			vLocal_121 = { 1928.071f, 6228.355f, 43.49398f };
			vLocal_122 = { 2039.882f, 6167.397f, 55.46405f };
			fLocal_125 = 13f;
			vLocal_123 = { 1931.82f, 6235.634f, 43.37382f };
			vLocal_124 = { 2039.598f, 6176.525f, 55.25597f };
			break;
		
		case 39:
			vLocal_121 = { -736.4309f, -1590.921f, 10.80892f };
			vLocal_122 = { -710.811f, -1516.349f, -0.098598f };
			fLocal_125 = 15f;
			vLocal_123 = { -727.2307f, -1585.221f, 11.78027f };
			vLocal_124 = { -700.0201f, -1511.783f, -0.341655f };
			break;
		
		case 40:
			vLocal_121 = { -676.3775f, -1548.553f, 12.33747f };
			vLocal_122 = { -659.329f, -1507.063f, -0.788618f };
			fLocal_125 = 25f;
			vLocal_123 = { -654.203f, -1536.146f, 9.191055f };
			vLocal_124 = { -645.9954f, -1500.219f, -2.406948f };
			break;
		
		case 41:
			vLocal_121 = { -624.2344f, -1537.045f, 12.60193f };
			vLocal_122 = { -622.1749f, -1472.877f, -0.292606f };
			fLocal_125 = 8f;
			vLocal_123 = { -615.4003f, -1536.65f, 12.40271f };
			vLocal_124 = { -619.7385f, -1472.937f, -0.243267f };
			break;
		
		case 42:
			vLocal_121 = { -492.5057f, -1632.457f, 24.3307f };
			vLocal_122 = { -418.2088f, -1487.452f, 0f };
			fLocal_125 = 25f;
			vLocal_123 = { -486.2016f, -1636.095f, 24.20805f };
			vLocal_124 = { -398.7648f, -1490.44f, 0f };
			break;
		
		case 43:
			vLocal_121 = { -359.3541f, -1639.693f, 13.13455f };
			vLocal_122 = { -388.4955f, -1690.945f, -0.183164f };
			fLocal_125 = 25f;
			vLocal_123 = { -378.1518f, -1705.66f, 12.47196f };
			vLocal_124 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 44:
			vLocal_121 = { -243.4436f, -1814.623f, 25.69465f };
			vLocal_122 = { -183.9987f, -1780.645f, -0.085802f };
			fLocal_125 = 25f;
			vLocal_123 = { -235.1319f, -1822.094f, 25.86542f };
			vLocal_124 = { -175.5105f, -1788.275f, -0.506062f };
			break;
		
		case 45:
			vLocal_121 = { 84.55537f, -2046.159f, 13.30767f };
			vLocal_122 = { 17.93164f, -2045.152f, -0.031946f };
			fLocal_125 = 25f;
			vLocal_123 = { 17.90788f, -2035.773f, 12.62706f };
			vLocal_124 = { 84.57207f, -2034.184f, 0.048385f };
			break;
		
		case 46:
			vLocal_121 = { 221.5029f, -2232.766f, 9.88676f };
			vLocal_122 = { 221.6825f, -2244.081f, 4.479149f };
			fLocal_125 = 8f;
			vLocal_123 = { 218.583f, -2232.766f, 9.886198f };
			vLocal_124 = { 218.729f, -2244.081f, 4.535046f };
			break;
		
		case 47:
			vLocal_121 = { 221.6518f, -2184.635f, 11.66457f };
			vLocal_122 = { 221.6139f, -2208.137f, 5.876424f };
			fLocal_125 = 8f;
			vLocal_123 = { 217.8995f, -2184.635f, 11.5405f };
			vLocal_124 = { 218.3327f, -2208.137f, 5.864793f };
			break;
		
		case 48:
			vLocal_121 = { 2326.57f, 1096.031f, 76.31458f };
			vLocal_122 = { 2290.332f, 1136.131f, 58.85706f };
			fLocal_125 = 21f;
			vLocal_123 = { 2334.453f, 1103.067f, 76.26603f };
			vLocal_124 = { 2297.846f, 1142.897f, 58.84243f };
			break;
		
		case 49:
			vLocal_121 = { 2379.442f, 1150.776f, 58.79632f };
			vLocal_122 = { 2327.658f, 1212.366f, 72.8333f };
			fLocal_125 = 12f;
			vLocal_123 = { 2374.064f, 1146.282f, 58.83331f };
			vLocal_124 = { 2320.895f, 1209.596f, 72.79299f };
			break;
		
		case 50:
			vLocal_121 = { -1179.405f, -355.2554f, 56.53003f };
			vLocal_122 = { -1198.064f, -357.8363f, 35.35551f };
			fLocal_125 = 12.5f;
			vLocal_123 = { -1178.385f, -361.8784f, 56.15081f };
			vLocal_124 = { -1197.104f, -364.7004f, 36.49475f };
			break;
		
		case 51:
			vLocal_121 = { -921.3846f, -384.94f, 137.0181f };
			vLocal_122 = { -912.4324f, -429.229f, 36.70113f };
			fLocal_125 = 16f;
			vLocal_123 = { -914.1658f, -387.9444f, 137.0794f };
			vLocal_124 = { -906.2534f, -424.691f, 47.11882f };
			break;
		
		case 52:
			vLocal_121 = { -740.2564f, 246.4529f, 132.2922f };
			vLocal_122 = { -718.3602f, 201.0042f, 80.95571f };
			fLocal_125 = 22f;
			vLocal_123 = { -726.6429f, 253.0676f, 132.3319f };
			vLocal_124 = { -705.5858f, 210.4336f, 78.70573f };
			break;
		
		case 53:
			vLocal_121 = { -771.2068f, 268.2729f, 132.1689f };
			vLocal_122 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_125 = 16f;
			vLocal_123 = { -770.8035f, 310.8625f, 137.4161f };
			vLocal_124 = { -763.0681f, 269.044f, 83.31474f };
			break;
		
		case 54:
			vLocal_121 = { 259.2205f, 135.4146f, 136.7083f };
			vLocal_122 = { 279.2396f, 128.1379f, 100.8233f };
			fLocal_125 = 16f;
			vLocal_123 = { 261.9694f, 142.9676f, 136.6889f };
			vLocal_124 = { 281.7203f, 134.9551f, 100.7704f };
			break;
		
		case 55:
			vLocal_121 = { 393.548f, -30.87166f, 152.6635f };
			vLocal_122 = { 369.9622f, -23.88461f, 88.35776f };
			fLocal_125 = 8f;
			vLocal_123 = { 390.5358f, -36.08882f, 152.7813f };
			vLocal_124 = { 368.1275f, -28.81888f, 88.69447f };
			break;
		
		case 56:
			vLocal_121 = { 114.3139f, -648.4297f, 261.8488f };
			vLocal_122 = { 131.0782f, -733.7684f, 39.34393f };
			fLocal_125 = 20f;
			vLocal_123 = { 124.8467f, -646.6575f, 261.8488f };
			vLocal_124 = { 140.0502f, -737.427f, 39.3493f };
			break;
		
		case 57:
			vLocal_121 = { -215.919f, -823.8436f, 126.0224f };
			vLocal_122 = { -193.2237f, -761.7781f, 27.91382f };
			fLocal_125 = 20f;
			vLocal_123 = { -225.397f, -820.3937f, 126.0812f };
			vLocal_124 = { -202.9433f, -758.257f, 27.47734f };
			break;
		
		case 58:
			vLocal_121 = { -296.4725f, -802.0815f, 95.40108f };
			vLocal_122 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_125 = 20f;
			vLocal_123 = { -305.4602f, -798.8369f, 95.48194f };
			vLocal_124 = { -285.7376f, -745.0959f, 49.57651f };
			break;
		
		case 59:
			vLocal_121 = { -292.3034f, -823.3569f, 95.37621f };
			vLocal_122 = { -258.5991f, -835.5632f, 27.97946f };
			fLocal_125 = 20f;
			vLocal_123 = { -288.9206f, -814.022f, 95.37556f };
			vLocal_124 = { -255.2116f, -826.256f, 27.7375f };
			break;
		
		case 60:
			vLocal_121 = { -256.3589f, -714.7838f, 110.1617f };
			vLocal_122 = { -212.9054f, -730.532f, 32.21946f };
			fLocal_125 = 20f;
			vLocal_123 = { -253.7723f, -705.6632f, 110.1736f };
			vLocal_124 = { -210.0588f, -722.6748f, 32.46536f };
			break;
		
		case 61:
			vLocal_121 = { 1808.214f, 1949.246f, 71.73707f };
			vLocal_122 = { 1837.906f, 2127.283f, 52.80491f };
			fLocal_125 = 9.75f;
			vLocal_123 = { 1802.786f, 1950.262f, 71.74002f };
			vLocal_124 = { 1831.994f, 2127.433f, 52.83893f };
			break;
		
		case 62:
			vLocal_121 = { 2388.733f, 2931.941f, 46.62681f };
			vLocal_122 = { 2426.681f, 2883.066f, 36.21524f };
			fLocal_125 = 10f;
			vLocal_123 = { 2392.547f, 2934.867f, 46.6268f };
			vLocal_124 = { 2430.333f, 2885.908f, 36.28148f };
			break;
		
		case 63:
			vLocal_121 = { 2700.056f, 4836.381f, 42.07854f };
			vLocal_122 = { 2685.673f, 4893.38f, 30.90867f };
			fLocal_125 = 20.75f;
			vLocal_123 = { 2685.672f, 4821.653f, 42.18471f };
			vLocal_124 = { 2672.812f, 4880.356f, 31.13311f };
			break;
		
		case 64:
			vLocal_121 = { -1053.446f, 4766.245f, 234.3251f };
			vLocal_122 = { -1040.263f, 4737.157f, 204.4916f };
			fLocal_125 = 5f;
			vLocal_123 = { -1051.414f, 4767.193f, 234.4293f };
			vLocal_124 = { -1037.954f, 4738.354f, 204.5282f };
			break;
	}
}

int func_355(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0xD87C
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

int func_356(int iParam0)//Position - 0xD8F7
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 8:
		case 12:
		case 13:
		case 20:
		case 31:
		case 32:
		case 46:
		case 47:
			return 1;
			break;
	}
	return 0;
}

int func_357(int iParam0)//Position - 0xD94A
{
	switch (iParam0)
	{
		case 33:
		case 34:
		case 35:
		case 36:
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
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_358(int iParam0, int iParam1)//Position - 0xD9BB
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, 0) || iParam1)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(*iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_359(int iParam0, int iParam1)//Position - 0xD9F0
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

int func_360()//Position - 0xDA75
{
	switch (Local_169.f_3)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_361(vector3 vParam0, float fParam1, int iParam2)//Position - 0xDAF8
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (func_377() < 10)
	{
		iVar0 = func_376();
		func_362(vParam0, fParam1, iVar0, iParam2);
	}
	return iVar0;
}

void func_362(vector3 vParam0, var uParam1, int iParam2, var uParam3)//Position - 0xDB25
{
	func_363(vParam0, 0f, 0f, 0f, uParam1, 0, iParam2, uParam3);
}

void func_363(vector3 vParam0, vector3 vParam1, var uParam2, int iParam3, int iParam4, var uParam5)//Position - 0xDB3F
{
	struct<12> Var0;
	
	if (func_372(CAM::_0xDC9DA9E8789F5246()) || uParam5)
	{
		if (Var0.f_A == 1)
		{
			func_371(&vParam0, &vParam1);
		}
		Var0 = { vParam0 };
		Var0.f_3 = { vParam1 };
		Var0.f_6 = uParam2;
		Var0.f_A = iParam3;
		if (func_366(Var0))
		{
			Global_24B2CE.f_2C.f_40 = func_365(CAM::_0xDC9DA9E8789F5246());
			func_364(Var0, iParam4);
		}
	}
}

void func_364(struct<12> Param0, int iParam1)//Position - 0xDBB5
{
	Global_24B2CE.f_16A[iParam1 /*12*/] = { Param0 };
	Global_24B2CE.f_16A[iParam1 /*12*/].f_9 = 1;
}

int func_365(int iParam0)//Position - 0xDBDE
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_24FBF9[iParam0 /*413*/].f_1;
	}
	return 0;
}

int func_366(struct<12> Param0)//Position - 0xDC00
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
			if (!func_367(Global_24B2CE.f_2C[iVar1 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_367(vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)//Position - 0xDC60
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
							if (func_370(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_368(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
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
							if (func_370(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_368(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
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

bool func_368(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0xDD99
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	fVar2 = (fParam3 * 0.7071068f);
	vVar0 = { vParam2 - Vector(fVar2, fVar2, fVar2) };
	vVar1 = { vParam2 + Vector(fVar2, fVar2, fVar2) };
	return func_369(vParam0, vParam1, vVar0, vVar1);
}

int func_369(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)//Position - 0xDDDD
{
	if (((((vParam0.x >= vParam2.x && vParam0.y >= vParam2.y) && vParam0.z >= vParam2.z) && vParam1.x <= vParam3.x) && vParam1.y <= vParam3.y) && vParam1.z <= vParam3.z)
	{
		return 1;
	}
	return 0;
}

int func_370(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)//Position - 0xDE34
{
	vector3 vVar0;
	
	vVar0 = { vParam2 - vParam0 };
	if ((SYSTEM::VMAG(vVar0) + fParam1) < fParam3)
	{
		return 1;
	}
	return 0;
}

void func_371(var uParam0, var uParam1)//Position - 0xDE5F
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

int func_372(int iParam0)//Position - 0xDEF6
{
	if (((func_375(iParam0, 1) || func_374(iParam0)) || func_104(iParam0, 0)) || func_373(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_373(int iParam0)//Position - 0xDF32
{
	if (!func_12(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1841F3[iParam0 /*790*/].f_23;
}

int func_374(int iParam0)//Position - 0xDF55
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18CD5B[iVar0 /*560*/] != 4294967295;
	}
	return 0;
}

bool func_375(int iParam0, bool bParam1)//Position - 0xDF76
{
	if (Global_1406BF != 0)
	{
		return func_365(iParam0) != 0;
	}
	return func_338(iParam0, bParam1);
}

int func_376()//Position - 0xDF9C
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

int func_377()//Position - 0xDFCE
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

bool func_378(char* sParam0, int iParam1, int iParam2)//Position - 0xE001
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_379(int iParam0)//Position - 0xE020
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_0";
		
		case 1:
			return "AMCH_1";
		
		case 2:
			return "AMCH_2";
		
		case 3:
			return "AMCH_3";
		
		case 4:
			return "AMCH_4";
		
		case 5:
			return "AMCH_5";
		
		case 6:
			return "AMCH_6";
		
		case 7:
			return "AMCH_7";
		
		case 8:
			return "AMCH_8";
		
		case 14:
			return "AMCH_9";
		
		case 9:
			return "AMCH_12";
		
		case 10:
			return "AMCH_13";
		
		case 11:
			return "AMCH_15";
		
		case 12:
			return "AMCH_16";
		
		case 15:
			return "AMCH_19";
		
		case 16:
			return "AMCH_20";
		
		case 17:
			return "AMCH_21";
		
		case 18:
			return "AMCH_22";
		
		case 13:
			return "AMCH_23";
		
		default:
	}
	return "";
}

char* func_380(int iParam0)//Position - 0xE129
{
	switch (iParam0)
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
		
		case 14:
			return "AMCH_9SLC";
		
		case 9:
			return "AMCH_12SLC";
		
		case 10:
			return "AMCH_13SLC";
		
		case 11:
			return "AMCH_15SLC";
		
		case 12:
			return "AMCH_16SLC";
		
		case 15:
			return "AMCH_19SLC";
		
		case 16:
			return "AMCH_20SLC";
		
		case 17:
			return "AMCH_21SLC";
		
		case 18:
			return "AMCH_22SLC";
		
		case 13:
			return "AMCH_23SLC";
		
		default:
	}
	return "";
}

char* func_381(int iParam0)//Position - 0xE232
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_BIG_0";
		
		case 1:
			return "AMCH_BIG_1";
		
		case 2:
			return "AMCH_BIG_2";
		
		case 3:
			return "AMCH_BIG_3";
		
		case 4:
			return "AMCH_BIG_4";
		
		case 5:
			return "AMCH_BIG_5";
		
		case 6:
			return "AMCH_BIG_6";
		
		case 7:
			return "AMCH_BIG_7";
		
		case 8:
			return "AMCH_BIG_8";
		
		case 14:
			return "AMCH_BIG_9";
		
		case 9:
			return "AMCH_BIG_12";
		
		case 10:
			return "AMCH_BIG_13";
		
		case 11:
			return "AMCH_BIG_15";
		
		case 12:
			return "AMCH_BIG_16";
		
		case 15:
			return "AMCH_BIG_19";
		
		case 16:
			return "AMCH_BIG_20";
		
		case 17:
			return "AMCH_BIG_21";
		
		case 18:
			return "AMCH_BIG_22";
		
		case 13:
			return "AMCH_BIG_23";
		
		default:
	}
	return "";
}

void func_382()//Position - 0xE33B
{
	if (!func_147())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_140740.f_9)
	{
		return;
	}
	func_143();
}

void func_383(var uParam0)//Position - 0xE368
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!func_357(iVar0) && !func_356(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { vLocal_119[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_384()//Position - 0xE3A9
{
	if (!func_360())
	{
		if (Local_169.f_3 == 14)
		{
			func_387();
		}
		Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_4.f_1 = func_346();
	}
	else if ((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 4) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 5)) && !func_386(CAM::_0xDC9DA9E8789F5246()))
	{
		func_385();
	}
}

void func_385()//Position - 0xE40D
{
	switch (Local_169.f_3)
	{
		case 0:
			unk_0x48EA99C287C11C46(8, 2);
			break;
		
		case 1:
			unk_0x48EA99C287C11C46(13, 2);
			break;
		
		case 2:
			unk_0x48EA99C287C11C46(4, 2);
			break;
		
		case 4:
			unk_0x48EA99C287C11C46(1, 2);
			break;
		
		case 3:
			unk_0x48EA99C287C11C46(2, 2);
			break;
		
		case 5:
			unk_0x48EA99C287C11C46(3, 2);
			break;
		
		case 6:
			unk_0x48EA99C287C11C46(11, 3);
			break;
		
		case 7:
			unk_0x48EA99C287C11C46(14, 1);
			break;
		
		case 8:
			unk_0x48EA99C287C11C46(29, 2);
			break;
		
		case 9:
			unk_0x48EA99C287C11C46(12, 2);
			break;
		
		case 10:
			unk_0x48EA99C287C11C46(10, 2);
			break;
		
		case 11:
			unk_0x48EA99C287C11C46(18, 2);
			break;
		
		case 12:
			unk_0x48EA99C287C11C46(20, 2);
			break;
		
		case 13:
			unk_0x48EA99C287C11C46(27, 2);
			break;
		
		case 15:
			unk_0x48EA99C287C11C46(26, 1);
			break;
		
		case 16:
			unk_0x48EA99C287C11C46(25, 1);
			break;
		
		case 17:
			unk_0x48EA99C287C11C46(22, 1);
			break;
		
		case 18:
			unk_0x48EA99C287C11C46(24, 1);
			break;
	}
	MISC::SET_BIT(&iLocal_140, 8);
}

bool func_386(int iParam0)//Position - 0xE556
{
	return func_14(iParam0, 0);
}

void func_387()//Position - 0xE565
{
	vLocal_119[0 /*3*/] = { 1083f, -231f, 60f };
	vLocal_119[1 /*3*/] = { 1024f, -325f, 60f };
	vLocal_119[2 /*3*/] = { 910f, -401f, 43f };
	vLocal_119[3 /*3*/] = { 721f, -457f, 26f };
	vLocal_119[4 /*3*/] = { 643f, -579f, 26f };
	vLocal_119[5 /*3*/] = { 590f, -851f, 26f };
	vLocal_119[6 /*3*/] = { 590f, -1023f, 16f };
	vLocal_119[7 /*3*/] = { 582f, -1205f, 24f };
	vLocal_119[8 /*3*/] = { 608f, -1335f, 16f };
	vLocal_119[9 /*3*/] = { 640f, -1434f, 16f };
	vLocal_119[10 /*3*/] = { 671f, -1742f, 20f };
	vLocal_119[11 /*3*/] = { 651f, -2046f, 16f };
	vLocal_119[12 /*3*/] = { 603f, -2505f, 9f };
	vLocal_119[13 /*3*/] = { 673f, -2582f, 4f };
	vLocal_119[14 /*3*/] = { 728f, -2594f, 10f };
	vLocal_119[15 /*3*/] = { 794f, -2624f, 27f };
	vLocal_119[16 /*3*/] = { -2663f, 2594f, 7.5f };
	vLocal_119[17 /*3*/] = { -1902f, 4617f, 30f };
	vLocal_119[18 /*3*/] = { -513f, 4427f, 40f };
	vLocal_119[19 /*3*/] = { 126f, 3366f, 40f };
	vLocal_119[20 /*3*/] = { 143f, 3418f, 36f };
	vLocal_119[21 /*3*/] = { 2822f, 4978f, 40f };
	vLocal_119[22 /*3*/] = { -162f, 4249f, 40f };
	vLocal_119[23 /*3*/] = { -408f, 2964f, 20f };
	vLocal_119[24 /*3*/] = { -181f, 2862f, 38f };
	vLocal_119[25 /*3*/] = { 2558f, 2201f, 24f };
	vLocal_119[26 /*3*/] = { 2950f, 803f, 8f };
	vLocal_119[27 /*3*/] = { 2369f, -409f, 80f };
	vLocal_119[28 /*3*/] = { 1906f, -755f, 84f };
	vLocal_119[29 /*3*/] = { -403f, -2333f, 40f };
	vLocal_119[30 /*3*/] = { -1429f, 2649f, 10f };
	vLocal_119[31 /*3*/] = { 219f, -2315f, 5f };
	vLocal_119[32 /*3*/] = { 350f, -2315f, 5f };
	vLocal_119[33 /*3*/] = { -1848f, -333f, 75f };
	vLocal_119[34 /*3*/] = { -693f, -608f, 69f };
	vLocal_119[35 /*3*/] = { -1461f, -582f, 53f };
	vLocal_119[36 /*3*/] = { -1553f, -546f, 59f };
	vLocal_119[37 /*3*/] = { 338f, -2758f, 23f };
	vLocal_119[38 /*3*/] = { 1985f, 6201f, 53f };
	vLocal_119[39 /*3*/] = { -713f, -1538f, 13f };
	vLocal_119[40 /*3*/] = { -659f, -1518f, 13f };
	vLocal_119[41 /*3*/] = { -620f, -1502f, 16f };
	vLocal_119[42 /*3*/] = { -445f, -1575f, 26f };
	vLocal_119[43 /*3*/] = { -373f, -1680f, 19f };
	vLocal_119[44 /*3*/] = { -212f, -1805f, 29f };
	vLocal_119[45 /*3*/] = { 47f, -2040f, 18f };
	vLocal_119[46 /*3*/] = { 223f, -2240f, 6f };
	vLocal_119[47 /*3*/] = { 218f, -2189f, 6f };
	vLocal_119[48 /*3*/] = { 2308f, 1124f, 78f };
	vLocal_119[49 /*3*/] = { 2349f, 1174f, 79f };
	vLocal_119[50 /*3*/] = { -1186f, -365f, 46f };
	vLocal_119[51 /*3*/] = { -916f, -407f, 93f };
	vLocal_119[52 /*3*/] = { -726f, 235f, 105f };
	vLocal_119[53 /*3*/] = { -774f, 286f, 112f };
	vLocal_119[54 /*3*/] = { 271f, 134f, 125f };
	vLocal_119[55 /*3*/] = { 377f, -28f, 125f };
	vLocal_119[56 /*3*/] = { 121f, -703f, 150f };
	vLocal_119[57 /*3*/] = { -204f, -784f, 74f };
	vLocal_119[58 /*3*/] = { -287f, -774f, 72f };
	vLocal_119[59 /*3*/] = { -272f, -824f, 71f };
	vLocal_119[60 /*3*/] = { -230f, -723f, 80f };
	vLocal_119[61 /*3*/] = { 1822f, 2044f, 62f };
	vLocal_119[62 /*3*/] = { 2410f, 2907f, 44f };
	vLocal_119[63 /*3*/] = { 2686f, 4858f, 36f };
	vLocal_119[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_388(int iParam0, bool bParam1)//Position - 0xEB28
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

void func_389(var uParam0, int iParam1)//Position - 0xEB8B
{
	if (func_312(CAM::_0xDC9DA9E8789F5246()) == 133 && iParam1)
	{
		Global_26862F.f_12C4 = uParam0;
	}
	else
	{
		Global_26862F.f_12C4 = 4294967295;
	}
}

void func_390(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xEBBC
{
	bool bVar0;
	
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
	}
	Global_26862F.f_127A = 4294967295;
	bVar0 = (func_104(CAM::_0xDC9DA9E8789F5246(), 0) && func_100(CAM::_0xDC9DA9E8789F5246()));
	if (bParam6)
	{
		func_388(21, 1);
	}
	else
	{
		func_406(iParam0, 4294967295);
		if (func_8(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_1806E7.f_3 = iParam0;
		}
		else
		{
			func_405(iParam0);
		}
		Global_1806E7.f_4 = 4294967295;
		if (func_8(CAM::_0xDC9DA9E8789F5246()))
		{
			MISC::SET_BIT(&(Global_1806E7.f_1), 5);
		}
		if ((func_157() && !func_156()) || func_155(CAM::_0xDC9DA9E8789F5246(), 21))
		{
			MISC::SET_BIT(&(Global_1806E7.f_1), 4);
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 17);
		MISC::SET_BIT(&(Global_1806E7.f_1), 20);
		if (func_404(iParam0))
		{
			func_403();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_400(fParam1);
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
		if (func_398(iParam0))
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
				func_396(1);
				if (func_255(0))
				{
					MISC::SET_BIT(&(Global_1806E7.f_1), 9);
				}
				MISC::SET_BIT(&(Global_1806E7.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_394(1);
			MISC::SET_BIT(&(Global_1806E7.f_1), 12);
		}
		if (bParam5)
		{
			func_393();
			MISC::SET_BIT(&(Global_1806E7.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_391(iParam0))
			{
				MISC::SET_BIT(&(Global_1806E7.f_1), 21);
			}
		}
	}
	Global_263374 = 1;
}

int func_391(int iParam0)//Position - 0xED86
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
	if (func_392())
	{
		return 1;
	}
	return 0;
}

int func_392()//Position - 0xEDE1
{
	switch (func_311())
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

void func_393()//Position - 0xEE0F
{
	MISC::SET_BIT(&(Global_26862F.f_1271), 0);
}

void func_394(bool bParam0)//Position - 0xEE23
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
		func_395(iVar0);
		iVar0++;
	}
}

void func_395(int iParam0)//Position - 0xEE5A
{
	Global_16C64.f_AC[iParam0] = 1;
	Global_16C64.f_AB = 1;
}

void func_396(int iParam0)//Position - 0xEE74
{
	if (func_397() && iParam0)
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

int func_397()//Position - 0xEEA9
{
	if ((((Global_EC6C9 != 4294967295 && Global_EC6C9 != 33) && Global_EC6C9 != 35) && Global_EC6C9 != 37) && Global_EC6C9 != 21)
	{
		return 1;
	}
	return 0;
}

int func_398(int iParam0)//Position - 0xEEEF
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_399(CAM::_0xDC9DA9E8789F5246()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_399(int iParam0)//Position - 0xEF2D
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

void func_400(float fParam0)//Position - 0xEF53
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_401())
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

int func_401()//Position - 0xEFBF
{
	switch (func_402())
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

int func_402()//Position - 0xEFF3
{
	return Global_6373;
}

void func_403()//Position - 0xEFFE
{
	Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_C8 = 0;
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11C4), 1);
}

int func_404(int iParam0)//Position - 0xF020
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_405(int iParam0)//Position - 0xF03A
{
	Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/] = iParam0;
}

void func_406(int iParam0, int iParam1)//Position - 0xF04F
{
	int iVar0;
	
	if (iParam0 != 4294967295 || iParam1 != 4294967295)
	{
		iVar0 = iParam0;
		if (iVar0 == 4294967295)
		{
			iVar0 = iParam1;
		}
		if (func_334(0) || func_334(func_333(iVar0)))
		{
			MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 2);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 2);
		}
	}
}

int func_407()//Position - 0xF0B5
{
	switch (Local_169.f_3)
	{
		case 18:
		case 16:
		case 15:
		case 17:
			return 1;
		
		default:
	}
	return 0;
}

void func_408()//Position - 0xF0E4
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

int func_409()//Position - 0xF1F6
{
	switch (Local_169.f_3)
	{
		case 1:
		case 6:
		case 11:
		case 12:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

void func_410()//Position - 0xF22B
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_169.f_3))
	{
		if (Local_169.f_3 == 1 || Local_169.f_3 == 6)
		{
			iVar0 = func_432(CAM::_0xDC9DA9E8789F5246(), 1);
			iVar1 = func_192(iVar0, 1);
			if (iVar1 < 11)
			{
				if (PED::IS_PED_IN_FLYING_VEHICLE(AUDIO::_0x0626A247D2405330()))
				{
					WEAPON::GIVE_WEAPON_TO_PED(AUDIO::_0x0626A247D2405330(), joaat("gadget_parachute"), 1, false, false);
					func_411(1);
				}
			}
			else
			{
				PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(CAM::_0xDC9DA9E8789F5246(), 1);
			}
		}
	}
}

void func_411(bool bParam0)//Position - 0xF29D
{
	int iVar0;
	
	if (PED::GET_PED_DRAWABLE_VARIATION(AUDIO::_0x0626A247D2405330(), 5) != 0)
	{
		PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 177, 1);
		PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(CAM::_0xDC9DA9E8789F5246(), func_199(585, 4294967295, 0));
		if (func_431())
		{
			PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(CAM::_0xDC9DA9E8789F5246(), 1931904776);
		}
		else if (func_430())
		{
			PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(CAM::_0xDC9DA9E8789F5246(), 2170442475);
		}
		if (func_427(3610, 4294967295, 4294967295))
		{
		}
		iVar0 = func_199(2040, 4294967295, 0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(CAM::_0xDC9DA9E8789F5246(), func_426(PLAYER::GET_PLAYER_PED(CAM::_0xDC9DA9E8789F5246()), iVar0));
		if (func_252(0))
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(CAM::_0xDC9DA9E8789F5246(), func_199(585, 4294967295, 0));
		}
		else
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(CAM::_0xDC9DA9E8789F5246(), func_425(Global_26A85D));
		}
		func_424(CAM::_0xDC9DA9E8789F5246(), iVar0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(CAM::_0xDC9DA9E8789F5246(), 5, func_417(AUDIO::_0x0626A247D2405330(), iVar0), func_416(AUDIO::_0x0626A247D2405330(), iVar0), 0);
		func_415(func_199(2040, 4294967295, 0), 1);
		Global_26862F.f_114 = 1;
		func_412(CAM::_0xDC9DA9E8789F5246(), 4294967295, 4294967295);
		if (bParam0)
		{
		}
	}
}

void func_412(int iParam0, int iParam1, int iParam2)//Position - 0xF39F
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_414();
		if (iParam2 == 4294967295)
		{
			iParam2 = func_199(2040, 4294967295, 0);
		}
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(iParam0, 5, func_417(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_416(PLAYER::GET_PLAYER_PED(iParam0), iParam2), 0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(iParam0, func_426(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(iParam0), 5, func_417(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_416(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_426(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		if (iParam1 == 4294967295)
		{
			iParam1 = func_199(585, 4294967295, 0);
		}
		if (func_252(1) && func_413(iParam0))
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, func_425(Global_26A85D));
		}
		else
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, iParam1);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_1C, 4))
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, Global_180614);
			PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(iParam0, 2514357004);
		}
		func_424(iParam0, iParam2);
		PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 177, 1);
	}
}

bool func_413(int iParam0)//Position - 0xF499
{
	return func_99(iParam0, 10);
}

void func_414()//Position - 0xF4A9
{
	Global_1160A = 0;
	Global_1160B = 4294967295;
	Global_1160C = 4294967295;
	Global_1160D = 4294967295;
	Global_1160E = 4294967295;
	Global_1160F = 4294967295;
}

void func_415(int iParam0, int iParam1)//Position - 0xF4CF
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_414();
		func_190(2040, iParam0, 4294967295, 1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(CAM::_0xDC9DA9E8789F5246(), 5, func_417(AUDIO::_0x0626A247D2405330(), iParam0), func_416(AUDIO::_0x0626A247D2405330(), iParam0), 0);
		func_424(CAM::_0xDC9DA9E8789F5246(), iParam0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(CAM::_0xDC9DA9E8789F5246(), func_426(AUDIO::_0x0626A247D2405330(), iParam0));
		if ((iParam1 && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330())) && PED::GET_PED_DRAWABLE_VARIATION(AUDIO::_0x0626A247D2405330(), 5) != 0)
		{
			func_412(CAM::_0xDC9DA9E8789F5246(), 4294967295, 4294967295);
		}
	}
}

int func_416(int iParam0, int iParam1)//Position - 0xF555
{
	if (iParam1 >= 62)
	{
		return (iParam1 - 62);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

var func_417(int iParam0, int iParam1)//Position - 0xF5B7
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != false;
	iVar1 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	iVar2 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	iVar3 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4), PED::GET_PED_TEXTURE_VARIATION(iParam0, 4));
	if ((((!bVar0 == Global_1160A || !iParam1 == Global_1160B) || !iVar1 == Global_1160C) || !iVar2 == Global_1160D) || !iVar3 == Global_1160E)
	{
		Global_1160A = bVar0;
		Global_1160B = iParam1;
		Global_1160C = iVar1;
		Global_1160D = iVar2;
		Global_1160E = iVar3;
		Global_1160F = func_418(iParam0, iParam1);
	}
	return Global_1160F;
}

int func_418(int iParam0, int iParam1)//Position - 0xF687
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 69;
	}
	else if (iParam1 > 51)
	{
		iVar3 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar3 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar3 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 0;
	}
	iVar4 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 240476421, 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2795734084, 8))
			{
				return (2 + iVar3);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 350281921, 8))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3407826235, 8))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3109595566, 8))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2170337719, 8))
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2795734084, 8))
			{
				return (7 + iVar3);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 350281921, 8))
			{
				return (8 + iVar3);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3407826235, 8))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3109595566, 8))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2170337719, 8))
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		return func_423(iParam0, iParam1);
	}
	if (func_422(iParam0))
	{
		if (bVar1)
		{
			return (8 + iVar3);
		}
		else
		{
			return (2 + iVar3);
		}
	}
	if (iVar0 > 15)
	{
		iVar5 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
		if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 655081063, 0))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3764877471, 0))
		{
			if (bVar1)
			{
				return (6 + iVar3);
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3581268889, 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2412047274, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3977318242, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3315498572, 0))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3988198483, 0))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 4236554734, 0))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1536649085, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar5, 350281921, 0))
		{
			iVar6 = func_421(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar3);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_420(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar3);
						break;
					
					default:
						iVar0 = func_420(iVar5);
						break;
					}
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 248194463, 0))
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2947481270, 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 396458410, 0))
		{
			iVar7 = func_419(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_420(iVar5);
					break;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3515131827, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3175734607, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2192107526, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1784133476, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2687017741, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1976716889, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2099109084, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2806526264, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2575799735, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar5, 1431529976, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3020868293, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar5, 1723403459, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2887353267, 0))
				{
					return func_423(iParam0, iParam1) + 15;
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 912543594, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((FILE::_0x341DE7ED1D2A1BFD(iVar5, 3208708908, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar5, 103539798, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar5, 3300263412, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2044466679, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (bVar1)
			{
				return (4 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2274210138, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3230704479, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2875160829, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (7 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3241125037, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2936078416, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3853675954, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3547384111, 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_423(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2308552066, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2206820464, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3509027759, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3422517591, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 700658917, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1714969731, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 745826556, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1055526375, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 492620493, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3878346342, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 4192142290, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3561175191, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 137011325, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3653355204, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2943480357, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2175211152, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2787434379, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 947651647, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2788596422, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar5, 1927516484, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2508519779, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3284162009, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2969153612, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3745123536, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3466488725, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return (55 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1690933245, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1360588936, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2136821028, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1830529185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 4025701093, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 201427653, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 967829025, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3609928037, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3028409363, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3315498572, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2481756905, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 263623295, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3985067549, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 4205963378, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3547108821, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return func_423(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 490219883, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1208450825, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 297865853, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 602650322, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 905042630, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1204125293, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 310055897, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 606713654, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return func_423(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1831422288, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3456830450, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 655638019, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 4195902460, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3597311137, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3896754259, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1380605304, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_423(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3988198483, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 4236554734, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1711219157, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1466664110, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2326391594, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 245429010, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 15161247, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return (48 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2044923487, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3379614369, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3756588945, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2155823279, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3859427410, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 695107163, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2795734084, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 350281921, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2170337719, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1877382859, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2919088559, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2947481270, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (1 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3754530791, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1207461955, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return func_423(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3509027759, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3509027759, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3355441939, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2308552066, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (4 + iVar3);
			}
			else
			{
				return func_423(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2631096120, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return func_423(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3355441939, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1);
			}
			else
			{
				return func_423(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 398019854, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_423(iParam0, iParam1) + 15;
			}
			else
			{
				return func_423(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1965569012, 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2026620439, 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2884070230, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if ((FILE::_0x341DE7ED1D2A1BFD(iVar5, 2276967906, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar5, 320460654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar5, 3468832093, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_420(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 9:
				return (2 + iVar3);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (4 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			}
	}
	return (1 + iVar3);
	return 0;
}

int func_419(int iParam0, int iParam1)//Position - 0x11880
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 140732128, iParam1))
	{
		iVar0 = 0;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1863955539, iParam1))
	{
		iVar0 = 1;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2106216756, iParam1))
	{
		iVar0 = 2;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3533503320, iParam1))
	{
		iVar0 = 3;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1627756587, iParam1))
	{
		iVar0 = 4;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 684992453, iParam1))
	{
		iVar0 = 5;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 916636514, iParam1))
	{
		iVar0 = 6;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2355588846, iParam1))
	{
		iVar0 = 7;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 441715397, iParam1))
	{
		iVar0 = 8;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 264959411, iParam1))
	{
		iVar0 = 9;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3167131331, iParam1))
	{
		iVar0 = 10;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3474242399, iParam1))
	{
		iVar0 = 11;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 153792394, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3622096127, iParam1))
	{
		iVar0 = 13;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 572416369, iParam1))
	{
		iVar0 = 14;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 4098852308, iParam1))
	{
		iVar0 = 15;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1322269404, iParam1))
	{
		iVar0 = 16;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 548036233, iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_420(int iParam0)//Position - 0x11A20
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 821147517, 0))
	{
		iVar0 = 0;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2055293595, 0))
	{
		iVar0 = 1;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2302404624, 0))
	{
		iVar0 = 2;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1458930564, 0))
	{
		iVar0 = 3;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3248380212, 0))
	{
		iVar0 = 4;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1943944625, 0))
	{
		iVar0 = 5;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2295097229, 0))
	{
		iVar0 = 6;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2048281121, 0))
	{
		iVar0 = 7;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 4184983770, 0))
	{
		iVar0 = 8;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2900078511, 0))
	{
		iVar0 = 9;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 4150140785, 0))
	{
		iVar0 = 10;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 19149565, 0))
	{
		iVar0 = 11;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 310957510, 0))
	{
		iVar0 = 12;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 742787396, 0))
	{
		iVar0 = 13;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2690052464, 0))
	{
		iVar0 = 14;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3202756242, 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_421(int iParam0, int iParam1)//Position - 0x11B8D
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3424892835, iParam1))
	{
		iVar0 = 0;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3120042828, iParam1))
	{
		iVar0 = 1;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3426269137, iParam1))
	{
		iVar0 = 2;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3117486850, iParam1))
	{
		iVar0 = 3;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2947481270, iParam1))
	{
		iVar0 = 4;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2639813129, iParam1))
	{
		iVar0 = 5;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2189108303, iParam1))
	{
		iVar0 = 6;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1893564692, iParam1))
	{
		iVar0 = 7;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1710451520, iParam1))
	{
		iVar0 = 8;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1416808511, iParam1))
	{
		iVar0 = 9;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1641506460, iParam1))
	{
		iVar0 = 10;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 699233865, iParam1))
	{
		iVar0 = 11;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_422(int iParam0)//Position - 0x11CD1
{
	if (FILE::_0x341DE7ED1D2A1BFD(FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4), PED::GET_PED_TEXTURE_VARIATION(iParam0, 4)), 1052059919, 0))
	{
		return 1;
	}
	return 0;
}

int func_423(int iParam0, int iParam1)//Position - 0x11D00
{
	if (iParam1 > 69)
	{
		return 69;
	}
	if (iParam1 > 61)
	{
		return 61;
	}
	if (iParam1 == 53 || iParam1 == 54)
	{
		return 61;
	}
	if (iParam1 > 51)
	{
		return 51;
	}
	if (iParam1 > 46)
	{
		return 51;
	}
	if (iParam1 > 26)
	{
		return 50;
	}
	if (iParam1 > 0)
	{
		return 49;
	}
	return 48;
}

void func_424(int iParam0, int iParam1)//Position - 0x11D7E
{
	if (iParam1 > 61)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 3746739837);
	}
	else if (iParam1 > 51)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1269440357);
	}
	else if (iParam1 > 46)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1766664132);
	}
	else if (iParam1 > 26)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1277738372);
	}
	else if (iParam1 > 0)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1269440357);
	}
	else
	{
		PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
	}
}

int func_425(var uParam0)//Position - 0x11DF4
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 1:
			return 9;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 8;
			break;
		
		case 7:
			return 11;
			break;
		
		case 8:
			return 11;
			break;
		
		case 9:
			return 6;
			break;
		
		case 10:
			return 6;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 10;
			break;
	}
	return 0;
}

int func_426(int iParam0, int iParam1)//Position - 0x11EAC
{
	return 0;
}

int func_427(int iParam0, int iParam1, int iParam2)//Position - 0x11EB5
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_16();
	}
	iVar1 = func_429(iParam0, iParam1);
	uVar2 = func_428(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_428(int iParam0)//Position - 0x11EF2
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

int func_429(int iParam0, int iParam1)//Position - 0x1220A
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_16();
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

bool func_430()//Position - 0x12502
{
	return DLC::IS_DLC_PRESENT(1428761799);
}

bool func_431()//Position - 0x12513
{
	return DLC::IS_DLC_PRESENT(3289090928);
}

int func_432(int iParam0, bool bParam1)//Position - 0x12524
{
	if (bParam1)
	{
	}
	return func_196(iParam0);
}

void func_433()//Position - 0x12537
{
	vector3 vVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	int iVar5;
	vector3 vVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	var uVar10;
	vector3 vVar11;
	float fVar12;
	
	if ((((!func_7(CAM::_0xDC9DA9E8789F5246()) && !func_154(CAM::_0xDC9DA9E8789F5246())) && !func_306()) && !func_444(CAM::_0xDC9DA9E8789F5246(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) && !func_443(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			fVar4 = 2.147484E+09f;
			iVar5 = 4294967295;
			vVar6 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
			bVar7 = func_5(Local_169.f_3);
			bVar8 = PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0);
			bVar9 = func_441();
			iVar2 = 0;
			while (iVar2 < 10)
			{
				uVar10 = Local_169.f_43[iVar2 /*2*/].f_1;
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar10) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(NETWORK::NET_TO_VEH(uVar10), 0))
				{
					if (!bVar9 && bVar7)
					{
						if (bVar8 && PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0) == NETWORK::NET_TO_VEH(uVar10))
						{
							func_328(1);
						}
					}
					MISC::SET_BIT(&uVar3, iVar2);
					if (bVar7 && func_38(Local_169.f_3, iVar2, &vVar0, &uVar1))
					{
						vVar11 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_VEH(uVar10), 1) };
						if (SYSTEM::VDIST(vVar11, vVar0) <= 10f)
						{
							fVar12 = SYSTEM::VDIST(vVar11, vVar6);
							if (fVar12 < fVar4)
							{
								fVar4 = fVar12;
								iVar5 = iVar2;
							}
						}
					}
				}
				iVar2++;
			}
			if (func_39(Local_169.f_3))
			{
				MISC::SET_BIT(&uVar3, 31);
			}
			Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_7 = uVar3;
			if (func_5(Local_169.f_3))
			{
				if ((PED::IS_PED_IN_FLYING_VEHICLE(AUDIO::_0x0626A247D2405330()) || (ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330()) && !PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()))) || func_17(4294967295, 0))
				{
					if ((fVar4 < 2.147484E+09f && iVar5 >= 0) && iVar5 < 10)
					{
						if (func_38(Local_169.f_3, iVar5, &vVar0, &uVar1))
						{
							func_440(vVar0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, 3212836864);
							func_439(vVar0, 1, 0);
							func_435(10, 0, 0, 0, 0);
							MISC::SET_BIT(&iLocal_140, 5);
						}
					}
				}
				else
				{
					func_434();
				}
			}
		}
	}
	else
	{
		func_434();
	}
}

void func_434()//Position - 0x12773
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 5))
	{
		func_162();
		func_160();
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 5);
		func_159();
	}
}

void func_435(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1279A
{
	if (Global_252F9E.f_761.f_2B2.f_10 != func_96())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[Global_252F9E.f_761.f_2B2.f_10 /*413*/].f_191, 0) && func_436())
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

int func_436()//Position - 0x12839
{
	if (((func_211(CAM::_0xDC9DA9E8789F5246()) == 229 || func_211(CAM::_0xDC9DA9E8789F5246()) == 191) || func_438()) || func_437())
	{
		return 0;
	}
	return 1;
}

bool func_437()//Position - 0x12879
{
	return Global_1805F4;
}

int func_438()//Position - 0x12885
{
	if (Global_440000 == 6)
	{
		return 1;
	}
	return 0;
}

void func_439(vector3 vParam0, int iParam1, int iParam2)//Position - 0x1289A
{
	Global_24B2CE.f_2C.f_31 = { vParam0 };
	Global_24B2CE.f_2C.f_34 = iParam1;
	Global_24B2CE.f_2C.f_35 = iParam2;
}

void func_440(vector3 vParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x128C4
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
	if (func_372(CAM::_0xDC9DA9E8789F5246()))
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

int func_441()//Position - 0x129ED
{
	if (((((func_442(CAM::_0xDC9DA9E8789F5246()) || func_157()) || func_156()) || func_155(CAM::_0xDC9DA9E8789F5246(), 21)) || func_8(CAM::_0xDC9DA9E8789F5246())) || func_7(CAM::_0xDC9DA9E8789F5246()))
	{
		return 1;
	}
	return 0;
}

int func_442(int iParam0)//Position - 0x12A45
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iVar0 /*560*/].f_1, 7);
	}
	return 0;
}

int func_443(int iParam0)//Position - 0x12A6B
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

int func_444(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)//Position - 0x12AAA
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
		if (func_454(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_290(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_453(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_452(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_451(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_450(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_449(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_448(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_447(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_446(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_445(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_445(int iParam0)//Position - 0x12BBD
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_291(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_446(int iParam0, bool bParam1)//Position - 0x12C04
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
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_96())
			{
				return func_291(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 12;
			}
		}
	}
	return 0;
}

int func_447(int iParam0)//Position - 0x12C92
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_291(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_448(int iParam0)//Position - 0x12CD9
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_291(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_449(int iParam0)//Position - 0x12D20
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_96())
			{
				return func_291(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 8;
			}
		}
	}
	return 0;
}

int func_450(int iParam0)//Position - 0x12D80
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_291(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_451(int iParam0)//Position - 0x12DC7
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_291(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 7;
			}
		}
	}
	return 0;
}

int func_452(int iParam0)//Position - 0x12E0D
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_291(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 4;
			}
		}
	}
	return 0;
}

int func_453(int iParam0)//Position - 0x12E53
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_291(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 1;
			}
		}
	}
	return 0;
}

int func_454(int iParam0)//Position - 0x12E99
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_291(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 0;
			}
		}
	}
	return 0;
}

void func_455(bool bParam0, bool bParam1)//Position - 0x12EDF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	
	if (func_512())
	{
		if (bParam1)
		{
			iVar0 = NETSHOP::_NETWORK_SHOP_BASKET_START();
			if (func_94(CAM::_0xDC9DA9E8789F5246()))
			{
				iVar1 = func_314();
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
				{
					iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
					{
						iVar0 = iVar3;
					}
				}
			}
			if (iVar0 >= 0)
			{
				iVar4 = 0;
				while (iVar4 < func_511())
				{
					switch (Local_169.f_3)
					{
						case 14:
							if (!func_357(iVar4) && !func_356(iVar4))
							{
								func_460("AMCH_BRIDGE", bParam0, iVar0, iVar4);
							}
							break;
					}
					iVar4++;
				}
			}
		}
	}
	if (func_41())
	{
		iVar5 = 0;
		while (iVar5 < 10)
		{
			if (((!bParam0 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_169.f_43[iVar5 /*2*/].f_1)) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(NETWORK::NET_TO_VEH(Local_169.f_43[iVar5 /*2*/].f_1), 0)) && VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_169.f_43[iVar5 /*2*/].f_1), 4294967295, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_162[iVar5]))
				{
					iLocal_162[iVar5] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_169.f_43[iVar5 /*2*/].f_1));
					HUD::SET_BLIP_SPRITE(iLocal_162[iVar5], func_459(iVar5));
					HUD::SET_BLIP_PRIORITY(iLocal_162[iVar5], 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_162[iVar5], func_458(iVar5));
					func_456(&(iLocal_162[iVar5]), 9);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
				{
					vVar6 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
					if (SYSTEM::VDIST(vVar6, unk_0x8000C77B5F336760(NETWORK::NET_TO_VEH(Local_169.f_43[iVar5 /*2*/].f_1), 1)) <= 150f)
					{
						HUD::_0x75A16C3DA34F1245(iLocal_162[iVar5], 1);
					}
					else
					{
						HUD::_0x75A16C3DA34F1245(iLocal_162[iVar5], 0);
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_162[iVar5]))
			{
				HUD::REMOVE_BLIP(&(iLocal_162[iVar5]));
			}
			iVar5++;
		}
	}
}

void func_456(var uParam0, int iParam1)//Position - 0x130C7
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_457(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_457(int iParam0)//Position - 0x130ED
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

char* func_458(int iParam0)//Position - 0x13355
{
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_169.f_43[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_169.f_43[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_169.f_43[iParam0 /*2*/]) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(Local_169.f_43[iParam0 /*2*/]))
	{
		return "AMCH_BIKE";
	}
	else
	{
		return "AMBL_VEH";
	}
	return "";
}

int func_459(int iParam0)//Position - 0x133C8
{
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_169.f_43[iParam0 /*2*/]))
	{
		return 64;
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_169.f_43[iParam0 /*2*/]))
	{
		return 423;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_169.f_43[iParam0 /*2*/]) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(Local_169.f_43[iParam0 /*2*/]))
	{
		return 348;
	}
	return 225;
}

void func_460(char* sParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1342F
{
	vector3 vVar0;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_1535[iParam2 /*12*/].f_8[func_348(iParam3)], func_347(iParam3)) && !bParam1)
	{
		vVar0 = { func_510(iParam3) };
		if (!HUD::DOES_BLIP_EXIST(uLocal_161[iParam3]))
		{
			if (!func_509(vVar0, 0f, 0f, 0f, 0) && !func_509(vVar0, 0f, 0f, -2000f, 0))
			{
				uLocal_161[iParam3] = HUD::ADD_BLIP_FOR_COORD(vVar0);
				HUD::SET_BLIP_PRIORITY(uLocal_161[iParam3], 9);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_161[iParam3], sParam0);
				func_461(uLocal_161[iParam3], 25, 1152319488, 1137180672);
				func_456(&(uLocal_161[iParam3]), 12);
				HUD::_0x75A16C3DA34F1245(uLocal_161[iParam3], 1);
			}
		}
		else if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::SET_BLIP_ALPHA(uLocal_161[iParam3], 255);
		}
		else
		{
			func_461(uLocal_161[iParam3], 25, 1152319488, 1137180672);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(uLocal_161[iParam3]))
	{
		HUD::REMOVE_BLIP(&(uLocal_161[iParam3]));
		if (!bParam1)
		{
			unk_0x1190AB7024CBD8CB(4294967295, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", 0);
		}
	}
}

void func_461(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x13556
{
	HUD::SET_BLIP_ALPHA(iParam0, func_462(iParam0, iParam1, fParam2, fParam3));
}

int func_462(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x13570
{
	float fVar0;
	
	if (!func_508(Global_252F9E) && !func_75())
	{
		fVar0 = func_464(iParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_463();
		}
		return (SYSTEM::ROUND((SYSTEM::TO_FLOAT((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_463()//Position - 0x135BE
{
	if (func_375(Global_252F9E, 1))
	{
		return 50;
	}
	return 0;
}

float func_464(int iParam0, float fParam1, float fParam2)//Position - 0x135D8
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	iVar0 = Global_252F9E;
	vVar2 = { func_507(iParam0) };
	vVar2.z = 0f;
	if (Global_1417C1 || func_503())
	{
		if (func_502(iVar0))
		{
			vVar3 = { func_467(iVar0) };
		}
		else if (func_466(iVar0))
		{
			vVar3 = { func_465(iVar0) };
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

Vector3 func_465(int iParam0)//Position - 0x13688
{
	int iVar0;
	
	if (func_466(iParam0))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0);
		}
	}
	return 0f, 0f, 0f;
}

int func_466(int iParam0)//Position - 0x136BC
{
	int iVar0;
	
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
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

Vector3 func_467(int iParam0)//Position - 0x13718
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
	
	if (iParam0 == func_96())
	{
	}
	if (func_501(iParam0))
	{
		iVar0 = func_500(iParam0);
		if (iVar0 != func_96())
		{
			if (!func_499(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_252F9E.f_290[iVar0 /*3*/][1]))
				{
					return unk_0x8000C77B5F336760(Global_252F9E.f_290[iVar0 /*3*/][1], 0);
				}
				else
				{
					return Global_24FBF9[func_500(iParam0) /*413*/].f_135.f_8;
				}
			}
			else
			{
				iVar1 = func_495(iVar0);
				if (!iVar1 == 4294967295)
				{
					return Global_197632.f_2A[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_494(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_26862F.f_126))
		{
			return unk_0x8000C77B5F336760(Global_26862F.f_126, 0);
		}
	}
	else if (func_452(iParam0) && !func_493(iParam0))
	{
		iVar2 = Global_24FBF9[iParam0 /*413*/].f_135.f_7;
		if (iVar2 != func_96())
		{
			iVar3 = func_495(iVar2);
			if (!iVar3 == 4294967295)
			{
				return Global_197632.f_2A[iVar3 /*3*/];
			}
		}
	}
	else if (func_450(iParam0) && !func_492(iParam0))
	{
		if (func_502(iParam0) && func_491())
		{
			return Global_197632.f_2A[Global_24FBF9[iParam0 /*413*/].f_135.f_4 /*3*/];
		}
		iVar4 = Global_24FBF9[iParam0 /*413*/].f_135.f_7;
		if (iVar4 != func_96())
		{
			if (func_490(iVar4))
			{
				iVar5 = func_486(iVar4);
				if (iVar5 != 4294967295)
				{
					return Global_197632.f_2A[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_449(iParam0))
	{
		iVar6 = func_485(iParam0);
		if (iVar6 != func_96())
		{
			if (!func_484(iVar6))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_252F9E.f_2F1[iVar6]))
				{
					return unk_0x8000C77B5F336760(Global_252F9E.f_2F1[iVar6], 0);
				}
				else
				{
					return Global_24FBF9[func_485(iParam0) /*413*/].f_135.f_F;
				}
			}
			else
			{
				iVar7 = func_486(iVar6);
				if (!iVar7 == 4294967295)
				{
					return Global_197632.f_2A[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_483(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_26862F.f_128))
		{
			return unk_0x8000C77B5F336760(Global_26862F.f_128, 0);
		}
	}
	else if (func_448(iParam0) && !func_482(iParam0))
	{
		iVar8 = Global_24FBF9[iParam0 /*413*/].f_135.f_7;
		if (iVar8 != func_96())
		{
			if (func_481(iVar8))
			{
				iVar9 = func_477(iVar8);
				if (iVar9 != 4294967295)
				{
					return func_476(iVar9);
				}
			}
		}
	}
	else if (func_447(iParam0) && !func_475(iParam0))
	{
		iVar10 = Global_24FBF9[iParam0 /*413*/].f_135.f_7;
		if (iVar10 != func_96())
		{
			if (func_474(iVar10))
			{
				iVar11 = func_470(iVar10);
				if (iVar11 != 4294967295)
				{
					return Global_197632.f_2A[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_446(iParam0, 0))
	{
		iVar12 = func_469(iParam0);
		if (iVar12 != func_96())
		{
			if (!func_468(iVar12))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_252F9E.f_312[iVar12]))
				{
					return unk_0x8000C77B5F336760(Global_252F9E.f_312[iVar12], 0);
				}
				else
				{
					return Global_18CD5B[func_469(iParam0) /*560*/].f_225;
				}
			}
			else
			{
				iVar13 = func_470(iVar12);
				if (!iVar13 == 4294967295)
				{
					return Global_197632.f_2A[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_445(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	if (func_448(iParam0))
	{
		return func_476(Global_24FBF9[iParam0 /*413*/].f_135.f_4);
	}
	return Global_197632.f_2A[Global_24FBF9[iParam0 /*413*/].f_135.f_4 /*3*/];
}

int func_468(int iParam0)//Position - 0x13B03
{
	if (iParam0 != func_96())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_135.f_3, 4);
	}
	return 0;
}

int func_469(int iParam0)//Position - 0x13B2B
{
	if (iParam0 == func_96())
	{
		return iParam0;
	}
	return Global_24FBF9[iParam0 /*413*/].f_135.f_7;
}

int func_470(int iParam0)//Position - 0x13B4F
{
	int iVar0;
	
	if (iParam0 != func_96())
	{
		iVar0 = func_473(iParam0);
		if (iVar0 != 0)
		{
			return func_471(iVar0);
		}
	}
	return 4294967295;
}

int func_471(int iParam0)//Position - 0x13B78
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 123)
	{
		if (func_291(iVar0) == 11)
		{
			if (func_472(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_472(int iParam0)//Position - 0x13BAF
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

int func_473(int iParam0)//Position - 0x13C26
{
	if (iParam0 != func_96())
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_110;
	}
	return 0;
}

int func_474(int iParam0)//Position - 0x13C4A
{
	if (iParam0 != func_96())
	{
		if (Global_1841F3[iParam0 /*790*/].f_111.f_110 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_475(int iParam0)//Position - 0x13C73
{
	if (iParam0 != func_96())
	{
		if (func_447(iParam0) && Global_24FBF9[iParam0 /*413*/].f_135.f_7 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_476(int iParam0)//Position - 0x13CA8
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

int func_477(int iParam0)//Position - 0x13DB3
{
	int iVar0;
	
	if (iParam0 != func_96())
	{
		iVar0 = func_480(iParam0);
		if (iVar0 != 0)
		{
			return func_478(iVar0);
		}
	}
	return 4294967295;
}

int func_478(int iParam0)//Position - 0x13DDC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 123)
	{
		if (func_291(iVar0) == 11)
		{
			if (func_479(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_479(int iParam0)//Position - 0x13E13
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

int func_480(int iParam0)//Position - 0x13E8A
{
	if (iParam0 != func_96())
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_139;
	}
	return 0;
}

int func_481(int iParam0)//Position - 0x13EAE
{
	if (iParam0 != func_96())
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_139 != 0;
	}
	return 0;
}

int func_482(int iParam0)//Position - 0x13ED4
{
	if (iParam0 != func_96())
	{
		if (func_448(iParam0) && Global_24FBF9[iParam0 /*413*/].f_135.f_7 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_483(int iParam0)//Position - 0x13F09
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_291(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 10;
			}
		}
	}
	return 0;
}

int func_484(int iParam0)//Position - 0x13F50
{
	if (iParam0 != func_96())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_135.f_2, 6);
	}
	return 0;
}

int func_485(int iParam0)//Position - 0x13F78
{
	if (iParam0 == func_96())
	{
		return iParam0;
	}
	return Global_24FBF9[iParam0 /*413*/].f_135.f_7;
}

int func_486(int iParam0)//Position - 0x13F9C
{
	int iVar0;
	
	if (iParam0 == func_96())
	{
		return 4294967295;
	}
	iVar0 = func_489(iParam0);
	if (!iVar0 == 0)
	{
		return func_487(iVar0);
	}
	return 4294967295;
}

int func_487(int iParam0)//Position - 0x13FCB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 123)
	{
		if (func_291(iVar0) == 9)
		{
			if (func_488(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_488(int iParam0)//Position - 0x14003
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

int func_489(int iParam0)//Position - 0x1408A
{
	if (iParam0 == func_96())
	{
		return 0;
	}
	return Global_1841F3[iParam0 /*790*/].f_111.f_106;
}

int func_490(int iParam0)//Position - 0x140AE
{
	if (iParam0 != func_96())
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_106 != 0;
	}
	return 0;
}

int func_491()//Position - 0x140D4
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_197632.f_CED, 13) || Global_197632.f_882)
	{
		return 1;
	}
	return 0;
}

int func_492(int iParam0)//Position - 0x140FE
{
	if (iParam0 == func_96())
	{
		return 0;
	}
	if (func_450(iParam0) && Global_24FBF9[iParam0 /*413*/].f_135.f_7 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_493(int iParam0)//Position - 0x14137
{
	if (iParam0 == func_96())
	{
		return 0;
	}
	if (func_452(iParam0) && Global_24FBF9[iParam0 /*413*/].f_135.f_7 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_494(int iParam0)//Position - 0x14170
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_291(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 6;
			}
		}
	}
	return 0;
}

int func_495(int iParam0)//Position - 0x141B6
{
	int iVar0;
	
	if (iParam0 == func_96())
	{
		return 4294967295;
	}
	iVar0 = func_498(iParam0);
	if (!iVar0 == 0)
	{
		return func_496(iVar0);
	}
	return 4294967295;
}

int func_496(int iParam0)//Position - 0x141E5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 123)
	{
		if (func_497(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_497(int iParam0)//Position - 0x14211
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

int func_498(int iParam0)//Position - 0x143CC
{
	if (iParam0 == func_96())
	{
		return 0;
	}
	return Global_1841F3[iParam0 /*790*/].f_111.f_AE[5 /*12*/];
}

int func_499(int iParam0)//Position - 0x143F2
{
	if (iParam0 != func_96())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_135, 6);
	}
	return 0;
}

int func_500(int iParam0)//Position - 0x14418
{
	if (iParam0 == func_96())
	{
		return iParam0;
	}
	return Global_24FBF9[iParam0 /*413*/].f_135.f_7;
}

int func_501(int iParam0)//Position - 0x1443C
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_96())
			{
				return func_291(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 5;
			}
		}
	}
	return 0;
}

int func_502(int iParam0)//Position - 0x1449B
{
	if (iParam0 != func_96())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295;
		}
		else if ((Global_140859 && iParam0 == CAM::_0xDC9DA9E8789F5246()) && func_12(iParam0, 1, 0))
		{
			return Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295;
		}
	}
	return 0;
}

int func_503()//Position - 0x14501
{
	if ((func_506() || func_505()) || func_504(CAM::_0xDC9DA9E8789F5246()))
	{
		return 1;
	}
	return 0;
}

bool func_504(int iParam0)//Position - 0x1452D
{
	if (iParam0 == func_96())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18C89A[iParam0 /*38*/].f_1D, 20);
}

bool func_505()//Position - 0x14552
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D00, 1);
}

bool func_506()//Position - 0x14563
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 5);
}

Vector3 func_507(int iParam0)//Position - 0x14574
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

int func_508(int iParam0)//Position - 0x145B3
{
	if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_44.f_2, 9) && !(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_44.f_2, 6) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_44.f_2, 7))) || ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_44.f_2, 6) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_44.f_2, 7)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_44.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

bool func_509(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x1464E
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_510(int iParam0)//Position - 0x14695
{
	switch (Local_169.f_3)
	{
		case 14:
			return vLocal_160[iParam0 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_511()//Position - 0x146BC
{
	switch (Local_169.f_3)
	{
		case 14:
			return 65;
		
		default:
	}
	return 0;
}

int func_512()//Position - 0x146DA
{
	switch (Local_169.f_3)
	{
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_513()//Position - 0x146F7
{
	switch (Local_169.f_3)
	{
		case 4294967295:
			break;
		
		default:
			return 0;
	}
	return 0;
}

void func_514(var uParam0, char* sParam1)//Position - 0x14717
{
	char* sVar0;
	
	if (func_305(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_208(sParam1))
	{
		sVar0 = sParam1;
	}
	func_135(uParam0, sVar0, 0, 0, 4294967295, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
}

char* func_515(int iParam0)//Position - 0x14756
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

int func_516(int iParam0, int iParam1)//Position - 0x1495F
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_517(int iParam0)//Position - 0x14975
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

int func_518(var uParam0, bool bParam1, bool bParam2)//Position - 0x149CC
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

void func_519(int iParam0)//Position - 0x14A13
{
	if (!HUD::IS_RADAR_HIDDEN() && !CAM::IS_SCREEN_FADED_OUT())
	{
		switch (iParam0)
		{
			case 0:
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_163, iParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (func_5(Local_169.f_3))
						{
							if (Local_169.f_3 == 12)
							{
								func_287("AMCH_AIRAVI", 30000);
							}
							else
							{
								func_287("AMCH_AIRAV", 30000);
							}
						}
						else if (func_39(Local_169.f_3))
						{
							func_287("AMCH_BIKEAV", 30000);
						}
						func_286(1);
						MISC::SET_BIT(&iLocal_163, iParam0);
					}
				}
				break;
			
			case 1:
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_163, iParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						func_287("AMCH_BLOW", 30000);
						func_286(1);
						MISC::SET_BIT(&iLocal_163, iParam0);
					}
				}
				break;
			
			case 2:
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_163, iParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !func_524(63))
					{
						switch (Local_169.f_3)
						{
							case 11:
							case 12:
								if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
								{
									if (PED::IS_PED_IN_FLYING_VEHICLE(AUDIO::_0x0626A247D2405330()))
									{
										func_287("AMCH_ALTI", 30000);
										func_286(1);
										MISC::SET_BIT(&iLocal_163, iParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
								{
									func_287("AMCH_NMIS", 30000);
									func_286(1);
									MISC::SET_BIT(&iLocal_163, iParam0);
								}
								break;
							
							case 1:
								if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
								{
									func_287("AMCH_FRFALL", 4294967295);
									func_286(1);
									MISC::SET_BIT(&iLocal_163, iParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
								{
									func_287("AMCH_PVPO1", 4294967295);
									func_286(1);
									MISC::SET_BIT(&iLocal_163, iParam0);
								}
								break;
							
							case 17:
								if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
								{
									func_287("AMCH_PVPO2", 4294967295);
									func_286(1);
									MISC::SET_BIT(&iLocal_163, iParam0);
								}
								break;
							
							case 4:
								if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
								{
									func_287("AMCH_WHEELIE", 30000);
									func_286(1);
									MISC::SET_BIT(&iLocal_163, iParam0);
								}
								break;
							
							case 3:
								if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
								{
									func_287("AMCH_STOPPIE", 30000);
									func_286(1);
									MISC::SET_BIT(&iLocal_163, iParam0);
								}
								break;
							
							case 10:
								if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
								{
									func_287("AMCH_LFALL", 30000);
									func_286(1);
									MISC::SET_BIT(&iLocal_163, iParam0);
								}
								break;
							
							case 6:
								if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
								{
									func_287("AMCH_LPARA", 30000);
									func_286(1);
									MISC::SET_BIT(&iLocal_163, iParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_163, iParam0))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_524(63))
					{
						switch (Local_169.f_3)
						{
							case 11:
							case 12:
								if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
								{
									if (PED::IS_PED_IN_FLYING_VEHICLE(AUDIO::_0x0626A247D2405330()))
									{
										if (func_1(&uLocal_134, 1000, 0))
										{
											func_287("AMCH_OCEAN", 30000);
											func_286(1);
											func_44(&uLocal_134);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 5:
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_163, iParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !func_524(63))
					{
						switch (Local_169.f_3)
						{
							case 11:
							case 12:
								if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
								{
									if (PED::IS_PED_IN_FLYING_VEHICLE(AUDIO::_0x0626A247D2405330()))
									{
										if (func_508(CAM::_0xDC9DA9E8789F5246()) && !func_521(CAM::_0xDC9DA9E8789F5246()))
										{
											func_287("AMCH_ALTIEXP", 30000);
											func_286(1);
											MISC::SET_BIT(&iLocal_163, iParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_163, iParam0))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_524(63))
					{
						if (func_1(&uLocal_134, 1000, 0))
						{
							func_287("AMCH_FLYLOW", 30000);
							func_286(1);
							func_44(&uLocal_134);
						}
					}
				}
				break;
			
			case 7:
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_163, iParam0))
				{
					if (Local_169.f_3 == 7)
					{
						if (iLocal_164 == 0)
						{
							if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_524(63))
							{
								if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
								{
									func_287("AMCH_MVS1", 30000);
									func_286(1);
									iLocal_164 = 1;
								}
							}
						}
						else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_524(63))
						{
							if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
							{
								func_287("AMCH_MVS2", 30000);
								func_286(1);
								MISC::SET_BIT(&iLocal_163, iParam0);
							}
						}
					}
					if (Local_169.f_3 == 14)
					{
						if (iLocal_164 == 0)
						{
							if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_524(63))
							{
								if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
								{
									func_287("AMCH_BRBL", 30000);
									func_286(1);
									iLocal_164 = 1;
								}
							}
						}
						else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_524(63))
						{
							if (func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
							{
								func_287("AMCH_BRBL2", 30000);
								func_286(1);
								MISC::SET_BIT(&iLocal_163, iParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_163, iParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						func_520("AMCH_WARN", func_380(Local_169.f_3), func_379(Local_169.f_3), 30000);
						func_286(0);
						Local_1536.f_8 = NETWORK::_GET_POSIX_TIME();
						unk_0x1190AB7024CBD8CB(4294967295, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						MISC::SET_BIT(&iLocal_163, iParam0);
					}
				}
				break;
			}
	}
}

void func_520(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x14FF7
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam3);
}

bool func_521(int iParam0)//Position - 0x1501A
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E0B5.f_F1.f_88[func_523(9) /*33*/][iParam0], func_522(9));
}

int func_522(int iParam0)//Position - 0x15040
{
	return (iParam0 % 32);
}

int func_523(int iParam0)//Position - 0x1504D
{
	return (iParam0 / 32);
}

bool func_524(int iParam0)//Position - 0x1505A
{
	return Global_252F9E.f_A90[0 /*80*/].f_1 == iParam0;
}

void func_525(int iParam0)//Position - 0x15071
{
	Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_3 = iParam0;
}

void func_526(bool bParam0)//Position - 0x15086
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

int func_527(bool bParam0, bool bParam1, bool bParam2)//Position - 0x150BA
{
	if (func_549(CAM::_0xDC9DA9E8789F5246(), 29))
	{
		return 0;
	}
	if (func_155(CAM::_0xDC9DA9E8789F5246(), 21))
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
	if (func_337(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_548())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_547(CAM::_0xDC9DA9E8789F5246()))
		{
			return 0;
		}
	}
	if (func_546())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_98(CAM::_0xDC9DA9E8789F5246()))
		{
			return 0;
		}
	}
	else if (func_539(CAM::_0xDC9DA9E8789F5246()) == 3)
	{
		return 0;
	}
	if (func_538(CAM::_0xDC9DA9E8789F5246()) != func_96() && func_538(CAM::_0xDC9DA9E8789F5246()) == func_83(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_537(func_281()) && func_312(CAM::_0xDC9DA9E8789F5246()) != 236)
	{
		return 0;
	}
	if (func_536())
	{
		return 0;
	}
	if (func_306())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_339(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (!func_534())
	{
		return 0;
	}
	if (func_155(CAM::_0xDC9DA9E8789F5246(), 0) || func_155(CAM::_0xDC9DA9E8789F5246(), 3))
	{
		return 0;
	}
	if ((func_155(CAM::_0xDC9DA9E8789F5246(), 12) || func_155(CAM::_0xDC9DA9E8789F5246(), 14)) || func_155(CAM::_0xDC9DA9E8789F5246(), 13))
	{
		return 0;
	}
	if (func_444(CAM::_0xDC9DA9E8789F5246(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) || func_501(CAM::_0xDC9DA9E8789F5246()))
	{
		if (!func_506() && !Global_2634E9)
		{
			return 0;
		}
	}
	if (func_533(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_532())
	{
		return 0;
	}
	if (Global_193F0F)
	{
		return 0;
	}
	if (func_373(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_531())
	{
		return 0;
	}
	if (func_529(CAM::_0xDC9DA9E8789F5246()) && Global_184094.f_AB)
	{
		return 0;
	}
	if (func_528())
	{
		return 0;
	}
	return 1;
}

bool func_528()//Position - 0x152D4
{
	return Global_197632.f_1C;
}

int func_529(int iParam0)//Position - 0x152E2
{
	if (func_530(Global_1841F3[iParam0 /*790*/].f_111.f_18))
	{
		return 1;
	}
	return 0;
}

int func_530(int iParam0)//Position - 0x15304
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

int func_531()//Position - 0x15333
{
	if (Global_40EAC7.f_31D > 4294967295)
	{
		return 1;
	}
	return 0;
}

bool func_532()//Position - 0x1534B
{
	return Global_16C64.f_148 > 0;
}

bool func_533(int iParam0)//Position - 0x1535C
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 11);
}

int func_534()//Position - 0x15378
{
	if (func_535() == 0)
	{
		return 1;
	}
	return 0;
}

int func_535()//Position - 0x1538D
{
	return Global_1406D2.f_12;
}

bool func_536()//Position - 0x1539B
{
	return Global_140859;
}

int func_537(int iParam0)//Position - 0x153A7
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

int func_538(int iParam0)//Position - 0x153EB
{
	return Global_18CD5B[iParam0 /*560*/].f_B.f_23;
}

int func_539(int iParam0)//Position - 0x15400
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_374(iParam0) && !func_8(iParam0)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 8));
	bVar2 = func_98(iParam0);
	uVar3 = func_157();
	uVar4 = func_540();
	if ((bVar1 && (func_442(iParam0) || func_399(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_100(iParam0)) && !func_292(iParam0)))
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

int func_540()//Position - 0x154BE
{
	if ((func_99(CAM::_0xDC9DA9E8789F5246(), 21) || func_99(CAM::_0xDC9DA9E8789F5246(), 22)) || func_544())
	{
		return 1;
	}
	if (func_542())
	{
		func_541(22);
		return 1;
	}
	return 0;
}

void func_541(int iParam0)//Position - 0x15503
{
	MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_4), iParam0);
}

int func_542()//Position - 0x15520
{
	if (func_104(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if ((func_157() && !func_156()) || func_155(CAM::_0xDC9DA9E8789F5246(), 21))
		{
			return 1;
		}
		else
		{
			func_543(27);
		}
	}
	return 0;
}

void func_543(int iParam0)//Position - 0x15563
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_4), iParam0);
}

int func_544()//Position - 0x15580
{
	return func_545(306, 4294967295);
}

int func_545(int iParam0, int iParam1)//Position - 0x15590
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2727B6[iParam0 /*3*/][func_195(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

bool func_546()//Position - 0x155BC
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 5;
}

int func_547(int iParam0)//Position - 0x155D1
{
	if (Global_24FBF9[iParam0 /*413*/].f_105.f_4 != 0 || Global_24FBF9[iParam0 /*413*/].f_105.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_548()//Position - 0x15605
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 0);
}

bool func_549(int iParam0, int iParam1)//Position - 0x15621
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_B.f_5, iParam1);
}

void func_550()//Position - 0x1563C
{
	func_551(&(Local_190.f_216), &Local_190, 26, &(Local_190.f_1), &(Local_190.f_75), Local_169.f_3, 0, 0);
}

void func_551(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x15664
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
	
	if (func_660(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = 4294967295;
	iVar12 = 4294967295;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_24 = 0;
	if (func_658() || iParam2 == 27)
	{
		if (func_614(uParam1, iParam2, uParam3, Global_180518, 0, func_661(), sParam7))
		{
			func_613(1);
			if ((!func_612() && !func_611()) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 1))
			{
				if (func_610())
				{
					func_609();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_1B == 0)
					{
						func_608(1);
						Global_180518 = 0;
						iVar19 = 4294967295;
						if (Global_1805F5 != 1)
						{
							func_607(uParam1, 0, 0);
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
								if (func_12(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
									if (!func_14(iVar3, 0))
									{
										if ((func_606(iVar3) || Global_24FBF9[iVar3 /*413*/].f_EC != 4294967295) || func_605(iVar3))
										{
											iVar9 = iVar3;
											if (func_85(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_602(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_101(CAM::_0xDC9DA9E8789F5246(), 0) && func_211(CAM::_0xDC9DA9E8789F5246()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_601())
							{
								if (func_12(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
								}
								else
								{
									iVar3 = func_96();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_600(iVar3) && func_597(iVar3, iParam2)) && func_12(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1841F3[iVar9 /*790*/].f_D3.f_6;
								Var6 = { func_592(iVar3) };
								if (iVar3 == CAM::_0xDC9DA9E8789F5246())
								{
									uParam3->f_23 = iVar18;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_129(iVar3) };
								iVar5 = func_586(iVar3);
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
									if (!func_601())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != 4294967295)
								{
									func_584(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_68), func_275(iParam5, 1, 0, 0), 16);
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
								iVar16 = func_583(iVar3, 0);
								if (bVar2)
								{
									if (func_84(iVar3, 1) && iVar1[iVar9] != 4294967295)
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
								if (func_582(iParam5))
								{
									func_581(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								else
								{
									func_581(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
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
							if (func_12(iVar3, 0, 1) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar14, iVar3))
							{
								iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
							}
							else
							{
								iVar3 = func_96();
							}
							if (func_600(iVar3))
							{
								if (func_12(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1841F3[iVar9 /*790*/].f_D3.f_6;
									Var6 = { func_592(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_129(iVar3) };
									iVar5 = func_586(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
									}
									Global_180518++;
									iVar16 = func_583(iVar3, 1);
									if (bVar2)
									{
										if (func_84(iVar3, 1))
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
									func_564(iVar3, PLAYER::GET_PLAYER_NAME(iVar3), uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 11))
						{
							func_561(uParam3, uParam1);
						}
						func_44(&(uParam3->f_15));
						func_560();
						uParam3->f_1B = 2;
					}
					if (uParam3->f_1B == 2)
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 7))
						{
							func_559(uParam3, uParam1);
							func_558(uParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_21), 7);
						}
						func_559(uParam3, uParam1);
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 11))
						{
							MISC::SET_BIT(&(uParam3->f_21), 11);
						}
						if (func_554(uParam3))
						{
							Global_1805F5 = 1;
						}
						func_552(uParam3);
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
			func_560();
			func_608(0);
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

void func_552(var uParam0)//Position - 0x15CB5
{
	if (!func_45(&(uParam0->f_15)))
	{
		func_2(&(uParam0->f_15), 0, 0);
	}
	else if (func_1(&(uParam0->f_15), 250, 0))
	{
		func_44(&(uParam0->f_15));
		func_553(0);
	}
}

void func_553(bool bParam0)//Position - 0x15CF1
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

int func_554(var uParam0)//Position - 0x15D37
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_25;
	iVar3 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_25);
	if (iVar3 != func_96() && func_12(iVar3, 0, 1))
	{
		Var2 = { func_129(iVar3) };
		iVar1 = func_557(uParam0, uParam0->f_25);
		if (func_556(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_555(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_555(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_555(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_555(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar4 = 1;
							func_555(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_555(uParam0, iVar0, 0);
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

void func_555(var uParam0, int iParam1, int iParam2)//Position - 0x15E64
{
	uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_556(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x15E76
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_557(var uParam0, int iParam1)//Position - 0x15E86
{
	return uParam0->f_26[iParam1 /*2*/];
}

void func_558(var uParam0, bool bParam1, int iParam2)//Position - 0x15E96
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

void func_559(var uParam0, var uParam1)//Position - 0x15ECE
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_21, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "SET_HIGHLIGHT");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_23);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		MISC::SET_BIT(&(uParam0->f_21), 10);
	}
}

void func_560()//Position - 0x15F06
{
	if (Global_1805F5 != 0)
	{
		Global_1805F5 = 0;
	}
}

void func_561(var uParam0, var uParam1)//Position - 0x15F1B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_96())
		{
			if (func_12(iVar2, 0, 1))
			{
				if (uParam0->f_26[iVar0 /*2*/].f_1 != 4294967295)
				{
					iVar1 = func_563(uParam0->f_26[iVar0 /*2*/], 0);
					func_562(uParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_1841F3[iVar0 /*790*/].f_D3.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_562(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x15F8E
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

int func_563(int iParam0, bool bParam1)//Position - 0x15FCB
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

void func_564(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x15FFF
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_580() && iParam4 < func_579())
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
				func_578("");
			}
			else
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam10);
			}
			func_578(sParam1);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam11);
			if (uParam3->f_6C == 6)
			{
				func_578("");
			}
			else
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(65);
			}
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4294967295);
			func_578("");
			if (uParam3->f_6C == 6)
			{
				func_578("");
			}
			else
			{
				func_578(&sParam5);
			}
			func_569(uParam3, iParam0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			if (func_568(uParam3))
			{
				func_567("DPAD_FRIEND");
			}
			else if (func_566(uParam3))
			{
				func_567("DPAD_FRIEND");
			}
			else if (func_565(uParam3))
			{
				func_567("DPAD_CREW");
			}
			else
			{
				func_567("");
			}
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
	}
}

bool func_565(var uParam0)//Position - 0x16129
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_21, 6);
}

bool func_566(var uParam0)//Position - 0x1613A
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_21, 5);
}

void func_567(char* sParam0)//Position - 0x1614B
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

int func_568(var uParam0)//Position - 0x1615D
{
	if (func_566(uParam0) && func_565(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_569(var uParam0, int iParam1)//Position - 0x1617E
{
	if (func_577(iParam1))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(121);
	}
	else if (func_573(iParam1))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(122);
	}
	else if (((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_1B, 15) && iParam1 > 4294967295) && iParam1 < 32) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam1 /*413*/].f_19A, 0))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(123);
	}
	else
	{
		if (func_570())
		{
			uParam0->f_24 = 0;
		}
		GRAPHICS::SET_SEETHROUGH(uParam0->f_24);
	}
}

int func_570()//Position - 0x161FF
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_571() || func_88())
		{
			return 1;
		}
	}
	return 0;
}

int func_571()//Position - 0x16224
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_88();
	}
	return func_572(Global_440000.f_1FEDE);
}

int func_572(int iParam0)//Position - 0x16248
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

int func_573(int iParam0)//Position - 0x16282
{
	if ((func_12(iParam0, 0, 1) && func_574()) && func_249(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_574()//Position - 0x162AF
{
	if (func_374(CAM::_0xDC9DA9E8789F5246()) || func_576())
	{
		if (!func_575(CAM::_0xDC9DA9E8789F5246(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_575(int iParam0, int iParam1)//Position - 0x162DF
{
	if (func_312(iParam0) == iParam1)
	{
		return func_442(iParam0);
	}
	return 0;
}

int func_576()//Position - 0x162FC
{
	switch (func_211(CAM::_0xDC9DA9E8789F5246()))
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

int func_577(int iParam0)//Position - 0x1633A
{
	if (func_570())
	{
		if (func_12(iParam0, 0, 1))
		{
			return func_85(iParam0);
		}
	}
	if ((func_12(iParam0, 0, 1) && func_574()) && func_251(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_578(char* sParam0)//Position - 0x16382
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

int func_579()//Position - 0x16390
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

int func_580()//Position - 0x163AC
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_18051A)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_581(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x163C4
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_580() && iParam3 < func_579())
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
					func_578("");
				}
				else
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam9);
				}
				if (uParam2->f_6C == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_567(sParam16);
				}
				else
				{
					func_578(&(uParam2->f_1));
				}
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam11);
				if (uParam2->f_6C == 6)
				{
					func_578("");
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
				if (func_601())
				{
					func_578("");
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
						func_567(&(uParam2->f_68));
					}
					else
					{
						func_578("");
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
					func_578("");
				}
				if (uParam2->f_6C == 6)
				{
					func_578("");
				}
				else
				{
					func_578(&sParam4);
				}
				func_569(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_578("");
					func_578("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
				}
				if (func_568(uParam2))
				{
					func_567("DPAD_FRIEND");
				}
				else if (func_566(uParam2))
				{
					func_567("DPAD_FRIEND");
				}
				else if (func_565(uParam2))
				{
					func_567("DPAD_CREW");
				}
				else
				{
					func_567("");
				}
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
		}
	}
}

int func_582(int iParam0)//Position - 0x1671E
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

int func_583(int iParam0, bool bParam1)//Position - 0x16742
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_374(iParam0)) && !func_98(iParam0))
	{
		iVar0 = func_63();
	}
	iVar1 = func_82(iParam0);
	if (!iVar1 == 4294967295)
	{
		return func_80(iVar1);
	}
	return iVar0;
}

int func_584(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x1678C
{
	if (func_585(iParam3))
	{
		*fParam1 = (func_277(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_582(iParam3))
	{
		*fParam1 = (func_277(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_585(int iParam0)//Position - 0x167DC
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

int func_586(int iParam0)//Position - 0x16838
{
	int iVar0;
	
	iVar0 = func_589(iParam0);
	if (iVar0 == 4294967295)
	{
		func_587(iParam0, 1);
		return 0;
	}
	Global_150E71[iVar0 /*5*/].f_4 = 1;
	return Global_150E71[iVar0 /*5*/].f_2;
}

void func_587(int iParam0, bool bParam1)//Position - 0x1686E
{
	if (!func_12(iParam0, 0, 1))
	{
		return;
	}
	if (func_589(iParam0) != 4294967295)
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
	if (func_588(iParam0))
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

int func_588(int iParam0)//Position - 0x168DA
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

int func_589(int iParam0)//Position - 0x1690C
{
	int iVar0;
	
	if (!func_12(iParam0, 0, 1))
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
			func_590(iVar0);
			return 4294967295;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_590(int iParam0)//Position - 0x1698B
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
	func_591(&(Global_150E71[iVar2 /*5*/]));
	Global_150F12 = (Global_150F12 - 1);
}

void func_591(var uParam0)//Position - 0x16A41
{
	*uParam0 = 0;
	uParam0->f_1 = func_96();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = HUD::_0x13C4B962653A5280();
	}
}

struct<4> func_592(int iParam0)//Position - 0x16A6E
{
	struct<4> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Global_2633E1 = { func_129(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_556(Global_2633E1))
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
		if (func_596(&Global_2633E1))
		{
			Global_26339B = { func_594(iParam0) };
			func_593(&Global_26339B, &Var0);
		}
	}
	return Var0;
}

void func_593(var uParam0, var uParam1)//Position - 0x16AEF
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, uParam1);
}

struct<35> func_594(int iParam0)//Position - 0x16B01
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_595(iParam0))
	{
		return Global_140879[CAM::_0xDC9DA9E8789F5246() /*35*/];
	}
	Var0 = { func_129(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_595(int iParam0)//Position - 0x16B3D
{
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		return 1;
	}
	return 0;
}

int func_596(var uParam0)//Position - 0x16B53
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

int func_597(int iParam0, int iParam1)//Position - 0x16B79
{
	if (iParam1 == 26)
	{
		if ((func_8(iParam0) || func_599(iParam0)) || func_7(iParam0))
		{
			return 0;
		}
	}
	if (!func_598(iParam0))
	{
		return 0;
	}
	if ((!func_606(iParam0) && Global_24FBF9[iParam0 /*413*/].f_EC == 4294967295) && !func_605(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_598(int iParam0)//Position - 0x16BE8
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_8E, 22);
}

int func_599(int iParam0)//Position - 0x16C01
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 10) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 9));
	}
	return 0;
}

int func_600(int iParam0)//Position - 0x16C3F
{
	int iVar0;
	
	if (iParam0 == func_96())
	{
		return 0;
	}
	if (func_14(iParam0, 0))
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

int func_601()//Position - 0x16C84
{
	switch (func_211(CAM::_0xDC9DA9E8789F5246()))
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
	switch (func_312(CAM::_0xDC9DA9E8789F5246()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_98(CAM::_0xDC9DA9E8789F5246()))
	{
		switch (func_211(CAM::_0xDC9DA9E8789F5246()))
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
	if (func_575(CAM::_0xDC9DA9E8789F5246(), 236))
	{
		return 1;
	}
	return 0;
}

void func_602(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x16DC0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_14(iVar1, 0))
			{
				if ((func_606(iVar1) || Global_24FBF9[iVar1 /*413*/].f_EC != 4294967295) || func_605(iVar1))
				{
					if (func_603(iVar1, iParam1, 0))
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

int func_603(int iParam0, int iParam1, bool bParam2)//Position - 0x16E4A
{
	if (iParam1 != func_96())
	{
		if (!bParam2)
		{
			if (func_604(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_96())
		{
			return iParam1 == Global_18CD5B[iParam0 /*560*/].f_B;
		}
	}
	return 0;
}

int func_604(int iParam0, int iParam1)//Position - 0x16E94
{
	if (iParam1 != func_96())
	{
		if (iParam0 != func_96())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B != func_96())
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

bool func_605(int iParam0)//Position - 0x16ED9
{
	return Global_1841F3[iParam0 /*790*/].f_C4 != 0;
}

int func_606(int iParam0)//Position - 0x16EEE
{
	if (func_12(iParam0, 0, 1))
	{
		if (func_12(CAM::_0xDC9DA9E8789F5246(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, CAM::_0xDC9DA9E8789F5246()) || func_211(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_607(var uParam0, int iParam1, int iParam2)//Position - 0x16F2F
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

void func_608(bool bParam0)//Position - 0x16F5D
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

void func_609()//Position - 0x16F8F
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 1))
	{
		if (func_293())
		{
			func_280();
		}
	}
}

int func_610()//Position - 0x16FB1
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 0) && func_293())
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 1) && func_293())
	{
		return 1;
	}
	return 0;
}

int func_611()//Position - 0x16FF2
{
	if (func_293())
	{
		if (func_52(Global_252F9E.f_A90[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_612()//Position - 0x17019
{
	if (func_293())
	{
		if (func_64(Global_252F9E.f_A90[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_613(int iParam0)//Position - 0x17040
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

int func_614(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0x1706E
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	char* sVar5;
	int iVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_657(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_656();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_655())
		{
			if (func_654() > 0 && Global_18051A)
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
		if (!func_644())
		{
			func_643(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11E1, 26))
	{
		func_643(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_45(&(uParam2->f_13)))
	{
		if (func_654() == 1)
		{
			func_642(bVar3, uParam0, 0);
			func_2(&(uParam2->f_13), 0, 0);
			func_643(uParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_26862F.f_11E2), 5);
		}
	}
	if (func_45(&(uParam2->f_13)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_1(&(uParam2->f_13), 10000, 0) || (func_654() == 0 && !bParam5))
		{
			func_643(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_641();
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
					func_641();
					if (iParam1 == 26 || iParam1 == 27)
					{
						HUD::_0x25F87B30C382FCA7();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (func_642(bVar3, uParam0, 0))
				{
					func_607(uParam0, 0, 0);
					sVar1 = func_639(iParam1, &(Global_440000.f_1FEE5), bParam4);
					Var0 = { func_637(iParam1) };
					if (bParam4)
					{
						func_634(uParam0, sVar1, "", 0, 4294967295, 4294967295, 1);
					}
					else if (iParam1 == 26)
					{
						func_628(uParam0, func_631(uParam2), func_629(uParam2), 4294967295);
					}
					else if (iParam1 == 27)
					{
						sVar5 = func_622(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar5 = sParam6;
						}
						func_620(uParam0, sVar5, func_621(), 4294967295);
					}
					else if (func_570())
					{
						uParam2->f_22 = Global_180519;
						func_634(uParam0, sVar1, &Var0, 1, 4294967295, Global_180519, 1);
					}
					else if (bVar2)
					{
						uParam2->f_22 = Global_180519;
						func_634(uParam0, sVar1, "", 0, 4294967295, Global_180519, 1);
					}
					else
					{
						iVar6 = func_615(iParam1);
						func_634(uParam0, sVar1, &Var0, 1, iVar6, 4294967295, 1);
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

int func_615(int iParam0)//Position - 0x17341
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (func_619())
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
			if (func_618(CAM::_0xDC9DA9E8789F5246()))
			{
				iVar0 = 20;
			}
			if (func_617(CAM::_0xDC9DA9E8789F5246()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_616(CAM::_0xDC9DA9E8789F5246()))
	{
		iVar0 = 2;
	}
	if (func_212())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_616(int iParam0)//Position - 0x1748D
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 4;
}

bool func_617(int iParam0)//Position - 0x174A2
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 7;
}

bool func_618(int iParam0)//Position - 0x174B7
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 2;
}

bool func_619()//Position - 0x174CC
{
	return Global_440000.f_1 == 0;
}

void func_620(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x174DC
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_567(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		func_567("");
		if (iParam3 != 4294967295)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

char* func_621()//Position - 0x1753B
{
	switch (func_211(CAM::_0xDC9DA9E8789F5246()))
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

char* func_622(var uParam0)//Position - 0x17593
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
	switch (func_211(CAM::_0xDC9DA9E8789F5246()))
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
			if (func_624())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_248(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_248(1))
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
			if (func_623(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_B0))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_623(int iParam0)//Position - 0x179BF
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

bool func_624()//Position - 0x179F1
{
	return (func_627() && func_625(func_626()));
}

int func_625(int iParam0)//Position - 0x17A0A
{
	return func_251(iParam0, 1);
}

int func_626()//Position - 0x17A19
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_23;
}

bool func_627()//Position - 0x17A30
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 148;
}

void func_628(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x17A46
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_567(sParam1);
		}
		else if (func_312(CAM::_0xDC9DA9E8789F5246()) == 133)
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
		func_567("");
		if (iParam3 != 4294967295)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

char* func_629(var uParam0)//Position - 0x17ACD
{
	int iVar0;
	
	iVar0 = func_312(CAM::_0xDC9DA9E8789F5246());
	if (func_630())
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
			switch (func_311())
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

bool func_630()//Position - 0x17C78
{
	return Global_184174;
}

char* func_631(var uParam0)//Position - 0x17C84
{
	int iVar0;
	
	iVar0 = func_312(CAM::_0xDC9DA9E8789F5246());
	if (func_630())
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
			if (func_633() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_633() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_311())
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
			if (func_632() == 1)
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

int func_632()//Position - 0x17E79
{
	return Global_26862F.f_12C7;
}

int func_633()//Position - 0x17E88
{
	if (func_312(CAM::_0xDC9DA9E8789F5246()) == 132)
	{
		return Global_26862F.f_12C2;
	}
	return 4294967295;
}

void func_634(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x17EAB
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_578(sParam1);
		}
		else if (iParam5 != 4294967295)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		else
		{
			func_567(sParam1);
		}
		if (func_655() && iParam6)
		{
			if (func_636())
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
			func_567(sParam2);
		}
		if (iParam4 != 4294967295)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam4);
			if (func_635(CAM::_0xDC9DA9E8789F5246()))
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(166);
			}
			else if (func_61())
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(220);
			}
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

int func_635(int iParam0)//Position - 0x17F6C
{
	if (func_618(iParam0) || func_617(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_636()//Position - 0x17F8E
{
	return Global_18051A;
}

struct<4> func_637(int iParam0)//Position - 0x17F9A
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_638(CAM::_0xDC9DA9E8789F5246()) || func_616(CAM::_0xDC9DA9E8789F5246()))
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
	if (func_570() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_440000.f_26, 16);
	}
	return Var0;
}

bool func_638(int iParam0)//Position - 0x18036
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 5;
}

char* func_639(int iParam0, char* sParam1, bool bParam2)//Position - 0x1804B
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_570() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_640();
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

char* func_640()//Position - 0x181AF
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

void func_641()//Position - 0x181F3
{
	Global_90A3 = 1;
}

bool func_642(bool bParam0, var uParam1, bool bParam2)//Position - 0x181FF
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

void func_643(var uParam0, var uParam1, bool bParam2)//Position - 0x1823F
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_21), 7);
	Global_180518 = 0;
	func_560();
	Global_180517 = 0;
	uParam1->f_1B = 0;
	if (bParam2)
	{
		if (func_45(&(uParam1->f_13)))
		{
			func_44(&(uParam1->f_13));
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

int func_644()//Position - 0x182B1
{
	if (func_653())
	{
		return 0;
	}
	if (func_546())
	{
		return 0;
	}
	if (!func_651())
	{
		return 0;
	}
	if (!func_534())
	{
		return 0;
	}
	if (func_650(8, 4294967295))
	{
		return 0;
	}
	if (func_654() == 2)
	{
		return 0;
	}
	if (Global_26862F.f_11B2)
	{
		return 0;
	}
	if (func_306())
	{
		return 0;
	}
	else if (!func_338(CAM::_0xDC9DA9E8789F5246(), 1) && Global_1403E4[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_649(1) || func_647(1)) || Global_434C.f_7C) || Global_434C)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_646() && Global_19BACA == 2)
	{
		return 0;
	}
	if (func_94(CAM::_0xDC9DA9E8789F5246()) && !func_646())
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
	if (func_645(0))
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

bool func_645(int iParam0)//Position - 0x18419
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_27, iParam0);
}

bool func_646()//Position - 0x18430
{
	return (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_1E, 12) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19BACB, 0));
}

int func_647(bool bParam0)//Position - 0x18452
{
	if (PAD::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			if (func_648(AUDIO::_0x0626A247D2405330()))
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

int func_648(int iParam0)//Position - 0x1853D
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

bool func_649(bool bParam0)//Position - 0x1859A
{
	if (bParam0)
	{
		return (Global_434C.f_4 && Global_434C.f_68 == 4);
	}
	return Global_434C.f_4;
}

bool func_650(int iParam0, int iParam1)//Position - 0x185C3
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

int func_651()//Position - 0x185FE
{
	if (func_652())
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

bool func_652()//Position - 0x1863D
{
	return Global_1406B6;
}

bool func_653()//Position - 0x18649
{
	return MISC::GET_GAME_TIMER() <= Global_43D7.f_16F1 + 100;
}

int func_654()//Position - 0x1865E
{
	return Global_14E0B5.f_44;
}

int func_655()//Position - 0x1866C
{
	if (Global_180519 > 16)
	{
		return 1;
	}
	return 0;
}

float func_656()//Position - 0x18682
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_657(int iParam0)//Position - 0x186A6
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

int func_658()//Position - 0x186CF
{
	if (func_661())
	{
		return 1;
	}
	if (func_7(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_630())
	{
		return 1;
	}
	if (func_374(CAM::_0xDC9DA9E8789F5246()))
	{
		switch (func_312(CAM::_0xDC9DA9E8789F5246()))
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
				if (!func_659(CAM::_0xDC9DA9E8789F5246()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_659(CAM::_0xDC9DA9E8789F5246()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_659(CAM::_0xDC9DA9E8789F5246()))
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

bool func_659(int iParam0)//Position - 0x187AA
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 4);
}

int func_660(int iParam0)//Position - 0x187C2
{
	if (iParam0 == 27)
	{
		if ((func_374(CAM::_0xDC9DA9E8789F5246()) && !func_98(CAM::_0xDC9DA9E8789F5246())) && !func_575(CAM::_0xDC9DA9E8789F5246(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_104(CAM::_0xDC9DA9E8789F5246(), 0) && func_98(CAM::_0xDC9DA9E8789F5246()))
		{
			return 1;
		}
		if (func_539(CAM::_0xDC9DA9E8789F5246()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_661()//Position - 0x18833
{
	if (func_662(CAM::_0xDC9DA9E8789F5246()))
	{
		return Global_141784;
	}
	return 0;
}

int func_662(int iParam0)//Position - 0x1884E
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_14(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

void func_663()//Position - 0x18871
{
	if (Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_3 == 3)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 8))
		{
			if ((!func_7(CAM::_0xDC9DA9E8789F5246()) && !func_154(CAM::_0xDC9DA9E8789F5246())) && !func_386(CAM::_0xDC9DA9E8789F5246()))
			{
				func_385();
			}
		}
		else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 9))
		{
			if ((func_7(CAM::_0xDC9DA9E8789F5246()) || func_154(CAM::_0xDC9DA9E8789F5246())) || func_386(CAM::_0xDC9DA9E8789F5246()))
			{
				unk_0x992E057EBDE4A46F();
				Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_4 = 0;
				MISC::SET_BIT(&iLocal_140, 9);
			}
		}
	}
}

void func_664()//Position - 0x18912
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_144)))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_144));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			func_665(iVar0, 2);
		}
	}
	iLocal_144++;
	if (iLocal_144 >= NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iLocal_144 = 0;
	}
}

void func_665(int iParam0, int iParam1)//Position - 0x1895B
{
	bool bVar0;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 0))
	{
		return;
	}
	if (func_45(&(Global_1806E7.f_12)))
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
	if (func_8(iParam0))
	{
		bVar0 = false;
	}
	if (func_666(iParam0))
	{
		bVar0 = false;
	}
	if (func_14(iParam0, 0))
	{
		bVar0 = false;
	}
	if (func_7(iParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1806E7++;
	}
}

bool func_666(int iParam0)//Position - 0x18A29
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 10);
}

void func_667(int iParam0, int iParam1)//Position - 0x18A42
{
	Local_1535[iParam0 /*12*/] = iParam1;
}

int func_668()//Position - 0x18A53
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_190.f_216[iVar0 /*42*/].f_1 = func_96();
		iVar0++;
	}
	return 1;
}

int func_669()//Position - 0x18A7F
{
	return Local_169;
}

int func_670(int iParam0)//Position - 0x18A8A
{
	return Local_1535[iParam0 /*12*/];
}

void func_671()//Position - 0x18A99
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 6))
	{
		func_694();
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 6);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 7))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 4) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_293()) && func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1806E7.f_1), 7);
				func_287("FME_PASINT", 30000);
				func_286(1);
			}
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 17))
		{
			if (func_157() && !func_156())
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 17);
				MISC::SET_BIT(&(Global_1806E7.f_1), 16);
			}
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_310, 2)) && func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1)) && !Global_10B8E) && !Global_D072) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_692())
			{
				func_287("AMEV_GA_RP", 4294967295);
				if (func_211(CAM::_0xDC9DA9E8789F5246()) != 200)
				{
					func_286(1);
				}
				MISC::SET_BIT(&(Global_1806E7.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_399(CAM::_0xDC9DA9E8789F5246()))
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
		if ((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_293()) && func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1)) && !func_155(CAM::_0xDC9DA9E8789F5246(), 21))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 9);
			func_691(0);
			func_287("FME_TBL00", 4294967295);
			func_286(1);
		}
	}
	if (func_374(CAM::_0xDC9DA9E8789F5246()))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 18))
		{
			if ((func_155(CAM::_0xDC9DA9E8789F5246(), 21) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 20)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1806E7.f_1), 18);
			}
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_293()) && func_12(CAM::_0xDC9DA9E8789F5246(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !Global_26862F.f_12D0)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 18);
				MISC::SET_BIT(&(Global_1806E7.f_1), 19);
				func_287("AMTT_RPAS", 4294967295);
				func_286(1);
			}
		}
	}
	if (((((func_374(CAM::_0xDC9DA9E8789F5246()) && !func_8(CAM::_0xDC9DA9E8789F5246())) && func_312(CAM::_0xDC9DA9E8789F5246()) != 146) && !func_7(CAM::_0xDC9DA9E8789F5246())) && !func_154(CAM::_0xDC9DA9E8789F5246())) && !func_681())
	{
		if (func_398(func_312(CAM::_0xDC9DA9E8789F5246())))
		{
			unk_0x2C60B9CCB9A13F96(CAM::_0xDC9DA9E8789F5246());
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1806E7.f_1), 22);
		}
		if (func_442(CAM::_0xDC9DA9E8789F5246()) || func_392())
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 10))
			{
				if (func_680(func_312(CAM::_0xDC9DA9E8789F5246())))
				{
					if (func_255(0) && !Global_247C05)
					{
						MISC::SET_BIT(&(Global_1806E7.f_1), 9);
					}
					if (!Global_247C05)
					{
						func_396(1);
						MISC::SET_BIT(&(Global_1806E7.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1806E7.f_1), 10);
			}
		}
		if (func_399(CAM::_0xDC9DA9E8789F5246()))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 11))
			{
				if (!Global_16C64.f_8)
				{
					MISC::SET_BIT(&(Global_1806E7.f_1), 12);
					func_394(1);
				}
				if (!func_679())
				{
					MISC::SET_BIT(&(Global_1806E7.f_1), 13);
					func_393();
				}
				if (!Global_247C05)
				{
					MISC::SET_BIT(&(Global_1806E7.f_1), 14);
					if (func_255(0) && !Global_247C05)
					{
						MISC::SET_BIT(&(Global_1806E7.f_1), 9);
					}
					func_396(1);
				}
				MISC::SET_BIT(&(Global_1806E7.f_1), 11);
			}
		}
		else
		{
			func_677(0);
		}
	}
	else
	{
		func_677(1);
	}
	func_672();
	if (func_391(func_312(CAM::_0xDC9DA9E8789F5246())) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1806E7.f_1), 21);
	}
	if ((func_157() && !func_156()) || func_155(CAM::_0xDC9DA9E8789F5246(), 21))
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

void func_672()//Position - 0x18FB9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_293())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_524(iVar2))
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
				func_673(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 26))
	{
		func_44(&(Global_1806E7.f_16));
		MISC::SET_BIT(&(Global_1806E7.f_1), 26);
	}
}

void func_673(int iParam0, int iParam1)//Position - 0x1905C
{
	if (!func_45(&(Global_1806E7.f_16)))
	{
		func_2(&(Global_1806E7.f_16), 0, 0);
	}
	else if (func_1(&(Global_1806E7.f_16), iParam1, 0))
	{
		if (func_654() > 0)
		{
			func_676(iParam0);
			if (func_284("AMEV_LBD_HELP"))
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			}
			func_44(&(Global_1806E7.f_16));
		}
	}
	else
	{
		func_675(0);
		func_674();
	}
}

void func_674()//Position - 0x190C5
{
	Global_26862F.f_11A7 = 0;
}

void func_675(int iParam0)//Position - 0x190D5
{
	Global_14E0B5.f_44 = iParam0;
}

void func_676(int iParam0)//Position - 0x190E5
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

void func_677(int iParam0)//Position - 0x19131
{
	if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 11) || (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 10) && iParam0)) || (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 22) && iParam0))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 12))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 12);
			func_394(0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 13))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 13);
			func_678();
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 14) && !func_104(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 14);
			func_396(0);
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 11);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 10);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 22);
	}
}

void func_678()//Position - 0x1920C
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1271), 0);
}

bool func_679()//Position - 0x19220
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1271, 0);
}

int func_680(int iParam0)//Position - 0x19234
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
			return func_399(CAM::_0xDC9DA9E8789F5246());
		
		case 133:
			return (func_392() || func_5(func_311()));
		
		default:
	}
	return 0;
}

int func_681()//Position - 0x192A4
{
	if (((((((((func_690() || func_689()) || func_688()) || func_306()) || (func_687() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_684() && !func_683())) || Global_248A6D) || Global_248A6D.f_1 != 0) || Global_248AB7 != 0) || (func_682() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_682()//Position - 0x19338
{
	return Global_EC6C9;
}

bool func_683()//Position - 0x19344
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255C02.f_2, 27);
}

int func_684()//Position - 0x19358
{
	if (func_686() || func_685())
	{
		return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_62 == 8;
	}
	return 0;
}

var func_685()//Position - 0x19385
{
	return Global_255C02.f_270;
}

bool func_686()//Position - 0x19394
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255C02.f_2, 11);
}

bool func_687()//Position - 0x193A8
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255C02, 5);
}

bool func_688()//Position - 0x193B9
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255C02, 2);
}

bool func_689()//Position - 0x193CA
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255C02, 20);
}

bool func_690()//Position - 0x193DC
{
	return Global_255C02.f_24B;
}

void func_691(int iParam0)//Position - 0x193EB
{
	int iVar0;
	
	iVar0 = func_199(2534, 4294967295, 0);
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
	func_190(2534, iVar0, 4294967295, 1, 0);
}

int func_692()//Position - 0x19523
{
	int iVar0;
	
	if (!func_45(&(Global_1806E7.f_F)))
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
				if (func_12(iVar0, 1, 1) && func_693(iVar0, 6))
				{
					if (SYSTEM::VDIST(func_36(CAM::_0xDC9DA9E8789F5246()), func_36(iVar0)) < 80f)
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
			func_44(&(Global_1806E7.f_F));
		}
	}
	return 0;
}

int func_693(int iParam0, int iParam1)//Position - 0x195EB
{
	int iVar0;
	
	if (Global_1406BF != 0)
	{
		return 0;
	}
	if (!func_194(iParam0))
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

void func_694()//Position - 0x19624
{
	HUD::_0x14621BB1DF14E2B2(5);
	func_696();
	GRAPHICS::_0x54E22EA2C1956A8D(1f);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 8);
	func_695();
}

void func_695()//Position - 0x1964A
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

void func_696()//Position - 0x1974A
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

int func_697()//Position - 0x19791
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Global_26862F.f_126F)
	{
		return 0;
	}
	if ((!func_45(&(Local_169.f_27)) && !func_45(&(Local_169.f_29))) && !func_45(&(Local_169.f_2B)))
	{
		return 0;
	}
	uVar2 = HUD::_0x13C4B962653A5280();
	if (func_45(&(Local_169.f_29)))
	{
		iVar0 = func_698(&uVar2, &(Local_169.f_29));
		iVar1 = 20000;
	}
	else if (func_45(&(Local_169.f_27)))
	{
		iVar0 = func_698(&uVar2, &(Local_169.f_27));
		iVar1 = func_28(0);
	}
	else if (func_45(&(Local_169.f_2B)))
	{
		iVar0 = func_698(&uVar2, &(Local_169.f_2B));
		iVar1 = func_29();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_698(var uParam0, var uParam1)//Position - 0x19854
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam0, *uParam1));
}

int func_699()//Position - 0x1986A
{
	if (func_700())
	{
		return 1;
	}
	return 0;
}

bool func_700()//Position - 0x1987E
{
	return Global_1806E7.f_18;
}

int func_701()//Position - 0x1988C
{
	var uVar0;
	
	func_705(&uVar0);
	if (Global_140842 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_704())
	{
		return 1;
	}
	if (Global_258B0A)
	{
		return 1;
	}
	if (func_703())
	{
		return 1;
	}
	if (func_702(157))
	{
		if (!func_690())
		{
			return 1;
		}
	}
	if (func_702(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_401() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_401()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_702(int iParam0)//Position - 0x19916
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_703()//Position - 0x1992D
{
	return Global_25824F;
}

bool func_704()//Position - 0x19939
{
	return Global_255C02.f_246;
}

void func_705(var uParam0)//Position - 0x19948
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
					func_706(iVar0);
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

void func_706(int iParam0)//Position - 0x199BB
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_12(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_707(iVar2, &bVar3))
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

int func_707(int iParam0, var uParam1)//Position - 0x19A3C
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

void func_708()//Position - 0x19A9B
{
	SYSTEM::WAIT(0);
}

void func_709()//Position - 0x19AA8
{
	int iVar0;
	
	if (func_701())
	{
		Local_1536.f_5 = 5;
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_169.f_2, 0))
	{
		Local_1536.f_5 = 6;
	}
	else if (func_20(0))
	{
		Local_1536.f_5 = 1;
	}
	else
	{
		Local_1536.f_5 = 2;
	}
	Local_1536 = Local_169.f_34;
	Local_1536.f_1 = Local_169.f_35;
	Local_1536.f_4 = Local_169.f_42;
	Local_1536.f_3 = Local_169.f_33;
	Local_1536.f_A = (NETWORK::_GET_POSIX_TIME() - Local_1536.f_9);
	if (!Global_40001.f_2C7B)
	{
		if (Local_1536.f_6 > 0)
		{
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	if (NETSHOP::_NETWORK_SHOP_BASKET_START() != 4294967295)
	{
		func_745(Local_1536, Local_169.f_3, Local_1535[NETSHOP::_NETWORK_SHOP_BASKET_START() /*12*/].f_4, iVar0, 4294967295, 4294967295, 4294967295);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 4))
	{
		AUDIO::STOP_SOUND(iLocal_148);
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 4);
	}
	AUDIO::RELEASE_SOUND_ID(iLocal_148);
	AUDIO::RELEASE_SOUND_ID(iLocal_149);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_165, iVar0) && !AUDIO::HAS_SOUND_FINISHED(iLocal_166[iVar0]))
		{
			AUDIO::STOP_SOUND(iLocal_166[iVar0]);
			AUDIO::RELEASE_SOUND_ID(iLocal_166[iVar0]);
		}
		iVar0++;
	}
	func_382();
	func_455(1, 1);
	unk_0xA9F827A1B59E18D4(0);
	func_526(0);
	func_389(Local_169.f_3, 0);
	func_710(133, 0, Local_169.f_25 == 6);
	func_388(23, 0);
	if (func_298() >= 0f)
	{
		HUD::_SET_MINIMAP_ATTITUDE_INDICATOR_LEVEL(0f, 0, 21);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 9))
	{
		unk_0x992E057EBDE4A46F();
	}
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_710(int iParam0, bool bParam1, bool bParam2)//Position - 0x19C2F
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
	func_741();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_740(func_312(CAM::_0xDC9DA9E8789F5246()));
		func_388(21, 0);
	}
	else
	{
		if ((bParam2 && CAM::_0xDC9DA9E8789F5246() != 4294967295) && func_739(CAM::_0xDC9DA9E8789F5246()) >= 12)
		{
			func_738(2546, 4294967295);
			iVar1 = func_199(2546, 4294967295, 0);
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
		func_737();
		func_736();
		func_735();
		if ((!func_100(CAM::_0xDC9DA9E8789F5246()) && !func_292(CAM::_0xDC9DA9E8789F5246())) && !func_437())
		{
			func_719();
		}
		func_718();
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 1))
		{
			func_694();
		}
		func_717();
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6C5), 2);
		func_716();
		func_159();
	}
	if (unk_0x7922FBF86CF76430(1344549371))
	{
		HUD::OBJECT_DECAL_TOGGLE(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((CAM::_0xDC9DA9E8789F5246() != 4294967295 && !func_155(CAM::_0xDC9DA9E8789F5246(), 21)) && !func_104(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			func_396(0);
			func_394(0);
			func_715();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_48(26, 4294967295))
		{
			Global_258ACA = 4294967295;
			func_46(26, 4294967295);
		}
	}
	if (!func_711())
	{
		Global_263374 = 1;
	}
}

int func_711()//Position - 0x19E81
{
	if (((((!func_635(CAM::_0xDC9DA9E8789F5246()) && !func_616(CAM::_0xDC9DA9E8789F5246())) && func_312(CAM::_0xDC9DA9E8789F5246()) != 146) && !func_714()) && !func_713()) && !func_712(Global_440000.f_2559E))
	{
		return 0;
	}
	return 1;
}

bool func_712(int iParam0)//Position - 0x19EE3
{
	return iParam0 == 57;
}

int func_713()//Position - 0x19EF0
{
	if (Global_440000.f_1FEDE == Global_40001.f_250B)
	{
		return 1;
	}
	return 0;
}

int func_714()//Position - 0x19F11
{
	if ((Global_440000 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_440000.f_5 != 0 || Global_440000.f_2559E > 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 15)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 18)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 19)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 29)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 28)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_715()//Position - 0x19FBB
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

void func_716()//Position - 0x1A011
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

void func_717()//Position - 0x1A0AF
{
	struct<25> Var0;
	
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_15 = 4294967295;
	Global_1806E7 = { Var0 };
}

void func_718()//Position - 0x1A0DE
{
	var uVar0;
	
	Global_141784 = uVar0;
}

void func_719()//Position - 0x1A0EC
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_18), &Global_24C348, 2);
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_1A), &Global_24C34A, 18);
	func_733();
	func_722(1, 1, 0);
	func_720();
}

void func_720()//Position - 0x1A122
{
	func_721(0, 0);
}

void func_721(int iParam0, int iParam1)//Position - 0x1A130
{
	Global_24B2CE.f_16 = iParam0;
	Global_24B2CE.f_17 = iParam1;
}

void func_722(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1A148
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
		func_732();
	}
	if (!bParam2)
	{
		func_724(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_723(0);
	func_162();
}

void func_723(bool bParam0)//Position - 0x1A1E7
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

void func_724(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x1A207
{
	if (bParam0)
	{
		if (func_731())
		{
			func_730();
		}
		Global_24B2CE.f_2BF.f_203 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_24B2CE.f_2BF.f_1F8 = iParam1;
		Global_24B2CE.f_2BF.f_1F9 = iParam2;
		Global_24B2CE.f_2BF.f_1FA = iParam10;
		func_728();
		func_435(8, 0, 0, 0, 0);
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
		func_725();
	}
}

void func_725()//Position - 0x1A2CE
{
	if (func_731() && !func_727())
	{
		func_730();
	}
	if (func_727())
	{
		func_726();
	}
	else
	{
		func_728();
		func_435(0, 0, 0, 0, 0);
		Global_24B2CE.f_6C8 = 0;
		Global_24B2CE.f_6C7 = 0;
	}
}

void func_726()//Position - 0x1A316
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_2BF), &(Global_24B2CE.f_4C3), 516);
	Global_24B2CE.f_1E4 = { Global_24B2CE.f_1EA };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_2BF.f_203)
	{
		Global_24B2CE.f_6C7 = 0;
	}
}

int func_727()//Position - 0x1A35E
{
	if ((Global_24B2CE.f_6C7 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_4C3.f_203) && SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_4C3.f_203))
	{
		return 1;
	}
	return 0;
}

void func_728()//Position - 0x1A39D
{
	if (func_731() && !func_727())
	{
		func_730();
	}
	func_729();
	Global_24B2CE.f_2BF = 0;
}

void func_729()//Position - 0x1A3C6
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

void func_730()//Position - 0x1A401
{
	if (func_727())
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

int func_731()//Position - 0x1A46F
{
	if ((Global_24B2CE.f_6C8 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_2BF.f_203) && SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_2BF.f_203))
	{
		return 1;
	}
	return 0;
}

void func_732()//Position - 0x1A4AE
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_16A), &Global_24C49A, 121);
}

void func_733()//Position - 0x1A4C7
{
	func_734();
	Global_24B2CE.f_8C5 = 0;
}

void func_734()//Position - 0x1A4DB
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

void func_735()//Position - 0x1A507
{
	Global_26862F.f_1271 = 0;
}

void func_736()//Position - 0x1A517
{
	if (CAM::_0xDC9DA9E8789F5246() != 4294967295)
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1 = 0;
	}
}

void func_737()//Position - 0x1A535
{
	int iVar0;
	
	iVar0 = CAM::_0xDC9DA9E8789F5246();
	if (iVar0 != 4294967295)
	{
		Global_18CD5B[iVar0 /*560*/] = 4294967295;
	}
}

void func_738(int iParam0, int iParam1)//Position - 0x1A553
{
	int iVar0;
	
	iVar0 = func_199(iParam0, func_195(iParam1), 0);
	iVar0++;
	if (!func_198(iParam0))
	{
		func_190(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_191(iParam0, iVar0, iParam1, 1);
	}
}

int func_739(int iParam0)//Position - 0x1A594
{
	return Global_1841F3[iParam0 /*790*/].f_D3.f_6;
}

int func_740(int iParam0)//Position - 0x1A5A9
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
			if (func_399(CAM::_0xDC9DA9E8789F5246()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_741()//Position - 0x1A60B
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
	func_744(0);
	func_743(0);
	func_742(0);
}

void func_742(int iParam0)//Position - 0x1A6AC
{
	if (Global_26862F.f_119B != iParam0)
	{
		Global_26862F.f_119B = iParam0;
	}
}

void func_743(bool bParam0)//Position - 0x1A6C9
{
	if (Global_26862F.f_119A != bParam0)
	{
		if (bParam0)
		{
		}
		Global_26862F.f_119A = bParam0;
	}
}

void func_744(int iParam0)//Position - 0x1A6EE
{
	if (Global_26862F.f_1198 != iParam0)
	{
		Global_26862F.f_1198 = iParam0;
	}
}

void func_745(struct<12> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1A70B
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
			Var3.f_F = iParam4;
			Var3.f_10 = iParam5;
			Var3.f_11 = iParam6;
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
			Var8.f_F = iParam4;
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

int func_746(struct<21> Param0)//Position - 0x1A980
{
	func_755(func_756(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(func_754(9));
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(func_753(9));
	func_750(0, 4294967295, 0);
	func_748(133);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_169, 88);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_1535, 385);
	if (!func_747())
	{
		func_709();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		STATS::_0x6DEE77AFF8C21BD1(&(Local_169.f_34), &(Local_169.f_35));
	}
	Local_1536.f_2 = NETWORK::_0xCF61D4B4702EE9EB();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	return 1;
}

int func_747()//Position - 0x1A9FD
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
		if (func_704())
		{
			return 0;
		}
		if (func_702(155))
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

void func_748(int iParam0)//Position - 0x1AA56
{
	func_717();
	func_749();
	func_735();
	Global_1806E7.f_4 = iParam0;
	Global_1806E7.f_5 = iParam0;
	func_406(iParam0, 4294967295);
	func_27(&(Global_1806E7.f_12), 0, 0);
	Global_26862F.f_11DE = 0;
	Global_258679[0] = func_96();
	Global_258679[1] = func_96();
	Global_258679[2] = func_96();
	Global_258679[3] = func_96();
	Global_258679[4] = func_96();
	func_159();
	if (!func_537(func_281()))
	{
		func_280();
	}
	if (func_157() && !func_156())
	{
		MISC::SET_BIT(&(Global_1806E7.f_1), 16);
	}
	else
	{
		MISC::SET_BIT(&(Global_1806E7.f_1), 17);
	}
}

void func_749()//Position - 0x1AB0C
{
	var uVar0;
	
	Global_180700 = uVar0;
}

int func_750(int iParam0, int iParam1, bool bParam2)//Position - 0x1AB1A
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_752();
			}
			else
			{
				return 0;
			}
		}
		if (!func_751())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_752();
					}
					else
					{
						return 0;
					}
				}
				if (func_704())
				{
					if (!bParam2)
					{
						func_752();
					}
					else
					{
						return 0;
					}
				}
				if (func_702(155))
				{
					if (!bParam2)
					{
						func_752();
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
					func_752();
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
				func_752();
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
			func_752();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_751()//Position - 0x1AC2F
{
	return Global_140842;
}

void func_752()//Position - 0x1AC3B
{
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

int func_753(int iParam0)//Position - 0x1AC47
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

int func_754(int iParam0)//Position - 0x1AD21
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
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

void func_755(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1ADF9
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_752();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_10);
}

int func_756(int iParam0)//Position - 0x1AE18
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

