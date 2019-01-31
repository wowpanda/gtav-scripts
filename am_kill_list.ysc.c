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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
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
	var uLocal_60 = 10;
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
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
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
	struct<617> Local_110 = { 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 782665360, 1, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1275859404, -1860900134, 0, 5, 4, 0, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_111 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_112[4] = { 0, 0, 0, 0 };
	struct<18> Local_113[32];
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116[5] = { 0, 0, 0, 0, 0 };
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	float fLocal_120 = 0f;
	int iLocal_121[4] = { 0, 0, 0, 0 };
	struct<8> Local_122[24];
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126[4] = { 0, 0, 0, 0 };
	int iLocal_127[4] = { 0, 0, 0, 0 };
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	struct<42> Local_131[32];
	struct<104> Local_132 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1 } ;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = -1;
	var uLocal_139 = -1;
	var uLocal_140 = -1;
	var uLocal_141 = -1;
	var uLocal_142 = -1;
	var uLocal_143 = -1;
	var uLocal_144 = 0;
	var uLocal_145 = 32;
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
	var uLocal_381 = 0;
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
	var uLocal_423 = 0;
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
	var uLocal_465 = 0;
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
	var uLocal_507 = 0;
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
	var uLocal_549 = 0;
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
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572[4] = { 0, 0, 0, 0 };
	int iLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	struct<2> Local_578[10];
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
	struct<2> Local_589[5];
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	int iLocal_594 = 0;
	vector3 vLocal_595 = { 0f, 0f, 0f };
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	int iLocal_598 = 0;
	int iLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_602 = 0;
	int iLocal_603[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_604 = 0;
	var uLocal_605[4] = { 0, 0, 0, 0 };
	var uLocal_606[4] = { 0, 0, 0, 0 };
	struct<21> Local_607 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	fLocal_120 = -100f;
	iLocal_570 = 4294967295;
	iLocal_571 = 4294967295;
	iLocal_598 = 4294967295;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_837(CAM::_0xDC9DA9E8789F5246(), 0, 1))
	{
		func_826(ScriptParam_607);
	}
	else
	{
		func_782();
	}
	while (true)
	{
		func_781();
		if (func_774())
		{
			func_782();
		}
		else if (func_771(19))
		{
			func_782();
		}
		if (func_770())
		{
			func_782();
		}
		func_746();
		switch (func_745(NETSHOP::_NETWORK_SHOP_BASKET_START()))
		{
			case 0:
				if ((func_744() == 1 && Local_110.f_1 != 4294967295) && Local_110.f_2 != 4294967295)
				{
					func_742();
					func_738(129, Local_110.f_1, Local_110.f_2, 0);
					if (Global_26862F.f_12C7 == 4294967295)
					{
						if (!func_737())
						{
							Global_26862F.f_12C7 = 0;
						}
						else
						{
							Global_26862F.f_12C7 = 1;
						}
					}
					func_736(Local_110.f_1E[0 /*3*/]);
					Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/] = 1;
				}
				else if (func_744() == 4)
				{
					Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/] = 3;
				}
				break;
			
			case 1:
				if (func_744() == 1)
				{
					func_731();
					func_730();
					func_712();
					func_422();
					func_162();
					func_161();
					func_160();
				}
				else if (func_744() == 4)
				{
					Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/] = 3;
				}
				break;
			
			case 3:
				func_159(&(Local_110.f_140));
				if (func_158(&(Local_110.f_140)))
				{
					Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/] = 4;
				}
				break;
			
			case 2:
				Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/] = 4;
			
			case 4:
				func_782();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_744())
			{
				case 0:
					if (func_143())
					{
						if (func_138())
						{
							func_135(func_137(129, Local_110.f_1, Local_110.f_2, 0));
							Local_110 = 1;
						}
					}
					break;
				
				case 1:
					func_126();
					func_32();
					func_23();
					if (func_1())
					{
						Local_110 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x27A
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x28E
{
	int iVar0;
	int iVar1;
	
	if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 1)) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 2))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 11))
		{
			return 0;
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 6))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 11))
		{
			return 0;
		}
	}
	if (Local_110.f_F1 > 0)
	{
		if (Local_110 != 4)
		{
			if (func_22())
			{
				if (Local_110.f_F1 == 3)
				{
					if (func_20())
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 11))
						{
							return 1;
						}
					}
				}
				else if (func_18(&(Local_110.f_142), 3000, 0))
				{
					if (func_20())
					{
						return 1;
					}
				}
			}
		}
		if (Local_110.f_F1 < 3)
		{
			iVar0 = 0;
			if (Local_110.f_F1 >= 1)
			{
				iVar0 = 1;
				iVar1 = 0;
				while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
					{
						if (!func_15(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)), 0))
						{
							if (Local_113[iVar1 /*18*/].f_11 < 2)
							{
								iVar0 = 0;
							}
						}
					}
					iVar1++;
				}
			}
			if (iVar0 == 1)
			{
				if ((!((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 1)) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 2)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 6)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 14))
				{
					MISC::SET_BIT(&(Local_110.f_3), 15);
				}
				func_6();
			}
			else if (Local_110.f_F1 < 3)
			{
				if (func_3())
				{
					MISC::SET_BIT(&(Local_110.f_3), 16);
					MISC::SET_BIT(&(Local_110.f_3), 15);
					func_6();
				}
			}
		}
	}
	return 0;
}

int func_3()//Position - 0x426
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
		{
			if (!func_4(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1, 0, 0, 0, 0, 1, 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0x46F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_5(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == AUDIO::_0x0626A247D2405330())
				{
				}
				else if (iParam2 && PED::IS_PED_A_PLAYER(iVar2))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
					{
						if (!bParam5)
						{
							return 0;
						}
					}
					else
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_5(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x522
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, iParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (BRAIN::GET_SCRIPT_TASK_STATUS(iVar0, 451360105) == 1 || BRAIN::GET_SCRIPT_TASK_STATUS(iVar0, 3466132403) == 1)
				{
					if (SYSTEM::VDIST(unk_0x8000C77B5F336760(iParam0, 0), unk_0x8000C77B5F336760(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = 4294967295;
		}
	}
	return iVar0;
}

void func_6()//Position - 0x5BD
{
	if (Local_110.f_F1 != 3)
	{
		func_8();
		func_7(&(Local_110.f_144), 0, 0);
		Local_110.f_F1 = 3;
	}
}

void func_7(var uParam0, bool bParam1, bool bParam2)//Position - 0x5E1
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

void func_8()//Position - 0x61E
{
	if (!func_14())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_140740.f_9)
	{
		return;
	}
	func_9();
}

void func_9()//Position - 0x64B
{
	func_11();
	func_10(0);
}

void func_10(bool bParam0)//Position - 0x65C
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

void func_11()//Position - 0x6EA
{
	if (!func_13())
	{
	}
	if (func_14())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_140740.f_C));
		func_12();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_12()//Position - 0x713
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

int func_13()//Position - 0x985
{
	if (!func_14())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_140740.f_C));
	func_12();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_14()//Position - 0x9AB
{
	if (Global_140740 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_15(int iParam0, int iParam1)//Position - 0x9C1
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_16(4294967295, 0) == 8;
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

int func_16(int iParam0, bool bParam1)//Position - 0xA0C
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_17();
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

int func_17()//Position - 0xA4D
{
	return Global_1407E0;
}

int func_18(var uParam0, int iParam1, bool bParam2)//Position - 0xA59
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_19(uParam0, bParam2, 0);
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

void func_19(var uParam0, bool bParam1, bool bParam2)//Position - 0xAB7
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

int func_20()//Position - 0xAFC
{
	int iVar0;
	
	if (!func_21(&(Local_110.f_148)))
	{
		func_19(&(Local_110.f_148), 0, 0);
	}
	else if (func_18(&(Local_110.f_148), 20000, 0))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_30[iVar0]))
		{
			if (Local_110.f_55[iVar0] < 4)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_21(var uParam0)//Position - 0xB66
{
	return uParam0->f_1;
}

int func_22()//Position - 0xB72
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_23()//Position - 0xBB5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_30[iVar1]))
		{
			if (!func_31(Local_110.f_30[iVar1]))
			{
				switch (Local_110.f_55[iVar1])
				{
					case 0:
						if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_30[iVar1]), 0))
						{
							Local_110.f_55[iVar1] = 1;
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_30[iVar1]), 0) && func_30(iVar1))
						{
							Local_110.f_55[iVar1] = 1;
						}
						break;
					
					case 1:
						if (Local_110.f_F1 == 1)
						{
							if (!func_22())
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_30[iVar1]), 0))
								{
									iVar4 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_110.f_30[iVar1]), 0);
									if (func_29(iVar4, 250f))
									{
										Local_110.f_55[iVar1] = 2;
									}
									else if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar4)))
									{
										if ((iVar1 % 4) == 0)
										{
											iVar0 = (iVar1 / 4);
											if (iVar0 < 5)
											{
												if (Local_110.f_6E[iVar0] == 4294967295 || !func_28(iVar1))
												{
													iVar2 = func_27();
													if (iVar2 != func_26())
													{
														iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
														if (!PED::IS_PED_INJURED(iVar3))
														{
															if (func_25(iVar4, iVar3, 1) > 250f)
															{
																Local_110.f_6E[iVar0] = iVar2;
															}
														}
													}
												}
											}
										}
									}
								}
								else
								{
									Local_110.f_55[iVar1] = 2;
								}
							}
							else
							{
								Local_110.f_55[iVar1] = 3;
							}
						}
						else
						{
							Local_110.f_55[iVar1] = 3;
						}
						break;
					
					case 2:
						if (Local_110.f_F1 == 1)
						{
							if (func_22())
							{
								Local_110.f_55[iVar1] = 3;
							}
							else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 6))
							{
								Local_110.f_55[iVar1] = 3;
							}
							else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1D0, iVar1))
							{
								Local_110.f_55[iVar1] = 1;
								GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_1D0), iVar1);
							}
						}
						else
						{
							Local_110.f_55[iVar1] = 3;
						}
						break;
					
					case 3:
						if (PED::IS_PED_FLEEING(NETWORK::NET_TO_PED(Local_110.f_30[iVar1])))
						{
							func_24(&(Local_110.f_30[iVar1]));
							Local_110.f_55[iVar1] = 4;
						}
						break;
					}
				}
		}
		iVar1++;
	}
}

void func_24(var uParam0)//Position - 0xDEA
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

float func_25(int iParam0, int iParam1, int iParam2)//Position - 0xE0E
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar1 = { unk_0x8000C77B5F336760(iParam1, 1) };
	}
	else
	{
		vVar1 = { unk_0x8000C77B5F336760(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, iParam2);
}

int func_26()//Position - 0xE6C
{
	return 4294967295;
}

int func_27()//Position - 0xE75
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_26();
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (iVar0 == func_26())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				if (Local_113[iVar1 /*18*/].f_1 != 0)
				{
					if (Local_113[iVar1 /*18*/].f_11 == 1)
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_28(int iParam0)//Position - 0xED6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((iParam0 % 4) == 0)
	{
		iVar0 = (iParam0 / 4);
		if (iVar0 < 5)
		{
			if (Local_110.f_6E[iVar0] != 4294967295)
			{
				iVar3 = Local_110.f_6E[iVar0];
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
					if (func_837(iVar1, 1, 1))
					{
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
						{
							iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
							iVar3 = iVar2;
							if (Local_113[iVar3 /*18*/].f_11 != 1)
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
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_29(int iParam0, float fParam1)//Position - 0xF60
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_113[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_113[iVar0 /*18*/].f_11 == 1)
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
					iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
					if (!PED::IS_PED_INJURED(iVar2))
					{
						if (func_25(iParam0, iVar2, 1) < fParam1)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_30(int iParam0)//Position - 0xFD6
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_30[iParam0]), 0))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_110.f_30[iParam0]), 0);
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
	{
		return 0;
	}
	return 1;
}

int func_31(var uParam0)//Position - 0x101A
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
	}
	return 1;
}

void func_32()//Position - 0x1039
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	
	if (Local_110.f_1CF > 0)
	{
		if (Local_110.f_1C != Local_110.f_1CF)
		{
			Local_110.f_1C = Local_110.f_1CF;
		}
	}
	switch (Local_110.f_F1)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_110.f_1C)
			{
				if (Local_110.f_11[iVar0] == func_26())
				{
				}
				else
				{
					iVar1++;
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 4))
					{
					}
				}
				iVar0++;
			}
			func_123();
			func_122();
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 4))
			{
				Local_110.f_1CF = iVar1;
			}
			if (func_120())
			{
				func_113();
				Local_110.f_F1 = 1;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 4) && func_110() > 1)
			{
				func_109();
				func_113();
				Local_110.f_F1 = 1;
			}
			if (!func_737())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[0]))
				{
					if (!func_107(Local_110.f_7[0]))
					{
						Var2.f_2 = 840666990;
						func_105(Var2, func_106(NETWORK::NET_TO_VEH(Local_110.f_7[0]), 1, 0));
						Local_110.f_F1 = 2;
					}
				}
			}
			if (Local_110.f_F1 == 0)
			{
				if (!func_21(&(Local_110.f_14A)))
				{
					if (!func_21(&(Local_110.f_146)))
					{
						func_19(&(Local_110.f_14A), 0, 0);
					}
				}
				else if (func_21(&(Local_110.f_146)))
				{
					func_104(&(Local_110.f_14A));
				}
				else if (func_18(&(Local_110.f_14A), func_103(), 0))
				{
					Var2.f_2 = 840666990;
					func_105(Var2, func_102(1));
					MISC::SET_BIT(&(Local_110.f_3), 12);
					func_6();
				}
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 14))
				{
					func_6();
				}
			}
			break;
		
		case 1:
			func_35();
			func_33();
			func_109();
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 6))
			{
				Local_110.f_F1 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
}

void func_33()//Position - 0x121C
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 19))
	{
		return;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 6))
	{
		if (!func_21(&(Local_110.f_14C)))
		{
			func_19(&(Local_110.f_14C), 0, 0);
			MISC::SET_BIT(&(Local_110.f_3), 7);
		}
		else if (func_18(&(Local_110.f_14C), func_34(), 0))
		{
			MISC::SET_BIT(&(Local_110.f_3), 6);
		}
	}
}

int func_34()//Position - 0x1280
{
	if (func_737())
	{
		return Global_40001.f_2AF4;
	}
	return Global_40001.f_2ADD;
}

void func_35()//Position - 0x12A3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar2 = true;
	bVar3 = false;
	if (Local_110.f_116 > 0)
	{
		if (Local_110.f_117 >= Local_110.f_116)
		{
			if (Local_110.f_FE >= Local_110.f_FF)
			{
				MISC::SET_BIT(&(Local_110.f_3), 0);
				MISC::SET_BIT(&(Local_110.f_3), 1);
				MISC::SET_BIT(&(Local_110.f_3), 2);
				return;
			}
		}
	}
	iVar5 = 0;
	if (bVar2)
	{
		if (Local_110.f_116 > 0)
		{
			if (Local_110.f_117 >= Local_110.f_116)
			{
				if (Local_110.f_100[0] >= 0)
				{
					iVar5 = (iVar5 + Local_110.f_100[0]);
				}
				if (Local_110.f_100[1] >= 0)
				{
					iVar5 = (iVar5 + Local_110.f_100[1]);
				}
				if (Local_110.f_100[2] >= 0)
				{
					iVar5 = (iVar5 + Local_110.f_100[2]);
				}
				if (Local_110.f_100[3] >= 0)
				{
					iVar5 = (iVar5 + Local_110.f_100[3]);
				}
				if (iVar5 >= Local_110.f_FF)
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 24)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_30[iVar4]))
						{
							if (!func_31(Local_110.f_30[iVar4]))
							{
								bVar3 = true;
							}
						}
						iVar4++;
					}
					if (!bVar3)
					{
						MISC::SET_BIT(&(Local_110.f_3), 0);
						MISC::SET_BIT(&(Local_110.f_3), 1);
						MISC::SET_BIT(&(Local_110.f_3), 2);
						return;
					}
				}
				bVar3 = false;
				iVar4 = 0;
				iVar4 = 0;
				while (iVar4 < 24)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_30[iVar4]))
					{
						if (!func_31(Local_110.f_30[iVar4]))
						{
							bVar3 = true;
						}
					}
					iVar4++;
				}
				if (!bVar3)
				{
					if (!func_21(&(Local_110.f_15B)))
					{
						func_19(&(Local_110.f_15B), 0, 0);
					}
					else if (func_18(&(Local_110.f_15B), 3000, 0))
					{
						MISC::SET_BIT(&(Local_110.f_3), 0);
						MISC::SET_BIT(&(Local_110.f_3), 1);
						MISC::SET_BIT(&(Local_110.f_3), 2);
						return;
					}
				}
			}
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 0) || !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 1))
	{
		if (Local_110.f_F9 >= func_101())
		{
			MISC::SET_BIT(&(Local_110.f_3), 0);
			MISC::SET_BIT(&(Local_110.f_3), 1);
		}
		iVar0 = 0;
		while (iVar0 < Local_110.f_F2)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_49[iVar0]))
			{
				if (func_100(iVar0))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_F5, iVar0))
					{
						if ((Local_110.f_1B != joaat("HYDRA") && !func_4(NETWORK::NET_TO_VEH(Local_110.f_49[iVar0]), 1, 0, 0, 0, 0, 1, 0)) || Local_110.f_1B == joaat("HYDRA"))
						{
							GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_3), 0);
							if (func_21(&(Local_589[iVar0 /*2*/])))
							{
								func_104(&(Local_589[iVar0 /*2*/]));
							}
						}
						else if (func_4(NETWORK::NET_TO_VEH(Local_110.f_49[iVar0]), 1, 0, 0, 0, 0, 1, 0) && ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_49[iVar0])) == joaat("SAVAGE"))
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 0))
							{
								GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_3), 0);
							}
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 18))
							{
								func_99(func_102(1), iVar0);
								MISC::SET_BIT(&(Local_110.f_3), 18);
							}
						}
						else if (func_98(iVar0) || !func_737())
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 0))
							{
								GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_3), 0);
							}
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_12F, iVar0))
							{
								func_97(func_102(1), iVar0);
								MISC::SET_BIT(&(Local_110.f_12F), iVar0);
							}
						}
						else
						{
							func_24(&(Local_110.f_49[iVar0]));
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_FD, iVar0))
							{
								Local_110.f_FB = (Local_110.f_FB - 1);
								if (func_96() > 1)
								{
									if (Local_110.f_FC > 0)
									{
										Local_110.f_12E++;
										func_95(iVar0, func_102(1));
									}
								}
								MISC::SET_BIT(&(Local_110.f_FD), iVar0);
							}
							func_104(&(Local_589[iVar0 /*2*/]));
						}
					}
				}
				else if (func_94(iVar0))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_FD, iVar0))
					{
						Local_110.f_FB = (Local_110.f_FB - 1);
						if (func_96() > 1)
						{
							if (Local_110.f_FC > 0)
							{
								Local_110.f_12E++;
								func_95(iVar0, func_102(1));
							}
						}
						if (Local_110.f_1B == joaat("HYDRA"))
						{
							Local_110.f_FE++;
						}
						MISC::SET_BIT(&(Local_110.f_FD), iVar0);
					}
					if (func_21(&(Local_110.f_150[iVar0 /*2*/])))
					{
						func_104(&(Local_110.f_150[iVar0 /*2*/]));
					}
					func_24(&(Local_110.f_49[iVar0]));
				}
				else
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 0))
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_3), 0);
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_10F, iVar0))
					{
						if (!func_21(&(Local_110.f_150[iVar0 /*2*/])))
						{
							func_19(&(Local_110.f_150[iVar0 /*2*/]), 0, 0);
						}
						else if (func_18(&(Local_110.f_150[iVar0 /*2*/]), 5000, 0))
						{
							MISC::SET_BIT(&(Local_110.f_10F), iVar0);
						}
						else if (func_18(&(Local_110.f_150[iVar0 /*2*/]), 3000, 0))
						{
							if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_49[iVar0])) == joaat("SAVAGE"))
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 18))
								{
									func_99(func_102(1), iVar0);
									MISC::SET_BIT(&(Local_110.f_3), 18);
								}
							}
							else if (func_98(iVar0) || !func_737())
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_12F, iVar0))
								{
									func_97(func_102(1), iVar0);
									MISC::SET_BIT(&(Local_110.f_12F), iVar0);
								}
							}
						}
					}
				}
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_110.f_74)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_30[(iVar0 * 4 + iVar1)]))
				{
					iVar6 = (iVar0 * 4 + iVar1);
					if (!func_31(Local_110.f_30[(iVar0 * 4 + iVar1)]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_30[(iVar0 * 4 + iVar1)]), 0))
						{
							if (!func_92((iVar0 * 4 + iVar1)))
							{
								GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_3), 0);
							}
							else if (func_91(iVar6))
							{
								if (!func_18(&(Local_110.f_19E[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
								{
								}
								if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_110.f_30[(iVar0 * 4 + iVar1)])))
								{
									func_90(&(Local_122[(iVar0 * 4 + iVar1) /*8*/]));
								}
								func_24(&(Local_110.f_30[(iVar0 * 4 + iVar1)]));
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_110[func_89(iVar6)], func_88(iVar6)))
								{
									if (Local_110.f_55[(iVar0 * 4 + iVar1)] > 0)
									{
										func_87((iVar0 * 4 + iVar1), func_102(1));
										Local_110.f_FE++;
									}
								}
								Local_110.f_55[(iVar0 * 4 + iVar1)] = 0;
								if (func_21(&(Local_110.f_16C[iVar6 /*2*/])))
								{
									func_104(&(Local_110.f_16C[iVar6 /*2*/]));
								}
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_113[func_89(iVar6)], func_88(iVar6)))
								{
									GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_113[func_89(iVar6)]), func_88(iVar6));
								}
							}
							else
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_110[func_89(iVar6)], func_88(iVar6)))
								{
									if (!func_21(&(Local_110.f_16C[iVar6 /*2*/])))
									{
										func_19(&(Local_110.f_16C[iVar6 /*2*/]), 0, 0);
									}
									else if (func_18(&(Local_110.f_16C[iVar6 /*2*/]), 7000, 0))
									{
										MISC::SET_BIT(&(Local_110.f_110[func_89(iVar6)]), func_88(iVar6));
										func_104(&(Local_110.f_16C[iVar6 /*2*/]));
									}
								}
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_113[func_89(iVar6)], func_88(iVar6)))
								{
									MISC::SET_BIT(&(Local_110.f_113[func_89(iVar6)]), func_88(iVar6));
								}
							}
						}
					}
					else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_110[func_89(iVar6)], func_88(iVar6)) || Local_110.f_1B == joaat("HYDRA"))
					{
						if (!func_18(&(Local_110.f_19E[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
						{
						}
						func_24(&(Local_110.f_30[(iVar0 * 4 + iVar1)]));
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_110[func_89(iVar6)], func_88(iVar6)))
						{
							if (Local_110.f_55[(iVar0 * 4 + iVar1)] > 0)
							{
								Local_110.f_FE++;
								func_87((iVar0 * 4 + iVar1), func_102(1));
							}
						}
						Local_110.f_55[(iVar0 * 4 + iVar1)] = 0;
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_113[func_89(iVar6)], func_88(iVar6)))
						{
							GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_113[func_89(iVar6)]), func_88(iVar6));
						}
					}
					else
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_110[func_89(iVar6)], func_88(iVar6)))
						{
							if (!func_21(&(Local_110.f_16C[iVar6 /*2*/])))
							{
								func_19(&(Local_110.f_16C[iVar6 /*2*/]), 0, 0);
							}
							else if (func_18(&(Local_110.f_16C[iVar6 /*2*/]), 7000, 0))
							{
								MISC::SET_BIT(&(Local_110.f_110[func_89(iVar6)]), func_88(iVar6));
								func_104(&(Local_110.f_16C[iVar6 /*2*/]));
							}
						}
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_113[func_89(iVar6)], func_88(iVar6)))
						{
							MISC::SET_BIT(&(Local_110.f_113[func_89(iVar6)]), func_88(iVar6));
						}
					}
				}
				iVar1++;
			}
			if (Local_110.f_F9 < func_101())
			{
				if (func_73(iVar0))
				{
				}
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_3), 0);
			}
			iVar0++;
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 2))
	{
		if (Local_110.f_F7 >= Global_40001.f_276E)
		{
			MISC::SET_BIT(&(Local_110.f_3), 2);
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Local_110.f_F3)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_30[(20 + iVar1)]))
			{
				iVar7 = (20 + iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_110.f_30[(20 + iVar1)]), 0))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_3), 2);
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_110[func_89(iVar7)], func_88(iVar7)))
				{
					if (!func_18(&(Local_110.f_19E[(20 + iVar1) /*2*/]), 5000, 0))
					{
					}
					if (func_21(&(Local_110.f_16C[iVar7 /*2*/])))
					{
						func_104(&(Local_110.f_16C[iVar7 /*2*/]));
					}
					func_24(&(Local_110.f_30[(20 + iVar1)]));
					if (Local_110.f_55[(20 + iVar1)] > 0)
					{
						Local_110.f_FE++;
						if (func_96() > 1)
						{
							if (Local_110.f_13D > 0)
							{
								Local_110.f_13C++;
							}
						}
						func_87((20 + iVar1), func_102(1));
					}
					Local_110.f_55[(20 + iVar1)] = 0;
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_113[func_89(iVar7)], func_88(iVar7)))
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_113[func_89(iVar7)]), func_88(iVar7));
					}
				}
				else
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_110[func_89(iVar7)], func_88(iVar7)))
					{
						if (!func_21(&(Local_110.f_16C[iVar7 /*2*/])))
						{
							func_19(&(Local_110.f_16C[iVar7 /*2*/]), 0, 0);
						}
						else if (func_18(&(Local_110.f_16C[iVar7 /*2*/]), 7000, 0))
						{
							MISC::SET_BIT(&(Local_110.f_110[func_89(iVar7)]), func_88(iVar7));
							func_104(&(Local_110.f_16C[iVar7 /*2*/]));
						}
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_113[func_89(iVar7)], func_88(iVar7)))
					{
						MISC::SET_BIT(&(Local_110.f_113[func_89(iVar7)]), func_88(iVar7));
					}
				}
			}
			if (Local_110.f_F7 < func_72())
			{
				if (func_51(iVar1))
				{
				}
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_3), 2);
			}
			iVar1++;
		}
	}
	func_36();
}

void func_36()//Position - 0x1DDE
{
	int iVar0;
	int iVar1;
	
	if (func_96() == 1)
	{
		return;
	}
	if (func_96() == 2)
	{
		if (Local_110.f_FC > 0)
		{
			if (Local_110.f_12E > 0)
			{
				if (Local_110.f_12E >= (Local_110.f_FC - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							iVar0 = Local_110.f_117 + 1;
							if (iVar0 < 10)
							{
								iVar1 = Local_110.f_118[iVar0];
								if (iVar1 != 5)
								{
									func_47();
									Local_110.f_117++;
									func_40();
								}
								else if (Local_110.f_13E >= func_39())
								{
									func_47();
									Local_110.f_117++;
									func_40();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_96() == 3)
	{
		if (Local_110.f_13D > 0)
		{
			if (Local_110.f_13C > 0)
			{
				if (Local_110.f_13C >= Local_110.f_13D)
				{
					if (Local_110.f_13D >= func_38())
					{
						func_47();
						Local_110.f_117++;
						func_40();
					}
				}
			}
		}
	}
	else if (func_96() == 4)
	{
		if (Local_110.f_13C > 0)
		{
			if (Local_110.f_12E > 0)
			{
				if (Local_110.f_13D > 0)
				{
					if (Local_110.f_13C >= (Local_110.f_13D - 2))
					{
						if (Local_110.f_FC > 0)
						{
							if (Local_110.f_12E >= (Local_110.f_FC - 2))
							{
								if (func_50() <= func_49())
								{
									if (func_48() <= func_37())
									{
										iVar0 = Local_110.f_117 + 1;
										if (iVar0 < 10)
										{
											iVar1 = Local_110.f_118[iVar0];
											if (iVar1 != 5)
											{
												func_47();
												Local_110.f_117++;
												func_40();
											}
											else if (Local_110.f_13E >= func_39())
											{
												func_47();
												Local_110.f_117++;
												func_40();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_96() == 5)
	{
		if (Local_110.f_FC > 0)
		{
			if (Local_110.f_12E > 0)
			{
				if (Local_110.f_12E >= (Local_110.f_FC - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							func_47();
							Local_110.f_117++;
							func_40();
						}
					}
				}
			}
		}
	}
}

int func_37()//Position - 0x1FD7
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_110.f_117 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_110.f_118[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_96() == 4)
				{
					return 2;
				}
				else if (func_96() == 2)
				{
					return 1;
				}
				break;
			
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_38()//Position - 0x2057
{
	return Local_110.f_131[Local_110.f_117];
}

int func_39()//Position - 0x206B
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < Local_110.f_116)
	{
		iVar0 = (iVar0 + Local_110.f_131[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_40()//Position - 0x2099
{
	int iVar0;
	
	if (Local_110.f_1D == 4294967295)
	{
		iVar0 = func_46(Local_110.f_1B);
		Local_110.f_1D = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
		if (func_737())
		{
			if (Local_110.f_1B == joaat("HYDRA"))
			{
				if (Local_110.f_1D == 2)
				{
					Local_110.f_1D = 4;
				}
			}
			else if (Local_110.f_1B == joaat("SAVAGE"))
			{
				if (Local_110.f_1D == 0)
				{
					Local_110.f_1D = 1;
				}
				else if (Local_110.f_1D == 1)
				{
					Local_110.f_1D = 2;
				}
				else if (Local_110.f_1D == 2)
				{
					Local_110.f_1D = 3;
				}
			}
			else if (Local_110.f_1B == joaat("VALKYRIE"))
			{
				if (Local_110.f_1D == 2)
				{
					Local_110.f_1D = 3;
				}
				else if (Local_110.f_1D == 3)
				{
					Local_110.f_1D = 4;
				}
			}
			else if (Local_110.f_1B == joaat("BUZZARD"))
			{
				if (Local_110.f_1D == 0)
				{
					Local_110.f_1D = 1;
				}
				else if (Local_110.f_1D == 1)
				{
					Local_110.f_1D = 2;
				}
				else if (Local_110.f_1D == 2)
				{
					Local_110.f_1D = 3;
				}
				else if (Local_110.f_1D == 3)
				{
					Local_110.f_1D = 4;
				}
			}
		}
		else if (Local_110.f_1B == joaat("SAVAGE"))
		{
			if (Local_110.f_1D == 0)
			{
				Local_110.f_1D = 1;
			}
			else if (Local_110.f_1D == 1)
			{
				Local_110.f_1D = 2;
			}
			else if (Local_110.f_1D == 2)
			{
				Local_110.f_1D = 3;
			}
		}
	}
	switch (Local_110.f_1B)
	{
		case joaat("RHINO"):
			Local_110.f_118[0] = 4;
			Local_110.f_123[0] = func_45(4);
			Local_110.f_131[0] = func_44(4);
			Local_110.f_118[1] = 4;
			Local_110.f_123[1] = func_45(4);
			Local_110.f_131[1] = func_44(4);
			Local_110.f_118[2] = 4;
			Local_110.f_123[2] = func_45(4);
			Local_110.f_131[2] = func_44(4);
			if (Local_110.f_C <= 2 || !func_737())
			{
				Local_110.f_116 = 3;
			}
			else if (Local_110.f_C == 3)
			{
				Local_110.f_118[3] = 4;
				Local_110.f_123[3] = func_45(4);
				Local_110.f_131[3] = func_44(4);
				Local_110.f_116 = 4;
			}
			else
			{
				Local_110.f_118[3] = 4;
				Local_110.f_123[3] = func_45(4);
				Local_110.f_131[3] = func_44(4);
				Local_110.f_118[4] = 4;
				Local_110.f_123[4] = func_45(4);
				Local_110.f_131[4] = func_44(4);
				Local_110.f_116 = 5;
			}
			Local_110.f_FF = func_41();
			if (!func_737())
			{
				Local_110.f_1 = 0;
			}
			else
			{
				Local_110.f_1 = 5;
			}
			Local_110.f_2 = Local_110.f_1D;
			switch (Local_110.f_1D)
			{
				case 0:
					Local_110.f_1E[0 /*3*/] = { 1016.734f, 2360.83f, 50.4559f };
					Local_110.f_2B[0] = 269.414f;
					Local_110.f_1E[1 /*3*/] = { 1002.526f, 2390.64f, 50.5438f };
					Local_110.f_2B[1] = 3.5491f;
					Local_110.f_1E[2 /*3*/] = { 986.0139f, 2301.592f, 48.8235f };
					Local_110.f_2B[2] = 54.4509f;
					Local_110.f_1E[3 /*3*/] = { 977.1004f, 2371.714f, 51.0115f };
					Local_110.f_2B[3] = 178.1948f;
					Local_110.f_9F[0 /*3*/] = { 1028.325f, 2436.455f, 44.2365f };
					Local_110.f_AF[0] = 270.8322f;
					Local_110.f_9F[1 /*3*/] = { 1166.498f, 2403.021f, 56.662f };
					Local_110.f_AF[1] = 177.3506f;
					Local_110.f_9F[2 /*3*/] = { 892.8997f, 2465.881f, 49.7859f };
					Local_110.f_AF[2] = 318.1089f;
					Local_110.f_9F[3 /*3*/] = { 1078.988f, 2246.879f, 43.7942f };
					Local_110.f_AF[3] = 272.0801f;
					Local_110.f_9F[4 /*3*/] = { 1016.784f, 2259.447f, 43.8512f };
					Local_110.f_AF[4] = 104.0591f;
					Local_110.f_75[0 /*3*/] = { 1042.504f, 2280.497f, 48.6315f };
					Local_110.f_94[0] = 296.4225f;
					Local_110.f_75[1 /*3*/] = { 991.9136f, 2278.353f, 48.1838f };
					Local_110.f_94[1] = 164.9695f;
					Local_110.f_75[2 /*3*/] = { 1029.763f, 2447.042f, 44.5979f };
					Local_110.f_94[2] = 136.0596f;
					Local_110.f_75[3 /*3*/] = { 971.0186f, 2422.765f, 50.6913f };
					Local_110.f_94[3] = 116.379f;
					Local_110.f_75[4 /*3*/] = { 1017.264f, 2432.009f, 45.2054f };
					Local_110.f_94[4] = 86.6586f;
					Local_110.f_75[5 /*3*/] = { 1072.751f, 2237.599f, 43.3802f };
					Local_110.f_94[5] = 74.6822f;
					Local_110.f_75[6 /*3*/] = { 944.4364f, 2407.392f, 50.0925f };
					Local_110.f_94[6] = 206.8863f;
					Local_110.f_75[7 /*3*/] = { 1059.804f, 2280.784f, 48.5613f };
					Local_110.f_94[7] = 267.8581f;
					Local_110.f_75[8 /*3*/] = { 1004.272f, 2372.344f, 54.5719f };
					Local_110.f_94[8] = 267.5856f;
					Local_110.f_75[9 /*3*/] = { 972.3055f, 2235.821f, 53.1094f };
					Local_110.f_94[9] = 325.0964f;
					break;
				
				case 1:
					Local_110.f_1E[0 /*3*/] = { 1733.134f, 3302.545f, 40.2235f };
					Local_110.f_2B[0] = 194.8062f;
					Local_110.f_1E[1 /*3*/] = { 1761.281f, 3309.879f, 40.1489f };
					Local_110.f_2B[1] = 238.9372f;
					Local_110.f_1E[2 /*3*/] = { 1755.753f, 3236.49f, 41.0341f };
					Local_110.f_2B[2] = 16.3071f;
					Local_110.f_1E[3 /*3*/] = { 1676.76f, 3279.734f, 39.8901f };
					Local_110.f_2B[3] = 209.9883f;
					Local_110.f_75[0 /*3*/] = { 1758.449f, 3309.247f, 40.1417f };
					Local_110.f_94[0] = 221.3913f;
					Local_110.f_75[1 /*3*/] = { 1746.445f, 3323.75f, 40.1528f };
					Local_110.f_94[1] = 246.3415f;
					Local_110.f_75[2 /*3*/] = { 1775.057f, 3332.943f, 40.3398f };
					Local_110.f_94[2] = 213.4087f;
					Local_110.f_75[3 /*3*/] = { 1713.24f, 3302.458f, 40.1851f };
					Local_110.f_94[3] = 100.5405f;
					Local_110.f_75[4 /*3*/] = { 1693.817f, 3293.163f, 40.1465f };
					Local_110.f_94[4] = 289.6017f;
					Local_110.f_75[5 /*3*/] = { 1697.449f, 3176.312f, 44.0261f };
					Local_110.f_94[5] = 285.6456f;
					Local_110.f_75[6 /*3*/] = { 1710.565f, 3180.909f, 43.2884f };
					Local_110.f_94[6] = 310.9245f;
					Local_110.f_75[7 /*3*/] = { 1627.436f, 3198.51f, 39.9059f };
					Local_110.f_94[7] = 46.7117f;
					Local_110.f_75[8 /*3*/] = { 1788.401f, 3208.964f, 43.0201f };
					Local_110.f_94[8] = 35.9192f;
					Local_110.f_75[9 /*3*/] = { 1698.308f, 3289.254f, 47.8594f };
					Local_110.f_94[9] = 207.53f;
					Local_110.f_9F[0 /*3*/] = { 1669.932f, 3132.549f, 42.2874f };
					Local_110.f_AF[0] = 286.6127f;
					Local_110.f_9F[1 /*3*/] = { 1943.321f, 3263.146f, 44.7265f };
					Local_110.f_AF[1] = 124.1428f;
					Local_110.f_9F[2 /*3*/] = { 1151.224f, 3172.348f, 40.6704f };
					Local_110.f_AF[2] = 275.0147f;
					Local_110.f_9F[3 /*3*/] = { 1134.716f, 3169.23f, 40.6443f };
					Local_110.f_AF[3] = 287.91f;
					Local_110.f_9F[4 /*3*/] = { 1311.352f, 2963.962f, 40.0443f };
					Local_110.f_AF[4] = 270.287f;
					break;
				
				case 2:
					Local_110.f_1E[0 /*3*/] = { 2703.281f, 1576.7f, 23.527f };
					Local_110.f_2B[0] = 172.439f;
					Local_110.f_1E[1 /*3*/] = { 2702.781f, 1512.725f, 23.5199f };
					Local_110.f_2B[1] = 53.9805f;
					Local_110.f_1E[2 /*3*/] = { 2678.432f, 1518.734f, 23.5295f };
					Local_110.f_2B[2] = 303.2142f;
					Local_110.f_1E[3 /*3*/] = { 2677.509f, 1566.525f, 23.501f };
					Local_110.f_2B[3] = 218.5974f;
					Local_110.f_75[0 /*3*/] = { 2621.796f, 1695.869f, 26.5983f };
					Local_110.f_94[0] = 264.5842f;
					Local_110.f_75[1 /*3*/] = { 2746.846f, 1567.683f, 23.501f };
					Local_110.f_94[1] = 133.7932f;
					Local_110.f_75[2 /*3*/] = { 2664.273f, 1599.201f, 23.7604f };
					Local_110.f_94[2] = 205.1215f;
					Local_110.f_75[3 /*3*/] = { 2757.255f, 1576.939f, 23.501f };
					Local_110.f_94[3] = 66.1065f;
					Local_110.f_75[4 /*3*/] = { 2714.176f, 1480.445f, 23.5007f };
					Local_110.f_94[4] = 7.8064f;
					Local_110.f_75[5 /*3*/] = { 2713.364f, 1450.272f, 23.6191f };
					Local_110.f_94[5] = 358.7563f;
					Local_110.f_75[6 /*3*/] = { 2739.862f, 1463.719f, 23.5015f };
					Local_110.f_94[6] = 142.1748f;
					Local_110.f_75[7 /*3*/] = { 2676.403f, 1589.224f, 26.2548f };
					Local_110.f_94[7] = 247.816f;
					Local_110.f_75[8 /*3*/] = { 2703.085f, 1685.568f, 23.4887f };
					Local_110.f_94[8] = 124.4666f;
					Local_110.f_75[9 /*3*/] = { 2665.022f, 1409.433f, 23.538f };
					Local_110.f_94[9] = 348.6588f;
					Local_110.f_9F[0 /*3*/] = { 2737.115f, 1697.578f, 23.6755f };
					Local_110.f_AF[0] = 89.8563f;
					Local_110.f_9F[1 /*3*/] = { 2778.598f, 1458.218f, 23.5382f };
					Local_110.f_AF[1] = 163.8004f;
					Local_110.f_9F[2 /*3*/] = { 2529.779f, 1641.113f, 27.9752f };
					Local_110.f_AF[2] = 270.0754f;
					Local_110.f_9F[3 /*3*/] = { 2665.372f, 1702.379f, 23.4882f };
					Local_110.f_AF[3] = 184.9752f;
					Local_110.f_9F[4 /*3*/] = { 2726.623f, 1640.299f, 23.5607f };
					Local_110.f_AF[4] = 90.4555f;
					break;
				
				case 3:
				case 4:
					Local_110.f_1E[0 /*3*/] = { 1088.383f, -3024.919f, 4.901f };
					Local_110.f_2B[0] = 0.5044f;
					Local_110.f_1E[1 /*3*/] = { 1086.846f, -2975.534f, 4.9012f };
					Local_110.f_2B[1] = 179.2507f;
					Local_110.f_1E[2 /*3*/] = { 986.4979f, -3024.68f, 4.9008f };
					Local_110.f_2B[2] = 0.3066f;
					Local_110.f_1E[3 /*3*/] = { 986.1768f, -2972.394f, 4.9012f };
					Local_110.f_2B[3] = 180.2973f;
					Local_110.f_75[0 /*3*/] = { 991.85f, -2969.792f, 4.9008f };
					Local_110.f_94[0] = 336.7541f;
					Local_110.f_75[1 /*3*/] = { 1178.155f, -3022.33f, 4.9021f };
					Local_110.f_94[1] = 6.0929f;
					Local_110.f_75[2 /*3*/] = { 1107.679f, -2983.992f, 4.901f };
					Local_110.f_94[2] = 4.2803f;
					Local_110.f_75[3 /*3*/] = { 1043.869f, -2979.597f, 4.901f };
					Local_110.f_94[3] = 274.985f;
					Local_110.f_75[4 /*3*/] = { 1042.952f, -3031.76f, 4.901f };
					Local_110.f_94[4] = 267.2555f;
					Local_110.f_75[5 /*3*/] = { 1095.349f, -3077.492f, 4.8877f };
					Local_110.f_94[5] = 6.5529f;
					Local_110.f_75[6 /*3*/] = { 1114.924f, -3031.319f, 4.901f };
					Local_110.f_94[6] = 89.1724f;
					Local_110.f_75[7 /*3*/] = { 1048.021f, -3077.814f, 4.901f };
					Local_110.f_94[7] = 348.279f;
					Local_110.f_75[8 /*3*/] = { 995.4651f, -3036.897f, 4.9008f };
					Local_110.f_94[8] = 267.8075f;
					Local_110.f_75[9 /*3*/] = { 1101.347f, -2968.894f, 13.3329f };
					Local_110.f_94[9] = 0.5237f;
					Local_110.f_9F[0 /*3*/] = { 1254.191f, -3126.908f, 4.8012f };
					Local_110.f_AF[0] = 357.9713f;
					Local_110.f_9F[1 /*3*/] = { 856.4759f, -3118.969f, 4.9008f };
					Local_110.f_AF[1] = 269.3234f;
					Local_110.f_9F[2 /*3*/] = { 838.2247f, -3118.748f, 4.9008f };
					Local_110.f_AF[2] = 269.3055f;
					Local_110.f_9F[3 /*3*/] = { 1197.595f, -2983.872f, 4.9021f };
					Local_110.f_AF[3] = 359.1497f;
					Local_110.f_9F[4 /*3*/] = { 962.6804f, -3016.159f, 4.9017f };
					Local_110.f_AF[4] = 270.0873f;
					break;
			}
			break;
		
		case joaat("SAVAGE"):
			Local_110.f_F0 = joaat("INSURGENT");
			Local_110.f_118[0] = 2;
			Local_110.f_123[0] = func_45(2);
			Local_110.f_118[1] = 4;
			Local_110.f_123[1] = func_45(4);
			Local_110.f_131[1] = func_44(4);
			Local_110.f_118[2] = 2;
			Local_110.f_123[2] = func_45(2);
			if (Local_110.f_C <= 2 || !func_737())
			{
				Local_110.f_118[3] = 5;
				Local_110.f_123[3] = func_45(5);
				Local_110.f_116 = 4;
			}
			else if (Local_110.f_C == 3)
			{
				Local_110.f_118[3] = 4;
				Local_110.f_123[3] = func_45(4);
				Local_110.f_131[3] = func_44(4);
				Local_110.f_118[4] = 2;
				Local_110.f_123[4] = func_45(2);
				Local_110.f_118[5] = 5;
				Local_110.f_123[5] = func_45(5);
				Local_110.f_116 = 6;
			}
			else
			{
				Local_110.f_118[3] = 4;
				Local_110.f_123[3] = func_45(4);
				Local_110.f_131[3] = func_44(4);
				Local_110.f_118[4] = 2;
				Local_110.f_123[4] = func_45(2);
				Local_110.f_118[5] = 4;
				Local_110.f_123[5] = func_45(4);
				Local_110.f_131[5] = func_44(4);
				Local_110.f_118[6] = 5;
				Local_110.f_123[6] = func_45(5);
				Local_110.f_116 = 7;
			}
			Local_110.f_FF = func_41();
			if (!func_737())
			{
				Local_110.f_1 = 2;
			}
			else
			{
				Local_110.f_1 = 7;
			}
			Local_110.f_2 = Local_110.f_1D;
			switch (Local_110.f_1D)
			{
				case 0:
					Local_110.f_1E[0 /*3*/] = { -1177.65f, -2845.542f, 12.9458f };
					Local_110.f_2B[0] = 331.74f;
					Local_110.f_1E[1 /*3*/] = { -1082.479f, -2900.191f, 12.9478f };
					Local_110.f_2B[1] = 327.7335f;
					Local_110.f_1E[2 /*3*/] = { -1202.019f, -2873.67f, 12.9454f };
					Local_110.f_2B[2] = 149.1604f;
					Local_110.f_1E[3 /*3*/] = { -1126.58f, -2918.416f, 12.9454f };
					Local_110.f_2B[3] = 150.6753f;
					Local_110.f_75[0 /*3*/] = { -985.8373f, -2942.973f, 12.9451f };
					Local_110.f_94[0] = 147.2177f;
					Local_110.f_75[1 /*3*/] = { -1051.412f, -2880.828f, 29.3631f };
					Local_110.f_94[1] = 103.9461f;
					Local_110.f_75[2 /*3*/] = { -1154.54f, -2821.091f, 29.3631f };
					Local_110.f_94[2] = 160.822f;
					Local_110.f_75[3 /*3*/] = { -1211.898f, -2789.125f, 12.9523f };
					Local_110.f_94[3] = 205.8375f;
					Local_110.f_75[4 /*3*/] = { -1199.493f, -2724.709f, 12.9771f };
					Local_110.f_94[4] = 124.7328f;
					break;
				
				case 1:
					Local_110.f_1E[0 /*3*/] = { 1930.067f, 4710.339f, 40.1633f };
					Local_110.f_2B[0] = 344.2504f;
					Local_110.f_1E[1 /*3*/] = { 1954.56f, 4724.181f, 40.0604f };
					Local_110.f_2B[1] = 340.3425f;
					Local_110.f_1E[2 /*3*/] = { 2004.913f, 4748.04f, 40.0604f };
					Local_110.f_2B[2] = 351.5693f;
					Local_110.f_1E[3 /*3*/] = { 2027.928f, 4757.387f, 40.0595f };
					Local_110.f_2B[3] = 354.2446f;
					Local_110.f_75[0 /*3*/] = { 1954.209f, 4653.232f, 39.7136f };
					Local_110.f_94[0] = 245.2865f;
					Local_110.f_75[1 /*3*/] = { 2116.177f, 4761.993f, 40.2281f };
					Local_110.f_94[1] = 74.1185f;
					Local_110.f_75[2 /*3*/] = { 2123.414f, 4784.407f, 39.9703f };
					Local_110.f_94[2] = 10.2312f;
					Local_110.f_75[3 /*3*/] = { 1925.159f, 4817.925f, 43.9706f };
					Local_110.f_94[3] = 222.4017f;
					Local_110.f_75[4 /*3*/] = { 2009.58f, 4802.505f, 41.009f };
					Local_110.f_94[4] = 150.2763f;
					Local_110.f_75[5 /*3*/] = { 2133.472f, 4834.528f, 40.347f };
					Local_110.f_94[5] = 105.4526f;
					Local_110.f_75[6 /*3*/] = { 2139.058f, 4792.084f, 39.9703f };
					Local_110.f_94[6] = 88.9429f;
					Local_110.f_75[7 /*3*/] = { 2014.276f, 4721.062f, 40.6111f };
					Local_110.f_94[7] = 51.1733f;
					Local_110.f_75[8 /*3*/] = { 2060.417f, 4847.691f, 40.8344f };
					Local_110.f_94[8] = 169.7083f;
					Local_110.f_75[9 /*3*/] = { 2151.434f, 4789.446f, 39.9594f };
					Local_110.f_94[9] = 29.5849f;
					Local_110.f_F3 = 3;
					break;
				
				case 2:
					if (!func_737())
					{
						Local_110.f_1E[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_110.f_2B[0] = 319.153f;
					}
					else
					{
						Local_110.f_1E[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_110.f_2B[0] = 319.153f;
						Local_110.f_1E[1 /*3*/] = { 218.7712f, 7018.654f, 1.0042f };
						Local_110.f_2B[1] = 316.7079f;
						Local_110.f_1E[2 /*3*/] = { 230.1561f, 7001.589f, 1.2508f };
						Local_110.f_2B[2] = 316.9623f;
						Local_110.f_1E[3 /*3*/] = { 242.3287f, 6987.263f, 1.7354f };
						Local_110.f_2B[3] = 314.2003f;
					}
					Local_110.f_75[0 /*3*/] = { 131.5444f, 6956.887f, 12.1839f };
					Local_110.f_94[0] = 326.4292f;
					Local_110.f_75[1 /*3*/] = { 201.7152f, 6842.864f, 21.2216f };
					Local_110.f_94[1] = 6.8118f;
					Local_110.f_75[2 /*3*/] = { 66.3015f, 6924.146f, 12.2944f };
					Local_110.f_94[2] = 32.8776f;
					Local_110.f_75[3 /*3*/] = { 42.4962f, 7055.19f, 1.3986f };
					Local_110.f_94[3] = 8.387f;
					Local_110.f_75[4 /*3*/] = { 146.7828f, 6849.039f, 17.571f };
					Local_110.f_94[4] = 291.5504f;
					Local_110.f_75[5 /*3*/] = { 290.266f, 6946.917f, 3.1171f };
					Local_110.f_94[5] = 333.1838f;
					Local_110.f_75[6 /*3*/] = { 50.5669f, 7102.213f, 2.0034f };
					Local_110.f_94[6] = 203.8353f;
					Local_110.f_75[7 /*3*/] = { 274.1516f, 6856.506f, 15.8452f };
					Local_110.f_94[7] = 32.2329f;
					Local_110.f_75[8 /*3*/] = { 88.9963f, 7113.472f, 24.5763f };
					Local_110.f_94[8] = 195.4847f;
					Local_110.f_75[9 /*3*/] = { 131.6119f, 6956.082f, 12.2413f };
					Local_110.f_94[9] = 327.4941f;
					Local_110.f_F3 = 4;
					break;
				
				case 3:
					if (!func_737())
					{
						Local_110.f_1E[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_110.f_2B[0] = 156.0209f;
					}
					else
					{
						Local_110.f_1E[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_110.f_2B[0] = 156.0209f;
						Local_110.f_1E[1 /*3*/] = { 699.7866f, -1637.337f, 8.7086f };
						Local_110.f_2B[1] = 41.8571f;
						Local_110.f_1E[2 /*3*/] = { 663.725f, -1634.052f, 8.7086f };
						Local_110.f_2B[2] = 305.7411f;
						Local_110.f_1E[3 /*3*/] = { 662.7472f, -1596.468f, 8.7086f };
						Local_110.f_2B[3] = 223.2489f;
					}
					if (func_96() == 2 || func_96() == 5)
					{
						Local_110.f_F2 = 3;
					}
					else
					{
						Local_110.f_F2 = 4;
					}
					Local_110.f_75[0 /*3*/] = { 585.7374f, -1450.264f, 19.043f };
					Local_110.f_94[0] = 197.3456f;
					Local_110.f_75[1 /*3*/] = { 784.6684f, -1526.172f, 9.5498f };
					Local_110.f_94[1] = 140.7211f;
					Local_110.f_75[2 /*3*/] = { 790.8864f, -1603.665f, 30.2421f };
					Local_110.f_94[2] = 98.9528f;
					Local_110.f_75[3 /*3*/] = { 782.042f, -1487.963f, 19.2726f };
					Local_110.f_94[3] = 107.0238f;
					Local_110.f_75[4 /*3*/] = { 698.9001f, -1443.555f, 21.3382f };
					Local_110.f_94[4] = 202.129f;
					Local_110.f_75[5 /*3*/] = { 566.2017f, -1506.386f, 27.1027f };
					Local_110.f_94[5] = 230.1207f;
					Local_110.f_75[6 /*3*/] = { 752.1943f, -1491.94f, 19.4421f };
					Local_110.f_94[6] = 36.194f;
					Local_110.f_75[7 /*3*/] = { 702.7894f, -1452.929f, 30.3215f };
					Local_110.f_94[7] = 48.2522f;
					Local_110.f_75[8 /*3*/] = { 592.6577f, -1452.304f, 28.8626f };
					Local_110.f_94[8] = 296.114f;
					Local_110.f_75[9 /*3*/] = { 794.9213f, -1660.62f, 43.147f };
					Local_110.f_94[9] = 3.1632f;
					break;
			}
			break;
		
		case joaat("HYDRA"):
			Local_110.f_F0 = joaat("LAZER");
			Local_110.f_118[0] = 2;
			Local_110.f_123[0] = func_45(2);
			Local_110.f_118[1] = 2;
			Local_110.f_123[1] = func_45(2);
			Local_110.f_118[2] = 2;
			Local_110.f_123[2] = func_45(2);
			if (Local_110.f_C <= 2 || !func_737())
			{
				Local_110.f_116 = 3;
			}
			else if (Local_110.f_C == 3)
			{
				Local_110.f_118[3] = 2;
				Local_110.f_123[3] = func_45(2);
				Local_110.f_118[4] = 2;
				Local_110.f_123[4] = func_45(2);
				Local_110.f_116 = 5;
			}
			else
			{
				Local_110.f_118[3] = 2;
				Local_110.f_123[3] = func_45(2);
				Local_110.f_118[4] = 2;
				Local_110.f_123[4] = func_45(2);
				Local_110.f_118[5] = 2;
				Local_110.f_123[5] = func_45(2);
				Local_110.f_116 = 6;
			}
			Local_110.f_FF = func_41();
			if (!func_737())
			{
				Local_110.f_1 = 1;
			}
			else
			{
				Local_110.f_1 = 6;
			}
			Local_110.f_2 = Local_110.f_1D;
			switch (Local_110.f_1D)
			{
				case 0:
					if (!func_737())
					{
						Local_110.f_1E[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_110.f_2B[0] = 197.4435f;
					}
					else
					{
						Local_110.f_1E[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_110.f_2B[0] = 197.4435f;
						Local_110.f_1E[1 /*3*/] = { 132.5468f, -2805.181f, 5.0002f };
						Local_110.f_2B[1] = 197.1133f;
						Local_110.f_1E[2 /*3*/] = { 123.1125f, -2823.665f, 5.0002f };
						Local_110.f_2B[2] = 272.2065f;
						Local_110.f_1E[3 /*3*/] = { 163.5494f, -2795.92f, 5.0002f };
						Local_110.f_2B[3] = 142.941f;
					}
					Local_110.f_9F[0 /*3*/] = { 887.9951f, -3884.45f, 54.3252f };
					Local_110.f_AF[0] = 34.149f;
					Local_110.f_9F[1 /*3*/] = { -255.1527f, -4101.981f, 100.1964f };
					Local_110.f_AF[1] = -26.0182f;
					Local_110.f_9F[2 /*3*/] = { 1271.189f, -3196.243f, 104.9035f };
					Local_110.f_AF[2] = 88.3998f;
					Local_110.f_9F[3 /*3*/] = { -879.6379f, -2210.024f, 245.712f };
					Local_110.f_AF[3] = -141.7949f;
					Local_110.f_E4[0] = 10000;
					Local_110.f_E4[1] = 10000;
					Local_110.f_E4[2] = 10000;
					Local_110.f_E4[3] = 10000;
					Local_110.f_75[0 /*3*/] = { 546.2563f, -3289.316f, 17.714f };
					Local_110.f_94[0] = 143.4012f;
					Local_110.f_75[1 /*3*/] = { 596.183f, -3288.174f, 17.714f };
					Local_110.f_94[1] = 212.1136f;
					Local_110.f_75[2 /*3*/] = { 500.3511f, -3338.894f, 23.591f };
					Local_110.f_94[2] = 95.8248f;
					Local_110.f_75[3 /*3*/] = { 480.8767f, -3238.414f, 5.0696f };
					Local_110.f_94[3] = 113.3084f;
					Local_110.f_75[4 /*3*/] = { 444.4339f, -3187.956f, 5.0703f };
					Local_110.f_94[4] = 260.1329f;
					Local_110.f_F2 = 4;
					break;
				
				case 1:
					if (!func_737())
					{
						Local_110.f_1E[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_110.f_2B[0] = 131.0993f;
					}
					else
					{
						Local_110.f_1E[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_110.f_2B[0] = 131.0993f;
						Local_110.f_1E[1 /*3*/] = { -1734.978f, -796.148f, 8.3998f };
						Local_110.f_2B[1] = 127.8408f;
						Local_110.f_1E[2 /*3*/] = { -1762.095f, -758.1465f, 8.6368f };
						Local_110.f_2B[2] = 131.1571f;
						Local_110.f_1E[3 /*3*/] = { -1792.501f, -751.6967f, 8.1782f };
						Local_110.f_2B[3] = 132.943f;
					}
					Local_110.f_9F[0 /*3*/] = { -1876.497f, -665.6128f, 109.1172f };
					Local_110.f_AF[0] = 316.9068f;
					Local_110.f_9F[1 /*3*/] = { -1099.297f, 20.5145f, 150.0107f };
					Local_110.f_AF[1] = 142.3075f;
					Local_110.f_9F[2 /*3*/] = { -803.6566f, -866.03f, 137.4505f };
					Local_110.f_AF[2] = 93.1231f;
					Local_110.f_9F[3 /*3*/] = { -1697.535f, -1306.955f, 127.8882f };
					Local_110.f_AF[3] = -9.0334f;
					Local_110.f_E4[0] = 10000;
					Local_110.f_E4[1] = 10000;
					Local_110.f_E4[2] = 10000;
					Local_110.f_E4[3] = 10000;
					Local_110.f_75[0 /*3*/] = { -1468.446f, -546.457f, 84.073f };
					Local_110.f_94[0] = 236.3566f;
					Local_110.f_75[1 /*3*/] = { -1288.024f, -439.2769f, 102.47f };
					Local_110.f_94[1] = 212.7533f;
					Local_110.f_75[2 /*3*/] = { -1556.831f, -589.7376f, 32.9884f };
					Local_110.f_94[2] = 299.3619f;
					Local_110.f_75[3 /*3*/] = { -1353.281f, -514.1478f, 22.2694f };
					Local_110.f_94[3] = 115.7556f;
					Local_110.f_75[4 /*3*/] = { -1314.693f, -570.6011f, 28.3023f };
					Local_110.f_94[4] = 191.3862f;
					Local_110.f_F2 = 4;
					break;
				
				case 2:
					Local_110.f_1E[0 /*3*/] = { 737.7632f, 1292.348f, 359.296f };
					Local_110.f_2B[0] = 176.244f;
					Local_110.f_9F[0 /*3*/] = { 737.1152f, 1296.363f, 459.296f };
					Local_110.f_AF[0] = 93.8354f;
					Local_110.f_9F[1 /*3*/] = { -425.5261f, 1185.381f, 324.6416f };
					Local_110.f_AF[1] = 250.5173f;
					Local_110.f_9F[2 /*3*/] = { 1157.617f, 116.7023f, 180.3293f };
					Local_110.f_AF[2] = 337.8961f;
					Local_110.f_9F[3 /*3*/] = { 1604.747f, 2094.859f, 184.1727f };
					Local_110.f_AF[3] = 142.1369f;
					Local_110.f_E4[0] = 10000;
					Local_110.f_E4[1] = 10000;
					Local_110.f_E4[2] = 10000;
					Local_110.f_E4[3] = 10000;
					Local_110.f_75[0 /*3*/] = { 662.439f, 1284.189f, 359.296f };
					Local_110.f_94[0] = 208.2624f;
					Local_110.f_75[1 /*3*/] = { 782.1017f, 1279.344f, 359.2967f };
					Local_110.f_94[1] = 349.048f;
					Local_110.f_75[2 /*3*/] = { 769.1426f, 1300.744f, 359.2967f };
					Local_110.f_94[2] = 69.8162f;
					Local_110.f_75[3 /*3*/] = { 750.6609f, 1209.155f, 326.5541f };
					Local_110.f_94[3] = 286.6181f;
					Local_110.f_F2 = 4;
					Local_110.f_F3 = 4;
					break;
				
				case 3:
					Local_110.f_1E[0 /*3*/] = { 2521.121f, -471.1436f, 91.9971f };
					Local_110.f_2B[0] = 292.0822f;
					Local_110.f_1E[1 /*3*/] = { 2510.273f, -473.5832f, 91.9929f };
					Local_110.f_2B[1] = 43.3907f;
					Local_110.f_1E[2 /*3*/] = { 2481.39f, -320.2297f, 91.9927f };
					Local_110.f_2B[2] = 124.2279f;
					Local_110.f_1E[3 /*3*/] = { 2560.314f, -438.3987f, 91.9926f };
					Local_110.f_2B[3] = 129.3366f;
					Local_110.f_9F[0 /*3*/] = { 2870.504f, 368.2049f, 101.6602f };
					Local_110.f_AF[0] = 137.5025f;
					Local_110.f_9F[1 /*3*/] = { 1859.596f, 272.0942f, 162.159f };
					Local_110.f_AF[1] = 227.9336f;
					Local_110.f_9F[2 /*3*/] = { 2666.033f, -931.6996f, 100.6606f };
					Local_110.f_AF[2] = 6.0299f;
					Local_110.f_9F[3 /*3*/] = { 1336.474f, -345.6518f, 424.9653f };
					Local_110.f_AF[3] = -87.5596f;
					Local_110.f_E4[0] = 10000;
					Local_110.f_E4[1] = 10000;
					Local_110.f_E4[2] = 10000;
					Local_110.f_E4[3] = 10000;
					Local_110.f_F2 = 4;
					Local_110.f_75[0 /*3*/] = { 2528.376f, -424.9132f, 113.09f };
					Local_110.f_94[0] = 338.8487f;
					Local_110.f_75[1 /*3*/] = { 2473.828f, -384.0913f, 108.6521f };
					Local_110.f_94[1] = 272.5443f;
					Local_110.f_75[2 /*3*/] = { 2535.322f, -335.4323f, 113.0844f };
					Local_110.f_94[2] = 223.0158f;
					Local_110.f_75[3 /*3*/] = { 2478.752f, -416.0706f, 92.7351f };
					Local_110.f_94[3] = 355.6682f;
					Local_110.f_75[4 /*3*/] = { 2482.176f, -353.0269f, 92.7351f };
					Local_110.f_94[4] = 179.3658f;
					break;
				
				case 4:
					if (!func_737())
					{
						Local_110.f_1E[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_110.f_2B[0] = 331.7771f;
					}
					else
					{
						Local_110.f_1E[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_110.f_2B[0] = 331.7771f;
						Local_110.f_1E[1 /*3*/] = { -1841.38f, -3156.666f, 12.9444f };
						Local_110.f_2B[1] = 324.1843f;
						Local_110.f_1E[2 /*3*/] = { -1860.858f, -3143.922f, 12.9444f };
						Local_110.f_2B[2] = 330.0586f;
						Local_110.f_1E[3 /*3*/] = { -1885.131f, -3129.948f, 12.9444f };
						Local_110.f_2B[3] = 329.5413f;
					}
					Local_110.f_9F[0 /*3*/] = { -1185.202f, -2364.726f, 112.9452f };
					Local_110.f_AF[0] = 146.9594f;
					Local_110.f_9F[1 /*3*/] = { -382.1712f, -2495.05f, 105.0008f };
					Local_110.f_AF[1] = 137.6555f;
					Local_110.f_9F[2 /*3*/] = { -412.0741f, -2847.307f, 105.0004f };
					Local_110.f_AF[2] = 114.7478f;
					Local_110.f_9F[3 /*3*/] = { -2538.447f, -3165.758f, 133.9589f };
					Local_110.f_AF[3] = -84.6269f;
					Local_110.f_E4[0] = 10000;
					Local_110.f_E4[1] = 10000;
					Local_110.f_E4[2] = 10000;
					Local_110.f_E4[3] = 10000;
					Local_110.f_F2 = 4;
					Local_110.f_75[0 /*3*/] = { -1051.566f, -2880.667f, 29.3631f };
					Local_110.f_94[0] = 153.0449f;
					Local_110.f_75[1 /*3*/] = { -1154.167f, -2821.089f, 29.3631f };
					Local_110.f_94[1] = 153.1271f;
					Local_110.f_75[2 /*3*/] = { -1441.866f, -3280.676f, 12.9449f };
					Local_110.f_94[2] = 331.3771f;
					Local_110.f_75[3 /*3*/] = { -1209.32f, -2789.023f, 12.9523f };
					Local_110.f_94[3] = 183.2579f;
					Local_110.f_75[4 /*3*/] = { -1239.188f, -2688.943f, 12.9449f };
					Local_110.f_94[4] = 149.3518f;
					break;
				
				case 5:
					Local_110.f_1E[0 /*3*/] = { -144.0471f, -593.1377f, 210.7752f };
					Local_110.f_2B[0] = 184.7817f;
					Local_110.f_9F[0 /*3*/] = { 449.0346f, -981.1837f, 142.6917f };
					Local_110.f_AF[0] = 91.7761f;
					Local_110.f_9F[1 /*3*/] = { -665.604f, -932.722f, 145.3242f };
					Local_110.f_AF[1] = 269.7376f;
					Local_110.f_9F[2 /*3*/] = { -686.7255f, 217.4708f, 136.5301f };
					Local_110.f_AF[1] = 211.4614f;
					Local_110.f_9F[3 /*3*/] = { 314.4621f, -130.8896f, 222.2372f };
					Local_110.f_AF[3] = 148.9204f;
					Local_110.f_E4[0] = 10000;
					Local_110.f_E4[1] = 10000;
					Local_110.f_E4[2] = 10000;
					Local_110.f_E4[3] = 10000;
					Local_110.f_F2 = 4;
					Local_110.f_75[0 /*3*/] = { -159.1301f, -600.2693f, 200.7354f };
					Local_110.f_94[0] = 113.298f;
					Local_110.f_75[1 /*3*/] = { -145.0832f, -578.3243f, 200.7354f };
					Local_110.f_94[1] = 353.0292f;
					Local_110.f_75[2 /*3*/] = { -135.3186f, -606.2405f, 200.7354f };
					Local_110.f_94[2] = 216.1793f;
					Local_110.f_75[3 /*3*/] = { -208.5985f, -725.582f, 219.5222f };
					Local_110.f_94[3] = 347.4008f;
					Local_110.f_F3 = 4;
					break;
			}
			break;
		
		case joaat("VALKYRIE"):
			Local_110.f_F0 = joaat("BUZZARD");
			Local_110.f_118[0] = 2;
			Local_110.f_123[0] = func_45(2);
			Local_110.f_131[0] = func_44(4);
			Local_110.f_118[1] = 4;
			Local_110.f_123[1] = func_45(4);
			Local_110.f_131[1] = func_44(4);
			Local_110.f_118[2] = 2;
			Local_110.f_123[2] = func_45(2);
			Local_110.f_131[2] = func_44(4);
			if (Local_110.f_C <= 2 || !func_737())
			{
				Local_110.f_118[3] = 5;
				Local_110.f_123[3] = func_45(5);
				Local_110.f_116 = 4;
			}
			else if (Local_110.f_C == 3)
			{
				Local_110.f_118[3] = 4;
				Local_110.f_123[3] = func_45(4);
				Local_110.f_131[3] = func_44(4);
				Local_110.f_118[4] = 2;
				Local_110.f_123[4] = func_45(2);
				Local_110.f_118[5] = 5;
				Local_110.f_123[5] = func_45(5);
				Local_110.f_116 = 6;
			}
			else
			{
				Local_110.f_118[3] = 4;
				Local_110.f_123[3] = func_45(4);
				Local_110.f_131[3] = func_44(4);
				Local_110.f_118[4] = 2;
				Local_110.f_123[4] = func_45(2);
				Local_110.f_118[5] = 4;
				Local_110.f_123[5] = func_45(4);
				Local_110.f_131[5] = func_44(4);
				Local_110.f_118[6] = 5;
				Local_110.f_123[6] = func_45(5);
				Local_110.f_116 = 7;
			}
			Local_110.f_FF = func_41();
			if (!func_737())
			{
				Local_110.f_1 = 3;
			}
			else
			{
				Local_110.f_1 = 8;
			}
			Local_110.f_2 = Local_110.f_1D;
			switch (Local_110.f_1D)
			{
				case 0:
					if (!func_737())
					{
						Local_110.f_1E[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_110.f_2B[0] = 290.0732f;
					}
					else
					{
						Local_110.f_1E[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_110.f_2B[0] = 290.0732f;
						Local_110.f_1E[1 /*3*/] = { -754.8721f, -1442.684f, 4.0005f };
						Local_110.f_2B[1] = 231.5867f;
						Local_110.f_1E[2 /*3*/] = { -712.4144f, -1459.331f, 4.0005f };
						Local_110.f_2B[2] = 49.6234f;
						Local_110.f_1E[3 /*3*/] = { -729.9052f, -1418.734f, 4.0005f };
						Local_110.f_2B[3] = 229.3317f;
					}
					Local_110.f_75[0 /*3*/] = { -692.5144f, -1384.774f, 4.1503f };
					Local_110.f_94[0] = 230.0049f;
					Local_110.f_75[1 /*3*/] = { -724.5416f, -1374.024f, 0.6002f };
					Local_110.f_94[1] = 147.9421f;
					Local_110.f_75[2 /*3*/] = { -763.0113f, -1531.637f, 4.4284f };
					Local_110.f_94[2] = 22.3204f;
					Local_110.f_75[3 /*3*/] = { -622.6572f, -1346.997f, 10.7793f };
					Local_110.f_94[3] = 80.7676f;
					Local_110.f_75[4 /*3*/] = { -650.5557f, -1313.337f, 9.8688f };
					Local_110.f_94[4] = 162.0507f;
					Local_110.f_75[5 /*3*/] = { -687.8698f, -1314.519f, 4.1019f };
					Local_110.f_94[5] = 225.9002f;
					Local_110.f_75[6 /*3*/] = { -719.8957f, -1300.4f, 4.1019f };
					Local_110.f_94[6] = 140.0515f;
					Local_110.f_75[7 /*3*/] = { -661.9195f, -1213.277f, 9.7043f };
					Local_110.f_94[7] = 90.6966f;
					Local_110.f_75[8 /*3*/] = { -758.4667f, -1332.722f, 8.6f };
					Local_110.f_94[8] = 226.042f;
					Local_110.f_75[9 /*3*/] = { -597.2482f, -1415.324f, 11.0923f };
					Local_110.f_94[9] = 79.7294f;
					Local_110.f_F3 = 4;
					break;
				
				case 1:
					Local_110.f_1E[0 /*3*/] = { 307.4523f, 2835.238f, 42.4361f };
					Local_110.f_2B[0] = 122.9714f;
					Local_110.f_1E[1 /*3*/] = { 358.6979f, 2863.14f, 42.0979f };
					Local_110.f_2B[1] = 118.6931f;
					Local_110.f_1E[2 /*3*/] = { 356.6689f, 2806.741f, 52.9669f };
					Local_110.f_2B[2] = 26.5272f;
					Local_110.f_1E[3 /*3*/] = { 310.0119f, 2875.712f, 42.5068f };
					Local_110.f_2B[3] = 211.0638f;
					Local_110.f_75[0 /*3*/] = { 346.145f, 2861.565f, 42.4603f };
					Local_110.f_94[0] = 203.4084f;
					Local_110.f_75[1 /*3*/] = { 264.2803f, 2872.275f, 42.6105f };
					Local_110.f_94[1] = 123.7895f;
					Local_110.f_75[2 /*3*/] = { 290.4762f, 2853.89f, 42.6424f };
					Local_110.f_94[2] = 115.9053f;
					Local_110.f_75[3 /*3*/] = { 290.606f, 2810.906f, 47.9461f };
					Local_110.f_94[3] = 330.5807f;
					Local_110.f_75[4 /*3*/] = { 341.4013f, 2863.181f, 42.4361f };
					Local_110.f_94[4] = 116.311f;
					Local_110.f_75[5 /*3*/] = { 254.767f, 2880.256f, 42.5168f };
					Local_110.f_94[5] = 145.855f;
					Local_110.f_75[6 /*3*/] = { 301.125f, 2814.328f, 42.4361f };
					Local_110.f_94[6] = 41.353f;
					Local_110.f_75[7 /*3*/] = { 306.254f, 2865.798f, 42.5755f };
					Local_110.f_94[7] = 266.0158f;
					Local_110.f_75[8 /*3*/] = { 195.36f, 2808.636f, 44.3806f };
					Local_110.f_94[8] = 290.3963f;
					Local_110.f_75[9 /*3*/] = { 269.1239f, 2866.509f, 73.1797f };
					Local_110.f_94[9] = 243.2495f;
					Local_110.f_F3 = 4;
					break;
				
				case 2:
					Local_110.f_1E[0 /*3*/] = { 714.882f, 4175.296f, 39.7092f };
					Local_110.f_2B[0] = 280.2862f;
					Local_110.f_1E[1 /*3*/] = { 765.1945f, 4182.796f, 39.7152f };
					Local_110.f_2B[1] = 32.9157f;
					Local_110.f_1E[2 /*3*/] = { 750.664f, 4238.85f, 54.7686f };
					Local_110.f_2B[2] = 106.2954f;
					Local_110.f_1E[3 /*3*/] = { 569.2263f, 4178.386f, 37.2124f };
					Local_110.f_2B[3] = 272.3807f;
					Local_110.f_75[0 /*3*/] = { 724.4003f, 4198.888f, 39.7092f };
					Local_110.f_94[0] = 254.5411f;
					Local_110.f_75[1 /*3*/] = { 792.2949f, 4184.186f, 39.5336f };
					Local_110.f_94[1] = 183.227f;
					Local_110.f_75[2 /*3*/] = { 754.1003f, 4181.829f, 39.7131f };
					Local_110.f_94[2] = 338.6039f;
					Local_110.f_75[3 /*3*/] = { 849.6327f, 4224.779f, 49.5859f };
					Local_110.f_94[3] = 71.8258f;
					Local_110.f_75[4 /*3*/] = { 856.303f, 4257.466f, 49.48f };
					Local_110.f_94[4] = 179.6626f;
					Local_110.f_75[5 /*3*/] = { 611.6555f, 4222.132f, 52.4756f };
					Local_110.f_94[5] = 272.7491f;
					Local_110.f_75[6 /*3*/] = { 643.0641f, 4213.754f, 52.6579f };
					Local_110.f_94[6] = 270.8252f;
					Local_110.f_75[7 /*3*/] = { 665.9061f, 4263.513f, 53.7219f };
					Local_110.f_94[7] = 180.4937f;
					Local_110.f_75[8 /*3*/] = { 876.0669f, 4247.905f, 48.9739f };
					Local_110.f_94[8] = 107.4297f;
					Local_110.f_75[9 /*3*/] = { 509.1728f, 4239.358f, 54.4925f };
					Local_110.f_94[9] = 247.5728f;
					break;
				
				case 3:
					Local_110.f_1E[0 /*3*/] = { 3279.497f, 5204.456f, 17.3168f };
					Local_110.f_2B[0] = 117.7311f;
					Local_110.f_1E[1 /*3*/] = { 3280.456f, 5166.343f, 17.9564f };
					Local_110.f_2B[1] = 46.3958f;
					Local_110.f_1E[2 /*3*/] = { 3258.509f, 5225.87f, 17.2293f };
					Local_110.f_2B[2] = 189.2091f;
					Local_110.f_1E[3 /*3*/] = { 3302.896f, 5136.244f, 17.3101f };
					Local_110.f_2B[3] = 50.0778f;
					Local_110.f_75[0 /*3*/] = { 3318.215f, 5186.109f, 17.4503f };
					Local_110.f_94[0] = 229.5714f;
					Local_110.f_75[1 /*3*/] = { 3309.254f, 5167.526f, 17.4491f };
					Local_110.f_94[1] = 136.4963f;
					Local_110.f_75[2 /*3*/] = { 3372.606f, 5183.914f, 0.4652f };
					Local_110.f_94[2] = 88.3908f;
					Local_110.f_75[3 /*3*/] = { 3222.684f, 5187.734f, 30.0174f };
					Local_110.f_94[3] = 271.8922f;
					Local_110.f_75[4 /*3*/] = { 3217.351f, 5145.03f, 18.4178f };
					Local_110.f_94[4] = 316.4374f;
					Local_110.f_75[5 /*3*/] = { 3155.562f, 5285.246f, 28.0707f };
					Local_110.f_94[5] = 246.1521f;
					Local_110.f_75[6 /*3*/] = { 3311.935f, 5176.247f, 18.6196f };
					Local_110.f_94[6] = 198.8985f;
					Local_110.f_75[7 /*3*/] = { 3230.142f, 5200.801f, 22.8278f };
					Local_110.f_94[7] = 257.2332f;
					Local_110.f_75[8 /*3*/] = { 3420.069f, 5169.133f, 4.8574f };
					Local_110.f_94[8] = 104.7808f;
					Local_110.f_75[9 /*3*/] = { 3242.868f, 5035.166f, 20.011f };
					Local_110.f_94[9] = 339.2293f;
					break;
				
				case 4:
					Local_110.f_1E[0 /*3*/] = { -1736.989f, 162.0228f, 63.371f };
					Local_110.f_2B[0] = 306.7662f;
					Local_110.f_1E[1 /*3*/] = { -1736.938f, 137.1991f, 63.371f };
					Local_110.f_2B[1] = 303.3918f;
					Local_110.f_1E[2 /*3*/] = { -1756.272f, 172.5584f, 63.3711f };
					Local_110.f_2B[2] = 302.365f;
					Local_110.f_1E[3 /*3*/] = { -1710.748f, 129.7035f, 63.3716f };
					Local_110.f_2B[3] = 304.9788f;
					Local_110.f_75[0 /*3*/] = { -1674.868f, 141.795f, 62.4627f };
					Local_110.f_94[0] = 30.9787f;
					Local_110.f_75[1 /*3*/] = { -1668.265f, 190.8298f, 60.7573f };
					Local_110.f_94[1] = 97.3626f;
					Local_110.f_75[2 /*3*/] = { -1661.135f, 236.6263f, 61.391f };
					Local_110.f_94[2] = 218.2636f;
					Local_110.f_75[3 /*3*/] = { -1706.443f, 186.8354f, 62.9277f };
					Local_110.f_94[3] = 257.6324f;
					Local_110.f_75[4 /*3*/] = { -1722.395f, 227.362f, 60.7408f };
					Local_110.f_94[4] = 244.6777f;
					Local_110.f_75[5 /*3*/] = { -1623.344f, 165.8969f, 59.7796f };
					Local_110.f_94[5] = 12.745f;
					Local_110.f_75[6 /*3*/] = { -1627.188f, 242.7915f, 58.648f };
					Local_110.f_94[6] = 196.3743f;
					Local_110.f_75[7 /*3*/] = { -1796.215f, 150.6246f, 67.7735f };
					Local_110.f_94[7] = 283.2556f;
					Local_110.f_75[8 /*3*/] = { -1774.033f, 105.8673f, 69.3384f };
					Local_110.f_94[8] = 243.4268f;
					Local_110.f_75[9 /*3*/] = { -1594.717f, 210.4007f, 73.3379f };
					Local_110.f_94[9] = 27.7876f;
					break;
			}
			break;
		
		case joaat("BUZZARD"):
			Local_110.f_F0 = joaat("BUZZARD");
			Local_110.f_118[0] = 2;
			Local_110.f_123[0] = func_45(2);
			Local_110.f_118[1] = 4;
			Local_110.f_123[1] = func_45(4);
			Local_110.f_131[1] = func_44(4);
			Local_110.f_118[2] = 2;
			Local_110.f_123[2] = func_45(2);
			if (Local_110.f_C <= 2 || !func_737())
			{
				Local_110.f_118[3] = 5;
				Local_110.f_123[3] = func_45(5);
				Local_110.f_116 = 4;
			}
			else if (Local_110.f_C == 3)
			{
				Local_110.f_118[3] = 4;
				Local_110.f_123[3] = func_45(4);
				Local_110.f_131[3] = func_44(4);
				Local_110.f_118[4] = 2;
				Local_110.f_123[4] = func_45(2);
				Local_110.f_118[5] = 5;
				Local_110.f_123[5] = func_45(5);
				Local_110.f_116 = 6;
			}
			else
			{
				Local_110.f_118[3] = 4;
				Local_110.f_123[3] = func_45(4);
				Local_110.f_131[3] = func_44(4);
				Local_110.f_118[4] = 2;
				Local_110.f_123[4] = func_45(2);
				Local_110.f_118[5] = 4;
				Local_110.f_123[5] = func_45(4);
				Local_110.f_131[5] = func_44(4);
				Local_110.f_118[6] = 5;
				Local_110.f_123[6] = func_45(5);
				Local_110.f_116 = 7;
			}
			Local_110.f_FF = func_41();
			if (!func_737())
			{
				Local_110.f_1 = 4;
			}
			else
			{
				Local_110.f_1 = 9;
			}
			Local_110.f_2 = Local_110.f_1D;
			switch (Local_110.f_1D)
			{
				case 0:
					Local_110.f_1E[0 /*3*/] = { 1139.943f, -1289.195f, 33.6127f };
					Local_110.f_2B[0] = 180.7904f;
					Local_110.f_1E[1 /*3*/] = { 1156.358f, -1327.402f, 33.7312f };
					Local_110.f_2B[1] = 269.3001f;
					Local_110.f_1E[2 /*3*/] = { 1204.963f, -1265.334f, 34.2267f };
					Local_110.f_2B[2] = 180.39f;
					Local_110.f_1E[3 /*3*/] = { 1220.954f, -1214.883f, 34.9485f };
					Local_110.f_2B[3] = 276.7351f;
					Local_110.f_75[0 /*3*/] = { 1195.556f, -1277.914f, 34.3601f };
					Local_110.f_94[0] = 329.9165f;
					Local_110.f_75[1 /*3*/] = { 1197.899f, -1297.386f, 34.1985f };
					Local_110.f_94[1] = 264.7702f;
					Local_110.f_75[2 /*3*/] = { 1168.435f, -1382.305f, 33.784f };
					Local_110.f_94[2] = 359.5203f;
					Local_110.f_75[3 /*3*/] = { 1160.796f, -1253.626f, 33.5659f };
					Local_110.f_94[3] = 111.3101f;
					Local_110.f_75[4 /*3*/] = { 1178.2f, -1272.399f, 33.8277f };
					Local_110.f_94[4] = 176.3058f;
					Local_110.f_75[5 /*3*/] = { 1185.282f, -1355.494f, 33.9506f };
					Local_110.f_94[5] = 213.1969f;
					Local_110.f_75[6 /*3*/] = { 1217.704f, -1381.659f, 34.3114f };
					Local_110.f_94[6] = 275.2275f;
					Local_110.f_75[7 /*3*/] = { 1193.388f, -1257.564f, 34.2036f };
					Local_110.f_94[7] = 220.0349f;
					Local_110.f_75[8 /*3*/] = { 1174.833f, -1381.064f, 41.8297f };
					Local_110.f_94[8] = 359.15f;
					Local_110.f_75[9 /*3*/] = { 1154.647f, -1338.613f, 33.7034f };
					Local_110.f_94[9] = 83.4212f;
					break;
				
				case 1:
					Local_110.f_1E[0 /*3*/] = { 129.1966f, -368.0656f, 42.257f };
					Local_110.f_2B[0] = 247.4892f;
					Local_110.f_1E[1 /*3*/] = { 147.9662f, -363.0619f, 42.257f };
					Local_110.f_2B[1] = 66.129f;
					Local_110.f_1E[2 /*3*/] = { 116.6446f, -436.4488f, 40.1294f };
					Local_110.f_2B[2] = 340.0713f;
					Local_110.f_1E[3 /*3*/] = { 90.0879f, -385.0907f, 40.2506f };
					Local_110.f_2B[3] = 245.7466f;
					Local_110.f_75[0 /*3*/] = { 47.0236f, -401.9681f, 38.9218f };
					Local_110.f_94[0] = 252.6017f;
					Local_110.f_75[1 /*3*/] = { 36.934f, -438.6162f, 38.9206f };
					Local_110.f_94[1] = 245.262f;
					Local_110.f_75[2 /*3*/] = { 69.7929f, -461.295f, 38.9215f };
					Local_110.f_94[2] = 44.7945f;
					Local_110.f_75[3 /*3*/] = { 48.4389f, -397.2337f, 54.29f };
					Local_110.f_94[3] = 255.6518f;
					Local_110.f_75[4 /*3*/] = { 204.0561f, -439.34f, 41.9848f };
					Local_110.f_94[4] = 124.8391f;
					Local_110.f_75[5 /*3*/] = { 142.2612f, -291.4343f, 45.3084f };
					Local_110.f_94[5] = 188.9979f;
					Local_110.f_75[6 /*3*/] = { 163.2065f, -291.4264f, 45.1553f };
					Local_110.f_94[6] = 159.3613f;
					Local_110.f_75[7 /*3*/] = { 115.7637f, -459.3909f, 40.1269f };
					Local_110.f_94[7] = 5.7762f;
					Local_110.f_75[8 /*3*/] = { 76.8378f, -337.484f, 66.2022f };
					Local_110.f_94[8] = 89.3388f;
					Local_110.f_75[9 /*3*/] = { 134.533f, -346.3627f, 101.6362f };
					Local_110.f_94[9] = 85.9158f;
					break;
				
				case 2:
					Local_110.f_1E[0 /*3*/] = { -509.9767f, 1186.854f, 323.8415f };
					Local_110.f_2B[0] = 310.6241f;
					Local_110.f_1E[1 /*3*/] = { -398.0129f, 1230.508f, 324.6416f };
					Local_110.f_2B[1] = 166.0191f;
					Local_110.f_1E[2 /*3*/] = { -455.6342f, 1141.998f, 324.9044f };
					Local_110.f_2B[2] = 343.1715f;
					Local_110.f_1E[3 /*3*/] = { -412.4245f, 1133.032f, 324.9044f };
					Local_110.f_2B[3] = 342.4984f;
					Local_110.f_75[0 /*3*/] = { -426.3299f, 1216.66f, 324.7585f };
					Local_110.f_94[0] = 248.8594f;
					Local_110.f_75[1 /*3*/] = { -363.2418f, 1266.761f, 329.8745f };
					Local_110.f_94[1] = 195.7758f;
					Local_110.f_75[2 /*3*/] = { -453.9799f, 1074.992f, 326.6897f };
					Local_110.f_94[2] = 28.6127f;
					Local_110.f_75[3 /*3*/] = { -392.485f, 1078.562f, 323.2558f };
					Local_110.f_94[3] = 296.7476f;
					Local_110.f_75[4 /*3*/] = { -413.6003f, 1086.831f, 326.6821f };
					Local_110.f_94[4] = 240.9422f;
					Local_110.f_75[5 /*3*/] = { -381.0179f, 1141.269f, 321.6503f };
					Local_110.f_94[5] = 2.473f;
					Local_110.f_75[6 /*3*/] = { -482.3448f, 1118.646f, 319.0963f };
					Local_110.f_94[6] = 343.6776f;
					Local_110.f_75[7 /*3*/] = { -397.3531f, 1127.527f, 321.7288f };
					Local_110.f_94[7] = 0.2495f;
					Local_110.f_75[8 /*3*/] = { -435.3902f, 1092.162f, 331.5411f };
					Local_110.f_94[8] = 72.7889f;
					Local_110.f_75[9 /*3*/] = { -424.5132f, 1225.076f, 324.7585f };
					Local_110.f_94[9] = 238.4196f;
					break;
				
				case 3:
					Local_110.f_1E[0 /*3*/] = { 341.0539f, 3569.789f, 32.4743f };
					Local_110.f_2B[0] = 351.0324f;
					Local_110.f_1E[1 /*3*/] = { 373.5018f, 3512.322f, 33.1732f };
					Local_110.f_2B[1] = 3.5452f;
					Local_110.f_1E[2 /*3*/] = { 353.5068f, 3483.839f, 34.0848f };
					Local_110.f_2B[2] = 7.3237f;
					Local_110.f_1E[3 /*3*/] = { 245.8774f, 3580.881f, 32.9612f };
					Local_110.f_2B[3] = 332.0844f;
					Local_110.f_75[0 /*3*/] = { 447.4214f, 3566.317f, 32.2386f };
					Local_110.f_94[0] = 2.6416f;
					Local_110.f_75[1 /*3*/] = { 445.3309f, 3512.088f, 32.9825f };
					Local_110.f_94[1] = 171.8638f;
					Local_110.f_75[2 /*3*/] = { 353.2316f, 3396.212f, 35.4033f };
					Local_110.f_94[2] = 257.0332f;
					Local_110.f_75[3 /*3*/] = { 454.5527f, 3530.242f, 32.4254f };
					Local_110.f_94[3] = 91.7869f;
					Local_110.f_75[4 /*3*/] = { 395.8559f, 3577.025f, 32.2922f };
					Local_110.f_94[4] = 4.2016f;
					Local_110.f_75[5 /*3*/] = { 380.2437f, 3560.991f, 32.342f };
					Local_110.f_94[5] = 339.729f;
					Local_110.f_75[6 /*3*/] = { 408.4627f, 3458.313f, 32.6961f };
					Local_110.f_94[6] = 359.2033f;
					Local_110.f_75[7 /*3*/] = { 476.5523f, 3557.328f, 32.2386f };
					Local_110.f_94[7] = 333.6298f;
					Local_110.f_75[8 /*3*/] = { 325.6323f, 3390.666f, 35.4033f };
					Local_110.f_94[8] = 73.2788f;
					Local_110.f_75[9 /*3*/] = { 461.6116f, 3535.257f, 32.318f };
					Local_110.f_94[9] = 96.8181f;
					break;
				
				case 4:
					Local_110.f_1E[0 /*3*/] = { 1493.166f, 1177.555f, 113.2209f };
					Local_110.f_2B[0] = 42.1535f;
					Local_110.f_1E[1 /*3*/] = { 1433.476f, 1179.544f, 113.1842f };
					Local_110.f_2B[1] = 315.0261f;
					Local_110.f_1E[2 /*3*/] = { 1471.486f, 1108.967f, 113.3343f };
					Local_110.f_2B[2] = 1.2527f;
					Local_110.f_1E[3 /*3*/] = { 1448.914f, 1110.622f, 113.3363f };
					Local_110.f_2B[3] = 1.9403f;
					Local_110.f_75[0 /*3*/] = { 1485.622f, 1047.388f, 113.334f };
					Local_110.f_94[0] = 352.9674f;
					Local_110.f_75[1 /*3*/] = { 1461.541f, 1083.658f, 113.3344f };
					Local_110.f_94[1] = 88.8285f;
					Local_110.f_75[2 /*3*/] = { 1411.874f, 1126.96f, 113.3341f };
					Local_110.f_94[2] = 177.2297f;
					Local_110.f_75[3 /*3*/] = { 1442.497f, 1148.469f, 113.3342f };
					Local_110.f_94[3] = 273.1487f;
					Local_110.f_75[4 /*3*/] = { 1406.476f, 1256.695f, 106.6555f };
					Local_110.f_94[4] = 225.394f;
					Local_110.f_75[5 /*3*/] = { 1464.077f, 1134.808f, 113.3227f };
					Local_110.f_94[5] = 175.5423f;
					Local_110.f_75[6 /*3*/] = { 1410.314f, 1162.317f, 113.3342f };
					Local_110.f_94[6] = 191.1842f;
					Local_110.f_75[7 /*3*/] = { 1487.483f, 1102.243f, 113.3346f };
					Local_110.f_94[7] = 269.6831f;
					Local_110.f_75[8 /*3*/] = { 1391.034f, 1154.223f, 113.4433f };
					Local_110.f_94[8] = 29.4203f;
					Local_110.f_75[9 /*3*/] = { 1484.87f, 1039.553f, 113.2318f };
					Local_110.f_94[9] = 287.677f;
					break;
			}
			break;
	}
}

int func_41()//Position - 0x5C13
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_110.f_FF != 4294967295)
	{
		return Local_110.f_FF;
	}
	if (Local_110.f_116 == 0)
	{
		return ((4 * Global_40001.f_276D) + Global_40001.f_276E);
	}
	iVar2 = func_96();
	iVar3 = func_43(iVar2);
	iVar4 = func_42(iVar3);
	switch (Local_110.f_1B)
	{
		case joaat("RHINO"):
		case joaat("SAVAGE"):
		case joaat("HYDRA"):
		case joaat("VALKYRIE"):
		case joaat("BUZZARD"):
			iVar1 = 0;
			while (iVar1 < Local_110.f_116)
			{
				iVar0 = (iVar0 + ((Local_110.f_123[iVar1] * iVar4) + Local_110.f_131[iVar1]));
				iVar1++;
			}
			break;
	}
	return iVar0;
}

int func_42(int iParam0)//Position - 0x5CBA
{
	switch (iParam0)
	{
		case joaat("INSURGENT"):
			return 2;
			break;
		
		case joaat("LAZER"):
			return 1;
			break;
		
		case joaat("BUZZARD"):
			return 4;
			break;
		
		case joaat("MESA3"):
			return 4;
			break;
		
		case joaat("SAVAGE"):
			return 4;
			break;
	}
	return 0;
}

int func_43(int iParam0)//Position - 0x5D0B
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			if (Local_110.f_1B == joaat("HYDRA"))
			{
				iVar0 = joaat("LAZER");
			}
			else
			{
				iVar0 = joaat("BUZZARD");
			}
			break;
		
		case 4:
			if (Local_110.f_1B == joaat("RHINO"))
			{
				iVar0 = joaat("INSURGENT");
			}
			else
			{
				iVar0 = joaat("MESA3");
			}
			break;
		
		case 5:
			iVar0 = joaat("SAVAGE");
			break;
		
		default:
			if (Local_110.f_1B == joaat("RHINO"))
			{
				iVar0 = joaat("INSURGENT");
			}
			else if (Local_110.f_1B == joaat("HYDRA"))
			{
				iVar0 = joaat("LAZER");
			}
			else
			{
				iVar0 = joaat("BUZZARD");
			}
			break;
	}
	return iVar0;
}

int func_44(int iParam0)//Position - 0x5DAE
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 4:
		case 3:
			if (func_737())
			{
				iVar0 = Global_40001.f_2C05;
			}
			else
			{
				iVar0 = Global_40001.f_2AED;
			}
			break;
	}
	return iVar0;
}

int func_45(int iParam0)//Position - 0x5DED
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 2:
			if (func_737())
			{
				iVar0 = Global_40001.f_2C06;
			}
			else
			{
				iVar0 = Global_40001.f_2AEE;
			}
			break;
		
		case 5:
			if (func_737())
			{
				iVar0 = Global_40001.f_2C07;
			}
			else
			{
				iVar0 = Global_40001.f_2AEF;
			}
			break;
		
		case 4:
			if (func_737())
			{
				iVar0 = Global_40001.f_2C04;
			}
			else
			{
				iVar0 = Global_40001.f_2AEC;
			}
			break;
	}
	return iVar0;
}

int func_46(int iParam0)//Position - 0x5E70
{
	if (!func_737())
	{
		switch (iParam0)
		{
			case joaat("RHINO"):
				return 4;
			
			case joaat("HYDRA"):
				return 5;
			
			case joaat("SAVAGE"):
				return 3;
			
			case joaat("VALKYRIE"):
				return 5;
			
			case joaat("BUZZARD"):
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("RHINO"):
				return 4;
			
			case joaat("HYDRA"):
				return 3;
			
			case joaat("SAVAGE"):
				return 3;
			
			case joaat("VALKYRIE"):
				return 4;
			
			case joaat("BUZZARD"):
				return 4;
			}
		
		default:
	}
	return 5;
}

void func_47()//Position - 0x5EF6
{
	Local_110.f_FC = 0;
	Local_110.f_12E = 0;
	Local_110.f_13D = 0;
	Local_110.f_13C = 0;
}

int func_48()//Position - 0x5F15
{
	int iVar0;
	int iVar1;
	
	iVar0 = 20;
	iVar0 = 20;
	while (iVar0 <= 23)
	{
		if (!func_31(Local_110.f_30[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_49()//Position - 0x5F4D
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_110.f_117 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_110.f_118[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_96() == 4)
				{
					return 2;
				}
				else if (func_96() == 2)
				{
					return 1;
				}
				break;
			
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_50()//Position - 0x5FCD
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_107(Local_110.f_49[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_51(int iParam0)//Position - 0x5FFE
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	if (Local_110.f_13E == 0 || Local_110.f_13E == func_39())
	{
		if (func_96() == 2 || func_96() == 5)
		{
			return 0;
		}
	}
	if (func_96() == 3 || func_96() == 4)
	{
		if (Local_110.f_13D >= func_38())
		{
			iVar0 = Local_110.f_117 + 1;
			if (iVar0 < 10)
			{
				iVar1 = Local_110.f_118[iVar0];
				if (iVar1 == 5)
				{
					bVar2 = true;
				}
			}
			if (!bVar2)
			{
				return 0;
			}
		}
	}
	else if (Local_110.f_13D == 2)
	{
		iVar0 = Local_110.f_117 + 1;
		if (iVar0 < 10)
		{
			iVar1 = Local_110.f_118[iVar0];
			if (iVar1 == 5)
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			return 0;
		}
	}
	if (Local_110.f_13E == func_39())
	{
		return 0;
	}
	if (Local_110.f_13E == func_71())
	{
		return 0;
	}
	if (func_96() == 1)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_30[(20 + iParam0)]))
	{
		if (func_70(Local_110.f_EF) && NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 1, 0, 0))
		{
			if (func_68(&iVar3))
			{
				if (func_55(Local_110.f_75[iVar3 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, 4294967295, 1, 0, 0, 0, 0, 0))
				{
					if (func_54(&(Local_110.f_30[(20 + iParam0)]), 22, Local_110.f_EF, Local_110.f_75[iVar3 /*3*/], Local_110.f_94[iVar3], 1, 1, 1))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_110.f_30[(20 + iParam0)]), iLocal_124);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_110.f_30[(20 + iParam0)]), 1, 0);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_110.f_30[(20 + iParam0)]), 0);
						if (iVar3 == 8 || iVar3 == 9)
						{
							WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_110.f_30[(20 + iParam0)]), joaat("weapon_rpg"), 25000, true, true);
						}
						else
						{
							WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_110.f_30[(20 + iParam0)]), joaat("weapon_advancedrifle"), 25000, true);
						}
						fVar6 = (30f * func_53());
						PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_110.f_30[(20 + iParam0)]), SYSTEM::ROUND(fVar6));
						PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_110.f_30[(20 + iParam0)]), 1);
						PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_110.f_30[(20 + iParam0)]), 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_30[(20 + iParam0)]), 0, 1);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_110.f_30[(20 + iParam0)]), 1);
						PED::_0x52D59AB61DDC05DD(NETWORK::NET_TO_PED(Local_110.f_30[(20 + iParam0)]), 1);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_30[(20 + iParam0)]), 42, true);
						unk_0x65E471E4A2D56226(NETWORK::NET_TO_PED(Local_110.f_30[(20 + iParam0)]), SYSTEM::ROUND((200f * Global_40001.f_99)), 0);
						NETWORK::_SET_NETWORK_OBJECT_NON_CONTACT(NETWORK::NET_TO_PED(Local_110.f_30[(20 + iParam0)]), 1);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_110.f_30[(20 + iParam0)]), 1);
						PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_110.f_30[(20 + iParam0)]), true);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_30[(20 + iParam0)]), 151, false);
						iVar4 = ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_30[(20 + iParam0)]));
						fVar5 = func_52();
						iVar4 = SYSTEM::ROUND((fVar5 * SYSTEM::TO_FLOAT(iVar4)));
						unk_0x65E471E4A2D56226(NETWORK::NET_TO_PED(Local_110.f_30[(20 + iParam0)]), iVar4, 0);
						iVar7 = (20 + iParam0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_110[func_89(iVar7)], func_88(iVar7)))
						{
							GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_110[func_89(iVar7)]), func_88(iVar7));
						}
						Local_110.f_F7++;
						Local_110.f_13D++;
						Local_110.f_FA++;
						Local_110.f_13E++;
						func_104(&(Local_110.f_19E[iVar7 /*2*/]));
						func_19(&(Local_110.f_19E[iVar7 /*2*/]), 0, 0);
						if (func_21(&(Local_110.f_16C[iVar7 /*2*/])))
						{
							func_104(&(Local_110.f_16C[iVar7 /*2*/]));
						}
						func_19(&(Local_578[iVar3 /*2*/]), 0, 0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_110.f_30[iVar7]), 1, iLocal_123);
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_30[(20 + iParam0)]))
	{
		return 0;
	}
	return 1;
}

var func_52()//Position - 0x6441
{
	if (func_737())
	{
		return Global_40001.f_2BF9;
	}
	return Global_40001.f_2AE1;
}

float func_53()//Position - 0x6464
{
	if (func_737())
	{
		return Global_40001.f_2BFB;
	}
	return Global_40001.f_2AE3;
}

int func_54(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x6487
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(iVar0, iParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam5)
			{
				unk_0xF2A50F5F6E7737D8(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_55(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x64E6
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
		if (func_62(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_56(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_24B2CE.f_2++;
	return 1;
}

int func_56(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x65F7
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_837(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(CAM::_0xDC9DA9E8789F5246()), vParam0, 1) <= (fVar2 + fParam1))
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
		if (func_837(iVar1, 1, 1))
		{
			if (!func_15(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != CAM::_0xDC9DA9E8789F5246()))
				{
					if ((func_57(iVar1) || !bParam8) && !Global_24FBF9[iVar1 /*413*/].f_103)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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

int func_57(int iParam0)//Position - 0x67AF
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_24FBF9[iParam0 /*413*/].f_F5)
	{
		return 1;
	}
	return 0;
}

Vector3 func_58(int iParam0)//Position - 0x67DA
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_61() && Global_1841F3[iVar0 /*790*/].f_2F9) && !func_60(Global_1841F3[iVar0 /*790*/].f_2FA))
	{
		return Global_1841F3[iVar0 /*790*/].f_2FA;
	}
	return func_59(iParam0);
}

Vector3 func_59(int iParam0)//Position - 0x682D
{
	return unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_60(vector3 vParam0)//Position - 0x6840
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_61()//Position - 0x686A
{
	return Global_255C02.f_10;
}

int func_62(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x6878
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && CAM::_0xDC9DA9E8789F5246() != iVar1) || iParam6 == 0)
		{
			if (func_837(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_57(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295)
						{
							if (((PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && uParam7) && bParam4) && func_63(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_59(iVar1), vParam0, 1) < fParam1)
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

int func_63(int iParam0)//Position - 0x6974
{
	if (func_67(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	Global_2633E1 = { func_66(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2633E1))
	{
		return 1;
	}
	if (func_64(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, int iParam1)//Position - 0x69BB
{
	int iVar0;
	
	iVar0 = func_65(iParam0);
	if (!iVar0 == func_26())
	{
		if (iVar0 == func_65(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_65(int iParam0)//Position - 0x69E6
{
	if (iParam0 != func_26())
	{
		return Global_18CD5B[iParam0 /*560*/].f_B;
	}
	return func_26();
}

struct<13> func_66(int iParam0)//Position - 0x6A09
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_67(int iParam0, int iParam1)//Position - 0x6A20
{
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		Global_2633E1 = { func_66(iParam0) };
		Global_2633EE = { func_66(iParam1) };
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

int func_68(var uParam0)//Position - 0x6A8D
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	if (!func_69(Local_110.f_75[iVar0 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_21(&(Local_578[iVar0 /*2*/])) || (func_21(&(Local_578[iVar0 /*2*/])) && func_18(&(Local_578[iVar0 /*2*/]), 10000, 0)))
		{
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

bool func_69(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x6AF2
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_70(int iParam0)//Position - 0x6B39
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_71()//Position - 0x6B57
{
	int iVar0;
	int iVar1;
	
	if (Local_110.f_117 == 0)
	{
		iVar0 = Local_110.f_131[0];
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Local_110.f_117)
		{
			iVar0 = (iVar0 + Local_110.f_131[iVar1]);
			iVar1++;
		}
	}
	return iVar0;
}

int func_72()//Position - 0x6B9B
{
	int iVar0;
	int iVar1;
	
	switch (Local_110.f_1B)
	{
		case joaat("SAVAGE"):
		case joaat("RHINO"):
		case joaat("HYDRA"):
		case joaat("VALKYRIE"):
		case joaat("BUZZARD"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_110.f_131[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_73(int iParam0)//Position - 0x6BF0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4;
	if (func_96() == 3)
	{
		return 0;
	}
	if (Local_110.f_F2 < iVar0)
	{
	}
	if (Local_110.f_FB >= iVar0)
	{
		return 0;
	}
	if (func_96() > 1)
	{
		iVar1 = func_86();
		if (Local_110.f_FC >= iVar1)
		{
			return 0;
		}
	}
	if (func_70(Local_110.f_F0) && func_70(Local_110.f_EF))
	{
		if (func_74(iParam0))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_F5, iParam0))
			{
				Local_110.f_F9++;
				Local_110.f_FB++;
				Local_110.f_FC++;
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_F5), iParam0);
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 19))
				{
					MISC::SET_BIT(&(Local_110.f_3), 19);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_74(int iParam0)//Position - 0x6CAB
{
	if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(4, 1, 0, 0))
	{
		if (func_80(iParam0))
		{
			if (func_75(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_75(int iParam0)//Position - 0x6CD5
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	
	if (func_107(Local_110.f_49[iParam0]) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_F5, iParam0))
	{
		if (func_79(Local_110.f_49[iParam0]))
		{
			if (Local_110.f_74 <= 0)
			{
				if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0])) == joaat("INSURGENT"))
				{
					Local_110.f_74 = 2;
				}
				else
				{
					Local_110.f_74 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0])) + 1;
					if (Local_110.f_74 > 4)
					{
						Local_110.f_74 = 4;
					}
				}
			}
			iVar6 = 0;
			while (iVar6 < Local_110.f_74)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_30[(iParam0 * 4 + iVar6)]))
				{
					if (func_70(Local_110.f_EF))
					{
						iVar4 = (iVar6 - 1);
						if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0])) == joaat("INSURGENT"))
						{
							if (iVar4 == 0)
							{
								iVar4 = 7;
							}
						}
						if (func_78(&(Local_110.f_30[(iParam0 * 4 + iVar6)]), Local_110.f_49[iParam0], 22, Local_110.f_EF, iVar4, 1, 1, 1))
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), iLocal_124);
							ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 1, 0);
							PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 0);
							WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), joaat("weapon_appistol"), 25000, false);
							if (func_77())
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, true);
							}
							else
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, true);
							}
							fVar5 = 10f;
							fVar5 = (fVar5 * func_53());
							PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 2, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 3, 0);
							PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 0, 1);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 1);
							PED::_0x52D59AB61DDC05DD(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 1);
							unk_0x65E471E4A2D56226(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND((200f * Global_40001.f_99)), 0);
							NETWORK::_SET_NETWORK_OBJECT_NON_CONTACT(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 42, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 52, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 53, 1);
							PED::SET_PED_DIES_IN_WATER(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_DIES_INSTANTLY_IN_WATER(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_DIES_IN_SINKING_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 151, false);
							if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]))))
							{
								if (iVar6 == 0)
								{
									PED::SET_PED_SEEING_RANGE(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 299f);
									fVar5 = 3f;
									fVar5 = (fVar5 * func_76());
									PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
									PED::SET_PED_SHOOT_RATE(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 50);
									PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 52, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 53, 1);
									PED::SET_PED_FIRING_PATTERN(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 2437838959);
								}
								fVar0 = Global_40001.f_2BE9;
								fVar1 = Global_40001.f_2BEA;
								fVar2 = Global_40001.f_2BEB;
								fVar3 = Global_40001.f_2BEC;
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 23, fVar0);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 24, fVar1);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 25, fVar2);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 26, fVar3);
							}
							else if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]))))
							{
								PED::SET_PED_SEEING_RANGE(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 299f);
								fVar5 = 3f;
								fVar5 = (fVar5 * func_76());
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
								PED::SET_PED_SHOOT_RATE(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 50);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 52, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 53, 1);
								fVar0 = Global_40001.f_2BE9;
								fVar1 = Global_40001.f_2BEA;
								fVar2 = Global_40001.f_2BEB;
								fVar3 = Global_40001.f_2BEC;
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 23, fVar0);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 24, fVar1);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 25, fVar2);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 26, fVar3);
							}
							iVar7 = (iParam0 * 4 + iVar6);
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_110[func_89(iVar7)], func_88(iVar7)))
							{
								GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_110[func_89(iVar7)]), func_88(iVar7));
							}
							PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), true);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 1);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), 1, iLocal_123);
							Local_110.f_FA++;
							func_104(&(Local_110.f_19E[(iParam0 * 4 + iVar6) /*2*/]));
							func_19(&(Local_110.f_19E[(iParam0 * 4 + iVar6) /*2*/]), 0, 0);
							if (func_21(&(Local_110.f_16C[(iParam0 * 4 + iVar6) /*2*/])))
							{
								func_104(&(Local_110.f_16C[(iParam0 * 4 + iVar6) /*2*/]));
							}
						}
					}
				}
				iVar6++;
			}
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < Local_110.f_74)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_30[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (func_31(Local_110.f_30[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (!PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_30[(iParam0 * 4 + iVar6)]), NETWORK::NET_TO_VEH(Local_110.f_49[iParam0])))
				{
					return 0;
				}
				iVar6++;
			}
			return 1;
		}
	}
	return 0;
}

float func_76()//Position - 0x7417
{
	if (func_737())
	{
		return Global_40001.f_2BFC;
	}
	return Global_40001.f_2AE4;
}

int func_77()//Position - 0x743A
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_78(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x745B
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1))
	{
		return 0;
	}
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(NETWORK::NET_TO_VEH(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_PED(*uParam0), iParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF2A50F5F6E7737D8(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_79(var uParam0)//Position - 0x74E3
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

int func_80(int iParam0)//Position - 0x7505
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	vector3 vVar10;
	var uVar11;
	int iVar12;
	
	iVar0 = func_96();
	Local_110.f_F0 = func_43(iVar0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_49[iParam0]))
	{
		iVar2 = 0;
		while (iVar2 < Local_110.f_74)
		{
			iVar3 = (iParam0 * 4 + iVar2);
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_30[iVar3]))
			{
				return 0;
			}
			iVar2++;
		}
		if (func_70(Local_110.f_F0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_F5, iParam0))
		{
			fVar8 = 300f;
			if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_110.f_F0) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_110.f_F0))
			{
				fVar7 = 300f;
			}
			else
			{
				fVar7 = 100f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_110.f_F0))
			{
				fVar8 = 800f;
			}
			iVar9 = 0;
			while (iVar9 < Local_110.f_F2)
			{
				if (func_85(iVar9))
				{
					func_84(Local_110.f_F0, iVar9, &vVar10, &uVar11);
					if (!func_69(vVar10, 0f, 0f, 0f, 0))
					{
						if (func_55(vVar10, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, fVar8, 0, 4294967295, 1, fVar7, 0, 0, 0, 0))
						{
							vVar4 = { vVar10 };
							fVar5 = uVar11;
							iVar6 = 1;
							func_7(&(Local_110.f_BA[iVar9 /*2*/]), 0, 0);
							iVar9 = Local_110.f_F2;
						}
					}
				}
				iVar9++;
			}
			if (iVar6 == 1)
			{
				iVar12 = 1;
				if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_110.f_F0) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_110.f_F0))
				{
					iVar12 = 0;
				}
				if (func_83(iParam0))
				{
					if (func_82(&(Local_110.f_49[iParam0]), Local_110.f_F0, vVar4, fVar5, 1, 1, 1, 0, iVar12, 1, 0, 0, 0, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), 2);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), 1);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), 0, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), 2);
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), 1, 1, 0);
						VEHICLE::_0x0AD9E8F87FF7C16F(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), 0);
						unk_0x8389D644A7CF28CF(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), 0);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_110.f_F0))
						{
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]));
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), 1);
							PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]));
							ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), 0);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_110.f_F0))
						{
							VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), 3);
							ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), 0);
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), 1);
							PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]));
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), 30f);
							VEHICLE::_0xE16142B94664DEFD(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), 1);
							VEHICLE::_0xC361AA040D6637A8(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), 1);
							fVar1 = 500f;
							unk_0x65E471E4A2D56226(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), SYSTEM::ROUND(fVar1), 0);
						}
						else
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), 1, 1);
						}
						if (func_96() == 5)
						{
							fVar1 = SYSTEM::TO_FLOAT(func_81());
							unk_0x65E471E4A2D56226(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), SYSTEM::ROUND(fVar1), 0);
							ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), SYSTEM::ROUND(fVar1));
							unk_0xD3F329A16C0E5B2B(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), fVar1);
							VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), fVar1);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), fVar1);
							VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), 0);
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0xF3D4B087464779A7(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), fVar1);
							unk_0xA7FFC41F91367AC9(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), fVar1);
						}
						if (func_21(&(Local_110.f_150[iParam0 /*2*/])))
						{
							func_104(&(Local_110.f_150[iParam0 /*2*/]));
						}
						GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_FD), iParam0);
						MISC::SET_BIT(&(Local_110.f_F5), iParam0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), 1, iLocal_123);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_10F, iParam0))
						{
							GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_10F), iParam0);
						}
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_12F, iParam0))
						{
							GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_12F), iParam0);
						}
						if (Local_110.f_F0 == joaat("HYDRA") || Local_110.f_F0 == joaat("SAVAGE"))
						{
						}
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_49[iParam0]))
	{
		return 0;
	}
	return 1;
}

var func_81()//Position - 0x7982
{
	if (func_737())
	{
		return Global_40001.f_2BFA;
	}
	return Global_40001.f_2AE2;
}

int func_82(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x79A5
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

int func_83(int iParam0)//Position - 0x7A9F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[iVar0 /*18*/].f_6, iParam0))
			{
				iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_84(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x7AEC
{
	bool bVar0;
	
	bVar0 = (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0));
	switch (Local_110.f_1B)
	{
		case joaat("RHINO"):
			if (!func_69(Local_110.f_9F[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_110.f_9F[iParam1 /*3*/] };
				*uParam3 = Local_110.f_AF[iParam1];
			}
			break;
		
		case joaat("HYDRA"):
			if (!func_69(Local_110.f_9F[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_110.f_9F[iParam1 /*3*/] };
				*uParam3 = Local_110.f_AF[iParam1];
			}
			break;
		
		case joaat("SAVAGE"):
			switch (Local_110.f_1D)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1292.189f, -2572.868f, 22.9452f };
								*uParam3 = 332.6443f;
								break;
							
							case 1:
								*uParam2 = { -1062.843f, -3502.913f, 23.1484f };
								*uParam3 = 326.474f;
								break;
							
							case 2:
								*uParam2 = { -1842.189f, -3149.964f, 22.9444f };
								*uParam3 = 177.2589f;
								break;
							
							case 3:
								*uParam2 = { -1271.333f, -2267.149f, 12.9454f };
								*uParam3 = 243.2036f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -892.8904f, -2935.942f, 12.9444f };
								*uParam3 = 50.7848f;
								break;
							
							case 1:
								*uParam2 = { -1290.713f, -2658.844f, 13.0516f };
								*uParam3 = 152.2952f;
								break;
							
							case 2:
								*uParam2 = { -1157.682f, -2725.707f, 12.9534f };
								*uParam3 = 187.5114f;
								break;
							
							case 3:
								*uParam2 = { -949.6019f, -3072.991f, 12.9444f };
								*uParam3 = 63.8501f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
							
							case 1:
								*uParam2 = { 2259.96f, 5608.534f, 63.366f };
								*uParam3 = 171.56f;
								break;
							
							case 2:
								*uParam2 = { 1042.117f, 4282.784f, 47.277f };
								*uParam3 = 284.7637f;
								break;
							
							case 3:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							
							case 1:
								*uParam2 = { 2439.703f, 4993.831f, 44.9932f };
								*uParam3 = 136.377f;
								break;
							
							case 2:
								*uParam2 = { 1972.487f, 4843.981f, 43.13f };
								*uParam3 = 315.4388f;
								break;
							
							case 3:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -822.0636f, 5744.907f, 16.2672f };
								*uParam3 = 305.7653f;
								break;
							
							case 1:
								*uParam2 = { 22.328f, 6898.096f, 21.23f };
								*uParam3 = 151.4785f;
								break;
							
							case 2:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
							
							case 3:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							
							case 1:
								*uParam2 = { -38.6174f, 6281.176f, 30.2043f };
								*uParam3 = 32.7307f;
								break;
							
							case 2:
								*uParam2 = { -313.5567f, 6436.651f, 11.6953f };
								*uParam3 = 129.4952f;
								break;
							
							case 3:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1490.884f, -1955.97f, 79.7973f };
								*uParam3 = 78.8897f;
								break;
							
							case 1:
								*uParam2 = { 594.3433f, -1979.466f, 28.9706f };
								*uParam3 = 319.8794f;
								break;
							
							case 2:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
							
							case 3:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 983.6414f, -1848.797f, 30.0987f };
								*uParam3 = 178.6463f;
								break;
							
							case 1:
								*uParam2 = { 992.1669f, -1506.845f, 30.4275f };
								*uParam3 = 90.1264f;
								break;
							
							case 2:
								*uParam2 = { 771.2441f, -1620.786f, 29.9058f };
								*uParam3 = 313.4008f;
								break;
							
							case 3:
								*uParam2 = { 840.4948f, -1950.51f, 27.9516f };
								*uParam3 = 87.2509f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("VALKYRIE"):
			switch (Local_110.f_1D)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -619.1071f, -1856.811f, 38.0408f };
								*uParam3 = 10.5487f;
								break;
							
							case 1:
								*uParam2 = { -273.1338f, -1627.779f, 40.8488f };
								*uParam3 = 77.2743f;
								break;
							
							case 2:
								*uParam2 = { -1157.959f, -1697.113f, 40.3479f };
								*uParam3 = 299.9692f;
								break;
							
							case 3:
								*uParam2 = { -1150.749f, -1708.635f, 40.2485f };
								*uParam3 = 295.9259f;
								break;
							
							case 4:
								*uParam2 = { -1001.754f, -731.3828f, 85.5368f };
								*uParam3 = 232.7072f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -648.1588f, -1632.12f, 23.9175f };
								*uParam3 = 145.9387f;
								break;
							
							case 1:
								*uParam2 = { -850.9597f, -1194.948f, 4.7312f };
								*uParam3 = 2.3024f;
								break;
							
							case 2:
								*uParam2 = { -513.3444f, -967.2039f, 22.5742f };
								*uParam3 = 111.3599f;
								break;
							
							case 3:
								*uParam2 = { -720.752f, -1143.745f, 9.6125f };
								*uParam3 = 126.5029f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1384.463f, 3175.862f, 49.4674f };
								*uParam3 = 107.9207f;
								break;
							
							case 1:
								*uParam2 = { 848.3471f, 3587.832f, 42.0217f };
								*uParam3 = 117.8402f;
								break;
							
							case 2:
								*uParam2 = { -390.1283f, 2557.157f, 99.8288f };
								*uParam3 = 292.5476f;
								break;
							
							case 3:
								*uParam2 = { 1084.247f, 2367.027f, 53.6989f };
								*uParam3 = 53.4222f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 654.4302f, 2752.401f, 40.9669f };
								*uParam3 = 192.1139f;
								break;
							
							case 1:
								*uParam2 = { 91.7939f, 3432.573f, 38.5904f };
								*uParam3 = 246.3809f;
								break;
							
							case 2:
								*uParam2 = { -361.922f, 2954.955f, 24.1579f };
								*uParam3 = 273.6807f;
								break;
							
							case 3:
								*uParam2 = { -180.3412f, 2508.928f, 71.8451f };
								*uParam3 = 7.1243f;
								break;
							
							case 4:
								*uParam2 = { 142.7533f, 2271.567f, 93.6005f };
								*uParam3 = 255.3593f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -394.287f, 4340.043f, 65.1832f };
								*uParam3 = 263.3693f;
								break;
							
							case 1:
								*uParam2 = { 1002.483f, 3175.867f, 48.6918f };
								*uParam3 = 0.497f;
								break;
							
							case 2:
								*uParam2 = { 2325.472f, 3922.296f, 45.2575f };
								*uParam3 = 57.4066f;
								break;
							
							case 3:
								*uParam2 = { 1962.95f, 4785.836f, 51.8872f };
								*uParam3 = 134.6506f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1398.018f, 4520.393f, 52.8047f };
								*uParam3 = 105.7989f;
								break;
							
							case 1:
								*uParam2 = { 366.9009f, 4432.027f, 61.6888f };
								*uParam3 = 204.5592f;
								break;
							
							case 2:
								*uParam2 = { 128.2849f, 4454.878f, 80.3457f };
								*uParam3 = 226.3244f;
								break;
							
							case 3:
								*uParam2 = { -132.4943f, 4295.465f, 41.7475f };
								*uParam3 = 276.3481f;
								break;
							
							case 4:
								*uParam2 = { 1908.425f, 4607f, 36.8242f };
								*uParam3 = 174.8533f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3841.898f, 4234.117f, 15.4291f };
								*uParam3 = 336.9579f;
								break;
							
							case 1:
								*uParam2 = { 2836.958f, 5957.465f, 362.3982f };
								*uParam3 = 225.8444f;
								break;
							
							case 2:
								*uParam2 = { 2624.236f, 5310.019f, 52.1567f };
								*uParam3 = 215.63f;
								break;
							
							case 3:
								*uParam2 = { 2780.447f, 4758.9f, 55.0574f };
								*uParam3 = 326.934f;
								break;
							
							case 4:
								*uParam2 = { 3201.127f, 4657.409f, 190.8286f };
								*uParam3 = 359.7683f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3756.635f, 4434.785f, 11.7586f };
								*uParam3 = 138.6266f;
								break;
							
							case 1:
								*uParam2 = { 3680.549f, 4492.803f, 23.5887f };
								*uParam3 = 113.1337f;
								break;
							
							case 2:
								*uParam2 = { 3337.639f, 5482.484f, 19.0418f };
								*uParam3 = 157.3183f;
								break;
							
							case 3:
								*uParam2 = { 2766.238f, 4974.986f, 32.7262f };
								*uParam3 = 225.2302f;
								break;
							
							case 4:
								*uParam2 = { 2797.095f, 4923.666f, 33.1334f };
								*uParam3 = 34.0949f;
								break;
							}
					}
					break;
				
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1988.479f, -219.2565f, 42.6251f };
								*uParam3 = 325.2252f;
								break;
							
							case 1:
								*uParam2 = { -1567.165f, -555.6394f, 123.4493f };
								*uParam3 = 24.7442f;
								break;
							
							case 2:
								*uParam2 = { -713.2371f, 195.5196f, 149.754f };
								*uParam3 = 75.542f;
								break;
							
							case 3:
								*uParam2 = { -509.8761f, 1187.824f, 333.8082f };
								*uParam3 = 128.2553f;
								break;
							
							case 4:
								*uParam2 = { -1265.789f, 1493.722f, 203.9673f };
								*uParam3 = 187.8592f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1570.476f, 1366.453f, 127.6559f };
								*uParam3 = 115.4139f;
								break;
							
							case 1:
								*uParam2 = { -1581.127f, 955.6403f, 157.1481f };
								*uParam3 = 39.5031f;
								break;
							
							case 2:
								*uParam2 = { -1813.683f, 799.5704f, 137.5134f };
								*uParam3 = 188.8774f;
								break;
							
							case 3:
								*uParam2 = { -1912.698f, 509.3147f, 110.6628f };
								*uParam3 = 70.3926f;
								break;
							
							case 4:
								*uParam2 = { -2298.497f, 441.8974f, 173.4667f };
								*uParam3 = 1.8886f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("BUZZARD"):
			switch (Local_110.f_1D)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1351.441f, -641.5107f, 83.2342f };
								*uParam3 = 186.1368f;
								break;
							
							case 1:
								*uParam2 = { 636.2282f, -434.6195f, 33.632f };
								*uParam3 = 203.6348f;
								break;
							
							case 2:
								*uParam2 = { 352.4392f, -590.8399f, 83.1657f };
								*uParam3 = 209.917f;
								break;
							
							case 3:
								*uParam2 = { 375.2908f, -1020.433f, 66.5363f };
								*uParam3 = 271.2396f;
								break;
							
							case 4:
								*uParam2 = { 345.1868f, -1426.622f, 85.1742f };
								*uParam3 = 284.6382f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1248.49f, -1131.338f, 37.2874f };
								*uParam3 = 153.8083f;
								break;
							
							case 1:
								*uParam2 = { 1396.414f, -1518.39f, 56.7703f };
								*uParam3 = 134.0967f;
								break;
							
							case 2:
								*uParam2 = { 972.8618f, -1464.828f, 30.3558f };
								*uParam3 = 0.609f;
								break;
							
							case 3:
								*uParam2 = { 935.6596f, -909.6719f, 39.5752f };
								*uParam3 = 271.1971f;
								break;
							
							case 4:
								*uParam2 = { 1156.687f, -768.8879f, 56.4831f };
								*uParam3 = 275.3533f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -137.5082f, -168.3033f, 102.7024f };
								*uParam3 = 160.3978f;
								break;
							
							case 1:
								*uParam2 = { -174.828f, -214.6927f, 156.6312f };
								*uParam3 = 258.2675f;
								break;
							
							case 2:
								*uParam2 = { 404.7129f, -24.3335f, 169.3952f };
								*uParam3 = 95.0683f;
								break;
							
							case 3:
								*uParam2 = { 168.3323f, 668.6285f, 215.7082f };
								*uParam3 = 172.5901f;
								break;
							
							case 4:
								*uParam2 = { -608.792f, 660.9065f, 165.6164f };
								*uParam3 = 207.7868f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -166.1217f, -214.9006f, 45.8637f };
								*uParam3 = 257.5103f;
								break;
							
							case 1:
								*uParam2 = { 33.7482f, -95.8814f, 55.3626f };
								*uParam3 = 73.0413f;
								break;
							
							case 2:
								*uParam2 = { 36.568f, 47.4427f, 71.3139f };
								*uParam3 = 158.1279f;
								break;
							
							case 3:
								*uParam2 = { -501.5253f, -67.3569f, 38.6901f };
								*uParam3 = 155.0279f;
								break;
							
							case 4:
								*uParam2 = { -430.6903f, -423.6864f, 31.7928f };
								*uParam3 = 352.977f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -468.3117f, 2034.281f, 225.8829f };
								*uParam3 = 183.5655f;
								break;
							
							case 1:
								*uParam2 = { -1572.228f, 838.9957f, 193.9097f };
								*uParam3 = 278.9509f;
								break;
							
							case 2:
								*uParam2 = { -175.6009f, -162.3506f, 102.7024f };
								*uParam3 = 12.7537f;
								break;
							
							case 3:
								*uParam2 = { 494.7073f, 706.4063f, 205.6965f };
								*uParam3 = 75.8614f;
								break;
							
							case 4:
								*uParam2 = { 821.3636f, 1308.909f, 372.5396f };
								*uParam3 = 113.467f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -803.5167f, 1295.326f, 257.4832f };
								*uParam3 = 209.5666f;
								break;
							
							case 1:
								*uParam2 = { -925.5961f, 1124.77f, 218.7065f };
								*uParam3 = 215.2912f;
								break;
							
							case 2:
								*uParam2 = { -404.5761f, 833.0574f, 224.6128f };
								*uParam3 = 218.3907f;
								break;
							
							case 3:
								*uParam2 = { -303.0683f, 1010.302f, 232.2905f };
								*uParam3 = 78.2628f;
								break;
							
							case 4:
								*uParam2 = { 56.7959f, 1080.651f, 220.6167f };
								*uParam3 = 18.8188f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 377.1972f, 4405.938f, 71.4024f };
								*uParam3 = 157.1671f;
								break;
							
							case 1:
								*uParam2 = { -210.0587f, 4223.346f, 53.7504f };
								*uParam3 = 206.9778f;
								break;
							
							case 2:
								*uParam2 = { -318.9394f, 3790.772f, 77.5459f };
								*uParam3 = 258.802f;
								break;
							
							case 3:
								*uParam2 = { -236.0281f, 3088.237f, 47.229f };
								*uParam3 = 304.6536f;
								break;
							
							case 4:
								*uParam2 = { 312.2873f, 2783.272f, 54.9498f };
								*uParam3 = 10.4182f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1111.445f, 3430.153f, 33.0281f };
								*uParam3 = 351.5004f;
								break;
							
							case 1:
								*uParam2 = { 940.4324f, 3582.793f, 32.0891f };
								*uParam3 = 71.8698f;
								break;
							
							case 2:
								*uParam2 = { -177.7739f, 3695.669f, 43.0132f };
								*uParam3 = 195.3546f;
								break;
							
							case 3:
								*uParam2 = { -241.2375f, 3905.453f, 37.3939f };
								*uParam3 = 207.658f;
								break;
							
							case 4:
								*uParam2 = { -77.8371f, 3185.706f, 37.1225f };
								*uParam3 = 280.9105f;
								break;
							}
					}
					break;
				
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 815.4335f, 1311.455f, 372.12f };
								*uParam3 = 258.8483f;
								break;
							
							case 1:
								*uParam2 = { 609.2955f, 205.9871f, 146.2221f };
								*uParam3 = 316.1886f;
								break;
							
							case 2:
								*uParam2 = { 1150.014f, 130.2795f, 90.7203f };
								*uParam3 = 340.2898f;
								break;
							
							case 3:
								*uParam2 = { 1876.22f, 285.6447f, 171.779f };
								*uParam3 = 18.4441f;
								break;
							
							case 4:
								*uParam2 = { 2105.892f, 1586.21f, 99.9212f };
								*uParam3 = 107.1124f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1199.866f, 1852.856f, 77.9143f };
								*uParam3 = 147.2836f;
								break;
							
							case 1:
								*uParam2 = { 1526.959f, 1717.267f, 108.9733f };
								*uParam3 = 116.5075f;
								break;
							
							case 2:
								*uParam2 = { 1962.413f, 1297.095f, 166.6211f };
								*uParam3 = 14.5081f;
								break;
							
							case 3:
								*uParam2 = { 958.8857f, 1717.174f, 163.6494f };
								*uParam3 = 280.2715f;
								break;
							
							case 4:
								*uParam2 = { 703.955f, 777.3345f, 204.8183f };
								*uParam3 = 308.1731f;
								break;
							}
					}
					break;
			}
			break;
	}
}

int func_85(int iParam0)//Position - 0x8F95
{
	if (Local_110.f_E4[iParam0] > 0)
	{
		if (!func_21(&(Local_110.f_CF[iParam0 /*2*/])))
		{
			func_19(&(Local_110.f_CF[iParam0 /*2*/]), 0, 0);
			return 0;
		}
		else if (!func_18(&(Local_110.f_CF[iParam0 /*2*/]), Local_110.f_E4[iParam0], 0))
		{
			return 0;
		}
	}
	if (func_21(&(Local_110.f_BA[iParam0 /*2*/])))
	{
		if (!func_18(&(Local_110.f_BA[iParam0 /*2*/]), 20000, 0))
		{
			return 0;
		}
	}
	return 1;
}

var func_86()//Position - 0x9013
{
	return Local_110.f_123[Local_110.f_117];
}

void func_87(int iParam0, int iParam1)//Position - 0x9027
{
	vector3 vVar0;
	
	vVar0.x = 2308767155;
	vVar0.y = CAM::_0xDC9DA9E8789F5246();
	vVar0.z = iParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iParam1);
	}
}

int func_88(int iParam0)//Position - 0x9059
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_89(iParam0) * 31);
}

int func_89(int iParam0)//Position - 0x908A
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

void func_90(int iParam0)//Position - 0x90B0
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7, 0))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				HUD::_SET_PED_AI_BLIP(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_91(int iParam0)//Position - 0x9122
{
	if (Local_110.f_1B == joaat("HYDRA"))
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_110[func_89(iParam0)], func_88(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_92(int iParam0)//Position - 0x9159
{
	return func_93(iParam0);
}

int func_93(int iParam0)//Position - 0x9167
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_30[iParam0]), 0))
	{
		return 1;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_110.f_30[iParam0]), 0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_94(int iParam0)//Position - 0x91AA
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]));
	if (iVar0 == joaat("SAVAGE"))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_10F, iParam0))
		{
			return 1;
		}
	}
	else if (iVar0 == joaat("BUZZARD"))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_10F, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (Local_110.f_1B != joaat("HYDRA"))
		{
			return 1;
		}
		if (Local_110.f_1B == joaat("HYDRA"))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_10F, iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_95(int iParam0, int iParam1)//Position - 0x9231
{
	vector3 vVar0;
	
	vVar0.x = 791943758;
	vVar0.y = CAM::_0xDC9DA9E8789F5246();
	vVar0.z = iParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iParam1);
	}
}

int func_96()//Position - 0x9263
{
	return Local_110.f_118[Local_110.f_117];
}

void func_97(int iParam0, int iParam1)//Position - 0x9277
{
	vector3 vVar0;
	
	vVar0.x = 3796296968;
	vVar0.y = CAM::_0xDC9DA9E8789F5246();
	vVar0.z = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iParam0);
	}
}

int func_98(int iParam0)//Position - 0x92A9
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
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), 0))
			{
				if (NETWORK::_NETWORK_GET_DESROYER_OF_ENTITY(iVar2, NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), &uVar0))
				{
					return 1;
				}
			}
			else if (unk_0x0CAAC509F2C1F67B(iVar2, NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), &uVar0))
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_99(int iParam0, int iParam1)//Position - 0x932E
{
	vector3 vVar0;
	
	vVar0.x = 1108012350;
	vVar0.y = CAM::_0xDC9DA9E8789F5246();
	vVar0.z = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iParam0);
	}
}

bool func_100(int iParam0)//Position - 0x9360
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]));
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
	{
		return !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), 0);
	}
	return !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_110.f_49[iParam0]), 0);
}

int func_101()//Position - 0x93B6
{
	int iVar0;
	int iVar1;
	
	switch (Local_110.f_1B)
	{
		case joaat("RHINO"):
		case joaat("SAVAGE"):
		case joaat("VALKYRIE"):
		case joaat("BUZZARD"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_110.f_123[iVar0]);
				iVar0++;
			}
			break;
		
		case joaat("HYDRA"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_110.f_123[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_102(int iParam0)//Position - 0x942F
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
			if (func_837(iVar2, 0, 0))
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

int func_103()//Position - 0x948C
{
	if (func_737())
	{
		return Global_40001.f_2BF3;
	}
	return Global_40001.f_2ADE;
}

void func_104(var uParam0)//Position - 0x94AF
{
	uParam0->f_1 = 0;
}

void func_105(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x94BC
{
	Param0 = 713068249;
	Param0.f_1 = CAM::_0xDC9DA9E8789F5246();
	if (!iParam13 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_106(int iParam0, int iParam1, bool bParam2)//Position - 0x94E9
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_837(iVar2, 1, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar2), iParam0, 0))
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar2) == PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) || !bParam2)
				{
					if (iVar2 != CAM::_0xDC9DA9E8789F5246() || iParam1)
					{
						MISC::SET_BIT(&uVar0, iVar1);
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_107(var uParam0)//Position - 0x955F
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_108(NETWORK::NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_108(int iParam0)//Position - 0x957F
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_109()//Position - 0x95B8
{
	int iVar0;
	int iVar1;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 20))
	{
		return;
	}
	if (!func_21(&uLocal_592))
	{
		func_19(&uLocal_592, 0, 0);
		return;
	}
	if (!func_18(&uLocal_592, 5000, 0))
	{
		return;
	}
	iVar0 = func_110();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_4(NETWORK::NET_TO_VEH(Local_110.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0))
		{
			func_24(&(Local_110.f_7[iVar1]));
		}
		iVar1++;
	}
	MISC::SET_BIT(&(Local_110.f_3), 20);
}

int func_110()//Position - 0x9645
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_110.f_C != 0)
	{
		return Local_110.f_C;
	}
	if (!func_737())
	{
		Local_110.f_C = 1;
		return Local_110.f_C;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (!func_15(iVar2, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 < func_112())
	{
		Local_110.f_C = 2;
	}
	else if (iVar1 < func_111())
	{
		Local_110.f_C = 3;
	}
	else
	{
		Local_110.f_C = 4;
	}
	return Local_110.f_C;
}

int func_111()//Position - 0x96D0
{
	return Global_40001.f_2AF7;
}

int func_112()//Position - 0x96DF
{
	return Global_40001.f_2AF6;
}

void func_113()//Position - 0x96EE
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
		{
			func_119(iVar0);
			func_118(iVar0, Local_110.f_100[iVar0], Local_110.f_16[iVar0]);
		}
		else if (Local_110.f_252[iVar0 /*4*/].f_1 != 4294967295)
		{
			func_119(iVar0);
		}
		iVar0++;
	}
	func_117();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			func_116(iVar0);
			if (Local_113[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_113[iVar0 /*18*/].f_9 > 4294967295)
				{
					uVar1 = Local_113[iVar0 /*18*/].f_9;
					func_115(uVar1, Local_113[iVar0 /*18*/].f_8, iVar2);
				}
			}
			else
			{
				func_115(4294967295, 4294967295, iVar2);
			}
		}
		else if (Local_110.f_1D1[iVar0 /*4*/].f_1 != 4294967295)
		{
			func_116(iVar0);
		}
		iVar0++;
	}
	func_114();
}

void func_114()//Position - 0x97E4
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_110.f_1D1[iVar1 /*4*/].f_1 > Local_110.f_1D1[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_110.f_1D1[iVar1 /*4*/].f_1;
					uVar3 = Local_110.f_1D1[iVar1 /*4*/];
					uVar4 = Local_110.f_1D1[iVar1 /*4*/].f_2;
					Local_110.f_1D1[iVar1 /*4*/].f_1 = Local_110.f_1D1[(iVar1 - 1) /*4*/].f_1;
					Local_110.f_1D1[iVar1 /*4*/] = Local_110.f_1D1[(iVar1 - 1) /*4*/];
					Local_110.f_1D1[iVar1 /*4*/].f_2 = Local_110.f_1D1[(iVar1 - 1) /*4*/].f_2;
					Local_110.f_1D1[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_110.f_1D1[(iVar1 - 1) /*4*/] = uVar3;
					Local_110.f_1D1[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + 4294967295);
		}
		iVar0 = (iVar0 + 4294967295);
	}
}

void func_115(int iParam0, int iParam1, int iParam2)//Position - 0x98C9
{
	Local_110.f_1D1[iParam2 /*4*/] = iParam0;
	Local_110.f_1D1[iParam2 /*4*/].f_1 = iParam1;
	Local_110.f_1D1[iParam2 /*4*/].f_2 = iParam2;
}

void func_116(int iParam0)//Position - 0x98F6
{
	Local_110.f_1D1[iParam0 /*4*/] = 4294967295;
	Local_110.f_1D1[iParam0 /*4*/].f_2 = 4294967295;
	Local_110.f_1D1[iParam0 /*4*/].f_1 = 4294967295;
}

void func_117()//Position - 0x9920
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 3;
	while (iVar0 >= 0)
	{
		iVar1 = 3;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_110.f_252[iVar1 /*4*/].f_1 > Local_110.f_252[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_110.f_252[iVar1 /*4*/].f_1;
					uVar3 = Local_110.f_252[iVar1 /*4*/];
					uVar4 = Local_110.f_252[iVar1 /*4*/].f_2;
					Local_110.f_252[iVar1 /*4*/].f_1 = Local_110.f_252[(iVar1 - 1) /*4*/].f_1;
					Local_110.f_252[iVar1 /*4*/] = Local_110.f_252[(iVar1 - 1) /*4*/];
					Local_110.f_252[iVar1 /*4*/].f_2 = Local_110.f_252[(iVar1 - 1) /*4*/].f_2;
					Local_110.f_252[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_110.f_252[(iVar1 - 1) /*4*/] = uVar3;
					Local_110.f_252[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + 4294967295);
		}
		iVar0 = (iVar0 + 4294967295);
	}
}

void func_118(int iParam0, var uParam1, var uParam2)//Position - 0x9A03
{
	Local_110.f_252[iParam0 /*4*/] = iParam0;
	Local_110.f_252[iParam0 /*4*/].f_1 = uParam1;
	Local_110.f_252[iParam0 /*4*/].f_2 = uParam2;
}

void func_119(int iParam0)//Position - 0x9A30
{
	Local_110.f_252[iParam0 /*4*/] = 4294967295;
	Local_110.f_252[iParam0 /*4*/].f_1 = 4294967295;
	Local_110.f_252[iParam0 /*4*/].f_2 = 4294967295;
}

int func_120()//Position - 0x9A5A
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_110();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_121(iVar1))
		{
			func_104(&(Local_110.f_5));
			return 0;
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_D, iVar1))
		{
			func_104(&(Local_110.f_5));
			return 0;
		}
		else if (func_4(NETWORK::NET_TO_VEH(Local_110.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0))
		{
			func_104(&(Local_110.f_5));
			return 0;
		}
		iVar1++;
	}
	if (!func_21(&(Local_110.f_5)))
	{
		func_19(&(Local_110.f_5), 0, 0);
	}
	else if (func_18(&(Local_110.f_5), 1500, 0))
	{
		return 1;
	}
	return 0;
}

int func_121(int iParam0)//Position - 0x9B04
{
	if (func_107(Local_110.f_7[iParam0]))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), 4294967295, 0) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_122()//Position - 0x9B36
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_737())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
		{
			if (func_107(Local_110.f_7[iVar0]))
			{
				iVar1++;
				iVar2 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < Local_110.f_C)
	{
		Local_110.f_C = iVar1;
	}
	if (Local_110.f_C <= 1)
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_3), 8);
		if (!func_107(Local_110.f_7[0]))
		{
			if (func_107(Local_110.f_7[iVar2]))
			{
				func_24(&(Local_110.f_7[0]));
				Local_110.f_7[0] = Local_110.f_7[iVar2];
			}
		}
	}
}

void func_123()//Position - 0x9BDC
{
	bool bVar0;
	
	if (!func_737())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[0]))
		{
			if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_7[0])) == joaat("VALKYRIE"))
			{
				bVar0 = Local_110.f_F != false;
			}
			else
			{
				bVar0 = Local_110.f_E != false;
			}
		}
	}
	else
	{
		bVar0 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 9);
	}
	if (bVar0)
	{
		if (Local_110.f_19D == 4294967295)
		{
			Local_110.f_19D = func_125();
		}
		if (!func_21(&(Local_110.f_146)))
		{
			func_19(&(Local_110.f_146), 0, 0);
		}
		else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 4))
		{
			if ((Local_110.f_19D - func_124(&(Local_110.f_146), 0, 0)) < 0)
			{
				MISC::SET_BIT(&(Local_110.f_3), 4);
			}
		}
	}
	else if (func_21(&(Local_110.f_146)))
	{
		func_104(&(Local_110.f_146));
		Local_110.f_19D = (Local_110.f_19D - func_124(&(Local_110.f_146), 0, 0));
	}
}

int func_124(var uParam0, bool bParam1, bool bParam2)//Position - 0x9CBE
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

var func_125()//Position - 0x9D05
{
	if (func_737())
	{
		return Global_40001.f_2BFD;
	}
	return Global_40001.f_2AE5;
}

void func_126()//Position - 0x9D28
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	bVar5 = false;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_126[iVar0] = 0;
		iLocal_112[iVar0] = 4294967294;
		iLocal_127[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	if (Local_110 != 4)
	{
		iLocal_117 = 0;
		while (iLocal_117 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_117)))
			{
				iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_117));
				if (!func_15(iVar7, 0))
				{
					if (Local_113[iLocal_117 /*18*/].f_1 != 0)
					{
						iVar2++;
					}
					iVar1++;
					iVar0 = 0;
					while (iVar0 < 4)
					{
						func_133(iLocal_117, iVar0, iVar7);
						iVar0++;
					}
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 5)
					{
						func_132(iLocal_117, iVar0);
						iVar0++;
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 14))
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[iLocal_117 /*18*/].f_2, 9))
						{
							iVar6++;
						}
					}
					iVar0 = 0;
					while (iVar0 <= 23)
					{
						func_131(iLocal_117, iVar0);
						iVar0++;
					}
					if (!bVar5)
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[iLocal_117 /*18*/].f_2, 8))
						{
							bVar5 = true;
						}
					}
					func_129(iLocal_117, iVar7);
					if (func_837(iVar7, 1, 1))
					{
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (Local_110.f_11[iVar0] == func_26())
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[iLocal_117 /*18*/].f_2, (0 + iVar0)))
								{
									Local_110.f_11[iVar0] = iVar7;
								}
							}
							else if (Local_110.f_11[iVar0] == iVar7 && Local_110.f_F1 == 0)
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[iLocal_117 /*18*/].f_2, (0 + iVar0)))
								{
									Local_110.f_11[iVar0] = func_26();
								}
							}
							iVar0++;
						}
					}
				}
			}
			iLocal_117++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_D, iVar0))
		{
			if (iLocal_126[iVar0] == func_128() && func_121(iVar0))
			{
				MISC::SET_BIT(&(Local_110.f_D), iVar0);
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_E, iVar0))
			{
				if (iLocal_126[iVar0] >= 1 && func_121(iVar0))
				{
					MISC::SET_BIT(&(Local_110.f_E), iVar0);
				}
			}
			else if (iLocal_126[iVar0] == 0 || !func_121(iVar0))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_E, iVar0))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_E), iVar0);
					if (iLocal_126[iVar0] == 0)
					{
						if (Local_110.f_F1 >= 1)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
							{
								func_24(&(Local_110.f_7[iVar0]));
							}
						}
					}
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_F, iVar0) && func_121(iVar0))
			{
				if (iLocal_126[iVar0] >= 2)
				{
					MISC::SET_BIT(&(Local_110.f_F), iVar0);
				}
			}
			else if (iLocal_126[iVar0] <= 1 || !func_121(iVar0))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_F, iVar0))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_F), iVar0);
				}
			}
		}
		else if (iLocal_126[iVar0] < func_128() || !func_121(iVar0))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_D), iVar0);
		}
		if (Local_110.f_10A[iVar0] != iLocal_126[iVar0])
		{
			Local_110.f_10A[iVar0] = iLocal_126[iVar0];
			if (Local_110.f_F1 == 1)
			{
				if (Local_110.f_10A[iVar0] == 0)
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_268, iVar0))
					{
						MISC::SET_BIT(&(Local_110.f_268), iVar0);
					}
				}
			}
		}
		if (Local_110.f_F1 == 0)
		{
			if (func_737())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
				{
					iVar3 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]));
					if (iLocal_126[iVar0] >= func_127(iVar3) && func_121(iVar0))
					{
						iLocal_127[iVar0] = 1;
					}
				}
			}
		}
		if (Local_110.f_F1 == 1)
		{
			if (Local_110.f_100[iVar0] != iLocal_112[iVar0])
			{
				if (iLocal_112[iVar0] >= 0)
				{
					if (iLocal_112[iVar0] > Local_110.f_100[iVar0])
					{
						Local_110.f_100[iVar0] = iLocal_112[iVar0];
						bVar4 = true;
					}
					else
					{
						iVar8 = (Local_110.f_100[iVar0] - iLocal_112[iVar0]);
						if (Local_110.f_105[iVar0] != iVar8)
						{
							Local_110.f_105[iVar0] = iVar8;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar4)
	{
		func_113();
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 11))
	{
		if (!bVar5)
		{
			MISC::SET_BIT(&(Local_110.f_3), 11);
		}
	}
	iVar0 = 0;
	iVar9 = 0;
	if (Local_110.f_F1 == 0)
	{
		if (func_737())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (iLocal_127[iVar0])
				{
					iVar9++;
				}
				iVar0++;
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 9))
			{
				if (iVar9 >= 2)
				{
					MISC::SET_BIT(&(Local_110.f_3), 9);
				}
			}
			else if (iVar9 < 2)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_3), 9);
			}
		}
	}
	if (Local_110.f_F1 == 0)
	{
		if (!func_21(&(Local_110.f_168)))
		{
			func_19(&(Local_110.f_168), 0, 0);
		}
		else if (func_18(&(Local_110.f_168), 5000, 0))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 14))
			{
				if (func_737())
				{
					if (Local_110.f_1B == joaat("VALKYRIE"))
					{
						if (iVar6 < 4)
						{
							MISC::SET_BIT(&(Local_110.f_3), 14);
						}
					}
					else if (iVar6 < 2)
					{
						MISC::SET_BIT(&(Local_110.f_3), 14);
					}
				}
				else if (Local_110.f_1B == joaat("VALKYRIE"))
				{
					if (iVar6 < 2)
					{
						MISC::SET_BIT(&(Local_110.f_3), 14);
					}
				}
				else if (iVar6 < 1)
				{
					MISC::SET_BIT(&(Local_110.f_3), 14);
				}
			}
		}
	}
	if (iVar1 > Local_110.f_266)
	{
		Local_110.f_266 = iVar1;
	}
	else
	{
		Local_110.f_265 = (Local_110.f_266 - iVar1);
	}
	if (iVar2 > Local_110.f_267)
	{
		Local_110.f_267 = iVar2;
	}
}

int func_127(int iParam0)//Position - 0xA2DE
{
	switch (iParam0)
	{
		case joaat("RHINO"):
			return 1;
		
		case joaat("HYDRA"):
			return 1;
		
		case joaat("SAVAGE"):
			return 1;
		
		case joaat("VALKYRIE"):
			return 2;
		
		case joaat("BUZZARD"):
			return 1;
		
		default:
	}
	return 99;
}

int func_128()//Position - 0xA321
{
	return Local_110.f_1C;
}

void func_129(int iParam0, int iParam1)//Position - 0xA32D
{
	bool bVar0;
	int iVar1;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_10, iParam0))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[iParam0 /*18*/].f_2, 12))
		{
			func_130(iParam1, 1);
			MISC::SET_BIT(&(Local_110.f_10), iParam0);
		}
		else if (Local_110.f_F1 >= 1)
		{
			if (Local_113[iParam0 /*18*/].f_1 == 0)
			{
				func_130(iParam1, 1);
				MISC::SET_BIT(&(Local_110.f_10), iParam0);
			}
			else if (Local_113[iParam0 /*18*/].f_11 >= 2)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar1]))
					{
						if (func_107(Local_110.f_7[iVar1]))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iParam1), NETWORK::NET_TO_VEH(Local_110.f_7[iVar1]), 0))
							{
								bVar0 = true;
							}
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_130(iParam1, 1);
					MISC::SET_BIT(&(Local_110.f_10), iParam0);
				}
			}
		}
	}
	else if (Local_110.f_F1 < 1)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[iParam0 /*18*/].f_2, 12))
		{
			func_130(iParam1, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_10), iParam0);
		}
	}
}

void func_130(int iParam0, int iParam1)//Position - 0xA432
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), iParam0, iParam1);
		}
		iVar0++;
	}
}

void func_131(int iParam0, int iParam1)//Position - 0xA46F
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_110[func_89(iParam1)], func_88(iParam1)))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[iParam0 /*18*/].f_3[func_89(iParam1)], func_88(iParam1)))
		{
			MISC::SET_BIT(&(Local_110.f_110[func_89(iParam1)]), func_88(iParam1));
			if (Local_113[iParam0 /*18*/].f_11 < 2)
			{
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_30[iParam1]))
			{
				if (!func_31(Local_110.f_30[iParam1]))
				{
					if (!func_92(iParam1))
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_110[func_89(iParam1)]), func_88(iParam1));
					}
					else if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_30[iParam1]), 0))
					{
						if (iParam1 >= 20)
						{
							GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_110[func_89(iParam1)]), func_88(iParam1));
						}
					}
				}
			}
		}
	}
}

void func_132(int iParam0, int iParam1)//Position - 0xA54D
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_10F, iParam1))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[iParam0 /*18*/].f_6, iParam1))
		{
			MISC::SET_BIT(&(Local_110.f_10F), iParam1);
			if (Local_113[iParam0 /*18*/].f_11 < 2)
			{
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_12F, iParam1))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_FD, iParam1))
				{
					Local_110.f_FB = (Local_110.f_FB - 1);
					if (func_96() > 1)
					{
						if (Local_110.f_FC > 0)
						{
							Local_110.f_12E++;
							func_95(iParam1, func_102(1));
						}
					}
					MISC::SET_BIT(&(Local_110.f_FD), iParam1);
				}
				if (func_21(&(Local_110.f_150[iParam1 /*2*/])))
				{
					func_104(&(Local_110.f_150[iParam1 /*2*/]));
				}
				func_24(&(Local_110.f_49[iParam1]));
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_12F), iParam1);
			}
		}
	}
}

void func_133(int iParam0, int iParam1, int iParam2)//Position - 0xA61C
{
	int iVar0;
	int iVar1;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[iParam0 /*18*/].f_1, iParam1))
	{
		iLocal_126[iParam1]++;
		if (iLocal_112[iParam1] < 0)
		{
			if (Local_113[iParam0 /*18*/].f_8 >= 0)
			{
				if (Local_110.f_105[iParam1] > 0)
				{
					iLocal_112[iParam1] = Local_110.f_105[iParam1];
				}
				else
				{
					iLocal_112[iParam1] = 0;
				}
			}
		}
		iLocal_112[iParam1] = (iLocal_112[iParam1] + Local_113[iParam0 /*18*/].f_8);
		if (Local_110.f_F1 >= 1)
		{
			if (Local_110.f_16[iParam1] == func_26())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iParam1]))
				{
					if (func_107(Local_110.f_7[iParam1]))
					{
						iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_7[iParam1]), 4294967295, 0);
						if (iVar1 != 0)
						{
							if (PED::IS_PED_A_PLAYER(iVar1))
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
								if (iVar0 == iParam2)
								{
									Local_110.f_16[iParam1] = iParam2;
									func_113();
								}
							}
						}
					}
				}
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_13F, iParam1))
		{
			if (Local_113[iParam0 /*18*/].f_A > 4294967295)
			{
				MISC::SET_BIT(&(Local_110.f_13F), iParam1);
				func_19(&(Local_110.f_15D[iParam1 /*2*/]), 0, 0);
			}
		}
	}
	if (Local_110.f_16[iParam1] != func_26())
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_110.f_16[iParam1]))
		{
			iVar0 = func_134(iParam1, 1);
			if (iVar0 != func_26())
			{
				Local_110.f_16[iParam1] = iVar0;
			}
			else
			{
				Local_110.f_16[iParam1] = func_26();
			}
		}
		else if (func_15(Local_110.f_16[iParam1], 0))
		{
			Local_110.f_16[iParam1] = func_26();
			func_113();
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Local_110.f_16[iParam1]);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (func_107(Local_110.f_7[iParam1]))
				{
					if (!PED::IS_PED_IN_VEHICLE(iVar1, NETWORK::NET_TO_VEH(Local_110.f_7[iParam1]), 0))
					{
						iVar0 = func_134(iParam1, 1);
						if (iVar0 != func_26())
						{
							Local_110.f_16[iParam1] = iVar0;
						}
						else
						{
							Local_110.f_16[iParam1] = func_26();
						}
					}
				}
			}
		}
	}
}

int func_134(int iParam0, bool bParam1)//Position - 0xA822
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_26();
	if (iParam0 >= 0)
	{
		iVar3 = 0;
		while (iVar3 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)))
			{
				if (iVar0 == func_26())
				{
					if (Local_113[iVar3 /*18*/].f_11 == 1)
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[iVar3 /*18*/].f_1, iParam0))
						{
							if (!bParam1)
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
							}
							else
							{
								iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
								if (func_107(Local_110.f_7[iParam0]))
								{
									iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
									if (!PED::IS_PED_INJURED(iVar2))
									{
										if (PED::IS_PED_IN_VEHICLE(iVar2, NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), 0))
										{
											iVar0 = iVar1;
										}
									}
								}
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	return iVar0;
}

void func_135(int iParam0)//Position - 0xA8E1
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 2975243204;
	vVar0.y = CAM::_0xDC9DA9E8789F5246();
	vVar0.z = iParam0;
	iVar1 = func_136(1, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iVar1);
	}
}

var func_136(int iParam0, bool bParam1)//Position - 0xA91B
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_837(iVar2, 0, 0))
		{
			if (iVar2 != CAM::_0xDC9DA9E8789F5246() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_15(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_137(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA980
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

int func_138()//Position - 0xB1E5
{
	func_110();
	if (func_70(Local_110.f_1B))
	{
		if (func_139())
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_110.f_1B);
			return 1;
		}
	}
	return 0;
}

int func_139()//Position - 0xB211
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < Local_110.f_C)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_7[iVar0]))
		{
			if (func_70(Local_110.f_1B))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_F4, iVar0))
				{
					MISC::CLEAR_AREA(Local_110.f_1E[iVar0 /*3*/], 5f, 1, 0, 0, true);
					MISC::SET_BIT(&(Local_110.f_F4), iVar0);
				}
				if (func_82(&(Local_110.f_7[iVar0]), Local_110.f_1B, Local_110.f_1E[iVar0 /*3*/], Local_110.f_2B[iVar0], 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Local_110.f_7[iVar0]), 1, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1);
					VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1);
					VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0, 0);
					unk_0x346478B12F69D4E3(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), false);
					ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]));
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1, 1, 0);
					ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1);
					VEHICLE::_0x0AD9E8F87FF7C16F(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0);
					if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_110.f_1B) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_110.f_1B))
					{
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_110.f_1B))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_142());
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_110.f_1B))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_141());
						}
						else
						{
							fVar1 = SYSTEM::TO_FLOAT(func_140());
						}
						unk_0x65E471E4A2D56226(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), SYSTEM::ROUND(fVar1), 0);
						ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), SYSTEM::ROUND(fVar1));
						unk_0xD3F329A16C0E5B2B(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), fVar1);
						VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), fVar1);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), fVar1);
						if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_110.f_1B))
						{
							VEHICLE::_0xE16142B94664DEFD(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1);
						}
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_110.f_1B))
						{
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0xF3D4B087464779A7(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), fVar1);
							unk_0xA7FFC41F91367AC9(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), fVar1);
						}
					}
					else
					{
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_110.f_1B))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_142());
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_110.f_1B))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_141());
						}
						else
						{
							fVar1 = SYSTEM::TO_FLOAT(func_140());
						}
						unk_0x65E471E4A2D56226(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), SYSTEM::ROUND(fVar1), 0);
						ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), SYSTEM::ROUND(fVar1));
						unk_0xD3F329A16C0E5B2B(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), fVar1);
						VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), fVar1);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), fVar1);
					}
					VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1);
					if (Local_110.f_1B == joaat("SAVAGE"))
					{
					}
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
					{
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), "Not_Allow_As_Saved_Veh", 1);
					}
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
					{
						if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), "MPBitset"))
						{
							iVar2 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), "MPBitset");
						}
						MISC::SET_BIT(&iVar2, 10);
						MISC::SET_BIT(&iVar2, 15);
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), "MPBitset", iVar2);
					}
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0, iLocal_123);
					iVar3 = 0;
					while (iVar3 < 32)
					{
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0, Global_180824[iVar3]);
						iVar3++;
					}
					unk_0x54D1FE7811E0FBC6(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0, 0);
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), false);
					unk_0x8389D644A7CF28CF(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_110.f_C)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_7[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

var func_140()//Position - 0xB680
{
	if (func_737())
	{
		return Global_40001.f_2BF7;
	}
	return Global_40001.f_2AF2;
}

var func_141()//Position - 0xB6A3
{
	if (func_737())
	{
		return Global_40001.f_2BF8;
	}
	return Global_40001.f_2AF3;
}

var func_142()//Position - 0xB6C6
{
	if (func_737())
	{
		return Global_40001.f_2BF6;
	}
	return Global_40001.f_2AF1;
}

bool func_143()//Position - 0xB6E9
{
	int iVar0;
	int iVar1;
	
	if (!func_21(&(Local_110.f_16A)))
	{
		func_19(&(Local_110.f_16A), 0, 0);
		return 0;
	}
	else if (!func_18(&(Local_110.f_16A), 3000, 0))
	{
		return 0;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 10))
	{
		if (func_157(&iVar0))
		{
			if (iVar0 < func_156())
			{
				MISC::SET_BIT(&(Local_110.f_3), 10);
			}
			else
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if ((IntToFloat(iVar1) < (50f * Global_40001.f_2BF1) && !Global_40001.f_2BEF) || Global_40001.f_2BF0)
				{
					MISC::SET_BIT(&(Local_110.f_3), 8);
					MISC::SET_BIT(&(Local_110.f_3), 10);
				}
				else
				{
					MISC::SET_BIT(&(Local_110.f_3), 10);
				}
			}
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 10))
	{
		if (Local_110.f_C == 0)
		{
			func_110();
			return 0;
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 13))
		{
			if (func_152())
			{
				if (!func_150(129, Local_110.f_1, Local_110.f_2, 0))
				{
					if (func_144())
					{
						MISC::SET_BIT(&(Local_110.f_3), 13);
					}
					else
					{
						Local_110.f_1D = 4294967295;
					}
				}
				else
				{
					Local_110.f_1D = 4294967295;
				}
			}
		}
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 13);
}

int func_144()//Position - 0xB81E
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_110();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_145(Local_110.f_1E[iVar1 /*3*/], 1125515264))
		{
			return 0;
		}
		if (!func_55(Local_110.f_1E[iVar1 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, 4294967295, 1, 50f, 0, 0, 0, 0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_145(vector3 vParam0, float fParam1)//Position - 0xB898
{
	int iVar0[32];
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar5;
	int iVar6;
	struct<10> Var7;
	int iVar8;
	
	if (Global_24F623.f_123.f_E1 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = 0;
	bVar3 = true;
	while (bVar3)
	{
		if (Global_24F623.f_123[iVar2 /*7*/] != 4294967295)
		{
			iVar0[iVar1] = MISC::GET_HASH_KEY(&(Global_24F623.f_123[iVar2 /*7*/].f_1));
			iVar1++;
			if (iVar1 == Global_24F623.f_123.f_E1)
			{
				bVar3 = false;
			}
		}
		iVar2++;
		if (iVar2 >= 32)
		{
			bVar3 = false;
		}
	}
	if (iVar1 == 0)
	{
		return 0;
	}
	vVar4 = { 0f, 0f, 0f };
	vVar5 = { vParam0 };
	iVar6 = 0;
	Var7.f_1 = 4294967295;
	Var7.f_2 = 4294967295;
	Var7.f_9 = 4294967295;
	iVar8 = 0;
	iVar2 = 0;
	while (iVar2 < Global_1403FD)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2401A9[iVar2 /*26*/].f_C, 11))
		{
			vVar4 = { Global_2401A9[iVar2 /*26*/].f_3 };
			vVar5.z = vVar4.z;
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar4, vVar5, 1) < fParam1)
			{
				Var7 = { Global_2401A9[iVar2 /*26*/].f_F };
				iVar8 = func_146(&Var7);
				iVar6 = 0;
				while (iVar6 < iVar1)
				{
					if (iVar8 == iVar0[iVar6])
					{
						return 1;
					}
					iVar6++;
				}
			}
		}
		iVar2++;
	}
	return 0;
}

int func_146(var uParam0)//Position - 0xB9D9
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_147(uParam0);
	if (iVar1 == 4294967295)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_C2055.f_1A2B5[iVar1 /*13*/].f_3;
		
		case 62:
			return Global_E012E.f_24BD[iVar1 /*13*/].f_3;
		
		default:
	}
	return iVar0;
}

int func_147(var uParam0)//Position - 0xBA30
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return 4294967295;
	}
	if (func_149(uParam0->f_1))
	{
		if (func_148(uParam0))
		{
			return 9999;
		}
		return 4294967295;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_C2055.f_4[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_C2055.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_C2055.f_4[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (Global_14010B.f_5)
				{
					return 4294967295;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_C2055.f_4[iVar0 /*88*/].f_4C, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_C2055.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return 4294967295;
		
		case 62:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_E012E.f_25C[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_E012E.f_25C[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_E012E.f_25C[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (Global_14010B.f_5)
				{
					return 4294967295;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_E012E.f_25C[iVar0 /*88*/].f_4C, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_E012E.f_25C[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return 4294967295;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == CAM::_0xDC9DA9E8789F5246())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_E55BC.f_5[uParam0->f_1 /*88*/].f_4C, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_E55BC.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_E55BC.f_5[uParam0->f_1 /*88*/].f_4C, 13))
		{
			if (Global_14010B.f_5)
			{
				return 4294967295;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_E55BC.f_5[iVar0 /*88*/].f_4C, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_E55BC.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return 4294967295;
	}
	else if (uParam0->f_2 < 32)
	{
		return 4294967295;
	}
	return 4294967295;
}

int func_148(var uParam0)//Position - 0xBCA0
{
	if (Global_249797)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_249797.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_149(int iParam0)//Position - 0xBCC5
{
	return iParam0 == 9999;
}

int func_150(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xBCD3
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
	iVar1 = func_151(iParam0);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iVar0 < Global_40001.f_1F3F)
		{
			if (Global_261C61.f_82[iVar0 /*2*/] == iVar1 && Global_261C61.f_82[iVar0 /*2*/].f_1 == func_137(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_151(int iParam0)//Position - 0xBD52
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

int func_152()//Position - 0xBDE6
{
	if (func_154(&(Local_110.f_1B)))
	{
		if (Local_110.f_4)
		{
			func_153();
		}
		func_40();
		return 1;
	}
	return 0;
}

void func_153()//Position - 0xBE10
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

int func_154(var uParam0)//Position - 0xBF22
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar0)
	{
		case 0:
			if (!func_155(joaat("RHINO")))
			{
				Local_110.f_1C = 1;
				*uParam0 = joaat("RHINO");
				return 1;
			}
			break;
		
		case 1:
			if (!func_155(joaat("HYDRA")))
			{
				Local_110.f_1C = 1;
				*uParam0 = joaat("HYDRA");
				Local_110.f_4 = 1;
				return 1;
			}
			break;
		
		case 2:
			if (!func_155(joaat("SAVAGE")))
			{
				Local_110.f_1C = 4;
				*uParam0 = joaat("SAVAGE");
				Local_110.f_4 = 1;
				return 1;
			}
			break;
		
		case 3:
			if (!func_155(joaat("VALKYRIE")))
			{
				Local_110.f_1C = 4;
				*uParam0 = joaat("VALKYRIE");
				return 1;
			}
			break;
		
		case 4:
			if (!func_155(joaat("BUZZARD")))
			{
				Local_110.f_1C = 4;
				*uParam0 = joaat("BUZZARD");
				return 1;
			}
			break;
	}
	return 0;
}

int func_155(int iParam0)//Position - 0xC007
{
	if (!func_737())
	{
		switch (iParam0)
		{
			case joaat("RHINO"):
				return Global_40001.f_2AE7;
				break;
			
			case joaat("HYDRA"):
				return Global_40001.f_2AE9;
				break;
			
			case joaat("SAVAGE"):
				return Global_40001.f_2AE8;
				break;
			
			case joaat("BUZZARD"):
				return Global_40001.f_2AEB;
				break;
			
			case joaat("VALKYRIE"):
				return Global_40001.f_2AEA;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("RHINO"):
				return Global_40001.f_2BFF;
				break;
			
			case joaat("HYDRA"):
				return Global_40001.f_2C01;
				break;
			
			case joaat("SAVAGE"):
				return Global_40001.f_2C00;
				break;
			
			case joaat("BUZZARD"):
				return Global_40001.f_2C03;
				break;
			
			case joaat("VALKYRIE"):
				return Global_40001.f_2C02;
				break;
			}
	}
	return 0;
}

int func_156()//Position - 0xC0E7
{
	return Global_40001.f_2AF5;
}

int func_157(var uParam0)//Position - 0xC0F6
{
	int iVar0;
	
	if (!func_21(&(Local_110.f_14E)))
	{
		func_19(&(Local_110.f_14E), 0, 0);
	}
	else if (func_18(&(Local_110.f_14E), 3000, 0))
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				if (!func_15(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)), 0))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[iVar0 /*18*/].f_2, 7))
					{
						*uParam0++;
					}
				}
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

int func_158(var uParam0)//Position - 0xC17D
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_159(var uParam0)//Position - 0xC1A6
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_19(uParam0, 0, 0);
		}
	}
}

void func_160()//Position - 0xC1C5
{
	vector3 vVar0;
	
	if (iLocal_599 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iLocal_599]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_7[iLocal_599]))
			{
				vVar0 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_VEH(Local_110.f_7[iLocal_599]), 0) };
				if (vVar0.z < -25f)
				{
					func_24(&(Local_110.f_7[iLocal_599]));
				}
			}
		}
	}
	iLocal_599++;
	if (iLocal_599 >= 4)
	{
		iLocal_599 = 0;
	}
}

void func_161()//Position - 0xC237
{
	if (func_15(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		return;
	}
	if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 == 1)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 13))
		{
			MISC::SET_BIT(&iLocal_115, 13);
			NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(1, 0);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 13))
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0, 0);
				GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_115, 13);
			}
		}
	}
}

void func_162()//Position - 0xC2B0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_15(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		return;
	}
	if (func_420())
	{
		func_277(0);
	}
	iVar0 = Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_28F;
	if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0)
	{
		Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 = 0;
	}
	if (iVar0 != func_26())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
			{
				iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
				iVar2 = iVar1;
				iVar3 = Local_113[iVar2 /*18*/].f_11;
				switch (iVar3)
				{
					case 0:
						func_194();
						func_191(iVar2);
						break;
					
					case 1:
						func_190();
						func_167();
						func_163(1);
						break;
					
					case 2:
						func_163(0);
						break;
					}
				}
			}
	}
}

void func_163(bool bParam0)//Position - 0xC36F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (bParam0)
		{
			func_164(Local_110.f_30[iVar0], &(Local_122[iVar0 /*8*/]), 3212836864, 0, 1, 0, 0, 4294967295, 4294967295, 1);
		}
		else
		{
			func_164(Local_110.f_30[iVar0], &(Local_122[iVar0 /*8*/]), 3212836864, 0, 1, 0, 0, 55, 4294967295, 1);
		}
		if (HUD::DOES_BLIP_EXIST(Local_122[iVar0 /*8*/]))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_122[iVar0 /*8*/], "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Local_122[iVar0 /*8*/], 1);
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_122[iVar0 /*8*/].f_1))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_122[iVar0 /*8*/].f_1, "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Local_122[iVar0 /*8*/].f_1, 1);
			}
		}
		if (Local_110.f_1B != joaat("HYDRA"))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_110[func_89(iVar0)], func_88(iVar0)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar0)], func_88(iVar0)))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_30[iVar0]))
				{
					func_90(&(Local_122[iVar0 /*8*/]));
				}
			}
		}
		else if ((iVar0 % 4) == 0)
		{
			iVar1 = (iVar0 / 4);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_10F, iVar1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_6, iVar1))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_30[iVar0]))
				{
					func_90(&(Local_122[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_164(var uParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)//Position - 0xC4EA
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		if (func_166())
		{
			Global_252F9E = CAM::_0xDC9DA9E8789F5246();
		}
		if (bParam3)
		{
			func_165(NETWORK::NET_TO_PED(uParam0), iParam1, 1, Global_252F9E, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_165(NETWORK::NET_TO_PED(uParam0), iParam1, 4294967295, Global_252F9E, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_90(iParam1);
	}
}

int func_165(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xC565
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			if (iParam8 == 4294967295)
			{
				HUD::_SET_PED_AI_BLIP(iParam0, 1);
			}
			else
			{
				unk_0x12CB6C9EAE68146D(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			HUD::_SET_AI_BLIP_TYPE(iParam0, iParam2);
			HUD::_SET_AI_BLIP_MAX_DISTANCE(iParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!iParam9 == 4294967295)
		{
			unk_0x92AAB9588E601C23(iParam0, iParam9);
		}
		HUD::_IS_AI_BLIP_ALWAYS_SHOWN(iParam0, iParam4);
		HUD::HIDE_SPECIAL_ABILITY_LOCKON_OPERATION(iParam0, iParam5);
		*uParam1 = HUD::_0x7CD934010E115C2C(iParam0);
		if (!iParam9 == 4294967295)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == 4294967295)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(iParam0);
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == 4294967295)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_166()//Position - 0xC73A
{
	return Global_140842;
}

void func_167()//Position - 0xC746
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4[4];
	bool bVar5;
	int iVar6[4];
	var uVar7[4];
	int iVar8;
	int iVar9;
	
	iVar2 = (func_34() - func_124(&(Local_110.f_14C), 0, 0));
	if (iLocal_577 == 0)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 26))
		{
			if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 1)) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 2))
			{
				iLocal_577 = (func_34() - func_124(&(Local_110.f_14C), 0, 0));
				iVar2 = iLocal_577;
			}
		}
	}
	else
	{
		iVar2 = iLocal_577;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 11))
	{
		return;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 10))
	{
		return;
	}
	if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_A >= 0)
	{
		return;
	}
	if (func_737())
	{
		iVar0 = (((Local_110.f_100[0] + Local_110.f_100[1]) + Local_110.f_100[2]) + Local_110.f_100[3]);
	}
	else
	{
		iVar0 = Local_110.f_100[0];
	}
	func_189(iVar2);
	if (iVar2 > 30000)
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 6;
	}
	if (func_737())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar9 = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_252[iVar1 /*4*/].f_2);
			if (iVar9 != func_26())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar9))
				{
					sVar4[iVar1] = PLAYER::GET_PLAYER_NAME(iVar9);
					iVar6[iVar1] = Local_110.f_252[iVar1 /*4*/].f_1;
					uVar7[iVar1] = Local_110.f_252[iVar1 /*4*/];
					if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_9 == uVar7[iVar1])
					{
						iVar8 = uVar7[iVar1];
						iVar8++;
					}
					uVar7[iVar1]++;
				}
				else
				{
					sVar4[iVar1] = "";
					iVar6[iVar1] = 4294967295;
				}
			}
			else
			{
				sVar4[iVar1] = "";
				iVar6[iVar1] = 4294967295;
			}
			iVar1++;
		}
		if ((func_34() - func_124(&(Local_110.f_14C), 0, 0)) >= 0)
		{
			if (Local_110.f_1B == joaat("RHINO") || Local_110.f_1B == joaat("HYDRA"))
			{
				func_185(sVar4[0], uVar7[0], sVar4[1], uVar7[1], sVar4[2], uVar7[2], sVar4[3], uVar7[3], iVar6[0], iVar6[1], iVar6[2], iVar6[3], iVar2, iVar3, func_186(), iVar8);
			}
			else
			{
				func_183(iVar6[0], uVar7[0], iVar6[1], uVar7[1], iVar6[2], uVar7[2], iVar6[3], uVar7[3], iVar2, iVar3, func_186(), iVar8);
			}
		}
	}
	else if (iVar2 >= 0)
	{
		if (iVar0 > Local_110.f_FF)
		{
			iVar0 = Local_110.f_FF;
		}
		if (Local_110.f_1B == joaat("RHINO") || Local_110.f_1B == joaat("HYDRA"))
		{
			func_182(PLAYER::GET_PLAYER_NAME(CAM::_0xDC9DA9E8789F5246()), iVar0, iVar0, Local_110.f_FF, iVar2, iVar3, 0, func_186());
		}
		else
		{
			func_168(iVar0, iVar0, Local_110.f_FF, iVar2, iVar3, 0, func_186(), 1);
		}
		if (bVar5)
		{
			func_113();
		}
	}
}

void func_168(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, char* sParam6, int iParam7)//Position - 0xCA3E
{
	struct<8> Var0;
	char* sVar1;
	
	if (func_179(0) == 0)
	{
		return;
	}
	func_178();
	func_177();
	StringCopy(&Var0, "HUD_TEAM", 64);
	if (bParam5)
	{
		func_174(iParam0, &Var0, 4294967295, iParam7, 5, 1, "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1);
	}
	func_173(iParam1, iParam2, "UW_KLL", 4294967295, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar1 = "HUD_COUNTDOWN";
	if (!func_172(sParam6))
	{
		sVar1 = sParam6;
	}
	func_169(iParam3, sVar1, 0, 0, 4294967295, 0, 3, 0, iParam4, 0, 0, 0, iParam4, 0, 0, 0, 0);
}

void func_169(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0xCACD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_171(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_170(7, iVar0);
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

void func_170(int iParam0, int iParam1)//Position - 0xCC1B
{
	MISC::SET_BIT(&(Global_14E696.f_17F2[iParam0]), iParam1);
}

bool func_171(int iParam0, int iParam1)//Position - 0xCC34
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E696.f_17F2[iParam0], iParam1);
}

int func_172(char* sParam0)//Position - 0xCC4D
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

void func_173(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)//Position - 0xCC84
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_171(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_170(4, iVar0);
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

void func_174(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)//Position - 0xCDDE
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
			if (func_171(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_170(6, iVar0);
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
		if (iParam15 == 5 && func_176())
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
			if (func_175())
			{
				Global_14E696.f_444 = 1;
			}
		}
	}
}

int func_175()//Position - 0xD040
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

int func_176()//Position - 0xD064
{
	if (((UNK::_GET_CURRENT_LANGUAGE_ID() == 8 || UNK::_GET_CURRENT_LANGUAGE_ID() == 9) || UNK::_GET_CURRENT_LANGUAGE_ID() == 10) || UNK::_GET_CURRENT_LANGUAGE_ID() == 12)
	{
		return 1;
	}
	return 0;
}

void func_177()//Position - 0xD0A2
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_258855 = 1;
}

void func_178()//Position - 0xD0C5
{
	Global_14E696.f_440 = 1;
}

int func_179(bool bParam0)//Position - 0xD0D5
{
	if (func_181())
	{
		return 0;
	}
	if (func_180())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_837(CAM::_0xDC9DA9E8789F5246(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_180()//Position - 0xD10C
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_C4 != 0;
}

bool func_181()//Position - 0xD123
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 12);
}

void func_182(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0xD135
{
	char* sVar0;
	
	if (func_179(0) == 0)
	{
		return;
	}
	func_177();
	func_178();
	if (bParam6)
	{
		func_174(iParam1, sParam0, 4294967295, 1, 5, 1, "HUD_NUMKILLS", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	func_173(iParam2, iParam3, "UW_KLL", 4294967295, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_172(sParam7))
	{
		sVar0 = sParam7;
	}
	func_169(iParam4, sVar0, 0, 0, 4294967295, 0, 3, 0, iParam5, 0, 0, 0, iParam5, 0, 0, 0, 0);
}

void func_183(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11)//Position - 0xD1BD
{
	struct<16> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	
	if (func_179(0) == 0)
	{
		return;
	}
	func_178();
	func_177();
	if (iParam0 > 4294967295)
	{
		Var0 = { func_184(iParam1) };
		iVar1 = 1;
		if (iParam11 == iParam1)
		{
			iVar1 = 9;
		}
		func_174(iParam0, &Var0, 4294967295, iVar1, 7, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1);
	}
	if (iParam2 > 4294967295)
	{
		Var0 = { func_184(iParam3) };
		iVar2 = 1;
		if (iParam11 == iParam3)
		{
			iVar2 = 9;
		}
		func_174(iParam2, &Var0, 4294967295, iVar2, 6, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1);
	}
	if (iParam4 > 4294967295)
	{
		Var0 = { func_184(iParam5) };
		iVar3 = 1;
		if (iParam11 == iParam5)
		{
			iVar3 = 9;
		}
		func_174(iParam4, &Var0, 4294967295, iVar3, 5, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1);
	}
	if (iParam6 > 4294967295)
	{
		Var0 = { func_184(iParam7) };
		iVar4 = 1;
		if (iParam11 == iParam7)
		{
			iVar4 = 9;
		}
		func_174(iParam6, &Var0, 4294967295, iVar4, 4, 1, "", 0, 0, 0, 0, iVar4, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1);
	}
	sVar5 = "HUD_COUNTDOWN";
	if (!func_172(sParam10))
	{
		sVar5 = sParam10;
	}
	func_169(iParam8, sVar5, 0, 0, 4294967295, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0);
}

struct<16> func_184(int iParam0)//Position - 0xD30D
{
	struct<16> Var0;
	
	StringConCat(&Var0, HUD::_GET_LABEL_TEXT("HUD_TEAM"), 64);
	StringConCat(&Var0, " ", 64);
	StringIntConCat(&Var0, iParam0, 64);
	return Var0;
}

void func_185(char* sParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, char* sParam14, int iParam15)//Position - 0xD332
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	
	if (func_179(0) == 0)
	{
		return;
	}
	func_178();
	func_177();
	if (iParam8 > 4294967295)
	{
		iVar0 = 1;
		if (iParam15 == iParam1)
		{
			iVar0 = 9;
		}
		func_174(iParam8, sParam0, 4294967295, 1, 7, 1, "", 0, 0, 0, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	if (iParam9 > 4294967295)
	{
		iVar1 = 1;
		if (iParam15 == iParam3)
		{
			iVar1 = 9;
		}
		func_174(iParam9, sParam2, 4294967295, 1, 6, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	if (iParam10 > 4294967295)
	{
		iVar2 = 1;
		if (iParam15 == iParam5)
		{
			iVar2 = 9;
		}
		func_174(iParam10, sParam4, 4294967295, 1, 5, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	if (iParam11 > 4294967295)
	{
		iVar3 = 1;
		if (iParam15 == iParam7)
		{
			iVar3 = 9;
		}
		func_174(iParam11, sParam6, 4294967295, 1, 4, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	sVar4 = "HUD_COUNTDOWN";
	if (!func_172(sParam14))
	{
		sVar4 = sParam14;
	}
	func_169(iParam12, sVar4, 0, 0, 4294967295, 0, 3, 0, iParam13, 0, 0, 0, iParam13, 0, 0, 0, 0);
}

char* func_186()//Position - 0xD452
{
	return "HUD_COUNTDOWN";
	switch (func_188(CAM::_0xDC9DA9E8789F5246()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_187())
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

int func_187()//Position - 0xD5EE
{
	if (func_188(CAM::_0xDC9DA9E8789F5246()) == 133)
	{
		return Global_26862F.f_12C4;
	}
	return 4294967295;
}

int func_188(int iParam0)//Position - 0xD611
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18CD5B[iVar0 /*560*/];
	}
	return 4294967295;
}

void func_189(int iParam0)//Position - 0xD630
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

void func_190()//Position - 0xDA12
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_121[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_121[iVar0]));
		}
		iVar0++;
	}
}

void func_191(int iParam0)//Position - 0xDA45
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_121[iVar0]))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_D, iVar0))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[iParam0 /*18*/].f_1, iVar0))
					{
						iLocal_121[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]));
						HUD::SET_BLIP_SPRITE(iLocal_121[iVar0], 429);
						func_192(&(iLocal_121[iVar0]), 29);
						if (func_737())
						{
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_121[iVar0], "UW_BLIPC");
						}
						else
						{
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_121[iVar0], "UW_BLIP");
						}
						HUD::SET_BLIP_PRIORITY(iLocal_121[iVar0], 9);
					}
					else if (HUD::DOES_BLIP_EXIST(iLocal_121[iVar0]))
					{
						HUD::REMOVE_BLIP(&(iLocal_121[iVar0]));
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_121[iVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_121[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_192(var uParam0, int iParam1)//Position - 0xDB3D
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_193(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_193(int iParam0)//Position - 0xDB63
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

void func_194()//Position - 0xDDCB
{
	bool bVar0;
	
	bVar0 = func_269();
	if (bVar0)
	{
		if (Local_110.f_19D > 4294967295)
		{
			if ((Local_110.f_19D - func_124(&(Local_110.f_146), 0, 0)) >= 0)
			{
				if (!func_198())
				{
					func_197((Local_110.f_19D - func_124(&(Local_110.f_146), 0, 0)));
					func_195((Local_110.f_19D - func_124(&(Local_110.f_146), 0, 0)), func_196(4294967295));
				}
			}
			else
			{
				if (!func_198())
				{
					func_195(0, func_196(4294967295));
				}
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					MISC::SET_BIT(&(Local_110.f_3), 4);
				}
			}
		}
	}
}

void func_195(int iParam0, char* sParam1)//Position - 0xDE58
{
	char* sVar0;
	
	if (func_179(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_172(sParam1))
	{
		sVar0 = sParam1;
	}
	func_169(iParam0, sVar0, 0, 0, 4294967295, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
}

char* func_196(int iParam0)//Position - 0xDE97
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

void func_197(int iParam0)//Position - 0xE09F
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

bool func_198()//Position - 0xE0F7
{
	bool bVar0;
	int iVar1;
	
	if (func_267(8))
	{
		bVar0 = true;
	}
	if (func_267(0))
	{
		bVar0 = true;
	}
	if (!func_259(129, 0, 0))
	{
		bVar0 = true;
	}
	if (!func_205(0, 1, 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 9))
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				iVar1 = PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(AUDIO::_0x0626A247D2405330());
				if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar1, 0))
				{
					func_203(0, 4294967295);
					MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), 9);
				}
			}
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 9))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), 9);
	}
	if (Global_193F0F)
	{
		bVar0 = true;
	}
	if (func_202(CAM::_0xDC9DA9E8789F5246()))
	{
		bVar0 = true;
	}
	if (func_201(CAM::_0xDC9DA9E8789F5246(), 2))
	{
		bVar0 = true;
	}
	if (func_199(CAM::_0xDC9DA9E8789F5246()))
	{
		bVar0 = true;
	}
	return bVar0;
}

bool func_199(int iParam0)//Position - 0xE1E4
{
	if (func_200(iParam0))
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 8);
}

bool func_200(int iParam0)//Position - 0xE20A
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 2);
}

bool func_201(int iParam0, int iParam1)//Position - 0xE222
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_D0, iParam1);
}

int func_202(int iParam0)//Position - 0xE23B
{
	if (!func_837(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1841F3[iParam0 /*790*/].f_23;
}

void func_203(bool bParam0, int iParam1)//Position - 0xE25E
{
	if (bParam0)
	{
		if (!Global_184174)
		{
			if (!func_267(0) && !func_267(func_204(iParam1)))
			{
				Global_184174 = 1;
			}
		}
	}
	else if (Global_184174)
	{
		Global_184174 = 0;
	}
}

int func_204(int iParam0)//Position - 0xE2A0
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

int func_205(bool bParam0, bool bParam1, bool bParam2)//Position - 0xE333
{
	if (func_258(CAM::_0xDC9DA9E8789F5246(), 29))
	{
		return 0;
	}
	if (func_201(CAM::_0xDC9DA9E8789F5246(), 21))
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
	if (func_256(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_255())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_254(CAM::_0xDC9DA9E8789F5246()))
		{
			return 0;
		}
	}
	if (func_253())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_252(CAM::_0xDC9DA9E8789F5246()))
		{
			return 0;
		}
	}
	else if (func_235(CAM::_0xDC9DA9E8789F5246()) == 3)
	{
		return 0;
	}
	if (func_234(CAM::_0xDC9DA9E8789F5246()) != func_26() && func_234(CAM::_0xDC9DA9E8789F5246()) == func_65(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_232(func_233()) && func_188(CAM::_0xDC9DA9E8789F5246()) != 236)
	{
		return 0;
	}
	if (func_231())
	{
		return 0;
	}
	if (func_180())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_229(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (!func_227())
	{
		return 0;
	}
	if (func_201(CAM::_0xDC9DA9E8789F5246(), 0) || func_201(CAM::_0xDC9DA9E8789F5246(), 3))
	{
		return 0;
	}
	if ((func_201(CAM::_0xDC9DA9E8789F5246(), 12) || func_201(CAM::_0xDC9DA9E8789F5246(), 14)) || func_201(CAM::_0xDC9DA9E8789F5246(), 13))
	{
		return 0;
	}
	if (func_215(CAM::_0xDC9DA9E8789F5246(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) || func_213(CAM::_0xDC9DA9E8789F5246()))
	{
		if (!func_212() && !Global_2634E9)
		{
			return 0;
		}
	}
	if (func_211(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_210())
	{
		return 0;
	}
	if (Global_193F0F)
	{
		return 0;
	}
	if (func_202(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_209())
	{
		return 0;
	}
	if (func_207(CAM::_0xDC9DA9E8789F5246()) && Global_184094.f_AB)
	{
		return 0;
	}
	if (func_206())
	{
		return 0;
	}
	return 1;
}

bool func_206()//Position - 0xE54D
{
	return Global_197632.f_1C;
}

int func_207(int iParam0)//Position - 0xE55B
{
	if (func_208(Global_1841F3[iParam0 /*790*/].f_111.f_18))
	{
		return 1;
	}
	return 0;
}

int func_208(int iParam0)//Position - 0xE57D
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

int func_209()//Position - 0xE5AC
{
	if (Global_40EAC7.f_31D > 4294967295)
	{
		return 1;
	}
	return 0;
}

bool func_210()//Position - 0xE5C4
{
	return Global_16C64.f_148 > 0;
}

bool func_211(int iParam0)//Position - 0xE5D5
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 11);
}

bool func_212()//Position - 0xE5F1
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 5);
}

int func_213(int iParam0)//Position - 0xE602
{
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_26())
			{
				return func_214(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 5;
			}
		}
	}
	return 0;
}

int func_214(int iParam0)//Position - 0xE661
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

int func_215(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)//Position - 0xE9BB
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
		if (func_226(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_225(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_224(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_223(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_222(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_221(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_220(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_219(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_218(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_217(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_216(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_216(int iParam0)//Position - 0xEACE
{
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_214(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_217(int iParam0, bool bParam1)//Position - 0xEB15
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
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_26())
			{
				return func_214(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 12;
			}
		}
	}
	return 0;
}

int func_218(int iParam0)//Position - 0xEBA3
{
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_214(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_219(int iParam0)//Position - 0xEBEA
{
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_214(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_220(int iParam0)//Position - 0xEC31
{
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_26())
			{
				return func_214(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 8;
			}
		}
	}
	return 0;
}

int func_221(int iParam0)//Position - 0xEC91
{
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_214(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_222(int iParam0)//Position - 0xECD8
{
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_214(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 7;
			}
		}
	}
	return 0;
}

int func_223(int iParam0)//Position - 0xED1E
{
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_214(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 4;
			}
		}
	}
	return 0;
}

int func_224(int iParam0)//Position - 0xED64
{
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_214(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 1;
			}
		}
	}
	return 0;
}

int func_225(int iParam0)//Position - 0xEDAA
{
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_214(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 2;
			}
		}
	}
	return 0;
}

int func_226(int iParam0)//Position - 0xEDF0
{
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_214(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 0;
			}
		}
	}
	return 0;
}

int func_227()//Position - 0xEE36
{
	if (func_228() == 0)
	{
		return 1;
	}
	return 0;
}

int func_228()//Position - 0xEE4B
{
	return Global_1406D2.f_12;
}

bool func_229(int iParam0)//Position - 0xEE59
{
	return func_230(iParam0);
}

bool func_230(int iParam0)//Position - 0xEE67
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_D.f_1, 0);
}

bool func_231()//Position - 0xEE81
{
	return Global_140859;
}

int func_232(int iParam0)//Position - 0xEE8D
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

int func_233()//Position - 0xEED1
{
	return Global_252F9E.f_A90[0 /*80*/].f_1;
}

int func_234(int iParam0)//Position - 0xEEE5
{
	return Global_18CD5B[iParam0 /*560*/].f_B.f_23;
}

int func_235(int iParam0)//Position - 0xEEFA
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_251(iParam0) && !func_200(iParam0)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 8));
	bVar2 = func_252(iParam0);
	bVar3 = func_250();
	uVar4 = func_241();
	if ((bVar1 && (func_240(iParam0) || func_239(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_238(iParam0)) && !func_236(iParam0)))
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

bool func_236(int iParam0)//Position - 0xEFB8
{
	return func_237(iParam0, 19);
}

bool func_237(int iParam0, int iParam1)//Position - 0xEFC8
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_B.f_4, iParam1);
}

int func_238(int iParam0)//Position - 0xEFE3
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return func_237(iParam0, 9);
	}
	return 0;
}

int func_239(int iParam0)//Position - 0xF001
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

int func_240(int iParam0)//Position - 0xF027
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iVar0 /*560*/].f_1, 7);
	}
	return 0;
}

int func_241()//Position - 0xF04D
{
	if ((func_237(CAM::_0xDC9DA9E8789F5246(), 21) || func_237(CAM::_0xDC9DA9E8789F5246(), 22)) || func_247())
	{
		return 1;
	}
	if (func_243())
	{
		func_242(22);
		return 1;
	}
	return 0;
}

void func_242(int iParam0)//Position - 0xF092
{
	MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_4), iParam0);
}

int func_243()//Position - 0xF0AF
{
	if (func_246(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if ((func_250() && !func_245()) || func_201(CAM::_0xDC9DA9E8789F5246(), 21))
		{
			return 1;
		}
		else
		{
			func_244(27);
		}
	}
	return 0;
}

void func_244(int iParam0)//Position - 0xF0F2
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_4), iParam0);
}

bool func_245()//Position - 0xF10F
{
	return Global_1406A0.f_1;
}

int func_246(int iParam0, int iParam1)//Position - 0xF11D
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 || (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295))
	{
		return 1;
	}
	return 0;
}

int func_247()//Position - 0xF158
{
	return func_248(306, 4294967295);
}

int func_248(int iParam0, int iParam1)//Position - 0xF168
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2727B6[iParam0 /*3*/][func_249(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_249(int iParam0)//Position - 0xF194
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_17();
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

bool func_250()//Position - 0xF1C8
{
	return Global_1406A0;
}

int func_251(int iParam0)//Position - 0xF1D4
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18CD5B[iVar0 /*560*/] != 4294967295;
	}
	return 0;
}

bool func_252(int iParam0)//Position - 0xF1F5
{
	return func_237(iParam0, 20);
}

bool func_253()//Position - 0xF205
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 5;
}

int func_254(int iParam0)//Position - 0xF21A
{
	if (Global_24FBF9[iParam0 /*413*/].f_105.f_4 != 0 || Global_24FBF9[iParam0 /*413*/].f_105.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_255()//Position - 0xF24E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 0);
}

int func_256(int iParam0)//Position - 0xF26A
{
	if (func_257(iParam0, 1))
	{
		if (Global_1841F3[iParam0 /*790*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_257(int iParam0, bool bParam1)//Position - 0xF28E
{
	if (bParam1)
	{
		if (func_229(iParam0))
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

bool func_258(int iParam0, int iParam1)//Position - 0xF2BA
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_B.f_5, iParam1);
}

bool func_259(int iParam0, bool bParam1, bool bParam2)//Position - 0xF2D5
{
	int iVar0;
	int iVar1;
	
	if (Global_40001.f_1D95 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_263(CAM::_0xDC9DA9E8789F5246(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_40001.f_126C == 1)
		{
			return 1;
		}
	}
	if (func_262() || func_261())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_260())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806DA[iVar1], iVar0);
}

int func_260()//Position - 0xF443
{
	int iVar0;
	
	if (Global_1406BE)
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_6B8, 23))
	{
		return 1;
	}
	if (func_262())
	{
		return 1;
	}
	if (func_261())
	{
		return 1;
	}
	iVar0 = Global_150A75[func_249(4294967295)];
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 7))
	{
		MISC::SET_BIT(&(Global_26862F.f_6B8), 23);
		return 1;
	}
	return 0;
}

bool func_261()//Position - 0xF4A9
{
	return Global_14084D;
}

bool func_262()//Position - 0xF4B5
{
	return Global_14084F;
}

bool func_263(int iParam0, int iParam1)//Position - 0xF4C1
{
	var uVar0;
	int iVar1;
	
	if (!func_266())
	{
		return 0;
	}
	if (func_265())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_264(iParam1);
	iVar1 = uVar0;
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_285, iVar1);
}

int func_264(int iParam0)//Position - 0xF509
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		default:
	}
	return 1;
}

bool func_265()//Position - 0xF671
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_92, 3);
}

int func_266()//Position - 0xF68B
{
	if (Global_1406BE)
	{
		return 1;
	}
	if (func_262())
	{
		return 1;
	}
	if (func_261())
	{
		return 1;
	}
	return func_248(120, 4294967295);
}

bool func_267(int iParam0)//Position - 0xF6BB
{
	int iVar0;
	
	iVar0 = func_268(2480, 4294967295, 0);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, iParam0);
}

int func_268(int iParam0, int iParam1, int iParam2)//Position - 0xF6D6
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_249(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

bool func_269()//Position - 0xF708
{
	bool bVar0;
	
	if (!func_737())
	{
		if (Local_110.f_1B == joaat("HYDRA") || Local_110.f_1B == joaat("RHINO"))
		{
			return 0;
		}
	}
	else if (Local_110.f_1B == joaat("HYDRA") || Local_110.f_1B == joaat("RHINO"))
	{
		if (func_110() == 2)
		{
			return 0;
		}
	}
	if (!func_737())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[0]))
		{
			if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_7[0])) == joaat("VALKYRIE"))
			{
				bVar0 = Local_110.f_F != false;
			}
			else
			{
				bVar0 = Local_110.f_E != false;
			}
		}
	}
	else
	{
		bVar0 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 9);
	}
	if (!func_15(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if (bVar0 && !func_198())
		{
			if (func_737())
			{
				if (!func_276("UW_ABTSC"))
				{
					func_270("UW_ABTSC", 0);
				}
			}
			else if (!func_276("UW_ABTS"))
			{
				func_270("UW_ABTS", 0);
			}
		}
		else if (func_276("UW_ABTSC") || func_276("UW_ABTS"))
		{
			func_8();
		}
	}
	return bVar0;
}

void func_270(char* sParam0, bool bParam1)//Position - 0xF826
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return;
	}
	if (func_274(sParam0))
	{
		return;
	}
	func_9();
	Global_140740 = 0;
	StringCopy(&(Global_140740.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_140740.f_9 = MISC::GET_HASH_KEY(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	func_273();
	func_272(bParam1);
	func_271();
}

void func_271()//Position - 0xF891
{
	MISC::SET_BIT(&(Global_140740.f_3B), 1);
}

void func_272(bool bParam0)//Position - 0xF8A4
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_140740.f_3B), 0);
		return;
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_140740.f_3B), 0);
}

void func_273()//Position - 0xF8CA
{
	Global_140740.f_A = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), 86400000);
	Global_140740.f_B = HUD::_0x13C4B962653A5280();
}

bool func_274(char* sParam0)//Position - 0xF8EF
{
	if (!func_14())
	{
		return 0;
	}
	if (Global_140740 == 11)
	{
		return func_275(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_C));
}

bool func_275(char* sParam0)//Position - 0xF933
{
	if (!func_14())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_10));
}

int func_276(char* sParam0)//Position - 0xF965
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_14())
	{
		return 0;
	}
	if (Global_140740 == 11)
	{
		if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return 0;
	}
	return func_274(sParam0);
}

void func_277(bool bParam0)//Position - 0xF9B6
{
	int iVar0;
	struct<4> Var1;
	bool bVar2;
	
	Var1 = { func_419() };
	bVar2 = false;
	if (Local_110.f_1B == joaat("RHINO") || Local_110.f_1B == joaat("HYDRA"))
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_131[iVar0 /*42*/] = 4294967295;
			Local_131[iVar0 /*42*/].f_1 = func_26();
			Local_131[iVar0 /*42*/].f_9 = 0;
			Local_131[iVar0 /*42*/].f_1F = 4294967295;
			if (Local_110.f_1D1[iVar0 /*4*/].f_1 > 4294967295)
			{
				Local_131[iVar0 /*42*/].f_1 = Local_110.f_1D1[iVar0 /*4*/].f_2;
				Local_131[iVar0 /*42*/].f_9 = Local_110.f_1D1[iVar0 /*4*/].f_1;
			}
			iVar0++;
		}
		if (bParam0)
		{
			if (!func_418())
			{
				if (Local_132.f_67 != 129)
				{
					Local_132.f_67 = 129;
				}
				else
				{
					func_203(1, 129);
				}
			}
		}
		else if (Local_132.f_67 != 129)
		{
			Local_132.f_67 = 129;
		}
		func_282(&Local_131, &uLocal_130, 26, &Local_132, &uLocal_145, 4294967295, 0, 0);
		if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 == 1)
		{
			if (Local_131[0 /*42*/].f_1 != CAM::_0xDC9DA9E8789F5246())
			{
				if (Local_110.f_1D1[0 /*4*/].f_1 > 0)
				{
					func_281();
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_131[iVar0 /*42*/] = 4294967295;
			Local_131[iVar0 /*42*/].f_1 = func_26();
			Local_131[iVar0 /*42*/].f_9 = 0;
			Local_131[iVar0 /*42*/].f_1F = 4294967295;
			Local_131[iVar0 /*42*/].f_27 = 4294967295;
			if (Local_110.f_1D1[iVar0 /*4*/].f_1 > 4294967295)
			{
				Local_131[iVar0 /*42*/].f_27 = Local_110.f_1D1[iVar0 /*4*/] + 1;
				Local_131[iVar0 /*42*/].f_1 = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_1D1[iVar0 /*4*/].f_2);
				Local_131[iVar0 /*42*/].f_28 = Local_110.f_1D1[iVar0 /*4*/].f_1;
				Local_131[iVar0 /*42*/].f_9 = Local_110.f_1D1[iVar0 /*4*/].f_1;
				Local_131[iVar0 /*42*/].f_2 = Local_110.f_1D1[iVar0 /*4*/];
			}
			iVar0++;
		}
		func_278();
		if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 == 1)
		{
			if (Local_110.f_252[0 /*4*/] > 0)
			{
				if (Local_110.f_252[0 /*4*/] != Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_9)
				{
					if (Local_110.f_100[Local_110.f_252[0 /*4*/]] > 0)
					{
						func_281();
					}
				}
			}
		}
		func_282(&Local_131, &uLocal_130, 26, &Local_132, &uLocal_145, 4294967295, 1, 0);
		if (bParam0)
		{
			if (!func_418())
			{
				if (Local_132.f_67 != 129)
				{
					Local_132.f_67 = 129;
				}
				else
				{
					func_203(1, 129);
				}
			}
		}
		else if (Local_132.f_67 != 129)
		{
			Local_132.f_67 = 129;
		}
	}
}

void func_278()//Position - 0xFC3D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	
	uLocal_605[0] = Local_110.f_252[0 /*4*/];
	uLocal_605[1] = Local_110.f_252[1 /*4*/];
	uLocal_605[2] = Local_110.f_252[2 /*4*/];
	uLocal_605[3] = Local_110.f_252[3 /*4*/];
	iVar3 = Local_110.f_252[0 /*4*/];
	iVar4 = Local_110.f_252[1 /*4*/];
	iVar5 = Local_110.f_252[2 /*4*/];
	iVar6 = Local_110.f_252[3 /*4*/];
	if (iVar3 != 4294967295)
	{
		uVar7 = Local_110.f_10A[iVar3];
	}
	if (iVar4 != 4294967295)
	{
		uVar8 = Local_110.f_10A[iVar4];
	}
	if (iVar5 != 4294967295)
	{
		uVar9 = Local_110.f_10A[iVar5];
	}
	if (iVar6 != 4294967295)
	{
		uVar10 = Local_110.f_10A[iVar6];
	}
	uLocal_606[0] = uVar7;
	uLocal_606[1] = uVar8;
	uLocal_606[2] = uVar9;
	uLocal_606[3] = uVar10;
	iVar11 = 0;
	while (iVar11 < NETWORK::NETWORK_GET_NUM_PARTICIPANTS())
	{
		iVar2 = func_280(uLocal_605[iVar0], iVar11);
		if (iVar2 != 4294967295)
		{
			Local_131[iVar2 /*42*/].f_9 = Local_110.f_252[iVar0 /*4*/].f_1;
		}
		func_279(iVar2, iVar11);
		iVar1++;
		if (iVar1 >= uLocal_606[iVar0])
		{
			iVar0++;
			iVar1 = 0;
		}
		if (iVar0 >= 4)
		{
			return;
		}
		iVar11++;
	}
}

void func_279(int iParam0, int iParam1)//Position - 0xFD73
{
	struct<42> Var0;
	
	if (iParam0 == 4294967295 || iParam1 == 4294967295)
	{
		return;
	}
	Var0 = { Local_131[iParam1 /*42*/] };
	Local_131[iParam1 /*42*/] = { Local_131[iParam0 /*42*/] };
	Local_131[iParam0 /*42*/] = { Var0 };
}

int func_280(int iParam0, int iParam1)//Position - 0xFDC1
{
	int iVar0;
	int iVar1;
	
	iVar1 = 4294967295;
	iVar0 = iParam1;
	while (iVar0 <= (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() - 1))
	{
		if (iParam0 == Local_131[iVar0 /*42*/].f_2)
		{
			iVar1 = iVar0;
			iVar0 = NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
		}
		iVar0++;
	}
	return iVar1;
}

void func_281()//Position - 0xFDFE
{
	MISC::SET_BIT(&(Global_26862F.f_6BB), 19);
}

void func_282(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0xFE13
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
	
	if (func_417(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = 4294967295;
	iVar12 = 4294967295;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_24 = 0;
	if (func_415() || iParam2 == 27)
	{
		if (func_367(uParam1, iParam2, uParam3, Global_180518, 0, func_420(), sParam7))
		{
			func_366(1);
			if ((!func_364() && !func_362()) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 1))
			{
				if (func_361())
				{
					func_358();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_1B == 0)
					{
						func_357(1);
						Global_180518 = 0;
						iVar19 = 4294967295;
						if (Global_1805F5 != 1)
						{
							func_356(uParam1, 0, 0);
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
								if (func_837(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
									if (!func_15(iVar3, 0))
									{
										if ((func_355(iVar3) || Global_24FBF9[iVar3 /*413*/].f_EC != 4294967295) || func_354(iVar3))
										{
											iVar9 = iVar3;
											if (func_353(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_350(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_347(CAM::_0xDC9DA9E8789F5246(), 0) && func_346(CAM::_0xDC9DA9E8789F5246()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_345())
							{
								if (func_837(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
								}
								else
								{
									iVar3 = func_26();
								}
							}
							else
							{
								iVar3 = (iParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_344(iVar3) && func_341(iVar3, iParam2)) && func_837(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1841F3[iVar9 /*790*/].f_D3.f_6;
								Var6 = { func_336(iVar3) };
								if (iVar3 == CAM::_0xDC9DA9E8789F5246())
								{
									uParam3->f_23 = iVar18;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_66(iVar3) };
								iVar5 = func_330(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
								}
								Global_180518++;
								if ((iParam0[iVar17 /*42*/])->f_16 != -1f)
								{
									fVar10 = (iParam0[iVar17 /*42*/])->f_16;
								}
								if ((iParam0[iVar17 /*42*/])->f_1F != 4294967295)
								{
									iVar11 = (iParam0[iVar17 /*42*/])->f_1F;
								}
								if ((iParam0[iVar17 /*42*/])->f_29 != 4294967295)
								{
									iVar12 = (iParam0[iVar17 /*42*/])->f_29;
								}
								iVar8 = (iParam0[iVar17 /*42*/])->f_9;
								if (((iParam0[iVar17 /*42*/])->f_9 != 4294967295 || (iParam0[iVar17 /*42*/])->f_16 != -1f) || (iParam0[iVar17 /*42*/])->f_1F != 4294967295)
								{
									if (!func_345())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != 4294967295)
								{
									func_325(&iVar8, &fVar10, (iParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_68), func_324(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (iParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = 4294967294;
									}
								}
								iVar16 = func_319(iVar3, 0);
								if (bVar2)
								{
									if (func_318(iVar3, 1) && iVar1[iVar9] != 4294967295)
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
								if ((iParam0[iVar17 /*42*/])->f_27 != 4294967295)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (iParam0[iVar17 /*42*/])->f_27, 16);
								}
								if (func_317(iParam5))
								{
									func_316(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (iParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								else
								{
									func_316(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (iParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
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
							if (func_837(iVar3, 0, 1) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar14, iVar3))
							{
								iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
							}
							else
							{
								iVar3 = func_26();
							}
							if (func_344(iVar3))
							{
								if (func_837(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1841F3[iVar9 /*790*/].f_D3.f_6;
									Var6 = { func_336(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_66(iVar3) };
									iVar5 = func_330(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
									}
									Global_180518++;
									iVar16 = func_319(iVar3, 1);
									if (bVar2)
									{
										if (func_318(iVar3, 1))
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
									func_295(iVar3, PLAYER::GET_PLAYER_NAME(iVar3), uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 11))
						{
							func_292(uParam3, uParam1);
						}
						func_104(&(uParam3->f_15));
						func_291();
						uParam3->f_1B = 2;
					}
					if (uParam3->f_1B == 2)
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 7))
						{
							func_290(uParam3, uParam1);
							func_289(uParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_21), 7);
						}
						func_290(uParam3, uParam1);
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 11))
						{
							MISC::SET_BIT(&(uParam3->f_21), 11);
						}
						if (func_285(uParam3))
						{
							Global_1805F5 = 1;
						}
						func_283(uParam3);
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
			func_291();
			func_357(0);
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

void func_283(var uParam0)//Position - 0x10463
{
	if (!func_21(&(uParam0->f_15)))
	{
		func_19(&(uParam0->f_15), 0, 0);
	}
	else if (func_18(&(uParam0->f_15), 250, 0))
	{
		func_104(&(uParam0->f_15));
		func_284(0);
	}
}

void func_284(bool bParam0)//Position - 0x1049F
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

int func_285(var uParam0)//Position - 0x104E5
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_25;
	iVar3 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_25);
	if (iVar3 != func_26() && func_837(iVar3, 0, 1))
	{
		Var2 = { func_66(iVar3) };
		iVar1 = func_288(uParam0, uParam0->f_25);
		if (func_287(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_286(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_286(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_286(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_286(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar4 = 1;
							func_286(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_286(uParam0, iVar0, 0);
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

void func_286(var uParam0, int iParam1, int iParam2)//Position - 0x10612
{
	uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_287(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x10624
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_288(var uParam0, int iParam1)//Position - 0x10634
{
	return uParam0->f_26[iParam1 /*2*/];
}

void func_289(var uParam0, bool bParam1, int iParam2)//Position - 0x10644
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

void func_290(var uParam0, var uParam1)//Position - 0x1067C
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_21, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "SET_HIGHLIGHT");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_23);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		MISC::SET_BIT(&(uParam0->f_21), 10);
	}
}

void func_291()//Position - 0x106B4
{
	if (Global_1805F5 != 0)
	{
		Global_1805F5 = 0;
	}
}

void func_292(var uParam0, var uParam1)//Position - 0x106C9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_26())
		{
			if (func_837(iVar2, 0, 1))
			{
				if (uParam0->f_26[iVar0 /*2*/].f_1 != 4294967295)
				{
					iVar1 = func_294(uParam0->f_26[iVar0 /*2*/], 0);
					func_293(uParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_1841F3[iVar0 /*790*/].f_D3.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_293(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1073C
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

int func_294(int iParam0, bool bParam1)//Position - 0x10779
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

void func_295(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x107AD
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_315() && iParam4 < func_314())
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
				func_313("");
			}
			else
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam10);
			}
			func_313(sParam1);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam11);
			if (uParam3->f_6C == 6)
			{
				func_313("");
			}
			else
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(65);
			}
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4294967295);
			func_313("");
			if (uParam3->f_6C == 6)
			{
				func_313("");
			}
			else
			{
				func_313(&sParam5);
			}
			func_300(uParam3, iParam0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			if (func_299(uParam3))
			{
				func_298("DPAD_FRIEND");
			}
			else if (func_297(uParam3))
			{
				func_298("DPAD_FRIEND");
			}
			else if (func_296(uParam3))
			{
				func_298("DPAD_CREW");
			}
			else
			{
				func_298("");
			}
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
	}
}

bool func_296(var uParam0)//Position - 0x108D2
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_21, 6);
}

bool func_297(var uParam0)//Position - 0x108E3
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_21, 5);
}

void func_298(char* sParam0)//Position - 0x108F4
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

int func_299(var uParam0)//Position - 0x10906
{
	if (func_297(uParam0) && func_296(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_300(var uParam0, int iParam1)//Position - 0x10927
{
	if (func_312(iParam1))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(121);
	}
	else if (func_305(iParam1))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(122);
	}
	else if (((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_1B, 15) && iParam1 > 4294967295) && iParam1 < 32) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam1 /*413*/].f_19A, 0))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(123);
	}
	else
	{
		if (func_301())
		{
			uParam0->f_24 = 0;
		}
		GRAPHICS::SET_SEETHROUGH(uParam0->f_24);
	}
}

int func_301()//Position - 0x109A8
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_303() || func_302())
		{
			return 1;
		}
	}
	return 0;
}

var func_302()//Position - 0x109CD
{
	return Global_255C02.f_E;
}

int func_303()//Position - 0x109DB
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_302();
	}
	return func_304(Global_440000.f_1FEDE);
}

int func_304(int iParam0)//Position - 0x109FF
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

int func_305(int iParam0)//Position - 0x10A39
{
	if ((func_837(iParam0, 0, 1) && func_309()) && func_306(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_306(int iParam0, bool bParam1)//Position - 0x10A66
{
	return func_307(iParam0, bParam1, 1);
}

int func_307(int iParam0, bool bParam1, int iParam2)//Position - 0x10A77
{
	int iVar0;
	
	if (iParam0 == func_26())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_308(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18CD5B[iParam0 /*560*/].f_B;
	if (iVar0 != func_26() && Global_18CD5B[iVar0 /*560*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_308(int iParam0, int iParam1)//Position - 0x10AD3
{
	if (iParam0 != func_26())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_26())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B == iParam0 && Global_18CD5B[iParam0 /*560*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_309()//Position - 0x10B22
{
	if (func_251(CAM::_0xDC9DA9E8789F5246()) || func_311())
	{
		if (!func_310(CAM::_0xDC9DA9E8789F5246(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_310(int iParam0, int iParam1)//Position - 0x10B52
{
	if (func_188(iParam0) == iParam1)
	{
		return func_240(iParam0);
	}
	return 0;
}

int func_311()//Position - 0x10B6F
{
	switch (func_346(CAM::_0xDC9DA9E8789F5246()))
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

int func_312(int iParam0)//Position - 0x10BAD
{
	if (func_301())
	{
		if (func_837(iParam0, 0, 1))
		{
			return func_353(iParam0);
		}
	}
	if ((func_837(iParam0, 0, 1) && func_309()) && func_308(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_313(char* sParam0)//Position - 0x10BF5
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

int func_314()//Position - 0x10C03
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

int func_315()//Position - 0x10C1F
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_18051A)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_316(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x10C37
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_315() && iParam3 < func_314())
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
					func_313("");
				}
				else
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam9);
				}
				if (uParam2->f_6C == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_298(sParam16);
				}
				else
				{
					func_313(&(uParam2->f_1));
				}
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam11);
				if (uParam2->f_6C == 6)
				{
					func_313("");
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
				if (func_345())
				{
					func_313("");
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
						func_298(&(uParam2->f_68));
					}
					else
					{
						func_313("");
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
					func_313("");
				}
				if (uParam2->f_6C == 6)
				{
					func_313("");
				}
				else
				{
					func_313(&sParam4);
				}
				func_300(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_313("");
					func_313("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
				}
				if (func_299(uParam2))
				{
					func_298("DPAD_FRIEND");
				}
				else if (func_297(uParam2))
				{
					func_298("DPAD_FRIEND");
				}
				else if (func_296(uParam2))
				{
					func_298("DPAD_CREW");
				}
				else
				{
					func_298("");
				}
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
		}
	}
}

int func_317(int iParam0)//Position - 0x10F87
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

bool func_318(int iParam0, bool bParam1)//Position - 0x10FAB
{
	if (!bParam1)
	{
		if (func_353(iParam0))
		{
			return 0;
		}
	}
	return Global_18CD5B[iParam0 /*560*/].f_B != func_26();
}

int func_319(int iParam0, bool bParam1)//Position - 0x10FD6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_251(iParam0)) && !func_252(iParam0))
	{
		iVar0 = func_323();
	}
	iVar1 = func_322(iParam0);
	if (!iVar1 == 4294967295)
	{
		return func_320(iVar1);
	}
	return iVar0;
}

int func_320(int iParam0)//Position - 0x11020
{
	int iVar0;
	
	if (iParam0 > 4294967295)
	{
		iVar0 = func_321(iParam0);
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

var func_321(int iParam0)//Position - 0x110E3
{
	return Global_24E392.f_817.f_2C[iParam0 /*2*/].f_1;
}

int func_322(int iParam0)//Position - 0x110FA
{
	if (!iParam0 == func_26())
	{
		if (func_318(iParam0, 1))
		{
			return Global_24E392.f_817.f_B[func_65(iParam0)];
		}
	}
	return 4294967295;
}

int func_323()//Position - 0x1112C
{
	return 21;
}

char* func_324(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x11136
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

int func_325(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x112C0
{
	if (func_329(iParam3))
	{
		*fParam1 = (func_326(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_317(iParam3))
	{
		*fParam1 = (func_326(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_326(int iParam0, int iParam1)//Position - 0x11310
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
				return func_328(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_327(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_327(float fParam0)//Position - 0x113B3
{
	return (fParam0 / 1.609344f);
}

float func_328(float fParam0)//Position - 0x113C3
{
	return (fParam0 / 0.3048f);
}

int func_329(int iParam0)//Position - 0x113D3
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

int func_330(int iParam0)//Position - 0x1142F
{
	int iVar0;
	
	iVar0 = func_333(iParam0);
	if (iVar0 == 4294967295)
	{
		func_331(iParam0, 1);
		return 0;
	}
	Global_150E71[iVar0 /*5*/].f_4 = 1;
	return Global_150E71[iVar0 /*5*/].f_2;
}

void func_331(int iParam0, bool bParam1)//Position - 0x11465
{
	if (!func_837(iParam0, 0, 1))
	{
		return;
	}
	if (func_333(iParam0) != 4294967295)
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
	if (func_332(iParam0))
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

int func_332(int iParam0)//Position - 0x114D1
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

int func_333(int iParam0)//Position - 0x11503
{
	int iVar0;
	
	if (!func_837(iParam0, 0, 1))
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
			func_334(iVar0);
			return 4294967295;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_334(int iParam0)//Position - 0x11582
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
	func_335(&(Global_150E71[iVar2 /*5*/]));
	Global_150F12 = (Global_150F12 - 1);
}

void func_335(var uParam0)//Position - 0x11638
{
	*uParam0 = 0;
	uParam0->f_1 = func_26();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = HUD::_0x13C4B962653A5280();
	}
}

struct<4> func_336(int iParam0)//Position - 0x11665
{
	char cVar0[32];
	
	if (func_837(iParam0, 0, 1))
	{
		Global_2633E1 = { func_66(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_287(Global_2633E1))
			{
				if (!NETWORK::_0xB57A49545BA53CE7(&Global_2633E1))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::_0x72D918C99BCACC54(0))
		{
			return cVar0;
		}
		if (func_340(&Global_2633E1))
		{
			Global_26339B = { func_338(iParam0) };
			func_337(&Global_26339B, &cVar0);
		}
	}
	return cVar0;
}

void func_337(var uParam0, char* sParam1)//Position - 0x116E6
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

struct<35> func_338(int iParam0)//Position - 0x116F8
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_339(iParam0))
	{
		return Global_140879[CAM::_0xDC9DA9E8789F5246() /*35*/];
	}
	Var0 = { func_66(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_339(int iParam0)//Position - 0x11734
{
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		return 1;
	}
	return 0;
}

int func_340(var uParam0)//Position - 0x1174A
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

int func_341(int iParam0, int iParam1)//Position - 0x11770
{
	if (iParam1 == 26)
	{
		if ((func_200(iParam0) || func_343(iParam0)) || func_199(iParam0))
		{
			return 0;
		}
	}
	if (!func_342(iParam0))
	{
		return 0;
	}
	if ((!func_355(iParam0) && Global_24FBF9[iParam0 /*413*/].f_EC == 4294967295) && !func_354(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_342(int iParam0)//Position - 0x117DF
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_8E, 22);
}

int func_343(int iParam0)//Position - 0x117F8
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 10) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 9));
	}
	return 0;
}

int func_344(int iParam0)//Position - 0x11836
{
	int iVar0;
	
	if (iParam0 == func_26())
	{
		return 0;
	}
	if (func_15(iParam0, 0))
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

int func_345()//Position - 0x1187B
{
	switch (func_346(CAM::_0xDC9DA9E8789F5246()))
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
	switch (func_188(CAM::_0xDC9DA9E8789F5246()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_252(CAM::_0xDC9DA9E8789F5246()))
	{
		switch (func_346(CAM::_0xDC9DA9E8789F5246()))
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
	if (func_310(CAM::_0xDC9DA9E8789F5246(), 236))
	{
		return 1;
	}
	return 0;
}

int func_346(int iParam0)//Position - 0x119B7
{
	if (func_246(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_21;
	}
	return 4294967295;
}

int func_347(int iParam0, int iParam1)//Position - 0x119DA
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 && func_348(Global_18CD5B[iParam0 /*560*/].f_B.f_21))
	{
		return 1;
	}
	if (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295)
	{
		if (func_348(Global_18CD5B[iParam0 /*560*/].f_B.f_20))
		{
			return 1;
		}
	}
	return 0;
}

int func_348(int iParam0)//Position - 0x11A40
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
	return func_349(iParam0, 0);
	return 0;
}

int func_349(int iParam0, int iParam1)//Position - 0x11A9A
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

void func_350(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x11AEF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_837(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_15(iVar1, 0))
			{
				if ((func_355(iVar1) || Global_24FBF9[iVar1 /*413*/].f_EC != 4294967295) || func_354(iVar1))
				{
					if (func_351(iVar1, iParam1, 0))
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

int func_351(int iParam0, int iParam1, bool bParam2)//Position - 0x11B79
{
	if (iParam1 != func_26())
	{
		if (!bParam2)
		{
			if (func_352(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_26())
		{
			return iParam1 == Global_18CD5B[iParam0 /*560*/].f_B;
		}
	}
	return 0;
}

int func_352(int iParam0, int iParam1)//Position - 0x11BC3
{
	if (iParam1 != func_26())
	{
		if (iParam0 != func_26())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B != func_26())
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

int func_353(int iParam0)//Position - 0x11C08
{
	if (iParam0 != func_26())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_26())
		{
			return Global_18CD5B[iParam0 /*560*/].f_B == iParam0;
		}
	}
	return 0;
}

bool func_354(int iParam0)//Position - 0x11C3D
{
	return Global_1841F3[iParam0 /*790*/].f_C4 != 0;
}

int func_355(int iParam0)//Position - 0x11C52
{
	if (func_837(iParam0, 0, 1))
	{
		if (func_837(CAM::_0xDC9DA9E8789F5246(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, CAM::_0xDC9DA9E8789F5246()) || func_346(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_356(var uParam0, int iParam1, int iParam2)//Position - 0x11C93
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

void func_357(bool bParam0)//Position - 0x11CC1
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

void func_358()//Position - 0x11CF3
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 1))
	{
		if (func_360())
		{
			func_359();
		}
	}
}

void func_359()//Position - 0x11D15
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

bool func_360()//Position - 0x11D60
{
	return Global_252F9E.f_A90[0 /*80*/].f_1 != 0;
}

int func_361()//Position - 0x11D76
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 0) && func_360())
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 1) && func_360())
	{
		return 1;
	}
	return 0;
}

int func_362()//Position - 0x11DB7
{
	if (func_360())
	{
		if (func_363(Global_252F9E.f_A90[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_363(int iParam0)//Position - 0x11DDE
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

int func_364()//Position - 0x11E5E
{
	if (func_360())
	{
		if (func_365(Global_252F9E.f_A90[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_365(int iParam0)//Position - 0x11E85
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

void func_366(int iParam0)//Position - 0x11F17
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

int func_367(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0x11F45
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	char* sVar5;
	int iVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_414(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_413();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_412())
		{
			if (func_411() > 0 && Global_18051A)
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
		if (!func_399())
		{
			func_398(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11E1, 26))
	{
		func_398(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_21(&(uParam2->f_13)))
	{
		if (func_411() == 1)
		{
			func_397(bVar3, uParam0, 0);
			func_19(&(uParam2->f_13), 0, 0);
			func_398(uParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_26862F.f_11E2), 5);
		}
	}
	if (func_21(&(uParam2->f_13)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_18(&(uParam2->f_13), 10000, 0) || (func_411() == 0 && !bParam5))
		{
			func_398(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_396();
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
					func_396();
					if (iParam1 == 26 || iParam1 == 27)
					{
						HUD::_0x25F87B30C382FCA7();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (func_397(bVar3, uParam0, 0))
				{
					func_356(uParam0, 0, 0);
					sVar1 = func_394(iParam1, &(Global_440000.f_1FEE5), bParam4);
					Var0 = { func_392(iParam1) };
					if (bParam4)
					{
						func_389(uParam0, sVar1, "", 0, 4294967295, 4294967295, 1);
					}
					else if (iParam1 == 26)
					{
						func_384(uParam0, func_386(uParam2), func_385(uParam2), 4294967295);
					}
					else if (iParam1 == 27)
					{
						sVar5 = func_377(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar5 = sParam6;
						}
						func_375(uParam0, sVar5, func_376(), 4294967295);
					}
					else if (func_301())
					{
						uParam2->f_22 = Global_180519;
						func_389(uParam0, sVar1, &Var0, 1, 4294967295, Global_180519, 1);
					}
					else if (bVar2)
					{
						uParam2->f_22 = Global_180519;
						func_389(uParam0, sVar1, "", 0, 4294967295, Global_180519, 1);
					}
					else
					{
						iVar6 = func_368(iParam1);
						func_389(uParam0, sVar1, &Var0, 1, iVar6, 4294967295, 1);
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

int func_368(int iParam0)//Position - 0x12215
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (func_374())
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
			if (func_373(CAM::_0xDC9DA9E8789F5246()))
			{
				iVar0 = 20;
			}
			if (func_372(CAM::_0xDC9DA9E8789F5246()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_371(CAM::_0xDC9DA9E8789F5246()))
	{
		iVar0 = 2;
	}
	if (func_369())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_369()//Position - 0x12361
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_61();
	}
	return func_370(Global_440000.f_1FEDE);
}

int func_370(int iParam0)//Position - 0x12385
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

bool func_371(int iParam0)//Position - 0x123BF
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 4;
}

bool func_372(int iParam0)//Position - 0x123D4
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 7;
}

bool func_373(int iParam0)//Position - 0x123E9
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 2;
}

bool func_374()//Position - 0x123FE
{
	return Global_440000.f_1 == 0;
}

void func_375(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x1240E
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_298(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		func_298("");
		if (iParam3 != 4294967295)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

char* func_376()//Position - 0x1246C
{
	switch (func_346(CAM::_0xDC9DA9E8789F5246()))
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

char* func_377(var uParam0)//Position - 0x124C3
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
	switch (func_346(CAM::_0xDC9DA9E8789F5246()))
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
			if (func_380())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_379(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_379(1))
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
			if (func_378(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_B0))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_378(int iParam0)//Position - 0x128EE
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

bool func_379(bool bParam0)//Position - 0x12920
{
	return func_306(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

bool func_380()//Position - 0x12932
{
	return (func_383() && func_381(func_382()));
}

int func_381(int iParam0)//Position - 0x1294B
{
	return func_308(iParam0, 1);
}

int func_382()//Position - 0x1295A
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_23;
}

bool func_383()//Position - 0x12971
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 148;
}

void func_384(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x12987
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_298(sParam1);
		}
		else if (func_188(CAM::_0xDC9DA9E8789F5246()) == 133)
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
		func_298("");
		if (iParam3 != 4294967295)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

char* func_385(var uParam0)//Position - 0x12A0D
{
	int iVar0;
	
	iVar0 = func_188(CAM::_0xDC9DA9E8789F5246());
	if (func_418())
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
			switch (func_187())
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

char* func_386(var uParam0)//Position - 0x12BB3
{
	int iVar0;
	
	iVar0 = func_188(CAM::_0xDC9DA9E8789F5246());
	if (func_418())
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
			if (func_388() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_388() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_187())
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
			if (func_387() == 1)
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

int func_387()//Position - 0x12DA7
{
	return Global_26862F.f_12C7;
}

int func_388()//Position - 0x12DB6
{
	if (func_188(CAM::_0xDC9DA9E8789F5246()) == 132)
	{
		return Global_26862F.f_12C2;
	}
	return 4294967295;
}

void func_389(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x12DD9
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_313(sParam1);
		}
		else if (iParam5 != 4294967295)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		else
		{
			func_298(sParam1);
		}
		if (func_412() && iParam6)
		{
			if (func_391())
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
			func_298(sParam2);
		}
		if (iParam4 != 4294967295)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam4);
			if (func_390(CAM::_0xDC9DA9E8789F5246()))
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

int func_390(int iParam0)//Position - 0x12E9A
{
	if (func_373(iParam0) || func_372(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_391()//Position - 0x12EBC
{
	return Global_18051A;
}

struct<4> func_392(int iParam0)//Position - 0x12EC8
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_393(CAM::_0xDC9DA9E8789F5246()) || func_371(CAM::_0xDC9DA9E8789F5246()))
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
	if (func_301() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_440000.f_26, 16);
	}
	return Var0;
}

bool func_393(int iParam0)//Position - 0x12F62
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 5;
}

char* func_394(int iParam0, char* sParam1, bool bParam2)//Position - 0x12F77
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_301() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_395();
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

char* func_395()//Position - 0x130DB
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

void func_396()//Position - 0x1311F
{
	Global_90A3 = 1;
}

bool func_397(bool bParam0, var uParam1, bool bParam2)//Position - 0x1312B
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

void func_398(var uParam0, var uParam1, bool bParam2)//Position - 0x1316B
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_21), 7);
	Global_180518 = 0;
	func_291();
	Global_180517 = 0;
	uParam1->f_1B = 0;
	if (bParam2)
	{
		if (func_21(&(uParam1->f_13)))
		{
			func_104(&(uParam1->f_13));
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

int func_399()//Position - 0x131DD
{
	if (func_410())
	{
		return 0;
	}
	if (func_253())
	{
		return 0;
	}
	if (!func_408())
	{
		return 0;
	}
	if (!func_227())
	{
		return 0;
	}
	if (func_407(8, 4294967295))
	{
		return 0;
	}
	if (func_411() == 2)
	{
		return 0;
	}
	if (Global_26862F.f_11B2)
	{
		return 0;
	}
	if (func_180())
	{
		return 0;
	}
	else if (!func_257(CAM::_0xDC9DA9E8789F5246(), 1) && Global_1403E4[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_406(1) || func_404(1)) || Global_434C.f_7C) || Global_434C)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_403() && Global_19BACA == 2)
	{
		return 0;
	}
	if (func_401(CAM::_0xDC9DA9E8789F5246()) && !func_403())
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
	if (func_400(0))
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

bool func_400(int iParam0)//Position - 0x13345
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_27, iParam0);
}

int func_401(int iParam0)//Position - 0x1335C
{
	if (func_15(iParam0, 0))
	{
		return 1;
	}
	if (func_402())
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

bool func_402()//Position - 0x1339E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

bool func_403()//Position - 0x133AF
{
	return (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_1E, 12) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19BACB, 0));
}

int func_404(bool bParam0)//Position - 0x133D1
{
	if (PAD::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			if (func_405(AUDIO::_0x0626A247D2405330()))
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

int func_405(int iParam0)//Position - 0x134BC
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

bool func_406(bool bParam0)//Position - 0x13519
{
	if (bParam0)
	{
		return (Global_434C.f_4 && Global_434C.f_68 == 4);
	}
	return Global_434C.f_4;
}

bool func_407(int iParam0, int iParam1)//Position - 0x13542
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

int func_408()//Position - 0x1357D
{
	if (func_409())
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

bool func_409()//Position - 0x135BC
{
	return Global_1406B6;
}

bool func_410()//Position - 0x135C8
{
	return MISC::GET_GAME_TIMER() <= Global_43D7.f_16F1 + 100;
}

int func_411()//Position - 0x135DD
{
	return Global_14E0B5.f_44;
}

int func_412()//Position - 0x135EB
{
	if (Global_180519 > 16)
	{
		return 1;
	}
	return 0;
}

float func_413()//Position - 0x13601
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_414(int iParam0)//Position - 0x13625
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

int func_415()//Position - 0x1364E
{
	if (func_420())
	{
		return 1;
	}
	if (func_199(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_418())
	{
		return 1;
	}
	if (func_251(CAM::_0xDC9DA9E8789F5246()))
	{
		switch (func_188(CAM::_0xDC9DA9E8789F5246()))
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
				if (!func_416(CAM::_0xDC9DA9E8789F5246()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_416(CAM::_0xDC9DA9E8789F5246()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_416(CAM::_0xDC9DA9E8789F5246()))
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

bool func_416(int iParam0)//Position - 0x13729
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 4);
}

int func_417(int iParam0)//Position - 0x13741
{
	if (iParam0 == 27)
	{
		if ((func_251(CAM::_0xDC9DA9E8789F5246()) && !func_252(CAM::_0xDC9DA9E8789F5246())) && !func_310(CAM::_0xDC9DA9E8789F5246(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_246(CAM::_0xDC9DA9E8789F5246(), 0) && func_252(CAM::_0xDC9DA9E8789F5246()))
		{
			return 1;
		}
		if (func_235(CAM::_0xDC9DA9E8789F5246()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_418()//Position - 0x137B2
{
	return Global_184174;
}

struct<4> func_419()//Position - 0x137BE
{
	struct<4> Var0;
	
	switch (Local_110.f_1B)
	{
		case joaat("RHINO"):
			StringCopy(&Var0, "UW_TMRHN", 16);
			break;
		
		case joaat("HYDRA"):
			StringCopy(&Var0, "UW_TMHYD", 16);
			break;
		
		case joaat("SAVAGE"):
			StringCopy(&Var0, "UW_TMSAV", 16);
			break;
		
		case joaat("VALKYRIE"):
			StringCopy(&Var0, "UW_TMVALK", 16);
			break;
		
		case joaat("BUZZARD"):
			StringCopy(&Var0, "UW_TMBUZ", 16);
			break;
	}
	return Var0;
}

int func_420()//Position - 0x13828
{
	if (func_421(CAM::_0xDC9DA9E8789F5246()))
	{
		return Global_141784;
	}
	return 0;
}

int func_421(int iParam0)//Position - 0x13843
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_15(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

void func_422()//Position - 0x13866
{
	struct<2> Var0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (func_15(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		return;
	}
	switch (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11)
	{
		case 0:
			if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 == 0)
			{
				if (Local_110.f_F1 == 0)
				{
					func_742();
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 22))
			{
				if (Local_110.f_1B == joaat("RHINO") && Local_110.f_1D == 2)
				{
					func_711(Local_110.f_1E[0 /*3*/]);
					MISC::SET_BIT(&iLocal_114, 22);
				}
				else if (!func_69(Local_110.f_1E[0 /*3*/], 0f, 0f, 0f, 0))
				{
					func_711(Local_110.f_1E[0 /*3*/]);
					MISC::SET_BIT(&iLocal_114, 22);
				}
			}
			func_710();
			func_704();
			if (Local_110.f_F1 == 0)
			{
				func_701(1);
			}
			func_700(0);
			if (Local_110.f_F1 == 0)
			{
				if (!Local_110.f_1B == joaat("HYDRA") && !Local_110.f_1B == joaat("RHINO"))
				{
					func_194();
				}
				else if (func_737())
				{
					func_194();
				}
				if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0)
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 1))
					{
						func_699(129);
						func_677(1);
						MISC::SET_BIT(&iLocal_115, 1);
						unk_0xEF791AEFDDE09A3D(0);
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 6))
					{
						if (Local_110.f_1C > 1 || (Local_110.f_1C == 1 && func_110() > 1))
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 4))
							{
								Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 = 0;
								MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), 6);
							}
						}
					}
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 1))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_115, 1);
					func_676(1);
					func_675();
					func_677(0);
				}
			}
			if (Local_110.f_F1 == 1)
			{
				func_674(&iVar1, &uVar2);
				iLocal_571 = iVar1;
				func_673(0);
				if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0)
				{
					if (!func_672())
					{
						MISC::SET_BIT(&iLocal_115, 19);
					}
					if (func_276("UW_ABTSC") || func_276("UW_ABTS"))
					{
						func_8();
					}
					unk_0xEF791AEFDDE09A3D(0);
					if ((func_671("UW_MINV") || func_671("UW_TIMELA")) || func_671("UW_TIMEL"))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
					}
					func_190();
					func_661(129, 0f, 0f, 1, 1, 1, 0);
					func_654(1);
					func_653();
					GRAPHICS::_0x54E22EA2C1956A8D(0.1f);
					iLocal_119 = PLAYER::GET_MAX_WANTED_LEVEL();
					HUD::_0x14621BB1DF14E2B2(0);
					func_652(1);
					func_651(1);
					if (Local_110.f_1B != joaat("RHINO"))
					{
						func_630(1);
					}
					iLocal_125 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(AUDIO::_0x0626A247D2405330());
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(AUDIO::_0x0626A247D2405330(), iLocal_123);
					AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
					AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START");
					PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 184, true);
					PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 151, false);
					func_629(0);
					Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_9 = iLocal_571;
					if (!func_737())
					{
						func_628(63, "UW_TITLE", "UW_DESC", func_323(), 4294967295, func_323(), 1);
					}
					else if (Local_110.f_1B == joaat("HYDRA") || Local_110.f_1B == joaat("RHINO"))
					{
						func_628(63, "UW_TITLEC", "UW_DESCC", func_323(), 4294967295, func_323(), 1);
					}
					else
					{
						iVar1++;
						StringCopy(&Var0, "UW_TM", 16);
						StringIntConCat(&Var0, iVar1, 16);
						func_627(63, &Var0, "UW_DESCCT", "UW_TITLE", 15000, 4294967295, 3212836864, "", func_323(), func_323(), 4294967295);
					}
					Local_111.f_9 = NETWORK::_GET_POSIX_TIME();
					func_629(0);
					func_625(0);
					func_19(&uLocal_585, 0, 0);
					Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 = 1;
				}
				else
				{
					func_190();
					if (func_276("UW_ABTSC") || func_276("UW_ABTS"))
					{
						func_8();
					}
					if (func_622("UW_HELP1", func_624(), func_623(1)) || func_622("UW_HELP1C", func_624(), func_623(1)))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
					}
					Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 = 2;
					func_629(0);
					if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 == 0)
					{
					}
					else if (!func_621())
					{
					}
				}
			}
			else if (Local_110.f_F1 == 3)
			{
				func_629(0);
				if (func_622("UW_HELP1", func_624(), func_623(1)) || func_622("UW_HELP1C", func_624(), func_623(1)))
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				}
				if (!func_620())
				{
				}
				if (func_276("UW_ABTSC") || func_276("UW_ABTS"))
				{
					func_8();
				}
				func_190();
				Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 = 3;
			}
			else if (Local_110.f_F1 > 3)
			{
				if (func_276("UW_ABTSC") || func_276("UW_ABTS"))
				{
					func_8();
				}
				func_629(0);
				Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 = 4;
			}
			else
			{
				if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0)
				{
					func_619();
					func_618();
					if (func_120())
					{
						func_653();
					}
				}
				if (func_737())
				{
					if (func_612(2, 0, 1, 0, 0))
					{
						if (func_276("UW_ABTSC") || func_276("UW_ABTS"))
						{
							func_8();
						}
						func_629(0);
						Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 = 4;
					}
				}
				else if (Local_110.f_1B == joaat("VALKYRIE"))
				{
					if (func_612(2, 0, 1, 0, 0))
					{
						if (func_276("UW_ABTSC") || func_276("UW_ABTS"))
						{
							func_8();
						}
						func_629(0);
						Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 = 4;
					}
				}
			}
			break;
		
		case 1:
			func_163(1);
			func_704();
			func_546();
			func_167();
			func_544();
			func_532();
			func_277(0);
			func_528();
			func_525();
			func_619();
			func_618();
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 26))
			{
				if (!func_524(55))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 11))
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 10))
						{
							if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_A == 4294967295)
							{
								if (!func_737())
								{
									if (!func_276("UW_ATTK"))
									{
										func_270("UW_ATTK", 0);
									}
								}
								else if (Local_110.f_1B == joaat("HYDRA") || Local_110.f_1B == joaat("RHINO"))
								{
									if (!func_276("UW_ATTK"))
									{
										func_270("UW_ATTK", 0);
									}
								}
								else if (!func_276("UW_ATTK"))
								{
									func_674(&iVar1, &uVar2);
									iVar1++;
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar1, 16);
									func_270("UW_ATTK", 0);
								}
							}
							else if (func_276("UW_ATTK"))
							{
								func_8();
							}
						}
					}
				}
			}
			func_523();
			if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0)
			{
				if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_A == 4294967295)
				{
					func_653();
				}
			}
			if (!func_837(CAM::_0xDC9DA9E8789F5246(), 1, 1))
			{
				Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 = 2;
				func_8();
				MISC::SET_BIT(&iLocal_114, 21);
			}
			else if (func_180())
			{
				Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 = 2;
				func_8();
			}
			if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 == 1)
			{
				if (!func_522())
				{
					MISC::SET_BIT(&iLocal_114, 23);
					func_8();
					if (iLocal_571 > 4294967295)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iLocal_571]))
						{
							func_24(&(Local_110.f_7[iLocal_571]));
						}
					}
					Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 = 2;
				}
			}
			if (Local_110.f_F1 == 3)
			{
				func_676(1);
				Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 = 3;
			}
			else if (Local_110.f_F1 > 3)
			{
				func_676(1);
				Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 = 4;
			}
			else if (func_737())
			{
				if (func_612(2, 0, 1, 0, 0))
				{
					Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 = 4;
				}
			}
			break;
		
		case 2:
			if (Local_110.f_F1 == 3)
			{
				Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 = 3;
			}
			else if (Local_110.f_F1 > 3)
			{
				Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 = 4;
			}
			func_456();
			if (func_620())
			{
				if (func_188(CAM::_0xDC9DA9E8789F5246()) == 129)
				{
					if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && !HUD::IS_RADAR_HIDDEN())
					{
						PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 398, false);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 22))
						{
							func_455();
							GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_114, 22);
						}
						func_675();
						func_452();
						func_450(0);
						func_448(0);
						PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 184, false);
						PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 151, true);
						func_677(0);
						func_676(1);
					}
					func_447();
				}
			}
			else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 8))
			{
				MISC::SET_BIT(&iLocal_115, 8);
			}
			if (!func_198())
			{
				func_446();
				func_544();
				func_163(0);
				func_532();
				func_277(1);
				func_528();
				if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0)
				{
				}
			}
			else
			{
				func_445();
			}
			func_439();
			func_438();
			func_546();
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 7))
			{
				iVar3 = 0;
				while (iVar3 < 24)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_30[iVar3]))
					{
						if (!func_31(Local_110.f_30[iVar3]))
						{
							PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_110.f_30[iVar3]), CAM::_0xDC9DA9E8789F5246(), 0);
						}
					}
					iVar3++;
				}
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_50[iVar3]))
					{
						if (!func_31(Local_110.f_50[iVar3]))
						{
							PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_110.f_50[iVar3]), CAM::_0xDC9DA9E8789F5246(), 0);
						}
					}
					iVar3++;
				}
				MISC::SET_BIT(&iLocal_115, 7);
			}
			else if (Local_110.f_F7 != iLocal_569)
			{
				iLocal_569 = Local_110.f_F7;
				GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_115, 7);
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 11))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), 11);
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 10))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), 10);
			}
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(AUDIO::_0x0626A247D2405330()) == iLocal_123)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(AUDIO::_0x0626A247D2405330(), iLocal_125);
			}
			break;
		
		case 3:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 31))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 12))
				{
					func_190();
					MISC::SET_BIT(&iLocal_114, 31);
				}
			}
			func_523();
			func_433();
			if (!func_198())
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 14) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 12))
				{
					func_277(1);
				}
				func_532();
				func_544();
				func_528();
				func_424();
			}
			func_456();
			func_438();
			func_546();
			if (Local_110.f_F1 > 3)
			{
				Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 = 4;
			}
			break;
		
		case 4:
			func_782();
			break;
	}
	func_423();
}

void func_423()//Position - 0x142EA
{
	int iVar0;
	
	if (iLocal_596 != Local_110.f_268)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_268, iVar0))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_596, iVar0))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_7[iVar0]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 2);
							func_24(&(Local_110.f_7[iVar0]));
							MISC::SET_BIT(&iLocal_596, iVar0);
						}
					}
					else
					{
						MISC::SET_BIT(&iLocal_596, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_424()//Position - 0x1437A
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 14))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 5))
		{
			if (func_427(0, 1, 1, 1))
			{
				if (func_737())
				{
					func_426("UW_TFEWC", 30000);
				}
				else
				{
					func_426("UW_TFEW", 30000);
				}
				func_425(1);
				MISC::SET_BIT(&iLocal_115, 5);
			}
		}
	}
}

void func_425(int iParam0)//Position - 0x143D6
{
	unk_0x652B3075D0E58C13(3, 21, 200, 0, 0);
	if (iParam0 && !func_360())
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_426(char* sParam0, int iParam1)//Position - 0x14405
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam1);
}

int func_427(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1441C
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_432())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_410())
	{
		return 0;
	}
	if (func_255())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_257(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_431(CAM::_0xDC9DA9E8789F5246()))
		{
			return 0;
		}
	}
	if (func_430())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
		{
			return 0;
		}
	}
	if (Global_180517)
	{
		return 0;
	}
	if (func_429())
	{
		return 0;
	}
	if (func_428())
	{
		return 0;
	}
	if (func_180())
	{
		return 0;
	}
	if (Global_10B8E)
	{
		return 0;
	}
	if (Global_26AAFF)
	{
		return 0;
	}
	return 1;
}

bool func_428()//Position - 0x14509
{
	return Global_255C02.f_244;
}

bool func_429()//Position - 0x14518
{
	return Global_255C02.f_2DD;
}

bool func_430()//Position - 0x14527
{
	return Global_252F9E.f_BD4.f_242;
}

int func_431(int iParam0)//Position - 0x14539
{
	if (Global_24FBF9[iParam0 /*413*/].f_D0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_432()//Position - 0x14555
{
	if (Global_3DCE != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_433()//Position - 0x14577
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (!func_276("UW_EXPL") && !func_276("UW_EXPLC"))
	{
		func_8();
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, (27 + iVar2)))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_7[iVar2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_110.f_7[iVar2]), 0))
				{
					MISC::SET_BIT(&iLocal_114, (27 + iVar2));
					iLocal_572[iVar2] = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_572[iVar2], "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_110.f_7[iVar2]), "GTAO_FM_Events_Soundset", 0, 0);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_572[iVar2], "Time", 30f);
				}
			}
		}
		iVar2++;
	}
	if (!func_737())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_7[0]))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_13F, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_110.f_7[0]), 0))
				{
					if ((func_437() - func_124(&(Local_110.f_144), 0, 0)) >= 0)
					{
						if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 14))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_110.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_198())
								{
									func_436();
									func_169((func_437() - func_124(&(Local_110.f_144), 0, 0)), "UW_DEST", 0, 1, 4294967295, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
					}
					else
					{
						if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 14))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_110.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_198())
								{
									func_436();
									func_169(0, "UW_DEST", 0, 1, 4294967295, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
						if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0)
						{
							func_676(1);
						}
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_7[0]))
						{
							ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_110.f_7[0]), 0);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_110.f_7[0]), true);
							if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_7[0]))))
							{
								NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_110.f_7[0]), 1, 0, 4294967295);
								func_24(&(Local_110.f_7[0]));
							}
							else
							{
								unk_0xBA7A36583E2052C9(NETWORK::NET_TO_VEH(Local_110.f_7[0]), 1, 0, 0);
								func_24(&(Local_110.f_7[0]));
							}
						}
					}
				}
			}
		}
		func_190();
		if (!func_198())
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 12))
			{
				if (func_107(Local_110.f_7[0]))
				{
					if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_110.f_7[0])))
						{
							if (!func_737())
							{
								if (!func_276("UW_EXPL"))
								{
									func_270("UW_EXPL", 0);
								}
							}
							else if (!func_276("UW_EXPLC"))
							{
								func_270("UW_EXPLC", 0);
							}
							MISC::SET_BIT(&iLocal_114, 12);
						}
					}
				}
			}
			else if (func_276("UW_EXPL") || func_276("UW_EXPLC"))
			{
				if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
					{
						func_8();
					}
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_7[iVar0]))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_13F, iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0))
					{
						if ((func_437() - func_124(&(Local_110.f_144), 0, 0)) >= 0)
						{
							if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 14))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_198())
									{
										if (!bVar1)
										{
											func_436();
											func_169((func_437() - func_124(&(Local_110.f_144), 0, 0)), "UW_DEST", 0, 1, 4294967295, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
											bVar1 = true;
										}
									}
								}
							}
						}
						else
						{
							if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 14))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_198())
									{
										if (!bVar1)
										{
											func_436();
											func_169(0, "UW_DEST", 0, 1, 4294967295, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
											bVar1 = true;
										}
									}
								}
							}
							if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0)
							{
								func_676(1);
							}
							if (func_434(Local_110.f_7[iVar0]))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_7[iVar0]))
								{
									ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0);
									VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), true);
									if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]))))
									{
										NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1, 0, 4294967295);
										func_24(&(Local_110.f_7[iVar0]));
									}
									else
									{
										unk_0xBA7A36583E2052C9(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1, 0, 0);
										func_24(&(Local_110.f_7[iVar0]));
									}
								}
							}
						}
					}
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 12))
				{
					if (func_107(Local_110.f_7[iVar0]))
					{
						if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_110.f_7[iVar0])))
							{
								if (!func_198())
								{
									if (!func_737())
									{
										if (!func_276("UW_EXPL"))
										{
											func_270("UW_EXPL", 0);
										}
									}
									else if (!func_276("UW_EXPLC"))
									{
										func_270("UW_EXPLC", 0);
									}
									MISC::SET_BIT(&iLocal_114, 12);
								}
							}
						}
					}
				}
				else if (func_276("UW_EXPL") || func_276("UW_EXPLC"))
				{
					if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
					{
						if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
						{
							func_8();
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_434(var uParam0)//Position - 0x14B83
{
	if (unk_0xDD5EE7D9FC37FA16(uParam0))
	{
		return 1;
	}
	if (func_435(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_435(var uParam0)//Position - 0x14BA6
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0))
	{
		return 0;
	}
	if (func_79(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_436()//Position - 0x14BD6
{
	Global_14E696.f_441 = 1;
}

int func_437()//Position - 0x14BE6
{
	if (func_737())
	{
		return Global_40001.f_2BFE;
	}
	return Global_40001.f_2AE6;
}

void func_438()//Position - 0x14C09
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 4))
	{
		if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0)
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					func_676(1);
					MISC::SET_BIT(&iLocal_115, 4);
				}
			}
		}
	}
}

void func_439()//Position - 0x14C52
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_118);
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (iLocal_118 != NETSHOP::_NETWORK_SHOP_BASKET_START())
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_597, iLocal_118))
				{
					if (!func_198())
					{
						if (Local_113[iLocal_118 /*18*/].f_11 == 1)
						{
							MISC::SET_BIT(&iLocal_597, iLocal_118);
							func_440(iVar1, 55, 1, 0);
						}
					}
				}
				else if (func_198())
				{
					func_440(iVar1, 55, 0, 0);
					GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_597, iLocal_118);
				}
				else if (Local_113[iLocal_118 /*18*/].f_11 > 1)
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_597, iLocal_118);
					func_440(iVar1, 55, 0, 0);
				}
			}
		}
	}
	iLocal_118++;
	if (iLocal_118 >= NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iLocal_118 = 0;
	}
}

void func_440(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x14D18
{
	var uVar0;
	
	if (func_442(iParam0))
	{
		return;
	}
	if (func_441(&(Global_24DCF5.f_266[iParam0]), &(Global_24DCF5.f_3D1[iParam0]), &(Global_24DCF5.f_182), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DCF5.f_1C1[iParam0] = iParam1;
		}
	}
}

int func_441(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)//Position - 0x14D6A
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, iParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam2, iParam4))
			{
				*uParam6 = 1;
				GRAPHICS::_0x35FB78DC42B7BD21(iParam2, iParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = 4294967295;
			}
			*uParam0 = 4294967295;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_442(int iParam0)//Position - 0x14E2F
{
	if (iParam0 == func_26())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_443())
	{
		return 1;
	}
	return 0;
}

int func_443()//Position - 0x14E58
{
	switch (func_444())
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

int func_444()//Position - 0x14E8C
{
	return Global_6373;
}

void func_445()//Position - 0x14E97
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (HUD::DOES_BLIP_EXIST(Local_122[iVar0 /*8*/]))
		{
			HUD::REMOVE_BLIP(&(Local_122[iVar0 /*8*/]));
		}
		if (HUD::DOES_BLIP_EXIST(Local_122[iVar0 /*8*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_122[iVar0 /*8*/].f_1));
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_30[iVar0]))
		{
			if (!func_31(Local_110.f_30[iVar0]))
			{
				if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_110.f_30[iVar0])))
				{
					func_90(&(Local_122[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_446()//Position - 0x14F25
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 11))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 6))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 13))
			{
				if (func_188(CAM::_0xDC9DA9E8789F5246()) != 129)
				{
					if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0)
					{
						if (!func_524(65) && !func_524(66))
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 11))
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 12))
								{
									if (func_427(0, 1, 1, 1))
									{
										if (func_737())
										{
											func_426("UW_HELIMC", 4294967295);
										}
										else
										{
											func_426("UW_HELIM", 4294967295);
										}
										func_425(1);
										MISC::SET_BIT(&iLocal_115, 12);
									}
								}
							}
							else if (!(Local_110.f_1B == joaat("RHINO") || Local_110.f_1B == joaat("HYDRA")))
							{
								if (func_427(0, 1, 1, 1))
								{
									if (!func_737())
									{
										func_426("UW_TAVAIL", 30000);
									}
									else
									{
										func_426("UW_TAVAILC", 30000);
									}
									func_425(1);
									MISC::SET_BIT(&iLocal_114, 11);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_447()//Position - 0x15032
{
	float fVar0;
	
	if (iLocal_594 != 0)
	{
		return;
	}
	if (func_21(&uLocal_585))
	{
		iLocal_594 = func_124(&uLocal_585, 0, 0);
	}
	fVar0 = SYSTEM::TO_FLOAT(iLocal_594);
	fVar0 = (fVar0 / 60000f);
	iLocal_594 = SYSTEM::FLOOR(fVar0);
	if (iLocal_594 >= 1)
	{
	}
	else
	{
		iLocal_594 = 1;
	}
	if (iLocal_594 > Global_40001.f_2C3A)
	{
		iLocal_594 = Global_40001.f_2C3A;
	}
}

void func_448(bool bParam0)//Position - 0x1509B
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
		func_449(iVar0);
		iVar0++;
	}
}

void func_449(int iParam0)//Position - 0x150D2
{
	Global_16C64.f_AC[iParam0] = 1;
	Global_16C64.f_AB = 1;
}

void func_450(int iParam0)//Position - 0x150EC
{
	if (func_451() && iParam0)
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

int func_451()//Position - 0x15121
{
	if ((((Global_EC6C9 != 4294967295 && Global_EC6C9 != 33) && Global_EC6C9 != 35) && Global_EC6C9 != 37) && Global_EC6C9 != 21)
	{
		return 1;
	}
	return 0;
}

void func_452()//Position - 0x15167
{
	HUD::_0x14621BB1DF14E2B2(5);
	func_454();
	GRAPHICS::_0x54E22EA2C1956A8D(1f);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 8);
	func_453();
}

void func_453()//Position - 0x1518D
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

void func_454()//Position - 0x1528D
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

void func_455()//Position - 0x152D4
{
	Global_247C09 = { 0f, 0f, 0f };
	Global_247C0C = 0;
}

void func_456()//Position - 0x152EA
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 13))
	{
		return;
	}
	bVar0 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 6);
	bVar1 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 21);
	bVar2 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 23);
	bVar3 = Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_A != 4294967295;
	if (bVar3)
	{
		bVar1 = false;
		bVar2 = false;
	}
	if (func_620())
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 17))
		{
			if (func_837(CAM::_0xDC9DA9E8789F5246(), 1, 1))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) || bVar2)
				{
					if (!func_198())
					{
						if (!func_737())
						{
							if (bVar0)
							{
								func_628(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2, 1);
							}
							else if (bVar1)
							{
								if (Local_110.f_1B == joaat("RHINO") || Local_110.f_1B == joaat("HYDRA"))
								{
									func_628(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1);
								}
								else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[0]) && func_107(Local_110.f_7[0]))
								{
									MISC::SET_BIT(&iLocal_115, 11);
									MISC::SET_BIT(&iLocal_115, 16);
									func_628(66, "UW_BIGE", "UW_LSELIM", 1, 15000, 2, 1);
								}
								else
								{
									func_628(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1);
								}
							}
							else if (bVar2)
							{
								func_628(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1);
							}
							else if (bVar3 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 16))
							{
								func_628(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1);
							}
						}
						else if (bVar0)
						{
							func_628(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2, 1);
						}
						else if (bVar1)
						{
							if (Local_110.f_1B == joaat("RHINO") || Local_110.f_1B == joaat("HYDRA"))
							{
								if (func_521())
								{
									MISC::SET_BIT(&iLocal_115, 11);
									MISC::SET_BIT(&iLocal_115, 16);
									func_628(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1);
								}
								else
								{
									func_628(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1);
								}
							}
							else if (func_521())
							{
								MISC::SET_BIT(&iLocal_115, 11);
								MISC::SET_BIT(&iLocal_115, 16);
								func_628(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1);
							}
							else
							{
								func_628(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2, 1);
							}
						}
						else if (bVar2)
						{
							if (func_521())
							{
								MISC::SET_BIT(&iLocal_115, 11);
								MISC::SET_BIT(&iLocal_115, 16);
								func_628(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1);
							}
							else
							{
								func_628(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2, 1);
							}
						}
						else if (bVar3 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 16))
						{
							func_628(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1);
						}
					}
					iVar4 = func_520(1);
					Local_111.f_6 = (Local_111.f_6 + iVar4);
					if (!Global_40001.f_2C7D)
					{
						if (Local_111.f_6 > 0)
						{
							func_519(19, Local_111.f_6);
						}
					}
					Global_258AE3 = iVar4;
					if (iVar4 > 0)
					{
						if (func_518())
						{
							func_506(210955503, iVar4, &uVar5, 0, 1, 0);
						}
						else
						{
							NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar4, "AM_KILL_LIST", &uVar6);
						}
					}
					iVar7 = func_505(1);
					Local_111.f_7 = (Local_111.f_7 + iVar7);
					func_504();
					func_457(0, AUDIO::_0x0626A247D2405330(), "", 2658791846, 153786435, iVar7, 1, 4294967295, 0, 0, 0);
					Local_111.f_5 = 2;
					PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 398, false);
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 16))
					{
						MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), 8);
					}
					MISC::SET_BIT(&iLocal_115, 17);
					MISC::SET_BIT(&iLocal_115, 18);
				}
			}
		}
	}
}

int func_457(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x156AB
{
	return func_458(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_458(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x156CD
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_468(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == 3702944691 || iParam4 == 2379775567)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_464(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_459(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_459(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x15746
{
	vector3 vVar0;
	
	vVar0 = { func_462(iParam0, 1) };
	if (iParam0 == func_461(AUDIO::_0x0626A247D2405330()))
	{
		func_460(1);
	}
	func_464(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_460(int iParam0)//Position - 0x1577A
{
	Global_252F9E.f_75E = iParam0;
}

int func_461(int iParam0)//Position - 0x1578B
{
	return iParam0;
}

Vector3 func_462(int iParam0, bool bParam1)//Position - 0x15795
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
	if (iParam0 == func_463(AUDIO::_0x0626A247D2405330()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
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

int func_463(int iParam0)//Position - 0x15859
{
	return iParam0;
}

void func_464(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x15863
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
			Global_252F9E.f_505[iVar1 /*30*/].f_4 = func_467(Global_252F9E.f_505[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_252F9E.f_505[iVar1 /*30*/].f_7 = HUD::_0x13C4B962653A5280();
			Global_252F9E.f_505[iVar1 /*30*/].f_3 = iParam1;
			Global_252F9E.f_505[iVar1 /*30*/].f_8 = iParam2;
			Global_252F9E.f_505[iVar1 /*30*/].f_9 = func_466();
			Global_252F9E.f_505[iVar1 /*30*/].f_A = func_465();
			StringCopy(&(Global_252F9E.f_505[iVar1 /*30*/].f_16), sParam3, 16);
			Global_252F9E.f_505[iVar1 /*30*/].f_1A = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), iParam4);
		}
	}
}

int func_465()//Position - 0x1597A
{
	if (Global_252F9E.f_75E)
	{
		Global_252F9E.f_75E = 0;
		return 1;
	}
	Global_252F9E.f_75E = 0;
	return 0;
}

var func_466()//Position - 0x159A4
{
	var uVar0;
	
	uVar0 = Global_252F9E.f_760;
	Global_252F9E.f_760 = 1;
	return uVar0;
}

float func_467(vector3 vParam0, var uParam1, var uParam2)//Position - 0x159BF
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

var func_468(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x15A58
{
	var uVar0;
	
	uVar0 = func_469(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_469(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x15A7B
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_503(CAM::_0xDC9DA9E8789F5246()) || func_502(CAM::_0xDC9DA9E8789F5246()))
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
	else if (func_369() || func_500(CAM::_0xDC9DA9E8789F5246()))
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
	if (func_172(sParam2))
	{
	}
	if (func_499())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_497(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_496(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_494(0, &iVar1);
					break;
				
				case 3:
					func_494(1, &iVar1);
					break;
				
				case 1:
					func_491(&iVar1);
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
			func_489(1164, iVar1, 4294967295);
			if (iParam1 == 0)
			{
				func_479((func_488(CAM::_0xDC9DA9E8789F5246()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_2 != 4294967295)
				{
					func_489(1165, iVar1, 4294967295);
				}
				if (iParam1 == 0)
				{
					func_474(iVar1);
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
				func_470((func_472(CAM::_0xDC9DA9E8789F5246()) + iVar1));
			}
			else
			{
				func_470((func_472(CAM::_0xDC9DA9E8789F5246()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_470(int iParam0)//Position - 0x15C79
{
	if (func_499())
	{
		Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_5 = iParam0;
		func_471(joaat("mpply_globalxp"), iParam0);
	}
}

void func_471(int iParam0, int iParam1)//Position - 0x15CA4
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_472(int iParam0)//Position - 0x15CC0
{
	if (iParam0 > 4294967295)
	{
		if (func_837(iParam0, 0, 1))
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return func_473(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_5;
			}
		}
		else
		{
			return func_473(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_473(int iParam0)//Position - 0x15D11
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

void func_474(int iParam0)//Position - 0x15D2F
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_66(CAM::_0xDC9DA9E8789F5246()) };
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_477(func_478(&Var0));
			if (iVar1 == 0)
			{
				func_476(&Global_150A08, iParam0);
				func_475(joaat("mpply_crew_local_xp_0"), Global_150A08);
			}
			else if (iVar1 == 1)
			{
				func_476(&Global_150A09, iParam0);
				func_475(joaat("mpply_crew_local_xp_1"), Global_150A09);
			}
			else if (iVar1 == 2)
			{
				func_476(&Global_150A0A, iParam0);
				func_475(joaat("mpply_crew_local_xp_2"), Global_150A0A);
			}
			else if (iVar1 == 3)
			{
				func_476(&Global_150A0B, iParam0);
				func_475(joaat("mpply_crew_local_xp_3"), Global_150A0B);
			}
			else if (iVar1 == 4)
			{
				func_476(&Global_150A0C, iParam0);
				func_475(joaat("mpply_crew_local_xp_4"), Global_150A0C);
			}
		}
	}
}

void func_475(int iParam0, int iParam1)//Position - 0x15E03
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

void func_476(var uParam0, int iParam1)//Position - 0x15F28
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_477(int iParam0)//Position - 0x15F39
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

int func_478(var uParam0)//Position - 0x15F96
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

void func_479(int iParam0, int iParam1, int iParam2)//Position - 0x15FB9
{
	if (func_499())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2512 == 0 && iParam1 != 3218036588)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_150A81[func_249(4294967295)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, 3771058946, iParam1);
					return;
				}
				else if (iParam0 == Global_150A81[func_249(4294967295)])
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
		if (func_487(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_1 = iParam0;
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_6 = func_485(iParam0, 1);
		}
		func_484(639, iParam0, 4294967295, 1);
		func_483(640, func_485(iParam0, 1), 4294967295, 1, 0);
		Global_150A81[func_249(4294967295)] = iParam0;
		func_480(7, 0);
	}
}

void func_480(int iParam0, int iParam1)//Position - 0x160DA
{
	int iVar0;
	
	if (func_482(iParam0, iParam1))
	{
		iVar0 = func_481();
		Global_2581E6[iVar0] = iParam0;
	}
}

int func_481()//Position - 0x160FD
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

int func_482(int iParam0, var uParam1)//Position - 0x16132
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

void func_483(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x161B8
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_249(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_484(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x161E8
{
	int iVar0;
	
	iVar0 = Global_26B05F[iParam0 /*3*/][func_249(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_150A45[func_249(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_150A4B[func_249(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_150A51[func_249(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_150A57[func_249(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_150A2D[func_249(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_150A33[func_249(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_150A39[func_249(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_150A3F[func_249(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_150A15[func_249(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_150A1B[func_249(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_150A21[func_249(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_150A27[func_249(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_150A5D[func_249(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_150A63[func_249(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_150A69[func_249(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_150A6F[func_249(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_150A75[func_249(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_150A7B[func_249(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_150A81[func_249(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_150A87[func_249(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_272FA8[0 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_272FA8[1 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_272FA8[2 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_272FA8[3 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_273025[func_249(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_150A8D[func_249(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_150A93[func_249(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_150A99[func_249(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_150A9F[func_249(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_272FE5[0 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_272FE5[1 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_272FE5[2 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_272FE5[3 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_272FE5[4 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_273028[0 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_273028[1 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_273028[2 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_273028[3 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_273028[4 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_273038[0 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_273038[1 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_273038[2 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_273038[3 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_273038[4 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_272FE5[5 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_272FA8[4 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_273048[func_249(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_273051[func_249(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_27304B[func_249(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_273054[func_249(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_27304E[func_249(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_273057[func_249(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_27305A[func_249(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_272FE5[6 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_272FA8[5 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_272FE5[7 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_272FA8[6 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_272FE5[8 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_272FA8[7 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_272FE5[9 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_272FA8[8 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_272FE5[10 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_272FA8[9 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_272FE5[11 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_272FA8[10 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_272FE5[12 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_272FA8[11 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_272FE5[13 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_272FA8[12 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_272FE5[14 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_272FA8[13 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_272FE5[15 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_272FA8[14 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_272FE5[16 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_272FA8[15 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_272FE5[17 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_272FA8[16 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_272FA8[17 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_272FA8[18 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_272FA8[19 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_485(int iParam0, bool bParam1)//Position - 0x169F3
{
	if (bParam1)
	{
	}
	return func_486(iParam0, 0);
}

int func_486(int iParam0, int iParam1)//Position - 0x16A07
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

int func_487(int iParam0)//Position - 0x16AC6
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

int func_488(int iParam0)//Position - 0x16AEB
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > 4294967295)
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return Global_150A81[func_249(4294967295)];
			}
			else if (func_487(iParam0))
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_150A81[func_249(4294967295)];
	}
	return 0;
}

void func_489(int iParam0, int iParam1, int iParam2)//Position - 0x16B48
{
	int iVar0;
	
	iVar0 = func_268(iParam0, func_249(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_490(iParam0))
	{
		func_483(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_484(iParam0, iVar0, iParam2, 1);
	}
}

int func_490(int iParam0)//Position - 0x16B8A
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

void func_491(int iParam0)//Position - 0x16D94
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_493(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != CAM::_0xDC9DA9E8789F5246())
					{
						if (func_67(CAM::_0xDC9DA9E8789F5246(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_492(*iParam0, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_492(*iParam0, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_492(int iParam0, int iParam1)//Position - 0x16E7F
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_493(int iParam0, int iParam1, int iParam2)//Position - 0x16EA0
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

void func_494(bool bParam0, int iParam1)//Position - 0x1706B
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
				if (func_837(iVar4, 0, 1))
				{
					if (iVar4 != CAM::_0xDC9DA9E8789F5246())
					{
						iVar1++;
						if (func_67(CAM::_0xDC9DA9E8789F5246(), iVar4))
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
			if (func_837(iVar4, 1, 1))
			{
				if (iVar4 != CAM::_0xDC9DA9E8789F5246())
				{
					if (func_495(CAM::_0xDC9DA9E8789F5246(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_67(CAM::_0xDC9DA9E8789F5246(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_492(*iParam1, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_492(*iParam1, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_495(int iParam0, int iParam1)//Position - 0x17183
{
	return SYSTEM::VDIST(func_59(iParam0), func_59(iParam1));
	return 0f;
}

int func_496(int iParam0)//Position - 0x1719F
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_492(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_497(int iParam0)//Position - 0x171D6
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_488(CAM::_0xDC9DA9E8789F5246()))
		{
			iParam0 = -func_488(CAM::_0xDC9DA9E8789F5246());
		}
	}
	if (func_498(8000, 0, 0) > 0)
	{
		if (func_498(8000, 0, 0) < (iParam0 + func_488(CAM::_0xDC9DA9E8789F5246())))
		{
			iParam0 = (func_498(8000, 0, 0) - func_488(CAM::_0xDC9DA9E8789F5246()));
		}
	}
	return iParam0;
}

int func_498(int iParam0, bool bParam1, int iParam2)//Position - 0x1723A
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

int func_499()//Position - 0x17262
{
	return 1;
}

int func_500(int iParam0)//Position - 0x1726B
{
	return func_501(func_346(iParam0));
}

int func_501(int iParam0)//Position - 0x1727D
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_502(int iParam0)//Position - 0x17297
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 2;
}

bool func_503(int iParam0)//Position - 0x172AC
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 7;
}

void func_504()//Position - 0x172C1
{
	Global_258851 = 1;
}

int func_505(bool bParam0)//Position - 0x172CE
{
	int iVar0;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_737())
		{
			return Global_40001.f_2BC3;
		}
		else
		{
			return Global_40001.f_2B86;
		}
	}
	func_447();
	if (func_737())
	{
		iVar0 = (Global_40001.f_2BC3 * iLocal_594);
	}
	else
	{
		iVar0 = (Global_40001.f_2B86 * iLocal_594);
	}
	return iVar0;
}

void func_506(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x17334
{
	int iVar0;
	
	if (!func_518())
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
				func_507(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_507(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case 2952902635:
		case 3696988851:
			if (iParam1 > 0)
			{
				func_507(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case 3194003497:
			func_507(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_507(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x178A1
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_518())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_17()) || unk_0x64BE694244417BDA())
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
			*uParam0 = func_514(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_513(1, iParam4);
			Global_410E35 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_508(4294967295, iParam4, iParam6, iParam5, 4294967295);
		}
	}
	return 0;
}

void func_508(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x17A4C
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_7A.f_47), 0);
			break;
	}
	if (iParam0 != 4294967295)
	{
		func_509(iParam0);
	}
}

void func_509(int iParam0)//Position - 0x17A84
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_518())
	{
		bVar0 = true;
	}
	if (iParam0 != 4294967295)
	{
		if (func_512(iParam0))
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
		func_510(&(Global_410C0F[iParam0 /*80*/]));
	}
}

void func_510(var uParam0)//Position - 0x17AD8
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
	func_511(&(uParam0->f_D));
	func_511(&(uParam0->f_D.f_D));
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

void func_511(var uParam0)//Position - 0x17BDB
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

int func_512(int iParam0)//Position - 0x17C23
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_410C0F[iParam0 /*80*/].f_3D.f_5 == 1;
	}
	return 0;
}

void func_513(int iParam0, int iParam1)//Position - 0x17C4D
{
	Global_258B69 = iParam1;
	Global_258B68 = iParam0;
}

int func_514(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x17C61
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_410C0F[iVar0 /*80*/].f_3D.f_2 == 0)
		{
			if (!func_518())
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
				func_515(Global_410C0F[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_515(struct<62> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x17D9D
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
	iVar1 = func_517(vVar0.y);
	if ((Global_40001.f_5B83 && !Global_40001.f_5B84) && !Global_40001.f_5B85)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_516();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_516()//Position - 0x17E2F
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_517(int iParam0)//Position - 0x17E3F
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_518()//Position - 0x17E51
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

void func_519(int iParam0, int iParam1)//Position - 0x17E68
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

int func_520(bool bParam0)//Position - 0x17EDA
{
	int iVar0;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_737())
		{
			return Global_40001.f_2BC2;
		}
		else
		{
			return Global_40001.f_2B85;
		}
	}
	func_447();
	if (func_737())
	{
		iVar0 = (Global_40001.f_2BC2 * iLocal_594);
	}
	else
	{
		iVar0 = (Global_40001.f_2B85 * iLocal_594);
	}
	return iVar0;
}

int func_521()//Position - 0x17F40
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iLocal_571]))
	{
		if (func_107(Local_110.f_7[iLocal_571]))
		{
			bVar0 = true;
		}
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_110.f_100[iVar1] > 0)
		{
			iVar2++;
		}
		iVar1++;
	}
	iVar3 = Local_110.f_100[iLocal_571];
	if (!bVar0)
	{
		if (Local_110.f_252[0 /*4*/] != iLocal_571)
		{
			return 0;
		}
		else if (iVar3 > 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (Local_110.f_252[0 /*4*/] == iLocal_571)
	{
		return 1;
	}
	else
	{
		iVar4 = Local_110.f_100[Local_110.f_252[0 /*4*/]];
		iVar5 = (iVar4 - iVar3);
		iVar6 = (Local_110.f_FF - iVar2);
		if (iVar5 > iVar6)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_522()//Position - 0x18016
{
	int iVar0;
	var uVar1;
	
	func_674(&iVar0, &uVar1);
	if (iLocal_571 > 4294967295)
	{
		if (func_107(Local_110.f_7[iLocal_571]))
		{
			return 1;
		}
	}
	return 0;
}

void func_523()//Position - 0x18042
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_110.f_F1 == 1)
	{
		if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0)
		{
			if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_A == 4294967295)
			{
				if (!func_21(&uLocal_583) || (func_21(&uLocal_583) && func_18(&uLocal_583, 5000, 0)))
				{
					if (Local_110.f_1B == joaat("SAVAGE") || Local_110.f_1B == joaat("BUZZARD"))
					{
						iVar1 = iLocal_571;
						if (iVar1 > 4294967295)
						{
							if (func_107(Local_110.f_7[iVar1]))
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_7[iVar1]), 4294967295, 0);
								if (iVar0 == 0)
								{
									Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_A = iVar1;
								}
								else if (PED::IS_PED_INJURED(iVar0))
								{
									Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_A = iVar1;
								}
								else if (!PED::IS_PED_A_PLAYER(iVar0))
								{
									Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_A = iVar1;
								}
							}
						}
					}
					else if (Local_110.f_1B == joaat("VALKYRIE"))
					{
						iVar1 = iLocal_571;
						if (iVar1 > 4294967295)
						{
							if (func_107(Local_110.f_7[iVar1]))
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_7[iVar1]), 4294967295, 0);
								if (iVar0 == 0)
								{
									Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_A = iVar1;
								}
								else if (PED::IS_PED_INJURED(iVar0))
								{
									Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_A = iVar1;
								}
								else if (!PED::IS_PED_A_PLAYER(iVar0))
								{
									Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_A = iVar1;
								}
								if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_A == 4294967295)
								{
									iVar4 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(joaat("VALKYRIE"));
									iVar2 = 0;
									while (iVar2 < iVar4)
									{
										iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_7[iVar1]), iVar2, 0);
										if (iVar0 != 0)
										{
											if (!PED::IS_PED_INJURED(iVar0))
											{
												if (PED::IS_PED_A_PLAYER(iVar0))
												{
													iVar3++;
												}
											}
										}
										iVar2++;
									}
									if (iVar3 == 0)
									{
										Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_A = iVar1;
									}
								}
							}
						}
					}
					func_104(&uLocal_583);
					func_19(&uLocal_583, 0, 0);
				}
			}
		}
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_13F, iVar2))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_7[iVar2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_110.f_7[iVar2]), 0))
				{
					if ((func_437() - func_124(&(Local_110.f_15D[iVar2 /*2*/]), 0, 0)) >= 0)
					{
						if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0)
						{
							if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_110.f_7[iVar2]), 0))
							{
								if (!func_198())
								{
									func_436();
									func_169((func_437() - func_124(&(Local_110.f_15D[iVar2 /*2*/]), 0, 0)), "UW_DEST", 0, 1, 4294967295, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
					}
					else
					{
						if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0)
						{
							if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_110.f_7[iVar2]), 0))
							{
								if (!func_198())
								{
									func_436();
									func_169(0, "UW_DEST", 0, 1, 4294967295, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_7[iVar2]))
						{
							ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_110.f_7[iVar2]), 0);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_110.f_7[iVar2]), true);
							if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_7[iVar2]))))
							{
								NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_110.f_7[iVar2]), 1, 0, 4294967295);
								func_24(&(Local_110.f_7[iVar2]));
							}
							else
							{
								unk_0xBA7A36583E2052C9(NETWORK::NET_TO_VEH(Local_110.f_7[iVar2]), 1, 0, 0);
								func_24(&(Local_110.f_7[iVar2]));
							}
						}
					}
				}
			}
			if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_A == iVar2)
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 6))
				{
					if (func_427(0, 1, 1, 1))
					{
						if (func_737())
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 19))
							{
								func_426("UW_NOPILC", 30000);
							}
							else
							{
								func_426("UW_NOGUN", 30000);
							}
						}
						else
						{
							func_426("UW_NOPIL", 30000);
						}
						func_425(1);
						MISC::SET_BIT(&iLocal_115, 6);
					}
					else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 19))
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
						}
					}
				}
				if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					iVar5 = Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_A;
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar5]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_110.f_7[iVar5])))
						{
							if (!func_737())
							{
								if (!func_276("UW_EXPL"))
								{
									func_270("UW_EXPL", 0);
								}
							}
							else if (!func_276("UW_EXPLC"))
							{
								func_270("UW_EXPLC", 0);
							}
						}
						else if (func_276("UW_EXPL") || func_276("UW_EXPLC"))
						{
							func_8();
						}
					}
					else if (func_276("UW_EXPL") || func_276("UW_EXPLC"))
					{
						func_8();
					}
				}
			}
		}
		iVar2++;
	}
}

bool func_524(int iParam0)//Position - 0x18504
{
	return Global_252F9E.f_A90[0 /*80*/].f_1 == iParam0;
}

void func_525()//Position - 0x1851B
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0)
	{
		if (Local_110.f_1B == joaat("RHINO"))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 11))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 10))
				{
					if (!func_21(&uLocal_579) || (func_21(&uLocal_579) && func_18(&uLocal_579, 5000, 0)))
					{
						if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
						{
							if (func_69(vLocal_595, 0f, 0f, 0f, 0))
							{
								vLocal_595 = { Local_110.f_1E[0 /*3*/] };
							}
							fVar0 = func_527(AUDIO::_0x0626A247D2405330(), vLocal_595, 1);
							if (fVar0 > 750f)
							{
								MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), 10);
							}
						}
						func_104(&uLocal_579);
						func_19(&uLocal_579, 0, 0);
					}
				}
				else if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					if (!func_276("UW_OOB"))
					{
						func_270("UW_OOB", 0);
					}
					if (!func_21(&uLocal_581))
					{
						iVar2 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(iVar2, "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_110.f_7[func_526()]), "GTAO_FM_Events_Soundset", 0, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(iVar2, "Time", 30f);
						func_19(&uLocal_581, 0, 0);
					}
					if (func_21(&uLocal_581))
					{
						if ((func_437() - func_124(&uLocal_581, 0, 0)) >= 0)
						{
							func_436();
							func_169((func_437() - func_124(&uLocal_581, 0, 0)), "UW_DEST", 0, 1, 4294967295, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
						}
						else
						{
							func_436();
							func_169(0, "UW_DEST", 0, 1, 4294967295, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
							func_8();
							MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), 11);
						}
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 11))
					{
						fVar0 = func_527(AUDIO::_0x0626A247D2405330(), Local_110.f_1E[0 /*3*/], 1);
						if (fVar0 < 750f)
						{
							GRAPHICS::_0x35FB78DC42B7BD21(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), 10);
							func_104(&uLocal_581);
							AUDIO::STOP_SOUND(iVar2);
						}
					}
				}
			}
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 11))
	{
		func_676(1);
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			iVar1 = func_526();
			if (iVar1 > 4294967295)
			{
				if (func_107(Local_110.f_7[iVar1]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_7[iVar1]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_110.f_7[iVar1]), 0);
						VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_110.f_7[iVar1]), true);
						NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_110.f_7[iVar1]), 1, 0, 4294967295);
						func_24(&(Local_110.f_7[iVar1]));
					}
				}
			}
		}
	}
}

int func_526()//Position - 0x187C0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar0 == 4294967295)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar1]))
			{
				if (func_107(Local_110.f_7[iVar1]))
				{
					if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_110.f_7[iVar1])))
						{
							iVar0 = iVar1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_527(int iParam0, vector3 vParam1, int iParam2)//Position - 0x1882A
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

void func_528()//Position - 0x18864
{
	var uVar0;
	int iVar1;
	
	iVar1 = 4294967295;
	if (Local_110.f_1B == joaat("HYDRA") || Local_110.f_1B == joaat("RHINO"))
	{
		return;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 24))
	{
		if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 == 1)
		{
			func_674(&iVar1, &uVar0);
			if (func_531(iVar1))
			{
				if (iVar1 > 4294967295)
				{
					if (Local_110.f_16[iVar1] != func_26())
					{
						fLocal_120 = NETWORK::NETWORK_GET_TALKER_PROXIMITY();
						NETWORK::NETWORK_SET_TALKER_PROXIMITY(-1f);
						func_530(1, iVar1);
						MISC::SET_BIT(&iLocal_114, 24);
						func_529(1);
					}
				}
			}
			else
			{
				MISC::SET_BIT(&iLocal_114, 24);
				MISC::SET_BIT(&iLocal_114, 25);
			}
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 25))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 24))
		{
			if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 > 1)
			{
				NETWORK::NETWORK_SET_TALKER_PROXIMITY(fLocal_120);
				func_674(&iVar1, &uVar0);
				if (iVar1 > 4294967295)
				{
					func_530(0, iVar1);
					MISC::SET_BIT(&iLocal_114, 25);
					func_529(0);
				}
			}
		}
	}
}

void func_529(bool bParam0)//Position - 0x18959
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 15);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 4);
	}
}

void func_530(bool bParam0, int iParam1)//Position - 0x1898E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (func_837(iVar1, 0, 1) && iVar1 != CAM::_0xDC9DA9E8789F5246())
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[iVar0 /*18*/].f_1, iParam1) || !bParam0)
				{
					NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, 1);
				}
				else if (bParam0)
				{
					NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_531(int iParam0)//Position - 0x18A0F
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (!bVar0)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				if (iVar1 != NETSHOP::_NETWORK_SHOP_BASKET_START())
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[iVar1 /*18*/].f_1, iParam0))
					{
						bVar0 = true;
					}
				}
			}
		}
		iVar1++;
	}
	return bVar0;
}

void func_532()//Position - 0x18A5F
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 15))
	{
		if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 == 2)
		{
			if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 == 0)
			{
				if (Local_110.f_16[0] != func_26())
				{
					if (func_427(0, 0, 1, 1))
					{
						if (!func_737())
						{
							if (Local_110.f_1B == joaat("RHINO") || Local_110.f_1B == joaat("HYDRA"))
							{
								if (!func_737())
								{
									func_543("UW_START1P", PLAYER::GET_PLAYER_NAME(Local_110.f_16[0]), 1, 30000);
								}
								else
								{
									func_543("UW_START1PC", PLAYER::GET_PLAYER_NAME(Local_110.f_16[0]), 1, 30000);
								}
								func_425(1);
							}
							else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_F, 0))
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 14))
								{
									if (!func_737())
									{
										func_426("UW_STARTM", 30000);
									}
									else
									{
										func_426("UW_STARTMC", 30000);
									}
									func_425(1);
								}
							}
							else
							{
								func_543("UW_START1P", PLAYER::GET_PLAYER_NAME(Local_110.f_16[0]), 1, 30000);
								func_425(1);
							}
						}
						else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 14))
						{
							if (!func_737())
							{
								func_426("UW_STARTM", 30000);
							}
							else
							{
								func_426("UW_STARTMC", 30000);
							}
							func_425(1);
						}
						MISC::SET_BIT(&iLocal_114, 15);
					}
				}
			}
		}
	}
	if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 == 2)
	{
		if (Local_110.f_F1 == 1)
		{
			if (Local_110.f_1B != joaat("HYDRA") && Local_110.f_1B != joaat("RHINO"))
			{
				if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0)
				{
					if (iLocal_571 >= 0)
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 10))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 9))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iLocal_571]))
								{
									if (func_107(Local_110.f_7[iLocal_571]))
									{
										MISC::SET_BIT(&iLocal_115, 9);
									}
								}
							}
							else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iLocal_571]))
							{
								if (!func_107(Local_110.f_7[iLocal_571]))
								{
									func_542("UW_TEAMV", 1);
									MISC::SET_BIT(&iLocal_115, 10);
								}
							}
						}
					}
				}
			}
		}
	}
	iVar1 = 0;
	if (!func_737())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 6))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, (16 + iVar1)))
				{
					if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 >= 2)
					{
						if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 == 0)
						{
							if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 1)) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 2))
							{
								if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_7[0]))
								{
									if (func_107(Local_110.f_7[0]))
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_7[0]), 4294967295, 0) != 0)
										{
											iVar0 = func_541(iVar1, 0);
											if (iVar0 != func_26())
											{
												func_533("UW_COMP", iVar0, 1, 0, 0, 0, 1, 1, 0);
											}
											MISC::SET_BIT(&iLocal_114, (16 + iVar1));
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
}

int func_533(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)//Position - 0x18D7F
{
	int iVar0;
	struct<16> Var1;
	int iVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iParam1) || iParam4)
	{
		if (!bParam3)
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
		HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_539(&Var1));
		if (!bParam5)
		{
			iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		}
		else
		{
			Global_2633E1 = { func_66(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_26339B, 35, &Global_2633E1))
			{
				iVar2 = 0;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_26339B.f_16), "Leader") && Global_26339B.f_1E == 0)
				{
					iVar2 = 1;
				}
				if (Global_26339B.f_15 > 0)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				if (bParam7)
				{
					if (bParam8)
					{
						Var1 = { func_538(&Var1) };
					}
					iVar0 = HUD::_DRAW_NOTIFICATION_CLAN_INVITE(iVar3, NETWORK::_0x7543BB439F63792B(&Global_26339B, 35), &(Global_26339B.f_11), Global_26339B.f_1E, iVar2, 0, Global_26339B, &Var1, Global_140CDE, Global_140CDF, Global_140CE0);
				}
				else
				{
					iVar0 = HUD::_DRAW_NOTIFICATION_APARTMENT_INVITE(iVar3, NETWORK::_0x7543BB439F63792B(&Global_26339B, 35), &(Global_26339B.f_11), Global_26339B.f_1E, iVar2, 0, Global_26339B, Global_140CDE, Global_140CDF, Global_140CE0);
				}
			}
			else
			{
				iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
			}
		}
		func_534(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_534(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x18EE0
{
	int iVar0;
	
	if ((!func_537() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_15(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		return;
	}
	iVar0 = func_535(iParam2);
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

int func_535(int iParam0)//Position - 0x18FE8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_196195 - 1))
	{
		if (iParam0 > Global_196195.f_5[iVar0 /*53*/].f_1)
		{
			func_536(iVar0);
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

void func_536(int iParam0)//Position - 0x1904A
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_196195.f_5[iVar0 /*53*/] = { Global_196195.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + 4294967295);
	}
}

bool func_537()//Position - 0x19083
{
	return DLC::IS_DLC_PRESENT(2532323046);
}

struct<16> func_538(char* sParam0)//Position - 0x19094
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_539(char* sParam0)//Position - 0x190BF
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_540(&cVar0);
}

var func_540(char[4] cParam0)//Position - 0x190E3
{
	return cParam0;
}

int func_541(int iParam0, int iParam1)//Position - 0x190ED
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_26();
	iVar2 = (iParam0 - 1);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_7[iParam1]))
	{
		if (func_107(Local_110.f_7[iParam1]))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_7[iParam1]), iVar2, 0);
			if (iVar1 != 0)
			{
				if (PED::IS_PED_A_PLAYER(iVar1))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
				}
			}
		}
	}
	return iVar0;
}

int func_542(char* sParam0, int iParam1)//Position - 0x1914D
{
	int iVar0;
	
	iVar0 = 4294967295;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_534(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_543(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x19179
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam3);
}

void func_544()//Position - 0x191A4
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 9))
	{
		if (Local_110.f_F1 == 1)
		{
			if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_START_MUSIC"))
				{
					MISC::SET_BIT(&iLocal_114, 9);
				}
			}
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 10))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 9))
		{
			if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 > 1)
			{
				if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0)
				{
					if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_FAIL"))
						{
							MISC::SET_BIT(&iLocal_114, 10);
						}
					}
					else if (AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_STOP_MUSIC"))
					{
						MISC::SET_BIT(&iLocal_114, 10);
						func_545();
					}
				}
			}
		}
	}
}

void func_545()//Position - 0x19255
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

void func_546()//Position - 0x192F3
{
	struct<2> Var0;
	struct<2> Var1;
	int iVar2;
	int iVar3[2];
	int iVar4;
	int iVar5;
	int iVar6[4];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	bool bVar25;
	int iVar26;
	char* sVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	
	iVar8 = 1;
	if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 8))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 26))
			{
				if ((((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 1)) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 2)) || (func_737() && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 6))) || (func_737() && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 15)))
				{
					if (!func_21(&uLocal_590))
					{
						func_19(&uLocal_590, 0, 0);
					}
					if (func_18(&uLocal_590, 1000, 0))
					{
						if (func_276("UW_ATTK"))
						{
							func_8();
						}
						func_611();
						if (func_610())
						{
							iVar13 = func_520(1);
							if (iVar13 > 0)
							{
								Local_111.f_6 = (Local_111.f_6 + iVar13);
								if ((!Global_40001.f_2C7D && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 8)) || (!Global_40001.f_2C7E && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 8)))
								{
									if (Local_111.f_6 > 0)
									{
										func_519(19, Local_111.f_6);
									}
								}
								Global_258AE3 = iVar13;
								if (func_518())
								{
									func_506(210955503, iVar13, &uVar15, 0, 1, 0);
								}
								else
								{
									NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar16);
								}
							}
							iVar11 = func_505(1);
							func_504();
							Local_111.f_7 = (Local_111.f_7 + iVar11);
							func_457(0, AUDIO::_0x0626A247D2405330(), "", 2658791846, 153786435, iVar11, 1, 4294967295, 0, 0, 0);
							Local_111.f_5 = 2;
							func_628(65, "UW_BIGF", "UW_DRAWZ", 1, 15000, 2, 1);
						}
						else if (!func_737())
						{
							iVar13 = func_623(0);
							func_598(&iVar13, 1);
							iVar13 = (iVar13 + func_520(1));
							if (iVar13 > 0)
							{
								Local_111.f_6 = (Local_111.f_6 + iVar13);
								if (!Global_40001.f_2C7D)
								{
									if (Local_111.f_6 > 0)
									{
										func_519(19, Local_111.f_6);
									}
								}
								Global_258AE3 = iVar13;
								if (func_518())
								{
									func_506(210955503, iVar13, &uVar17, 0, 1, 0);
								}
								else
								{
									NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar18);
								}
							}
							iVar11 = func_505(1);
							iVar11 = (iVar11 + func_597());
							Local_111.f_7 = (Local_111.f_7 + iVar11);
							func_504();
							func_457(0, AUDIO::_0x0626A247D2405330(), "", 2658791846, 153786435, iVar11, 1, 4294967295, 0, 0, 0);
							Local_111.f_5 = 1;
							func_627(64, "", "UW_BIG_BMEXP", "UW_BIGM", 15000, 4294967295, 3212836864, 0, 1, 2, 4294967295);
						}
						else if (func_596())
						{
							if (!func_595(1))
							{
								if (!func_276("UW_EXPL") && !func_276("UW_EXPLC"))
								{
									func_8();
								}
								iVar13 = func_623(0);
								func_598(&iVar13, 1);
								iVar13 = (iVar13 + func_520(1));
								Local_111.f_6 = (Local_111.f_6 + iVar13);
								if (!Global_40001.f_2C7E)
								{
									if (Local_111.f_6 > 0)
									{
										func_519(19, Local_111.f_6);
									}
								}
								Global_258AE3 = iVar13;
								if (iVar13 > 0)
								{
									if (func_518())
									{
										func_506(210955503, iVar13, &uVar19, 0, 1, 0);
									}
									else
									{
										NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar20);
									}
								}
								if (Local_110.f_1B == joaat("RHINO") || Local_110.f_1B == joaat("HYDRA"))
								{
									func_627(64, "", "UW_WON1P", "UW_BIGM", 15000, 4294967295, 3212836864, 0, 1, 2, 4294967295);
								}
								else
								{
									func_627(64, "", "UW_WON", "UW_BIGM", 15000, 4294967295, 3212836864, 0, 1, 2, 4294967295);
								}
								Local_111.f_5 = 1;
								iVar11 = func_597();
								iVar11 = (iVar11 + func_505(1));
								Local_111.f_7 = (Local_111.f_7 + iVar11);
								func_504();
								func_457(0, AUDIO::_0x0626A247D2405330(), "", 3419251281, 459130717, iVar11, 1, 4294967295, 0, 0, 0);
							}
							else
							{
								iVar13 = func_520(1);
								iVar11 = func_505(1);
								iVar8 = 0;
								iVar10 = 0;
								while (iVar10 <= 3)
								{
									if (Local_110.f_1D1[iVar10 /*4*/].f_1 == Local_110.f_1D1[0 /*4*/].f_1)
									{
										iVar8++;
										iVar6[iVar10] = 4294967295;
										if (Local_110.f_1B == joaat("HYDRA") || Local_110.f_1B == joaat("RHINO"))
										{
											if (Local_110.f_1D1[iVar10 /*4*/].f_2 > 4294967295)
											{
												if (Local_110.f_1D1[iVar10 /*4*/].f_2 != CAM::_0xDC9DA9E8789F5246())
												{
													if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_1D1[iVar10 /*4*/].f_2)))
													{
														iVar3[iVar4] = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_1D1[iVar10 /*4*/].f_2);
														iVar4++;
													}
												}
											}
										}
										else if (iLocal_571 > 4294967295)
										{
											if (iLocal_571 != Local_110.f_1D1[iVar10 /*4*/])
											{
												iVar6[iVar7] = Local_110.f_1D1[iVar10 /*4*/];
												iVar7++;
											}
										}
									}
									iVar10++;
								}
								if (Local_110.f_1B == joaat("HYDRA") || Local_110.f_1B == joaat("RHINO"))
								{
									if (iVar8 > 2)
									{
										bVar9 = true;
									}
									else if (iVar3[0] == func_26())
									{
										bVar9 = true;
									}
									else
									{
										func_594(68, "UW_DRAWP", PLAYER::GET_PLAYER_NAME(iVar3[0]), 1, 15000, "UW_BIGO", 2);
									}
								}
								else if (iVar8 > 2)
								{
									bVar9 = true;
								}
								else if (iVar6[0] == 4294967295)
								{
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar6[0] + 1, 16);
									func_627(68, &Var0, "UW_DRAWP", "UW_BIGO", 15000, 4294967295, 3212836864, 0, 1, 2, 4294967295);
								}
								if (bVar9)
								{
									if (!func_737())
									{
										func_628(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2, 1);
									}
									else
									{
										func_628(68, "UW_BIGO", "UW_DRAWC", 1, 15000, 2, 1);
									}
								}
								iVar14 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_623(0)) / SYSTEM::TO_FLOAT(iVar8)));
								iVar12 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_597()) / SYSTEM::TO_FLOAT(iVar8)));
								func_598(&iVar14, 1);
								iVar13 = (iVar13 + iVar14);
								iVar11 = (iVar11 + iVar12);
								Local_111.f_6 = (Local_111.f_6 + iVar13);
								if (!Global_40001.f_2C7E)
								{
									if (Local_111.f_6 > 0)
									{
										func_519(19, Local_111.f_6);
									}
								}
								Global_258AE3 = iVar13;
								if (iVar13 > 0)
								{
									if (func_518())
									{
										func_506(210955503, iVar13, &uVar21, 0, 1, 0);
									}
									else
									{
										NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar22);
									}
								}
								Local_111.f_7 = (Local_111.f_7 + iVar11);
								func_504();
								func_457(0, AUDIO::_0x0626A247D2405330(), "", 3419251281, 459130717, iVar11, 1, 4294967295, 0, 0, 0);
							}
						}
						else
						{
							func_592(1);
							iVar13 = func_520(1);
							iVar11 = func_505(1);
							Local_111.f_6 = (Local_111.f_6 + iVar13);
							if (!Global_40001.f_2C7E)
							{
								if (Local_111.f_6 > 0)
								{
									func_519(19, Local_111.f_6);
								}
							}
							Global_258AE3 = iVar13;
							if (iVar13 > 0)
							{
								if (func_518())
								{
									func_506(210955503, iVar13, &uVar23, 0, 1, 0);
								}
								else
								{
									NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar24);
								}
							}
							Local_111.f_7 = (Local_111.f_7 + iVar11);
							func_504();
							func_457(0, AUDIO::_0x0626A247D2405330(), "", 3419251281, 459130717, iVar11, 1, 4294967295, 0, 0, 0);
							if (!func_595(0))
							{
								iVar5 = Local_110.f_1D1[0 /*4*/];
								if (!func_276("UW_EXPL") && !func_276("UW_EXPLC"))
								{
									func_8();
								}
								if (Local_110.f_1B == joaat("HYDRA") || Local_110.f_1B == joaat("RHINO"))
								{
									iVar2 = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_1D1[0 /*4*/].f_2);
									if (func_318(iVar2, 1))
									{
										iVar26 = func_322(iVar2);
										if (iVar26 > 4294967295)
										{
											uVar28 = func_320(iVar26);
											sVar27 = func_586(iVar2);
											bVar25 = true;
										}
									}
									if (iVar2 != func_26())
									{
										if (!bVar25)
										{
											if (!func_737())
											{
												func_594(65, "UW_FWONP", PLAYER::GET_PLAYER_NAME(iVar2), 6, 15000, "UW_BIGF", 2);
											}
											else
											{
												func_594(65, "UW_FWONPC", PLAYER::GET_PLAYER_NAME(iVar2), 6, 15000, "UW_BIGF", 2);
											}
										}
										else if (!func_737())
										{
											func_584(66, "PEN_OVR", "UW_FWONG", sVar27, uVar28, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
										}
										else
										{
											func_584(66, "PEN_OVR", "UW_FWONGC", sVar27, uVar28, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
										}
									}
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar5 + 1, 16);
									if (!func_737())
									{
										func_627(65, &Var0, "UW_FWONT", "UW_BIGF", 15000, 4294967295, 3212836864, "", 6, 2, 4294967295);
									}
									else
									{
										func_627(65, &Var0, "UW_FWONTC", "UW_BIGF", 15000, 4294967295, 3212836864, "", 6, 2, 4294967295);
									}
								}
							}
							else
							{
								if (!func_276("UW_EXPL") && !func_276("UW_EXPLC"))
								{
									func_8();
								}
								iVar10 = 1;
								while (iVar10 <= 3)
								{
									if (Local_110.f_1D1[iVar10 /*4*/].f_1 == Local_110.f_1D1[0 /*4*/].f_1)
									{
										iVar8++;
										if (Local_110.f_1B == joaat("HYDRA") || Local_110.f_1B == joaat("RHINO"))
										{
											if (Local_110.f_1D1[iVar10 /*4*/].f_2 > 4294967295)
											{
												if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_1D1[iVar10 /*4*/].f_2)))
												{
													iVar3[iVar4] = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_1D1[iVar10 /*4*/].f_2);
													iVar4++;
												}
											}
										}
										else if (iLocal_571 > 4294967295)
										{
											if (iLocal_571 != Local_110.f_1D1[iVar10 /*4*/])
											{
												iVar6[iVar7] = Local_110.f_1D1[iVar10 /*4*/];
												iVar7++;
											}
										}
									}
									iVar10++;
								}
								if (Local_110.f_1B == joaat("HYDRA") || Local_110.f_1B == joaat("RHINO"))
								{
									if (iVar8 == 2)
									{
										if (iVar3[0] != func_26() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3[0]))
										{
											if (iVar3[1] != func_26() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3[1]))
											{
												func_551(68, func_26(), func_26(), 4294967295, "UW_DRAW2P", "UW_BIGF", func_323(), 15000, func_323(), PLAYER::GET_PLAYER_NAME(iVar3[0]), PLAYER::GET_PLAYER_NAME(iVar3[1]), 0);
											}
											else
											{
												bVar9 = true;
											}
										}
										else
										{
											bVar9 = true;
										}
									}
									else
									{
										bVar9 = true;
									}
								}
								else if (iVar8 == 2)
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar6[0] + 1, 16);
									StringCopy(&Var1, "UW_TM", 16);
									StringIntConCat(&Var1, iVar6[1] + 1, 16);
									func_627(11, &Var0, "UW_DRAW2P", "UW_BIGO", 15000, 4294967295, 3212836864, &Var1, 1, 2, 4294967295);
									bVar9 = true;
								}
								else
								{
									bVar9 = true;
								}
								if (bVar9)
								{
									func_628(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2, 1);
								}
							}
						}
						func_651(0);
						if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 < 2)
						{
							Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 = 2;
						}
						MISC::SET_BIT(&iLocal_114, 13);
						MISC::SET_BIT(&iLocal_114, 26);
					}
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 6) || (!func_737() && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 15)))
				{
					if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_A != 4294967295)
					{
						func_628(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1);
					}
					else
					{
						func_627(65, "", "UW_FAIL", "UW_BIGF", 15000, 4294967295, 3212836864, 0, 6, 2, 4294967295);
					}
					func_651(0);
					MISC::SET_BIT(&iLocal_114, 26);
					iVar13 = func_520(1);
					Local_111.f_6 = (Local_111.f_6 + iVar13);
					if (!Global_40001.f_2C7D)
					{
						if (Local_111.f_6 > 0)
						{
							func_519(19, Local_111.f_6);
						}
					}
					Global_258AE3 = iVar13;
					if (iVar13 > 0)
					{
						if (func_518())
						{
							func_506(210955503, iVar13, &uVar29, 0, 1, 0);
						}
						else
						{
							NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar30);
						}
					}
					iVar11 = func_505(1);
					Local_111.f_7 = (Local_111.f_7 + iVar11);
					func_504();
					func_457(0, AUDIO::_0x0626A247D2405330(), "", 2658791846, 153786435, iVar11, 1, 4294967295, 0, 0, 0);
					Local_111.f_5 = 2;
					if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 < 2)
					{
						Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 = 2;
					}
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 14))
				{
					func_651(0);
					MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), 8);
					if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 < 3)
					{
						Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 = 3;
					}
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 11))
				{
					func_627(65, "", "UW_FAILD", "UW_BIGF", 15000, 4294967295, 3212836864, 0, 6, 2, 4294967295);
					func_651(0);
					MISC::SET_BIT(&iLocal_114, 26);
					MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), 8);
					iVar13 = func_520(1);
					Local_111.f_6 = (Local_111.f_6 + iVar13);
					if (!Global_40001.f_2C7D)
					{
						if (Local_111.f_6 > 0)
						{
							func_519(19, Local_111.f_6);
						}
					}
					Global_258AE3 = iVar13;
					if (iVar13 > 0)
					{
						if (func_518())
						{
							func_506(210955503, iVar13, &uVar31, 0, 1, 0);
						}
						else
						{
							NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar32);
						}
					}
					iVar11 = func_505(1);
					Local_111.f_7 = (Local_111.f_7 + iVar11);
					func_504();
					func_457(0, AUDIO::_0x0626A247D2405330(), "", 2658791846, 153786435, iVar11, 1, 4294967295, 0, 0, 0);
					Local_111.f_5 = 2;
					if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 < 2)
					{
						Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 = 2;
					}
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 12))
				{
					MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), 8);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 8))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 26))
				{
					if (func_276("UW_ATTK"))
					{
						func_8();
					}
					if (func_547(&uLocal_562, 1))
					{
						MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), 8);
					}
					if (!func_276("UW_EXPL") && !func_276("UW_EXPLC"))
					{
						if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_9 > 4294967295)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_9]))
							{
								if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
								{
									if (func_107(Local_110.f_7[Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_9]))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_110.f_7[Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_9])))
										{
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 8))
	{
		MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), 8);
	}
}

int func_547(var uParam0, bool bParam1)//Position - 0x1A146
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_360()) && !(func_246(CAM::_0xDC9DA9E8789F5246(), 0) && (func_238(CAM::_0xDC9DA9E8789F5246()) || func_236(CAM::_0xDC9DA9E8789F5246())))) && !func_225(CAM::_0xDC9DA9E8789F5246()))
	{
		func_550();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_21(&(uParam0->f_3)))
			{
				func_19(&(uParam0->f_3), 0, 0);
			}
			else if (func_18(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1806E7.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_26862F.f_11DE), 0);
					func_19(&(uParam0->f_5), 0, 0);
				}
				func_19(&(uParam0->f_1), 0, 0);
				func_549(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_21(&(uParam0->f_5)))
			{
				if (func_18(&(uParam0->f_5), 3000, 0))
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
				func_548();
				func_549(uParam0, 2);
			}
			break;
		
		case 2:
			func_548();
			if (func_18(&(uParam0->f_1), 15000, 0))
			{
				if (func_671("AMEV_LBD_HELP"))
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				}
				func_549(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_18(&(uParam0->f_1), 23500, 0))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DE), 1);
				func_549(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DE), 1);
			return 1;
	}
	return 0;
}

void func_548()//Position - 0x1A2C2
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 0))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_310, 2)) && func_837(CAM::_0xDC9DA9E8789F5246(), 1, 1)) && !Global_10B8E) && !Global_D072) && !CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_26862F.f_11DE), 1);
			func_426("AMEV_LBD_HELP", 4294967295);
			func_425(1);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DE), 0);
		}
	}
}

void func_549(var uParam0, int iParam1)//Position - 0x1A345
{
	*uParam0 = iParam1;
}

void func_550()//Position - 0x1A352
{
	Global_258852 = 1;
}

int func_551(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1A35F
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
	func_583(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_11 = iParam1;
	Var0.f_12 = iParam2;
	Var0.f_47 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_48 = iParam8;
	StringCopy(&(Var0.f_19), sParam9, 64);
	StringCopy(&(Var0.f_29), sParam10, 64);
	StringCopy(&(Var0.f_39), sParam11, 16);
	return func_552(&Var0);
}

int func_552(var uParam0)//Position - 0x1A3EE
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_252F9E.f_BD2)
		{
			return 0;
		}
	}
	func_562(uParam0, uParam0->f_11);
	func_561(uParam0);
	if (func_61())
	{
		func_561(uParam0);
	}
	if (func_560(uParam0->f_1))
	{
		func_553();
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
				func_553();
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
				if (func_363(Global_252F9E.f_A90[iVar0 /*80*/].f_1))
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

void func_553()//Position - 0x1A5BF
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
	func_554();
	if (bVar0)
	{
		Global_11731 = 0;
	}
}

void func_554()//Position - 0x1A5F2
{
	Global_252F9E.f_BD4 = 0;
	Global_252F9E.f_BD4.f_242 = 0;
	func_558(&(Global_252F9E.f_BD4.f_1));
	Global_252F9E.f_BD4.f_1.f_1 = 0;
	func_555(&(Global_252F9E.f_BD4.f_1));
}

void func_555(var uParam0)//Position - 0x1A633
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
				if (CAM::IS_SCREEN_FADED_OUT() && !func_557(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_556(0);
}

void func_556(int iParam0)//Position - 0x1A6DA
{
	Global_11729 = iParam0;
	Global_1172A = iParam0;
}

bool func_557(bool bParam0)//Position - 0x1A6EE
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

void func_558(var uParam0)//Position - 0x1A719
{
	func_559(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

void func_559(var uParam0)//Position - 0x1A743
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

int func_560(int iParam0)//Position - 0x1A7C2
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_561(var uParam0)//Position - 0x1A8C4
{
	if (func_365(uParam0->f_1))
	{
		uParam0->f_48 = func_323();
	}
}

void func_562(var uParam0, int iParam1)//Position - 0x1A8DF
{
	if (func_365(uParam0->f_1))
	{
		uParam0->f_49 = 1;
	}
	if (iParam1 == func_26() || !func_837(iParam1, 0, 1))
	{
		return;
	}
	if (func_363(uParam0->f_1))
	{
		if (uParam0->f_47 == 1)
		{
			uParam0->f_49 = func_563(iParam1, 4294967294, 0, 0, 0);
		}
	}
}

int func_563(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1A936
{
	int iVar0;
	int iVar1;
	
	if (func_401(iParam0) && !bParam4)
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
	if (((func_401(CAM::_0xDC9DA9E8789F5246()) || (func_582() && func_581())) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11E1, 31)) && !bParam4)
	{
		iVar1 = func_580();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != 4294967295)
				{
					if (func_837(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_440000.f_1EBA3[iParam1] != 4294967295)
							{
								return func_578(iParam1, iParam0, 0);
							}
							else
							{
								return func_573(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_573(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_440000.f_1EBA3[iParam1] != 4294967295)
				{
					return func_578(iParam1, iParam0, 0);
				}
				else
				{
					return func_564(0, 4294967295, 0);
				}
			}
			else
			{
				return func_564(0, 4294967295, 0);
			}
		}
	}
	if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_440000.f_1EBA3[iParam1] != 4294967295)
		{
			return func_578(iParam1, iParam0, 0);
		}
		else
		{
			return func_573(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
		}
	}
	return func_573(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
}

int func_564(bool bParam0, int iParam1, bool bParam2)//Position - 0x1AB16
{
	return func_565(CAM::_0xDC9DA9E8789F5246(), bParam0, iParam1, bParam2);
}

int func_565(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1AB2C
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (func_571() && Global_150AAC.f_1)
	{
		if (bParam1)
		{
			return func_570(iParam2, iVar0);
		}
		else
		{
			return func_570(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 4294967295)
		{
			if (func_493(iVar0, iParam2, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_569(1);
				}
				else
				{
					return func_569(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 20))
			{
				return func_566(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_566(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == 4294967295)
	{
		return func_569(1);
	}
	return func_569(0);
}

int func_566(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1AC20
{
	int iVar0;
	
	iVar0 = func_568(iParam0, iParam1, iParam3);
	if (func_567(Global_440000.f_1FEDE, 1))
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

int func_567(int iParam0, bool bParam1)//Position - 0x1AD38
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

int func_568(int iParam0, int iParam1, int iParam2)//Position - 0x1AD89
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
			if (!func_493(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_569(bool bParam0)//Position - 0x1ADD0
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_570(int iParam0, int iParam1)//Position - 0x1ADE7
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_568(iParam1, iParam0, 4);
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

int func_571()//Position - 0x1AE35
{
	if (func_572() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

bool func_572()//Position - 0x1AE52
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_23D58, 12);
}

int func_573(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1AE6A
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
			if (func_576(1))
			{
				iVar3 = func_322(iParam0);
				if (!iVar3 == 4294967295)
				{
					return func_320(iVar3);
				}
			}
			if ((func_575(iParam1, iParam0, iVar0, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)) || ((func_493(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 23)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)))
			{
				return func_569(1);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26))
			{
				return func_574(1);
			}
			else
			{
				return func_565(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1805F9 || Global_1805F0) || Global_1841F3[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1805F9 == 1 && Global_180603 == 0))
			{
				return func_569(1);
			}
			else
			{
				return func_565(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1805F4 && Global_1803FE.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_322(iParam0);
	if (!iVar4 == 4294967295)
	{
		return func_320(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_574(bool bParam0)//Position - 0x1B00E
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_575(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1B025
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

int func_576(int iParam0)//Position - 0x1B09D
{
	if ((func_302() || func_577()) || (func_61() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_577()//Position - 0x1B0CC
{
	return Global_255C02.f_F;
}

int func_578(int iParam0, int iParam1, bool bParam2)//Position - 0x1B0DA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC93F.f_D[iParam0];
	if (func_576(1))
	{
		iVar2 = func_322(iParam1);
		if (!iVar2 == 4294967295)
		{
			return func_320(iVar2);
		}
	}
	if (iVar1 > 4294967295 && iVar1 < 17)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_68[iParam0 /*10693*/].f_159C[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > 4294967295 && iParam1 != func_26())
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
			iVar0 = func_565(iParam1, !bParam2, iParam0, 0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_15, 13))
		{
			iVar0 = func_579(iParam0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_18, 29))
		{
			iVar0 = 0;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26) && !func_493(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_574(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_579(int iParam0)//Position - 0x1B268
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

var func_580()//Position - 0x1B33D
{
	return Global_240006.f_2;
}

bool func_581()//Position - 0x1B34B
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 4);
}

bool func_582()//Position - 0x1B35C
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 14);
}

void func_583(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x1B379
{
	uParam1->f_11 = func_26();
	uParam1->f_12 = func_26();
	uParam1->f_13 = func_26();
	uParam1->f_14 = func_26();
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

int func_584(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x1B3F5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_26();
	iVar1 = func_26();
	iVar2 = func_26();
	return func_585(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_585(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x1B430
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
	func_583(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_11 = iParam5;
	Var0.f_12 = iParam6;
	Var0.f_13 = iParam7;
	StringCopy(&(Var0.f_19), sParam3, 64);
	StringCopy(&(Var0.f_39), sParam8, 16);
	Var0.f_49 = uParam4;
	Var0.f_47 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_48 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_47 = iParam14;
	}
	MISC::SET_BIT(&(Var0.f_45), 2);
	return func_552(&Var0);
}

char* func_586(int iParam0)//Position - 0x1B4E4
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		sVar0 = func_591(&(Global_18CD5B[iParam0 /*560*/].f_B.f_63));
		return sVar0;
	}
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_73 != Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_73)
	{
		sVar0 = func_589(iParam0, 0);
		return sVar0;
	}
	if (((func_237(iParam0, 28) || func_237(CAM::_0xDC9DA9E8789F5246(), 28)) || func_588(iParam0)) && !func_587(iParam0))
	{
		return func_589(iParam0, 0);
	}
	iVar1 = func_65(iParam0);
	if (iVar1 != func_26())
	{
		if (iVar1 != CAM::_0xDC9DA9E8789F5246())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, 4294967295, 1))
			{
				return func_589(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_26())
	{
		sVar0 = func_591(&(Global_18CD5B[iVar1 /*560*/].f_B.f_63));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_589(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_587(int iParam0)//Position - 0x1B5E9
{
	struct<13> Var0;
	
	Var0 = { func_66(iParam0) };
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

int func_588(int iParam0)//Position - 0x1B619
{
	struct<13> Var0;
	
	if (iParam0 != func_26())
	{
		Var0 = { func_66(iParam0) };
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

char* func_589(int iParam0, bool bParam1)//Position - 0x1B672
{
	if (!bParam1)
	{
		if (func_306(iParam0, 1))
		{
			return func_590();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_590()//Position - 0x1B699
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

var func_591(var uParam0)//Position - 0x1B6A9
{
	return uParam0;
}

void func_592(bool bParam0)//Position - 0x1B6B3
{
	if (bParam0)
	{
		if (func_593(1))
		{
			MISC::SET_BIT(&Global_180700, 1);
		}
	}
	else if (func_593(2))
	{
		MISC::SET_BIT(&Global_180700, 2);
	}
}

int func_593(int iParam0)//Position - 0x1B6E5
{
	int iVar0;
	
	iVar0 = func_268(2534, 4294967295, 0);
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

int func_594(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x1B7B6
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
	func_583(iParam0, &Var0, 4294967295, sParam1, sParam5);
	StringCopy(&(Var0.f_19), sParam2, 64);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam6;
	return func_552(&Var0);
}

int func_595(bool bParam0)//Position - 0x1B828
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		func_674(&iVar1, &iVar2);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar0 != iVar1)
			{
				if (Local_110.f_100[iVar0] == iVar2)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else if (Local_110.f_1B == joaat("RHINO") || Local_110.f_1B == joaat("HYDRA"))
	{
		return Local_110.f_1D1[0 /*4*/].f_1 == Local_110.f_1D1[1 /*4*/].f_1;
	}
	else
	{
		return Local_110.f_252[0 /*4*/].f_1 == Local_110.f_252[1 /*4*/].f_1;
	}
	return 0;
}

int func_596()//Position - 0x1B8BC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_674(&iVar1, &iVar2);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iVar1)
		{
			if (Local_110.f_100[iVar0] > iVar2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_597()//Position - 0x1B8F8
{
	if (!func_737())
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_40001.f_2B82) * Global_40001.f_2C40));
	}
	if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 1)) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 2))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_40001.f_2BBF) * Global_40001.f_2C42));
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 6))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_40001.f_2BBF) * Global_40001.f_2C42));
	}
	return 0;
}

void func_598(int iParam0, int iParam1)//Position - 0x1B994
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_609())
		{
			if (func_608(0))
			{
				if (!func_379(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_607()))
					{
						if (func_606() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_606());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_604(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_603("GB_BCUT_TICK1", func_607(), iVar0, 0, 0, 1, 1);
						}
						func_602(20);
						func_599(func_607(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_599(int iParam0, int iParam1, int iParam2)//Position - 0x1BA35
{
	struct<8> Var0;
	
	if (func_837(iParam0, 0, 1))
	{
		Var0 = 2084031113;
		Var0.f_1 = CAM::_0xDC9DA9E8789F5246();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_601(iParam0);
		func_600(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_517(iParam0));
	}
}

void func_600(var uParam0, var uParam1)//Position - 0x1BA8B
{
	*uParam0 = Global_19135D.f_9;
	*uParam1 = Global_19135D.f_A;
}

var func_601(int iParam0)//Position - 0x1BAA5
{
	return Global_18CD5B[iParam0 /*560*/].f_1EB;
}

void func_602(int iParam0)//Position - 0x1BAB9
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_26862F.f_1313.f_7[iVar0]), iVar1);
}

int func_603(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x1BAE2
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
		HUD::_SET_NOTIFICATION_COLOR_NEXT(func_563(iParam1, 4294967294, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_539(&Var1));
		if (!iParam3 == 0)
		{
			HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		func_534(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_604(int iParam0, bool bParam1)//Position - 0x1BB7A
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_605(1);
	}
	else
	{
		iVar1 = func_605(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_605(bool bParam0)//Position - 0x1BBAC
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_2FF5;
}

int func_606()//Position - 0x1BBD2
{
	return Global_40001.f_2FF4;
}

int func_607()//Position - 0x1BBE1
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B;
}

bool func_608(bool bParam0)//Position - 0x1BBF6
{
	return func_318(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

bool func_609()//Position - 0x1BC08
{
	return func_353(CAM::_0xDC9DA9E8789F5246());
}

int func_610()//Position - 0x1BC18
{
	int iVar0;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 6) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 15))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_110.f_100[iVar0] > 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_611()//Position - 0x1BC65
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_49[iVar0]))
		{
			if (!func_107(Local_110.f_49[iVar0]))
			{
				func_24(&(Local_110.f_49[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_30[iVar0]))
		{
			if (func_31(Local_110.f_30[iVar0]))
			{
				func_24(&(Local_110.f_30[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_612(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0x1BCEA
{
	if (func_246(CAM::_0xDC9DA9E8789F5246(), 0) || func_347(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if (func_238(CAM::_0xDC9DA9E8789F5246()) || func_252(CAM::_0xDC9DA9E8789F5246()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::_0xCF61D4B4702EE9EB() < iParam0)
	{
		if (bParam2)
		{
			func_617(sParam3, sParam4, 1);
		}
		if (func_616(26, 4294967295))
		{
			func_614(26, 4294967295);
		}
		return 1;
	}
	if (func_21(&(Global_1806E7.f_12)))
	{
		if (!func_18(&(Global_1806E7.f_12), 7500, 0))
		{
			return 0;
		}
		func_104(&(Global_1806E7.f_12));
	}
	if (func_613())
	{
		if (bParam2)
		{
			func_617(sParam3, sParam4, 0);
		}
		if (func_616(26, 4294967295))
		{
			func_614(26, 4294967295);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_617(sParam3, sParam4, 1);
		}
		if (func_616(26, 4294967295))
		{
			func_614(26, 4294967295);
		}
		return 1;
	}
	return 0;
}

bool func_613()//Position - 0x1BDE1
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 0);
}

void func_614(int iParam0, int iParam1)//Position - 0x1BDF4
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_17();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_615(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, iParam0))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_615(int iParam0)//Position - 0x1BE50
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_17();
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

bool func_616(int iParam0, int iParam1)//Position - 0x1BEB3
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_17();
	}
	iVar0 = func_615(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar1, iParam0);
}

void func_617(char* sParam0, char* sParam1, bool bParam2)//Position - 0x1BEDF
{
	if ((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 2) && !func_200(CAM::_0xDC9DA9E8789F5246())) && !func_199(CAM::_0xDC9DA9E8789F5246()))
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
		func_628(66, sParam0, sParam1, 1, 4294967295, 2, 1);
		MISC::SET_BIT(&(Global_1806E7.f_1), 2);
	}
}

void func_618()//Position - 0x1BF58
{
	Global_26862F.f_6F2.f_38 = 1;
}

void func_619()//Position - 0x1BF6A
{
	Global_26862F.f_6F2.f_36 = 1;
}

bool func_620()//Position - 0x1BF7C
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_6BB, 11);
}

int func_621()//Position - 0x1BF91
{
	if (iLocal_571 > 4294967295)
	{
		if (func_107(Local_110.f_7[iLocal_571]))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_110.f_7[iLocal_571])))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_622(char* sParam0, int iParam1, int iParam2)//Position - 0x1BFCD
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_623(bool bParam0)//Position - 0x1BFEC
{
	if (!func_737())
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_40001.f_2B81) * Global_40001.f_2C3F));
	}
	if (bParam0)
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_40001.f_2BBE) * Global_40001.f_2C41));
	}
	if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 1)) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 2))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_40001.f_2BBE) * Global_40001.f_2C41));
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 6))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_40001.f_2BBE) * Global_40001.f_2C41));
	}
	return 0;
}

char* func_624()//Position - 0x1C0AD
{
	if (Local_110.f_1B == joaat("RHINO"))
	{
		return "ABLIP_TANK";
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_110.f_1B))
	{
		return "ABLIP_PLANE";
	}
	return "ABLIP_HELI";
}

void func_625(int iParam0)//Position - 0x1C0E1
{
	if (func_250())
	{
		if (iParam0 == 1)
		{
			if (Global_26862F.f_111E == 4294967295)
			{
				Global_26862F.f_111E = 60000;
			}
			func_7(&(Global_26862F.f_111C), 0, 0);
			if (Global_26862F.f_1121 == 4294967295)
			{
				Global_26862F.f_1121 = 10000;
			}
			func_7(&(Global_26862F.f_111F), 0, 0);
		}
		else
		{
			Global_1406A0 = 0;
			Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_8 = 0;
			func_676(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_626()) && !func_256(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_EC6C8 = 0;
		}
	}
}

bool func_626()//Position - 0x1C17B
{
	return Global_255C02.f_2D9;
}

int func_627(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10)//Position - 0x1C18A
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
	func_583(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_39), sParam1, 16);
	StringCopy(&(Var0.f_3D), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_47 = iParam8;
	Var0.f_48 = iParam9;
	if (iParam10 != 4294967295)
	{
		MISC::SET_BIT(&(Var0.f_45), iParam10);
	}
	return func_552(&Var0);
}

int func_628(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1C21B
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
	func_583(iParam0, &Var0, 4294967295, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	return func_552(&Var0);
}

void func_629(bool bParam0)//Position - 0x1C28B
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

void func_630(bool bParam0)//Position - 0x1C2BF
{
	int iVar0;
	
	if (PED::GET_PED_DRAWABLE_VARIATION(AUDIO::_0x0626A247D2405330(), 5) != 0)
	{
		PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 177, 1);
		PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(CAM::_0xDC9DA9E8789F5246(), func_268(585, 4294967295, 0));
		if (func_650())
		{
			PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(CAM::_0xDC9DA9E8789F5246(), 1931904776);
		}
		else if (func_649())
		{
			PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(CAM::_0xDC9DA9E8789F5246(), 2170442475);
		}
		if (func_646(3610, 4294967295, 4294967295))
		{
		}
		iVar0 = func_268(2040, 4294967295, 0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(CAM::_0xDC9DA9E8789F5246(), func_645(PLAYER::GET_PLAYER_PED(CAM::_0xDC9DA9E8789F5246()), iVar0));
		if (func_608(0))
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(CAM::_0xDC9DA9E8789F5246(), func_268(585, 4294967295, 0));
		}
		else
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(CAM::_0xDC9DA9E8789F5246(), func_644(Global_26A85D));
		}
		func_643(CAM::_0xDC9DA9E8789F5246(), iVar0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(CAM::_0xDC9DA9E8789F5246(), 5, func_636(AUDIO::_0x0626A247D2405330(), iVar0), func_635(AUDIO::_0x0626A247D2405330(), iVar0), 0);
		func_634(func_268(2040, 4294967295, 0), 1);
		Global_26862F.f_114 = 1;
		func_631(CAM::_0xDC9DA9E8789F5246(), 4294967295, 4294967295);
		if (bParam0)
		{
		}
	}
}

void func_631(int iParam0, int iParam1, int iParam2)//Position - 0x1C3C1
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_633();
		if (iParam2 == 4294967295)
		{
			iParam2 = func_268(2040, 4294967295, 0);
		}
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(iParam0, 5, func_636(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_635(PLAYER::GET_PLAYER_PED(iParam0), iParam2), 0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(iParam0, func_645(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(iParam0), 5, func_636(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_635(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_645(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		if (iParam1 == 4294967295)
		{
			iParam1 = func_268(585, 4294967295, 0);
		}
		if (func_608(1) && func_632(iParam0))
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, func_644(Global_26A85D));
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
		func_643(iParam0, iParam2);
		PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 177, 1);
	}
}

bool func_632(int iParam0)//Position - 0x1C4BB
{
	return func_237(iParam0, 10);
}

void func_633()//Position - 0x1C4CB
{
	Global_1160A = 0;
	Global_1160B = 4294967295;
	Global_1160C = 4294967295;
	Global_1160D = 4294967295;
	Global_1160E = 4294967295;
	Global_1160F = 4294967295;
}

void func_634(int iParam0, int iParam1)//Position - 0x1C4F1
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_633();
		func_483(2040, iParam0, 4294967295, 1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(CAM::_0xDC9DA9E8789F5246(), 5, func_636(AUDIO::_0x0626A247D2405330(), iParam0), func_635(AUDIO::_0x0626A247D2405330(), iParam0), 0);
		func_643(CAM::_0xDC9DA9E8789F5246(), iParam0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(CAM::_0xDC9DA9E8789F5246(), func_645(AUDIO::_0x0626A247D2405330(), iParam0));
		if ((iParam1 && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330())) && PED::GET_PED_DRAWABLE_VARIATION(AUDIO::_0x0626A247D2405330(), 5) != 0)
		{
			func_631(CAM::_0xDC9DA9E8789F5246(), 4294967295, 4294967295);
		}
	}
}

int func_635(int iParam0, int iParam1)//Position - 0x1C577
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

var func_636(int iParam0, int iParam1)//Position - 0x1C5D9
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
		Global_1160F = func_637(iParam0, iParam1);
	}
	return Global_1160F;
}

int func_637(int iParam0, int iParam1)//Position - 0x1C6A9
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
				return func_642(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3407826235, 8))
			{
				return func_642(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3109595566, 8))
			{
				return func_642(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2170337719, 8))
			{
				return func_642(iParam0, iParam1) + 15;
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
				return func_642(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3109595566, 8))
			{
				return func_642(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2170337719, 8))
			{
				return func_642(iParam0, iParam1) + 15;
			}
		}
		return func_642(iParam0, iParam1);
	}
	if (func_641(iParam0))
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
				return func_642(iParam0, iParam1) + 15;
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3988198483, 0))
			{
				return func_642(iParam0, iParam1) + 15;
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 4236554734, 0))
			{
				return func_642(iParam0, iParam1) + 15;
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
			iVar6 = func_640(iVar5, 0);
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
						iVar0 = func_639(iVar5);
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
						iVar0 = func_639(iVar5);
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
			iVar7 = func_638(iVar5, 0);
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
					iVar0 = func_639(iVar5);
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
					return func_642(iParam0, iParam1) + 15;
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
				return func_642(iParam0, iParam1);
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
					return func_642(iParam0, iParam1);
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
				return func_642(iParam0, iParam1);
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
				return func_642(iParam0, iParam1);
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
				return func_642(iParam0, iParam1);
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
				return func_642(iParam0, iParam1);
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
				return func_642(iParam0, iParam1);
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
				return func_642(iParam0, iParam1);
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
				return func_642(iParam0, iParam1);
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
				return func_642(iParam0, iParam1);
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
				return func_642(iParam0, iParam1);
			}
			else
			{
				return func_642(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 490219883, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(iParam0, iParam1);
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
				return func_642(iParam0, iParam1);
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
				return func_642(iParam0, iParam1);
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
				return func_642(iParam0, iParam1);
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
				return func_642(iParam0, iParam1);
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
				return func_642(iParam0, iParam1);
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
				return func_642(iParam0, iParam1);
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
				return func_642(iParam0, iParam1);
			}
			else
			{
				return func_642(iParam0, iParam1);
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
				return func_642(iParam0, iParam1);
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
				return func_642(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3896754259, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1380605304, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_642(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3988198483, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_642(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 4236554734, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_642(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1711219157, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(iParam0, iParam1) + 15;
			}
			else
			{
				return func_642(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1466664110, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(iParam0, iParam1) + 15;
			}
			else
			{
				return func_642(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2326391594, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(iParam0, iParam1) + 15;
			}
			else
			{
				return func_642(iParam0, iParam1) + 15;
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
				return func_642(iParam0, iParam1) + 15;
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
				return func_642(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3379614369, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_642(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3756588945, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_642(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2155823279, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_642(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3859427410, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_642(iParam0, iParam1) + 15;
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
				return func_642(iParam0, iParam1) + 15;
			}
			else
			{
				return func_642(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 350281921, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(iParam0, iParam1) + 15;
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
				return func_642(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1877382859, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(iParam0, iParam1) + 15;
			}
			else
			{
				return func_642(iParam0, iParam1) + 15;
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
				return func_642(iParam0, iParam1) + 15;
			}
			else
			{
				return func_642(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1207461955, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(iParam0, iParam1) + 15;
			}
			else
			{
				return func_642(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(iParam0, iParam1);
			}
			else
			{
				return func_642(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(iParam0, iParam1) + 15;
			}
			else
			{
				return func_642(iParam0, iParam1) + 15;
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
				return func_642(iParam0, iParam1) + 15;
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
				return func_642(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3355441939, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(iParam0, iParam1);
			}
			else
			{
				return func_642(iParam0, iParam1) + 15;
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
				return func_642(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(iParam0, iParam1) + 15;
			}
			else
			{
				return func_642(iParam0, iParam1) + 15;
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
				return func_642(iParam0, iParam1) + 15;
			}
			else
			{
				return func_642(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(iParam0, iParam1);
			}
			else
			{
				return func_642(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3355441939, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(iParam0, iParam1);
			}
			else
			{
				return func_642(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 398019854, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(iParam0, iParam1) + 15;
			}
			else
			{
				return func_642(iParam0, iParam1);
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
			iVar0 = func_639(iVar5);
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

int func_638(int iParam0, int iParam1)//Position - 0x1E8A1
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

int func_639(int iParam0)//Position - 0x1EA41
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

int func_640(int iParam0, int iParam1)//Position - 0x1EBAE
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

int func_641(int iParam0)//Position - 0x1ECF2
{
	if (FILE::_0x341DE7ED1D2A1BFD(FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4), PED::GET_PED_TEXTURE_VARIATION(iParam0, 4)), 1052059919, 0))
	{
		return 1;
	}
	return 0;
}

int func_642(int iParam0, int iParam1)//Position - 0x1ED21
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

void func_643(int iParam0, int iParam1)//Position - 0x1ED9F
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

int func_644(var uParam0)//Position - 0x1EE15
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

int func_645(int iParam0, int iParam1)//Position - 0x1EECD
{
	return 0;
}

int func_646(int iParam0, int iParam1, int iParam2)//Position - 0x1EED6
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_17();
	}
	iVar1 = func_648(iParam0, iParam1);
	uVar2 = func_647(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_647(int iParam0)//Position - 0x1EF13
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

int func_648(int iParam0, int iParam1)//Position - 0x1F22B
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_17();
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

bool func_649()//Position - 0x1F523
{
	return DLC::IS_DLC_PRESENT(1428761799);
}

bool func_650()//Position - 0x1F534
{
	return DLC::IS_DLC_PRESENT(3289090928);
}

void func_651(bool bParam0)//Position - 0x1F545
{
	if (bParam0)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_6BB, 11))
		{
			MISC::SET_BIT(&(Global_26862F.f_6BB), 11);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_6BB, 11))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BB), 11);
	}
}

void func_652(bool bParam0)//Position - 0x1F590
{
	if (bParam0)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_6BB, 9))
		{
			MISC::SET_BIT(&(Global_26862F.f_6BB), 9);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_6BB, 9))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BB), 9);
	}
}

void func_653()//Position - 0x1F5DB
{
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
}

void func_654(bool bParam0)//Position - 0x1F5F7
{
	int iVar0;
	
	if (bParam0)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 7))
		{
			if ((!func_252(CAM::_0xDC9DA9E8789F5246()) && !func_199(CAM::_0xDC9DA9E8789F5246())) && !func_660(CAM::_0xDC9DA9E8789F5246()))
			{
				if (func_250())
				{
					func_625(0);
					func_659();
				}
				if (func_267(0))
				{
					iVar0 = func_268(2480, 4294967295, 0);
					GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, 0);
					func_659();
				}
				if (func_267(func_204(func_188(CAM::_0xDC9DA9E8789F5246()))))
				{
					iVar0 = func_268(2480, 4294967295, 0);
					GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, func_204(func_188(CAM::_0xDC9DA9E8789F5246())));
					func_659();
				}
				if (func_658())
				{
					func_659();
				}
				if (func_188(CAM::_0xDC9DA9E8789F5246()) > 4294967295)
				{
					MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 7);
					if (func_188(CAM::_0xDC9DA9E8789F5246()) == 236)
					{
						func_657();
					}
				}
			}
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 7))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 7);
		func_655();
	}
}

void func_655()//Position - 0x1F70C
{
	if (func_656())
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 17);
	}
}

bool func_656()//Position - 0x1F72E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 17);
}

void func_657()//Position - 0x1F749
{
	if (!func_656())
	{
		Global_26862F.f_185A = HUD::_0x13C4B962653A5280();
		MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 17);
	}
}

int func_658()//Position - 0x1F777
{
	if (Global_252F9E.f_47F.f_5 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void func_659()//Position - 0x1F791
{
	if (func_658())
	{
		Global_252F9E.f_47F.f_10 = 1;
	}
}

bool func_660(int iParam0)//Position - 0x1F7AA
{
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		if ((func_250() && !func_245()) || func_201(CAM::_0xDC9DA9E8789F5246(), 21))
		{
			return 1;
		}
		if (func_21(&(Global_1806E7.f_D)))
		{
			if (!func_18(&(Global_1806E7.f_D), Global_40001.f_E, 0))
			{
				return 1;
			}
			func_104(&(Global_1806E7.f_D));
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 10))
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 9);
}

void func_661(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1F83C
{
	bool bVar0;
	
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
	}
	Global_26862F.f_127A = 4294967295;
	bVar0 = (func_246(CAM::_0xDC9DA9E8789F5246(), 0) && func_238(CAM::_0xDC9DA9E8789F5246()));
	if (bParam6)
	{
		func_670(21, 1);
	}
	else
	{
		func_669(iParam0, 4294967295);
		if (func_200(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_1806E7.f_3 = iParam0;
		}
		else
		{
			func_699(iParam0);
		}
		Global_1806E7.f_4 = 4294967295;
		if (func_200(CAM::_0xDC9DA9E8789F5246()))
		{
			MISC::SET_BIT(&(Global_1806E7.f_1), 5);
		}
		if ((func_250() && !func_245()) || func_201(CAM::_0xDC9DA9E8789F5246(), 21))
		{
			MISC::SET_BIT(&(Global_1806E7.f_1), 4);
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 17);
		MISC::SET_BIT(&(Global_1806E7.f_1), 20);
		if (func_668(iParam0))
		{
			func_667();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_666(fParam1);
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
		if (func_665(iParam0))
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
				func_450(1);
				if (func_593(0))
				{
					MISC::SET_BIT(&(Global_1806E7.f_1), 9);
				}
				MISC::SET_BIT(&(Global_1806E7.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_448(1);
			MISC::SET_BIT(&(Global_1806E7.f_1), 12);
		}
		if (bParam5)
		{
			func_664();
			MISC::SET_BIT(&(Global_1806E7.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_662(iParam0))
			{
				MISC::SET_BIT(&(Global_1806E7.f_1), 21);
			}
		}
	}
	Global_263374 = 1;
}

int func_662(int iParam0)//Position - 0x1FA06
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
	if (func_663())
	{
		return 1;
	}
	return 0;
}

int func_663()//Position - 0x1FA61
{
	switch (func_187())
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

void func_664()//Position - 0x1FA8F
{
	MISC::SET_BIT(&(Global_26862F.f_1271), 0);
}

int func_665(int iParam0)//Position - 0x1FAA3
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_239(CAM::_0xDC9DA9E8789F5246()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_666(float fParam0)//Position - 0x1FAE1
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_443())
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

void func_667()//Position - 0x1FB4D
{
	Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_C8 = 0;
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11C4), 1);
}

int func_668(int iParam0)//Position - 0x1FB6F
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_669(int iParam0, int iParam1)//Position - 0x1FB89
{
	int iVar0;
	
	if (iParam0 != 4294967295 || iParam1 != 4294967295)
	{
		iVar0 = iParam0;
		if (iVar0 == 4294967295)
		{
			iVar0 = iParam1;
		}
		if (func_267(0) || func_267(func_204(iVar0)))
		{
			MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 2);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 2);
		}
	}
}

void func_670(int iParam0, bool bParam1)//Position - 0x1FBEF
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

int func_671(char* sParam0)//Position - 0x1FC52
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_672()//Position - 0x1FC65
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_110.f_1B != joaat("VALKYRIE"))
	{
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
	iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(joaat("VALKYRIE"));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar2, 0);
		if (iVar4 != 0)
		{
			if (!PED::IS_PED_INJURED(iVar4))
			{
				if (PED::IS_PED_A_PLAYER(iVar4))
				{
					iVar3++;
				}
			}
		}
		iVar2++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_673(bool bParam0)//Position - 0x1FCEC
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, bParam0);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iVar0, !bParam0);
		}
	}
}

void func_674(int iParam0, var uParam1)//Position - 0x1FD25
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1, iVar0))
		{
			*iParam0 = iVar0;
			*uParam1 = Local_110.f_100[iVar0];
		}
		iVar0++;
	}
}

void func_675()//Position - 0x1FD64
{
	int iVar0;
	
	iVar0 = CAM::_0xDC9DA9E8789F5246();
	if (iVar0 != 4294967295)
	{
		Global_18CD5B[iVar0 /*560*/] = 4294967295;
	}
}

void func_676(bool bParam0)//Position - 0x1FD82
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_250())
		{
			if (func_837(CAM::_0xDC9DA9E8789F5246(), 1, 0))
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
			if (func_837(CAM::_0xDC9DA9E8789F5246(), 1, 1))
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

void func_677(bool bParam0)//Position - 0x1FE7B
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 0))
		{
			Global_258ACA = func_188(CAM::_0xDC9DA9E8789F5246());
			if (Global_258ACA == 4294967295)
			{
				Global_258ACA = Global_1806E7.f_4;
			}
			if (func_698(Global_258ACA) == 0)
			{
				if (func_697(1) > 0)
				{
					func_696(26, 4294967295);
				}
			}
			if (func_250())
			{
				func_625(0);
				func_659();
			}
			if (func_267(0))
			{
				iVar1 = func_268(2480, 4294967295, 0);
				GRAPHICS::_0x35FB78DC42B7BD21(&iVar1, 0);
				func_659();
			}
			if (func_267(func_204(func_188(CAM::_0xDC9DA9E8789F5246()))))
			{
				iVar1 = func_268(2480, 4294967295, 0);
				GRAPHICS::_0x35FB78DC42B7BD21(&iVar1, func_204(func_188(CAM::_0xDC9DA9E8789F5246())));
				func_659();
			}
			if (func_658())
			{
				func_659();
			}
			MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 0);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 0))
	{
		if ((!func_231() && !func_695()) && !func_694())
		{
			Global_258ACA = 4294967295;
			func_614(26, 4294967295);
		}
		else if (func_698(Global_258ACA) == 0)
		{
			iVar0 = func_680(1);
			if (iVar0 > 0)
			{
				func_678(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_489(1932, 1, 4294967295);
				func_678(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_616(26, 4294967295))
		{
			Global_258ACA = 4294967295;
			func_614(26, 4294967295);
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 0);
	}
}

void func_678(int iParam0, int iParam1)//Position - 0x1FFFF
{
	int iVar0;
	
	iVar0 = func_473(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_679(iParam0))
	{
		func_471(iParam0, iVar0);
	}
	else
	{
		func_475(iParam0, iVar0);
	}
}

int func_679(int iParam0)//Position - 0x20034
{
	if (Global_150A02)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_680(int iParam0)//Position - 0x200B8
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_25866F == 0)
	{
		return 0;
	}
	if (func_694())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_693() || func_691()))
		{
			Global_258253 = 1;
		}
	}
	Global_25866F = 0;
	if (Global_141364)
	{
		iVar0 = 1;
	}
	if (Global_258253)
	{
		iVar0 = 1;
	}
	if (Global_258252)
	{
		iVar0 = 1;
	}
	if (func_690(Global_19A8A.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_258208)
	{
		iVar0 = 1;
	}
	if (func_689(512))
	{
		iVar0 = 1;
	}
	if (func_688(128))
	{
		iVar0 = 1;
	}
	if (Global_14137C == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_166())
	{
		iVar0 = 0;
	}
	if (Global_25843E)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_686())
		{
			if (Global_440000.f_2032F == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_15(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		iVar0 = 0;
	}
	if (func_685())
	{
		iVar0 = 0;
	}
	if ((Global_258253 || Global_258252) || Global_141364)
	{
		if (func_691())
		{
			iVar0 = 0;
		}
	}
	Global_25843E = 0;
	Global_258252 = 0;
	Global_258253 = 0;
	Global_141364 = 0;
	Global_258208 = 0;
	func_683(&(Global_19A8A.f_1), 32);
	func_682(512);
	func_681(128);
	return iVar0;
}

void func_681(int iParam0)//Position - 0x2020B
{
	Global_19AC3 = (Global_19AC3 - (Global_19AC3 && iParam0));
}

void func_682(int iParam0)//Position - 0x20223
{
	Global_19AC4 = (Global_19AC4 - (Global_19AC4 && iParam0));
}

void func_683(var uParam0, int iParam1)//Position - 0x2023B
{
	func_684(uParam0, iParam1);
}

void func_684(var uParam0, var uParam1)//Position - 0x2024B
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_685()//Position - 0x20260
{
	if (((Global_18060A || Global_1805ED) || func_15(CAM::_0xDC9DA9E8789F5246(), 0)) || func_582())
	{
		return 1;
	}
	return 0;
}

int func_686()//Position - 0x20297
{
	switch (func_687())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_687()//Position - 0x202D1
{
	return Global_255F11.f_1.f_B04;
}

bool func_688(int iParam0)//Position - 0x202E2
{
	return (Global_19AC3 && iParam0) != 0;
}

bool func_689(int iParam0)//Position - 0x202F3
{
	return (Global_19AC4 && iParam0) != 0;
}

bool func_690(var uParam0, int iParam1)//Position - 0x20304
{
	return (uParam0 && iParam1) != 0;
}

int func_691()//Position - 0x20313
{
	if (func_698(Global_258ACA))
	{
		return 0;
	}
	if (func_692(CAM::_0xDC9DA9E8789F5246(), 146))
	{
		return 1;
	}
	return 0;
}

int func_692(int iParam0, int iParam1)//Position - 0x2033C
{
	if (Global_18CD5B[iParam0 /*560*/] == iParam1)
	{
		return func_239(iParam0);
	}
	return 0;
}

int func_693()//Position - 0x2035C
{
	if (func_698(Global_258ACA))
	{
		return 0;
	}
	if (func_239(CAM::_0xDC9DA9E8789F5246()))
	{
		return 1;
	}
	return 0;
}

bool func_694()//Position - 0x20383
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1406A7, 0);
}

bool func_695()//Position - 0x20394
{
	return Global_14083A;
}

void func_696(int iParam0, int iParam1)//Position - 0x203A0
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_17();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_615(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, iParam0))
			{
				MISC::SET_BIT(&iVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_697(int iParam0)//Position - 0x203FD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_14137C == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_166())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_686())
		{
			if (Global_440000.f_2032F == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_15(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		iVar0 = 0;
	}
	if (func_685())
	{
		iVar0 = 0;
	}
	Global_25866F = 1;
	return iVar0;
}

int func_698(int iParam0)//Position - 0x20469
{
	switch (iParam0)
	{
		case 131:
			if (Global_40001.f_2C0C)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_40001.f_2C0E)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_40001.f_2C0B)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_40001.f_2C0F)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_40001.f_2C10)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_40001.f_2C11)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_40001.f_2C0D)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_40001.f_2C12)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_40001.f_2C13)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_40001.f_2C14)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_40001.f_2C15)
			{
				return 1;
			}
			break;
		
		case 236:
			break;
	}
	return 0;
}

void func_699(int iParam0)//Position - 0x2057F
{
	Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/] = iParam0;
}

void func_700(int iParam0)//Position - 0x20594
{
	Global_25875B = iParam0;
}

void func_701(int iParam0)//Position - 0x205A2
{
	if (func_198())
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 0))
			{
				if ((((func_703(60000) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_410()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && func_427(0, 1, 1, 1))
				{
					if (!func_737())
					{
						func_702("UW_HELP1", func_624(), func_623(1), 30000);
					}
					else
					{
						func_702("UW_HELP1C", func_624(), func_623(1), 30000);
					}
					func_425(0);
					unk_0x1190AB7024CBD8CB(4294967295, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
					MISC::SET_BIT(&iLocal_114, 0);
				}
			}
			break;
	}
}

void func_702(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x20654
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam3);
}

bool func_703(int iParam0)//Position - 0x20677
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_24D46D, HUD::_0x13C4B962653A5280())) > iParam0;
}

void func_704()//Position - 0x20692
{
	int iVar0;
	
	GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_115, 15);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_705(iVar0);
		iVar0++;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 15))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 15))
		{
			MISC::SET_BIT(&(Global_1806E7.f_1), 15);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 15))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 15);
	}
}

void func_705(int iParam0)//Position - 0x20701
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_7[iParam0]))
	{
		if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), 0))
		{
			if (Local_110.f_F1 == 0)
			{
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), 0))
		{
			if (!func_198())
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1, iParam0))
				{
					if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 15))
						{
							if (PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330()) == NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]))
							{
								MISC::SET_BIT(&iLocal_115, 15);
							}
						}
						if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), 0))
						{
							if (func_709("UW_HELP2", func_624()) || func_709("UW_HELP2C", func_624()))
							{
								GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
							}
							if (!func_416(CAM::_0xDC9DA9E8789F5246()))
							{
								func_629(1);
							}
							iVar0 = func_708(AUDIO::_0x0626A247D2405330(), 0);
							if (func_622("UW_HELP1", func_624(), func_623(1)) || func_622("UW_HELP1C", func_624(), func_623(1)))
							{
								GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
							}
							if (Local_110.f_1CF != 4294967295)
							{
								if (iVar0 > (Local_110.f_1CF - 2))
								{
									iVar0 = (Local_110.f_1CF - 2);
									if (iVar0 < 4294967295)
									{
										iVar0 = 4294967295;
									}
								}
							}
							MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), (0 + iVar0 + 1));
							MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1), iParam0);
							Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_9 = iParam0;
							PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 398, true);
							func_190();
							iLocal_598 = iVar0;
						}
						else if (Local_110.f_F1 == 0)
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 1))
							{
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 0)
								{
									if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), unk_0x8000C77B5F336760(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), 1)) < 2500f)
									{
										if (func_427(0, 1, 1, 1))
										{
											if (!func_737())
											{
												func_707("UW_HELP2", func_624(), 30000);
											}
											else
											{
												func_707("UW_HELP2C", func_624(), 30000);
											}
											func_425(1);
											MISC::SET_BIT(&iLocal_114, 1);
										}
									}
								}
							}
							if (!func_250())
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 2))
								{
									GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_115, 2);
								}
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0)
								{
									if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 4))
									{
										if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 12))
										{
											MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), 12);
										}
										if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
										{
											if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), unk_0x8000C77B5F336760(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), 1)) < 2500f)
											{
												if (func_427(0, 1, 1, 1))
												{
													if (!func_737())
													{
														func_426("UW_COPS", 30000);
													}
													else
													{
														func_426("UW_COPSC", 30000);
													}
													func_425(1);
													MISC::SET_BIT(&iLocal_114, 4);
												}
											}
										}
									}
									else if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), unk_0x8000C77B5F336760(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), 1)) > 10000f)
									{
										GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_114, 4);
									}
								}
								else
								{
									if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 4))
									{
										GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_114, 4);
									}
									if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 12))
									{
										GRAPHICS::_0x35FB78DC42B7BD21(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), 12);
									}
								}
							}
							else
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 12))
								{
									MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), 12);
								}
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 2))
								{
									if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), unk_0x8000C77B5F336760(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), 1)) < 2500f)
									{
										if (func_427(0, 1, 1, 1))
										{
											if (!func_737())
											{
												func_426("UW_PASSMD", 30000);
											}
											else
											{
												func_426("UW_PASSMD", 30000);
											}
											func_425(1);
											MISC::SET_BIT(&iLocal_115, 2);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 == 0)
					{
						if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
						{
							if (!PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), 0))
							{
								iVar2 = 0;
								while (iVar2 < Local_110.f_1C)
								{
									if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, (0 + iVar2)))
									{
										func_8();
										GRAPHICS::_0x35FB78DC42B7BD21(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), (0 + iVar2));
									}
									iVar2++;
								}
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1, iParam0))
								{
									GRAPHICS::_0x35FB78DC42B7BD21(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1), iParam0);
								}
								if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_9 != 4294967295)
								{
									Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_9 = 4294967295;
								}
								if (func_671("UW_TIMEL"))
								{
									GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
								}
								if (func_671("UW_TIMELA"))
								{
									GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
								}
								if (func_416(CAM::_0xDC9DA9E8789F5246()))
								{
									func_629(0);
								}
								PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 398, false);
							}
							else
							{
								if (Local_110.f_F1 == 0 && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 4))
								{
									iVar0 = func_708(AUDIO::_0x0626A247D2405330(), 0);
									if (Local_110.f_1CF != 4294967295)
									{
										if (iVar0 > (Local_110.f_1CF - 2))
										{
											iVar0 = (Local_110.f_1CF - 2);
										}
									}
									if (iVar0 != iLocal_598)
									{
										GRAPHICS::_0x35FB78DC42B7BD21(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1), iParam0);
										GRAPHICS::_0x35FB78DC42B7BD21(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), (0 + iLocal_598 + 1));
									}
								}
								bVar1 = false;
								if (func_269())
								{
									if (Local_110.f_19D > 4294967295)
									{
										iVar3 = (Local_110.f_19D - func_124(&(Local_110.f_146), 0, 0));
										if (iVar3 < 2000)
										{
											bVar1 = true;
										}
									}
								}
								func_706(bVar1);
								if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0])) == joaat("RHINO"))
								{
									unk_0xB02B38352EE25A66(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]));
								}
								if (!func_21(&uLocal_128))
								{
									func_19(&uLocal_128, 0, 0);
								}
								else if (func_18(&uLocal_128, 2000, 0))
								{
									if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 9) || !func_737())
									{
										if (func_671("UW_MINV"))
										{
										}
										if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 5))
										{
											if (Local_110.f_1C > 1 || (Local_110.f_1C == 1 && func_110() > 1))
											{
												if (func_21(&(Local_110.f_146)))
												{
													if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
													{
														if (func_110() > 1)
														{
															func_426("UW_TIMELA", 30000);
														}
														else
														{
															func_426("UW_TIMEL", 30000);
														}
														func_425(1);
														MISC::SET_BIT(&iLocal_114, 5);
													}
												}
											}
										}
									}
									else if (func_737())
									{
										if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 9))
										{
											if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0])) != joaat("VALKYRIE"))
											{
												if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 14))
												{
													if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
													{
														func_426("UW_MINV", 30000);
														func_425(1);
														MISC::SET_BIT(&iLocal_114, 14);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (Local_110.f_F1 == 0)
					{
						if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0])) == joaat("VALKYRIE"))
						{
							if (!func_671("UW_VALK") && !func_671("UW_VALKC"))
							{
								HUD::CLEAR_ALL_HELP_MESSAGES();
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 8))
								{
									GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_114, 8);
								}
							}
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 8))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									iVar6 = 0;
									iVar4 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0])) + 1;
									iVar5 = 0;
									while (iVar5 < iVar4)
									{
										if (!VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), (iVar5 - 1), 0))
										{
											iVar6++;
										}
										iVar5++;
									}
									if (iVar6 == 1)
									{
										if (!func_737())
										{
											func_426("UW_VALK", 30000);
										}
										else
										{
											func_426("UW_VALKC", 30000);
										}
										func_425(1);
										MISC::SET_BIT(&iLocal_114, 8);
									}
									if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 8))
									{
										if (func_737())
										{
											iVar7 = 0;
											iVar7 = 0;
											while (iVar7 < 4)
											{
												if (!bVar8)
												{
													if (iVar7 != iParam0)
													{
														iVar5 = 0;
														iVar6 = 0;
														if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar7]))
														{
															if (func_107(Local_110.f_7[iVar7]))
															{
																iVar5 = 0;
																while (iVar5 < iVar4)
																{
																	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_110.f_7[iVar7]), (iVar5 - 1), 0))
																	{
																		iVar6++;
																	}
																	iVar5++;
																}
																if (iVar6 > 1)
																{
																	bVar8 = true;
																}
															}
														}
													}
												}
												iVar7++;
											}
											if (!bVar8)
											{
												func_426("UW_VALKC", 30000);
												func_425(1);
												MISC::SET_BIT(&iLocal_114, 8);
											}
										}
									}
								}
							}
						}
					}
					if (Local_110.f_F1 == 1)
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1, iParam0))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 6))
							{
								if (func_107(Local_110.f_7[iParam0]))
								{
									if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_110.f_7[iParam0])))
										{
											if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 7))
											{
												if ((PAD::IS_CONTROL_JUST_PRESSED(0, 75) || PAD::IS_CONTROL_PRESSED(0, 75)) || unk_0xE11F00B4AC919F45(0, 75))
												{
													MISC::SET_BIT(&iLocal_114, 7);
												}
											}
											if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 7))
											{
												if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
												{
													if (func_737())
													{
														func_426("UW_EXITVC", 30000);
													}
													else
													{
														func_426("UW_EXITV", 30000);
													}
													func_425(1);
													MISC::SET_BIT(&iLocal_114, 6);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else
			{
				iVar10 = 0;
				while (iVar10 < 4)
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_7[iVar10]))
					{
						if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(NETWORK::NET_TO_VEH(Local_110.f_7[iVar10]), 0))
						{
							if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_110.f_7[iVar10]), 0))
							{
								bVar11 = true;
							}
						}
					}
					iVar10++;
				}
				if (bVar11)
				{
					if (func_267(0))
					{
						iVar9 = func_268(2480, 4294967295, 0);
						GRAPHICS::_0x35FB78DC42B7BD21(&iVar9, 0);
						func_483(2480, iVar9, 4294967295, 1, 0);
						func_659();
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 9))
						{
							GRAPHICS::_0x35FB78DC42B7BD21(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), 9);
						}
					}
					if (func_267(8))
					{
						iVar9 = func_268(2480, 4294967295, 0);
						GRAPHICS::_0x35FB78DC42B7BD21(&iVar9, 8);
						func_483(2480, iVar9, 4294967295, 1, 0);
						func_659();
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 9))
						{
							GRAPHICS::_0x35FB78DC42B7BD21(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), 9);
						}
					}
				}
				else
				{
					if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0)
					{
						Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 = 0;
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 12))
					{
						MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), 12);
					}
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 14))
				{
					if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
					{
						if (func_107(Local_110.f_7[iParam0]))
						{
							if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), unk_0x8000C77B5F336760(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), 1)) < 2500f)
							{
								if (func_427(0, 1, 1, 1))
								{
									if (!func_259(129, 0, 0))
									{
										if (!func_737())
										{
											func_426("UW_TUT", 4294967295);
										}
										else
										{
											func_426("UW_TUTC", 4294967295);
										}
										func_425(1);
										MISC::SET_BIT(&iLocal_115, 14);
									}
									else
									{
										if (!func_737())
										{
											func_426("UW_HIDE", 4294967295);
										}
										else
										{
											func_426("UW_HIDEC", 4294967295);
										}
										func_425(1);
										MISC::SET_BIT(&iLocal_115, 14);
									}
								}
							}
						}
					}
				}
			}
			if (func_837(CAM::_0xDC9DA9E8789F5246(), 1, 1) && Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_1 != 0)
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11E2, 1))
				{
					MISC::SET_BIT(&(Global_26862F.f_11E2), 1);
				}
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11E2, 1))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11E2), 1);
			}
		}
	}
}

void func_706(bool bParam0)//Position - 0x21296
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 91, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 65, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 105, 1);
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
	PAD::DISABLE_CONTROL_ACTION(0, 51, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
}

void func_707(char* sParam0, int iParam1, int iParam2)//Position - 0x213CC
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam2);
}

int func_708(int iParam0, int iParam1)//Position - 0x213E9
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

int func_709(char* sParam0, int iParam1)//Position - 0x2146E
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_710()//Position - 0x21487
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_7[iVar0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_7[iVar0]))
		{
			iVar1 = NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				unk_0x6C862EE8B889BA01(iVar1, 1);
			}
		}
		iVar0++;
	}
}

void func_711(vector3 vParam0)//Position - 0x214EC
{
	Global_247C09 = { vParam0 };
	Global_247C0C = 1;
}

void func_712()//Position - 0x21503
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_728(iVar0);
				break;
			
			case 171:
				func_713(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_713(int iParam0)//Position - 0x2154F
{
	int iVar0;
	
	SCRIPT::GET_EVENT_DATA(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case 791943758:
			func_727(iParam0);
			break;
		
		case 2308767155:
			func_726(iParam0);
			break;
		
		case 350833352:
			func_725(iParam0);
			break;
		
		case 1761194714:
			func_724(iParam0);
			break;
		
		case 1037931977:
			func_723(iParam0);
			break;
		
		case 1108012350:
			func_720(iParam0);
			break;
		
		case 3796296968:
			func_714(iParam0);
			break;
	}
}

void func_714(int iParam0)//Position - 0x215D2
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		iVar4 = vVar0.z;
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_49[iVar4]))
		{
			return;
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_6, iVar4))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_10F, iVar4))
			{
				if (func_98(iVar4))
				{
					if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_110.f_49[iVar4]), 0))
					{
						if (NETWORK::_NETWORK_GET_DESROYER_OF_ENTITY(CAM::_0xDC9DA9E8789F5246(), NETWORK::NET_TO_VEH(Local_110.f_49[iVar4]), &uVar3))
						{
							bVar6 = true;
						}
					}
					else if (unk_0x0CAAC509F2C1F67B(CAM::_0xDC9DA9E8789F5246(), NETWORK::NET_TO_VEH(Local_110.f_49[iVar4]), &uVar3))
					{
						bVar6 = true;
					}
				}
				else if (!func_737())
				{
					if (Local_110.f_1D1[0 /*4*/].f_1 > 0)
					{
						iVar7 = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_1D1[0 /*4*/].f_2);
						if (iVar7 != func_26())
						{
							if (iVar7 == CAM::_0xDC9DA9E8789F5246())
							{
								bVar6 = true;
							}
						}
					}
					else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[0]))
					{
						if (func_107(Local_110.f_7[0]))
						{
							iVar9 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_7[0]), 4294967295, 0);
							if (iVar9 != 0)
							{
								if (PED::IS_PED_A_PLAYER(iVar9))
								{
									iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar9);
									if (iVar8 == CAM::_0xDC9DA9E8789F5246())
									{
										bVar6 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar6)
		{
			if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 < 2)
			{
				iVar2 = func_719();
				iVar10 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_49[iVar4]));
				iVar5 = iVar4 * 4;
				if (func_718(iVar10))
				{
					iVar1 = func_42(iVar10);
					iVar12 = iVar5;
					while (iVar12 <= (iVar5 + (iVar1 - 1)))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_30[iVar12]) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar12)], func_88(iVar12)))
						{
							iVar11++;
							MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar12)]), func_88(iVar12));
						}
						iVar12++;
					}
					Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8 = (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8 + iVar11);
					iVar2 = (iVar2 * iVar11);
				}
				else
				{
					Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8++;
				}
				if (Local_111.f_B == 0)
				{
					Local_111.f_B = NETWORK::_GET_POSIX_TIME();
				}
				if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8 <= func_717())
				{
					Local_111.f_7 = (Local_111.f_7 + iVar2);
					func_716(0, "", 3419251281, 153786435, iVar2, 1, 4294967295, 0);
					func_715();
				}
			}
			MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_6), iVar4);
		}
	}
}

void func_715()//Position - 0x2186B
{
	if (!func_21(&uLocal_587) || (func_21(&uLocal_587) && func_18(&uLocal_587, 2000, 0)))
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Kill_List_Counter", "GTAO_FM_Events_Soundset", 0);
		func_104(&uLocal_587);
		func_19(&uLocal_587, 0, 0);
	}
}

var func_716(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x218B9
{
	return func_468(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

int func_717()//Position - 0x218D5
{
	if (func_737())
	{
		return Global_40001.f_2BC1;
	}
	return Global_40001.f_2B84;
}

bool func_718(int iParam0)//Position - 0x218F8
{
	return (((iParam0 == joaat("INSURGENT") || iParam0 == joaat("LAZER")) || iParam0 == joaat("BUZZARD")) || iParam0 == joaat("MESA3"));
}

int func_719()//Position - 0x21932
{
	if (func_737())
	{
		return Global_40001.f_2BC0;
	}
	return Global_40001.f_2B83;
}

void func_720(int iParam0)//Position - 0x21955
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		iVar4 = vVar0.z;
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_6, iVar4))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_10F, iVar4))
			{
				if (func_722(iVar4))
				{
					bVar6 = true;
				}
				else if (!func_721(iVar4))
				{
					if (func_98(iVar4))
					{
						if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_110.f_49[iVar4]), 0))
						{
							if (NETWORK::_NETWORK_GET_DESROYER_OF_ENTITY(CAM::_0xDC9DA9E8789F5246(), NETWORK::NET_TO_VEH(Local_110.f_49[iVar4]), &uVar3))
							{
								bVar6 = true;
							}
						}
						else if (unk_0x0CAAC509F2C1F67B(CAM::_0xDC9DA9E8789F5246(), NETWORK::NET_TO_VEH(Local_110.f_49[iVar4]), &uVar3))
						{
							bVar6 = true;
						}
					}
					else if (!func_737())
					{
						if (Local_110.f_1D1[0 /*4*/].f_1 > 0)
						{
							iVar7 = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_1D1[0 /*4*/].f_2);
							if (iVar7 != func_26())
							{
								if (iVar7 == CAM::_0xDC9DA9E8789F5246())
								{
									bVar6 = true;
								}
							}
						}
						else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[0]))
						{
							if (func_107(Local_110.f_7[0]))
							{
								iVar9 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_7[0]), 4294967295, 0);
								if (iVar9 != 0)
								{
									if (PED::IS_PED_A_PLAYER(iVar9))
									{
										iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar9);
										if (iVar8 == CAM::_0xDC9DA9E8789F5246())
										{
											bVar6 = true;
										}
									}
								}
							}
						}
					}
				}
				if (bVar6)
				{
					if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 < 2)
					{
						iVar1 = func_42(joaat("SAVAGE"));
						iVar5 = iVar4 * 4;
						iVar11 = 0;
						iVar10 = iVar5;
						while (iVar10 <= (iVar5 + (iVar1 - 1)))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_30[iVar10]) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar10)], func_88(iVar10)))
							{
								iVar11++;
								MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar10)]), func_88(iVar10));
							}
							iVar10++;
						}
						Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8 = (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8 + iVar11);
						iVar2 = (iVar2 * iVar11);
						if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8 <= func_717())
						{
							iVar2 = func_719();
							iVar2 = (iVar2 * iVar1);
							Local_111.f_7 = (Local_111.f_7 + iVar2);
							func_716(0, "", 3419251281, 153786435, iVar2, 1, 4294967295, 0);
							func_715();
							if (Local_111.f_B == 0)
							{
								Local_111.f_B = NETWORK::_GET_POSIX_TIME();
							}
						}
						MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_6), iVar4);
					}
				}
			}
		}
	}
}

int func_721(int iParam0)//Position - 0x21BD1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_113[iVar0 /*18*/].f_B[iParam0] > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_722(int iParam0)//Position - 0x21C11
{
	int iVar0;
	
	if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_B[iParam0] == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (iVar0 != NETSHOP::_NETWORK_SHOP_BASKET_START())
			{
				if (Local_113[iVar0 /*18*/].f_B[iParam0] > Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_B[iParam0])
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_723(int iParam0)//Position - 0x21C7F
{
	vector3 vVar0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("am_kill_list", 4294967295, 0) != func_26())
		{
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			MISC::SET_BIT(&(Local_110.f_1D0), vVar0.z);
		}
	}
}

void func_724(int iParam0)//Position - 0x21CBC
{
	vector3 vVar0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		MISC::SET_BIT(&uLocal_574, vVar0.z);
	}
}

void func_725(int iParam0)//Position - 0x21CDF
{
	vector3 vVar0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		MISC::SET_BIT(&uLocal_575, vVar0.z);
	}
}

void func_726(int iParam0)//Position - 0x21D02
{
	vector3 vVar0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(vVar0.z)], func_88(vVar0.z)))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(vVar0.z)]), func_88(vVar0.z));
		}
	}
}

void func_727(int iParam0)//Position - 0x21D5F
{
	vector3 vVar0;
	int iVar1;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		iVar1 = vVar0.z;
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_6, iVar1))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_6), iVar1);
		}
	}
}

void func_728(int iParam0)//Position - 0x21DA2
{
	struct<4> Var0;
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
	var uVar12;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 11))
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_6, iVar1))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_10F, iVar1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var0))
					{
						if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_49[iVar1]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_110.f_49[iVar1])))
								{
									if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_VEH(Local_110.f_49[iVar1]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
										{
											if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
											{
												if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == AUDIO::_0x0626A247D2405330())
												{
													if (Var0.f_3)
													{
														iVar4 = ENTITY::GET_ENTITY_MODEL(Var0);
														if (Local_110.f_1B == joaat("HYDRA"))
														{
															if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 < 2)
															{
																iVar7 = func_719();
																if (func_718(iVar4))
																{
																	iVar2 = func_42(iVar4);
																	Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8 = (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8 + iVar2);
																	iVar7 = (iVar7 * iVar2);
																}
																else
																{
																	Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8++;
																}
																if (Local_111.f_B == 0)
																{
																	Local_111.f_B = NETWORK::_GET_POSIX_TIME();
																}
																if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8 <= func_717())
																{
																	Local_111.f_7 = (Local_111.f_7 + iVar7);
																	func_716(0, "", 3419251281, 153786435, iVar7, 1, 4294967295, 0);
																	func_715();
																}
															}
															MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_6), iVar1);
														}
														else if (iVar4 == joaat("BUZZARD"))
														{
															iVar9 = 4294967295;
															iVar9 = 4294967295;
															while (iVar9 <= 3)
															{
																iVar6 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_49[iVar1]), iVar9, 0);
																if (iVar6 != 0)
																{
																	iVar8 = func_729(iVar6);
																	if (iVar8 > 4294967295)
																	{
																		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_110[func_89(iVar8)], func_88(iVar8)))
																		{
																			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar8)], func_88(iVar8)))
																			{
																				MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar8)]), func_88(iVar8));
																				iVar7 = func_719();
																				Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8++;
																				if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8 <= func_717())
																				{
																					Local_111.f_7 = (Local_111.f_7 + iVar7);
																					func_716(0, "", 3419251281, 153786435, iVar7, 1, 4294967295, 0);
																					func_715();
																				}
																				if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_110.f_30[iVar8])))
																				{
																					func_90(&(Local_122[iVar8 /*8*/]));
																				}
																			}
																		}
																	}
																}
																iVar9++;
															}
															MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_6), iVar1);
														}
													}
													else if (!func_107(Local_110.f_49[iVar1]))
													{
													}
												}
												else if (Var0.f_3)
												{
													if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)))
													{
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Local_110.f_1B != joaat("HYDRA"))
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_110[func_89(iVar1)], func_88(iVar1)))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar1)], func_88(iVar1)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var0))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_30[iVar1]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_110.f_30[iVar1])))
									{
										if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_PED(Local_110.f_30[iVar1]))
										{
											if (Var0.f_3)
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(iVar5))
														{
															if (iVar5 == AUDIO::_0x0626A247D2405330())
															{
																if (Var0.f_3)
																{
																	iVar7 = func_719();
																	if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 < 2)
																	{
																		Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8++;
																		if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8 <= func_717())
																		{
																			func_716(0, "", 3419251281, 153786435, iVar7, 1, 4294967295, 0);
																			Local_111.f_7 = (Local_111.f_7 + iVar7);
																			func_715();
																		}
																	}
																	if (Local_111.f_B == 0)
																	{
																		Local_111.f_B = NETWORK::_GET_POSIX_TIME();
																	}
																	MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar1)]), func_88(iVar1));
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (iVar1 < 5)
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_6, iVar1))
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_10F, iVar1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var0))
							{
								if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_49[iVar1]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_110.f_49[iVar1])))
										{
											if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_VEH(Local_110.f_49[iVar1]))
											{
												if (ENTITY::GET_ENTITY_MODEL(Var0) == joaat("SAVAGE"))
												{
													if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar1)], func_88(iVar1)))
													{
														if (Var0.f_3)
														{
															if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
															{
																if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
																{
																	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
																	if (PED::IS_PED_A_PLAYER(iVar5))
																	{
																		if (iVar5 == AUDIO::_0x0626A247D2405330())
																		{
																			if (Var0.f_3)
																			{
																				if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 < 2)
																				{
																					iVar2 = func_42(joaat("SAVAGE"));
																					Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8 = (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8 + iVar2);
																					iVar7 = func_719();
																					iVar7 = (iVar7 * iVar2);
																					if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8 <= func_717())
																					{
																						func_716(0, "", 3419251281, 153786435, iVar7, 1, 4294967295, 0);
																						Local_111.f_7 = (Local_111.f_7 + iVar7);
																						func_715();
																						if (Local_111.f_B == 0)
																						{
																							Local_111.f_B = NETWORK::_GET_POSIX_TIME();
																						}
																					}
																					iVar10 = iVar1 * 4;
																					MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar10)]), func_88(iVar10));
																					MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar10 + 1)]), func_88(iVar10 + 1));
																					MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar10 + 2)]), func_88(iVar10 + 2));
																					MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar10 + 3)]), func_88(iVar10 + 3));
																					MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_6), iVar1);
																				}
																			}
																		}
																	}
																	else if (func_722(iVar1))
																	{
																		if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 < 2)
																		{
																			iVar2 = func_42(joaat("SAVAGE"));
																			Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8 = (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8 + iVar2);
																			if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8 <= func_717())
																			{
																				iVar7 = func_719();
																				iVar7 = (iVar7 * iVar2);
																				Local_111.f_7 = (Local_111.f_7 + iVar7);
																				func_716(0, "", 3419251281, 153786435, iVar7, 1, 4294967295, 0);
																				func_715();
																				if (Local_111.f_B == 0)
																				{
																					Local_111.f_B = NETWORK::_GET_POSIX_TIME();
																				}
																			}
																			iVar10 = iVar1 * 4;
																			MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar10)]), func_88(iVar10));
																			MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar10 + 1)]), func_88(iVar10 + 1));
																			MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar10 + 2)]), func_88(iVar10 + 2));
																			MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar10 + 3)]), func_88(iVar10 + 3));
																			MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_6), iVar1);
																		}
																	}
																	else if (func_721(iVar1))
																	{
																	}
																	else if (unk_0x0CAAC509F2C1F67B(iVar11, Var0, &uVar12))
																	{
																		if (iVar11 == CAM::_0xDC9DA9E8789F5246())
																		{
																			if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 < 2)
																			{
																				iVar2 = func_42(joaat("SAVAGE"));
																				Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8 = (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8 + iVar2);
																				if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8 <= func_717())
																				{
																					iVar7 = func_719();
																					iVar7 = (iVar7 * iVar2);
																					Local_111.f_7 = (Local_111.f_7 + iVar7);
																					func_716(0, "", 3419251281, 153786435, iVar7, 1, 4294967295, 0);
																					func_715();
																					if (Local_111.f_B == 0)
																					{
																						Local_111.f_B = NETWORK::_GET_POSIX_TIME();
																					}
																				}
																				iVar10 = iVar1 * 4;
																				MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar10)]), func_88(iVar10));
																				MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar10 + 1)]), func_88(iVar10 + 1));
																				MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar10 + 2)]), func_88(iVar10 + 2));
																				MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar10 + 3)]), func_88(iVar10 + 3));
																				MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_6), iVar1);
																			}
																		}
																	}
																}
															}
														}
														else
														{
															if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
															{
																if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
																{
																	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
																	if (PED::IS_PED_A_PLAYER(iVar5))
																	{
																		if (iVar5 == AUDIO::_0x0626A247D2405330())
																		{
																			iVar3 = NETWORK::_GET_POSIX_TIME();
																			Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_B[iVar1] = iVar3;
																		}
																	}
																}
															}
															if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0), 0))
															{
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				iVar1++;
			}
			iVar1 = 20;
			while (iVar1 <= 23)
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_110[func_89(iVar1)], func_88(iVar1)))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar1)], func_88(iVar1)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var0))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_30[iVar1]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_110.f_30[iVar1])))
									{
										if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_PED(Local_110.f_30[iVar1]))
										{
											if (Var0.f_3)
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(iVar5))
														{
															if (iVar5 == AUDIO::_0x0626A247D2405330())
															{
																if (Var0.f_3)
																{
																	if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_11 < 2)
																	{
																		Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8++;
																		if (Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8 <= func_717())
																		{
																			iVar7 = func_719();
																			Local_111.f_7 = (Local_111.f_7 + iVar7);
																			if (Local_111.f_B == 0)
																			{
																				Local_111.f_B = NETWORK::_GET_POSIX_TIME();
																			}
																			func_716(0, "", 3419251281, 153786435, iVar7, 1, 4294967295, 0);
																			func_715();
																		}
																	}
																	MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar1)]), func_88(iVar1));
																}
															}
														}
													}
												}
												else
												{
													MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_3[func_89(iVar1)]), func_88(iVar1));
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_30[iVar1]))
				{
				}
				iVar1++;
			}
		}
	}
}

int func_729(int iParam0)//Position - 0x228A5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (iVar0 == 4294967295)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_30[iVar1]))
			{
				if (NETWORK::NET_TO_PED(Local_110.f_30[iVar1]) == iParam0)
				{
					iVar0 = iVar1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_730()//Position - 0x228EF
{
	int iVar0;
	int iVar1;
	
	if (Local_110.f_1B != joaat("HYDRA"))
	{
		if (iLocal_600 == 0)
		{
			iLocal_600 = 20;
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_30[iLocal_600]))
		{
			if (!func_31(Local_110.f_30[iLocal_600]))
			{
				iVar0 = unk_0xAC0AAEE12CCAE6C1(NETWORK::NET_TO_PED(Local_110.f_30[iLocal_600]));
				if (iLocal_601[iLocal_600] != iVar0)
				{
					iLocal_601[iLocal_600] = iVar0;
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_110.f_30[iLocal_600], 1);
				}
			}
		}
		iLocal_600++;
		if (iLocal_600 == 23)
		{
			iLocal_600 = 20;
		}
	}
	if (Local_110.f_1B != joaat("HYDRA") && Local_110.f_1B != joaat("RHINO"))
	{
		if (!bLocal_604)
		{
			if (func_96() == 5)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_49[iVar1]))
					{
						if (func_107(Local_110.f_49[iVar1]))
						{
							if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_49[iVar1])) == joaat("SAVAGE"))
							{
								NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_110.f_49[iVar1], 1);
								bLocal_604 = true;
							}
						}
					}
					iVar1++;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_49[iLocal_602]))
	{
		if (func_107(Local_110.f_49[iLocal_602]))
		{
			iVar0 = unk_0xAC0AAEE12CCAE6C1(NETWORK::NET_TO_PED(Local_110.f_49[iLocal_602]));
			if (iLocal_603[iLocal_602] != iVar0)
			{
				iLocal_603[iLocal_602] = iVar0;
				if (!bLocal_604)
				{
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_110.f_49[iLocal_602], 1);
				}
			}
		}
	}
	iLocal_602++;
	if (iLocal_602 == 5)
	{
		iLocal_602 = 0;
	}
}

void func_731()//Position - 0x22A76
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar9 = 4294967295;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_576, iVar0))
		{
			if (Local_110.f_55[iVar0] != 2)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_576, iVar0);
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_30[iVar0]))
		{
			func_735(iVar0);
			if (!func_31(Local_110.f_30[iVar0]))
			{
				switch (Local_110.f_55[iVar0])
				{
					case 1:
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_30[iVar0]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), 0))
							{
								iVar2 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), 0);
								iVar1 = ENTITY::GET_ENTITY_MODEL(iVar2);
								if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar1))
								{
									if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), 3021937204) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), 3021937204) != 0)
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 4294967295, 0) == NETWORK::NET_TO_PED(Local_110.f_30[iVar0]))
										{
											iVar5 = func_27();
											if (iVar5 != func_26())
											{
												iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
												if (!PED::IS_PED_INJURED(iVar6))
												{
													if (func_25(iVar2, iVar6, 1) > 250f)
													{
														vVar3 = { unk_0x8000C77B5F336760(iVar6, 1) };
														BRAIN::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), iVar2, 0, iVar6, vVar3, 4, 50f, 5f, -1f, 0, 100, -1f, 4096);
													}
												}
											}
										}
									}
								}
								else if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar1))
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 4294967295, 0) == NETWORK::NET_TO_PED(Local_110.f_30[iVar0]))
									{
										iVar11 = 1;
										iVar10 = (iVar0 / 4);
									}
									if ((BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), 3021937204) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), 3021937204) != 0) || ((iVar11 && iVar10 < 5) && iLocal_116[iVar10] != Local_110.f_6E[iVar10]))
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 4294967295, 0) == NETWORK::NET_TO_PED(Local_110.f_30[iVar0]))
										{
											iVar9 = Local_110.f_6E[iVar10];
											if (iVar9 > 4294967295)
											{
												iVar5 = PLAYER::INT_TO_PLAYERINDEX(iVar9);
												if (iVar5 != func_26())
												{
													iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
													if (!PED::IS_PED_INJURED(iVar6))
													{
														vVar3 = { unk_0x8000C77B5F336760(iVar6, 1) };
														BRAIN::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), iVar2, 0, iVar6, vVar3, 4, 50f, 5f, -1f, 100, 50, 1);
														if (iLocal_116[iVar10] != Local_110.f_6E[iVar10])
														{
															iLocal_116[iVar10] = Local_110.f_6E[iVar10];
														}
													}
												}
											}
										}
									}
								}
								else if (((BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), 3021937204) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), 3021937204) != 0) && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), 1306903184) != 0) && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), 1306903184) != 1)
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 4294967295, 0) == NETWORK::NET_TO_PED(Local_110.f_30[iVar0]))
									{
										iVar5 = func_27();
										if (iVar5 != func_26())
										{
											iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
											if (!PED::IS_PED_INJURED(iVar6))
											{
												fVar7 = func_25(iVar2, iVar6, 1);
												if (fVar7 > 500f)
												{
													BRAIN::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), unk_0x8000C77B5F336760(iVar6, 1), 2f, iVar2, 1, 786469, 3212836864, 0, 1101004800, 0, 30f, 1082130432);
												}
												else if (fVar7 > 250f)
												{
													BRAIN::TASK_VEHICLE_MISSION_PED_TARGET(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), iVar2, iVar6, 4, 30f, 786469, 5f, 5f, 1);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_30[iVar0]))
						{
							if (!func_22())
							{
								if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), 2852500626) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), 2852500626) != 0)
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), 0))
									{
										if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_576, iVar0))
										{
											iVar8 = func_734(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), 1133084672);
											if (iVar8 > 4294967295)
											{
												BRAIN::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), 299f, 0);
											}
											else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_576, iVar0))
											{
												func_733(iVar0, func_102(1));
												MISC::SET_BIT(&iLocal_576, iVar0);
											}
										}
									}
									else
									{
										BRAIN::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), 299f, 0);
									}
								}
							}
						}
						break;
					
					case 3:
						if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), 4043842218) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), 4043842218) != 0)
						{
							vVar4 = { func_732() };
							NETWORK::_0x5E3AA4CA2B6FB0EE(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]));
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), 1);
							BRAIN::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(Local_110.f_30[iVar0]), vVar4, 10000f, 999999, 0, 0);
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

Vector3 func_732()//Position - 0x22F9E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
		{
			return unk_0x8000C77B5F336760(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0);
		}
		iVar0++;
	}
	return Local_110.f_1E[0 /*3*/];
}

void func_733(int iParam0, int iParam1)//Position - 0x22FE4
{
	vector3 vVar0;
	
	vVar0.x = 1037931977;
	vVar0.y = CAM::_0xDC9DA9E8789F5246();
	vVar0.z = iParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iParam1);
	}
}

int func_734(int iParam0, float fParam1)//Position - 0x23016
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	int iVar5;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar3]))
		{
			if (func_107(Local_110.f_7[iVar3]))
			{
				iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_7[iVar3]), 4294967295, 0);
				if (!PED::IS_PED_INJURED(iVar5))
				{
					if (PED::IS_PED_A_PLAYER(iVar5))
					{
						vVar4 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_VEH(Local_110.f_7[iVar3]), 1) };
						fVar2 = func_527(iParam0, vVar4, 1);
						if (fVar2 < fVar1)
						{
							if (fVar2 < fParam1)
							{
								fVar1 = fVar2;
								iVar0 = iVar3;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

void func_735(int iParam0)//Position - 0x230BB
{
	int iVar0;
	
	return;
	if (!func_31(Local_110.f_30[iParam0]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_30[iParam0]))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_30[iParam0])))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_110.f_30[iParam0]), 0);
				if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar0)) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
					{
						unk_0x65E471E4A2D56226(NETWORK::NET_TO_PED(Local_110.f_30[iParam0]), 5, 0);
					}
				}
			}
		}
	}
}

void func_736(vector3 vParam0)//Position - 0x23145
{
	Global_1806E7.f_6 = { vParam0 };
}

bool func_737()//Position - 0x23159
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 8);
}

void func_738(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2316B
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_739("kwUfKUus6EuQyNSL8KpY-w");
					func_739("yMTOFLfO2UKwzKrmgPP7kg");
					func_739("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_739("tP5HSeCA0UiHnkRzakdO2Q");
					func_739("uEkrqoerQEmQ0uZRtp4rkw");
					func_739("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_739("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_739("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_739("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_739("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_739("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_739("uEkrqoerQEmQ0uZRtp4rkw");
					func_739("92t91kL3Wkqvl2Kc82cNSA");
					func_739("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_739("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_739("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_739("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_739("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_739("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_739("fOfm7nzMLkav0ldcSCNAzA");
					func_739("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_739("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_739("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_739("Ma78E44OMkGfYPmCPZXUNA");
					func_739("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_739("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_739("gxmtJHj2OUWQDt8nNMy3TQ");
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
							func_739("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_739("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_739("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_739("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_739("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_739("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_739("3AAj-muvN0iHI5IMyGlboA");
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
							func_739("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_739("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_739("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_739("fOfm7nzMLkav0ldcSCNAzA");
							func_739("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_739("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_739("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_739("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_739("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_739("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_739("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_739("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_739("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_739("fOfm7nzMLkav0ldcSCNAzA");
							func_739("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_739("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_739("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_739("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_739("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_739("xIXaDwts7kKz0sbMnwYlCQ");
							break;
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
								case 1:
									func_739("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_739("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_739("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_739("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_739("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_739("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_739("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_739("aGBjo2rKi0yMDLl3a2ATGA");
									func_739("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_739("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_739("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_739("f2lnL6wZPkGWUowu0yLm1Q");
									func_739("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_739("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_739("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_739("W-OJzHlM-0ym9PsIASYZtw");
									func_739("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_739("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_739("TjGz31AMYE6bGCjAIitu6w");
									func_739("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_739("QmlvLMLCwkOvoZlkAstYxw");
									func_739("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_739("BktATxH9R0Wp2x0kWSbqjw");
									func_739("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_739("f2lnL6wZPkGWUowu0yLm1Q");
									break;
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
								case 1:
									func_739("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_739("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_739("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_739("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_739("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_739("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_739("Cl3Gh6-LMkuZ7Z_jPqSE8g");
									break;
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
									func_739("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_739("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_739(char* sParam0)//Position - 0x238F9
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1403FD)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2401A9[iVar1 /*26*/].f_C, 11))
		{
			if (func_740(&(Global_2401A9[iVar1 /*26*/].f_F)) == iVar0)
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2401A9[iVar1 /*26*/].f_D, 26))
				{
					MISC::SET_BIT(&(Global_2401A9[iVar1 /*26*/].f_D), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_740(var uParam0)//Position - 0x2397D
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_C = 4294967295;
	iVar1 = 0;
	iVar2 = func_147(uParam0);
	if (iVar2 == 4294967295)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_741(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_741(var uParam0)//Position - 0x239E4
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_C = 4294967295;
	iVar1 = func_147(uParam0);
	if (iVar1 == 4294967295)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_C2055.f_1A2B5[iVar1 /*13*/];
		
		case 62:
			return Global_E012E.f_24BD[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

void func_742()//Position - 0x23A5B
{
	int iVar0;
	vector3 vVar1;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 12))
	{
		func_190();
	}
	if (func_737())
	{
		if (iLocal_570 != Local_110.f_C)
		{
			iLocal_570 = Local_110.f_C;
			func_190();
		}
	}
	if (!func_198())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_121[iVar0]))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
				{
					if (func_107(Local_110.f_7[iVar0]))
					{
						vVar1 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0) };
						if (!func_743(iVar0, vVar1))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_D, iVar0))
							{
								iLocal_121[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]));
								HUD::SET_BLIP_SPRITE(iLocal_121[iVar0], 429);
								func_192(&(iLocal_121[iVar0]), 29);
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 20))
								{
									HUD::SET_BLIP_FLASHES(iLocal_121[iVar0], 1);
									HUD::SET_BLIP_FLASH_TIMER(iLocal_121[iVar0], 7000);
									MISC::SET_BIT(&iLocal_114, 20);
								}
								HUD::SET_BLIP_PRIORITY(iLocal_121[iVar0], 9);
								if (func_737())
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_121[iVar0], "UW_BLIPC");
								}
								else
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_121[iVar0], "UW_BLIP");
								}
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 3))
								{
									HUD::FLASH_MINIMAP_DISPLAY();
									MISC::SET_BIT(&iLocal_115, 3);
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
			{
				if (!func_107(Local_110.f_7[iVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_121[iVar0]));
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_D, iVar0))
				{
					HUD::REMOVE_BLIP(&(iLocal_121[iVar0]));
				}
			}
			else
			{
				HUD::REMOVE_BLIP(&(iLocal_121[iVar0]));
			}
			iVar0++;
		}
	}
	else
	{
		func_190();
	}
}

int func_743(int iParam0, vector3 vParam1)//Position - 0x23C14
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iParam0)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
			{
				vVar1 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0) };
				if (func_69(vParam1, vVar1, 0))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_121[iVar0]))
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

int func_744()//Position - 0x23C7C
{
	return Local_110;
}

int func_745(int iParam0)//Position - 0x23C86
{
	return Local_113[iParam0 /*18*/];
}

void func_746()//Position - 0x23C95
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 6))
	{
		func_452();
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 6);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 7))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 4) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_360()) && func_837(CAM::_0xDC9DA9E8789F5246(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1806E7.f_1), 7);
				func_426("FME_PASINT", 30000);
				func_425(1);
			}
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 17))
		{
			if (func_250() && !func_245())
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 17);
				MISC::SET_BIT(&(Global_1806E7.f_1), 16);
			}
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_310, 2)) && func_837(CAM::_0xDC9DA9E8789F5246(), 1, 1)) && !Global_10B8E) && !Global_D072) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_768())
			{
				func_426("AMEV_GA_RP", 4294967295);
				if (func_346(CAM::_0xDC9DA9E8789F5246()) != 200)
				{
					func_425(1);
				}
				MISC::SET_BIT(&(Global_1806E7.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_239(CAM::_0xDC9DA9E8789F5246()))
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
		if ((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_360()) && func_837(CAM::_0xDC9DA9E8789F5246(), 1, 1)) && !func_201(CAM::_0xDC9DA9E8789F5246(), 21))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 9);
			func_767(0);
			func_426("FME_TBL00", 4294967295);
			func_425(1);
		}
	}
	if (func_251(CAM::_0xDC9DA9E8789F5246()))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 18))
		{
			if ((func_201(CAM::_0xDC9DA9E8789F5246(), 21) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 20)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1806E7.f_1), 18);
			}
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_360()) && func_837(CAM::_0xDC9DA9E8789F5246(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !Global_26862F.f_12D0)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 18);
				MISC::SET_BIT(&(Global_1806E7.f_1), 19);
				func_426("AMTT_RPAS", 4294967295);
				func_425(1);
			}
		}
	}
	if (((((func_251(CAM::_0xDC9DA9E8789F5246()) && !func_200(CAM::_0xDC9DA9E8789F5246())) && func_188(CAM::_0xDC9DA9E8789F5246()) != 146) && !func_199(CAM::_0xDC9DA9E8789F5246())) && !func_660(CAM::_0xDC9DA9E8789F5246())) && !func_757())
	{
		if (func_665(func_188(CAM::_0xDC9DA9E8789F5246())))
		{
			unk_0x2C60B9CCB9A13F96(CAM::_0xDC9DA9E8789F5246());
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1806E7.f_1), 22);
		}
		if (func_240(CAM::_0xDC9DA9E8789F5246()) || func_663())
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 10))
			{
				if (func_755(func_188(CAM::_0xDC9DA9E8789F5246())))
				{
					if (func_593(0) && !Global_247C05)
					{
						MISC::SET_BIT(&(Global_1806E7.f_1), 9);
					}
					if (!Global_247C05)
					{
						func_450(1);
						MISC::SET_BIT(&(Global_1806E7.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1806E7.f_1), 10);
			}
		}
		if (func_239(CAM::_0xDC9DA9E8789F5246()))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 11))
			{
				if (!Global_16C64.f_8)
				{
					MISC::SET_BIT(&(Global_1806E7.f_1), 12);
					func_448(1);
				}
				if (!func_754())
				{
					MISC::SET_BIT(&(Global_1806E7.f_1), 13);
					func_664();
				}
				if (!Global_247C05)
				{
					MISC::SET_BIT(&(Global_1806E7.f_1), 14);
					if (func_593(0) && !Global_247C05)
					{
						MISC::SET_BIT(&(Global_1806E7.f_1), 9);
					}
					func_450(1);
				}
				MISC::SET_BIT(&(Global_1806E7.f_1), 11);
			}
		}
		else
		{
			func_752(0);
		}
	}
	else
	{
		func_752(1);
	}
	func_747();
	if (func_662(func_188(CAM::_0xDC9DA9E8789F5246())) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1806E7.f_1), 21);
	}
	if ((func_250() && !func_245()) || func_201(CAM::_0xDC9DA9E8789F5246(), 21))
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

void func_747()//Position - 0x241B6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_360())
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
				func_748(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 26))
	{
		func_104(&(Global_1806E7.f_16));
		MISC::SET_BIT(&(Global_1806E7.f_1), 26);
	}
}

void func_748(int iParam0, int iParam1)//Position - 0x24259
{
	if (!func_21(&(Global_1806E7.f_16)))
	{
		func_19(&(Global_1806E7.f_16), 0, 0);
	}
	else if (func_18(&(Global_1806E7.f_16), iParam1, 0))
	{
		if (func_411() > 0)
		{
			func_751(iParam0);
			if (func_671("AMEV_LBD_HELP"))
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			}
			func_104(&(Global_1806E7.f_16));
		}
	}
	else
	{
		func_750(0);
		func_749();
	}
}

void func_749()//Position - 0x242C2
{
	Global_26862F.f_11A7 = 0;
}

void func_750(int iParam0)//Position - 0x242D2
{
	Global_14E0B5.f_44 = iParam0;
}

void func_751(int iParam0)//Position - 0x242E2
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

void func_752(int iParam0)//Position - 0x2432E
{
	if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 11) || (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 10) && iParam0)) || (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 22) && iParam0))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 12))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 12);
			func_448(0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 13))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 13);
			func_753();
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 14) && !func_246(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 14);
			func_450(0);
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 11);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 10);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 22);
	}
}

void func_753()//Position - 0x24409
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1271), 0);
}

bool func_754()//Position - 0x2441D
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1271, 0);
}

int func_755(int iParam0)//Position - 0x24431
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
			return func_239(CAM::_0xDC9DA9E8789F5246());
		
		case 133:
			return (func_663() || func_756(func_187()));
		
		default:
	}
	return 0;
}

int func_756(int iParam0)//Position - 0x244A1
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

int func_757()//Position - 0x244D9
{
	if (((((((((func_766() || func_765()) || func_764()) || func_180()) || (func_763() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_760() && !func_759())) || Global_248A6D) || Global_248A6D.f_1 != 0) || Global_248AB7 != 0) || (func_758() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_758()//Position - 0x2456D
{
	return Global_EC6C9;
}

bool func_759()//Position - 0x24579
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255C02.f_2, 27);
}

int func_760()//Position - 0x2458D
{
	if (func_762() || func_761())
	{
		return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_62 == 8;
	}
	return 0;
}

var func_761()//Position - 0x245BA
{
	return Global_255C02.f_270;
}

bool func_762()//Position - 0x245C9
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255C02.f_2, 11);
}

bool func_763()//Position - 0x245DD
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255C02, 5);
}

bool func_764()//Position - 0x245EE
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255C02, 2);
}

bool func_765()//Position - 0x245FF
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255C02, 20);
}

bool func_766()//Position - 0x24611
{
	return Global_255C02.f_24B;
}

void func_767(int iParam0)//Position - 0x24620
{
	int iVar0;
	
	iVar0 = func_268(2534, 4294967295, 0);
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
	func_483(2534, iVar0, 4294967295, 1, 0);
}

int func_768()//Position - 0x24758
{
	int iVar0;
	
	if (!func_21(&(Global_1806E7.f_F)))
	{
		func_19(&(Global_1806E7.f_F), 0, 0);
		Global_1806E7.f_11 = 0;
	}
	else if (func_18(&(Global_1806E7.f_F), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1806E7.f_11)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1806E7.f_11));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (func_837(iVar0, 1, 1) && func_769(iVar0, 6))
				{
					if (SYSTEM::VDIST(func_59(CAM::_0xDC9DA9E8789F5246()), func_59(iVar0)) < 80f)
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
			func_104(&(Global_1806E7.f_F));
		}
	}
	return 0;
}

int func_769(int iParam0, int iParam1)//Position - 0x24820
{
	int iVar0;
	
	if (Global_1406BF != 0)
	{
		return 0;
	}
	if (!func_487(iParam0))
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

bool func_770()//Position - 0x24859
{
	return Global_1806E7.f_18;
}

bool func_771(int iParam0)//Position - 0x24867
{
	return !func_772(iParam0);
}

int func_772(int iParam0)//Position - 0x24876
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_40001.f_1995)
			{
				return 0;
			}
			if (func_201(CAM::_0xDC9DA9E8789F5246(), 7))
			{
				return 0;
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_40001.f_1996)
			{
				return 0;
			}
			if (func_201(CAM::_0xDC9DA9E8789F5246(), 7))
			{
				return 0;
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_40001.f_1997)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_40001.f_1998)
			{
				return 0;
			}
			if (func_201(CAM::_0xDC9DA9E8789F5246(), 7))
			{
				return 0;
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_773(4))
			{
				return 0;
			}
			if (func_201(CAM::_0xDC9DA9E8789F5246(), 7))
			{
				return 0;
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_773(4))
			{
				return 0;
			}
			if (func_201(CAM::_0xDC9DA9E8789F5246(), 7))
			{
				return 0;
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_773(4))
			{
				return 0;
			}
			if (func_201(CAM::_0xDC9DA9E8789F5246(), 7))
			{
				return 0;
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_773(4))
			{
				return 0;
			}
			if (func_201(CAM::_0xDC9DA9E8789F5246(), 7))
			{
				return 0;
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_773(4))
			{
				return 0;
			}
			if (func_201(CAM::_0xDC9DA9E8789F5246(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_773(4))
			{
				return 0;
			}
			if (func_201(CAM::_0xDC9DA9E8789F5246(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_773(int iParam0)//Position - 0x24BD4
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_837(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iVar0 /*413*/].f_D0, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_774()//Position - 0x24C1A
{
	var uVar0;
	
	func_778(&uVar0);
	if (Global_140842 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_777())
	{
		return 1;
	}
	if (Global_258B0A)
	{
		return 1;
	}
	if (func_776())
	{
		return 1;
	}
	if (func_775(157))
	{
		if (!func_766())
		{
			return 1;
		}
	}
	if (func_775(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_443() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_443()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_775(int iParam0)//Position - 0x24CA4
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_776()//Position - 0x24CBB
{
	return Global_25824F;
}

bool func_777()//Position - 0x24CC7
{
	return Global_255C02.f_246;
}

void func_778(var uParam0)//Position - 0x24CD6
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
					func_779(iVar0);
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

void func_779(int iParam0)//Position - 0x24D49
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_837(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_780(iVar2, &bVar3))
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

int func_780(int iParam0, var uParam1)//Position - 0x24DCA
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, 1);
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

void func_781()//Position - 0x24E29
{
	SYSTEM::WAIT(0);
}

void func_782()//Position - 0x24E36
{
	int iVar0;
	
	func_190();
	if (func_744() == 4 && Local_110.f_1B != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_110.f_1B, 0);
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11E2), 1);
	func_670(19, 0);
	func_652(0);
	if (NETSHOP::_NETWORK_SHOP_BASKET_START() != 4294967295)
	{
		func_787(129, 0, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2, 8));
	}
	func_786(129);
	PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 184, false);
	PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 151, true);
	GRAPHICS::_0x54E22EA2C1956A8D(1f);
	if (iLocal_119 > 0)
	{
		HUD::_0x14621BB1DF14E2B2(iLocal_119);
	}
	if (CAM::_0xDC9DA9E8789F5246() != 4294967295)
	{
		if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 129)
		{
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] = 4294967295;
		}
	}
	if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(AUDIO::_0x0626A247D2405330()) == iLocal_123)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(AUDIO::_0x0626A247D2405330(), iLocal_125);
	}
	func_785();
	func_203(0, 129);
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 22))
	{
		func_455();
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_114, 22);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 9))
	{
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_114, 10))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_STOP_MUSIC");
		}
	}
	if (fLocal_120 != -100f)
	{
		func_530(0, 0);
		NETWORK::NETWORK_SET_TALKER_PROXIMITY(fLocal_120);
	}
	func_529(0);
	if (func_774())
	{
		Local_111.f_5 = 5;
	}
	else if (func_612(2, 0, 0, 0, 0))
	{
		Local_111.f_5 = 6;
	}
	else if (Local_111.f_5 != 1)
	{
		Local_111.f_5 = 2;
	}
	AUDIO::STOP_SOUND(iLocal_573);
	Local_111 = Local_110.f_263;
	Local_111.f_1 = Local_110.f_264;
	Local_111.f_4 = Local_110.f_265;
	Local_111.f_3 = Local_110.f_267;
	if (Local_111.f_9 > 0)
	{
		Local_111.f_A = (NETWORK::_GET_POSIX_TIME() - Local_111.f_9);
	}
	if ((!Global_40001.f_2C7D && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 8)) || (!Global_40001.f_2C7E && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 8)))
	{
		if (Local_111.f_6 > 0)
		{
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_3, 8))
	{
		iVar0 = 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_115, 1))
	{
		func_676(1);
		NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0, 0);
	}
	if (iVar0 == 0)
	{
		func_784(Local_111, Local_110.f_1B, Local_110.f_117, iVar0, 4294967295, 4294967295, 4294967295);
	}
	else if (NETSHOP::_NETWORK_SHOP_BASKET_START() != 4294967295)
	{
		func_784(Local_111, Local_110.f_117, Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_8, iVar0, 4294967295, 4294967295, 4294967295);
	}
	if (func_416(CAM::_0xDC9DA9E8789F5246()))
	{
		func_629(0);
	}
	func_651(0);
	func_700(1);
	func_783();
}

void func_783()//Position - 0x250B6
{
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_784(struct<12> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x250C2
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

void func_785()//Position - 0x25337
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_124);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_123);
}

void func_786(int iParam0)//Position - 0x2534D
{
	if (iParam0 == iParam0)
	{
	}
}

void func_787(int iParam0, bool bParam1, bool bParam2)//Position - 0x2535C
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
	func_822();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_821(func_188(CAM::_0xDC9DA9E8789F5246()));
		func_670(21, 0);
	}
	else
	{
		if ((bParam2 && CAM::_0xDC9DA9E8789F5246() != 4294967295) && func_820(CAM::_0xDC9DA9E8789F5246()) >= 12)
		{
			func_819(2546, 4294967295);
			iVar1 = func_268(2546, 4294967295, 0);
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
		func_675();
		func_818();
		func_817();
		if ((!func_238(CAM::_0xDC9DA9E8789F5246()) && !func_236(CAM::_0xDC9DA9E8789F5246())) && !func_816())
		{
			func_796();
		}
		func_795();
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 1))
		{
			func_452();
		}
		func_794();
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6C5), 2);
		func_545();
		func_793();
	}
	if (unk_0x7922FBF86CF76430(1344549371))
	{
		HUD::OBJECT_DECAL_TOGGLE(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((CAM::_0xDC9DA9E8789F5246() != 4294967295 && !func_201(CAM::_0xDC9DA9E8789F5246(), 21)) && !func_246(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			func_450(0);
			func_448(0);
			func_792();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_616(26, 4294967295))
		{
			Global_258ACA = 4294967295;
			func_614(26, 4294967295);
		}
	}
	if (!func_788())
	{
		Global_263374 = 1;
	}
}

int func_788()//Position - 0x255AE
{
	if (((((!func_390(CAM::_0xDC9DA9E8789F5246()) && !func_371(CAM::_0xDC9DA9E8789F5246())) && func_188(CAM::_0xDC9DA9E8789F5246()) != 146) && !func_791()) && !func_790()) && !func_789(Global_440000.f_2559E))
	{
		return 0;
	}
	return 1;
}

bool func_789(int iParam0)//Position - 0x25610
{
	return iParam0 == 57;
}

int func_790()//Position - 0x2561D
{
	if (Global_440000.f_1FEDE == Global_40001.f_250B)
	{
		return 1;
	}
	return 0;
}

int func_791()//Position - 0x2563E
{
	if ((Global_440000 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_440000.f_5 != 0 || Global_440000.f_2559E > 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 15)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 18)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 19)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 29)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 28)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_792()//Position - 0x256E8
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

void func_793()//Position - 0x2573E
{
	Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_7 = 0;
}

void func_794()//Position - 0x25754
{
	struct<25> Var0;
	
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_15 = 4294967295;
	Global_1806E7 = { Var0 };
}

void func_795()//Position - 0x25783
{
	var uVar0;
	
	Global_141784 = uVar0;
}

void func_796()//Position - 0x25791
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_18), &Global_24C348, 2);
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_1A), &Global_24C34A, 18);
	func_814();
	func_799(1, 1, 0);
	func_797();
}

void func_797()//Position - 0x257C7
{
	func_798(0, 0);
}

void func_798(int iParam0, int iParam1)//Position - 0x257D5
{
	Global_24B2CE.f_16 = iParam0;
	Global_24B2CE.f_17 = iParam1;
}

void func_799(bool bParam0, bool bParam1, bool bParam2)//Position - 0x257ED
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
		func_813();
	}
	if (!bParam2)
	{
		func_802(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_801(0);
	func_800();
}

void func_800()//Position - 0x2588C
{
	struct<6> Var0;
	
	if (Global_24B2CE.f_1E4.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_24B2CE.f_1E4 = { Var0 };
	}
}

void func_801(bool bParam0)//Position - 0x258B1
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

void func_802(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x258D1
{
	if (bParam0)
	{
		if (func_812())
		{
			func_811();
		}
		Global_24B2CE.f_2BF.f_203 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_24B2CE.f_2BF.f_1F8 = iParam1;
		Global_24B2CE.f_2BF.f_1F9 = iParam2;
		Global_24B2CE.f_2BF.f_1FA = iParam10;
		func_809();
		func_806(8, 0, 0, 0, 0);
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
		func_803();
	}
}

void func_803()//Position - 0x25998
{
	if (func_812() && !func_805())
	{
		func_811();
	}
	if (func_805())
	{
		func_804();
	}
	else
	{
		func_809();
		func_806(0, 0, 0, 0, 0);
		Global_24B2CE.f_6C8 = 0;
		Global_24B2CE.f_6C7 = 0;
	}
}

void func_804()//Position - 0x259E0
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_2BF), &(Global_24B2CE.f_4C3), 516);
	Global_24B2CE.f_1E4 = { Global_24B2CE.f_1EA };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_2BF.f_203)
	{
		Global_24B2CE.f_6C7 = 0;
	}
}

int func_805()//Position - 0x25A28
{
	if ((Global_24B2CE.f_6C7 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_4C3.f_203) && SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_4C3.f_203))
	{
		return 1;
	}
	return 0;
}

void func_806(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x25A67
{
	if (Global_252F9E.f_761.f_2B2.f_10 != func_26())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[Global_252F9E.f_761.f_2B2.f_10 /*413*/].f_191, 0) && func_807())
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

int func_807()//Position - 0x25B06
{
	if (((func_346(CAM::_0xDC9DA9E8789F5246()) == 229 || func_346(CAM::_0xDC9DA9E8789F5246()) == 191) || func_808()) || func_816())
	{
		return 0;
	}
	return 1;
}

int func_808()//Position - 0x25B46
{
	if (Global_440000 == 6)
	{
		return 1;
	}
	return 0;
}

void func_809()//Position - 0x25B5B
{
	if (func_812() && !func_805())
	{
		func_811();
	}
	func_810();
	Global_24B2CE.f_2BF = 0;
}

void func_810()//Position - 0x25B84
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

void func_811()//Position - 0x25BBF
{
	if (func_805())
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

int func_812()//Position - 0x25C2D
{
	if ((Global_24B2CE.f_6C8 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_2BF.f_203) && SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_2BF.f_203))
	{
		return 1;
	}
	return 0;
}

void func_813()//Position - 0x25C6C
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_16A), &Global_24C49A, 121);
}

void func_814()//Position - 0x25C85
{
	func_815();
	Global_24B2CE.f_8C5 = 0;
}

void func_815()//Position - 0x25C99
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

bool func_816()//Position - 0x25CC5
{
	return Global_1805F4;
}

void func_817()//Position - 0x25CD1
{
	Global_26862F.f_1271 = 0;
}

void func_818()//Position - 0x25CE1
{
	if (CAM::_0xDC9DA9E8789F5246() != 4294967295)
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1 = 0;
	}
}

void func_819(int iParam0, int iParam1)//Position - 0x25CFF
{
	int iVar0;
	
	iVar0 = func_268(iParam0, func_249(iParam1), 0);
	iVar0++;
	if (!func_490(iParam0))
	{
		func_483(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_484(iParam0, iVar0, iParam1, 1);
	}
}

int func_820(int iParam0)//Position - 0x25D40
{
	return Global_1841F3[iParam0 /*790*/].f_D3.f_6;
}

int func_821(int iParam0)//Position - 0x25D55
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
			if (func_239(CAM::_0xDC9DA9E8789F5246()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_822()//Position - 0x25DB7
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
	func_825(0);
	func_824(0);
	func_823(0);
}

void func_823(int iParam0)//Position - 0x25E58
{
	if (Global_26862F.f_119B != iParam0)
	{
		Global_26862F.f_119B = iParam0;
	}
}

void func_824(bool bParam0)//Position - 0x25E75
{
	if (Global_26862F.f_119A != bParam0)
	{
		if (bParam0)
		{
		}
		Global_26862F.f_119A = bParam0;
	}
}

void func_825(int iParam0)//Position - 0x25E9A
{
	if (Global_26862F.f_1198 != iParam0)
	{
		Global_26862F.f_1198 = iParam0;
	}
}

void func_826(struct<21> Param0)//Position - 0x25EB7
{
	int iVar0;
	
	func_835(func_836(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(24);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(9);
	func_834(0, 4294967295, 0);
	func_832(129);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_110, 617);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_113, 577);
	func_831(1);
	if (!func_830())
	{
		func_782();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_110.f_11[iVar0] = func_26();
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_110.f_16[iVar0] = func_26();
				Local_110.f_100[iVar0] = 4294967295;
				Local_110.f_6E[iVar0] = 4294967295;
				iVar0++;
			}
			STATS::_0x6DEE77AFF8C21BD1(&(Local_110.f_263), &(Local_110.f_264));
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_116[iVar0] = 4294967295;
			iVar0++;
		}
		Local_111.f_2 = NETWORK::_0xCF61D4B4702EE9EB();
		Local_111.f_8 = NETWORK::_GET_POSIX_TIME();
		func_670(19, 1);
		func_827();
		if (func_198())
		{
			MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_2), 7);
		}
		Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/].f_9 = 4294967295;
		Global_26862F.f_12C7 = 4294967295;
		Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*18*/] = 0;
	}
	else
	{
		func_782();
	}
}

void func_827()//Position - 0x25FF6
{
	int iVar0;
	
	PED::ADD_RELATIONSHIP_GROUP("relUWPlayer", &iLocal_123);
	PED::ADD_RELATIONSHIP_GROUP("relUWAi", &iLocal_124);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_180824[iVar0], iLocal_123);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_123, Global_180824[iVar0]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_180824[iVar0], iLocal_124);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_124, Global_180824[iVar0]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_123, 2761840924);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2761840924, iLocal_123);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_123, Global_180854[5]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_180854[5], iLocal_123);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_123, Global_180845);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_180845, iLocal_123);
		iVar0++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_123, iLocal_124);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_124, iLocal_123);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, iLocal_124);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, iLocal_123);
	func_829(1, &iLocal_124);
	func_828(&iLocal_124);
	func_828(&iLocal_123);
}

void func_828(int iParam0)//Position - 0x260FF
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2429016672, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2429016672);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 296331235, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 296331235);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1166638144);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2037579709, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2037579709);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2017343592);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2473492219, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2473492219);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1782292358, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1782292358);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 3261945386, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 3261945386);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 3008990876, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 3008990876);
}

void func_829(int iParam0, int iParam1)//Position - 0x261F1
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, 2761840924, *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, 2761840924);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, 3822679795, *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, 3822679795);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, 4111159735, *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, 4111159735);
}

int func_830()//Position - 0x2624D
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
		if (func_777())
		{
			return 0;
		}
		if (func_775(155))
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

void func_831(bool bParam0)//Position - 0x262A6
{
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_443())
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_24DCF5.f_51B) || Global_24DCF5.f_51B == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam0)
		{
			Global_24DCF5.f_51B = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			Global_24DCF5.f_51B = 4294967295;
		}
	}
}

void func_832(int iParam0)//Position - 0x262FF
{
	func_794();
	func_833();
	func_817();
	Global_1806E7.f_4 = iParam0;
	Global_1806E7.f_5 = iParam0;
	func_669(iParam0, 4294967295);
	func_7(&(Global_1806E7.f_12), 0, 0);
	Global_26862F.f_11DE = 0;
	Global_258679[0] = func_26();
	Global_258679[1] = func_26();
	Global_258679[2] = func_26();
	Global_258679[3] = func_26();
	Global_258679[4] = func_26();
	func_793();
	if (!func_232(func_233()))
	{
		func_359();
	}
	if (func_250() && !func_245())
	{
		MISC::SET_BIT(&(Global_1806E7.f_1), 16);
	}
	else
	{
		MISC::SET_BIT(&(Global_1806E7.f_1), 17);
	}
}

void func_833()//Position - 0x263B5
{
	var uVar0;
	
	Global_180700 = uVar0;
}

int func_834(int iParam0, int iParam1, bool bParam2)//Position - 0x263C3
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_783();
			}
			else
			{
				return 0;
			}
		}
		if (!func_166())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_783();
					}
					else
					{
						return 0;
					}
				}
				if (func_777())
				{
					if (!bParam2)
					{
						func_783();
					}
					else
					{
						return 0;
					}
				}
				if (func_775(155))
				{
					if (!bParam2)
					{
						func_783();
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
					func_783();
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
				func_783();
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
			func_783();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_835(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x264D8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_783();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_10);
}

int func_836(int iParam0)//Position - 0x264F7
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

int func_837(int iParam0, bool bParam1, bool bParam2)//Position - 0x26B8D
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

